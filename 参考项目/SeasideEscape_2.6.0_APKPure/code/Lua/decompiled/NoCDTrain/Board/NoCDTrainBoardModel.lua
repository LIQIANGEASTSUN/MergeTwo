NoCDTrainBoardModel = setmetatable({}, BaseSceneBoardModel)
NoCDTrainBoardModel.__index = NoCDTrainBoardModel
NoCDTrainBoardModel.DefaultHorizontalTiles = 5
NoCDTrainBoardModel.DefaultVerticalTiles = 5
NoCDTrainBoardModel.HorizontalTiles = 5
NoCDTrainBoardModel.VerticalTiles = 5
NoCDTrainBoardModel.TileSize = 156

function NoCDTrainBoardModel.Create(itemDataTable, itemLayerDataTable, itemCacheDataTable, fileName, activityType, width, height)
  local boardModel = setmetatable({}, NoCDTrainBoardModel)
  NoCDTrainBoardModel.HorizontalTiles = width or NoCDTrainBoardModel.DefaultHorizontalTiles
  NoCDTrainBoardModel.VerticalTiles = height or NoCDTrainBoardModel.DefaultVerticalTiles
  boardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, fileName, activityType)
  return boardModel
end

function NoCDTrainBoardModel:Destroy()
  BaseSceneBoardModel.Destroy(self)
  for seq, _ in pairs(self.m_mapItemRemoveSeq) do
    seq:Kill()
  end
  self.m_mapItemRemoveSeq = {}
end

function NoCDTrainBoardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, fileName, activityType)
  local idGenerator = GM.MainBoardModel:GetItemManager():GetIdGenerator()
  self.m_itemManager = ItemManager.Create(itemDataTable, self, idGenerator)
  self.m_itemManager:OnSyncDataFinished()
  self.m_activityType = activityType
  self.m_mapItemRemoveSeq = {}
  local itemLayerModel = NoCDTrainItemLayerModel.Create(self, itemLayerDataTable, self.m_itemManager, fileName, activityType)
  DEFINE_ITEM_EVENT(self, "Break")
  self.m_itemCacheModel = ItemCacheModel.Create(itemCacheDataTable, idGenerator)
  self.m_itemCacheModel:OnSyncDataFinished()
  ModelHelper.DefineSyncData(self, "ItemStoreData", GM.DBTableManager:GetTable(EDBTableConfigs.Inventory))
  BaseSceneBoardModel.Init(self, EGameMode.NoCDTrain, self.m_itemManager, itemLayerModel, self.m_itemCacheModel, nil)
  self.m_itemStoreModel = GM.MainBoardModel:GetItemStoreModel()
end

function NoCDTrainBoardModel:GetActivityType()
  return self.m_activityType
end

function NoCDTrainBoardModel:LoadFileConfig()
  self.m_promptConfig = {}
  local promptConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.BoardPrompt)
  for _, promptConfig in ipairs(promptConfigs) do
    self.m_promptConfig[promptConfig.Type] = promptConfig
  end
end

function NoCDTrainBoardModel:OnSyncDataFinished()
end

function NoCDTrainBoardModel:ResetData()
  self.m_itemManager:ResetData()
  self.m_itemLayerModel:ResetData()
  self.m_itemCacheModel:ResetData()
end

function NoCDTrainBoardModel:_SetItem(position, item, autoUpdateOrderState)
  BaseBoardModel._SetItem(self, position, item, autoUpdateOrderState)
  if autoUpdateOrderState ~= false then
    EventDispatcher.DispatchEvent(EEventType.UpdateOrderState, {
      x = position and position.m_x,
      y = position and position.m_y
    })
    EventDispatcher.DispatchEvent(EEventType.UpdateItemCheck)
  end
end

function NoCDTrainBoardModel:UpdateOrderState()
  EventDispatcher.DispatchEvent(EEventType.UpdateOrderState)
  EventDispatcher.DispatchEvent(EEventType.UpdateItemCheck)
end

function NoCDTrainBoardModel:Update()
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      item:DispatchComponentEvent("Update")
    end
  end
end

function NoCDTrainBoardModel:UpdatePerSecond()
  BaseBoardModel.UpdatePerSecond(self)
