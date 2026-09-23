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
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self._OnLoginFinished)
  self:InitSpreadRefreshFunc()
end

function ItemStoreModel:InitSpreadRefreshFunc()
  self:InitRefreshrestNumberZeroCD(function(message)
    return message[EBuffProperty.BuffItemcd] ~= nil
  end, function(itemSpread)
    return itemSpread:CanSupportCDBuff()
  end, "OnTimeSkip", EEventType.BuffPropertyConsume, nil, {
    nil,
    ItemSkipType.Buff
  })
  self:InitRefreshrestNumberZeroCD(function(message)
    local model = GM.ActivityManager:GetStartedActivityByDefinition(GeneratorBoostActivityDefinition)
    if model == nil then
      return false
    end
    return true
  end, function(itemSpread)
    return itemSpread:CanSupportGeneratorBoostCDBuff()
  end, "OnTimeSkip", EEventType.GeneratorBoostBuffActiveLogic, nil, {
    nil,
    ItemSkipType.Buff
  })
  self:InitRefreshrestNumberZeroCD(function(message)
    return true
  end, function(ItemSpread)
    return ItemSpread:CanSupportBoostDisco()
  end, "OnTimeSkipInZeroRestNumber", EEventType.TriggerBoostDiscoStarted, nil, {
    nil,
    ItemSkipType.Buff
  })
end

function ItemStoreModel:OnSyncDataFinished()
  self.m_itemDataList = {}
  for itemId, data in pairs(self.m_dbTable:GetValues()) do
    local item = self.m_itemManager:GetItem(itemId)
    if item ~= nil then
      data.itemId = itemId
      table.insert(self.m_itemDataList, data)
      if StringUtil.IsNilOrEmpty(data.codeStr) then
        self.m_dbTable:Set(data.itemId, "codeStr", item:GetCode())
      end
    else
      GM.BIManager:LogAction(EBIType.ItemNotFound, "ISM itemId:" .. tostring(itemId) .. " itemCode:" .. tostring(data.codeStr))
      self.m_dbTable:Remove(itemId)
    end
  end
  table.sort(self.m_itemDataList, function(a, b)
    if a.priority ~= nil and b.priority ~= nil then
      return a.priority < b.priority
    elseif a.priority ~= nil or b.priority ~= nil then
      return a.priority ~= nil
    end
    return a.storeTime < b.storeTime
  end)
  self.m_sortState = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.InventoryOrder)
  if self.m_sortState then
    self:Sort()
  end
end

function ItemStoreModel:_OnLoginFinished()
  if self.m_sortState == nil then
    return
  end
  if self.m_sortState == false and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.InventoryOrder) then
    self:Sort()
  end
  self.m_sortState = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.InventoryOrder)
end

function ItemStoreModel:InitRefreshrestNumberZeroCD(refreshActivationfunc, canItemSpreadFunc, SpreadFuncStr, eventType, finishFunc, listFuncParams, paramCount)
  listFuncParams = listFuncParams or {}
  paramCount = paramCount or 2
  
  local function func(self, message)
    if not refreshActivationfunc(message) then
      return
    end
    for i = 1, self:GetItemCount() do
      local item = self:GetItem(i)
      if item ~= nil then
        local itemSpread = item:GetComponent(ItemSpread)
        if itemSpread ~= nil and canItemSpreadFunc(itemSpread) then
          item:DispatchComponentEvent(SpreadFuncStr, table.unpack(listFuncParams, 1, paramCount))
        end
      end
    end
    if finishFunc then
      finishFunc(message)
    end
  end
  
  EventDispatcher.AddListener(eventType, self, func)
end

function ItemStoreModel:_OnBuffPropertyConsume(message)
  if message[EBuffProperty.BuffItemcd] == nil then
    return
  end
  for i = 1, self:GetItemCount() do
    local item = self:GetItem(i)
    if item ~= nil then
      local itemSpread = item:GetComponent(ItemSpread)
      if itemSpread ~= nil and itemSpread:CanSupportCDBuff() then
        item:DispatchComponentEvent("OnTimeSkip", nil, ItemSkipType.Buff)
      end
    end
  end
end

function ItemStoreModel:_OnGeneratorBoostBuffActiveLogic()
  local model = GM.ActivityManager:GetStartedActivityByDefinition(GeneratorBoostActivityDefinition)
  if model == nil then
    return
  end
  for i = 1, self:GetItemCount() do
    local item = self:GetItem(i)
    if item ~= nil then
      local itemSpread = item:GetComponent(ItemSpread)
      if itemSpread ~= nil and itemSpread:CanSupportGeneratorBoostCDBuff() then
        item:DispatchComponentEvent("OnTimeSkip", nil, ItemSkipType.Buff)
      end
    end
  end
end

function ItemStoreModel:Sort()
  local arrChainId = {}
  local mapChainItems = {}
  local type, chainId, arrChainItems
  for i = 1, self:GetItemCount() do
    local item = self:GetItem(i)
    if item ~= nil then
      type = item:GetType()
      chainId = GM.ItemDataModel:GetChainId(type)
      arrChainItems = mapChainItems[chainId]
      if not mapChainItems[chainId] then
        arrChainId[#arrChainId + 1] = chainId
        arrChainItems = {}
        mapChainItems[chainId] = arrChainItems
      end
      arrChainItems[#arrChainItems + 1] = item
    end
  end
  for _, arrItems in pairs(mapChainItems) do
    table.sort(arrItems, function(item1, item2)
      return GM.ItemDataModel:GetChainLevel(item1:GetType()) < GM.ItemDataModel:GetChainLevel(item2:GetType())
    end)
  end
  local arrBatchData = {}
  local index = 1
  for _, id in ipairs(arrChainId) do
    arrChainItems = mapChainItems[id]
    for _, item in ipairs(arrChainItems) do
      local itemId = item:GetId()
      arrBatchData[itemId] = {
        storeTime = self.m_dbTable:GetValue(itemId, "storeTime"),
        codeStr = item:GetCode(),
        priority = index
      }
      self.m_itemDataList[index] = {
        itemId = itemId,
        storeTime = self.m_dbTable:GetValue(itemId, "storeTime"),
        priority = index
      }
      index = index + 1
    end
  end
  self.m_dbTable:BatchSet(arrBatchData)
end

function ItemStoreModel:AddItem(item)
  local id = item:GetId()
  local data = {
    itemId = id,
    storeTime = GM.GameModel:GetServerTime()
  }
  self.m_dbTable:Set(id, "storeTime", data.storeTime)
  self.m_dbTable:Set(data.itemId, "codeStr", item:GetCode())
  table.insert(self.m_itemDataList, data)
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.InventoryOrder) then
    self:Sort()
  end
  GM.BIManager:LogAction(EBIType.InventoryAddItem, item:GetType())
end

function ItemStoreModel:RemoveItem(index)
  local item = self:GetItem(index)
  local data = self.m_itemDataList[index]
  table.remove(self.m_itemDataList, index)
  self.m_dbTable:Remove(data.itemId)
  GM.BIManager:LogAction(EBIType.InventoryRemoveItem, item:GetType())
end

function ItemStoreModel:GetItem(index)
  local data = self.m_itemDataList[index]
  return data and self.m_itemManager:GetItem(data.itemId)
end

function ItemStoreModel:GetItemCount()
  return #self.m_itemDataList
end
