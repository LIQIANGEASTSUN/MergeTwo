--- 拖动到xx上
---@class DropProcessLogic
local DropProcessLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

function DropProcessLogic:GetDropArticle(article, eventData)
    local dropOtherArticle = nil
    local articleState = article:GetCurrentStateType()
    if articleState ~= TwoMergeConfig.ArticleState.Unlock then
        return dropOtherArticle
    end

    if Runtime.CSNull(self.parentRect) then
        local parent = AppServices.TwoMergeManager:GetArticleParent()
        self.parentRect = find_component(parent.gameObject, "", RectTransform)
    end
    local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
    local gridRow, gridCol = TwoMergeConfig.PosToGridId(anchoredPosition)

 
    --- Grid 地格
    local grid = AppServices.TwoMergeMapGridManager:GetSingleGrid(gridRow, gridCol)
    if (not grid) or grid:GetState() == TwoMergeConfig.GridState.DeepLock then
        return dropOtherArticle
    end

    dropOtherArticle = AppServices.TwoMergeMapGridManager:FindItemArticle(gridRow, gridCol)
    --- 还原位置
    if dropOtherArticle == nil or article:GetInstanceId() == dropOtherArticle:GetInstanceId() then
        dropOtherArticle = nil
    end

    return dropOtherArticle
end

return DropProcessLogic