---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")

---@class DragFunction : IFunction 拖拽功能：拖拽道具移动
local DragFunction = class(IFunction, "DragFunction")

function DragFunction:ctor()

end

function DragFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.BeginDrag, self.BeginDrag, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Draging, self.Draging, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.DragEnd, self.DragEnd, self)
end

function DragFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.BeginDrag, self.BeginDrag, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Draging, self.Draging, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.DragEnd, self.DragEnd, self)
end

function DragFunction:BeginDrag(eventData)
    self.article:SetAsLastSibling()
    return TwoMergeConfig.FunctionResult.Success
end

function DragFunction:Draging(eventData)
    local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
    self.article:SetAnchoredPos(anchoredPosition)
    return TwoMergeConfig.FunctionResult.Success
end

function DragFunction:CheckNew(eventData)
    local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
    local row, col = TwoMergeConfig.PosToGridId(anchoredPosition)
    local positionId = TwoMergeConfig.Encode(row, col)
    if self.positionId ~= positionId then
        self.positionId = positionId
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
        if article then
            
        end
    end
end

function DragFunction:DragEnd(eventData)
    local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
    self.article:SetAnchoredPos(anchoredPosition)
    return TwoMergeConfig.FunctionResult.Success
end

return DragFunction