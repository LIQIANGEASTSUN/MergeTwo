--- Article 删除操作
local ArticleDeleteLogic = {}

---@type DataPack
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

--- 触发: 格子上的item清除
ArticleDeleteLogic.TriggerDelete = function(row, col, itemId, deleteType, deleteInfo)
    --- 目前只有生成器次数达到 触发物品变更
    if deleteType == TwoMergeConfig.ArticleRemoveType.GeneratorCountEnd then
        ArticleDeleteLogic.CheckChange(row, col, itemId)
    end
    --- 克隆气泡  只要删除就会触发生成
    if deleteInfo.itemState == TwoMergeConfig.ArticleState.Bubble then
        ArticleDeleteLogic.CloneRubbish(row, col)
    end
    if deleteType == TwoMergeConfig.ArticleRemoveType.GeneratorCountEnd then
        AppServices.TwoMergeManager:PlayEffect("effect_erhe_sui", 2, TwoMergeConfig.GridIdToPos(row, col))
    end
end

--- 生成克隆垃圾
ArticleDeleteLogic.CloneRubbish = function(row, col)
    local itemId = TwoMergeConfig.GetCloneFailOutput(row, col)
    if itemId ~= nil then
        local data = DataPack.CreateItemData(tostring(itemId), row, col)
        local newArticle = AppServices.TwoMergeManager:CreateArticle(data)
        AppServices.TwoMergeMapGridManager:AddArticle(row, col, newArticle)
    end
end

--- 检测删除后的变更
ArticleDeleteLogic.CheckChange = function(row, col, itemId)
    local config = AppServices.TwoMergeManager:GetItemConfig()[itemId]
    if config ~= nil and not string.isEmpty(config.change) then
        local generateItemId = config.change
        local data = DataPack.CreateItemData(generateItemId, row, col)
        local article = AppServices.TwoMergeManager:CreateArticle(data)
        AppServices.TwoMergeMapGridManager:AddArticle(row, col, article)
    end
end

return ArticleDeleteLogic