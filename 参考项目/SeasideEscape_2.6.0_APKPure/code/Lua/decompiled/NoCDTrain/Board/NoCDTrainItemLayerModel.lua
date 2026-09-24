NoCDTrainItemLayerModel = setmetatable({}, BaseItemLayerModel)
NoCDTrainItemLayerModel.__index = NoCDTrainItemLayerModel

function NoCDTrainItemLayerModel.Create(boardModel, dbTable, itemManager, fileName, activityType)
  local itemLayerModel = setmetatable({}, NoCDTrainItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, fileName, activityType)
  return itemLayerModel
end

function NoCDTrainItemLayerModel:Init(boardModel, dbTable, itemManager, fileName, activityType)
  BaseItemLayerModel.Init(self, boardModel)
  self.m_dbTable = dbTable
  self.m_itemManager = itemManager
  if not StringUtil.IsNilOrEmpty(fileName) then
    local fileConfig = require("Data.Config." .. fileName)
    if not Table.IsEmpty(fileConfig) then
      self.m_initCodeMap = fileConfig[activityType] or fileConfig.default
      if Table.IsEmpty(self.m_initCodeMap) then
        Log.Error("\233\162\157\229\164\150\230\163\139\231\155\152\230\180\187\229\138\168 \231\188\186\229\176\145\229\136\157\229\167\139\230\163\139\231\155\152\233\133\141\231\189\174\239\188\154\230\150\135\228\187\182\239\188\154" .. fileName .. ", activityType:" .. activityType)
        self.m_initCodeMap = fileConfig
      end
      local isConfigValid = #self.m_initCodeMap == boardModel.VerticalTiles
      if isConfigValid then
        for _, v in pairs(self.m_initCodeMap) do
          if Table.IsEmpty(v) or #v ~= boardModel.HorizontalTiles then
            isConfigValid = false
            break
          end
        end
      end
      if not isConfigValid then
        Log.Error("\229\176\143\230\163\139\231\155\152\229\136\157\229\167\139\233\133\141\231\189\174 \232\161\140\229\136\151\230\149\176\233\148\153\232\175\175")
        self.m_initCodeMap = nil
      end
    end
  end
  self.m_itemTypeCountMap = {}
  self.m_emptyCount = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles
  if not Table.IsEmpty(self.m_initCodeMap) and self.m_dbTable:IsEmpty() then
    for position in self.m_boardModel.GetValidPositionIterator() do
      local code = self.m_initCodeMap[position:GetY()][position:GetX()]
      local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
      if item ~= nil then
        self.m_itemManager:SetItem(item)
        self:SetItem(position, item)
      end
    end
  else
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

function NoCDTrainItemLayerModel:GetItem(position)
  if position == nil or not position:IsValid() then
    return nil
  end
  local itemId = self.m_items:GetValueOnPosition(position)
  return self.m_itemManager:GetItem(itemId)
end

function NoCDTrainItemLayerModel:SetItem(position, item)
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
end

function NoCDTrainItemLayerModel:_OnItemChange(itemType, addItem)
  self.m_itemTypeCountMap[itemType] = (self.m_itemTypeCountMap[itemType] or 0) + (addItem and 1 or -1)
  self.m_emptyCount = self.m_emptyCount + (addItem and -1 or 1)
end

function NoCDTrainItemLayerModel:GetEmptyPositionCount()
  return self.m_emptyCount
end

function NoCDTrainItemLayerModel:FilterItems(filter)
  local results = {}
  for position in self.m_boardModel.GetValidPositionIterator() do
    local itemModel = self:GetItem(position)
    if itemModel ~= nil and filter(itemModel) then
      table.insert(results, itemModel)
    end
  end
  return results
end

function NoCDTrainItemLayerModel:ResetData()
  self.m_itemTypeCountMap = {}
  self.m_emptyCount = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles
end

function NoCDTrainItemLayerModel:GetItemCount(itemType)
  return self.m_itemTypeCountMap[itemType] or 0
end

function NoCDTrainItemLayerModel:GetItemCountMap()
  return self.m_itemTypeCountMap
end
