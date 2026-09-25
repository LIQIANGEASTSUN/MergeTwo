--- 手指操作
---@class OperationLogic
local OperationLogic = {
    instanceIdDraging = -1, -- 拖拽中的道具实例id
    instanceIdSelect = -1, -- 当前选中的道具实例id
}

---@type PromptMergeLogic
local PromptMergeLogic = require "Game.TwoMerge.Logic.PromptMergeLogic"
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type UndoLogic
local UndoLogic =  require ("Game.TwoMerge.Logic.UndoLogic")
---@type TwoMergeActionQueue
local TwoMergeActionQueue = require("Game.TwoMerge.Logic.TwoMergeActionQueue")

---@param article Article
function OperationLogic:Click(article)
    UndoLogic.Clear()
    PromptMergeLogic:StopAni()
    if self:IsDraging() then
        return
    end
    local isunlockArea, taskId = AppServices.TwoMergeManager:IsUnlockArea(article:GetPositionId())
    if not isunlockArea then
        AppServices.TwoMergeManager:ShowUnlockArea(taskId)
        return
    end

    article:DOAni(TwoMergeConfig.TweenType.ClickAni)
    local instanceId = article:GetPositionId()
    App.audioManager:PlayEffectAudio(CONST.AUDIO.block_revoke) -- 点击音效
    --- 如果当前道具不在选中状态，先选中
    if not self:IsSelect(instanceId) then
        self:SetSelect(article)
        TwoMergeActionQueue.Add(TwoMergeConfig.ActionType.SelectNew)
        return
    end
    article:NotifySelf(TwoMergeConfig.ArticleEventKey.Click)

    PromptMergeLogic:ClickEvent()
end

---@param article Article
function OperationLogic:SetSelect(article)
    local preSelectId = self.instanceIdSelect
    self.instanceIdSelect = article:GetPositionId()

    MessageDispatcher:SendMessage(MessageType.TwoMergeArticleSelect, self.instanceIdSelect,preSelectId)
end

function OperationLogic:IsSelect(instanceId)
    if self.instanceIdSelect and self.instanceIdSelect == instanceId then
        return true
    end
    return false
end

function OperationLogic:GetSelect()
    return self.instanceIdSelect
end

function OperationLogic:ClearSelect()
    self.instanceIdSelect = -1
end

---@param article Article
function OperationLogic:BeginDrag(article, eventData)
    local isunlockArea, taskId = AppServices.TwoMergeManager:IsUnlockArea(article:GetPositionId())
    if not isunlockArea then
        return
    end
    UndoLogic.Clear()
    PromptMergeLogic:StopAni()
    local instanceId = article:GetPositionId()
    if not self:EnableDraging(instanceId) then
        return
    end
    self:SetDraging(instanceId)

    --- 有选中的道具，与新选择的道具不同，重置为新选择的道具
    if (not self.instanceIdSelect) or (self.instanceIdSelect ~= instanceId) then
        self:SetSelect(article)
    end
    article:NotifySelf(TwoMergeConfig.ArticleEventKey.BeginDrag, eventData)
    local articleAnimation = article:GetArticleAnimation()
    articleAnimation:ClearTween()
    PromptMergeLogic:DragBegin()
end

---@param article Article
function OperationLogic:Draging(article, eventData)
    local instanceId = article:GetPositionId()
    if not self:EnableDraging(instanceId) then
        return
    end
    article:NotifySelf(TwoMergeConfig.ArticleEventKey.Draging, eventData)
end

---@param article Article
function OperationLogic:DragEnd(article, eventData)

    local isunlockArea, taskId = AppServices.TwoMergeManager:IsUnlockArea(article:GetPositionId())
    if not isunlockArea then
        return
    end
    local instanceId = article:GetPositionId()
    if not self:EnableDraging(instanceId) then
        return
    end

    self:ClearDraging()

    article:NotifySelf(TwoMergeConfig.ArticleEventKey.DragEnd, eventData)
    article:NotifySelf(TwoMergeConfig.ArticleEventKey.DropProcess, eventData)
    PromptMergeLogic:DragEnd()
end

function OperationLogic:SetDraging(instanceId)
    self.instanceIdDraging = instanceId
end

function OperationLogic:GetDraging()
    return self.instanceIdDraging
end

function OperationLogic:IsDraging()
    return self.instanceIdDraging ~= -1
end

function OperationLogic:EnableDraging(instanceId)
    if not self:IsDraging() then
        return true
    end
    return self.instanceIdDraging == instanceId
end

function OperationLogic:ClearDraging()
    self.instanceIdDraging = -1
end

function OperationLogic:Merge(instanceId1, instanceId2, newArticle)
    if self:IsSelect(instanceId1) or self:IsSelect(instanceId2) then
        self:SetSelect(newArticle)
    end
end

function OperationLogic:OnMove(article)
    self:SetSelect(article)
end

function OperationLogic:ClearAll()
    self:ClearDraging()
    self:ClearSelect()
end

return OperationLogic