BaseUIBoardModel = setmetatable({}, BaseActionBoardModel)
BaseUIBoardModel.__index = BaseUIBoardModel

function BaseUIBoardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  BaseActionBoardModel.Init(self, nil, nil)
  self.m_itemManager = ItemManager.Create(itemDataTable, self)
  self.m_itemManager:OnSyncDataFinished()
  self.m_activityType = activityType
  self.m_activityModel = activityType and GM.ActivityManager:GetModel(activityType)
  self.m_initCodeMap = initCodeMap
  self.m_transformLayerConfig = transformLayerConfig
  self.m_itemLayerModel = self:GetItemLayerModel().Create(self, itemLayerDataTable, self.m_itemManager, initCodeMap)
  self.m_itemCacheModel = ItemCacheModel.Create(itemCacheDataTable, self.m_itemManager:GetIdGenerator())
  self.m_itemCacheModel:OnSyncDataFinished()
  self:_InitTransformLayer(itemTransformLayerDataTable, transformLayerConfig)
  DEFINE_ITEM_EVENT(self, "Break")
  self:_InitCloud(cloud)
  self:_InitExtraPdItems(cloud)
  self:_UpdateCurrentNeedKeyType()
  self:_InitHuntBook()
  self:_InitExtraRewardLayer(openMapConfig)
end

function BaseUIBoardModel:GetGameMode()
  Log.Assert(false, "BaseUIBoardModel:GetGameMode \230\152\175\232\153\154\229\135\189\230\149\176")
end

function BaseUIBoardModel:GetItemLayerModel()
  Log.Assert(false, "BaseUIBoardModel:GetItemLayerModel \230\152\175\232\153\154\229\135\189\230\149\176")
  return BaseItemLayerModel
end

function BaseUIBoardModel:GetActivityType()
  return self.m_activityType
end

function BaseUIBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(BaseUIBoardModel, x, y)
end

function BaseUIBoardModel:LoadFile(y, depth, bInverse)
  self.m_itemLayerModel:LoadFile(self, self.m_initCodeMap, y, depth, bInverse)
  if self.m_itemTransformLayerModel then
    self.m_itemTransformLayerModel:LoadFile(self, self.m_transformLayerConfig, y, depth, bInverse)
  end
  self:_UpdateCurExtraRewardLayer(bInverse)
end

function BaseUIBoardModel:UpdateTileLock(depth)
  if Table.IsEmpty(self.m_cloudConfig) then
    return
  end
  local cloud = self.m_cloudConfig
  local lockConfig = cloud.lock
  local curLevel = self.m_activityModel:GetLevel()
  local boardOffsetLine = math.max(0, (depth or self.m_activityModel:GetBoardInitDepth()) - (self.VerticalTiles + 1))
  local boardRows = #cloud.board
  for i = 1, self.VerticalTiles do
    self.m_tileLock[i] = {}
    for j = 1, self.HorizontalTiles do
      local lock = cloud.board[boardRows - boardOffsetLine - self.VerticalTiles + i] and cloud.board[boardRows - boardOffsetLine - self.VerticalTiles + i][j] or nil
      self.m_tileLock[i][j] = lock and lockConfig[lock] and not self.m_cloudState[lock] or false
    end
  end
  self.m_itemLayerModel:UpdateLockedEmptyPositionCount()
  self:TryUnlockBookItemUnderCloud()
end

function BaseUIBoardModel:TryUnlockBookItemUnderCloud()
  if self.m_huntBookModel then
    for position in self.GetValidPositionIterator() do
      local item = self:GetItem(position)
      if item then
        self.m_huntBookModel:AddCacheItem(item:GetCode(), self, item)
      end
    end
  end
end

function BaseUIBoardModel:_UpdateCurrentNeedKeyType()
  self.m_currentNeedKeyType = nil
  if not self.m_tileLock then
    return
  end
  for id, cfg in pairs(self.m_cloudConfig.lock) do
    if not self.m_cloudState[id] and (id <= 1 or 1 < id and self.m_cloudState[id - 1]) and cfg.num ~= nil then
      self.m_currentNeedKeyType = cfg.unlock
      return
    end
  end
end

function BaseUIBoardModel:Update()
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      item:DispatchComponentEvent("Update")
    end
  end
  if not self.m_extraItems then
    return
  end
  for _, item in pairs(self.m_extraItems) do
    item:DispatchComponentEvent("Update")
  end
end

function BaseUIBoardModel:UpdatePerSecond()
  BaseActionBoardModel.UpdatePerSecond(self)
  if not self.m_extraItems then
    return
  end
  for _, item in pairs(self.m_extraItems) do
    item:DispatchComponentEvent("UpdatePerSecond")
  end
end

function BaseUIBoardModel:Destroy()
  BaseActionBoardModel.Destroy(self)
  if self.m_huntBookModel ~= nil then
    self.m_huntBookModel:Destroy()
    self.m_huntBookModel = nil
  end
end

function BaseUIBoardModel:GetExtraItem(index)
  if not self.m_extraItems then
    return nil
  end
  return self.m_extraItems[index]
end

function BaseUIBoardModel:IsTileLock(boardPosition)
  if not self.m_tileLock or not boardPosition:IsValid() then
    return false
  end
  local x = boardPosition:GetX()
  local y = boardPosition:GetY()
  return self.m_tileLock[y] and self.m_tileLock[y][x]
end

function BaseUIBoardModel:CacheItems(cachedItemCodes, type, cost, itemIdList, notUpdateCache, isTutorialItem)
  self.m_itemCacheModel:PushItems(cachedItemCodes, type, cost, itemIdList)
  EventDispatcher.DispatchEvent(EEventType.CacheItems, {items = cachedItemCodes, NotUpdateCache = notUpdateCache})
  if not isTutorialItem and self.m_activityModel.SetItemGotted then
    self.m_activityModel:SetItemGotted()
  end
  EventDispatcher.DispatchEvent(EEventType.PopupChainActivityTokenTrigger, {
    activityType = self.m_activityType
  })