end

function NoCDTrainBoardModel.CreateMatrix()
  return BaseBoardModel._CreateMatrix(NoCDTrainBoardModel)
end

function NoCDTrainBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(NoCDTrainBoardModel, x, y)
end

function NoCDTrainBoardModel.CreatePositionFromLocalPosition(localPositionX, localPositionY)
  return BaseBoardModel._CreatePositionFromLocalPosition(NoCDTrainBoardModel, localPositionX, localPositionY)
end

function NoCDTrainBoardModel.GetValidPositionIterator()
  return BaseBoardModel._GetValidPositionIterator(NoCDTrainBoardModel)
end

function NoCDTrainBoardModel:FindRandomPosition()
  local positions = {}
  for position in self.GetValidPositionIterator() do
    if self:GetItem(position) == nil then
      table.insert(positions, BoardPosition.Copy(position))
    end
  end
  local ret = BoardPosition.Copy(Table.ListRandomSelectOne(positions))
  for _, p in ipairs(positions) do
    BoardPosition.Release(p)
  end
  return ret
end

function NoCDTrainBoardModel:GetItemCacheModel()
  return self.m_itemCacheModel
end

function NoCDTrainBoardModel:GetOrderCodeStateMap()
  return Table.Empty
end

function NoCDTrainBoardModel:GetOrderCodeRequireCount()
  local model = GM.ActivityManager:GetModel(self.m_activityType)
  if model then
    return model:GetMapNeedOrderItemCodes()
  end
  return {}
end

function NoCDTrainBoardModel:GetGameMode()
  return EGameMode.NoCDTrain
end

function NoCDTrainBoardModel:GetOrders()
  return {}
end

function NoCDTrainBoardModel:GetEnergyPropertyType()
  return EPropertyType.Energy
end

function NoCDTrainBoardModel:GetSellingPropertyType()
  return EPropertyType.Gold
end

function NoCDTrainBoardModel:GetItemScoresByGenerator(gen)
  return nil
end

function NoCDTrainBoardModel:GetItemScoreByUnlockGen(itemCode)
  return GM.MainBoardModel:GetItemScoreByUnlockGen(itemCode)
end

function NoCDTrainBoardModel:GetITItemAvgScore(item)
  return 0
end

function NoCDTrainBoardModel:FinishBingoOrder(consumedItemType, x, y, activityType, itemModel)
  if itemModel and itemModel:GetCode() == consumedItemType then
    self:RemoveItem(itemModel)
    self.event:Call(BoardEventType.FinishTrainOrder, {
      Removed = {itemModel},
      ActivityType = activityType,
      PosX = x,
      PosY = y
    })
    EventDispatcher.DispatchEvent(EEventType.BingoOrderFinished, {activityType = activityType})
    return true, itemModel
  end
  for position in NoCDTrainBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item:GetType() == consumedItemType then
      self:RemoveItem(item)
      self.event:Call(BoardEventType.FinishTrainOrder, {
        Removed = {item},
        ActivityType = activityType,
        PosX = x,
        PosY = y
      })
      EventDispatcher.DispatchEvent(EEventType.BingoOrderFinished, {activityType = activityType})
      return true, item
    end
  end
  return false, nil
end

function NoCDTrainBoardModel:GetItemLayerCount(itemType, onlyCurBoard)
  if onlyCurBoard then
    return self.m_itemLayerModel:GetItemCount(itemType)
  end
  return self.m_itemLayerModel:GetItemCount(itemType) + GM.MainBoardModel:GetItemLayerCount(itemType)
end

function NoCDTrainBoardModel:GetAllItemsCount()
  return self.m_itemLayerModel:GetItemCountMap()
end

function NoCDTrainBoardModel:GetBiGameMode()
  return EGameMode.Main
end

