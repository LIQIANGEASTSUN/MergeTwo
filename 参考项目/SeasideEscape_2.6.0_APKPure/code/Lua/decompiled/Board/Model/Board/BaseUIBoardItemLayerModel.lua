BaseUIBoardItemLayerModel = setmetatable({}, BaseItemLayerModel)
BaseUIBoardItemLayerModel.__index = BaseUIBoardItemLayerModel

function BaseUIBoardItemLayerModel.Create(boardModel, dbTable, itemManager, initCodeMap)
  local itemLayerModel = setmetatable({}, BaseUIBoardItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  return itemLayerModel
end

function BaseUIBoardItemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  BaseItemLayerModel.Init(self, boardModel)
  self.m_dbTable = dbTable
  self.m_itemManager = itemManager
  self.m_itemTypeCountMap = {}
  self.m_emptyCount = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles
  self.m_lockedEmptyPositionCount = 0
  if not self.m_dbTable:IsEmpty() then
    local positionArray = {}
    for key, data in pairs(self.m_dbTable:GetValues()) do
      local item = self.m_itemManager:GetItem(data.itemId)
      if item then
        local count = 1
        for value in string.gmatch(key, "([^_]+)") do
          positionArray[count] = tonumber(value)
          count = count + 1
        end
        local position = self.m_boardModel.CreatePosition(positionArray[1], positionArray[2])
        self.m_items:SetValueOnPosition(position, data.itemId)
        item:SetPosition(position)
        self:_OnItemChange(item:GetType(), true)
      else
        self.m_dbTable:Remove(key)
      end
    end
  end
end

function BaseUIBoardItemLayerModel:GetBoardModelClass()
  Log.Assert("BaseUIBoardItemLayerModel:GetBoardModelClass \230\152\175\232\153\154\229\135\189\230\149\176")
  return BaseUIBoardModel
end

function BaseUIBoardItemLayerModel:GetItem(position)
  if position == nil or not position:IsValid() then
    return nil
  end
  local itemId = self.m_items:GetValueOnPosition(position)
  return self.m_itemManager:GetItem(itemId)
end

function BaseUIBoardItemLayerModel:SetItem(position, item, bLoading, noAnimation, _)
  if not position:IsValid() then
    if item then
      GM.BIManager:LogProject(EBIProjectType.HuntSetItemError, {
        pos = position:ToString(),
        id = item:GetId(),
        code = item:GetCode()
      })
    end
    return
  end
  local originalItem = self:GetItem(position)
  if originalItem then
    self:_OnItemChange(originalItem:GetType(), false)
  end
  local itemId = item and item:GetId()
  self.m_dbTable:Set(position:GetX() .. "_" .. position:GetY(), "itemId", itemId)
  self.m_items:SetValueOnPosition(position, itemId)
  if item then
    self:_OnItemChange(item:GetType(), true)
  end
  if not bLoading then
    EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {pos = position, NoAnimation = noAnimation})
  end
end

function BaseUIBoardItemLayerModel:_OnItemChange(itemType, addItem)
  self.m_itemTypeCountMap[itemType] = (self.m_itemTypeCountMap[itemType] or 0) + (addItem and 1 or -1)
  self.m_emptyCount = self.m_emptyCount + (addItem and -1 or 1)
end

function BaseUIBoardItemLayerModel:GetItemCount(itemType)
  return self.m_itemTypeCountMap[itemType] or 0
end

function BaseUIBoardItemLayerModel:GetEmptyPositionCount()
  return math.max(0, self.m_emptyCount - self.m_lockedEmptyPositionCount)
end

function BaseUIBoardItemLayerModel:UpdateLockedEmptyPositionCount()
  self.m_lockedEmptyPositionCount = 0
  for position in self.m_boardModel.GetValidPositionIterator() do
    if self.m_boardModel:IsTileLock(position) and self.m_boardModel:GetItem(position, true) == nil then
      self.m_lockedEmptyPositionCount = self.m_lockedEmptyPositionCount + 1
    end
  end
end

function BaseUIBoardItemLayerModel:FilterItems(filter)
  local results = {}
  for position in self.m_boardModel.GetValidPositionIterator() do
    local itemModel = self.m_boardModel:GetItem(position)
    if itemModel ~= nil and filter(itemModel) then
      table.insert(results, itemModel)
    end
  end
  return results
end

function BaseUIBoardItemLayerModel:FindEmptyPositionInValidOrder()
  for position in self.m_boardModel.GetValidPositionIterator() do
    if not self.m_boardModel:IsTileLock(position) and self:GetItem(position) == nil then
      return position
    end
  end
end

function BaseUIBoardItemLayerModel:FindEmptyPositionInSpreadOrder(centerPosition, openedPosition)
  local currentPosition = centerPosition
  local maxTiles = math.max(self.m_boardModel.HorizontalTiles, self.m_boardModel.VerticalTiles)
  if not centerPosition:IsValid() then
    local overflowTiles = 0
    if 0 >= centerPosition:GetX() then
      overflowTiles = 1 - centerPosition:GetX()
    elseif maxTiles < centerPosition:GetX() then
      overflowTiles = centerPosition:GetX() - maxTiles
    end
    if 0 >= centerPosition:GetY() then
      overflowTiles = math.max(1 - centerPosition:GetY(), overflowTiles)
    elseif maxTiles < centerPosition:GetY() then
      overflowTiles = math.max(centerPosition:GetY() - maxTiles, overflowTiles)
    end
    maxTiles = maxTiles + overflowTiles
  end
  for i = 1, maxTiles do
    currentPosition = currentPosition + Vector.Create(-1, -1)
    local stepLength = 2 * i
    for direction = 1, 4 do
      for _ = 1, stepLength do
        currentPosition = currentPosition + BaseItemLayerModel.Directions4Way[direction]
        if currentPosition:IsValid() and not self.m_boardModel:IsTileLock(currentPosition) and self:GetItem(currentPosition) == nil then
          return currentPosition
        end
      end
    end
  end
  return openedPosition
end

function BaseUIBoardItemLayerModel:LoadFile(boardModel, initCodeMap, y, depth, bInverse)
  if not self.m_dbTable:IsEmpty() and y <= 1 then
    return
  end
  if Table.IsEmpty(initCodeMap) then
    return
  end
  if bInverse then
    local totalLength = #initCodeMap
    local moveRows = boardModel.VerticalTiles + 1 - y
    for position in self.m_boardModel._GetValidPositionIterator(self:GetBoardModelClass(), 0, 1) do
      if moveRows >= position:GetY() then
        local code = initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())] and initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())][position:GetX()]
        local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
        if item ~= nil then
          self.m_itemManager:SetItem(item)
          self:SetItem(position, item, true, nil, false)
          if not self.m_boardModel:IsTileLock(position) and self.m_boardModel:GetItemIllustratedBook() then
            self.m_boardModel:GetItemIllustratedBook():AddCacheItem(item:GetCode(), self.m_boardModel, item)
          end
        end
      end
    end
  else
    for position in self.m_boardModel._GetValidPositionIterator(self:GetBoardModelClass(), 0, y) do
      local code = initCodeMap[position:GetY() + depth - y] and initCodeMap[position:GetY() + depth - y][position:GetX()]
      local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
      if item ~= nil then
        self.m_itemManager:SetItem(item)
        self:SetItem(position, item, true, nil, false)
      end
    end
  end
  self:UpdateLockedEmptyPositionCount()
end