end

function BaseUIBoardModel:PopCachedItem(bLongPress)
  if self:IsBoardFull() then
    return false
  end
  local position
  local code = self.m_itemCacheModel:GetItem(1)
  position = self:FindEmptyPositionInAttach(code)
  position = position or self:FindEmptyPositionInValidOrder()
  if position == nil then
    return false
  end
  local cacheId = self.m_itemCacheModel.m_itemIdList[1]
  local code, cost, itemId = self.m_itemCacheModel:PopItem()
  if StringUtil.IsNilOrEmpty(code) then
    GM.BIManager:LogErrorInfo(EBIProjectType.HuntCacheCodeError, "Hunt cache code is nil")
    return false
  end
  local newItem
  if itemId ~= nil then
    newItem = self.m_itemManager:GetItem(itemId)
    if newItem ~= nil then
      self:_SetItem(position, newItem)
      newItem:SetBoardModel(self)
      newItem:SetPosition(position)
    end
  end
  if newItem == nil then
    newItem = self:GenerateItem(position, code)
  end
  local message = {
    New = newItem,
    CacheId = cacheId,
    IsPd = false
  }
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  self.event:Call(BoardEventType.PopCachedItem, message)
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {itf = 0, m = 0}, self:GetGameMode())
  end
  GM.BIManager:LogSpread("pop", code, nil, self:GetGameMode(), bLongPress and "lpr:1" or nil, {
    id = newItem:GetId()
  })
  return true
end

function BaseUIBoardModel:CachePdSpreadItem(bLongPress)
  if self:IsBoardFull() then
    return false
  end
  local doubleEnergyModel = self.m_activityModel:GetDoubleEnergyModel()
  local cost, levelSpan = 1, 0
  if doubleEnergyModel ~= nil then
    levelSpan = doubleEnergyModel:GetMaxOpenEnergyMultiple()
    cost = 2 ^ levelSpan
  end
  if cost > self.m_activityModel:GetActivityTokenNumber() then
    return
  end
  local position
  local code, originCode, realLevelSpan = self.m_activityModel:GetCachePdSpreadCode(levelSpan, self.m_itemLayerModel)
  position = self:FindEmptyPositionInAttach(code)
  position = position or self:FindEmptyPositionInValidOrder()
  if position == nil then
    return false
  end
  local newItem = self:GenerateItem(position, code)
  local OriginalItem
  if code ~= originCode then
    OriginalItem = self:GenerateShowItem(position, originCode)
  end
  local message = {
    New = newItem,
    CacheId = newItem:GetId(),
    OriginalItem = OriginalItem,
    IsPd = true
  }
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  EventDispatcher.DispatchEvent(EEventType.HuntCachePdSpreadItem, message)
  self.event:Call(BoardEventType.PopCachedItem, message)
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {itf = 0, m = 0}, self:GetGameMode())
  end
  GM.BIManager:LogSpread(self.m_activityModel:GetType(), code, nil, self:GetGameMode(), bLongPress and "lpr:1" or nil, {
    id = newItem:GetId()
  })
  return true
end

function BaseUIBoardModel:GetItemCacheModel()
  return self.m_itemCacheModel
end

function BaseUIBoardModel:FindRandomPosition()
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

function BaseUIBoardModel:FilterItems(filter)
  return self.m_itemLayerModel:FilterItems(filter)
end

function BaseUIBoardModel:GetItem(position, force)
  if force or not self:IsTileLock(position) then
    return self.m_itemLayerModel:GetItem(position)
  end
  return nil
end

function BaseUIBoardModel:_InitTransformLayer(itemTransformLayerDataTable, transformLayerConfig)
  if itemTransformLayerDataTable ~= nil and not Table.IsEmpty(transformLayerConfig) then
    self.m_itemTransformLayerModel = HuntActivityItemTransformLayerModel.Create(self, itemTransformLayerDataTable, self.m_itemManager)
  end
end

function BaseUIBoardModel:HasTransformLayer()
  return not Table.IsEmpty(self.m_transformLayerConfig)
end

function BaseUIBoardModel:GetItemTransformModel(boardPosition)
  if not self.m_itemTransformLayerModel then
    return nil
  end
  return self.m_itemTransformLayerModel:GetItem(boardPosition)
end

function BaseUIBoardModel:ReplaceToTransformLayerItem(sourceItem, targetItem)
  if not self.m_itemTransformLayerModel then
    return
  end
  self:RemoveItem(sourceItem, false)
  self.m_itemTransformLayerModel:SetItem(targetItem:GetPosition(), nil)
  self:SaveItemProperty(targetItem)
  self:_SetItem(sourceItem:GetPosition(), targetItem, true)
  if self.m_huntBookModel then
    self.m_huntBookModel:AddCacheItem(targetItem:GetCode(), self, targetItem)
  end
  local message = {Source = sourceItem, New = targetItem}
  EventDispatcher.DispatchEvent(EEventType.ItemReplaced, message)
end

