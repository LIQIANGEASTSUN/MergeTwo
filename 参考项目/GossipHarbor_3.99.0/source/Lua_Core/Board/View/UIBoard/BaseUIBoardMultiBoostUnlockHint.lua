BaseUIBoardMultiBoostUnlockHint = {}
BaseUIBoardMultiBoostUnlockHint.__index = BaseUIBoardMultiBoostUnlockHint

function BaseUIBoardMultiBoostUnlockHint:OnDestroy()
  GM.UIManager:RemoveAllEventLocks(self)
end

function BaseUIBoardMultiBoostUnlockHint:Init(multi, ePos, activityType, callback)
  self.m_multi = multi
  self.m_ePos = ePos
  self.m_callback = callback
  self.m_activityType = activityType
  self:PlayAni()
end

function BaseUIBoardMultiBoostUnlockHint:PlayAni()
  GM.UIManager:SetEventLock(true, self)
  self.m_bgImage.sprite = self["m_energyboost_" .. self.m_multi]
  self.m_normalText.text = "X" .. MathUtil.IntPow(2, self.m_multi)
  self.m_textUIOu:SetColor(UIUtil.ConvertHexColor2CSColor(self["m_outlineColor" .. self.m_multi]))
  self.m_baseUIBoardMultiBoostUnlockHintAnimator:Play("BaseUIBoardMultiBoostUnlockHint", 0, 0)
  self.transform.localScale = Vector3.zero
  UIUtil.SetAlpha(self.m_lightImg, 0)
  local seq = DOTween.Sequence()
  seq:Append(self.transform:DOScale(Vector3(1.25, 1.25, 1.25), 0.08333333333333333))
  seq:Join(self.m_lightImg:DOFade(1, 0.08333333333333333))
  seq:Append(self.transform:DOScale(Vector3(2, 2, 1), 0.08333333333333333))
  seq:Append(self.transform:DOScale(Vector3(1.7, 1.7, 1), 0.08333333333333333))
  seq:Append(self.transform:DOScale(Vector3(2, 2, 1), 0.16666666666666666))
  seq:AppendInterval(0.5)
  seq:Append(self.transform:DOMove(self.m_ePos, 0.25))
  seq:Join(self.transform:DOScale(Vector3(1, 1, 1), 0.25))
  seq:AppendCallback(function()
    GM.UIManager:SetEventLock(false, self)
    AddressableLoader.Destroy(self.gameObject)
    EventDispatcher.DispatchEvent(EEventType.UIBoardTryPlayEnergyBoostTutorial, {
      activityType = self.m_activityType
    })
    if self.m_callback then
      self.m_callback()
    end
  end)
end
