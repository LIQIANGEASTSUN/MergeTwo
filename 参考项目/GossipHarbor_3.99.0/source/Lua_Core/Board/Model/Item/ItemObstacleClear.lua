ItemObstacleClear = setmetatable({}, BaseItemComponent)
ItemObstacleClear.__index = ItemObstacleClear

function ItemObstacleClear.Create()
  local itemObstacleClear = setmetatable({}, ItemObstacleClear)
  return itemObstacleClear
end
