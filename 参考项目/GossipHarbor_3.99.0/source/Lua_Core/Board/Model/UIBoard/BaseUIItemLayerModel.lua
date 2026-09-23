BaseUIItemLayerModel = setmetatable({}, BaseItemLayerModel)
BaseUIItemLayerModel.__index = BaseUIItemLayerModel

function BaseUIItemLayerModel.Create(boardModel, dbTable, itemManager)
  local itemLayerModel = setmetatable({}, BaseUIItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager)
  return itemLayerModel
end

function BaseUIItemLayerModel:Init(boardModel, dbTable, itemManager)
  BaseItemLayerModel.Init(self, boardModel)
  self.m_dbTable = dbTable
  self.m_itemManager = itemManager
  self.m_emptyCount = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles
  self.m_lockedEmptyPositionCount = 0
  self.m_mapItems = {}
  if not Table.IsEmpty(self.m_dbTable:GetValues()) then
    local positionArray = {}
    for key, data in pairs(self.m_dbTable:GetValues()) do
      local item = self.m_itemManager:GetItem(data.itemId)
      if item then
        local count = 1
        for value in string.gmatch(key, "([^_]+)") do
          positionArray[count] = tonumber(value)
          count = count + 1
        end
        local position = BoardPosition.Create(positionArray[1], positionArray[2])
        self.m_items:SetValueOnPosition(position, data.itemId)
        item:SetPosition(position)
        self:_OnItemChange(item, true)
      else
        self.m_dbTable:Remove(key)
      end
    end
  end
end

function BaseUIItemLayerModel:LoadFile(boardModel, initCodeMap, y, depth, bInverse, bScroll)
  if not self.m_dbTable:IsEmpty() and not bScroll and y <= 1 then
    return
  end
  if Table.IsEmpty(initCodeMap) then
    return
  end
  if bInverse then
    local totalLength = #initCodeMap
    local moveRows = boardModel.VerticalTiles + 1 - y
    for position in self.m_boardModel:GetValidPositionIterator() do
      if moveRows >= position:GetY() then
        local code = initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())] and initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())][position:GetX()]
        local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
        if item ~= nil then
          self.m_itemManager:SetItem(item)
          self:SetItem(position, item)
        end
      end
    end
  else
    for position in self.m_boardModel:GetValidPositionIterator(0, y) do
      local code = initCodeMap[position:GetY() + depth - y] and initCodeMap[position:GetY() + depth - y][position:GetX()]
      local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
      if item ~= nil then
        self.m_itemManager:SetItem(item)
        self:SetItem(position, item)
      end
    end
  end
end

function BaseUIItemLayerModel:ReInitBoard()
  self.m_dbTable:Drop()
  self.m_emptyCount = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles
  self.m_items = self.m_boardModel:CreateMatrix()
  self.m_mapItems = {}
end

function BaseUIItemLayerModel:GetItem(position)
  if position == nil or not self.m_boardModel:PositionIsValid(position) then
    return nil
  end
  local itemId = self.m_items:GetValueOnPosition(position)
  return self.m_itemManager:GetItem(itemId)
end

function BaseUIItemLayerModel:FilterItems(filter)
  local results = {}
  for position in self.m_boardModel:GetValidPositionIterator() do
    local itemModel = self:GetItem(position)
    if itemModel ~= nil and filter(itemModel) then
      table.insert(results, itemModel)
    end
  end
  return results
end

function BaseUIItemLayerModel:SetItem(position, item)
  if not self.m_boardModel:PositionIsValid(position) then
    return
  end
  local originalItem = self:GetItem(position)
  if originalItem then
    self:_OnItemChange(originalItem, false)
  end
  local itemId = item and item:GetId()
  self.m_dbTable:Set(position:GetKey(), "itemId", itemId)
  self.m_items:SetValueOnPosition(position, itemId)
  if item then
    self:_OnItemChange(item, true)
  end
end

function BaseUIItemLayerModel:_OnItemChange(item, addItem)
  self.m_emptyCount = self.m_emptyCount + (addItem and -1 or 1)
  if addItem then
    self.m_mapItems[item] = true
  else
    self.m_mapItems[item] = nil
  end
end

function BaseUIItemLayerModel:_GetEmptyPositionCount()
  return self.m_emptyCount
end

function BaseUIItemLayerModel:GetAllItems()
  return self.m_mapItems
end
