ItemStoreModel = {}
ItemStoreModel.__index = ItemStoreModel

function ItemStoreModel.Create(dbTable, itemManager)
  local itemStoreModel = setmetatable({}, ItemStoreModel)
  itemStoreModel:Init(dbTable, itemManager)
  return itemStoreModel
end

function ItemStoreModel:Init(dbTable, itemManager)
  self.m_dbTable = dbTable
  self.m_itemManager = itemManager
end

function ItemStoreModel:LoadFileConfig()
  self.m_arrProducerConfigInfos = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot).ProducerInventory
  Log.Assert(#self.m_arrProducerConfigInfos ~= 0, "\230\175\141\230\163\139\229\173\144\228\187\147\229\186\147\231\188\186\229\176\145\233\133\141\231\189\174")
  self.m_mapTypeAndLevel = {}
  self.m_slotDefaultNumber = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot).DefaultNumber
end

function ItemStoreModel:OnSyncDataFinished()
  self.m_itemDataList = {}
  for itemId, data in pairs(self.m_dbTable:GetValues()) do
    data.itemId = itemId
    table.insert(self.m_itemDataList, data)
  end
  table.sort(self.m_itemDataList, function(a, b)
    return a.storeTime < b.storeTime
  end)
  for i = #self.m_arrProducerConfigInfos, 1, -1 do
    local type = self.m_arrProducerConfigInfos[i].type
    if not GM.ItemDataModel:IsItemExist(type) then
      table.remove(self.m_arrProducerConfigInfos, i)
    else
      self.m_mapTypeAndLevel[type] = self.m_arrProducerConfigInfos[i].level
    end
  end
end

function ItemStoreModel:LateInit()
  for i = #self.m_itemDataList, 1, -1 do
    if not self:GetItemByIndex(i) then
      local data = self.m_itemDataList[i]
      GM.BIManager:LogErrorInfo("st_itm_nil", "itemId = " .. data.itemId .. " storeTime = " .. data.storeTime .. "\n")
      self:RemoveItemByIndex(i, false)
    end
  end
end

function ItemStoreModel:InitCodeCountMap()
  self.m_itemTypeCountMap = {}
  for _, data in pairs(self.m_itemDataList) do
    local item = self:GetItemByData(data)
    if item then
      local code = item:GetCode()
      self.m_itemTypeCountMap[code] = (self.m_itemTypeCountMap[code] or 0) + 1
    end
  end
end

function ItemStoreModel:TryInitCodeCountMap()
  if not self.m_itemTypeCountMap then
    self:InitCodeCountMap()
  end
end

function ItemStoreModel:AddItem(item)
  self.m_itemCountWithoutProducer = nil
  local id = item:GetId()
  local data = {
    itemId = id,
    storeTime = GM.GameModel:GetServerTime()
  }
  self.m_dbTable:Set(id, "storeTime", data.storeTime)
  table.insert(self.m_itemDataList, data)
  EventDispatcher.DispatchEvent(EEventType.InventoryEntryCountUpdate, {
    num = self:GetItemCountWithoutProducer()
  })
  local code = item:GetCode()
  self.m_itemTypeCountMap[code] = (self.m_itemTypeCountMap[code] or 0) + 1
end

function ItemStoreModel:RemoveItemByIndex(index, bUpdate)
  self.m_itemCountWithoutProducer = nil
  if index and index <= #self.m_itemDataList then
    if bUpdate ~= false then
      local code = self:GetItemByIndex(index):GetCode()
      if self.m_itemTypeCountMap[code] == nil then
        self:InitCodeCountMap()
        local biAct = code .. "-" .. (self.m_itemTypeCountMap[code] ~= nil and tostring(self.m_itemTypeCountMap[code]) or "empty")
        GM.BIManager:LogAction(EBIType.RetrieveItemItemError, biAct)
        Log.Error("RemoveItemByIndex error! " .. biAct)
      end
      self.m_itemTypeCountMap[code] = (self.m_itemTypeCountMap[code] or 1) - 1
    end
    local data = table.remove(self.m_itemDataList, index)
    EventDispatcher.DispatchEvent(EEventType.InventoryEntryCountUpdate, {
      num = self:GetItemCountWithoutProducer()
    })
    if data ~= nil then
      self.m_dbTable:Remove(data.itemId)
    end
  end
end

