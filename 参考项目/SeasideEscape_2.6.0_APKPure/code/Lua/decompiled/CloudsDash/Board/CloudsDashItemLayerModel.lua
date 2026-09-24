CloudsDashItemLayerModel = setmetatable({}, BaseUIBoardItemLayerModel)
CloudsDashItemLayerModel.__index = CloudsDashItemLayerModel

function CloudsDashItemLayerModel.Create(boardModel, dbTable, itemManager, initCodeMap)
  local itemLayerModel = setmetatable({}, CloudsDashItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  return itemLayerModel
end

function CloudsDashItemLayerModel:GetBoardModelClass()
  return CloudsDashHuntBoardModel
end

function CloudsDashItemLayerModel:SetItem(position, item, bLoading)
  if not position:IsValid() then
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
    EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {pos = position})
  end
end

function CloudsDashItemLayerModel:LoadFile(boardModel, initCodeMap, y, depth, bInverse)
  if not self.m_dbTable:IsEmpty() and y <= 1 then
    return
  end
  if Table.IsEmpty(initCodeMap) then
    return
  end
  if bInverse then
    local totalLength = #initCodeMap
    local moveRows = boardModel.VerticalTiles + 1 - y
    for position in self.m_boardModel._GetValidPositionIterator(self.BoardModelClass, 0, 1) do
      if moveRows >= position:GetY() then
        local code = initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())] and initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())][position:GetX()]
        local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
        if item ~= nil then
          self.m_itemManager:SetItem(item)
          self:SetItem(position, item, true)
        end
      end
    end
  else
    for position in self.m_boardModel._GetValidPositionIterator(self.BoardModelClass, 0, y) do
      local code = initCodeMap[position:GetY() + depth - y] and initCodeMap[position:GetY() + depth - y][position:GetX()]
      local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
      if item ~= nil then
        self.m_itemManager:SetItem(item)
        self:SetItem(position, item, true)
      end
    end
  end
  self:UpdateLockedEmptyPositionCount()
end
