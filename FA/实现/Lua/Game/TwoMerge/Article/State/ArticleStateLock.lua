---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type ArticleStateBase
local ArticleStateBase = require "Game.TwoMerge.Article.State.ArticleStateBase"

---@class ArticleStateLock : FsmStateBase  道具锁定状态
local ArticleStateLock = class(ArticleStateBase, "ArticleStateLock")

function ArticleStateLock:ctor()
    self.stateType = TwoMergeConfig.ArticleState.Lock
    self.processFuncMap = {
        [TwoMergeConfig.FunctionType.Merge] = true
    }
end

function ArticleStateLock:SetAppearance()
    ArticleStateBase.SetAppearance(self)
    self.article:SetLock(true)
    self.article:GetArticleView().icon.color = Runtime.HexToRGB("808080")
end

function ArticleStateLock:RefreshShow()
    self.article:SetCanvasGroup(0.8)
    self.article:SetCloneRootShow(false)
    ArticleStateBase.RefreshShow(self)
end

--- 注册事件
function ArticleStateLock:AddListerer()
    ArticleStateBase.AddListerer(self)

end

--- 移除事件
function ArticleStateLock:RemoveListener()
    ArticleStateBase.RemoveListener(self)
end

return ArticleStateLock