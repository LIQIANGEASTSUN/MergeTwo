ItemFogView = setmetatable({}, BaseItemViewComponent)
ItemFogView.__index = ItemFogView
local MinLevelFogColor = CSColor(1, 1, 1, 1)
local OtherLevelFogColor = CSColor(0.84, 0.84, 0.9, 1)

function ItemFogView:Init(itemFog)
  self.m_model = itemFog
end

function ItemFogView:SetItemView(itemView)
  BaseItemViewComponent.SetItemView(self, itemView)
  self:UpdateColor()
end

function ItemFogView:UpdateColor()
  if self.m_itemView == nil then
    return
  end
  local boardModel = self.m_model:GetItemModel():GetBoardModel()
  local fogModel = boardModel:GetFogModel()
  local isMinLevel = fogModel:CheckIsMinLevel(self.m_model:GetFogId())
  self.m_originColor = isMinLevel and MinLevelFogColor or OtherLevelFogColor
  local sprite = self.m_itemView:GetSpriteRenderer()
  sprite.color = self.m_originColor
end

function ItemFogView:PlayClickEffect()
  if self.m_tween then
    self.m_tween:Kill()
  end
  local sprite = self.m_itemView:GetSpriteRenderer()
  local seq = DOTween.Sequence()
  seq:Append(sprite:DOColor(CSColor(0.9 * self.m_originColor.r, 0.9 * self.m_originColor.g, 0.9 * self.m_originColor.b, 1), 0.2))
  seq:Append(sprite:DOColor(self.m_originColor, 0.2))
  self.m_tween = seq
end

function ItemFogView:PlayUnlockEffect()
  self.m_unlockEffect:SetActive(false)
  self.m_unlockEffect:SetActive(true)
end