function BaseUIBoardModel:CanItemMerge(item1, item2)
  local itemType1, itemType2, mergedType
  local itemCobweb1 = item1:GetComponent(ItemCobweb)
  if itemCobweb1 ~= nil then
    itemType1 = itemCobweb1:GetInnerItemCode()
  else
    itemType1 = item1:GetType()
    mergedType = item1:GetMergedType()
  end
  local itemCobweb2 = item2:GetComponent(ItemCobweb)
  if itemCobweb2 ~= nil then
    itemType2 = itemCobweb2:GetInnerItemCode()
  else
    itemType2 = item2:GetType()
    mergedType = mergedType or item2:GetMergedType()
  end
  if self.m_activityModel ~= nil and self.m_activityModel.CanItemMerge ~= nil and (not self.m_activityModel:CanItemMerge(itemType1) or not self.m_activityModel:CanItemMerge(itemType2)) then
    return false
  end
  if itemType1 == itemType2 then
    if mergedType ~= nil then
      return true
    elseif StringUtil.StartWith(itemType1, ItemCodePrefix.Hunt) then
      return true
    end
  elseif StringUtil.StartWith(itemType1, ItemCodePrefix.Hunt) and HuntActivityModel.IsMainMergeLineItem(itemType2) or StringUtil.StartWith(itemType2, ItemCodePrefix.Hunt) and HuntActivityModel.IsMainMergeLineItem(itemType1) then
    return GM.ItemDataModel:GetChainLevel(itemType1) == GM.ItemDataModel:GetChainLevel(itemType2)
  end
  return false
end

function BaseUIBoardModel:CanMergeAll(item)
  if self.m_activityModel ~= nil and self.m_activityModel.CanItemMerge ~= nil and not self.m_activityModel:CanItemMerge(ItemUtility.GetInnerCodeAndPrefixByCode(item:GetCode())) then
    return false
  end
  return BaseActionBoardModel.CanMergeAll(self, item)
end

function BaseUIBoardModel:SpreadItem(sourceItem, newItemPosition, newItemCode, logSpread, energyBoostRatio, costEnergy, autoUpdateOrderState, boardSpreadType)
  local message = BaseActionBoardModel.SpreadItem(self, sourceItem, newItemPosition, newItemCode, logSpread, energyBoostRatio, costEnergy, autoUpdateOrderState, boardSpreadType)
  EventDispatcher.DispatchEvent(EEventType.ItemSpread, message)
  if logSpread then
    GM.BIManager:LogSpread(sourceItem:GetCode(), newItemCode, nil, self:GetGameMode(), nil, {
      id = message.New:GetId()
    })
  end
end

function BaseUIBoardModel:ShockNearby(item, targetPosition)
  local sourcePosition = item:GetPosition()
  local testPosition, testItem
  for _, direction in ipairs(BaseItemLayerModel.Directions4Way) do
    testPosition = sourcePosition + direction
    testItem = self:GetItem(testPosition)
    if testItem ~= nil then
      testItem:DispatchComponentEvent("OnShock")
    end
  end
end

function BaseUIBoardModel:_LogMove(item, from, to)
end

function BaseUIBoardModel:_LogSwapFailed(item, targetItem)
end

function BaseUIBoardModel:DragItem(item, targetPosition, index, canDragToUnlockCloud)
  local sourceItem = self:GetItem(item:GetPosition())
  if sourceItem ~= item then
    item:SetPosition(item:GetPosition())
    return
  end
  local targetItem
  if index ~= nil then
    targetItem = self:GetExtraItem(index)
    if targetItem == nil then
      item:SetPosition(item:GetPosition())
      return
    end
  elseif not targetPosition:IsValid() or self:IsTileLock(targetPosition) then
    item:SetPosition(item:GetPosition())
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.UnlockCloud) and canDragToUnlockCloud then
      if not self:TryUnlockCloudByDrag(item) then
        EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {
          pos = item:GetPosition()
        })
      end
    else
      EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {
        pos = item:GetPosition()
      })
    end
    return
  else
    targetItem = self:GetItem(targetPosition)
  end
  if targetItem == nil or targetItem == item then
    self:_SetItem(item:GetPosition(), nil, false)
    self:_SetItem(targetPosition, item)
    if targetItem ~= item then
      self:_LogMove(item, item:GetPosition(), targetPosition)
    end
    item:SetPosition(targetPosition)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    return
  end
  local itemSand = targetItem:GetComponent(ItemSand)
  local itemBroom = item:GetComponent(ItemBroom)
  if itemSand ~= nil and itemBroom ~= nil then
    itemBroom:OnUse(targetItem)
    return
  end
  local targetItemSwallow = targetItem:GetComponent(ItemSwallow)
  if targetItemSwallow ~= nil and targetItemSwallow:CanSwallow(item) then
    targetItemSwallow:Swallow(item, index)
    if not index then
      self:ShockNearby(targetItem)
    end
    return
  end
  local canMerge = self:CanItemMerge(item, targetItem)
  if canMerge then
    local bItemSpreadFinished = true
    for _, v in pairs({item, targetItem}) do
      local itemSpread = v:GetComponent(ItemSpread)
      if itemSpread and not itemSpread:IsSpreadFinish() then
        bItemSpreadFinished = false
        break
      end
      local extraSpread = v:GetComponent(ItemExtraSpread)
      if extraSpread and extraSpread:CanSpreadFirstMerge() then
        bItemSpreadFinished = false
        break
      end
    end
    local autoRun = not GameConfig.IsTestMode() or GM.TestAutoRunModel.autoRun or GM.TestAutoRunModel.mergeAll
    if not bItemSpreadFinished and not autoRun then
      self:SetSkipNextIndicatorUpdate(true)
      GM.UIManager:OpenView(UIPrefabConfigName.HuntActivityConfirmWindow, "game_start_notice_title", "hunt_item_merge_tip", "common_button_cancel", "common_button_ok", function(window)
        if self:CheckItemStillInPosition(item) then
          item:SetPosition(item:GetPosition())
          self.event:Call(BoardEventType.FocusOnItem, {Item = item})
        end
        window:Close()
      end, function(window)
        if self:CheckItemStillInPosition(item) and self:CheckItemStillInPosition(targetItem) then
          self:_MergeItem(item, targetItem, targetPosition)
        elseif self:CheckItemStillInPosition(item) then
          item:SetPosition(item:GetPosition())
        end
        local model = self.m_activityModel
        if model then
          model:LogActivity(EBIType.HuntRewardItemMerge)
        end
        window:Close()
      end, false, function(window)
        window:LogWindowAction(EBIType.UIActionType.Open, {
          EBIReferType.AutoPopup
        })
      end, nil)
    else
      self:_MergeItem(item, targetItem, targetPosition)
    end
    return
  end
  if not self:CanItemMove(targetItem) then
    item:SetPosition(item:GetPosition())
    EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {
      pos = item:GetPosition()
    })
    self:_LogSwapFailed(item, targetItem)
    return
  end
  local itemPosition
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemSwitch) then
    itemPosition = item:GetPosition()
  else
    itemPosition = self:FindEmptyPositionInSpreadOrder(targetPosition, item:GetPosition())
    self:_SetItem(item:GetPosition(), nil, false)
  end
  self:_SetItem(targetPosition, item, false)
  self:_SetItem(itemPosition, targetItem)
  self:_LogMove(item, item:GetPosition(), targetPosition)
  self:_LogMove(targetItem, targetPosition, itemPosition)
  item:SetPosition(targetPosition)
  targetItem:SetPosition(itemPosition)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end

