StoreFailedReason = {CannotStore = 1, InventoryFull = 2}
MainBoardModel = setmetatable({}, BaseSceneBoardModel)
MainBoardModel.__index = MainBoardModel

function MainBoardModel:Init()
  ModelHelper.DefineSyncData(self, "ItemData", GM.DBTableManager:GetTable(EDBTableConfigs.Item))
  ModelHelper.DefineSyncData(self, "ItemLayerData", GM.DBTableManager:GetTable(EDBTableConfigs.Board))
  ModelHelper.DefineSyncData(self, "ItemCacheData", GM.DBTableManager:GetTable(EDBTableConfigs.CacheItem))
  ModelHelper.DefineSyncData(self, "ItemStoreData", GM.DBTableManager:GetTable(EDBTableConfigs.Inventory))
  ModelHelper.DefineSyncData(self, "OrderRecentItemData", GM.DBTableManager:GetTable(EDBTableConfigs.OrderRecentItem))
  ModelHelper.DefineSyncData(self, "FixedOrderFinishData", GM.DBTableManager:GetTable(EDBTableConfigs.FixedOrderFinish))
  ModelHelper.DefineSyncData(self, "OrderLaneMetaData", GM.DBTableManager:GetTable(EDBTableConfigs.OrderLaneMeta))
  ModelHelper.DefineSyncData(self, "OrderData", GM.DBTableManager:GetTable(EDBTableConfigs.Order))
  local itemManager = ItemManager.Create(self.m_itemData, self)
  local fileName = "BoardModelConfig"
  local itemLayerModel = SceneItemLayerModel.Create(self, self.m_itemLayerData, itemManager, fileName)
  local itemCacheModel = ItemCacheModel.Create(self.m_itemCacheData, itemManager:GetIdGenerator())
  local orderModel = MainOrderModel.Create(self.m_fixedOrderFinishData, self.m_orderRecentItemData, self.m_orderData, self.m_orderLaneMetaData, self)
  BaseSceneBoardModel.Init(self, EGameMode.Main, itemManager, itemLayerModel, itemCacheModel, orderModel)
  self:InitExtraRewardLayer()
  self.m_itemStoreModel = ItemStoreModel.Create(self.m_itemStoreData, itemManager)
end

function MainBoardModel:LoadFileConfig()
  BaseSceneBoardModel.LoadFileConfig(self)
  self.m_itemStoreModel:LoadFileConfig()
end

function MainBoardModel:LoadServerConfig()
  if GM.SystemConfigModel:IsInitFinished() then
    self.m_bubbleMaxNum = GM.SystemConfigModel:GetConfig(SystemConfigKey.MainBoardBubbleNum)
  end
  self.m_orderModel:LoadServerConfig()
end

function MainBoardModel:OnSyncDataFinished()
  ItemChangeHelper.UpDateChangeStateOnStart()
  self.m_bubbleMaxNum = GM.SystemConfigModel:GetConfig(SystemConfigKey.MainBoardBubbleNum)
  self.m_itemStoreModel:OnSyncDataFinished()
  BaseSceneBoardModel.OnSyncDataFinished(self)
  self.m_itemStoreModel:TryInitCodeCountMap()
end

function MainBoardModel:UpdatePerSecond()
  self.m_orderModel:UpdatePerSecond()
  BaseSceneBoardModel.UpdatePerSecond(self)
end

function MainBoardModel:LateInit()
  self:_RestoreErrorData()
  if PlayerPrefs.GetInt(EPlayerPrefKey.PDItemCheck) == 0 then
    self:_CheckPDLevel()
  end
  local index = self.m_itemStoreModel:GetItemIndexByCode("pd_123_6")
  if index and self:GetStoredItemCount() > self:GetStoreSlotCount() then
    if self:IsBoardFull() then
      self.m_itemCacheModel:PushItems({"pd_123_6"}, CacheItemType.Stack)
      self.m_itemStoreModel:RemoveItemByIndex(index, false)
    else
      self:RetrieveStoredItemByData(self:GetStoredItemData(index), "fix_pd")
    end
  end
  self.m_orderModel:LateInit()
  self.m_itemStoreModel:LateInit()
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item.itemScore == nil then
      item.itemScore = self:GetItemScoreByUnlockGen(item:GetCode())
      self:SaveItemProperty(item)
    end
  end
  self.m_bToolBoxCollect = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ToolBoxCollect)
  if self.m_bToolBoxCollect then
    if GM.ItemDataModel:IsAnyToolUnlocked() then
      self:_TransformToolItems()
    else
      for i = 1, self.m_itemCacheModel:GetItemCount() do
        local code = self.m_itemCacheModel:GetItem(i)
        if ItemUtility.IsToolItem(code) then
          self:_TransformToolItems()
          break
        end
      end
    end
  else
    self:_ConvertToolToItem()
  end
end

function MainBoardModel:OnCheckResourcesFinished()
  if self.m_orderModel.OnCheckResourcesFinished then
    self.m_orderModel:OnCheckResourcesFinished()
  end
end

function MainBoardModel:GetLevel()
  return GM.LevelModel:GetCurrentLevel()
end

function MainBoardModel:GetBubbleBrokenConfig()
  return GM.SystemConfigModel:GetConfig(SystemConfigKey.BubbleBroken)
end

