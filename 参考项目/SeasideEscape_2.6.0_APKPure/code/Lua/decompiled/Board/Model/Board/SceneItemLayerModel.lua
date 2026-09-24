SceneItemLayerModel = setmetatable({}, BaseItemLayerModel)
SceneItemLayerModel.__index = SceneItemLayerModel

function SceneItemLayerModel.Create(boardModel, dbTable, itemManager, fileName)
  local itemLayerModel = setmetatable({}, SceneItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, fileName)
  return itemLayerModel
end

function SceneItemLayerModel:Init(boardModel, dbTable, itemManager, fileName)
  BaseItemLayerModel.Init(self, boardModel)
  self.m_dbTable = dbTable
  self.m_itemManager = itemManager
  self.m_fileName = fileName
  self.m_itemTypeCountMap = {}
  self.m_itemTypeLookupMap = {}
  self.m_itemComponentLookupMap = {}
  self.m_emptyCount = boardModel.HorizontalTiles * boardModel.VerticalTiles
end

function SceneItemLayerModel:LoadFileConfig()
  self.m_initCodeMap = require("Data.Config." .. self.m_fileName)
end

function SceneItemLayerModel:ResetData()
  self.m_itemTypeCountMap = {}
  self.m_emptyCount = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles
end

function SceneItemLayerModel:OnSyncDataFinished()
  self:ResetData()
  if self.m_dbTable:IsEmpty() then
    for position in BaseSceneBoardModel.GetValidPositionIterator() do
      local code = self.m_initCodeMap[position:GetY()][position:GetX()]
      local item = ItemModelFactory.CreateWithCode(self.m_boardModel, position, code, true)
      if item ~= nil then
        self.m_itemManager:SetItem(item)
        self:SetItem(position, item)
      end
    end
  else
    local posArr = {}
    for key, data in pairs(self.m_dbTable:GetValues()) do
      local item = self.m_itemManager:GetItem(data.itemId)
      if item then
        local count = 1
        for p in string.gmatch(key, "([^_]+)") do
          posArr[count] = tonumber(p)
          count = count + 1
        end
        local pos = BaseSceneBoardModel.CreatePosition(posArr[1], posArr[2])
        self.m_items:SetValueOnPosition(pos, data.itemId)
        item:SetPosition(pos)
        self:_OnItemChange(item:GetType(), true)
        self:_BuildItemLookup(item)
      end
    end
  end
end

function SceneItemLayerModel:_OnItemChange(itemType, bAddItem)
  self.m_itemTypeCountMap[itemType] = (self.m_itemTypeCountMap[itemType] or 0) + (bAddItem and 1 or -1)
  self.m_emptyCount = self.m_emptyCount + (bAddItem and -1 or 1)
end

function SceneItemLayerModel:GetItem(position)
  if not position:IsValid() then
    return nil
  end
  local itemId = self.m_items:GetValueOnPosition(position)
  return self:GetItemById(itemId)
end

function SceneItemLayerModel:GetItemId(position)
  if not position:IsValid() then
    return nil
  end
  return self.m_items:GetValueOnPosition(position)
end

function SceneItemLayerModel:GetItemById(itemId)
  return self.m_itemManager:GetItem(itemId)
end

function SceneItemLayerModel:GetAllBoardItems()
  local items = {}
  for _, tbl in pairs(self.m_itemTypeLookupMap) do
    for k, v in pairs(tbl) do
      if k ~= "count" then
        table.insert(items, v)
      end
    end
  end
  return items
end

function SceneItemLayerModel:FilterItems(filter)
  local results = {}
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local itemModel = self:GetItem(position)
    if itemModel ~= nil and filter(itemModel) then
      table.insert(results, itemModel)
    end
  end
  return results
end

function SceneItemLayerModel:FilterItemsWithType(type)
  local lookupMap = self.m_itemTypeLookupMap[type]
  if lookupMap and lookupMap.count > 0 then
    local result = {}
    for key, item in pairs(lookupMap) do
      if key ~= "count" then
        table.insert(result, item)
      end
    end
    return result
  end