function BaseUIBoardModel:_MergeItem(item, targetItem, targetPosition)
  local itemId = item:GetId()
  self:RemoveItem(item)
  local itemType = item:GetType()
  local mergedType = item:GetMergedType()
  if StringUtil.StartWith(itemType, ItemCodePrefix.Hunt) then
    local lv = GM.ItemDataModel:GetChainLevel(itemType)
    mergedType = GM.ItemDataModel:GetMergedType(self.m_activityModel:GetItemCodeByLevel(lv))
  end
  local newItem = self:ReplaceItem(targetItem, mergedType)
  self:ShockNearby(newItem, targetPosition)
  local mergeMessage = {
    Source = item,
    Target = targetItem,
    New = newItem,
    IsHuntActivity = true,
    activityType = self.m_activityType
  }
  self.event:Call(BoardEventType.MergeItem, mergeMessage)
  self:_TrySreadExtraItems(newItem)
  EventDispatcher.DispatchEvent(EEventType.ItemMerged, mergeMessage)
  local ext = (item:GetComponent(ItemCobweb) ~= nil or targetItem:GetComponent(ItemCobweb) ~= nil) and "cw:1" or nil
  GM.BIManager:LogMerge(item:GetType(), newItem:GetCode(), 0, ext, self:GetGameMode(), {
    from_id = itemId,
    to_id = targetItem:GetId(),
    new_id = newItem:GetId()
  })
end

function BaseUIBoardModel:SetSkipNextIndicatorUpdate(bSkip)
  self.m_bSkipNextIndicatorUpdate = bSkip
end

function BaseUIBoardModel:GetSkipNextIndicatorUpdate()
  return self.m_bSkipNextIndicatorUpdate
end

function BaseUIBoardModel:CheckItemStillInPosition(itemModel)
  if not itemModel or self:GetItem(itemModel:GetPosition()) ~= itemModel then
    return false
  end
  return true
end

function BaseUIBoardModel:_TrySreadExtraItems(source)
end

function BaseUIBoardModel:CanItemSell(item)
  if item:GetSellingPrice() == nil then
    if item:GetType() == ItemType.Cobweb then
      local innerCode = item:GetComponent(ItemCobweb):GetInnerItemCode()
      local itemConfig = GM.ItemDataModel:GetModelConfig(innerCode)
      if itemConfig and itemConfig.SellingPrice ~= nil then
        return true
      end
    end
    return false
  end
  if self.m_activityModel ~= nil and self.m_activityModel.CanItemSell ~= nil and not self.m_activityModel:CanItemSell(item) then
    return false
  end
  return true
end

function BaseUIBoardModel:SellItem(item)
  self:RemoveItem(item)
  local ext = {
    id = item:GetId()
  }
  if item:GetType() == ItemType.Cobweb then
    ext.spider = 1
  end
  GM.BIManager:LogStore(item:GetCode(), 1, self:GetSellingPropertyType(), 0, EShopType.SellItem, self:GetGameMode(), ext)
  local msg = {Source = item}
  self.event:Call(BoardEventType.SellItem, msg)
  EventDispatcher.DispatchEvent(EEventType.ItemSelled, msg)
end

function BaseUIBoardModel:GetItemScoresByGenerator(gen)
  return nil
end

function BaseUIBoardModel:GetItemScoreByUnlockGen(itemCode)
  return 1
end

function BaseUIBoardModel:GetITItemAvgScore(item)
  return 1
end

function BaseUIBoardModel:GetOrderCodeStateMap()
  return Table.Empty
end

function BaseUIBoardModel:GetOrderCodeRequireCount()
end

function BaseUIBoardModel:GetOrders()
  return {}
end

function BaseUIBoardModel:GetEnergyPropertyType()
  return EPropertyType.Energy
end

function BaseUIBoardModel:GetSellingPropertyType()
  return EPropertyType.Gold
end

function BaseUIBoardModel:GenerateItem(position, code, cost, bFromSpread, autoUpdateOrderState)
  local newItem = BaseActionBoardModel.GenerateItem(self, position, code, cost, bFromSpread, autoUpdateOrderState)
  if self.m_huntBookModel ~= nil then
    self.m_huntBookModel:AddCacheItem(code, self, newItem)
  end
  return newItem
end

function BaseUIBoardModel:ReplaceHuntPdItem(itemModel, targetItemType, index)
  local itemSpread = itemModel:GetComponent(ItemSpread)
  if itemSpread then
    local items = itemSpread:GetNotSpreadItem()
    for _, innerType in pairs(items) do
      self:CacheItems({innerType}, CacheItemType.Stack2, nil, nil, true)
    end
  end
  local pos = itemModel:GetPosition()
  self:_RemoveItemProperty(itemModel)
  local item = ItemModelFactory.CreateWithCode(self, nil, targetItemType)
  item:GetComponent(ItemHuntAnim).Index = index
  item:SetId(itemModel:GetId())
  item:SetPosition(pos)
  self:SaveItemProperty(item)
  self.m_extraItems[index] = item
  return item
