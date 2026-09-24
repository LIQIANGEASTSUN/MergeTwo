ItemPaperBox = setmetatable({canMove = false}, BaseItemComponent)
ItemPaperBox.__index = ItemPaperBox

function ItemPaperBox.Create(innerItemCode)
  local itemPaperBox = setmetatable({}, ItemPaperBox)
  itemPaperBox:Init(innerItemCode)
  return itemPaperBox
end

function ItemPaperBox:Init(innerItemCode)
  self.m_innerItemCode = innerItemCode
end

function ItemPaperBox:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemPaperBox:OnShock(autoUpdateOrderState)
  self:_Disappear(autoUpdateOrderState)
end

function ItemPaperBox:_Disappear(autoUpdateOrderState)
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode, nil, autoUpdateOrderState)
  if boardModel:GetGameMode() == EGameMode.Hunt and boardModel.GetActivityType and boardModel:GetActivityType() and HuntActivityDefinition[boardModel:GetActivityType()] and HuntActivityDefinition[boardModel:GetActivityType()].IsDigType and boardModel:CanItemMove(newItem) and not unlockShocked then
    boardModel:ShockNearby(self.m_itemModel)
  end
  local itemSticker = self.m_itemModel:GetComponent(ItemSticker)
  if itemSticker then
    itemSticker:SetNewItem(newItem)
  end
  boardModel.event:Call(BoardEventType.CollapseItem, {
    Source = self.m_itemModel,
    New = newItem
  })
end
