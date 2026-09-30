local BaseIconButton = require "UI.Components.BaseIconButton"
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")
---@class TwoMergeBpEntrance:BaseIconButton
local TwoMergeBpEntrance = class(BaseIconButton)

function TwoMergeBpEntrance:Create(gameObject, luaparent, mapId)
    return TwoMergeBpEntrance:CreateWithGameObject(gameObject)
end

function TwoMergeBpEntrance:CreateWithGameObject(gameObject)
    local instance = TwoMergeBpEntrance.new()
    instance:InitWithGameObject(gameObject)
    return instance
end

function TwoMergeBpEntrance:InitWithGameObject(gameObject)
    self.gameObject = gameObject
    self.transform = self.gameObject.transform
    self.redPoint = find_component(self.gameObject, "redPoint")
    self.btn = find_component(self.gameObject, "btn")
    self:CheckShow()
end

function TwoMergeBpEntrance:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_GetBpReward, self.RefreshRedPoint, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.RefreshRedPoint, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Buy_BP_Success, self.RefreshRedPoint, self)
end

function TwoMergeBpEntrance:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_GetBpReward, self.RefreshRedPoint, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.RefreshRedPoint, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Buy_BP_Success, self.RefreshRedPoint, self)
end

function TwoMergeBpEntrance:CheckShow()
    local _bpCfg = AppServices.TwoMergeManager:GetBpData()
    if #_bpCfg <= 0 then
        self.gameObject:SetActive(false)
        self.redPoint.gameObject:SetActive(false)
        return
    end
    self.gameObject:SetActive(true)
    Util.UGUI_AddButtonListener(self.btn, function()
        if TutorialLogic.IsRunning() then return end
        PanelManager.showPanel(GlobalPanelEnum.UITwoMergeBpPanel, { type = 1 })
    end)
    self:AddListener()
    self:RefreshRedPoint()
end

function TwoMergeBpEntrance:RefreshRedPoint()
    local hasReward = AppServices.TwoMergeManager:GetRewardIndex() ~= nil
    if Runtime.CSNull(self.redPoint) then
        return
    end
    self.redPoint.gameObject:SetActive(hasReward)
end

function TwoMergeBpEntrance:Dispose()
    self:RemoveListener()
    BaseIconButton.Dispose(self)
end

return TwoMergeBpEntrance
