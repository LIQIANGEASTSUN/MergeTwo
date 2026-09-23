ItemTransformView = setmetatable({}, BaseItemViewComponent)
ItemTransformView.__index = ItemTransformView

function ItemTransformView:Init(itemTransformModel)
  self.m_model = itemTransformModel
  if itemTransformModel:GetDuration() ~= nil then
    self.m_countdownTransform.gameObject:SetActive(true)
    AddHandlerAndRecordMap(self.m_model.event, ItemTransformEventType.StateChanged, {
      obj = self,
      method = self._OnStateChanged
    })
    self:_OnStateChanged()
  elseif itemTransformModel:AllowTap() then
    Object.Instantiate(self.m_energyEffectPrefab, self.transform)
  end
end

function ItemTransformView:OnDestroy()
  if self.m_model == nil then
    return
  end
  RemoveAllHandlers(self.m_model.event, self)
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  self:_StopCountdownAnimation()
  self.m_model = nil
end

function ItemTransformView:_OnStateChanged()
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
  end
  self.m_countDownMaskImage.fillAmount = self.m_model:GetTimerAmount()
  local nextTimerAmount = self.m_model:GetNextTimerAmount()
  self.m_fillAmountTween = self.m_countDownMaskImage:DOFillAmount(nextTimerAmount, 1):SetEase(Ease.Linear)
  if self.m_model:ShowCountdownAnimation() then
    if self.m_countdownTween == nil then
      local sequence = DOTween.Sequence():SetLoops(-1)
      sequence:Append(self.m_countdownTransform:DOScale(Vector3(0.9900000000000001, 0.81, 1), 0.25))
      sequence:Append(self.m_countdownTransform:DOScale(Vector3(0.81, 0.9900000000000001, 1), 0.5))
      sequence:Append(self.m_countdownTransform:DOScale(Vector3(0.9, 0.9, 1), 0.25))
      self.m_countdownTween = sequence
    end
  else
    self:_StopCountdownAnimation()
  end
end

function ItemTransformView:_StopCountdownAnimation()
  if self.m_countdownTween ~= nil then
    self.m_countdownTween:Kill()
    self.m_countdownTween = nil
    self.m_countdownTransform.localScale = Vector3(0.9, 0.9, 1)
  end
end
