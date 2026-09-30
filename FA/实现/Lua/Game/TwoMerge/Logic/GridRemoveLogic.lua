--- 格子 Article 从 "有" 变为 "无"  不一定是删除
local GridRemoveLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

--- 触发: 格子变为空
GridRemoveLogic.TriggerToNull = function(row, col, deleteType)
    GridRemoveLogic.private_CheckRemove(row, col)
end

--- 地格物品Remove检测
GridRemoveLogic.private_CheckRemove = function(row, col)
    for i = row - 1, row + 1 do
        for j = col - 1, col + 1 do
            if  GridRemoveLogic.private_TriggerAutoGenerator(i, j) then
                return
            end
        end
    end
end

--- 被动生成器检测
GridRemoveLogic.private_TriggerAutoGenerator = function(row, col)
    local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
    if article ~= nil and article:GetItemArticleType() == TwoMergeConfig.ArticleType.AutoGenerator then
        local AutoGeneratorFunction = article:GetFunction(TwoMergeConfig.FunctionType.AutoGenerator)
        AutoGeneratorFunction:AutoClick()
    end
end

return GridRemoveLogic