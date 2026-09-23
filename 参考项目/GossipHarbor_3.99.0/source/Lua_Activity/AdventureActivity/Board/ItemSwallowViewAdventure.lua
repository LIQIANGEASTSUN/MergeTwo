ItemSwallowViewAdventure = setmetatable({}, BaseItemViewComponent)
ItemSwallowViewAdventure.__index = ItemSwallowViewAdventure

function ItemSwallowViewAdventure:Init(itemSwallowModel)
  self.m_model = itemSwallowModel
  AddHandlerAndRecordMap(self.m_model.event, ItemSwallowEventType.ProgressChanged, {
    obj = self,
    method = self._UpdateView
  })
  local targetNumber = 0
  local swallowedNumber = 0
  for _, info in ipairs(itemSwallowModel:GetSwallowInfo()) do
    targetNumber = targetNumber + info.Count
    swallowedNumber = swallowedNumber + info.Swallowed
  end
  if targetNumber ~= 1 then
    local sliderCellTransfom = self.m_sliderCellGo.transform
    if targetNumber == 2 then
      UIUtil.SetSizeDelta(sliderCellTransfom, 60)
    else
      UIUtil.SetSizeDelta(sliderCellTransfom, 40)
    end
  end
  self.m_sliderCells = {
    self.m_sliderCellGo:GetComponent(typeof(CS.UnityEngine.UI.Slider))
  }
  for i = 2, targetNumber do
    local object = Object.Instantiate(self.m_sliderCellGo, self.m_sliderTransform)
    table.insert(self.m_sliderCells, object:GetComponent(typeof(CS.UnityEngine.UI.Slider)))
  end
  if targetNumber == 2 then
    UIUtil.SetAnchoredPosition(self.m_sliderCells[1].transform, -32)
    UIUtil.SetAnchoredPosition(self.m_sliderCells[2].transform, 32)
  elseif targetNumber == 3 then
    UIUtil.SetAnchoredPosition(self.m_sliderCells[1].transform, -42)
    UIUtil.SetAnchoredPosition(self.m_sliderCells[3].transform, 42)
  end
  if swallowedNumber ~= 0 then
    self.m_sliderTransform.gameObject:SetActive(true)
    for i = 1, swallowedNumber do
      self.m_sliderCells[i].value = 1
    end
  end
  self.m_swallowedNumber = swallowedNumber
end

function ItemSwallowViewAdventure:OnDestroy()
  RemoveAllHandlers(self.m_model.event, self)
end

function ItemSwallowViewAdventure:SetItemView(itemView)
  BaseItemViewComponent.SetItemView(self, itemView)
  self:_UpdateSprite()
end

function ItemSwallowViewAdventure:_UpdateView()
  self.m_swallowedNumber = self.m_swallowedNumber + 1
  local sequence = DOTween.Sequence()
  sequence:AppendCallback(function()
    self.m_animation.gameObject:SetActive(true)
    self.m_animation.AnimationState:SetAnimation(0, "adventure_sickle", false)
    self.m_animation:Update()
    self.m_sliderTransform.gameObject:SetActive(true)
  end)
  sequence:AppendInterval(0.6)
  sequence:AppendCallback(function()
    local _, def = GM.ActivityManager:GetStartedAdventure()
    if def and def.ClearEffectAudioName then
      GM.AudioModel:PlayEffect(def.ClearEffectAudioName)
    end
  end)
  sequence:AppendInterval(0.4)
  sequence:AppendCallback(function()
    self:_UpdateSprite()
  end)
  sequence:Append(self.m_sliderCells[self.m_swallowedNumber]:DOValue(1, 0.6))
  sequence:AppendInterval(0.7)
  sequence:AppendCallback(function()
    self.m_animation.gameObject:SetActive(false)
  end)
end

function ItemSwallowViewAdventure:_UpdateSprite()
  local type = self.m_itemView:GetModel():GetType()
  local viewConfig = GM.ItemDataModel:GetViewConfig(type)
  local spriteName = viewConfig.Image[self.m_swallowedNumber + 1]
  if spriteName ~= nil then
    SpriteUtil.SetSpriteRenderer(self.m_itemView:GetSpriteRenderer(), spriteName)
  end
end
