local NormalChestLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

NormalChestLogic.IsOpengingOther = function(positionId)
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local opening, isBagOpening = false, false
    local now = TimeUtil.ServerTime()
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.NormalChest then
            local myPositionId = v.itemArticle:GetPositionId()
            if myPositionId ~= positionId and now < v.itemArticle:GetSpecData(TwoMergeConfig.ItemDataKey["end"]) then
                opening = true; break
            end
        end
    end
    if not opening then
        local bagItemCount, items = AppServices.TwoMergeManager:GetBagItems(AppServices.TwoMergeMapGridManager:GetMapId())
        local now = TimeUtil.ServerTime()
        local config = AppServices.TwoMergeManager:GetItemConfig()
        for _, v in pairs(items) do
            if config[v.itemId] ~= nil and config[v.itemId].type == TwoMergeConfig.ArticleType.NormalChest then
                if v.itemData ~= nil and v.itemData["end"] ~= nil and v.itemData.pause ~= nil and v.itemData["end"] > 0 and v.itemData.pause < v.itemData["end"] then
                    opening = true; isBagOpening = true; break
                end
            end
        end
    end
    return opening, isBagOpening
end

return NormalChestLogic