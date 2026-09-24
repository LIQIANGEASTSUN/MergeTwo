ItemWheel = setmetatable({}, BaseItemComponent)
ItemWheel.__index = ItemWheel

function ItemWheel.Create(itemConfig)
  local itemTransform = setmetatable({}, ItemWheel)
  itemTransform:Init(itemConfig)
  return itemTransform
end

function ItemWheel:Init(itemConfig)
  self.m_itemId = itemConfig.Mode
end

function ItemWheel:FromSerialization(dbTable)
  self.m_itemId = dbTable.itemId
end

function ItemWheel:ToSerialization(dbTable)
  dbTable.itemId = self.m_itemId
end

function ItemWheel:OnTap()
  local boardModel = self.m_itemModel:GetBoardModel()
  GM.WheelItemModel:AcquireWheelItemRewards(self.m_itemId, EGameMode.Hunt)
  boardModel:RemoveItem(self.m_itemModel)
  local eventInfo = {
    Removed = {
      self.m_itemModel
    }
  }
  boardModel.event:Call(BoardEventType.BatchRemoveItems, eventInfo)
end
