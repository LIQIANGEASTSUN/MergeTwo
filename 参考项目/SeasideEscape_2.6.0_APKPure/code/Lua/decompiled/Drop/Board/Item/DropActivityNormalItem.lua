DropActivityNormalItem = setmetatable({}, DropActivityBaseItem)
DropActivityNormalItem.__index = DropActivityNormalItem

function DropActivityNormalItem:Init(itemCode)
  DropActivityBaseItem.Init(self, itemCode)
end
