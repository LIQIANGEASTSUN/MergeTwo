ItemSwallowView = setmetatable({}, BaseItemViewComponent)
ItemSwallowView.__index = ItemSwallowView

function ItemSwallowView:Init(itemSwallowModel)
  self.m_model = itemSwallowModel
  AddHandlerAndRecordMap(self.m_model.event, ItemSwallowEventType.ProgressChanged, {
    obj = self,
    method = self._UpdateView
  })
  self.m_originalScale = self.m_swallowItemImg.transform.localScale.x
  self:_UpdateView()
  self:PlayPromptAnimation()
end

function ItemSwallowView:OnDestroy()
  if self.m_model == nil then
    return
  end
  RemoveAllHandlers(self.m_model.event, self)
  self.m_model = nil
end

function ItemSwallowView:_UpdateView()
  local targetNumber = 0
  local swallowedNumber = 0
  local firstItem
  for _, info in ipairs(self.m_model:GetSwallowInfo()) do
    targetNumber = targetNumber + info.Count
    swallowedNumber = swallowedNumber + info.Swallowed
    if 0 < info.Count - info.Swallowed and firstItem == nil then
      firstItem = info.Code
    end
  end
  if firstItem ~= nil then
    local spriteName = GM.ItemDataModel:GetSpriteName(firstItem)
    SpriteUtil.SetImage(self.m_swallowItemImg, spriteName, true, function()
      if not self.m_swallowItemImg:IsNull() then
        self.m_swallowItemImg.enabled = true
      end
    end)
  end
  self.m_progressText.text = swallowedNumber .. "/" .. targetNumber
  self.m_progressSlider:DOValue(swallowedNumber / targetNumber, 0.2)
end

function ItemSwallowView:PlayPromptAnimation()
  self.m_promptAnimation = DOTween.Sequence()
  for i = 1, 3 do
    self.m_promptAnimation:Append(self.m_swallowItemImg.transform:DOScale(1.08 * self.m_originalScale, 1):SetEase(Ease.OutSine))
    self.m_promptAnimation:Append(self.m_swallowItemImg.transform:DOScale(0.97 * self.m_originalScale, 1))
  end
  self.m_promptAnimation:SetLoops(-1)
end
