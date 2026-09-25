local BaseIconButton = require "UI.Components.BaseIconButton"

---@class TwoMergeButton:BaseIconButton
local TwoMergeButton = class(BaseIconButton, "TwoMergeButton")

function TwoMergeButton.Create(mapId, isleft)
    local gameObject = BResource.InstantiateFromAssetName(CONST.ASSETS.G_UI_TWOMERGE_BUTTON)
    local instance = TwoMergeButton.new()
    instance:InitWithGameObject(gameObject, isleft)
    instance.mapId = mapId
    return instance
end

function TwoMergeButton:ctor() end

function TwoMergeButton:InitWithGameObject(go, isleft)
    self.gameObject = go
    self:RegisterListener()
    self.isguide = false

    self.root = find_component(self.gameObject, "root")
    self.leftroot = find_component(self.gameObject, "rootleft", RectTransform)
    self.rightroot = find_component(self.gameObject, "rootright", RectTransform)
    if isleft then self.root.transform:SetParent(self.leftroot)
    else self.root.transform:SetParent(self.rightroot)
    end
    self.root.transform.localPosition = Vector3.zero

    Util.UGUI_AddButtonListener(self.gameObject, function() self:OnClick() end, {noAudio = true})
    --- 倒计时
    self.timerlabel = find_component(self.root, "timer/timerlabel", Text)
    --- 红点
    self.tip = find_component(self.root, "redpoint")
    --- 红点显示的数量
    self.countlabel = find_component(self.root, "redpoint/countlabel", Text)
    --- 刷新数据
    self:RefreshData()
    self.energyicon = find_component(self.root, "energy", Image)
    self.energylabel = find_component(self.root, "energy/count", Text)
end

function TwoMergeButton:GetMainIconGameObject()
    return self.gameObject
end

function TwoMergeButton:RegisterListener()
    MessageDispatcher:AddMessageListener(MessageType.Global_After_UseItem, self.OnChangeItem, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_AddItem, self.OnChangeItem, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.RefreshRedPoint, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_QueueUse_Succ, self.RefreshRedPoint, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_QueueAdd, self.RefreshRedPoint, self)

    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_GetBpReward, self.RefreshRedPoint, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.RefreshRedPoint, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Buy_BP_Success, self.RefreshRedPoint, self)
end

function TwoMergeButton:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_UseItem, self.OnChangeItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_AddItem, self.OnChangeItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.RefreshRedPoint, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_QueueUse_Succ, self.RefreshRedPoint, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_QueueAdd, self.RefreshRedPoint, self)

    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_GetBpReward, self.RefreshRedPoint, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.RefreshRedPoint, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Buy_BP_Success, self.RefreshRedPoint, self)
end

function TwoMergeButton:SetMapId(mapId)
    self.mapId = mapId
    if self.mapId ~= nil then
        self.energyId = ActivityServices.TwoMergeActivityManager:GetEnergyId()
        UITool:GetItemUISprite(self.energyicon, self.energyId)
        local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.mapId]
        self.maxenergy = tonumber(config.default_use_limit) -- 最大数量上限
        self:RefreshEnergy()
    end
    self:RefreshData()

    local curSceneId = App.scene:GetCurrentSceneId()
    if self.mapId ~= nil and curSceneId == "city" and not App.mapGuideManager:HasComplete(GuideIDs.GuideTwoMergeCity) and not self.isguide then
        self.isguide = true
        PopupManager:CallWhenIdle(function()
            App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeCity)
        end)
    end
end

--- 刷新按钮数据
function TwoMergeButton:RefreshData()
    self.gameObject:SetActive(self.mapId ~= nil)
    self:RefreshRedPoint()
end

--- 红点
function TwoMergeButton:RefreshRedPoint()
    if self.mapId ~= nil then
        local hasReward = AppServices.TwoMergeManager:GetRewardIndex() ~= nil -- BP红点
        local hasQueue = AppServices.TwoMergeManager:QueueGet(self.mapId) > 0
        self.tip:SetActive(hasReward or hasQueue)
    else
        self.tip:SetActive(false)
    end
end

--- Item数量变化
function TwoMergeButton:OnChangeItem(id, count)
    if id == self.energyId then self:RefreshEnergy() end
end

function TwoMergeButton:RefreshEnergy()
    if self.mapId ~= nil then
        local curcount = AppServices.User:GetItemAmount(self.energyId)
        self.energylabel.text = curcount --.."/"..self.maxenergy
    end
end

----------------------------- >>> 计时器 start <<< --------------
-- function TwoMergeButton:StartTick()
--     if not self._tickTimer then
--         self._tickTimer = WaitExtension.InvokeRepeating(function() self:Tick() end, 0, 1)
--         self:Tick()
--     end
-- end
-- function TwoMergeButton:Tick()
--     local endtime = AppServices.TreasureMapManager:GetEndTime(self.activityId, self.gameId)
--     local lefttime = endtime - TimeUtil.ServerTime()
--     if lefttime > 0 then
--         self.timerlabel.text = TimeUtil.SecToHMS(lefttime)
--     else
--         PanelManager.closePanel(GlobalPanelEnum.TreasureDicePanel)
--     end
-- end
-- function TwoMergeButton:EndTick()
--     if self._tickTimer ~= nil then
--         WaitExtension.CancelTimeout(self._tickTimer)
--         self._tickTimer = nil
--     end
-- end
----------------------------- >>> 计时器 end <<< -------------------------------------------

--- 点击按钮
function TwoMergeButton:OnClick()
    if self.mapId ~= nil then
        local params = { mapId = self.mapId or "28001" }
        PanelManager.showPanel(GlobalPanelEnum.TwoMergePanel, params)
    end
end

function TwoMergeButton:Dispose()
    self:RemoveListener()
    BaseIconButton.Dispose(self)
end


----------------------------- >>> base基类坑相关 start <<< -------------------------------------------
function TwoMergeButton:GetRectTransform()
    return self.gameObject:GetComponent(typeof(RectTransform))
end

function TwoMergeButton:ShowEnterAnim() end
function TwoMergeButton:ShowExitAnim()
    self._isShow = false
    if Runtime.CSValid(self.bar) then self.bar:SetActive(false) end
end
----------------------------- >>> base基类坑相关 end <<< -------------------------------------------

return TwoMergeButton
