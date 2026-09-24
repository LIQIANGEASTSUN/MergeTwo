ItemGray = setmetatable({canMove = false}, BaseItemComponent)
ItemGray.__index = ItemGray

function ItemGray.Create(innerItemCode)
  local ItemGray = setmetatable({}, ItemGray)
  ItemGray:Init(innerItemCode)
  return ItemGray
end

function ItemGray:Init(innerItemCode)
  self.m_innerItemCode = innerItemCode
end

function ItemGray:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemGray:OnShock(autoUpdateOrderState)
  self:_Disappear(autoUpdateOrderState)
end

function ItemGray:_Disappear(autoUpdateOrderState)
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode, nil, autoUpdateOrderState)
  if self:GetGameMode() ~= EGameMode.Freefall then
    boardModel:ShockNearby(self.m_itemModel)
  end
  boardModel.event:Call(BoardEventType.CollapseItem, {
    Source = self.m_itemModel,
    New = newItem
  })
end
