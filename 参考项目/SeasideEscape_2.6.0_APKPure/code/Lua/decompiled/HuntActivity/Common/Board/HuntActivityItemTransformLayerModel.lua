HuntActivityItemTransformLayerModel = {}
HuntActivityItemTransformLayerModel.__index = HuntActivityItemTransformLayerModel

function HuntActivityItemTransformLayerModel.Create(boardModel, dbTable, itemManager)
  local model = setmetatable({}, HuntActivityItemTransformLayerModel)
  model:Init(boardModel, dbTable, itemManager)
  return model
end

function HuntActivityItemTransformLayerModel:Init(boardModel, dbTable, itemManager)
  self.m_boardModel = boardModel
  self.m_items = boardModel.CreateMatrix()
  self.m_dbTable = dbTable
  self.m_itemManager = itemManager
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
      else
        self.m_dbTable:Remove(key)
      end
    end
  end
end

function HuntActivityItemTransformLayerModel:GetItem(position)
  if position == nil or not position:IsValid() then
    return nil
  end
  local itemId = self.m_items:GetValueOnPosition(position)
  return self.m_itemManager:GetItem(itemId)
end

function HuntActivityItemTransformLayerModel:SetItem(position, item)
  if not position:IsValid() then
    return
  end
  local itemId = item and item:GetId()
  self.m_dbTable:Set(position:GetX() .. "_" .. position:GetY(), "itemId", itemId)
  self.m_items:SetValueOnPosition(position, itemId)
end

function HuntActivityItemTransformLayerModel:RemoveItem(item)
  self:SetItem(item:GetPosition(), nil)
  item:DispatchComponentEvent("OnRemoved")
  self.m_itemManager:RemoveItem(item:GetId())
end

function HuntActivityItemTransformLayerModel:LoadFile(boardModel, initCodeMap, y, depth, bInverse)
  if not self.m_dbTable:IsEmpty() and y <= 1 then
    return
  end
  if Table.IsEmpty(initCodeMap) then
    return
  end
  
  local function createItemFunc(position, code)
    local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
    if item ~= nil then
      self.m_itemManager:SetItem(item)
      self:SetItem(position, item, true)
    end
  end
  
  if bInverse then
    local totalLength = #initCodeMap
    local moveRows = boardModel.VerticalTiles + 1 - y
    for position in self.m_boardModel._GetValidPositionIterator(HuntActivityBoardModel, 0, 1) do
      if moveRows >= position:GetY() then
        local code = initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())] and initCodeMap[totalLength + 1 - (depth + moveRows - position:GetY())][position:GetX()]
        createItemFunc(position, code)
      end
    end
  else
    for position in self.m_boardModel._GetValidPositionIterator(HuntActivityBoardModel, 0, y) do
      local code = initCodeMap[position:GetY() + depth - y] and initCodeMap[position:GetY() + depth - y][position:GetX()]
      createItemFunc(position, code)
    end
  end
end
