function DEFINE_ITEM_EVENT(model, eventName)
  local functionName = eventName .. "Item"
  
  local dispatchFunctionName = "On" .. eventName
  model[functionName] = function(model, item, ...)
    item:DispatchComponentEvent(dispatchFunctionName, ...)
  end
end

BaseBoardModel = {}
BaseBoardModel.__index = BaseBoardModel
BaseBoardModel.TileSize = 142
BaseBoardModel.HorizontalTiles = nil
BaseBoardModel.VerticalTiles = nil

function BaseBoardModel:Init(itemLayerModel)
  self.event = PairEvent.Create(self)
  self.m_itemLayerModel = itemLayerModel
  self.m_bubbleCount = 0
  self.m_mapBubbleCode = {}
  self.m_bubbleMaxNum = 0
  DEFINE_ITEM_EVENT(self, "Tap")
  self:ResetMergeAllDisableItem()
end

function BaseBoardModel:Destroy()
  EventDispatcher.RemoveTarget(self)
  if self.m_orderModel then
    self.m_orderModel:Destroy()
  end
  if self.m_itemManager then
    self.m_itemManager:Destroy()
  end
end

function BaseBoardModel.CreateMatrix()
  assert(false, "CreateMatrix()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseBoardModel._CreateMatrix(boardClass)
  local matrix = setmetatable({}, Matrix)
  matrix:Init(boardClass)
  return matrix
end

function BaseBoardModel.GetValidPositionIterator()
  assert(false, "GetValidPositionIterator()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseBoardModel._CreatePosition(boardClass, x, y)
  return BoardPosition.Create(boardClass, x, y)
end

function BaseBoardModel._CreatePositionFromLocalPosition(boardClass, localPositionX, localPositionY)
  local x = math.floor(localPositionX) // boardClass.TileSize + 1
  local y = boardClass.VerticalTiles - math.floor(localPositionY) // boardClass.TileSize
  return BaseBoardModel._CreatePosition(boardClass, x, y)
end

function BaseBoardModel._GetValidPositionIterator(boardClass, isFromBottomRight)
  if isFromBottomRight then
    return BaseBoardModel._ValidPositionIteratorFromBottomRight, boardClass, nil
  end
  return BaseBoardModel._ValidPositionIterator, boardClass, nil
end

function BaseBoardModel._ValidPositionIteratorFromBottomRight(boardClass, position)
  if position == nil then
    return BaseBoardModel._CreatePosition(boardClass, boardClass.HorizontalTiles, boardClass.VerticalTiles)
  end
  local x = position.m_x
  local y = position.m_y
  BoardPosition.Release(position)
  if x ~= 1 then
    x = x - 1
  else
    x = boardClass.HorizontalTiles
    y = y - 1
  end
  if y < 1 then
    return nil
  else
    return BaseBoardModel._CreatePosition(boardClass, x, y)
  end
end

function BaseBoardModel._ValidPositionIterator(boardClass, position)
  if position == nil then
    return BaseBoardModel._CreatePosition(boardClass, 1, 1)
  end
  local x = position.m_x
  local y = position.m_y
  BoardPosition.Release(position)
  if x ~= boardClass.HorizontalTiles then
    x = x + 1
  else
    x = 1
    y = y + 1
  end
  if y > boardClass.VerticalTiles then
    return nil
  else
    return BaseBoardModel._CreatePosition(boardClass, x, y)
  end
end

function BaseBoardModel:UpdatePerSecond()
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      item:DispatchComponentEvent("UpdatePerSecond")
    end
  end
end

function BaseBoardModel:SaveItemProperty(item)
end

function BaseBoardModel:_RemoveItemProperty(item)
  item:DispatchComponentEvent("OnRemoved")
  local position = item and item:GetPosition() or nil
  Log.Assert(position == nil or self.m_itemLayerModel:GetItem(position) ~= item, "Should remove from ItemLayerModel BEFORE remove from ItemManager.")
end

function BaseBoardModel:GetItem(position)
  return self.m_itemLayerModel:GetItem(position)
end

function BaseBoardModel:GetItemById(itemId)
  return self.m_itemLayerModel:GetItemById(itemId)
end

function BaseBoardModel:_SetItem(position, item, autoUpdateOrderState, noAnimation)
  self.m_itemLayerModel:SetItem(position, item, nil, noAnimation)
end

function BaseBoardModel:GetItemLayerCount(itemType)
  return self.m_itemLayerModel:GetItemCount(itemType)
end

function BaseBoardModel:GetStoredItemCountByCode(itemType)
  return 0
end

function BaseBoardModel:IsTileLock()
  return false
end

function BaseBoardModel:RemoveOrderRequireInInventory()
end

function BaseBoardModel:IsBoardFull()
  return not self.m_itemLayerModel:HasEmptyPosition()
end

function BaseBoardModel:GetEmptyPositionCount()
  return self.m_itemLayerModel:GetEmptyPositionCount()
end

function BaseBoardModel:FindEmptyPositionInValidOrder(isFromBottomRight)
  return self.m_itemLayerModel:FindEmptyPositionInValidOrder(isFromBottomRight)
end

function BaseBoardModel:FindEmptyPositionInCircleOrder(centerPosition)
  return self.m_itemLayerModel:FindEmptyPositionInCircleOrder(centerPosition)
end

function BaseBoardModel:FindEmptyPositionInAttach(itemCode)
  if StringUtil.IsNilOrEmpty(itemCode) then
    return nil
  end
  local itemType = ItemUtility.GetItemTypeByCode(itemCode)
  if itemType ~= itemCode then
    return
  end
  return self.m_itemLayerModel:FindEmptyPositionInAutoAttach(itemType)
end

function BaseBoardModel:IsInAccelerating()
  return false
end

function BaseBoardModel:FindEmptyPositionInSpreadOrder(centerPosition, openedPosition)
  return self.m_itemLayerModel:FindEmptyPositionInSpreadOrder(centerPosition, openedPosition)
end

function BaseBoardModel:GetOrderModel()
  return self.m_orderModel
end

function BaseBoardModel:GetOrderCodeStateMap()
  assert(false, "GetOrderCodeStateMap()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseBoardModel:GetOrderCodeRequireCount()
  assert(false, "GetOrderCodeRequireCount()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseBoardModel:GetItemScoresByGenerator(gen)
  return self.m_orderModel:GetItemScoresByGenerator(gen)
end

function BaseBoardModel:GetItemScoreByUnlockGen(itemCode)
  return self.m_orderModel:GetItemScoreByUnlockGen(itemCode)
end

function BaseBoardModel:GetITItemAvgScore(item)
  return self.m_orderModel:GetITItemAvgScore(item)
end

function BaseBoardModel:GenerateItem(position, code, cost, bFromSpread, autoUpdateOrderState)
  local tokenInfo
  if bFromSpread then
    tokenInfo = ItemToken.GenerateTokenWhenSpreadItem(code, cost and cost.costEnergy, self.GetGameMode and self:GetGameMode())
  end
  local newItem, unlock = ItemModelFactory.CreateWithCode(self, position, code, true, nil, tokenInfo)
  if cost then
    newItem:FromSerialization(cost)
  end
  if not cost or cost.itemScore == nil then
    newItem.itemScore = self:GetItemScoreByUnlockGen(code)
  end
  self:SaveItemProperty(newItem)
  self:_SetItem(position, newItem, autoUpdateOrderState)
  if unlock and newItem and GM.ItemDataModel:IsUnlockedRewardConfigured(newItem:GetType()) then
    self.event:Call(BoardEventType.ItemUnlocked, position)
  end
  self.m_testMergeAllDisableItem[newItem] = true
  return newItem
end

function BaseBoardModel:GenerateShowItem(position, code)
  local newItem, unlock = ItemModelFactory.CreateWithCode(self, position, code, true)
  return newItem
end

function BaseBoardModel:ReplaceItem(sourceItem, newItemCode, cost, autoUpdateOrderState)
  self:RemoveItem(sourceItem, false)
  local newItem = self:GenerateItem(sourceItem:GetPosition(), newItemCode, cost, nil, autoUpdateOrderState)
  local message = {Source = sourceItem, New = newItem}
  EventDispatcher.DispatchEvent(EEventType.ItemReplaced, message)
  return newItem
end

function BaseBoardModel:RemoveItem(item, autoUpdateOrderState, noAnimation)
  self:_SetItem(item:GetPosition(), nil, autoUpdateOrderState, noAnimation)
  self:_RemoveItemProperty(item)
end

function BaseBoardModel:SpreadItem(sourceItem, newItemPosition, newItemCode, logSpread, originalCode, cost, autoUpdateOrderState, boardSpreadType)
  local newItem = self:GenerateItem(newItemPosition, newItemCode, cost, true, autoUpdateOrderState)
  local OriginalItem
  if originalCode ~= nil then
    OriginalItem = self:GenerateShowItem(newItemPosition, originalCode)
  end
  local message = {
    Source = sourceItem,
    New = newItem,
    OriginalItem = OriginalItem,
    BoardSpreadType = boardSpreadType,
    Cost = cost and cost.costEnergy
  }
  self.event:Call(BoardEventType.SpreadItem, message)
  local scoreMap = self:GetItemScoresByGenerator(sourceItem:GetCode())
  if scoreMap and scoreMap[newItemCode] then
    newItem.itemScore = scoreMap[newItemCode]
  end
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {
      itf = self.IsInventoryFull and self:IsInventoryFull() and 1 or 0,
      m = GM.SceneManager:GetGameMode() == EGameMode.Main and 1 or 0
    }, self:GetGameMode())
  end
  return message, newItem.itemScore
end

function BaseBoardModel:DragItem(item, targetPosition)
  assert(false, "DragItem()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseBoardModel:Refresh(functionName)
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      item:DispatchComponentEvent(functionName)
    end
  end
end

function BaseBoardModel:CanMergeAll(item)
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    return self.m_testMergeAllDisableItem[item] == nil
  end
  return true
end

function BaseBoardModel:ResetMergeAllDisableItem()
  self.m_testMergeAllDisableItem = {}
end

function BaseBoardModel:AddBubbleCount(code)
  self.m_bubbleCount = (self.m_bubbleCount or 0) + 1
  self.m_mapBubbleCode[code] = (self.m_mapBubbleCode[code] or 0) + 1
end

function BaseBoardModel:MinusBubbleCount(code)
  Log.Assert(self.m_bubbleCount and self.m_bubbleCount > 0, "\230\178\161\230\156\137\230\176\148\230\179\161\230\163\139\229\173\144\229\143\175\228\187\165\230\137\147\231\160\180\228\186\134")
  self.m_bubbleCount = self.m_bubbleCount - 1
  self.m_mapBubbleCode[code] = self.m_mapBubbleCode[code] - 1
  if self.m_mapBubbleCode[code] == 0 then
    self.m_mapBubbleCode[code] = nil
  end
end

function BaseBoardModel:GetItemManager()
  return self.m_itemManager
end

function BaseBoardModel:GetItemStoreModel()
  return self.m_itemStoreModel
end

function BaseBoardModel:IsToolBoxCollect()
  return self.m_bToolBoxCollect
end
