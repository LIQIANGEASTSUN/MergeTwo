ItemObstacleClearView = setmetatable({}, BaseItemViewComponent)
ItemObstacleClearView.__index = ItemObstacleClearView

function ItemObstacleClearView:Init(itemObstacleClearModel)
  self.m_model = itemObstacleClearModel
end

function ItemObstacleClearView:SetItemView(itemView)
  BaseItemViewComponent.SetItemView(self, itemView)
  self:_UpdateTool()
end

function ItemObstacleClearView:_UpdateTool()
  local spriteName = self.m_itemView:GetSpriteName(ItemType.ObstacleClear)
  SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
  self.m_spriteName = spriteName
end

function ItemObstacleClearView:GetSpritePosition()
  return self.m_spriteRenderer.transform.position
end

function ItemObstacleClearView:GetToolImage()
  return self.m_spriteName
end

function ItemObstacleClearView:GetToolImageScale()
  return self.m_spriteRenderer.transform.localScale
end
