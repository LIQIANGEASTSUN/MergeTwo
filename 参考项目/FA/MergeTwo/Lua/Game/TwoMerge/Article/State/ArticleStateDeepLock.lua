---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type ArticleStateBase
local ArticleStateBase = require "Game.TwoMerge.Article.State.ArticleStateBase"

---@class ArticleStateDeepLock : FsmStateBase  道具锁定状态
local ArticleStateDeepLock = class(ArticleStateBase, "ArticleStateDeepLock")

function ArticleStateDeepLock:ctor()
    self.stateType = TwoMergeConfig.ArticleState.DeepLock
    self.processFuncMap = {}
end

function ArticleStateDeepLock:SetAppearance()
    ArticleStateBase.SetAppearance(self)
    self.article:SetLock(false)
end

function ArticleStateDeepLock:RefreshShow()
    self.article:SetCanvasGroup(0)
    self.article:SetCloneRootShow(false)
    ArticleStateBase.RefreshShow(self)
end

--- 注册事件
function ArticleStateDeepLock:AddListerer()
    ArticleStateBase.AddListerer(self)
end

--- 移除事件
function ArticleStateDeepLock:RemoveListener()
    ArticleStateBase.RemoveListener(self)
end

return ArticleStateDeepLock