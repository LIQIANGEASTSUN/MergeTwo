ItemBroom = setmetatable({}, BaseItemComponent)
ItemBroom.__index = ItemBroom

function ItemBroom.Create()
  local itemBroom = setmetatable({}, ItemBroom)
  return itemBroom
end

function ItemBroom:OnUse(targetItem, bTap)
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  local message = {
    Source = self.m_itemModel,
    Target = targetItem,
    FlyTime = bTap and 0.5 or 0.1
  }
  boardModel.event:Call(BoardEventType.SweepItem, message)
  GM.BIManager:LogAction(EBIType.SwallowItem, tostring(targetItem:GetCode()), EGameMode.Hunt)
end

function ItemBroom:OnTap()
  EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip, self.m_itemModel:GetCode())
end
