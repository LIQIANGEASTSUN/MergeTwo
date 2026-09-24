CacheItemType = {
  Queue = 1,
  Stack = 2,
  Stack2 = 3,
  Stack3 = 4
}
ItemCacheModel = {}
ItemCacheModel.__index = ItemCacheModel
local DBColumnCacheCode = "code"
local DBColumnCacheType = "type"
local DBColumnCost = "cost"
local DBColumnFreeScore = "freeScore"
local DBColumnShopGemCost = "shopGemCost"
local DBColumnBubbleGemCost = "bubbleGemCost"
local DBColumnCostEnergy = "costEnergy"
local DBColumnCacheItemId = "itemId"
local DBColumnCacheSunshineId = "sunshineId"

function ItemCacheModel.Create(dbTable, idGenerator)
  local itemCacheModel = setmetatable({}, ItemCacheModel)
  itemCacheModel:Init(dbTable, idGenerator)
  return itemCacheModel
end

function ItemCacheModel:Init(dbTable, idGenerator)
  self.m_dbTable = dbTable
  self.m_idGenerator = idGenerator
end

function ItemCacheModel:ResetData()
  self.m_itemIdList = {}
end

function ItemCacheModel:OnSyncDataFinished()
  self:ResetData()
  local removeList
  for id, data in pairs(self.m_dbTable:GetValues()) do
    local code = ItemUtility.CheckData(data.code)
    if code then
      self.m_dbTable:Set(id, DBColumnCacheCode, code)
    end
    table.insert(self.m_itemIdList, id)
    self:_ConvertCostData(id)
  end
  if removeList then
    for _, id in ipairs(removeList) do
      self.m_dbTable:Remove(id)
    end
  end
  self:_SortItemIdList()
end

function ItemCacheModel:_ConvertCostData(id)
  local cost = self.m_dbTable:GetValue(id, DBColumnCost)
  if StringUtil.IsNilOrEmpty(cost) then
    return
  end
  cost = json.decode(StringUtil.Replace(cost, "@", ","))
  self.m_dbTable:Remove(id, DBColumnCost)
  if not Table.IsEmpty(cost) then
    self.m_dbTable:BatchSet({
      [id] = {
        freeScore = cost.freeScore,
        shopGemCost = cost.shopGemCost,
        bubbleGemCost = cost.bubbleGemCost,
        costEnergy = cost.costEnergy
      }
    })
  end
end

function ItemCacheModel:PushItems(cachedItemCodes, type, costList, itemIdList, sunshineIdList)
  Log.Assert(IsNumber(type), "Wrong cacheItemType:" .. tostring(type))
  local values = {}
  for i, code in ipairs(cachedItemCodes) do
    local id = self.m_idGenerator:Generate()
    local freeScore = costList and costList[i].freeScore or GM.MainBoardModel:GetOrderModel():GetItemScoreByUnlockGen(code)
    values[id] = {
      code = code,
      type = type or CacheItemType.Queue,
      freeScore = freeScore,
      shopGemCost = costList and costList[i].shopGemCost or nil,
      bubbleGemCost = costList and costList[i].bubbleGemCost or nil,
      costEnergy = costList and costList[i].costEnergy or nil,
      itemId = itemIdList and itemIdList[i] or nil,
      sunshineId = sunshineIdList and sunshineIdList[i] or nil
    }
    if StringUtil.StartWith(code, ItemCodePrefix.Spokesperson) then
      values[id].type = CacheItemType.Stack3
    end
    table.insert(self.m_itemIdList, id)
  end
  self.m_dbTable:BatchSet(values)
  self:_SortItemIdList()
end

function ItemCacheModel:PopItem()
  if self:GetItemCount() ~= 0 then
    local code, cost, itemId, sunshineId = self:GetItem(1)
    self:RemoveItem(1)
    return code, cost, itemId, sunshineId
  end
  return nil
end

function ItemCacheModel:RemoveItem(index)
  local id = table.remove(self.m_itemIdList, index)
  self.m_dbTable:Remove(id)
end

function ItemCacheModel:GetItem(index)
  local id = self.m_itemIdList[index]
  if id then
    return self.m_dbTable:GetValue(id, DBColumnCacheCode), {
      freeScore = self.m_dbTable:GetValue(id, DBColumnFreeScore)
    }, self.m_dbTable:GetValue(id, DBColumnCacheItemId), self.m_dbTable:GetValue(id, DBColumnCacheSunshineId)
  end
end

function ItemCacheModel:GetItemCount()
  return #self.m_itemIdList
end

function ItemCacheModel:HasItemTypeInCache(itemType)
  local itemCode
  local utility = ItemUtility
  for index = 1, self:GetItemCount() do
    itemCode = self:GetItem(index)
    if utility.GetItemTypeByCode(itemCode) == itemType then
      return true
    end
  end
  return false
end

function ItemCacheModel:_SortItemIdList()
  local function itemIdComparer(a, b)
    local typeA = self.m_dbTable:GetValue(a, DBColumnCacheType) or CacheItemType.Queue
    
    local typeB = self.m_dbTable:GetValue(b, DBColumnCacheType) or CacheItemType.Queue
    if typeA ~= typeB then
      return typeA > typeB
    elseif typeA == CacheItemType.Queue then
      return tonumber(a) < tonumber(b)
    else
      return tonumber(a) > tonumber(b)
    end
  end
  
  table.sort(self.m_itemIdList, itemIdComparer)
end

function ItemCacheModel:GetItemCountByCode(itemType)
  local count = 0
  for i, id in pairs(self.m_itemIdList) do
    if self.m_dbTable:GetValue(id, DBColumnCacheCode) == itemType then
      count = count + 1
    end
  end
  return count
end

function ItemCacheModel:FilterItems(filter)
  local results = {}
  for i = 1, #self.m_itemIdList do
    local item = self:GetItem(i)
    if item ~= nil and filter(item) then
      table.insert(results, item)
    end
  end
  return results
end