end

function SceneItemLayerModel:FilterItemsWithTypes(types)
  local result
  for _, type in pairs(types) do
    local lookupMap = self.m_itemTypeLookupMap[type]
    if lookupMap and lookupMap.count > 0 then
      result = result or {}
      for key, item in pairs(lookupMap) do
        if key ~= "count" then
          table.insert(result, item)
        end
      end
      return result
    end
  end
end

function SceneItemLayerModel:FilterItemsWithComponent(compType)
  local lookupMap = self.m_itemComponentLookupMap[compType]
  if lookupMap and lookupMap.count > 0 then
    local result = {}
    for key, item in pairs(lookupMap) do
      if key ~= "count" then
        table.insert(result, item)
      end
    end
    return result
  end
end

function SceneItemLayerModel:SetItem(position, item)
  if not position or not position:IsValid() then
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
  self:_UpdateLookupMap(position, originalItem, item)
end

function SceneItemLayerModel:GetItemCount(itemType)
  return self.m_itemTypeCountMap[itemType] or 0
end

function SceneItemLayerModel:GetEmptyPositionCount()
  return self.m_emptyCount
end

function SceneItemLayerModel:_UpdateLookupMap(position, oldItem, newItem)
  if oldItem and not newItem then
    self:_RemoveItemLookup(oldItem)
  end
  if newItem then
    if not oldItem then
      self:_BuildItemLookup(newItem)
    else
      local t = newItem:GetType()
      local id = newItem:GetId()
      if not self.m_itemTypeLookupMap[t] or not self.m_itemTypeLookupMap[t][id] then
        self:_BuildItemLookup(newItem)
      end
    end
  end
end

function SceneItemLayerModel:_RemoveItemLookup(item)
  local t = item:GetType()
  local id = item:GetId()
  local typeLookupMap = self.m_itemTypeLookupMap[t]
  if typeLookupMap and typeLookupMap[id] == item then
    typeLookupMap[id] = nil
    typeLookupMap.count = typeLookupMap.count - 1
  else
    Log.Error("item " .. tostring(id) .. "(" .. tostring(t) .. ") " .. tostring(item:GetPosition():ToString()) .. " not exist in SceneItemLayerModel.itemTypeLookupMap")
  end
  local components = item:GetCompleteComponents()
  for comp, _ in pairs(components) do
    local compLookup = self.m_itemComponentLookupMap[comp]
    if compLookup and compLookup[id] == item then
      compLookup[id] = nil
      compLookup.count = compLookup.count - 1
    else
      Log.Error("item " .. tostring(id) .. "(" .. tostring(t) .. ") " .. tostring(item:GetPosition():ToString()) .. " component not registered in SceneItemLayerModel.itemComponentLookupMap")
    end
  end
end

function SceneItemLayerModel:_BuildItemLookup(item)
  local t = item:GetType()
  local id = item:GetId()
  local typeLookupMap = self.m_itemTypeLookupMap[t]
  if not typeLookupMap then
    typeLookupMap = {count = 0}
    self.m_itemTypeLookupMap[t] = typeLookupMap
  end
  if not typeLookupMap[id] then
    typeLookupMap[id] = item
    typeLookupMap.count = typeLookupMap.count + 1
  else
    Log.Assert(typeLookupMap[id] == item, "typeLookupMap error:" .. tostring(t) .. " " .. tostring(id))
  end
  local components = item:GetCompleteComponents()
  for comp, _ in pairs(components) do
    local compLookup = self.m_itemComponentLookupMap[comp]
    if not compLookup then
      compLookup = {count = 0}
      self.m_itemComponentLookupMap[comp] = compLookup
    end
    if not compLookup[id] then
      compLookup[id] = item
      compLookup.count = compLookup.count + 1
    else
      Log.Assert(compLookup[id] == item, "componentLookupMap error:" .. tostring(t) .. " " .. tostring(id))
    end
  end
end
