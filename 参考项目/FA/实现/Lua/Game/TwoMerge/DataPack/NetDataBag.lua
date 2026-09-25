local NetDataBag = {}
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

NetDataBag.GridToBag = function(mapId, mapData)

end

NetDataBag.BagToGrid = function(mapId, mapData)
    local row, col = AppServices.TwoMergeMapGridManager:FindDropGrid(4, 5)
    if row ~= nil then
        local bagPosition = mapData.position
        local bags = AppServices.TwoMergeManager:GetDataBags()
        -- 判断要挪动的背包位置是否有东西
        if bags[bagPosition] ~= nil and not string.isEmpty(bags[bagPosition].itemId) then
            mapData.row = row; mapData.col = col
            mapData.position = TwoMergeConfig.Encode(row, col)
            local article = AppServices.TwoMergeManager:CreateArticle(mapData)
            AppServices.TwoMergeMapGridManager:AddArticle(row, col, article)
            NetDataBag.BagRemove(mapId, TwoMergeConfig.Decode(bagPosition))
    
            MessageDispatcher:SendMessage(MessageType.TwoMergeBagUpdateData, { position = bagPosition })
        end
    end
end

NetDataBag.BagRemove = function(mapId, row, col)
    local bags = AppServices.TwoMergeManager:GetDataBags()
    local position = TwoMergeConfig.Encode(row, col)
    bags[position] = {
        position = position,
        itemId = "",
        count = 0,
        itemData = "",
        state = 0,
    }
end


function TwoMergeManager:BagAdd(mapId, gridData)
    local bags = self.netData[mapId].bags
    bags[gridData.position] = gridData
    self.bag_dirtys[gridData.position] = true
end

return NetDataBag