local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@class TwoMergeTipItem
local TwoMergeTipItem = class(nil, "TwoMergeTipItem")

function TwoMergeTipItem:ctor(gameObject)
    self:Bind(gameObject)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Tip_Rate2_Open, self.ShowRate2Open, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Tip_Rate4_Open, self.ShowRate4Open, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Tip_Rate2_Close, self.ShowRate2Close, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Tip_Good, self.ShowGood, self)
end
function TwoMergeTipItem:destroy()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Tip_Rate2_Open, self.ShowRate2Open, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Tip_Rate4_Open, self.ShowRate4Open, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Tip_Rate2_Close, self.ShowRate2Close, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Tip_Good, self.ShowGood, self)
    self = nil
end

function TwoMergeTipItem:Bind(gameObject)
    self.gameObject = gameObject

    self.showroot = find_component(self.gameObject, "showroot", RectTransform)
    self.rate2_open = find_component(self.gameObject, "rate2_open") -- 二倍打开
    self.rate4_open = find_component(self.gameObject, "rate4_open") -- 四倍打开
    self.rate2_close = find_component(self.gameObject, "rate2_close") -- 多倍关闭
    self.good = find_component(self.gameObject, "good") -- 干得好
end

function TwoMergeTipItem:ShowRate2Open()
    local content = Runtime.Translate("merge_system_02") -- t: 放大器！
    self:Show(self.rate2_open, content)
end
function TwoMergeTipItem:ShowRate4Open()
    local content = Runtime.Translate("merge_system_02") -- t: 放大器！
    self:Show(self.rate4_open, content)
end
function TwoMergeTipItem:ShowRate2Close()
    local content = Runtime.Translate("merge_system_03") -- t: 放大器已关闭！
    self:Show(self.rate2_close, content)
end
function TwoMergeTipItem:ShowGood(type, label)
    self:Show(self.good, label)
    if type == TwoMergeConfig.TipType.Great then
        App.audioManager:PlayEffectAudio(CONST.AUDIO.great) -- 生成音效
    elseif type == TwoMergeConfig.TipType.Good then
        App.audioManager:PlayEffectAudio(CONST.AUDIO.good) -- 生成音效
    end
end

function TwoMergeTipItem:Show(obj, label, type)
    local flyitem = self:Clone(obj)
    flyitem.transform.localPosition = Vector3(0, -50, 0)
    flyitem.transform:DOLocalMoveY(100, 1.5)
    local canvasgroup = find_component(flyitem, "", CanvasGroup)
    if label ~= nil then find_component(flyitem, "root/label", Text).text = tostring(label) end
    canvasgroup:DOFade(0, 0.5):SetDelay(1)
    GameObject.Destroy(flyitem, 1.5)
end
function TwoMergeTipItem:Clone(obj)
    local go = GameObject.Instantiate(obj, self.showroot)
    go.transform:SetLocalPosition(Vector3.zero)
    go.transform:SetLocalEulerAngle(0, 0, 0)
    go.transform:SetLocalScale(Vector3.one)
    go:SetActive(true)
    return go
end

return TwoMergeTipItem