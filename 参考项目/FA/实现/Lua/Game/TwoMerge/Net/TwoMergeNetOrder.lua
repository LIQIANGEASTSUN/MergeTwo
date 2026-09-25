local TwoMergeNetOrder = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
local threecleareneryitem = require("UI.ThreeClearPackPanel.View.UI.ThreeClearEneryItem")

TwoMergeNetOrder.GetNetData = function(mapId)
    return AppServices.TwoMergeManager:GetNetData(mapId)
end

TwoMergeNetOrder.OrderGet = function(mapId, orderId, orderType)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    if netData == nil then return false end
    if orderType == TwoMergeConfig.OrderType.Sub then
        local orders = netData.orders
        return orders[orderId] or false
    elseif orderType == TwoMergeConfig.OrderType.Fix then
        local orders = netData.fixOrderIds
        return orders[orderId] or false
    end
end

--- 支线订单提交
TwoMergeNetOrder.OrderSubmit = function(mapId, orderId, orderType, endtime, list, callback, animationDataCB)
    local enough, usePositions, useQueues = TwoMergeNetOrder.GetConsumeResult(mapId, list)
    if enough then
        local gridInfos, waitItems = {}, {}
        for _, positionId in pairs(usePositions) do
            local data = DataPack.CreateNullData(TwoMergeConfig.Decode(positionId))
            table.insert(gridInfos, data)
        end
        for _, itemId in pairs(useQueues) do
            table.insert(waitItems, itemId)
        end

        Runtime.InvokeCbk(animationDataCB, usePositions, useQueues, gridInfos, waitItems)
        local isRunning = AppServices.TwoMergeMapGridManager:IsRunning()
        local func = function(succ, useGrids)
            if succ then
                local grids = TwoMergeNetOrder.GetNetData(mapId).grids
                local bags = TwoMergeNetOrder.GetNetData(mapId).bags
                for _, data in pairs(gridInfos) do
                    if TwoMergeConfig.IsBagGrid(data.row, data.col) then
                        bags[data.position] = data
                    else
                        grids[data.position] = data
                        if isRunning then --- 棋盘数据设置
                            AppServices.TwoMergeMapGridManager:RemoveArticle(data.row, data.col, TwoMergeConfig.ArticleRemoveType.UseItem)
                        end
                    end
                end
                --- 队列删除
                for _, itemId in pairs(useQueues) do
                    AppServices.TwoMergeManager:QueueRemove(mapId, itemId)
                end
            end
            Runtime.InvokeCbk(callback, succ, useGrids, gridInfos, waitItems)
        end
        TwoMergeNetOrder.TwoMergeSubmitOrderRequest(mapId, orderId, orderType, gridInfos, waitItems, endtime, func)
    end
end

TwoMergeNetOrder.GetConsumeResult = function(mapId, list)
    local usePositions, useQueues = {}, {}
    local enough = true
    local needlist = TwoMergeNetOrder.MergeCount(list)
    for _, v in pairs(needlist) do
        local curcount, positions, qCount = TwoMergeNetOrder.GetItemCount(mapId, v.itemId)

        local itemId = v.itemId
        local totalCount = v.count
        local createCount = 0

        for i = 1, #positions do
            if createCount >= totalCount then break end
            createCount = createCount + 1
            table.insert(usePositions, positions[i])
        end

        for i = 1, qCount do
            if createCount >= totalCount then break end
            createCount = createCount + 1
            table.insert(useQueues, itemId)
        end

        if createCount < totalCount then enough = false end
    end
    return enough, usePositions, useQueues
end

TwoMergeNetOrder.MergeCount = function(list)
    local dic = {}
    for _, v in pairs(list) do
        dic[v.itemId] = (dic[v.itemId] or 0) + v.count
    end
    local newlist = {}
    for itemId, count in pairs(dic) do
        table.insert(newlist, { itemId = itemId, count = count })
    end
    return newlist
end

