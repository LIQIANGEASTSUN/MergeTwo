---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")

---@class ReplaceFunction : IFunction 替换道具位置
local ReplaceFunction = class(IFunction, "ReplaceFunction")
---@type OperationLogic
local OperationLogic = require "Game.TwoMerge.Logic.OperationLogic"
---@type TwoMergeActionQueue
local TwoMergeActionQueue = require("Game.TwoMerge.Logic.TwoMergeActionQueue")
---@type TutorialLogic
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")

function ReplaceFunction:ctor()
end

function ReplaceFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
end

function ReplaceFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
end

function ReplaceFunction:DropProcess(eventData)
    local articleState = self.article:GetCurrentStateType()
    if articleState == TwoMergeConfig.ArticleState.DeepLock then
        return TwoMergeConfig.FunctionResult.Fail
    end
    if articleState == TwoMergeConfig.ArticleState.Lock then
        return TwoMergeConfig.FunctionResult.Fail
    end

    local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
    local gridRow, gridCol = TwoMergeConfig.PosToGridId(anchoredPosition)

    --- Grid 地格
    local grid = AppServices.TwoMergeMapGridManager:GetSingleGrid(gridRow, gridCol)
    if grid then
        local result = self:CheckToGrid(grid, gridRow, gridCol)
        TwoMergeActionQueue.Add(TwoMergeConfig.ActionType.GridChanged)
        return result
    else
        return self:CheckToBag(eventData)
    end
end

--- Replace In Grid Begin -----------------------------------------------------------------------------
function ReplaceFunction:CheckToGrid(grid, gridRow, gridCol)
    if grid:GetState() ~= TwoMergeConfig.GridState.UnLock then
        local row, col = self.article:GetRowCol()
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    self.dropOtherArticle = AppServices.TwoMergeMapGridManager:FindItemArticle(gridRow, gridCol)
    if not self.dropOtherArticle then
        self:ChangeEmptyGrid(self.article, gridRow, gridCol)
        OperationLogic:OnMove(self.article)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_OnMove)
        return TwoMergeConfig.FunctionResult.SuccessAndAbort
    end

    if self.dropOtherArticle:IsMoving() then
        local row, col = self.article:GetRowCol()
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    if self.article:GetInstanceId() == self.dropOtherArticle:GetInstanceId() or self.dropOtherArticle:IsDelete() then
        local row, col = self.article:GetRowCol()
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.SuccessAndAbort
    end

    self:ChangeOtherArticleGrid(self.dropOtherArticle)
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_OnMove)
    return TwoMergeConfig.FunctionResult.SuccessAndAbort
end

function ReplaceFunction:ChangeEmptyGrid(targetArticle, toRow, toCol)
    local articleRow, articleCol = targetArticle:GetRowCol()
    targetArticle:FlyToGrid(toRow, toCol, TwoMergeConfig.FlyMoveType.ReplaceMove)
    AppServices.TwoMergeMapGridManager:ReplaceArticle(articleRow, articleCol, toRow, toCol)
end

---@param otherArticle Article
function ReplaceFunction:ChangeOtherArticleGrid(otherArticle)
    local articleRow, articleCol = self.article:GetRowCol()
    local otherArticleRow, otherArticleCol = otherArticle:GetRowCol()
    
    self.article:FlyToGrid(otherArticleRow, otherArticleCol, TwoMergeConfig.FlyMoveType.ReplaceMove)
    otherArticle:FlyToGrid(articleRow, articleCol, TwoMergeConfig.FlyMoveType.ReplaceMove)
    AppServices.TwoMergeMapGridManager:ReplaceArticle(articleRow, articleCol, otherArticleRow, otherArticleCol)
    OperationLogic:OnMove(self.article)
end
--- Replace In Grid End -----------------------------------------------------------------------------

--- Replace To Bag Begin -----------------------------------------------------------------------------
function ReplaceFunction:CheckToBag(eventData)
    local row, col = self.article:GetRowCol()
    if TutorialLogic.IsRunning() then
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end
    if not self.bagWidthHalf then
        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
        self.btn_bagRect = find_component(panel.btn_bag.gameObject, "", RectTransform)
        local rect = self.btn_bagRect.rect
        self.bagWidthHalf = rect.width * 0.5
        self.bagHeightHalf = rect.height * 0.5
    end
    local articleState = self.article:GetCurrentStateType()

    if articleState == TwoMergeConfig.ArticleState.Bubble then
        local content = Runtime.Translate("merge_system_13") -- t: 气泡无法放入背包
        UITool.ShowContentTipAni(content)
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    if articleState ~= TwoMergeConfig.ArticleState.Unlock then
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    local anchored = GameUtil.ScreenToUISpace(self.btn_bagRect, eventData.position)
    if anchored.x < self.bagWidthHalf * -1 or self.bagWidthHalf < anchored.x then
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    if anchored.y < self.bagHeightHalf * -1 or self.bagHeightHalf < anchored.y then
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    -- console.error("判断背包道具个数，如果可以放入背包，则将道具 放入背包")
    -- 判断背包道具个数，如果可以放入背包，则将道具 放入背包
    local succ, position = AppServices.TwoMergeManager:GetOneBagGrid(AppServices.TwoMergeMapGridManager:GetMapId())
    if not succ then
        self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        return TwoMergeConfig.FunctionResult.Fail
    end

    AppServices.TwoMergeManager:GridToBag(AppServices.TwoMergeMapGridManager:GetMapId(), self.article)
    AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.MoveToBag)
    OperationLogic:ClearSelect()
    TwoMergeActionQueue.Add(TwoMergeConfig.ActionType.GridToBag)

    return TwoMergeConfig.FunctionResult.SuccessAndAbort
end
--- Replace To Bag End -----------------------------------------------------------------------------

return ReplaceFunction