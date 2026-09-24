CloudsDashHuntBoardModel = setmetatable({}, BaseUIBoardModel)
CloudsDashHuntBoardModel.__index = CloudsDashHuntBoardModel
CloudsDashHuntBoardModel.DefaultHorizontalTiles = 5
CloudsDashHuntBoardModel.DefaultVerticalTiles = 5
CloudsDashHuntBoardModel.HorizontalTiles = 5
CloudsDashHuntBoardModel.VerticalTiles = 5

function CloudsDashHuntBoardModel.Create(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, width, height, cloud)
  local boardModel = setmetatable({}, CloudsDashHuntBoardModel)
  CloudsDashHuntBoardModel.HorizontalTiles = width or CloudsDashHuntBoardModel.DefaultHorizontalTiles
  CloudsDashHuntBoardModel.VerticalTiles = height or CloudsDashHuntBoardModel.DefaultVerticalTiles
  boardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud)
  return boardModel
end

function CloudsDashHuntBoardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud)
  BaseUIBoardModel.Init(self, itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud)
end

function CloudsDashHuntBoardModel:_InitHuntBook()
end

function CloudsDashHuntBoardModel:GetItemIllustratedBook()
end

function CloudsDashHuntBoardModel:GetBookEndRewards()
end

function CloudsDashHuntBoardModel:_InitTransformLayer(itemTransformLayerDataTable, transformLayerConfig)
end

function CloudsDashHuntBoardModel:GetItemLayerModel()
  return CloudsDashItemLayerModel
end

function CloudsDashHuntBoardModel:HasTransformLayer()
  return nil
end

function CloudsDashHuntBoardModel:GetItemTransformModel()
  return nil
end

function CloudsDashHuntBoardModel:ReplaceToTransformLayerItem()
end

function CloudsDashHuntBoardModel.CreateMatrix()
  return BaseBoardModel._CreateMatrix(CloudsDashHuntBoardModel)
end

function CloudsDashHuntBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(CloudsDashHuntBoardModel, x, y)
end

function CloudsDashHuntBoardModel.CreatePositionFromLocalPosition(localPositionX, localPositionY)
  return BaseBoardModel._CreatePositionFromLocalPosition(CloudsDashHuntBoardModel, localPositionX, localPositionY)
end

function CloudsDashHuntBoardModel.GetValidPositionIterator()
  return CloudsDashHuntBoardModel._GetValidPositionIterator(CloudsDashHuntBoardModel)
end

function CloudsDashHuntBoardModel._GetValidPositionIterator(boardClass, x, y)
  local pos
  if x ~= nil and y ~= nil then
    pos = BaseBoardModel._CreatePosition(boardClass, x, y)
  end
  return BaseBoardModel._ValidPositionIterator, boardClass, pos
end

function CloudsDashHuntBoardModel:CacheItems(cachedItemCodes, type, cost, itemIdList, notUpdateCache, isTutorialItem)
  self.m_itemCacheModel:PushItems(cachedItemCodes, type, cost, itemIdList)
  EventDispatcher.DispatchEvent(EEventType.CacheItems, {items = cachedItemCodes, NotUpdateCache = notUpdateCache})
  EventDispatcher.DispatchEvent(EEventType.CloudsDashGetHuntEvent, {
    activityType = self.m_activityType
  })
  EventDispatcher.DispatchEvent(EEventType.CloudsDashUpdateReddot)
end

function CloudsDashHuntBoardModel:PopCachedItem(bLongPress)
  if self:IsBoardFull() then
    return false
  end
  local position
  position = self:FindEmptyPositionInValidOrder()
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
  local message = {New = newItem, CacheId = cacheId}
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  EventDispatcher.DispatchEvent(EEventType.CloudsDashUpdateReddot)
  self.event:Call(BoardEventType.PopCachedItem, message)
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {itf = 0, m = 0}, self:GetGameMode())
  end
  local ext
  if bLongPress then
    ext = {long_press = 1}
  end
  GM.BIManager:LogSpread("pop", code, newItem.itemScore, self:GetGameMode(), ext)
  return true
