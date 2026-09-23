ItemIndicator = {}
ItemIndicator.__index = ItemIndicator
ItemIndicator.LocalZ = 650

function ItemIndicator:OnDestroy()
  if self.m_tweenOrigin then
    self.m_tweenOrigin:Kill()
    self.m_tweenOrigin = nil
  end
end

function ItemIndicator:UpdateIndicator(selectedItemModel, playAnimation)
  if self.gameObject.activeSelf ~= (selectedItemModel ~= nil) then
    self.gameObject:SetActive(selectedItemModel ~= nil)
  end
  if selectedItemModel == nil then
    return
  end
  self:_TryToInitTweenOrigin()
  self.transform.localPosition = selectedItemModel:GetLocalPositionOverrideZ(ItemIndicator.LocalZ)
  local hasMergedType = selectedItemModel:GetComponent(ItemCobweb) ~= nil or selectedItemModel:GetComponent(ItemTemp) ~= nil or selectedItemModel:GetMergedType() ~= nil
  self.m_mergeGo:SetActive(hasMergedType)
  self.m_noMergeGo:SetActive(not hasMergedType)
  if playAnimation then
    self.m_tweenOrigin:Restart()
  end
end

function ItemIndicator:_TryToInitTweenOrigin()
  if self.m_tweenOrigin ~= nil then
    return
  end
  local sequence = DOTween.Sequence()
  local transform = self.gameObject.transform
  local transparentColor = CSColor(1, 1, 1, 0)
  transform.localScale = V3Zero
  self.m_mergeSprite.color = transparentColor
  self.m_noMergeSprite.color = transparentColor
  sequence:Insert(0, transform:DOScale(1.05, 0.15))
  sequence:Insert(0.15, transform:DOScale(0.95, 0.05))
  sequence:Insert(0.2, transform:DOScale(1, 0.05))
  sequence:Insert(0, self.m_mergeSprite:DOFade(1, 0.15))
  sequence:Insert(0, self.m_noMergeSprite:DOFade(1, 0.15))
  sequence:OnComplete(function()
    self.m_tween = nil
  end)
  sequence:SetAutoKill(false)
  self.m_tweenOrigin = sequence
end
