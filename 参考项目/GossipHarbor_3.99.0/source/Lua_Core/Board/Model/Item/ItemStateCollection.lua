ItemStateCollection = setmetatable({}, BaseItemComponent)
ItemStateCollection.__index = ItemStateCollection

function ItemStateCollection.Create(state)
  local itemStateCollection = setmetatable({}, ItemStateCollection)
  itemStateCollection:Init(state)
  return itemStateCollection
end

function ItemStateCollection:Init(state)
  self.m_state = state
end

function ItemStateCollection:GetState()
  return self.m_state
end

function ItemStateCollection:GetStateType()
  return GM.ItemDataModel:GetStateCollectionStateType(self.m_itemModel:GetType(), self.m_state)
end