function MainBoardModel:GetEnergyPropertyType()
  return EPropertyType.Energy
end

function MainBoardModel:GetSellingPropertyType()
  return EPropertyType.Gold
end

function MainBoardModel:StoreItem(item, dontRemoveView)
  local type = item:GetType()
  for _, v in pairs(ToolCode) do
    if type == v then
      local cmp = item:GetComponent(ItemCollectable)
      RewardApi.AcquireRewardsLogic(cmp:GetRewards(), EPropertySource.Give, EBIType.ItemCollect)
      self:RemoveItem(item, false)
      self.event:Call(BoardEventType.StoreItem, {Source = item})
      return true
    end
  end
  if not self:CanItemStore(item) then
    self.event:Call(BoardEventType.StoreFailed, {
      Item = item,
      Reason = StoreFailedReason.CannotStore
    })
    return false
  end
  local bProducerItem = false
  if self:CanStoreToProducerInventory(item:GetType()) then
    bProducerItem = true
  end
  if bProducerItem == false and self:IsInventoryFull() then
    self.event:Call(BoardEventType.StoreFailed, {
      Item = item,
      Reason = StoreFailedReason.InventoryFull
    })
    return false
  end
  self.m_itemStoreModel:AddItem(item)
  self:_SetItem(item:GetPosition(), nil)
  GM.BIManager:LogAction(EBIType.StoreItem, {
    code = item:GetCode(),
    id = item:GetId(),
    pro = self.m_itemStoreModel:GetItemCountWithoutProducer() .. "/" .. self.m_itemStoreModel:GetSlotCountWithoutProducer()
  })
  self.event:Call(BoardEventType.StoreItem, {Source = item, DontRemoveView = dontRemoveView})
  EventDispatcher.DispatchEvent(EEventType.ItemStored)
  return true
end

function MainBoardModel:CanStoreToProducerInventory(itemType)
  if GM.OpenFunctionModel:IsProducerOpenByLevelLock() then
    local nLevel = GM.MainBoardModel:GetProducerOpenLevelByType(itemType)
    if nLevel ~= nil and nLevel <= GM.LevelModel:GetCurrentLevel() then
      return true
    end
  end
  return false
end

function MainBoardModel:IsInventoryFull()
  return self:GetStoredItemCount() >= self:GetStoreSlotCount()
end

function MainBoardModel:GetStoredItemCountByCode(itemCode)
  return self.m_itemStoreModel:GetItemCountByCode(itemCode)
end

function MainBoardModel:RemoveOrderRequireInInventory(itemCode)
  local itemId = self.m_itemStoreModel:RemoveItemByCode(itemCode)
  if not itemId then
    return
  end
  local itemModel = self.m_itemManager:GetItem(itemId)
  if not itemModel then
    return
  end
  self.m_itemManager:RemoveItem(itemId)
  return itemModel
end

function MainBoardModel:RetrieveStoredItemByData(data, refer)
  local item, position = self:CanRetrieveStoredItem(data)
  if not item then
    return false
  end
  self.m_itemStoreModel:RemoveItemByIndex(self.m_itemStoreModel:GetIndexByData(data))
  self:_SetItem(position, item)
  item:SetBoardModel(self)
  item:SetPosition(position)
  GM.BIManager:LogAction(EBIType.RetrieveItem, {
    id = item:GetId(),
    code = item:GetCode(),
    r = refer
  })
  self.event:Call(BoardEventType.RetrieveStoredItem, {Source = item})
  EventDispatcher.DispatchEvent(EEventType.ItemRetrieved, {New = item})
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {
      itf = self.IsInventoryFull and self:IsInventoryFull() and 1 or 0,
      m = GM.SceneManager:GetGameMode() == EGameMode.Main and 1 or 0
    })
  end
  return true
end

function MainBoardModel:RetrieveStoredItemByCode(code, refer)
  local iterateCount = self:GetStoredItemCount()
  for i = 1, iterateCount do
    local item = self:GetStoredItemByIndex(i)
    if item ~= nil and item:GetCode() == code then
      return self:RetrieveStoredItemByData(self:GetStoredItemData(i), refer)
    end
  end
  return false
end

function MainBoardModel:CanRetrieveStoredItem(data)
  local position = self:FindEmptyPositionInSpreadOrder(BaseSceneBoardModel.CreatePosition(1, BaseSceneBoardModel.VerticalTiles + 1))
  if position == nil then
    return false
  end
  local item = self.m_itemStoreModel:GetItemByData(data)
  if item == nil then
    Log.Assert(false, "item\228\184\141\232\131\189\228\184\186\231\169\186")
    return false
  end
  return item, position
end

function MainBoardModel:GetStoredItemByIndex(index)
  return self.m_itemStoreModel:GetItemByIndex(index)
end

function MainBoardModel:GetStoredItemByData(data)
  return self.m_itemStoreModel:GetItemByData(data)
end

function MainBoardModel:GetStoredItemData(index)
  return self.m_itemStoreModel:GetItemData(index)
end

function MainBoardModel:GetStoredItemCount()
  return self.m_itemStoreModel:GetItemCount()
end

function MainBoardModel:GetStoredIndexByType(type)
  return self.m_itemStoreModel:GetIndexByType(type)
end

