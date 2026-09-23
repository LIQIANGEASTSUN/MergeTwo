ItemCobwebView = setmetatable({}, BaseItemViewComponent)
ItemCobwebView.__index = ItemCobwebView

function ItemCobwebView:Init(itemCobwebModel)
  self.m_model = itemCobwebModel
end

function ItemCobwebView:SetItemView(itemView)
  BaseItemViewComponent.SetItemView(self, itemView)
  self:_UpdateCobweb()
end

function ItemCobwebView:_UpdateCobweb()
  local spriteName = self.m_itemView:GetSpriteName(ItemType.Cobweb)
  SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
end
