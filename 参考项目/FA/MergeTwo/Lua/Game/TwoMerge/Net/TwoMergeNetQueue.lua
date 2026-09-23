local TwoMergeNetQueue = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

TwoMergeNetQueue.QueueGet = function(mapId)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    if netData == nil then return 0 end
    local queue = netData.queue
    return #queue, queue[#queue]
end
TwoMergeNetQueue.QueueUse = function(mapId, params)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    local queue = netData.queue
    local itemId = queue[#queue]
    if itemId ~= nil then

        local row, col = AppServices.TwoMergeMapGridManager:FindDropGrid(4, 5)
        if row ~= nil then

            local gridData = DataPack.CreateItemData(itemId, row, col)
            local serverData = DataPack.DataToServerData(gridData)
            TwoMergeNetQueue.UseTwoMergeItemRequest(mapId, itemId, serverData, function(succ)
                if succ then
                    --- 使用道具  直接修改本地数据
                    local data = DataPack.CreateItemData(itemId, row, col)
                    local net = AppServices.TwoMergeManager:GetNetData(mapId)
                    local grids = net.grids
                    local positionId = TwoMergeConfig.Encode(row, col)
                    grids[positionId] = data

                    local newArticle = AppServices.TwoMergeManager:CreateArticle(data)
                    AppServices.TwoMergeMapGridManager:AddArticle(row, col, newArticle)
                    local time, efftime = newArticle:FlyFromPosition(params.startPosition, row, col, TwoMergeConfig.FlyMoveType.CreateMove)
                    newArticle:DOAni(TwoMergeConfig.TweenType.GenerateCreate)
                    -- AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_shengcheng", 2, TwoMergeConfig.GridIdToPos(row, col), nil, efftime)

                    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_QueueUse_Succ, itemId)
                end
            end)
        else
            UITool.ShowContentTipAni(Runtime.Translate("merge_system_11"))
        end
    end
end

TwoMergeNetQueue.QueueAdd = function(mapId, itemId, count)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    if netData == nil then return end

    local queue = netData.queue
    for i = 1, count do
        table.insert(queue, tostring(itemId))
    end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_QueueAdd)
end

TwoMergeNetQueue.QueueRemove = function(mapId, itemId)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    if netData == nil then return end

    local queue = netData.queue
    local count = #queue
    for i = count, 1, -1 do
        if queue[i] == itemId then
            table.remove(queue, i)
            break
        end
    end
    -- for index, id in pairs(queue) do
    --     if itemId == id then
    --         table.remove(queue, index)
    --         break
    --     end
    -- end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_QueueRemove)
end
TwoMergeNetQueue.QueueHasGenerator = function(mapId)
    local netData = AppServices.TwoMergeManager:GetNetData(mapId)
    if netData == nil then return false end
    local queue = netData.queue
    for _, itemId in pairs(queue) do
        if MergeConfigUtil.IsGeneratorLink(itemId) then
            return true
        end
    end
    return false
end
--- 使用队列中的道具
TwoMergeNetQueue.UseTwoMergeItemRequest = function(mapId, itemId, gridData, callback)
    local function funcSuccessCbk(response)
        local netData = AppServices.TwoMergeManager:GetNetData(mapId)
        --- 删除
        local queue = netData.queue
        table.remove(queue, #queue)

        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        cfgId = mapId,
        gridInfo = gridData,
        itemId = itemId,
    }
    Net.Twomergemodulemsg_30203_UseTwoMergeItem_Request(params, funcFailedCbk, funcSuccessCbk)
end

return TwoMergeNetQueue