function MainBoardModel:GetItemsCount(filter)
  local itemCount = {}
  for _, item in pairs(self.m_itemManager:GetAllItems()) do
    if not filter or filter(item) then
      local type = item:GetType()
      itemCount[type] = (itemCount[type] or 0) + 1
    end
  end
  return itemCount
end

function MainBoardModel:GetStoreSlotCount()
  local slotConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot)
  local nMaxNum = GM.MiscModel:GetInventoryCapInNumber() + slotConfig.DefaultNumber
  local nProducerItem = 0
  if GM.OpenFunctionModel:IsProducerOpenByLevelLock() then
    for i = 1, self.m_itemStoreModel:GetItemCount() do
      local itemData = self.m_itemStoreModel:GetItemByIndex(i)
      if itemData then
        local nLevel = self:GetProducerOpenLevelByType(itemData:GetType())
        if nLevel ~= nil and nLevel <= GM.LevelModel:GetCurrentLevel() then
          nProducerItem = nProducerItem + 1
        end
      end
    end
  else
    nMaxNum = nMaxNum + GM.MiscModel:GetInventoryProducerSizeInNumber()
  end
  return nMaxNum + nProducerItem, nProducerItem
end

function MainBoardModel:CanItemStore(item)
  if not self:CanItemMove(item) then
    return false
  end
  local itemTransform = item:GetComponent(ItemTransform)
  if itemTransform ~= nil and itemTransform:GetDuration() ~= nil then
    return false
  end
  local itemType = item:GetType()
  if itemType == ItemType.Bubble or itemType == ItemType.Ice then
    return false
  end
  local chainId = GM.ItemDataModel:GetChainId(itemType)
  if chainId == ItemChain.Crucible1 or chainId == ItemChain.Crucible2 or chainId == ItemChain.Crucible3 or chainId == ItemChain.Lotion1 or StringUtil.StartWith(chainId, ItemCodePrefix.Spokesperson) or StringUtil.StartWith(itemType, ItemCodePrefix.Dailyprogress) then
    return false
  end
  if item:GetComponent(ItemToken) ~= nil and not Table.IsEmpty(item:GetComponent(ItemToken):GetAllToken()) then
    return false
  end
  local itemSpread = item:GetComponent(ItemSpread)
  if itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Opening then
    return false
  end
  if itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Initializing and (StringUtil.StartWith(itemType, ItemCodePrefix.Sbox) or StringUtil.StartWith(itemType, ItemCodePrefix.Battery)) then
    return false
  end
  return true
end

function MainBoardModel:StoreHasEnoughRequirements(requirements)
  return self.m_itemStoreModel:HasEnoughRequirements(requirements)
end

function MainBoardModel:GetAllStoredItemsByChainId(chainID)
  return self.m_itemStoreModel:GetAllItemsByChainId(chainID)
end

function MainBoardModel:GetOrderModel()
  return self.m_orderModel
end

function MainBoardModel:GetOrders(type)
  return self.m_orderModel:GetOrders(type)
end