end

function CloudsDashHuntBoardModel:CachePdSpreadItem()
end

function CloudsDashHuntBoardModel:TryCreateInfiChestItem(code, chestMap, originItem)
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item ~= originItem and (chestMap[item:GetCode()] or item:GetComponent(ItemRune) ~= nil or item:GetComponent(ItemSand) ~= nil or item:GetComponent(ItemSwallow) ~= nil) then
      return
    end
  end
  local newItem = self:GenerateItem(originItem:GetPosition(), code)
  self.event:Call(BoardEventType.AddNewItem, {Source = originItem, New = newItem})
  GM.BIManager:LogSpread(originItem:GetCode(), code, 0, EGameMode.CloudsDash)
end

function CloudsDashHuntBoardModel:_LogSwapFailed(item, targetItem)
  GM.BIManager:LogAction(EBIType.ItemSwapFailed, {
    from = item:GetCode(),
    to = targetItem:GetCode()
  })
end

function CloudsDashHuntBoardModel:_MergeItem(item, targetItem, targetPosition)
  self:RemoveItem(item)
  local mergedType = item:GetMergedType()
  if StringUtil.StartWith(item:GetType(), ItemCodePrefix.Hunt) then
    local lv = GM.ItemDataModel:GetChainLevel(item:GetType())
    for activityType, _ in pairs(CloudsDashDefinition) do
      local huntModel = GM.ActivityManager:GetModel(activityType)
      if huntModel:GetState() == ActivityState.Started then
        mergedType = GM.ItemDataModel:GetMergedType(huntModel:GetItemCodeByLevel(lv))
      end
    end
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
  EventDispatcher.DispatchEvent(EEventType.ItemMerged, mergeMessage)
  local ext = (item:GetComponent(ItemCobweb) ~= nil or targetItem:GetComponent(ItemCobweb) ~= nil) and "cw:1" or nil
  GM.BIManager:LogMerge(item:GetType(), newItem:GetCode(), nil, ext, EGameMode.CloudsDash)
end

function CloudsDashHuntBoardModel:ShockNearby(item, targetPosition)
  if targetPosition == nil then
    return
  end
  local testPosition, testItem
  for _, direction in ipairs(BaseItemLayerModel.Directions4Way) do
    testPosition = targetPosition + direction
    testItem = self:GetItem(testPosition)
    if testItem ~= nil then
      testItem:DispatchComponentEvent("OnShock")
    end
  end
end

function CloudsDashHuntBoardModel:GetGameMode()
  return EGameMode.CloudsDash
end

function CloudsDashHuntBoardModel:CanItemSell(item)
  if item:GetSellingPrice() == nil then
    return false
  end
  if self.m_activityModel ~= nil and self.m_activityModel.CanItemSell ~= nil and not self.m_activityModel:CanItemSell(item) then
    return false
  end
  return true
end

function CloudsDashHuntBoardModel:SellItem(item)
  self:RemoveItem(item)
  GM.BIManager:LogStore(item:GetCode(), 1, self:GetSellingPropertyType(), 0, EShopType.SellItem, EGameMode.CloudsDash)
  local msg = {Source = item}
  self.event:Call(BoardEventType.SellItem, msg)
  EventDispatcher.DispatchEvent(EEventType.ItemSelled, msg)
end

function CloudsDashHuntBoardModel:_InitCloud(cloud)
  if not cloud then
    return
  end
  self.m_cloudConfig = cloud
  self.m_cloudState = self.m_activityModel:GetCloudState()
  self.m_cloudSwallowLockState = self.m_activityModel:GetCloudSwallowLockState()
  self.m_tileLock = {}
  self:UpdateTileLock()
end

function CloudsDashHuntBoardModel:TryUnlockCloudByDrag(itemModel)
  return false
end

function CloudsDashHuntBoardModel:TryUnlockBookItemUnderCloud()
end