end

function BaseUIBoardModel:_InitExtraPdItems(config)
  if config and config.extraPd then
    self.m_extraItems = {}
    for index, pd in ipairs(config.extraPd) do
      local id = "hunt_pd_" .. index
      local item = self.m_itemManager:GetItem(id)
      if item == nil then
        item = ItemModelFactory.CreateWithCode(self, nil, pd.code)
        item:SetId(id)
        self:SaveItemProperty(item)
      end
      item:GetComponent(ItemHuntAnim).Index = index
      local boardPosition = self.CreatePosition(pd.pos[1], pd.pos[2])
      item:SetPosition(boardPosition)
      self.m_extraItems[index] = item
    end
  elseif config and config.pdUp then
    self:_InitExtraPdUp(config)
  end
  self:_UpdatePdSwallow()
end

function BaseUIBoardModel:_InitExtraPdUp(config)
end

function BaseUIBoardModel:_UpdatePdSwallow()
  if self.m_extraItems and self.m_extraItems[2] then
    local spread = self.m_extraItems[2]:GetComponent(ItemSpread)
    local swallow = self.m_extraItems[2]:GetComponent(ItemSwallow)
    if spread and swallow and spread:GetState() == ItemSpreadState.Opened and spread:GetItemRestNumber() == 0 and swallow:IsSwallowOver() then
      spread:OnSwallowOver()
    end
  end
end

function BaseUIBoardModel:GetExtraPdItems()
  return self.m_extraItems or {}
end

function BaseUIBoardModel:_InitCloud(cloud)
  if not cloud then
    return
  end
  self.m_cloudConfig = cloud
  if cloud and cloud.pdUp then
    self.m_signaturePd = cloud.pdUp.initPd
  end
  self.m_cloudState = self.m_activityModel:GetCloudState()
  self.m_cloudSwallowLockState = self.m_activityModel:GetCloudSwallowLockState()
  self.m_tileLock = {}
  self:UpdateTileLock()
end

function BaseUIBoardModel:GetCloudInfo()
  return self.m_cloudConfig, self.m_cloudState, self.m_cloudSwallowLockState
end

function BaseUIBoardModel:_DoUnlockCloud(id, cfg)
  local message
  self.m_cloudState[id] = true
  if cfg.pd_up then
    local origin = self.m_extraItems[cfg.pd_up.index]
    local item = self:ReplaceHuntPdItem(origin, cfg.pd_up.code, cfg.pd_up.index)
    message = {
      Id = id,
      Old = origin,
      New = item,
      Index = cfg.pd_up.index
    }
    GM.BIManager:LogTransform(origin:GetType(), item:GetType())
  else
    message = {Id = id}
  end
  message.Cost = self:_TryUnlockMultipleEnergy(cfg.cost)
  if self.m_activityModel.UpdateCloudState then
    self.m_activityModel:UpdateCloudState(self.m_cloudState)
  end
  self:_UpdateCurrentNeedKeyType()
  return message
end

function BaseUIBoardModel:TryUnlockCloud(itemType)
  if not self.m_tileLock then
    return
  end
  local message
  for id, cfg in pairs(self.m_cloudConfig.lock) do
    if cfg.num == nil and itemType == cfg.unlock and not self.m_cloudState[id] then
      if 1 < id and not self.m_cloudState[id - 1] then
        return
      end
      message = self:_DoUnlockCloud(id, cfg)
      GM.BIManager:LogAction(EBIType.HuntCloudUnlock, {
        id = id,
        item = itemType,
        type = "it_unlock"
      }, self:GetGameMode())
      EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {updateAll = true})
      return message, cfg.pos
    end
  end
end

function BaseUIBoardModel:TryUnclockCloudByClick()
  local function filter(itemModel)
    return self:IsCurrentNeedKeyType(itemModel:GetCode())
  end
  
  self.m_itemModels = self:FilterItems(filter)
  if Table.IsEmpty(self.m_itemModels) then
    return false
  end
  local itemModel = self.m_itemModels[1]
  self:TryPushCloudKeyProgress(itemModel:GetCode(), itemModel, false)
  self:RemoveItem(itemModel)
  self.event:Call(BoardEventType.HuntKeyCollect, {Source = itemModel})
  GM.BIManager:LogUseItem(itemModel:GetCode(), 1, EBIType.HuntSwallowKey, "cloud", self:GetGameMode(), "click:cloud")
  return true
end

function BaseUIBoardModel:TryUnlockCloudByDrag(itemModel)
  local ItemHuntCloudKey = itemModel:GetComponent(ItemHuntCloudKey)
  if not ItemHuntCloudKey or not self:IsCurrentNeedKeyType(itemModel:GetCode()) then
    return
  end
  self:TryPushCloudKeyProgress(itemModel:GetCode(), itemModel, true)
  self:RemoveItem(itemModel, nil, true)
  self.event:Call(BoardEventType.HuntKeyCollect, {Source = itemModel, Drag = true})
  GM.BIManager:LogUseItem(itemModel:GetCode(), 1, EBIType.HuntSwallowKey, "cloud", self:GetGameMode(), "drag:item")
  return true
end

function BaseUIBoardModel:IsCurrentNeedKeyType(itemType)
  return self.m_currentNeedKeyType ~= nil and self.m_currentNeedKeyType == itemType
end

