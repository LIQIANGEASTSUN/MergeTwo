CacheItemType = {Type1 = 1, Type2 = 2}
ItemCacheModel = {}
ItemCacheModel.__index = ItemCacheModel
ItemCacheModel.DBColumnCacheCode = "codeStr"
ItemCacheModel.DBColumnCacheType = "type"
ItemCacheModel.DBColumnCacheItemId = "cacheItemId"

function ItemCacheModel.Create(dbTable, idGenerator)
  local itemCacheModel = setmetatable({}, ItemCacheModel)
  itemCacheModel:Init(dbTable, idGenerator)
  return itemCacheModel
end

function ItemCacheModel:Init(dbTable, idGenerator)
  self.m_dbTable = dbTable
  self.m_idGenerator = idGenerator
end

function ItemCacheModel:OnSyncDataFinished()
  self.m_itemIdList = {}
  for id, data in pairs(self.m_dbTable:GetReadOnlyValues()) do
    local itemCode = data[ItemCacheModel.DBColumnCacheCode]
    if GM.ItemDataModel:GetModelConfig(itemCode, true) ~= nil or ItemModelFactory.GetCodePrefixTargetType(itemCode) ~= nil then
      table.insert(self.m_itemIdList, id)
    end
  end
  self:_SortItemIdList()
end

function ItemCacheModel:ResetVar()
  self.m_itemIdList = {}
end

function ItemCacheModel:PushItems(cachedItemCodes, type, mapCacheItemId)
  mapCacheItemId = mapCacheItemId or Table.Empty
  for i, code in ipairs(cachedItemCodes) do
    local id = self.m_idGenerator:Generate()
    type = type or CacheItemType.Type2
    self.m_dbTable:Set(id, ItemCacheModel.DBColumnCacheCode, code)
    self.m_dbTable:Set(id, ItemCacheModel.DBColumnCacheType, type)
    if mapCacheItemId[i] ~= nil then
      self.m_dbTable:Set(id, ItemCacheModel.DBColumnCacheItemId, mapCacheItemId[i])
    end
    table.insert(self.m_itemIdList, id)
  end
  self:_SortItemIdList()
  if GameConfig.IsTestMode() then
    EventDispatcher.DispatchEvent(EEventType.TestPropertyMonitorItemCachePushed, {Items = cachedItemCodes, ItemCacheModel = self})
  end
end

function ItemCacheModel:PopItem()
  if self:GetItemCount() ~= 0 then
    local code, cachedItemId = self:GetItem(1)
    self:RemoveItem(1)
    return code, cachedItemId
  end
  return nil
end

function ItemCacheModel:RemoveItem(index)
  local id = table.remove(self.m_itemIdList, index)
  self.m_dbTable:Remove(id)
  if GameConfig.IsTestMode() then
    EventDispatcher.DispatchEvent(EEventType.TestPropertyMonitorItemCacheRemoved, {ItemCacheModel = self})
  end
end

function ItemCacheModel:GetItem(index)
  local id = self.m_itemIdList[index]
  if id ~= nil then
    return self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheCode), self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheItemId)
  else
    return nil
  end
end

function ItemCacheModel:GetItemCount()
  if self.m_dbTable:IsEmpty() and #self.m_itemIdList > 0 then
    self.m_itemIdList = {}
  end
  return #self.m_itemIdList
end

function ItemCacheModel:GetAllCacheItems()
  local allItems = {}
  for _, id in ipairs(self.m_itemIdList) do
    local code = self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheCode)
    local cacheItemId = self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheItemId)
    if allItems[code] == nil then
      allItems[code] = {
        Count = 0,
        CacheItemIdList = {}
      }
    end
    allItems[code].Count = allItems[code].Count + 1
    if not StringUtil.IsNilOrEmpty(cacheItemId) then
      allItems[code].CacheItemIdList[#allItems[code].CacheItemIdList + 1] = cacheItemId
    end
  end
  return allItems
end

function ItemCacheModel:GetAllCachedItemsWithSort()
  local allItems = {}
  for _, id in ipairs(self.m_itemIdList) do
    local code = self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheCode)
    table.insert(allItems, code)
  end
  return allItems
end

function ItemCacheModel:_SortItemIdList()
  local typeCache = {}
  for _, id in ipairs(self.m_itemIdList) do
    typeCache[id] = self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheType) or CacheItemType.Type1
  end
  
  local function itemIdComparer(a, b)
    local typeA = typeCache[a]
    local typeB = typeCache[b]
    if typeA ~= typeB then
      return typeA > typeB
    elseif typeA == CacheItemType.Type1 then
      return a < b
    else
      return b < a
    end
  end
  
  table.sort(self.m_itemIdList, itemIdComparer)
end

function ItemCacheModel:_GetAllCacheItemsForCheck()
  local allItems = {}
  for _, id in ipairs(self.m_itemIdList) do
    local code = self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheCode)
    local cacheItemId = self.m_dbTable:GetValue(id, ItemCacheModel.DBColumnCacheItemId)
    if allItems[code] == nil then
      allItems[code] = 0
    end
    allItems[code] = allItems[code] + 1
  end
  return allItems
end
