ItemSand = setmetatable({canMove = false}, BaseItemComponent)
ItemSand.__index = ItemSand
ItemSandEventType = {LayerChange = 1}

function ItemSand.Create(innerItemCode, layer)
  local itemSand = setmetatable({}, ItemSand)
  itemSand:Init(innerItemCode, layer)
  return itemSand
end

function ItemSand:Init(innerItemCode, layer)
  self.event = PairEvent.Create(self)
  self.m_innerItemCode = innerItemCode
  self.m_originLayer = layer
  self.m_curLayer = layer
end

function ItemSand:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemSand:OnSweep()
  self.m_bInSweeping = false
  self.m_curLayer = self.m_curLayer - 1
  self.event:Call(ItemSandEventType.LayerChange)
  if self.m_curLayer > 0 then
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  else
    self:_Disappear()
  end
  GM.BIManager:LogAction(EBIType.SweepItem, {
    c = self.m_itemModel:GetCode(),
    l = self.m_curLayer
  }, EGameMode.Hunt)
end

function ItemSand:OnTap()
  if self.m_curLayer >= 1 and not self.m_bInSweeping then
    local boardModel = self.m_itemModel:GetBoardModel()
    for position in boardModel.GetValidPositionIterator() do
      local item = boardModel:GetItem(position)
      if item ~= nil and item:GetComponent(ItemBroom) ~= nil then
        self.m_bInSweeping = true
        item:GetComponent(ItemBroom):OnUse(self.m_itemModel, true)
        return
      end
    end
  end
end

function ItemSand:_Disappear()
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:ShockNearby(self.m_itemModel)
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode)
  local message = {
    Source = self.m_itemModel,
    New = newItem
  }
  boardModel.event:Call(BoardEventType.DissolveItem, message)
  EventDispatcher.DispatchEvent(EEventType.ItemDissolve, message)
end

function ItemSand:GetLayer()
  return self.m_curLayer
end

function ItemSand:GetOriginLayer()
  return self.m_originLayer
end

function ItemSand:FromSerialization(dbTable)
  self.m_curLayer = dbTable.spreadState
end

function ItemSand:ToSerialization(dbTable)
  dbTable.spreadState = self.m_curLayer
end