--- 棋盘 + 队列  item的数量
TwoMergeNetOrder.GetItemCount = function(mapId, itemId)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    if netData == nil then return 0 end

    itemId = tostring(itemId)
    local count = 0
    local positionIds = {} -- 棋盘positionId列表
    local queueCount = 0 -- 箱子队列中的数量
    --- 棋盘
    if AppServices.TwoMergeMapGridManager:IsRunning() then
        local grids = AppServices.TwoMergeMapGridManager:GetMapDataList()
        for _, grid in pairs(grids) do
            --- 已解锁 Id相同
            if grid.itemArticle and grid.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock and grid.itemArticle:GetItemId() == itemId then
                count = count + 1
                table.insert(positionIds, grid.itemArticle:GetPositionId())
            end
        end
    else
        local grids = TwoMergeNetOrder.GetNetData(mapId).grids
        for _, gridData in pairs(grids) do
            --- 已解锁 Id相同
            if gridData.itemId == itemId and gridData.state == TwoMergeConfig.ArticleState.Unlock and gridData.itemState == TwoMergeConfig.ArticleState.Unlock then
                count = count + 1
                table.insert(positionIds, gridData.position)
            end
        end
    end
    --- 背包格子
    local bags = TwoMergeNetOrder.GetNetData(mapId).bags
    for _, bagData in pairs(bags) do
        --- 已解锁 Id相同
        if bagData.itemId == itemId then
            count = count + 1
            table.insert(positionIds, bagData.position)
        end
    end

    --- 队列中的物品不再能提交订单
    -- --- 队列
    -- local queue = TwoMergeNetOrder.GetNetData(mapId).queue
    -- for _, id in pairs(queue) do
    --     if itemId == id then
    --         count = count + 1
    --         queueCount = queueCount + 1
    --     end
    -- end
    return count, positionIds, queueCount
end

--- 支线订单提交 orderType: 0配置表订单  1自定义随机订单
TwoMergeNetOrder.TwoMergeSubmitOrderRequest = function(mapId, orderId, orderType, gridInfos, waitItems, endtime, callback)
    local function funcSuccessCbk(response)
        -- 订单完成状态
        local netData = TwoMergeNetOrder.GetNetData(mapId)
        local orders = netData.orders
        orders[orderId] = true

        local grids = {}
        for _, v in pairs(gridInfos) do table.insert(grids, { row = v.row, col = v.col, itemId = v.itemId }) end
        -- 固定位置订单组cd设置为0
        if response.groupId ~= nil and response.groupId ~= 0 then
            TwoMergeNetOrder.SetPositionOrderCD(mapId, response.groupId, 0)
        end
        -- 服务器返回的订单奖励 -- TwoMergeOrderItem 发奖
        -- local rewards = Net.Converter.ConvertArray(response.items) or {}
        -- if #rewards > 0 then
        --     for _, reward in pairs(rewards) do
        --         AppServices.User:AddItem(reward.itemTemplateId, reward.count)
        --     end
        -- end
        -- 自定义正常随机
        if orderType == TwoMergeConfig.OrderType.RandomCommon then
            netData.randomOrderCD.difficultEnd = endtime
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrder_GMInfo)
        end
        -- 固定订单记录
        if orderType == TwoMergeConfig.OrderType.Fix then
            netData.fixOrderIds[orderId] = true
        end
        -- 自定义订单
        if netData.randomOrders[orderId] ~= nil then
            netData.randomOrders[orderId] = nil
        end
        Runtime.InvokeCbk(callback, true, grids)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Order_Submit_Success, orderId)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end

    local netOrderType = 0 -- 第一版订单
    if orderType == TwoMergeConfig.OrderType.RandomCommon or orderType == TwoMergeConfig.OrderType.RandomSimple then
        netOrderType = 1 -- 自定义随机订单
    elseif orderType == TwoMergeConfig.OrderType.Fix then
        netOrderType = 2 -- 配置的固定订单
    end
    local params = {
        cfgId = mapId,
        orderId = orderId,
        gridInfos = gridInfos,
        waitItems = waitItems,
        orderType = netOrderType,
        endTime = endtime,
    }
    Net.Twomergemodulemsg_30207_TwoMergeSubmitOrder_Request(params, funcFailedCbk, funcSuccessCbk)
