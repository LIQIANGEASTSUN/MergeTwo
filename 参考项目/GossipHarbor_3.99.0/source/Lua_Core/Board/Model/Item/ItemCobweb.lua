ItemCobweb = setmetatable({}, BaseItemComponent)
ItemCobweb.__index = ItemCobweb

function ItemCobweb.Create(innerItemCode)
  local itemCobweb = setmetatable({}, ItemCobweb)
  itemCobweb:Init(innerItemCode)
  return itemCobweb
end

function ItemCobweb:Init(innerItemCode)
  if StringUtil.StartWith(innerItemCode, ItemCodePrefix.ObstacleClear) then
    self.m_innerItemCode = string.sub(innerItemCode, string.len(ItemCodePrefix.ObstacleClear) + 1)
  else
    self.m_innerItemCode = innerItemCode
  end
end

function ItemCobweb:GetInnerItemCode()
  return self.m_innerItemCode
end