function NoCDTrainBoardModel:StoreItem(item)
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
  if self:IsInventoryFull() then
    self.event:Call(BoardEventType.StoreFailed, {
      Item = item,
      Reason = StoreFailedReason.InventoryFull
    })
    return false
  end
  self:RemoveItem(item)
  GM.MainBoardModel:SaveItemProperty(item)
  self.m_itemStoreModel:AddItem(item)
  GM.MainBoardModel:GetOrderModel():UpdateState()
  GM.BIManager:LogAction(EBIType.StoreItem, {
    code = item:GetCode(),
    id = item:GetId(),
    pro = self.m_itemStoreModel:GetItemCountWithoutProducer() .. "/" .. self.m_itemStoreModel:GetSlotCountWithoutProducer()
  })
  self.event:Call(BoardEventType.StoreItem, {Source = item})
  EventDispatcher.DispatchEvent(EEventType.ItemStored)
  return true
end

function NoCDTrainBoardModel:CanItemStore(item)
  if StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
    return false
  end
  if not self:CanItemMove(item) then
    return false
  end
  local itemTransform = item:GetComponent(ItemTransform)
  if itemTransform ~= nil and itemTransform:GetDuration() ~= nil then
    return false
  end
  if item:GetComponent(ItemBubble) ~= nil then
    return false
  end
  if item:GetComponent(ItemToken) ~= nil and not Table.IsEmpty(item:GetComponent(ItemToken):GetAllToken()) then
    return false
  end
  local itemSpread = item:GetComponent(ItemSpread)
  if itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Opening then
    return false
  end
  return true
end

function NoCDTrainBoardModel:IsInventoryFull()
  return self:GetStoredItemCount() >= self:GetStoreSlotCount()
end

function NoCDTrainBoardModel:GetStoredItemCountByCode(itemCode)
  return self.m_itemStoreModel:GetItemCountByCode(itemCode)
end

function NoCDTrainBoardModel:RemoveOrderRequireInInventory(itemCode)
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

function NoCDTrainBoardModel:RetrieveStoredItemByData(data, refer)
  local item, position = self:CanRetrieveStoredItem(data)
  if not item then
    return false
  end
  self.m_itemStoreModel:RemoveItemByIndex(self.m_itemStoreModel:GetIndexByData(data))
  GM.MainBoardModel:GetItemManager():RemoveItem(item:GetId())
  item:DispatchComponentEvent("OnRemoved")
  self:SaveItemProperty(item)
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

function NoCDTrainBoardModel:RetrieveStoredItemByCode(code, refer)
  local iterateCount = self:GetStoredItemCount()
  for i = 1, iterateCount do
    local item = self:GetStoredItemByIndex(i)
    if item ~= nil and item:GetCode() == code then
      return self:RetrieveStoredItemByData(self:GetStoredItemData(i), refer)
    end
  end
  return false
end

function NoCDTrainBoardModel:CanRetrieveStoredItem(data)
  local position = self:FindEmptyPositionInSpreadOrder(NoCDTrainBoardModel.CreatePosition(1, NoCDTrainBoardModel.VerticalTiles + 1))
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

function NoCDTrainBoardModel:GetStoredItemByIndex(index)
  return self.m_itemStoreModel:GetItemByIndex(index)
end

function NoCDTrainBoardModel:GetStoredItemByData(data)
  return self.m_itemStoreModel:GetItemByData(data)
end

function NoCDTrainBoardModel:GetStoredItemData(index)
  return self.m_itemStoreModel:GetItemData(index)
end

function NoCDTrainBoardModel:GetStoredItemCount()
  return self.m_itemStoreModel:GetItemCount()
end

function NoCDTrainBoardModel:GetStoredIndexByType(type)
  return self.m_itemStoreModel:GetIndexByType(type)
end

function NoCDTrainBoardModel:GetStoreSlotCount()
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

function NoCDTrainBoardModel:GetProducerOpenLevelByType(type)
  return self.m_itemStoreModel:GetProducerOpenLevelByType(type)
end

function NoCDTrainBoardModel:PlayRemoveRestItemAnimation(activityType, targetPos, callback)
  local delay, dt = 0.8, 0.15
  for position in NoCDTrainBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and not StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
      item:SetLocked(true)
      do
        local seq = DOTween.Sequence()
        seq:AppendInterval(delay)
        seq:AppendCallback(function()
          self:RemoveItem(item)
          self.event:Call(BoardEventType.FinishTrainOrder, {
            Removed = {item},
            ActivityType = activityType,
            TargetPos = targetPos,
            Callback = callback
          })
          self.m_mapItemRemoveSeq[seq] = nil
        end)
        self.m_mapItemRemoveSeq[seq] = true
        delay = delay + dt
      end
    end
  end