end

--- 自定义订单  新增一个订单
TwoMergeNetOrder.TwoMergeRandomOrderRequest = function(mapId, orderInfo, endtime, issimple, callback)
    local function funcSuccessCbk(response)
        local netData = TwoMergeNetOrder.GetNetData(mapId)
        netData.randomOrders[orderInfo.orderId] = orderInfo
        if endtime ~= 0 then
            netData.randomOrderCD.difficultEnd = endtime
        end
        if issimple then
            netData.randomOrderCD.simpleNum = netData.randomOrderCD.simpleNum + 1
        end
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrder_GMInfo)
        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
    end
    local params = {
        cfgId = mapId,
        orderInfo = orderInfo,
        endTime = endtime,
    }
    console.print(">>>  my  请求   创建新订单  >>>>>  "..console.GetTableStr(orderInfo))
    Net.Twomergemodulemsg_30213_TwoMergeRandomOrder_Request(params, funcFailedCbk, funcSuccessCbk)
end
--- 自定义订单  刷新cd
TwoMergeNetOrder.TwoMergeRandomOrderCDRequest = function(mapId, endtime, callback)
    local function funcSuccessCbk(response)
        local netData = TwoMergeNetOrder.GetNetData(mapId)
        netData.randomOrderCD.simpleEnd = endtime
        netData.randomOrderCD.simpleNum = 0
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrder_GMInfo)
        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
    end
    local params = {
        cfgId = mapId,
        endTime = endtime,
    }
    Net.Twomergemodulemsg_30214_TwoMergeRandomOrderCD_Request(params, funcFailedCbk, funcSuccessCbk)
end

TwoMergeNetOrder.GetDefineOrder = function(mapId, type)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    local list = {}
    if netData ~= nil then
        if type == TwoMergeConfig.OrderType.RandomSimple then
            for _, v in pairs(netData.randomOrders) do
                if math.modf( tonumber(v.orderId) / TwoMergeConfig.OrderIdRate ) == 1 then
                    table.insert(list, v)
                end
            end
        elseif type == TwoMergeConfig.OrderType.RandomCommon then
            for _, v in pairs(netData.randomOrders) do
                if math.modf( tonumber(v.orderId) / TwoMergeConfig.OrderIdRate ) == 2 then
                    table.insert(list, v)
                end
            end
        end
    end
    return list
end
-- .simpleEnd  .simpleNum  .difficultEnd
TwoMergeNetOrder.GetDefineOrderInfo = function(mapId)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    if netData ~= nil then
        return netData.randomOrderCD
    end
    return nil
end

--- 订单组  获取结束cd时间
TwoMergeNetOrder.GetPositionOrderInfo = function(mapId, groupId)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    if netData == nil then return nil end
    local info = netData.positionOrders[groupId] or {}
    return info.lastFinishId or 0, info.cdEndTime or 0
end
TwoMergeNetOrder.SetPositionOrderCD = function(mapId, groupId, cdEndTime)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    if netData ~= nil then
        netData.positionOrders[groupId] = netData.positionOrders[groupId] or {}
        netData.positionOrders[groupId].cdEndTime = cdEndTime
    end
end
TwoMergeNetOrder.SetPositionOrderInfo = function(mapId, groupId, lastFinishId, cdEndTime)
    local netData = TwoMergeNetOrder.GetNetData(mapId)
    if netData ~= nil then
        netData.positionOrders[groupId] = netData.positionOrders[groupId] or {}
        netData.positionOrders[groupId].lastFinishId = lastFinishId
        netData.positionOrders[groupId].cdEndTime = cdEndTime
    end
end

return TwoMergeNetOrder