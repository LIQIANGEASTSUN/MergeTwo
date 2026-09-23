ItemLocked = setmetatable({}, BaseItemComponent)
ItemLocked.__index = ItemLocked

function ItemLocked.Create(innerItemCode)
  local itemLocked = setmetatable({}, ItemLocked)
  itemLocked:Init(innerItemCode)
  return itemLocked
end

function ItemLocked:Init(innerItemCode)
  self.m_innerItemCode = innerItemCode
end

function ItemLocked:GetInnerItemCode()
  return self.m_innerItemCode
end
