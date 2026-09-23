BaseItemComponent = {}
BaseItemComponent.__index = BaseItemComponent

function BaseItemComponent:SetItemModel(itemModel)
  self.m_itemModel = itemModel
end

function BaseItemComponent:GetItemModel()
  return self.m_itemModel
end
