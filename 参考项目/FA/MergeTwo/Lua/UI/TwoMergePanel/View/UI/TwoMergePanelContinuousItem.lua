
--- 二合无尽礼包
local TwoMergePanelContinuousItem = class(nil, "TwoMergePanelContinuousItem")
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")

function TwoMergePanelContinuousItem:ctor(gameObject, luaparent, activityId)
    self:Bind(gameObject)
    self.luaparent = luaparent
    self.activityId = activityId

    MessageDispatcher:AddMessageListener(MessageType.Global_After_AddItem, self.RefreshCurrency, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_UseItem, self.RefreshCurrency, self)
    self.timer = WaitExtension.InvokeRepeating(function() self:Tick() end, 1, 1)
end
function TwoMergePanelContinuousItem:destroy()
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_AddItem, self.RefreshCurrency, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_UseItem, self.RefreshCurrency, self)
    WaitExtension.CancelTimeout(self.timer); self.timer = nil
    self = nil
end

function TwoMergePanelContinuousItem:Bind(gameObject)
    self.gameObject = gameObject
    self.timerlabel = find_component(self.gameObject, "timerlabel", Text)
    self.icon  = find_component(self.gameObject, "icon", Image)
    self.currencyText = find_component(self.gameObject, "currencyText", Text)

    Util.UGUI_AddButtonListener(self.gameObject, function() self:OnClick() end)
end

function TwoMergePanelContinuousItem:SetActivityId(activityId)
    self.activityId = activityId
    self._currencyId = AppServices.ContinuousGiftManager:GetConsumeItemId(self.activityId)
    self.currencyIcon = find_component(self.gameObject, "currencyIcon", Image)
    UITool:GetItemUISprite(self.currencyIcon, self._currencyId)
    self.currencyText.text = AppServices.User:GetItemAmount(self._currencyId)
end

function TwoMergePanelContinuousItem:RefreshCurrency(id)
    if id == self._currencyId then
        self.currencyText.text = AppServices.User:GetItemAmount(self._currencyId)
    end
end

function TwoMergePanelContinuousItem:RefreshGift()
    local giftType = 1 -- 固定免费
    --- 获取isShow时  有判断时间的逻辑
    local isShow = AppServices.ContinuousGiftManager:IsValid(self.activityId, giftType)
    self.gameObject:SetActive(isShow)
end

function TwoMergePanelContinuousItem:OnClick()
    if TutorialLogic.IsRunning() then return end
    local giftType = 1 -- 固定免费
    local data = AppServices.ContinuousGiftManager:GetPackDataItem(self.activityId, giftType)
    if data ~= nil then
        AppServices.ContinuousGiftManager:ShowPanel(data)
    end
end

function TwoMergePanelContinuousItem:Tick()
    local lefttime = ActivityServices.TwoMergeActivityManager:GetLefttime()
    if lefttime > 0 then
        self.timerlabel.text = TimeUtil.SecToDayHourStr(lefttime)
    end
    self.lastlefttime = lefttime
end

return TwoMergePanelContinuousItem