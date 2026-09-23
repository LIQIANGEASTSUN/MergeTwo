--- 订单引导
local TutorialItemOrder = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

local _mapId = nil

--- 订单引导逻辑
--- 1.订单物品足够
--- 2.合成订单物品链
--- 3.寻找点击生成物品链的生成器
--- 4.寻找合成生成器链
--- 每一步从 1 - 4 判断
TutorialItemOrder.CheckNext = function(mapId)
    _mapId = mapId
    local orderId, needInfo = TutorialItemOrder.CheckTutorialOrder()
    if orderId == nil or needInfo == nil then
        console.print(">>>  没有需要引导的订单了")
        return false
    end
    local needId = needInfo[1].itemId -- 目前仅支持订单物品: 一个物品且数量为1
    local enough = TutorialItemOrder.CheckCompleteOrder(needId)
    if enough then
        console.print(">>>  订单物品足够")
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.End)
        return false
    end

    local row1, col1, row2, col2 = TutorialItemOrder.CheckMergeOrderLink(needId)
    if row1 ~= nil then
        console.print(">>>  合成订单物品: "..row1..","..col1.." -> "..row2..","..col2)
        local position1 = TwoMergeConfig.GridIdToPos(row1, col1)
        local position2 = TwoMergeConfig.GridIdToPos(row2, col2)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.Merge, {
            position1 = position1,
            position2 = position2,
            content = Runtime.Translate("merge_guide_02"), -- 相同的物品可以合成
        })
        return true
    end

    local clickrow, clickcol = TutorialItemOrder.CheckGenerator(needId)
    if clickrow ~= nil then
        local position = TwoMergeConfig.GridIdToPos(clickrow, clickcol)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.Click, {
            position = position,
            content = Runtime.Translate("merge_guide_04"), -- 点击生成器，可生成新物品
        })
        console.print(">>>  点击生成器: "..clickrow..","..clickcol)
        return true
    end

    local row1, col1, row2, col2 = TutorialItemOrder.CheckMergeGenetorLink(needId)
    if row1 ~= nil then
        console.print(">>>  合成生成器物品: "..row1..","..col1.." -> "..row2..","..col2)
        local position1 = TwoMergeConfig.GridIdToPos(row1, col1)
        local position2 = TwoMergeConfig.GridIdToPos(row2, col2)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.Merge, {
            position1 = position1,
            position2 = position2,
            content = Runtime.Translate("merge_guide_01"), -- 拖拽物品进行合成
        })
        return true
    end

    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.End)
    console.print(">>>  无法生成需要物品: ")

    return false
end

--- 0.是否有待引导的订单
TutorialItemOrder.CheckTutorialOrder = function()
    local orderInfos = MergeConfigUtil.GetTutorialTask(_mapId)
    if orderInfos ~= nil then
        for _, orderInfo in pairs(orderInfos) do
            local orderId = orderInfo[2]
            if orderInfo[1] == 1 then
                local state = AppServices.Task:GetTaskState(orderId)
                if state == TaskState.started then
                    local needIds = AppServices.Task:GetTwoMergeNeedIdByTaskId(orderId)
                    -- "11010102" -- 汉堡二级
                    if needIds ~= nil then
                        return orderId, needIds
                    end
                end
            elseif orderInfo[1] == 2 then
                local isfinish = AppServices.TwoMergeManager:OrderGet(_mapId, orderInfo[2], TwoMergeConfig.OrderType.Fix)
                if not isfinish then
                    local config = AppServices.Meta:Category("OrderItemSetTemplate")[orderId]
                    local items = { [1] = { itemId = config.itemNumber[1], count = 1 } }
                    return orderId, items
                end
            end
        end
    end
    return nil, nil
end

--- 1.订单物品足够  只支持一个物品且数量为1
TutorialItemOrder.CheckCompleteOrder = function(needId)
    local list = {}
    table.insert(list, { itemId = needId, count = 1 })
    local enough = AppServices.TwoMergeManager:GetConsumeResult(_mapId, list)
    return enough
end

--- 2.合成订单物品链
TutorialItemOrder.CheckMergeOrderLink = function(needId)
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    local needConfig = itemConfig[needId]
    local linkId = needConfig.groupId

    return TutorialItemOrder.CheckMergeLinkId(linkId, needConfig.level)
end

--- 3.寻找点击生成物品链的生成器
TutorialItemOrder.CheckGenerator = function(needId)
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    local needConfig = itemConfig[needId]
    local linkId = tostring(needConfig.getWayParam[1])

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local row, col = nil, nil
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() and v.itemArticle:GetConfig().groupId == linkId and v.itemArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.Generator then
            row, col = v.itemArticle:GetRowCol()
            break
        end
    end
    return row, col
end

--- 4.寻找合成生成器链
TutorialItemOrder.CheckMergeGenetorLink = function(needId)
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    local needConfig = itemConfig[needId]
    local linkId = tostring(needConfig.getWayParam[1])
    return TutorialItemOrder.CheckMergeLinkId(linkId, 10)
end

TutorialItemOrder.CheckMergeLinkId = function(linkId, level)
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    local mergeTarget = {}
    for _, v in pairs(itemConfig) do
        if v.groupId == linkId and v.level <= level then
            table.insert(mergeTarget, { id = v.id, level = v.level })
        end
    end
    table.sort(mergeTarget, function(a, b) return a.level > b.level end)

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local merges = {}
    local canDrags = {}
    local row, col = 0, 0
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:GetConfig().groupId == linkId then
            local itemId = v.itemArticle:GetItemId()
            row, col = v.itemArticle:GetRowCol()
            if v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock then
                if canDrags[itemId] == nil then
                    canDrags[itemId] = { row = row, col = col }
                else
                    merges[itemId] = merges[itemId] or {}
                    table.insert(merges[itemId], { row = row, col = col })
                end
            end
            if v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Lock then
                merges[itemId] = merges[itemId] or {}
                table.insert(merges[itemId], { row = row, col = col })
            end
        end
    end

    local row1, col1, row2, col2 = nil, nil, nil, nil
    local distance, mindistance = -1, -1
    local isFinal = false
    for _, v in pairs(mergeTarget) do
        if canDrags[v.id] ~= nil and merges[v.id] ~= nil and #merges[v.id] >= 1 then
            row1 = canDrags[v.id].row
            col1 = canDrags[v.id].col

            for i = 1, #merges[v.id], 1 do
                distance = math.abs(row1 - merges[v.id][i].row) + math.abs(col1 - merges[v.id][i].col)
                if mindistance == -1 or distance < mindistance then
                    mindistance = distance
                    row2 = merges[v.id][i].row
                    col2 = merges[v.id][i].col
                end
            end
            isFinal = true
            break
        end
        if isFinal then break end
    end
    return row1, col1, row2, col2
end

return TutorialItemOrder