end

function NoCDTrainBoardModel:AddPdChainsItems(pdChains, bstart)
  local pos = {
    NoCDTrainBoardModel.CreatePosition(1, 1),
    NoCDTrainBoardModel.CreatePosition(NoCDTrainBoardModel.HorizontalTiles, 1),
    NoCDTrainBoardModel.CreatePosition(1, NoCDTrainBoardModel.VerticalTiles),
    NoCDTrainBoardModel.CreatePosition(NoCDTrainBoardModel.VerticalTiles, NoCDTrainBoardModel.HorizontalTiles)
  }
  for idx, chainId in pairs(pdChains) do
    local pdItemCode = ItemUtility.GetItemCode(chainId, GM.ItemDataModel:GetChainMaxLevel(chainId))
    local newItem = self:GenerateItem(pos[idx] or self:FindEmptyPositionInValidOrder(), pdItemCode, nil, nil, false)
    local message = {New = newItem}
    if bstart then
      self.event:Call(BoardEventType.PopCachedItem, message)
    end
    GM.BIManager:LogSpread("bingo", pdItemCode, nil, nil, nil, {
      id = newItem:GetId()
    })
  end
  self:UpdateOrderState()
end

function NoCDTrainBoardModel:ConvertItems(removeList, boxPos, activityType)
  local delay, dt = 0.1, 0.15
  for _, item in pairs(removeList) do
    self:RemoveItem(item, false)
    if boxPos then
      self.event:Call(BoardEventType.FinishTrainOrder, {
        Removed = {item},
        ActivityType = activityType,
        TargetPos = boxPos,
        Delay = delay
      })
      delay = delay + dt
    end
  end
  if not boxPos then
    self.event:Call(BoardEventType.BatchRemoveItems, {Removed = removeList})
  end
end

function NoCDTrainBoardModel:AddPdItemsWithAnim(pdChains, boxPos, activityType)
  local pos = {
    NoCDTrainBoardModel.CreatePosition(1, 1),
    NoCDTrainBoardModel.CreatePosition(NoCDTrainBoardModel.HorizontalTiles, 1),
    NoCDTrainBoardModel.CreatePosition(1, NoCDTrainBoardModel.VerticalTiles),
    NoCDTrainBoardModel.CreatePosition(NoCDTrainBoardModel.VerticalTiles, NoCDTrainBoardModel.HorizontalTiles)
  }
  local actModel = GM.ActivityManager:GetModel(activityType)
  local delay, dt = 0.1, 0.15
  for idx, chainId in pairs(pdChains) do
    local pdItemCode = ItemUtility.GetItemCode(chainId, GM.ItemDataModel:GetChainMaxLevel(chainId))
    if not self:HasItemOnBoard(pdItemCode) then
      local seq = DOTween.Sequence()
      seq:AppendInterval(delay)
      seq:AppendCallback(function()
        local index = 1
        while self:GetItem(pos[index]) ~= nil and index < 5 do
          index = index + 1
        end
        if not self:HasItemOnBoard(pdItemCode) then
          local itemPos = 4 < index and self:FindEmptyPositionInValidOrder() or pos[index]
          local newItem = self:GenerateItem(itemPos, pdItemCode, nil, nil, false)
          local message = {
            New = newItem,
            FromPos = boxPos,
            ActivityType = activityType
          }
          self.event:Call(BoardEventType.AddPdItem, message)
          self.m_mapItemRemoveSeq[seq] = nil
          GM.BIManager:LogSpread("bingo", pdItemCode, nil, nil, nil, {
            id = newItem:GetId()
          })
        end
        actModel:OnAddPdFinished(idx, chainId)
      end)
      delay = delay + dt
    else
      actModel:OnAddPdFinished(idx, chainId)
    end
  end
end

function NoCDTrainBoardModel:HasItemOnBoard(itemCode)
  for position in NoCDTrainBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item:GetCode() == itemCode then
      return true
    end
  end
  return false
end