function BaseUIBoardModel:TryPushCloudKeyProgress(itemType, sourceItem, fromDrag)
  if not self.m_tileLock then
    return
  end
  for id, cfg in pairs(self.m_cloudConfig.lock) do
    if cfg.num ~= nil and itemType == cfg.unlock and not self.m_cloudState[id] then
      if 1 < id and not self.m_cloudState[id - 1] then
        Log.Error("BaseUIBoardModel:TryPushCloudKeyProgress error! " .. itemType .. ", id:" .. id)
        return
      end
      if cfg.num <= (self.m_cloudSwallowLockState[id] or 0) then
        return
      end
      self.m_cloudSwallowLockState[id] = (self.m_cloudSwallowLockState[id] or 0) + 1
      if self.m_activityModel.UpdateCloudSwallowLockState then
        self.m_activityModel:UpdateCloudSwallowLockState(self.m_cloudSwallowLockState)
      end
      local message = {}
      if self.m_cloudSwallowLockState[id] >= cfg.num then
        message = self:_DoUnlockCloud(id, cfg)
        GM.BIManager:LogAction(EBIType.HuntCloudUnlock, {
          id = id,
          item = itemType,
          type = "use_key"
        }, self:GetGameMode())
        if not fromDrag then
          EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {updateAll = true})
        end
      end
      message.SrcItem = sourceItem
      message.TargetPos = cfg.pos
      message.KeyProgress = {
        Id = id,
        Val = self.m_cloudSwallowLockState[id]
      }
      message.Drag = fromDrag
      EventDispatcher.DispatchEvent(EEventType.HuntKeyProgressPushed, message)
      break
    end
  end
end

function BaseUIBoardModel:_TryUnlockMultipleEnergy(orginCost)
  return
end

function BaseUIBoardModel:HasCloudKeyLock()
  if not Table.IsEmpty(self.m_cloudConfig) and not Table.IsEmpty(self.m_cloudConfig.lock) then
    for id, cfg in pairs(self.m_cloudConfig.lock) do
      if cfg.num ~= nil then
        return true
      end
    end
  end
end

function BaseUIBoardModel:IsAllCloudUnlocked()
  if not self.m_tileLock then
    return true
  end
  for id, cfg in pairs(self.m_cloudConfig.lock) do
    if not self.m_cloudState[id] then
      return false
    end
  end
  return true
end

function BaseUIBoardModel:CanItemMove(item)
  return item:CanMove()
end

function BaseUIBoardModel:CanMoveRows(depth)
  return self:CanMoveRows_Normal(depth)
end

function BaseUIBoardModel:CanMoveRows_Normal(depth)
  if Table.IsEmpty(self.m_cloudConfig) then
    return 0
  end
  local curDepth = self.m_activityModel:GetBoardInitDepth()
  local tarDepth = self.VerticalTiles + 1
  for id, cfg in pairs(self.m_cloudConfig.lock) do
    if self.m_cloudState[id] and cfg.move then
      tarDepth = tarDepth + cfg.move
    end
  end
  return math.max(tarDepth - curDepth, 0)
end

function BaseUIBoardModel:ScrollUp(rows, depth)
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position, true)
    if item ~= nil then
      if rows >= position:GetY() then
        local innerType = self:_GetItemInnerType(item)
        if innerType ~= nil then
          self:CacheItems({innerType}, CacheItemType.Stack)
          self:RemoveItem(item)
          if StringUtil.StartWith(innerType, self.m_activityModel:GetType() .. "_pd") then
            GM.BIManager:LogErrorInfo("hunt_scroll_err1", "posY:" .. position:GetY() .. ",rows:" .. rows .. ",depth:" .. depth)
          end
        else
          self:CacheItems({
            item:GetCode()
          }, CacheItemType.Stack, nil, {
            item:GetId()
          })
          self:_SetItem(item:GetPosition(), nil)
          if StringUtil.StartWith(item:GetCode(), self.m_activityModel:GetType() .. "_pd") then
            GM.BIManager:LogErrorInfo("hunt_scroll_err2", "posY:" .. position:GetY() .. ",rows:" .. rows .. ",depth:" .. depth)
          end
        end
        GM.BIManager:LogSpread("unpop", innerType and innerType or item:GetCode(), nil, self:GetGameMode(), nil, {
          id = item:GetId()
        })
      else
        local pos = self.CreatePosition(position:GetX(), position:GetY() - rows)
        self.m_itemLayerModel:SetItem(item:GetPosition(), nil)
        self.m_itemLayerModel:SetItem(pos, item)
      end
    end
    self:_OnTransformLayerItemScrollUp(rows, position)
  end
  self:LoadFile(self.VerticalTiles - rows + 1, depth)
  self:UpdateTileLock(rows + depth)
end

function BaseUIBoardModel:_OnTransformLayerItemScrollUp(rows, position)
  local transformLayerItem = self:GetItemTransformModel(position)
  if transformLayerItem then
    if rows >= position:GetY() then
      local innerType = self:_GetItemInnerType(transformLayerItem)
      if innerType ~= nil then
        self:CacheItems({innerType}, CacheItemType.Stack)
        self.m_itemTransformLayerModel:RemoveItem(transformLayerItem)
      else
        self:CacheItems({
          transformLayerItem:GetCode()
        }, CacheItemType.Stack, nil, {
          transformLayerItem:GetId()
        })
        self.m_itemTransformLayerModel:SetItem(transformLayerItem:GetPosition(), nil)
      end
    else
      local pos = self.CreatePosition(position:GetX(), position:GetY() - rows)
      self.m_itemTransformLayerModel:SetItem(transformLayerItem:GetPosition(), nil)
      self.m_itemTransformLayerModel:SetItem(pos, transformLayerItem)
    end
  end
end

