FogLock = {}
FogLock.__index = FogLock

function FogLock:Init(fogModel, fogId)
  self.m_fogModel = fogModel
  self.m_fogId = fogId
  self.m_itemType, self.m_targetNum = self.m_fogModel:GetUnlockItemAndNum(fogId)
  SpriteUtil.SetImage(self.m_itemImg, GM.ItemDataModel:GetSpriteName(self.m_itemType), true)
  self.m_originScale = self.m_itemImg.transform.localScale
  self:UpdateProgress()
  UIUtil.SetActive(self.m_effectGo, false)
end

function FogLock:UpdateProgress(bAnim)
  local curNum = self.m_fogModel:GetFogUnlockedNum(self.m_fogId)
  if not bAnim then
    self.m_sliderImg.fillAmount = curNum / self.m_targetNum
    self.m_progressText.text = curNum .. "/" .. self.m_targetNum
  else
    UIUtil.SetLocalScale(self.m_itemImg.transform, self.m_originScale.x + 0.4, self.m_originScale.y + 0.4)
    self.m_itemImg.transform:DOKill()
    self.m_itemImg.transform:DOScale(self.m_originScale, 0.2)
    self.m_sliderImg:DOKill()
    self.m_sliderImg:DOFillAmount(curNum / self.m_targetNum, 0.5):OnComplete(function()
      self.m_progressText.text = curNum .. "/" .. self.m_targetNum
    end)
  end
end

function FogLock:PlayKeyArriveEffect()
  UIUtil.SetActive(self.m_effectGo, true)
end

function FogLock:PlayUnlockAni()
  self.m_animator:Play("Ani_FogLock_unlock", 0, 0)
end

function FogLock:ShowLockAni()
  local duration = 0.16
  self.m_canvasGroup.alpha = 0
  UIUtil.SetLocalScale(self.transform, 0, 0)
  self.m_canvasGroup:DOFade(1, duration)
  self.transform:DOScale(Vector3(1, 1, 1), duration)
end

function FogLock:PlayClickEffect()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
  self.m_animator:Play("Ani_FogLock_shake", 0, 0)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end
