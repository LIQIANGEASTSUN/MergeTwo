local TwoMergeNetBag = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"

local Max_Cache = {}

--- 获取背包物品
TwoMergeNetBag.GetBagItems = function(mapId)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    local defaultCount = TwoMergeNetBag.GetBagOriginCount(mapId)
    local extraCount = netData.extra
    local bagItemCount = defaultCount + extraCount -- 拥有格子数量
    local items = {}
    local bags = netData.bags
    for i = TwoMergeConfig.defaultStartPosition, TwoMergeConfig.defaultStartPosition + bagItemCount, 1 do
        if bags[i] ~= nil then
            table.insert(items, bags[i])
        else
            table.insert(items, {
                itemId = "",
                position = i,
                count = 1,
            })
        end
    end
    return bagItemCount, items
end

--- 触发解锁格子
TwoMergeNetBag.UnlockBagGrid = function(mapId, gridIndex)
    local cfg = AppServices.Meta:Category("MergeTwoWarehouseTemplate")
    local curBagCfg = nil
    for _, v in pairs(cfg) do
        if v.activity == mapId and  v.latticeNum == gridIndex then
            curBagCfg = v
            break
        end
    end
    if curBagCfg == nil then
        console.error( "没有找到背包配置 index == " .. gridIndex .. " mapId == " .. mapId )
        return
    end

    local uses = {}
    local priceTable = curBagCfg.price
    for k, v in pairs(priceTable) do
        table.insert(uses, { id = v[1], count = v[2] })
    end

    local isCanUnlock = true
    for _, v in pairs(uses) do
        local count = AppServices.User:GetItemAmount(v.id)
        if count < v.count then
            isCanUnlock = false
            --UITool.ShowContentTipAni("t: 货币不足")
            --UITool.ShowContentTipAni(Runtime.Translate("UI_team_flowtips1"))
            MergeUtil.CurrencyNotEnough(tostring(v.id))
            break
        end 
    end

    if not isCanUnlock then return end

        TwoMergeNetBag.TwoMergeOpenGridRequest(mapId, function(succ)
        if succ then
            for _, v in pairs(uses) do
                AppServices.User:UseItem(v.id, v.count, ItemGetMethod.TwoMergeOpenBagGrid)
            end
            MessageDispatcher:SendMessage(MessageType.TwoMergeBagUpdateData)
        end
    end)
end

--- 解锁格子请求
TwoMergeNetBag.TwoMergeOpenGridRequest = function(mapId, callback)
    local function funcSuccessCbk(response)
        local netData = AppServices.TwoMergeManager:GetNetData(mapId)
        netData.extra = netData.extra + 1 -- 额外开格子的数量
        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        cfgId = mapId,
    }
    Net.Twomergemodulemsg_30205_TwoMergeOpenGrid_Request(params, funcFailedCbk, funcSuccessCbk)
end

--- 背包 -> 格子
TwoMergeNetBag.BagToGrid = function(mapId, mapData)
    local row, col = AppServices.TwoMergeMapGridManager:FindDropGrid(4, 5)
    if row ~= nil then
        local netData = AppServices.TwoMergeManager:GetNetData(mapId)
        local bagPosition = mapData.position
        local bags = netData.bags
        -- 判断要挪动的背包位置是否有东西
        if bags[bagPosition] ~= nil and not string.isEmpty(bags[bagPosition].itemId) then
            mapData.row = row; mapData.col = col
            mapData.position = TwoMergeConfig.Encode(row, col)
            local article = AppServices.TwoMergeManager:CreateArticle(mapData)

            if TwoMergeConfig.NeedEndTime(article:GetConfig().type) then
                -- 重新计算结束时间
                local pauseTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["pause"])
                local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
                article:SetSpecData(TwoMergeConfig.ItemDataKey["end"], TimeUtil.ServerTime() + endTimeStamp - pauseTimeStamp)
            end

            AppServices.TwoMergeMapGridManager:AddArticle(row, col, article)
            TwoMergeNetBag.BagRemove(mapId, TwoMergeConfig.Decode(bagPosition))
            article:RefreshShow()
    
            MessageDispatcher:SendMessage(MessageType.TwoMergeBagUpdateData, { position = bagPosition })
        end
    end
end

--- 格子 -> 背包
TwoMergeNetBag.GridToBag = function(mapId, article)
    local succ, position = TwoMergeNetBag.GetOneBagGrid(mapId)
    if succ then
        if TwoMergeConfig.NeedEndTime(article:GetConfig().type) then
            article:SetSpecData(TwoMergeConfig.ItemDataKey["pause"], TimeUtil.ServerTime()) -- 设置暂停时间
        end
        local data = DataPack.ArticleToData(article)
        data.position = position
        TwoMergeNetBag.BagAdd(mapId, data)
    end
end

--- 获取一个空的背包position  false没有空格子
TwoMergeNetBag.GetOneBagGrid = function(mapId)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    local defaultCount = TwoMergeNetBag.GetBagOriginCount(mapId)
    local extraCount = netData.extra
    local totalCount = defaultCount + extraCount
    local bags = netData.bags
    for i = TwoMergeConfig.defaultStartPosition, TwoMergeConfig.defaultStartPosition + totalCount - 1, 1 do
        if bags[i] == nil or bags[i].itemId == "" then
            return true, i
        end
    end
    return false
end

TwoMergeNetBag.BagRemove = function(mapId, row, col)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    local cache_bags = netData.cache_bags
    local bags = netData.bags
    local position = TwoMergeConfig.Encode(row, col)
    bags[position] = {
        position = position,
        itemId = "",
        count = 0,
        itemData = "",
        state = 0,
    }
    cache_bags[position] = true
end

TwoMergeNetBag.BagAdd = function(mapId, gridData)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    local cache_bags = netData.cache_bags
    local bags = netData.bags
    bags[gridData.position] = gridData
    cache_bags[gridData.position] = true
end

TwoMergeNetBag.GetBagOriginCount = function(mapId)
    if Max_Cache[mapId] == nil then

        local config = AppServices.Meta:Category("MergeTwoWarehouseTemplate")
        local count = 0
        for _, v in pairs(config) do
            if v.activity == mapId and #v.price == 0 then
                count = count + 1
            end
        end

        Max_Cache[mapId] = count
    end
    return Max_Cache[mapId]
end

return TwoMergeNetBag