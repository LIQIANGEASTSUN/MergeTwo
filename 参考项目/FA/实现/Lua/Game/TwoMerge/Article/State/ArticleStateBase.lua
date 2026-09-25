---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type ObserverSelf
local ObserverSelf = require "Utils.ObserverSelf"

---@type FsmStateBase
local FsmStateBase = require "Game.FsmStateMachine.FsmStateBase"

---@class ArticleStateBase : FsmStateBase
local ArticleStateBase = class(FsmStateBase, "ArticleStateBase")

function ArticleStateBase:ctor(article)
    ---@type Article
    self.article = article
    self.processFuncMap = {}
end

function ArticleStateBase:Init()
    self:InitObserver()
    self:CaluclateAnchorPos()
end

function ArticleStateBase:OnEnter()
    self:SetAppearance()
    self:RefreshShow()
    self:AddListerer()
end

function ArticleStateBase:OnExit()
    self:RemoveListener()
end

function ArticleStateBase:SetAppearance()
    local config = self.article:GetConfig()
    self.article:SetSprite(config.icon)
end

function ArticleStateBase:InitObserver()
    ---@type ObserverSelf
    self.Observer = ObserverSelf.new()
end

function ArticleStateBase:CaluclateAnchorPos()
    local row, col = self.article:GetRowCol()
    local anchoredPosition = TwoMergeConfig.GridIdToPos(row, col)
    self.article:SetAnchoredPos(anchoredPosition)
end

function ArticleStateBase:RefreshShow()
    self:CheckAreaUnlock()
end

function ArticleStateBase:CheckAreaUnlock()
    if not AppServices.TwoMergeManager:IsUnlockArea(self.article:GetPositionId()) then
        self.article:SetCanvasGroup(0)
    end
end

--- 注册事件
function ArticleStateBase:AddListerer()
    self:RegisterEvent(TwoMergeConfig.ArticleEventKey.RefreshShow, self.RefreshShow, self)
    local funcMap = self.article:GetAllFunction()
    for _, funcInfo in pairs(funcMap) do
        if self.processFuncMap[funcInfo.funcType] then
            funcInfo.func:RegisterSelfEvent(self)
        end
    end
end

--- 移除事件
function ArticleStateBase:RemoveListener()
    self:RemoveEvent(TwoMergeConfig.ArticleEventKey.RefreshShow, self.RefreshShow, self)
    local funcMap = self.article:GetAllFunction()
    for _, funcInfo in pairs(funcMap) do
        if self.processFuncMap[funcInfo.funcType] then
            funcInfo.func:UnRegisterSelfEvent(self)
        end
    end
end

--- 添加事件到 Observer
function ArticleStateBase:RegisterEvent(key, callback, observer)
    self.Observer:Register(key, callback,  observer)
end

--- 从 Observer 移除事件
function ArticleStateBase:RemoveEvent(key, callback, observer)
    self.Observer:Remove(key, callback, observer)
end

--- Observer 通知注册的事件
function ArticleStateBase:NotifySelf(key, ...)
    self.Observer:Notify(key, TwoMergeConfig.FunctionResult.SuccessAndAbort, ...)
end

return ArticleStateBase