function BaseUIBoardModel:ScrollDown(rows, depth)
  for y = self.VerticalTiles, 1, -1 do
    for x = 1, self.HorizontalTiles do
      local position = BoardPosition.Create(self, x, y)
      local item = self:GetItem(position, true)
      if item ~= nil then
        if position:GetY() > self.VerticalTiles - rows then
          position = self:_OnStickerScrolled(item, position)
          local innerType = self:_GetItemInnerType(item)
          if innerType ~= nil then
            self:CacheItems({innerType}, CacheItemType.Stack)
            self:RemoveItem(item)
          else
            self:CacheItems({
              item:GetCode()
            }, CacheItemType.Stack, nil, {
              item:GetId()
            })
            self:_SetItem(item:GetPosition(), nil)
          end
          GM.BIManager:LogSpread("unpop", innerType and innerType or item:GetCode(), nil, self:GetGameMode(), nil, {
            id = item:GetId()
          })
        else
          local pos = self.CreatePosition(position:GetX(), position:GetY() + rows)
          self.m_itemLayerModel:SetItem(item:GetPosition(), nil)
          self.m_itemLayerModel:SetItem(pos, item)
        end
      end
      self:_OnTransformLayerItemScrollDown(rows, position)
    end
  end
  self:LoadFile(self.VerticalTiles - rows + 1, depth, true)
  self:UpdateTileLock(rows + depth)
end

function BaseUIBoardModel:_OnStickerScrolled(item, position)
  local itemSticker = item:GetComponent(ItemSticker)
  if itemSticker ~= nil then
    itemSticker:TryAcquireReward()
    local boardView = GM.ModeViewController:GetHuntActivityBoardView()
    local itemView = boardView:GetItemView(item)
    position = itemView.transform.position
    itemSticker:SetRewardPosition(position)
  end
  return position
end

function BaseUIBoardModel:_OnTransformLayerItemScrollDown(rows, position)
  local transformLayerItem = self:GetItemTransformModel(position)
  if transformLayerItem then
    if position:GetY() > self.VerticalTiles - rows then
      local innerType = self:_GetItemInnerType(transformLayerItem)
      if innerType ~= nil then
        self:CacheItems({innerType}, CacheItemType.Stack)
        self.m_itemTransformLayerModel:RemoveItem(transformLayerItem)
      else
        self:CacheItems({
          transformLayerItem:GetCode()
        }, CacheItemType.Stack, nil, {
          transformLayerItem:GetId()
        })
        self.m_itemTransformLayerModel:SetItem(transformLayerItem:GetPosition(), nil)
      end
    else
      local pos = self.CreatePosition(position:GetX(), position:GetY() + rows)
      self.m_itemTransformLayerModel:SetItem(transformLayerItem:GetPosition(), nil)
      self.m_itemTransformLayerModel:SetItem(pos, transformLayerItem)
    end
  end
end

function BaseUIBoardModel:_GetItemInnerType(itemModel)
  local innerType
  local itemCobweb = itemModel:GetComponent(ItemCobweb)
  local itemPaperBox = itemModel:GetComponent(ItemPaperBox)
  if itemCobweb ~= nil then
    innerType = itemCobweb:GetInnerItemCode()
  end
  if itemPaperBox ~= nil then
    innerType = itemPaperBox:GetInnerItemCode()
  end
  if innerType ~= nil then
    local idx = StringUtil.rFind(innerType, "#")
    if idx ~= nil then
      innerType = string.sub(innerType, idx + 1)
    end
  end
  return innerType
end

function BaseUIBoardModel:CheckBoardEmptyState(minEmptyCount, unlockRow)
  local emptyCount = 0
  for position in self.GetValidPositionIterator() do
    if not self:IsTileLock(position) then
      local item = self:GetItem(position)
      if item ~= nil then
        local itemCobweb = item:GetComponent(ItemCobweb)
        local itemPaperBox = item:GetComponent(ItemPaperBox)
        if itemCobweb == nil and itemPaperBox == nil then
          emptyCount = emptyCount + 1
        end
      else
        emptyCount = emptyCount + 1
      end
    end
  end
  if minEmptyCount < emptyCount then
    return
  end
  local startRow = self.VerticalTiles - unlockRow + 1
  for position in self.GetValidPositionIterator() do
    if not self:IsTileLock(position) and startRow <= position:GetY() then
      local item = self:GetItem(position)
      if item ~= nil then
        local itemSticker = self:_TryClaimItemStickerReward(item)
        local innerType = self:_GetItemInnerType(item)
        if innerType ~= nil then
          local newItem = self:ReplaceItem(item, innerType)
          self.event:Call(BoardEventType.CollapseItem, {
            Source = item,
            New = newItem,
            ItemSticker = itemSticker
          })
        end
      end
    end
  end
end

function BaseUIBoardModel:_TryClaimItemStickerReward(item)
  local itemSticker = item:GetComponent(ItemSticker)
  if itemSticker ~= nil then
    itemSticker:TryAcquireReward()
  end
  return itemSticker
end

function BaseUIBoardModel:_InitHuntBook()
  local huntBookConfig = self.m_activityModel:GetHuntBookConfig()
  if not Table.IsEmpty(huntBookConfig) then
    self.m_huntBookModel = BaseHuntItemBookModel.Create(self, self.m_activityModel:GetActivityDataTable(), huntBookConfig, self.m_activityType, self)
  end
end

function BaseUIBoardModel:GetItemIllustratedBook()
  return self.m_huntBookModel
end

function BaseUIBoardModel:GetBookEndRewards()
  if self.m_huntBookModel == nil then
    return
  end
  return self.m_huntBookModel:GetAllItemBookEndRewards()
end

function BaseUIBoardModel:_InitExtraRewardLayer(openMapConfig)
  if Table.IsEmpty(openMapConfig) then
    return
  end
  openMapConfig.BoxTypeMap = {}
  for _, boxConfig in pairs(openMapConfig.BoxConfig or {}) do
    for _, pos in pairs(boxConfig.pos or {}) do
      if not openMapConfig.BoxTypeMap[pos[1]] then
        openMapConfig.BoxTypeMap[pos[1]] = {}
      end
      openMapConfig.BoxTypeMap[pos[1]][pos[2]] = boxConfig.box
    end
  end
  self.m_boardExtraRewardLayerTotal = openMapConfig