function CloudsDashHuntBoardModel:_InitExtraPdUp(config)
  self.m_extraItems = {}
  local index = 2
  local id = "hunt_pd_" .. index
  local item = self.m_itemManager:GetItem(id)
  if item == nil then
    return
  end
  item:GetComponent(ItemHuntAnim).Index = index
  local pdBoardPos = CloudsDashDefinition[self.m_activityType].HuntPdBoardPos
  Log.Assert(pdBoardPos ~= nil, "CloudsDashHuntBoardModel:_InitExtraPdItems. HuntPdBoardPos is nil")
  local boardPosition = self.CreatePosition(pdBoardPos.x, pdBoardPos.y)
  item:SetPosition(boardPosition)
  self.m_extraItems[index] = item
end

function CloudsDashHuntBoardModel:_UpdatePdSwallow()
end

function CloudsDashHuntBoardModel:ConsumeProp(num, itemType)
end

function CloudsDashHuntBoardModel:LoadFile(y, depth, bInverse)
  self.m_itemLayerModel:LoadFile(self, self.m_initCodeMap, y, depth, bInverse)
end

function CloudsDashHuntBoardModel:_OnTransformLayerItemScrollUp(rows, position)
end

function CloudsDashHuntBoardModel:_OnStickerScrolled(item, position)
  return position
end

function CloudsDashHuntBoardModel:_OnTransformLayerItemScrollDown(rows, position)
end

function CloudsDashHuntBoardModel:_TryClaimItemStickerReward(item)
end

function CloudsDashHuntBoardModel:TryPushCloudKeyProgress(itemType, sourceItem)
  BaseUIBoardModel.TryPushCloudKeyProgress(self, itemType, sourceItem, nil)
end

function CloudsDashHuntBoardModel:TryUnclockCloudByClick()
end

function CloudsDashHuntBoardModel:_UpdateSignatureUpgradeInfo()
  if not Table.IsEmpty(self.m_cloudConfig and self.m_cloudConfig.pdUp) then
    local pdUpConfig = self.m_cloudConfig.pdUp
    local sigItem = self:GetExtraItem(2)
    if sigItem == nil then
      self.m_signatureUpgradeLockKey = pdUpConfig[1].unlock
      self.m_signatureNextLevelCode = pdUpConfig[1].code
      self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
      return
    else
      local bFind = false
      local curItemType = sigItem:GetType()
      for _, v in ipairs(pdUpConfig) do
        if bFind then
          self.m_signatureUpgradeLockKey = v.unlock
          self.m_signatureNextLevelCode = v.code
          self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
          return
        end
        if v.code == curItemType then
          bFind = true
        end
      end
    end
  end
  self.m_signatureUpgradeLockKey = nil
  self.m_signatureNextLevelCode = nil
  self.m_bSignatureCanNotUpgrade = true
end

function CloudsDashHuntBoardModel:TryUpgradeSignature(itemType)
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
      item = ItemModelFactory.CreateWithCode(self, nil, self.m_signatureNextLevelCode)
      item:GetComponent(ItemHuntAnim).Index = index
      item:SetId("hunt_pd_2")
      item:SetPosition(self.CreatePosition(7, 8))
      self:SaveItemProperty(item)
      self.m_extraItems[index] = item
    else
      item = self:ReplaceHuntPdItem(origin, self.m_signatureNextLevelCode, 2)
    end
    self:_UpdateSignatureUpgradeInfo()
    local originItemCode = origin and origin:GetType() or nil
    if originItemCode == nil then
      local newType = item:GetType()
      originItemCode = string.sub(newType, 1, string.find(newType, "_"))
      originItemCode = originItemCode .. "pd0_1"
    end
    GM.BIManager:LogTransform(originItemCode, item:GetType())
    local message = {Old = origin, New = item}
    return message
  end
end

function CloudsDashHuntBoardModel:_LogSignatureTransform(origin, newItem)
end

function CloudsDashHuntBoardModel:_InitExtraRewardLayer(openMapConfig)
end

function CloudsDashHuntBoardModel:_UpdateCurExtraRewardLayer(bInverse)
end

function CloudsDashHuntBoardModel:GetExtraRewardLayer()
end