function ItemStoreModel:RemoveItemByCode(itemCode)
  self.m_itemCountWithoutProducer = nil
  for i = 1, #self.m_itemDataList do
    local item = self:GetItemByIndex(i)
    if item and item:GetCode() == itemCode then
      local data = table.remove(self.m_itemDataList, i)
      self.m_dbTable:Remove(data.itemId)
      EventDispatcher.DispatchEvent(EEventType.InventoryEntryCountUpdate, {
        num = self:GetItemCountWithoutProducer()
      })
      self.m_itemTypeCountMap[itemCode] = self.m_itemTypeCountMap[itemCode] - 1
      return data.itemId
    end
  end
end

function ItemStoreModel:GetAllItemsByChainId(chainId)
  local result = {}
  local item
  for i = 1, #self.m_itemDataList do
    item = self:GetItemByIndex(i)
    if item and GM.ItemDataModel:GetChainId(item:GetCode()) == chainId then
      table.insert(result, item)
    end
  end
  return result
end

function ItemStoreModel:GetIndexByData(data)
  for i = 1, #self.m_itemDataList do
    if self.m_itemDataList[i] == data then
      return i
    end
  end
end

function ItemStoreModel:GetIndexById(itemId)
  for i = 1, #self.m_itemDataList do
    if self.m_itemDataList[i].itemId == itemId then
      return i
    end
  end
end

function ItemStoreModel:GetItemByIndex(index)
  local data = self.m_itemDataList[index]
  return data and self:GetItemByData(data)
end

function ItemStoreModel:GetItemByData(data)
  return self.m_itemManager:GetItem(data.itemId)
end

function ItemStoreModel:GetItemData(index)
  return self.m_itemDataList[index]
end

function ItemStoreModel:GetItemIndexByCode(itemCode)
  for i = 1, #self.m_itemDataList do
    local item = self:GetItemByIndex(i)
    if item and item:GetCode() == itemCode then
      return i
    end
  end
end

function ItemStoreModel:GetItemCount()
  return #self.m_itemDataList
end

function ItemStoreModel:GetIndexByType(type)
  for i = 1, #self.m_itemDataList do
    local oItemData = self:GetItemByData(self.m_itemDataList[i])
    if oItemData ~= nil and oItemData:GetType() == type then
      return i
    end
  end
  return nil
end

function ItemStoreModel:HasEnoughRequirements(requirements)
  local map = {}
  for _, v in pairs(requirements) do
    if map[v] == nil then
      map[v] = 1
    else
      map[v] = map[v] + 1
    end
  end
  for k, v in pairs(map) do
    if v > self:GetItemCountByCode(k) then
      return false
    end
  end
  return true
end

function ItemStoreModel:GetItemCountByCode(itemCode)
  self:TryInitCodeCountMap()
  return self.m_itemTypeCountMap[itemCode] or 0
end

function ItemStoreModel:GetProducerInventoryConfig()
  return self.m_arrProducerConfigInfos
end

function ItemStoreModel:GetProducerOpenLevelByType(type)
  local nLevel = self.m_mapTypeAndLevel[type]
  return nLevel
end

function ItemStoreModel:FilterItems(filter)
  local results = {}
  for i = 1, #self.m_itemDataList do
    local item = self:GetItemByIndex(i)
    if item ~= nil and filter(item) then
      table.insert(results, item)
    end
  end
  return results
end

function ItemStoreModel:GetItemCountWithoutProducer(refresh)
  if self.m_itemCountWithoutProducer == nil or refresh then
    local nItemCount = self:GetItemCount()
    local nProducerItemCount = 0
    if GM.OpenFunctionModel:IsProducerOpenByLevelLock() then
      local itemData, nLevel
      for i = 1, nItemCount do
        itemData = self:GetItemByIndex(i)
        if itemData then
          nLevel = self:GetProducerOpenLevelByType(itemData:GetType())
          if nLevel ~= nil and nLevel <= GM.LevelModel:GetCurrentLevel() then
            nProducerItemCount = nProducerItemCount + 1
          end
        end
      end
    end
    self.m_itemCountWithoutProducer = nItemCount - nProducerItemCount
  end
  return self.m_itemCountWithoutProducer
end

function ItemStoreModel:GetSlotCountWithoutProducer()
  return GM.MiscModel:GetInventoryCapInNumber() + self.m_slotDefaultNumber
end
