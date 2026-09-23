ItemPortal = setmetatable({}, BaseItemComponent)
ItemPortal.__index = ItemPortal

function ItemPortal.Create()
  local ItemPortal = setmetatable({}, ItemPortal)
  return ItemPortal
end
