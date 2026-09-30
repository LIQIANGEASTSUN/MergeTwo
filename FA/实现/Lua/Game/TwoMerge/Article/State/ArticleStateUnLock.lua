
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type ArticleStateBase
local ArticleStateBase = require "Game.TwoMerge.Article.State.ArticleStateBase"

---@class ArticleStateUnLock : FsmStateBase 道具解锁状态
local ArticleStateUnLock = class(ArticleStateBase, "ArticleStateUnLock")

function ArticleStateUnLock:ctor()
    self.stateType = TwoMergeConfig.ArticleState.Unlock
    local cfg = self.article:GetConfig()
    local itemFuncs = TwoMergeConfig.FunctionMap[cfg.type]
    for _, funcType in ipairs(itemFuncs) do
        self.processFuncMap[funcType] = true
    end
end

function ArticleStateUnLock:SetAppearance()
    ArticleStateBase.SetAppearance(self)
    self.article:SetLock(false)
    self.article:GetArticleView().icon.color = Runtime.HexToRGB("FFFFFF")
end

function ArticleStateUnLock:RefreshShow()
    self.article:SetCanvasGroup(1)
    self.article:SetCloneRootShow(false)
    ArticleStateBase.RefreshShow(self)
end

--- 注册事件
function ArticleStateUnLock:AddListerer()
    ArticleStateBase.AddListerer(self)
end

--- 移除事件
function ArticleStateUnLock:RemoveListener()
    ArticleStateBase.RemoveListener(self)
end

return ArticleStateUnLock