function MainBoardModel:TransformChainItems(mapChains, newItemType, callback)
  Log.Assert(mapChains, "transform chain map is nil")
  local typeNumberMap = {}
  
  local function recordType(type)
    if typeNumberMap[type] == nil then
      typeNumberMap[type] = 0
    end
    typeNumberMap[type] = typeNumberMap[type] + 1
  end
  
  local function typeFilter(type)
    return mapChains[GM.ItemDataModel:GetChainId(type)]
  end
  
  local arrRemovedItemsInBoard = {}
  local arrRemovedSunshineBoxScoreInBoard = {}
  local bNeedUpdateOrderState = false
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and (typeFilter(item:GetType()) or item:GetType() == ItemType.Bubble and typeFilter(item:GetComponent(ItemBubble):GetInnerItemCode())) then
      local sunshineId = item:GetSunshineId()
      if callback then
        callback(sunshineId)
      end
      self:RemoveItem(item, false)
      bNeedUpdateOrderState = true
      GM.BIManager:LogProject(EBIProjectType.RemoveItemRecord, {
        item:GetCode(),
        from = "TransformChainItems",
        id = item:GetId()
      })
      recordType(item:GetType())
      table.insert(arrRemovedItemsInBoard, item)
      if not StringUtil.IsNilOrEmpty(sunshineId) then
        table.insert(arrRemovedSunshineBoxScoreInBoard, SunshineOrderBoostModel.GetSunBoxScoreById(sunshineId))
      else
        table.insert(arrRemovedSunshineBoxScoreInBoard, -1)
      end
    end
  end
  local arrNoTransItems = {}
  local targetType
  for i, item in ipairs(arrRemovedItemsInBoard) do
    targetType = item:GetEndConversionType() or newItemType
    if targetType then
      local newItem = self:GenerateItem(item:GetPosition(), targetType, nil, nil, false)
      bNeedUpdateOrderState = true
      local message = {Source = item, New = newItem}
      self.event:Call(BoardEventType.TransformItem, message)
      local sunScore = arrRemovedSunshineBoxScoreInBoard[i]
      if 0 <= sunScore then
        GM.BIManager:LogTransform(item:GetType() .. "_" .. sunScore, targetType, 1, 1)
      else
        GM.BIManager:LogTransform(item:GetType(), targetType, 1, 1)
      end
    else
      arrNoTransItems[#arrNoTransItems + 1] = item
    end
  end
  if 0 < #arrNoTransItems then
    self.event:Call(BoardEventType.BatchRemoveItems, {Removed = arrNoTransItems})
  end
  local arrRemovedTypesInStorage = {}
  local arrRemovedSunshineBoxScoreInStorage = {}
  local i = 1
  while i <= self:GetStoredItemCount() do
    local item = self:GetStoredItemByIndex(i)
    if item ~= nil and typeFilter(item:GetType()) then
      self.m_itemStoreModel:RemoveItemByIndex(i)
      local sunshineId = item:GetSunshineId()
      if callback then
        callback(sunshineId)
      end
      self:_RemoveItemProperty(item)
      recordType(item:GetType())
      GM.BIManager:LogProject(EBIProjectType.RemoveItemRecord, {
        code = item:GetCode(),
        from = "TransformChainItems",
        id = item:GetId()
      })
      arrRemovedTypesInStorage[#arrRemovedTypesInStorage + 1] = item:GetType()
      if not StringUtil.IsNilOrEmpty(sunshineId) then
        arrRemovedSunshineBoxScoreInStorage[#arrRemovedSunshineBoxScoreInStorage + 1] = SunshineOrderBoostModel.GetSunBoxScoreById(sunshineId)
      else
        arrRemovedSunshineBoxScoreInStorage[#arrRemovedSunshineBoxScoreInStorage + 1] = -1
      end
    else
      i = i + 1
    end
  end
  local itemDataModel = GM.ItemDataModel
  for j, type in ipairs(arrRemovedTypesInStorage) do
    targetType = itemDataModel:GetEndConversionType(type) or newItemType
    if targetType then
      local newItem = self:GenerateItem(nil, targetType, nil, nil, false)
      bNeedUpdateOrderState = true
      self.m_itemStoreModel:AddItem(newItem)
      local sunScore = arrRemovedSunshineBoxScoreInStorage[j]
      if 0 <= sunScore then
        GM.BIManager:LogTransform(type .. "_" .. sunScore, targetType, 1, 1)
      else
        GM.BIManager:LogTransform(type, targetType, 1, 1)
      end
    end
  end
  local arrRemovedTypesInCache = {}
  local arrRemovedSunshineBoxScoreInCache = {}
  i = 1
  while i <= self:GetCachedItemCount() do
    local code, _, _, sunshineId = self:GetCachedItem(i)
    if typeFilter(code) then
      if callback then
        callback(sunshineId)
      end
      self:RemoveCachedItem(i)
      recordType(code)
      arrRemovedTypesInCache[#arrRemovedTypesInCache + 1] = code
      if not StringUtil.IsNilOrEmpty(sunshineId) then
        arrRemovedSunshineBoxScoreInCache[#arrRemovedSunshineBoxScoreInCache + 1] = SunshineOrderBoostModel.GetSunBoxScoreById(sunshineId)
      else
        arrRemovedSunshineBoxScoreInCache[#arrRemovedSunshineBoxScoreInCache + 1] = -1
      end
    else
      i = i + 1
    end
  end
  if 0 < #arrRemovedTypesInCache then
    local arrToCacheItemCodes = {}
    for j, type in ipairs(arrRemovedTypesInCache) do
      targetType = itemDataModel:GetEndConversionType(type) or newItemType
      if targetType then
        arrToCacheItemCodes[#arrToCacheItemCodes + 1] = targetType
        local sunScore = arrRemovedSunshineBoxScoreInCache[j]
        if 0 <= sunScore then
          GM.BIManager:LogTransform(type .. "_" .. sunScore, targetType, 1, 1)
        else
          GM.BIManager:LogTransform(type, targetType, 1, 1)
        end
      end
    end
    if 0 < #arrToCacheItemCodes then
      self:CacheItems(arrToCacheItemCodes, CacheItemType.Stack)
    end
  end
  if bNeedUpdateOrderState then
    self:UpdateOrderState()
  end
  EventDispatcher.DispatchEvent(EEventType.ChangeCachedItems)
  EventDispatcher.DispatchEvent(EEventType.InventoryItemUpdate)
  return typeNumberMap
end

function MainBoardModel:FinishBingoOrder(consumedItemType, activityType)
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item:GetType() == consumedItemType then
      self:RemoveItem(item)
      self.event:Call(BoardEventType.BatchRemoveItems, {
        Removed = {item}
      })
      EventDispatcher.DispatchEvent(EEventType.BingoOrderFinished, {activityType = activityType})
      return true, item
    end
  end
  return false, nil
end

function MainBoardModel:FinishActivityOrder(order, itemModel, activityType, rewardUiPos)
  self:FinishOrder(order, itemModel, activityType, rewardUiPos)
  self.m_orderModel:LogOrderAction(order, activityType, EBIType.OrderFinish, order.finishScore, order.costInfo)
end

function MainBoardModel:GetOrderCodeStateMap()
  local map = BaseSceneBoardModel.GetOrderCodeStateMap(self)
  local activityMap = GM.ActivityManager:GetOrderCodeStateMap()
  if next(activityMap) then
    map = Table.ShallowCopy(map)
    for code, count in pairs(activityMap) do
      map[code] = (map[code] or 0) + count
    end
  end
  return map
end

function MainBoardModel:TryFinishOrders(sortedOrders, itemModel)
  if GM.ActivityManager:TryFinishOrders(itemModel) then
    return
  end
  BaseSceneBoardModel.TryFinishOrders(self, sortedOrders, itemModel)
end

function MainBoardModel:RemoveCurtainCallOrderItems(order)
  order:SetFinished()
  local storePdItems = order:GetToStorePdItems()
  local slotCount = self:GetStoreSlotCount()
  local usedSlotCount = self:GetStoredItemCount()
  local bStoreSuccess = false
  if slotCount - usedSlotCount >= #storePdItems then
    for _, item in ipairs(storePdItems) do
      self:StoreItem(item, true)
    end
    bStoreSuccess = true
  elseif #storePdItems == 1 then
    local item = storePdItems[1]
    if self:CanStoreToProducerInventory(item:GetType()) then
      self:StoreItem(item, true)
      bStoreSuccess = true
    end
  end
  if not bStoreSuccess then
    for _, item in ipairs(storePdItems) do
      item:SetLocked(true)
    end
  end
  local hasStoredPdItems = order:GetStoredPdItems()
  if not Table.IsEmpty(hasStoredPdItems) then
    local index
    for _, item in ipairs(hasStoredPdItems) do
      index = self.m_itemStoreModel:GetIndexById(item:GetId())
      self.m_itemStoreModel:RemoveItemByIndex(index)
      self.m_itemStoreModel:AddItem(item)
    end
  end
  Table.ListAppend(storePdItems, hasStoredPdItems)
  local removedItems = order:GetToRemoveItems()
  for _, item in ipairs(removedItems) do
    self:RemoveItem(item, false)
  end
  return removedItems, storePdItems, bStoreSuccess
end

function MainBoardModel:GetCorrectChangeData()
  local arrAdd = self.m_arrAdd
  local arrDelete = self.m_arrDelete
  self.m_arrAdd = nil
  self.m_arrDelete = nil
  return arrAdd, arrDelete
end

function MainBoardModel:_CheckPDLevel()
  local mapGeneratorInfo = {}
  for i = 1, self.m_itemCacheModel:GetItemCount() do
    local code = self.m_itemCacheModel:GetItem(i)
    self:_AddGeneratorInfo(mapGeneratorInfo, code, nil, i)
  end
  local items = self.m_itemManager:GetAllItems()
  for _, v in pairs(items) do
    self:_AddGeneratorInfo(mapGeneratorInfo, v:GetCode(), v:GetId())
  end
  for _, id in ipairs(GM.MapDataModel:GetSlotsIds()) do
    if GM.MapDataModel:GetSlot(id).level ~= -1 then
      local chainId = ItemCodePrefix.MainGenerator .. string.sub(id, 4)
      if not mapGeneratorInfo[chainId] and GM.ItemDataModel:IsItemExist(ItemUtility.GetItemCode(chainId, 1)) then
        mapGeneratorInfo[chainId] = {
          totalLevel = 0,
          arrItems = {}
        }
      end
    end
  end
  self.m_arrAdd = {}
  self.m_arrDelete = {}
  for chainId, info in pairs(mapGeneratorInfo) do
    self:_CorrectChainState(chainId, info)
  end
  local deleteCacheItem = {}
  for _, v in pairs(self.m_arrDelete) do
    if v.cacheIndex then
      deleteCacheItem[#deleteCacheItem + 1] = v
    end
  end
  if not Table.IsEmpty(deleteCacheItem) then
    table.sort(deleteCacheItem, function(a, b)
      return a.cacheIndex > b.cacheIndex
    end)
    for _, v in ipairs(deleteCacheItem) do
      self.m_itemCacheModel:RemoveItem(v.cacheIndex)
    end
  end
  local bNeedUpdateOrderState = false
  for _, item in pairs(self.m_arrDelete) do
    if item.id then
      local item = self.m_itemManager:GetItem(item.id)
      if item:GetPosition() == nil then
        local index = self.m_itemStoreModel:GetIndexById(item:GetId())
        if index ~= nil then
          self.m_itemStoreModel:RemoveItemByIndex(index)
        end
        self:_RemoveItemProperty(item)
      else
        self:RemoveItem(item, false)
        bNeedUpdateOrderState = true
      end
      GM.BIManager:LogProject(EBIProjectType.RemoveItemRecord, {
        code = item and item:GetCode(),
        from = "CheckPDLevel",
        id = item:GetId()
      })
    end
  end
  if bNeedUpdateOrderState then
    self:UpdateOrderState()
  end
  if 0 < #self.m_arrAdd then
    RewardApi.AcquireRewardsLogic(self.m_arrAdd, EPropertySource.Give, EBIType.CorrectErrorData, CacheItemType.Stack)
  end
  if 0 < #self.m_arrDelete then
    local config = GM.ConfigModel:GetLocalConfig(LocalConfigKey.SyncValue)
    local reward = ConfigUtil.GetCurrencyFromStr(config.GeneratorCompensate)
    reward[PROPERTY_COUNT] = reward[PROPERTY_COUNT] * #self.m_arrDelete
    RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, EBIType.CorrectErrorData, CacheItemType.Stack)
  end
end

function MainBoardModel:_RestoreErrorData()
  local items = {}
  for _, v in pairs(self.m_itemManager:GetAllItems()) do
    items[v:GetId()] = true
  end
  for index = 1, self.m_itemStoreModel:GetItemCount() do
    local data = self.m_itemStoreModel:GetItemData(index)
    items[data.itemId] = nil
  end
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local itemId = self.m_itemLayerModel:GetItemId(position)
    if itemId ~= nil then
      items[itemId] = nil
    end
  end
  if next(items) ~= nil then
    for itemId, _ in pairs(items) do
      GM.BIManager:LogProject(EBIProjectType.RemoveErrorItem, itemId)
      local item = self.m_itemManager:GetItem(itemId)
      self.m_itemManager:RemoveItem(itemId)
    end
  end
end

function MainBoardModel:_AddGeneratorInfo(mapInfo, itemCode, itemId, cacheIndex)
  local code = ItemUtility.GetInnerCodeAndPrefixByCode(itemCode)
  if not StringUtil.StartWith(code, ItemCodePrefix.MainGenerator) then
    return
  end
  local chainId = GM.ItemDataModel:GetChainId(code)
  local level = GM.ItemDataModel:GetChainLevel(code)
  if not mapInfo[chainId] then
    mapInfo[chainId] = {
      totalLevel = 1 << level - 1,
      arrItems = {
        {
          id = itemId,
          level = level,
          cacheIndex = cacheIndex,
          code = code
        }
      }
    }
  else
    mapInfo[chainId].totalLevel = mapInfo[chainId].totalLevel + (1 << level - 1)
    mapInfo[chainId].arrItems[#mapInfo[chainId].arrItems + 1] = {
      id = itemId,
      level = level,
      cacheIndex = cacheIndex,
      code = code
    }
  end
end

local function sortByLevel(a, b)
  return a.level > b.level
end

function MainBoardModel:_CorrectChainState(chainId, info)
  local targetLevel = GM.MapDataModel:GetGeneratorTargetLevel(chainId)
  if info.totalLevel == targetLevel then
    return
  end
  local rest
  if targetLevel < info.totalLevel then
    rest = targetLevel
    table.sort(info.arrItems, sortByLevel)
    for _, item in ipairs(info.arrItems) do
      local level = 1 << item.level - 1
      if rest < level then
        self.m_arrDelete[#self.m_arrDelete + 1] = item
      else
        rest = rest - level
      end
    end
    if rest == 0 then
      return
    else
      rest = targetLevel - rest
    end
  else
    rest = info.totalLevel
  end
  if targetLevel > rest then
    local need = targetLevel - rest
    local level = 1
    while need ~= 0 do
      if need & 1 == 1 then
        self.m_arrAdd[#self.m_arrAdd + 1] = {
          [PROPERTY_TYPE] = ItemUtility.GetItemCode(chainId, level),
          [PROPERTY_COUNT] = 1
        }
      end
      level = level + 1
      need = need >> 1
    end
  end
end

function MainBoardModel:GetProducerInventoryConfig()
  return self.m_itemStoreModel:GetProducerInventoryConfig()
end

function MainBoardModel:GetProducerOpenLevelByType(type)
  return self.m_itemStoreModel:GetProducerOpenLevelByType(type)
end

function MainBoardModel:RestoreAccStorage(type)
  local accelerator = GM.PropItemManager:GetModel(EPropItemType.Accelerator)
  for _, v in pairs(self.m_itemManager:GetAllItems()) do
    if accelerator:IsAccelerableItem(v) and StringUtil.StartWith(v:GetType(), type) then
      v:DispatchComponentEvent("Accelerate")
    end
  end
end

function MainBoardModel:IsInAccelerating(item)
  return GM.PropItemManager:GetModel(EPropItemType.Accelerator):IsInAccelerating(item)
end

function MainBoardModel:GetAllItemsCodeMap()
  local mapCodes = {}
  for i = 1, self:GetCachedItemCount() do
    local code = self:GetCachedItem(i)
    if code ~= nil then
      mapCodes[code] = true
    end
  end
  for _, v in pairs(self.m_itemManager:GetAllItems()) do
    mapCodes[v:GetCode()] = true
  end
  return mapCodes
end

function MainBoardModel:PlayAccelerationAnimation(isStart)
  self.event:Call(BoardEventType.PlayAccelerationAnimation, {IsStart = isStart})
end

function MainBoardModel:AddLuckyStarItem(newItem, bCreate, bShow)
  local message = {
    New = newItem,
    bCreate = bCreate,
    bShow = bShow
  }
  self.event:Call(BoardEventType.AddLuckyStarItem, message)
end

function MainBoardModel:AddMagicCrucibleItem(newItem)
  self.event:Call(BoardEventType.AddMagicCrucibleItem, {New = newItem})
end

function MainBoardModel:AddSunshineItem(newItem)
  self.event:Call(BoardEventType.AddSunshineItem, {New = newItem})
end

function MainBoardModel:AddSunshineRaceItem(newItem)
  self.event:Call(BoardEventType.AddSunshineRaceItem, {New = newItem})
end

function MainBoardModel:ShowSunshineRaceItem(newItem, bRace)
  self.event:Call(BoardEventType.ShowSunshineRaceItem, {New = newItem, bRaceSource = bRace})
end

function MainBoardModel:AddTriggerPlaneItem(newItem, prefabName, bUseExterCustomerEffect, flyEffectDestroyDelay, speedUp, bGenerated)
  self.event:Call(BoardEventType.AddTriggerPlaneItem, {
    New = newItem,
    prefabName = prefabName,
    bUseExterCustomerEffect = bUseExterCustomerEffect,
    flyEffectDestroyDelay = flyEffectDestroyDelay,
    speedUp = speedUp,
    bGenerated = bGenerated
  })
end

function MainBoardModel:AddIceItem(code, duration)
  local position = self:FindEmptyPositionInValidOrder()
  if position == nil then
    return
  end
  local newItem = ItemModelFactory.CreateIce(self, position, code, ItemCodePrefix.Ice .. code)
  self:SaveItemProperty(newItem)
  self:_SetItem(position, newItem)
  self.m_testMergeAllDisableItem[newItem] = true
  self.event:Call(BoardEventType.AddIceItem, {New = newItem})
  GM.BIManager:LogAction(EBIType.IceItemAcquire, {
    c = ItemCodePrefix.Ice .. code,
    t = duration
  })
  return position
end

function MainBoardModel:_IsOrderRalatedItem(itemCode)
  local model = GM.ItemDataModel
  local orders = self.m_orderModel:GetOrders()
  for _, order in pairs(orders) do
    for _, code in pairs(order:GetRequirements()) do
      if model:IsRalatedItem(code, itemCode) then
        return true
      end
    end
  end
  return GM.ActivityManager:IsOrderRalatedItem(itemCode)
end

function MainBoardModel:GiveMagicCrucibleInitItem(givedItem)
  for _, itemCode in pairs(givedItem) do
    local newItem = GM.MainBoardModel:GenerateItem(self:FindEmptyPositionInValidOrder(), itemCode, nil, nil, false)
    self:AddMagicCrucibleItem(newItem)
    GM.BIManager:LogSpread(ActivityType.MagicCrucible, itemCode, 0, EGameMode.Main, nil, {
      id = newItem:GetCode()
    })
  end
  self:UpdateOrderState()
end

function MainBoardModel:InitExtraRewardLayer()
  self.m_boardExtraRewardLayers = require("Data.Config.BoardExtraRewardConfig", true)
  for _, config in pairs(self.m_boardExtraRewardLayers or {}) do
    config.BoxTypeMap = {}
    for _, boxConfig in pairs(config.BoxConfig or {}) do
      for _, pos in pairs(boxConfig.pos or {}) do
        if not config.BoxTypeMap[pos[1]] then
          config.BoxTypeMap[pos[1]] = {}
        end
        config.BoxTypeMap[pos[1]][pos[2]] = boxConfig.box
      end
    end
  end
end

function MainBoardModel:GetExtraRewardLayer()
  local resultConfig
  local layerKey = GM.ConfigModel:GetBoardExtraReward()
  resultConfig = self.m_boardExtraRewardLayers and self.m_boardExtraRewardLayers[layerKey and layerKey.param]
  return resultConfig
end

function MainBoardModel:CanMergeGeneratorToLevelByChain(chainId, level)
  local pdInLayer = self.m_itemLayerModel:FilterItems(function(item)
    local chainIds = {
      chainId,
      ItemCodePrefix.Cobweb .. chainId,
      ItemCodePrefix.PaperBox .. ItemCodePrefix.Cobweb .. chainId
    }
    for _, chain in ipairs(chainIds) do
      if ItemUtility.GetChainIdByCode(item:GetCode()) == chain then
        return true
      end
    end
  end) or {}
  local pdInStore = self.m_itemStoreModel:FilterItems(function(item)
    return GM.ItemDataModel:GetChainId(item:GetType()) == chainId
  end) or {}
  local pdInCache = self.m_itemCacheModel:FilterItems(function(item)
    return GM.ItemDataModel:GetChainId(item) == chainId
  end) or {}
  local val = 0
  for _, pdModel in ipairs(pdInLayer) do
    val = val + (1 << ItemUtility.GetChainLevelByCode(pdModel:GetCode()))
  end
  for _, pdModel in ipairs(pdInStore) do
    val = val + (1 << GM.ItemDataModel:GetChainLevel(pdModel:GetType()))
  end
  for _, pd in ipairs(pdInCache) do
    val = val + (1 << GM.ItemDataModel:GetChainLevel(pd))
  end
  return val >= 1 << level, pdInLayer, pdInStore, pdInCache
end

function MainBoardModel:_TransformToolItems()
  local codeNumMap = {}
  for i = self.m_itemCacheModel:GetItemCount(), 1, -1 do
    local code = self.m_itemCacheModel:GetItem(i)
    if ItemUtility.IsToolItem(code) then
      codeNumMap[code] = (codeNumMap[code] or 0) + 1
      self.m_itemCacheModel:RemoveItem(i)
    end
  end
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item then
      local code = item:GetCode()
      if ItemUtility.IsToolItem(code) then
        codeNumMap[code] = (codeNumMap[code] or 0) + 1
        self:RemoveItem(item, false)
      end
    end
  end
  for i = self.m_itemStoreModel:GetItemCount(), 1, -1 do
    local item = self.m_itemStoreModel:GetItemByIndex(i)
    local code = item:GetCode()
    if ItemUtility.IsToolItem(code) then
      codeNumMap[code] = (codeNumMap[code] or 0) + 1
      self.m_itemStoreModel:RemoveItemByIndex(i)
    end
  end
  local info = GM.MiscModel:GetToolTransformInfo()
  if not StringUtil.IsNilOrEmpty(info) then
    for _, str in pairs(StringUtil.Split(info, ";")) do
      local data = StringUtil.Split(str, "-")
      codeNumMap[data[1]] = (codeNumMap[data[1]] or 0) + tonumber(data[2])
    end
  end
  if not Table.IsEmpty(codeNumMap) then
    local numList = {}
    for code, num in pairs(codeNumMap) do
      table.insert(numList, code .. "-" .. num)
    end
    GM.MiscModel:SetToolTransformInfo(table.concat(numList, ";"))
  end
end

function MainBoardModel:_ConvertToolToItem()
  for toolType, _ in pairs(ToolCode) do
    local num = GM.PropertyDataManager:GetPropertyNum(toolType)
    local int, frac = math.modf(num)
    if 0 < frac then
      GM.PropertyDataManager:Consume(toolType, frac, EBIType.TransformItem, "board")
      local level = #ToolLevelAmountMap
      while 0 < level and 0 < frac do
        local amount = ToolLevelAmountMap[level]
        if frac >= amount then
          frac = frac - amount
          local itemCode = ItemUtility.GetItemCode(toolType, level)
          self:_AddToolItem(itemCode)
        end
        level = level - 1
      end
    end
  end
  local info = GM.MiscModel:GetToolTransformInfo()
  if not StringUtil.IsNilOrEmpty(info) then
    for _, str in pairs(StringUtil.Split(info, ";")) do
      local data = StringUtil.Split(str, "-")
      for i = 1, tonumber(data[2]) do
        self:_AddToolItem(data[1])
      end
    end
    GM.MiscModel:Clear(EMiscKey.ToolTransformInfo)
  end
  GM.MiscModel:Clear(EMiscKey.ToolTransFlag)
end

function MainBoardModel:_AddToolItem(itemCode)
  local position = self:FindEmptyPositionInValidOrder()
  if position ~= nil then
    self:GenerateItem(position, itemCode)
  else
    self.m_itemCacheModel:PushItems({itemCode}, CacheItemType.Stack)
  end
end

function MainBoardModel:IsOrderNeedLowerItem(itemCode)
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  local level = GM.ItemDataModel:GetChainLevel(itemCode)
  if chainId == nil or level == nil then
    return false
  end
  local orderRequiresMap = self:GetOrderCodeRequireCount()
  for code, _ in pairs(orderRequiresMap) do
    if chainId == GM.ItemDataModel:GetChainId(code) and level < GM.ItemDataModel:GetChainLevel(code) then
      return true
    end
  end
  return false
end

function MainBoardModel:IsCurtainCallSignShowPd(itemModel)
  if not (itemModel and GM.ConfigModel:IsCurtainCallSignOpen()) or itemModel:GetGameMode() ~= EGameMode.Main then
    return
  end
  return self:IsCurtainCallSignShowPdCode(itemModel:GetCode())
end

function MainBoardModel:IsCurtainCallSignShow(itemModel)
  if not (itemModel and GM.ConfigModel:IsCurtainCallSignOpen()) or not itemModel:GetGameMode() == EGameMode.Main then
    return
  end
  local code = itemModel:GetCode()
  if not GM.ItemDataModel:IsItemExist(code) then
    return
  end
  local chain = ItemUtility.GetChainIdByCode(code)
  local pdChain = chain and GM.ItemDataModel:GetChainGenerator(chain)
  if not pdChain then
    return
  end
  local pdCode = ItemUtility.GetItemCode(pdChain, 1)
  return self:IsCurtainCallSignShowPdCode(pdCode)
end

function MainBoardModel:IsCurtainCallSignShowPdCode(itemCode)
  if not GM.ConfigModel:IsCurtainCallSignOpen() then
    return
  end
  if not GM.ItemDataModel:IsPdItem(itemCode) then
    return
  end
  local pdChain = ItemUtility.GetChainIdByCode(itemCode)
  if not pdChain then
    return
  end
  for actType, _ in pairs(BingoDefinition) do
    local model = GM.ActivityManager:GetModel(actType)
    if model and model:CanShowBoardEntry() and Table.Contain(model:GetRelatedPDChain(), pdChain) then
      return false
    end
  end
  local series = tonumber(GM.ItemDataModel:GetModelConfig(itemCode).series) or 0
  local curtainCount = tonumber(GM.MiscModel:Get(EMiscKey.LastCurtainCallProducerSeries)) or 0
  if series > curtainCount and series ~= 0 then
    return
  end
  local arrOrders = self.m_orderModel:GetOrders()
  local requirementPdChainId, arrRequirements
  for _, order in pairs(arrOrders) do
    if order:GetType() ~= OrderType.CurtainCall then
      arrRequirements = order:GetRequirements()
      for _, requirement in ipairs(arrRequirements) do
        requirementPdChainId = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(requirement))
        if requirementPdChainId == pdChain then
          return
        end
      end
    end
  end
  return true
end

function MainBoardModel:GetNeedCurtainCall(itemCode)
  if not GM.ItemDataModel:IsItemExist(itemCode) then
    return
  end
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  if not chainId then
    return
  end
  local orders = self.m_orderModel:GetOrders(OrderType.CurtainCall)
  for _, order in ipairs(orders) do
    if order:GetPdChainId() == chainId then
      return order
    end
  end
end