end

function BaseUIBoardModel:_UpdateCurExtraRewardLayer(bInverse)
  if Table.IsEmpty(self.m_boardExtraRewardLayerTotal) then
    return
  end
  local rows = self.m_activityModel:GetScrollTotalRow()
  self.m_boardExtraRewardLayer = {}
  self.m_boardExtraRewardLayer.Map = {}
  self.m_boardExtraRewardLayer.BoxTypeMap = self.m_boardExtraRewardLayerTotal.BoxTypeMap
  local length = #self.m_boardExtraRewardLayerTotal.Map
  if bInverse then
    for y = self.VerticalTiles, 1, -1 do
      self.m_boardExtraRewardLayer.Map[y] = Table.ShallowCopy(self.m_boardExtraRewardLayerTotal.Map[length - rows - self.VerticalTiles + y])
    end
  else
    for y = self.VerticalTiles, 1, -1 do
      self.m_boardExtraRewardLayer.Map[y] = Table.ShallowCopy(self.m_boardExtraRewardLayerTotal.Map[rows + y])
    end
  end
end

function BaseUIBoardModel:GetExtraRewardLayer()
  return self.m_boardExtraRewardLayer
end

function BaseUIBoardModel:IsPropEnoughToDig()
  if self.m_activityModel:GetActivityTokenNumber() <= 0 then
    return false
  end
  return true
end

function BaseUIBoardModel:ConsumeProp(num, itemType)
  self.m_activityModel:ConsumeActivityToken(num, itemType)
end

function BaseUIBoardModel:CheckMineState()
  local allMineLocked = true
  local oneLockedMine
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      if item:GetComponent(ItemDig) ~= nil then
        allMineLocked = false
        break
      elseif lockedMine == nil then
        local itemCobweb = item:GetComponent(ItemCobweb)
        local itemPaperBox = item:GetComponent(ItemPaperBox)
        if itemCobweb ~= nil or itemPaperBox ~= nil then
          local itemCode = item:GetCode()
          local idx = StringUtil.rFind(itemCode, "#")
          if idx ~= nil then
            itemCode = string.sub(itemCode, idx + 1)
          end
          local config = GM.ItemDataModel:GetModelConfig(itemCode, true)
          if config ~= nil and config.Dig_MaxLevel ~= nil then
            oneLockedMine = item
            break
          end
        end
      end
    end
  end
  if allMineLocked and oneLockedMine ~= nil and oneLockedMine:GetComponent(ItemPaperBox) ~= nil then
    oneLockedMine:GetComponent(ItemPaperBox):OnShock()
  end
end

function BaseUIBoardModel:_UpdateSignatureUpgradeInfo()
  self.m_bSignatureCanNotUpgrade = true
  self.m_signatureUpgradeLockKey = nil
  self.m_signatureNextLevelCode = nil
  if Table.IsEmpty(self.m_cloudConfig and self.m_cloudConfig.pdUp) then
    return
  end
  local pdUpConfig = self.m_cloudConfig.pdUp
  local sigLevel = self.m_activityModel:GetSigLevel()
  if sigLevel == 0 then
    self.m_signatureUpgradeLockKey = pdUpConfig[1].unlock
    self.m_signatureNextLevelCode = pdUpConfig[1].code
    self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
  elseif sigLevel < #self.m_cloudConfig.pdUp then
    local v = self.m_cloudConfig.pdUp[sigLevel + 1]
    self.m_signatureUpgradeLockKey = v.unlock
    self.m_signatureNextLevelCode = v.code
    self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
  elseif self.m_cloudConfig.pdCircle then
    local circleLevel = (sigLevel - #self.m_cloudConfig.pdUp) % #self.m_cloudConfig.pdCircle + 1
    local v = self.m_cloudConfig.pdCircle[circleLevel]
    self.m_signatureUpgradeLockKey = tostring(sigLevel + 1)
    self.m_signatureNextLevelCode = v.code
    self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
  end
end

function BaseUIBoardModel:TryUpgradeSignature(itemType)
  if self.m_bSignatureCanNotUpgrade then
    return
  end
  if self.m_signatureUpgradeLockKey == nil then
    self:_UpdateSignatureUpgradeInfo()
    if self.m_signatureUpgradeLockKey == nil or self.m_bSignatureCanNotUpgrade then
      return
    end
  end
  if itemType == self.m_signatureUpgradeLockKey then
    local index = 2
    local origin = self.m_extraItems[index]
    local item
    if origin == nil then
      item = ItemModelFactory.CreateWithCode(self, nil, self.m_signaturePd or self.m_signatureNextLevelCode)
      item:GetComponent(ItemHuntAnim).Index = index
      item:SetId("hunt_pd_2")
      item:SetPosition(self.CreatePosition(7, 8))
      self:SaveItemProperty(item)
      self.m_extraItems[index] = item
      self:_LogSignatureTransform(origin, item)
    elseif self.m_signaturePd then
      item = origin
    else
      item = self:ReplaceHuntPdItem(origin, self.m_signatureNextLevelCode, 2)
      self:_LogSignatureTransform(origin, item)
    end
    self.m_activityModel:SetSigLevel(self.m_activityModel:GetSigLevel() + 1)
    self:_UpdateSignatureUpgradeInfo()
    local message = {Old = origin, New = item}
    return message
  end
end

function BaseUIBoardModel:_LogSignatureTransform(origin, newItem)
  local originItemCode = origin and origin:GetType() or nil
  if originItemCode == nil then
    local newType = newItem:GetType()
    originItemCode = string.sub(newType, 1, string.find(newType, "_"))
    originItemCode = originItemCode .. "pd0_1"
  end
  GM.BIManager:LogTransform(originItemCode, newItem:GetType())
end
