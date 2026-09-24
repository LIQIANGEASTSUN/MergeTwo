BaseSceneBoardModel = setmetatable({}, BaseActionBoardModel)
BaseSceneBoardModel.__index = BaseSceneBoardModel
BaseSceneBoardModel.HorizontalTiles = 7
BaseSceneBoardModel.VerticalTiles = 9

function BaseSceneBoardModel:Init(gameMode, itemManager, itemLayerModel, itemCacheModel, orderModel)
  BaseActionBoardModel.Init(self, itemLayerModel, itemManager, itemCacheModel)
  DEFINE_ITEM_EVENT(self, "Open")
  DEFINE_ITEM_EVENT(self, "SpeedUp")
  DEFINE_ITEM_EVENT(self, "Break")
  DEFINE_ITEM_EVENT(self, "Choose")
  DEFINE_ITEM_EVENT(self, "Activate")
  self.m_gameMode = gameMode
  self.m_orderModel = orderModel
  if self.m_itemLayerModel.FilterItemsWithType then
    function self.FilterItemsWithType(boardModel, type)
      return boardModel.m_itemLayerModel:FilterItemsWithType(type)
    end
  end
  if self.m_itemLayerModel.FilterItemsWithTypes then
    function self.FilterItemsWithTypes(boardModel, types)
      return boardModel.m_itemLayerModel:FilterItemsWithTypes(types)
    end
  end
  if self.m_itemLayerModel.FilterItemsWithComponent then
    function self.FilterItemsWithComponent(boardModel, componentType)
      return boardModel.m_itemLayerModel:FilterItemsWithComponent(componentType)
    end
  end
  if self.m_itemLayerModel.GetAllBoardItems then
    function self.GetAllItems(boardModel)
      return boardModel.m_itemLayerModel:GetAllBoardItems()
    end
  end
end

function BaseSceneBoardModel.CreateMatrix()
  return BaseBoardModel._CreateMatrix(BaseSceneBoardModel)
end

function BaseSceneBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(BaseSceneBoardModel, x, y)
end

function BaseSceneBoardModel.CreatePositionFromLocalPosition(localPositionX, localPositionY)
  return BaseBoardModel._CreatePositionFromLocalPosition(BaseSceneBoardModel, localPositionX, localPositionY)
end

function BaseSceneBoardModel.GetValidPositionIterator(isFromBottomRight)
  return BaseBoardModel._GetValidPositionIterator(BaseSceneBoardModel, isFromBottomRight)
end

function BaseSceneBoardModel:LoadFileConfig()
  self.m_promptConfig = {}
  local promptConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.BoardPrompt)
  for _, promptConfig in ipairs(promptConfigs) do
    self.m_promptConfig[promptConfig.Type] = promptConfig
  end
  self.m_itemLayerModel:LoadFileConfig()
  self.m_orderModel:LoadFileConfig()
end

function BaseSceneBoardModel:OnSyncDataFinished()
  self.m_itemManager:OnSyncDataFinished()
  self.m_itemLayerModel:OnSyncDataFinished()
  self.m_itemCacheModel:OnSyncDataFinished()
  self.m_orderModel:OnSyncDataFinished()
end

function BaseSceneBoardModel:ResetData()
  self.m_itemManager:ResetData()
  self.m_itemLayerModel:ResetData()
  self.m_itemCacheModel:ResetData()
  self.m_orderModel:ResetData()
end

function BaseSceneBoardModel:Update()
  if self.m_gameMode ~= GM.SceneManager:GetGameMode() then
    return
  end
  if self.GetAllItems then
    local items = self:GetAllItems()
    for _, item in ipairs(items) do
      item:DispatchComponentEvent("Update")
    end
  else
    for position in self.GetValidPositionIterator() do
      local item = self:GetItem(position)
      if item ~= nil then
        item:DispatchComponentEvent("Update")
      end
    end
  end
end

function BaseSceneBoardModel:UpdatePerSecond()
  if self.m_gameMode ~= GM.SceneManager:GetGameMode() then
    return
  end
  BaseActionBoardModel.UpdatePerSecond(self)
end

function BaseSceneBoardModel:UpdateOrderState()
  self.m_orderModel:UpdateState()
end

function BaseSceneBoardModel:GetPromptConfig()
  return self.m_promptConfig
end

function BaseSceneBoardModel:GetBubbleBrokenConfig()
  assert(false, "GetBubbleBrokenConfig()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseSceneBoardModel:GetEnergyPropertyType()
  assert(false, "GetEnergyPropertyType()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseSceneBoardModel:GetSellingPropertyType()
  assert(false, "GetSellingPropertyType()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseSceneBoardModel:GetGameMode()
  return self.m_gameMode
end

function BaseSceneBoardModel:SaveItemProperty(item)
  BaseActionBoardModel.SaveItemProperty(self, item)
  EventDispatcher.DispatchEvent(EEventType.ItemPropertyChanged, item)
end

function BaseSceneBoardModel:Refresh(functionName)
  for _, v in pairs(self.m_itemManager:GetAllItems()) do
    v:DispatchComponentEvent(functionName)
  end
end

function BaseSceneBoardModel:FilterItems(filter)
  return self.m_itemLayerModel:FilterItems(filter)
end

function BaseSceneBoardModel:_SetItem(position, item, autoUpdateOrderState)
  BaseActionBoardModel._SetItem(self, position, item, autoUpdateOrderState)
  if autoUpdateOrderState ~= false then
    self:UpdateOrderState()
  end
end

function BaseSceneBoardModel:CacheItems(cachedItemCodes, type, cost, sunshineIds)
  self.m_itemCacheModel:PushItems(cachedItemCodes, type, cost, nil, sunshineIds)
  for _, code in ipairs(cachedItemCodes) do
    GM.BIManager:LogAction(EBIType.CacheItem, tostring(code))
  end
  EventDispatcher.DispatchEvent(EEventType.CacheItems, {items = cachedItemCodes})
end

function BaseSceneBoardModel:PopCachedItem()
  if self:IsToolBoxCollect() and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ToolBoxCollect2) then
    local code = self:GetCachedItem(1)
    if code == ItemType.ToolBox01 or code == ItemType.ToolBox02 or code == ItemType.HugeToolBox01 or code == ItemType.HugeToolBox02 then
      self.m_itemCacheModel:PopItem()
      local item = ItemModelFactory.CreateWithCode(self, nil, code)
      local itemSpread = item:GetComponent(ItemSpread)
      local rewards = itemSpread:GetToolBoxSpreadItems(code)
      item:Destroy()
      self.event:Call(BoardEventType.CollectFromCache, {Rewards = rewards})
      EventDispatcher.DispatchEvent(EEventType.PopCachedItem)
      GM.BIManager:LogUseItem(code, 1, EBIType.ItemCollect, EGameMode.Main, EGameMode.Main)
      return true
    elseif ToolCodeToLevel[code] then
      self.m_itemCacheModel:PopItem()
      local rewards = {
        {
          [PROPERTY_TYPE] = code,
          [PROPERTY_COUNT] = 1
        }
      }
      GM.PropertyDataManager:Acquire(rewards, EPropertySource.Give, EBIType.ItemCollect, self:GetGameMode())
      self.event:Call(BoardEventType.CollectFromCache, {Rewards = rewards})
      EventDispatcher.DispatchEvent(EEventType.PopCachedItem)
      GM.BIManager:LogUseItem(code, 1, EBIType.ItemCollect, EGameMode.Main, EGameMode.Main)
      return true
    end
  end
  if self:IsBoardFull() then
    return false
  end
  local position
  local code = self:GetCachedItem(1)
  position = self:FindEmptyPositionInAttach(code)
  position = position or self:FindEmptyPositionInValidOrder()
  if position == nil then
    return false
  end
  local cost, sunshineId
  if not StringUtil.IsNilOrEmpty(code) and ItemBoxSimilarUtility.IsBoxSimilarItem(code) then
    EventDispatcher.DispatchEvent(EEventType.ChangeCachedItems)
    return false
  end
  local cacheId = self.m_itemCacheModel.m_itemIdList[1]
  code, cost, _, sunshineId = self.m_itemCacheModel:PopItem()
  if StringUtil.IsNilOrEmpty(code) then
    Log.Assert(false, "code\228\184\141\232\131\189\228\184\186\231\169\186")
    return false
  end
  if LuckyStarRewardItem.IsLuckyStarRewardType(code) then
    EventDispatcher.DispatchEvent(EEventType.PopCachedItem)
    return true
  end
  local newItem = self:GenerateItem(position, code, cost)
  if newItem and not StringUtil.IsNilOrEmpty(sunshineId) then
    newItem:SetSunshineId(sunshineId)
    local sunshineModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
    if sunshineModel then
      local totalScore = sunshineModel:GetRewardBoxTotalScore(sunshineId)
      code = code .. "_" .. totalScore
    end
  end
  local message = {New = newItem, CacheId = cacheId}
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  self.event:Call(BoardEventType.PopCachedItem, message)
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {
      itf = self.IsInventoryFull and self:IsInventoryFull() and 1 or 0,
      m = GM.SceneManager:GetGameMode() == EGameMode.Main and 1 or 0
    })
  end
  GM.BIManager:LogSpread("pop", code, newItem.itemScore, self:GetBiGameMode(), nil, {
    id = newItem:GetId()
  })
  return true
end

function BaseSceneBoardModel:PopCachedBoxItem(cachedPos)
  local code = self:GetCachedItem(1)
  if StringUtil.IsNilOrEmpty(code) or not ItemBoxSimilarUtility.IsBoxSimilarItem(code) then
    EventDispatcher.DispatchEvent(EEventType.ChangeCachedItems)
    return false
  end
  self.m_itemCacheModel:PopItem()
  EventDispatcher.DispatchEvent(EEventType.ChangeCachedItems)
  ItemBoxSimilarUtility.AcquireItemRewards(code, cachedPos)
  return true
end

function BaseSceneBoardModel:HasItemTypeInCache(itemType)
  return self.m_itemCacheModel:HasItemTypeInCache(itemType)
end

function BaseSceneBoardModel:FinishOrder(order, itemModel, activityType, rewardUiPos)
  if activityType and SpokespersonDefinition[activityType] then
    GM.UIManager:SetEventLock(true)
  end
  EventDispatcher.DispatchEvent(EEventType.OrderWillFinish, {
    order = order,
    isActivity = activityType ~= nil
  })
  local removedItems, finishScore, costInfo, storedItems, bStoreSuccess, totalEnergyToday
  if order:GetType() == OrderType.CurtainCall then
    removedItems, storedItems, bStoreSuccess = self:RemoveCurtainCallOrderItems(order)
    order:SetStorePdSuccess(bStoreSuccess)
  else
    removedItems, finishScore, costInfo, totalEnergyToday = self:RemoveOrderItems(order, itemModel)
    order.finishScore = finishScore
    order.costInfo = costInfo
  end
  local rewards = order:GetRewards()
  local orginBaseRewards = Table.ShallowCopy(rewards)
  if activityType == ActivityType.ExtraCustomer then
    local cardReward = order:GetCardReward()
    if AlbumModel.IsAlbumPackType(cardReward[PROPERTY_TYPE]) and order:IsDoublePack() then
      cardReward = Table.ShallowCopy(cardReward)
      cardReward[PROPERTY_COUNT] = 2 * cardReward[PROPERTY_COUNT]
    end
    RewardApi.AcquireRewardsLogic({cardReward}, EPropertySource.Give, activityType, CacheItemType.Stack)
  end
  local goldCount
  for _, v in pairs(rewards) do
    if v[PROPERTY_TYPE] == EPropertyType.Gold then
      goldCount = v[PROPERTY_COUNT]
      EventDispatcher.DispatchEvent(EEventType.CollectGold, {count = goldCount})
    end
  end
  if order.GetSunshineOrderReward then
    local sunReward = order:GetSunshineOrderReward()
    if not Table.IsEmpty(sunReward) then
      table.insert(rewards, sunReward)
    end
  end
  if order.GetSpokespersonOrderReward then
    local personReward = order:GetSpokespersonOrderReward()
    if not Table.IsEmpty(personReward) then
      table.insert(rewards, personReward)
    end
  end
  local fireworksItemCode, fireworksItemScore, fwStage, fwext, superBuffCode, superBuffScore
  if order.GetFireworksBuffReward then
    fireworksItemCode, fireworksItemScore, fwStage, fwext, superBuffCode, superBuffScore = order:GetFireworksBuffReward()
  end
  if order.GetPhotoReward then
    local photoReward = order:GetPhotoReward()
    if not Table.IsEmpty(photoReward) then
      table.insert(rewards, photoReward)
    end
  end
  local chestReward
  if order.GetChestReward then
    chestReward = order:GetChestReward()
  end
  local newPerformance = GM.ConfigModel:IsOrderGivePerformanceOpen()
  if newPerformance then
    PropertyAnimationManager.AddFlyingCount()
  end
  rewards = RewardApi.FilterInvalidReward(rewards)
  orginBaseRewards = RewardApi.FilterInvalidReward(orginBaseRewards)
  RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, order:GetBIType(), CacheItemType.Stack, nil, nil, nil, totalEnergyToday, finishScore)
  if rewardUiPos then
    local positionArray = {
      rewardUiPos,
      rewardUiPos,
      rewardUiPos
    }
    local viewData = {arrWorldPos = positionArray, noDelayTime = true}
    RewardApi.AcquireRewardsInView(rewards, viewData, true)
  end
  if GameConfig.IsTestMode() then
    GM.TestOrderStatisticsModel:RecordOrder(order, removedItems)
  end
  if not activityType then
    self.m_orderModel:FinishOrder(order, removedItems, orginBaseRewards)
  end
  local fwRewardItem, fwSuperRewardItem, chestItems
  if newPerformance then
    fwRewardItem, fwSuperRewardItem = self:_AcquireFireworksGalaRewardLogic(fireworksItemCode, fireworksItemScore, superBuffCode, superBuffScore, fwext)
    if chestReward then
      chestItems = self:_AcquireChestRewardLogic(chestReward)
    end
  end
  self.event:Call(BoardEventType.FinishOrder, {
    Order = order,
    Rewards = not rewardUiPos and rewards or {},
    Removed = removedItems,
    ActivityType = activityType,
    bItemClicked = itemModel ~= nil,
    Stored = storedItems,
    bStoreSuccess = bStoreSuccess,
    FireworksRewardItems = {fwRewardItem, fwSuperRewardItem},
    FireworksRewardCodes = {fireworksItemCode, superBuffCode},
    FwStage = fwStage,
    ChestReward = chestReward,
    ChestItem = chestItems
  })
  EventDispatcher.DispatchEvent(EEventType.OrderFinished, {
    order = order,
    isActivity = activityType ~= nil,
    activityType = activityType
  })
  if newPerformance then
    PropertyAnimationManager.RemoveFlyingCount()
  else
    self:_AcquireFireworksGalaReward(fireworksItemCode, fireworksItemScore, superBuffCode, superBuffScore, order, fwStage, activityType, fwext)
    if not Table.IsEmpty(chestReward) then
      self:_AcquireChestReward(chestReward, order)
    end
  end
  if activityType and SpokespersonDefinition[activityType] then
    GM.UIManager:SetEventLock(false)
  end
end

function BaseSceneBoardModel:_AcquireFireworksGalaRewardLogic(itemCode, itemScore, superBuffCode, superBuffScore, fwext)
  local fireworkFirstItemPos, rewardItem
  if itemCode ~= nil then
    local pos
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoNearNew) then
      pos = self:FindEmptyPositionInAttach(itemCode)
    end
    if pos == nil then
      pos = self:FindEmptyPositionInValidOrder(true)
    end
    if pos == nil then
      self:CacheItems({itemCode}, CacheItemType.Stack, {
        {freeScore = itemScore}
      })
    else
      fireworkFirstItemPos = pos
      rewardItem = self:GenerateItem(pos, itemCode, {freeScore = itemScore}, false, false)
      rewardItem.toBeAdd = true
    end
    local ext = fwext .. ";isc:" .. itemScore
    GM.BIManager:LogAcquire(itemCode, 1, EBIType.FireworksGalaReward, true, nil, ext)
  end
  local superRewardItem
  if superBuffCode ~= nil then
    local pos
    if fireworkFirstItemPos ~= nil then
      pos = self:FindEmptyPositionInCircleOrder(fireworkFirstItemPos)
    end
    if pos == nil then
      pos = self:FindEmptyPositionInValidOrder(true)
    end
    if pos == nil then
      self:CacheItems({superBuffCode}, CacheItemType.Stack, {
        {freeScore = superBuffScore}
      })
    else
      superRewardItem = self:GenerateItem(pos, superBuffCode, {freeScore = superBuffScore})
      superRewardItem.toBeAdd = true
    end
    local ext = fwext .. ";isc:" .. superBuffScore
    GM.BIManager:LogAcquire(superBuffCode, 1, EBIType.FireworksGalaSuperReward, true, nil, ext)
  end
  return rewardItem, superRewardItem
end

function BaseSceneBoardModel:_AcquireFireworksGalaReward(itemCode, itemScore, superBuffCode, superBuffScore, order, fwStage, actType, fwext)
  local fireworkFirstItemPos
  if itemCode ~= nil then
    local pos
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoNearNew) then
      pos = self:FindEmptyPositionInAttach(itemCode)
    end
    if pos == nil then
      pos = self:FindEmptyPositionInValidOrder(true)
    end
    if pos == nil then
      self:CacheItems({itemCode}, CacheItemType.Stack, {
        {freeScore = itemScore}
      })
      self.event:Call(BoardEventType.AddFireworksGalaItem, {
        Code = itemCode,
        Order = order,
        ActivityType = actType,
        Stage = fwStage
      })
    else
      fireworkFirstItemPos = pos
      local rewardItem = self:GenerateItem(pos, itemCode, {freeScore = itemScore}, false, false)
      rewardItem.toBeAdd = true
      self.event:Call(BoardEventType.AddFireworksGalaItem, {
        New = rewardItem,
        Order = order,
        ActivityType = actType,
        Stage = fwStage
      })
    end
    local ext = fwext .. ";isc:" .. itemScore
    GM.BIManager:LogAcquire(itemCode, 1, EBIType.FireworksGalaReward, true, nil, ext)
  end
  if superBuffCode ~= nil then
    local pos
    if fireworkFirstItemPos ~= nil then
      pos = self:FindEmptyPositionInCircleOrder(fireworkFirstItemPos)
    end
    if pos == nil then
      pos = self:FindEmptyPositionInValidOrder(true)
    end
    if pos == nil then
      self:CacheItems({superBuffCode}, CacheItemType.Stack, {
        {freeScore = superBuffScore}
      })
      self.event:Call(BoardEventType.AddFireworksGalaItem, {
        Code = superBuffCode,
        Order = order,
        ActivityType = actType,
        Stage = fwStage,
        Super = true
      })
    else
      local rewardItem = self:GenerateItem(pos, superBuffCode, {freeScore = superBuffScore})
      rewardItem.toBeAdd = true
      self.event:Call(BoardEventType.AddFireworksGalaItem, {
        New = rewardItem,
        Order = order,
        ActivityType = actType,
        Stage = fwStage,
        Super = true
      })
    end
    local ext = fwext .. ";isc:" .. superBuffScore
    GM.BIManager:LogAcquire(superBuffCode, 1, EBIType.FireworksGalaSuperReward, true, nil, ext)
  end
end

function BaseSceneBoardModel:_AcquireChestReward(rewardList, order)
  for index, reward in ipairs(rewardList) do
    local code = reward.code
    local score = reward.score
    local pos
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoNearNew) then
      pos = self:FindEmptyPositionInAttach(code)
    end
    if pos == nil then
      pos = self:FindEmptyPositionInValidOrder(true)
    end
    if pos == nil then
      self:CacheItems({code}, CacheItemType.Stack, {
        {freeScore = score}
      })
      self.event:Call(BoardEventType.AddChestCustomerItem, {
        Code = code,
        Order = order,
        Index = index,
        Finish = #rewardList == index
      })
    else
      local newItem = self:GenerateItem(pos, code, {freeScore = score}, false, false)
      newItem.toBeAdd = true
      self.event:Call(BoardEventType.AddChestCustomerItem, {
        New = newItem,
        Order = order,
        Index = index,
        Finish = #rewardList == index
      })
    end
    GM.BIManager:LogAcquire(code, 1, EBIType.ChestCustomerReward, true, nil, "score:" .. score)
  end
end

function BaseSceneBoardModel:_AcquireChestRewardLogic(rewardList)
  local rewardItems = {}
  for index, reward in ipairs(rewardList) do
    local code = reward.code
    local score = reward.score
    local pos
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoNearNew) then
      pos = self:FindEmptyPositionInAttach(code)
    end
    if pos == nil then
      pos = self:FindEmptyPositionInValidOrder(true)
    end
    if pos == nil then
      self:CacheItems({code}, CacheItemType.Stack, {
        {freeScore = score}
      })
    else
      rewardItems[index] = self:GenerateItem(pos, code, {freeScore = score}, false, false)
      rewardItems[index].toBeAdd = true
    end
    GM.BIManager:LogAcquire(code, 1, EBIType.ChestCustomerReward, true, nil, "score:" .. score)
  end
  return rewardItems
end

function BaseSceneBoardModel:RefreshOrder(order, orderCell)
  local newOrder = self.m_orderModel:RefreshOrder(order)
  self.event:Call(BoardEventType.RefreshOrder, {OldOrder = order, NewOrder = newOrder})
end

function BaseSceneBoardModel:RemoveOrderItems(order, itemModel)
  order:SetFinished()
  local removedItems = {}
  local finishScore = 0
  local arrCostInfo = {}
  local totalEnergyToday = 0
  local day = GM.GameModel:GetServerDay()
  
  local function removeOneItemFunc(item)
    table.insert(removedItems, item)
    finishScore = finishScore + (item.itemScore or 0)
    if item.createTime // 86400 ~= day then
      item.energyToday = 0
      item.energyStarToday = 0
    end
    table.insert(arrCostInfo, string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s,et:%s,elt:%s", item:GetCode(), item.costEnergy, item.freeScore, item.shopGemCost, item.bubbleGemCost, item.itemScore, item.energyToday, item.energyStarToday))
    totalEnergyToday = totalEnergyToday + item.energyToday
  end
  
  for _, requirement in ipairs(order:GetRequirements()) do
    if itemModel and BaseOrder.CanDeliverByItem(itemModel, requirement) then
      self:RemoveItem(itemModel, false)
      removeOneItemFunc(itemModel)
      itemModel = nil
    else
      local inBoard = false
      for position in self.GetValidPositionIterator() do
        local item = self:GetItem(position)
        if item and BaseOrder.CanDeliverByItem(item, requirement) then
          self:RemoveItem(item, false)
          removeOneItemFunc(item)
          inBoard = true
          break
        end
      end
      if not inBoard then
        local item = self:RemoveOrderRequireInInventory(requirement)
        if item then
          item.stored = true
          removeOneItemFunc(item)
        else
          GM.BIManager:LogProject("roif", json.encode({
            i = requirement,
            o = order:GetId(),
            r = order:GetRound(),
            a = order:GetAllRequireItems()
          }))
        end
      end
    end
  end
  self:UpdateOrderState()
  return removedItems, finishScore, table.concat(arrCostInfo, ";"), totalEnergyToday
end

function BaseSceneBoardModel:RemoveCurtainCallOrderItems(order)
end

function BaseSceneBoardModel:TryFinishOrders(sortedOrders, itemModel)
  for _, order in pairs(sortedOrders) do
    if order:NowCanFinishBy(itemModel:GetCode()) then
      if order:CanDeliverUseStore() then
        GM.UIManager:OpenView(UIPrefabConfigName.UseInventoryItemConfirmWindow, order, function()
          self:FinishOrder(order, itemModel)
        end)
        break
      end
      self:FinishOrder(order, itemModel)
      break
    end
  end
end

function BaseSceneBoardModel:IsItemExist(code)
  for _, item in pairs(self.m_itemManager:GetAllItems()) do
    if item:GetCode() == code then
      return true
    end
  end
  return false
end

function BaseSceneBoardModel:GetOrders()
  return self.m_orderModel:GetOrders()
end

function BaseSceneBoardModel:GetOrderCodeStateMap()
  return self.m_orderModel:GetCodeStateMap()
end

function BaseSceneBoardModel:GetOrderCodeRequireCount()
  return self.m_orderModel:GetAllStateCodeRequireCount()
end

function BaseSceneBoardModel:GetOrderCodeUnfinishedCount()
  return self.m_orderModel:GetCodeRequireCount()
end

function BaseSceneBoardModel:CanItemMove(item)
  return item:CanMove()
end

function BaseSceneBoardModel:CanItemMerge(item1, item2)
  local itemSpread1 = item1:GetComponent(ItemSpread)
  if itemSpread1 ~= nil and itemSpread1:IsChestUsedOnce() then
    return false
  end
  local itemSpread2 = item2:GetComponent(ItemSpread)
  if itemSpread2 ~= nil and itemSpread2:IsChestUsedOnce() then
    return false
  end
  local itemType1 = item1:GetType()
  local itemType2 = item2:GetType()
  local mergedType
  local count = 0
  if itemType1 == ItemType.Cobweb then
    count = 1
    itemType1 = item1:GetComponent(ItemCobweb):GetInnerItemCode()
  elseif itemType1 == ItemType.Ice then
    count = 1
    itemType1 = item1:GetComponent(ItemIce):GetInnerItemCode()
  end
  if itemType2 == ItemType.Cobweb then
    count = count + 1
    itemType2 = item2:GetComponent(ItemCobweb):GetInnerItemCode()
  elseif itemType2 == ItemType.Ice then
    count = count + 1
    itemType2 = item2:GetComponent(ItemIce):GetInnerItemCode()
  end
  if count == 2 then
    return false
  end
  mergedType = item1:GetMergedType() or item2:GetMergedType()
  if itemType1 == ItemType.Joker or itemType2 == ItemType.Joker then
    local curType = itemType1 == ItemType.Joker and itemType2 or itemType1
    return mergedType ~= nil and item1:CanMergeByJoker() and item2:CanMergeByJoker(), true, curType, mergedType
  end
  if (StringUtil.StartWith(itemType1, ItemCodePrefix.Scissors) or itemType1 == ItemType.ScissorsSp) and (StringUtil.StartWith(itemType2, ItemCodePrefix.Scissors) or itemType2 == ItemType.ScissorsSp) then
    local count = item1:GetComponent(ItemSplit):GetLeftCount() + item2:GetComponent(ItemSplit):GetLeftCount()
    if count <= 9999 then
      local type = "scissorssp_" .. count
      return true, false, itemType1, type
    else
      return false
    end
  end
  return itemType1 == itemType2 and mergedType ~= nil, false, itemType1, mergedType
end

function BaseSceneBoardModel:CanItemSplit(item, targetItem)
  local itemSplit = item:GetComponent(ItemSplit)
  if not itemSplit then
    return false
  end
  local targetItemSplit = targetItem:GetComponent(ItemSplit)
  if targetItemSplit then
    return false
  end
  return itemSplit:CanSplitItem(targetItem), itemSplit, targetItem
end

function BaseSceneBoardModel:CanItemSell(item)
  if item:GetSellingPrice() == nil then
    return false
  end
  return GM.OpenFunctionModel:IsFunctionOpen(EFunction.SellItem)
end

function BaseSceneBoardModel:HasOpeningItem()
  if self.FilterItemsWithComponent then
    local items = self:FilterItemsWithComponent(ItemSpread)
    if not Table.IsEmpty(items) then
      for _, spread in ipairs(items) do
        if spread:GetComponent(ItemSpread):GetState() == ItemSpreadState.Opening then
          return true
        end
      end
    end
    return false
  end
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    local itemSpread = item and item:GetComponent(ItemSpread)
    if itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Opening then
      return true
    end
  end
  return false
end

function BaseSceneBoardModel:SpreadItem(sourceItem, newItemPosition, newItemCode, logSpread, oldCode, newItemCost, autoUpdateOrderState, boardSpreadType, spreadFinish)
  local message, score = BaseActionBoardModel.SpreadItem(self, sourceItem, newItemPosition, newItemCode, logSpread, oldCode, newItemCost, autoUpdateOrderState, boardSpreadType)
  EventDispatcher.DispatchEvent(EEventType.ItemSpread, message)
  if logSpread then
    local debugInfo = {
      id = message.New:GetId()
    }
    local code = sourceItem:GetCode()
    local bSunshine = code == ItemType.SunshineBoost
    if bSunshine then
      local sunshineId = sourceItem:GetSunshineId()
      local sunshineModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
      if sunshineModel then
        local totalScore = sunshineModel:GetRewardBoxTotalScore(sunshineId, spreadFinish)
        code = code .. "_" .. totalScore
      end
      GM.BIManager:LogSpread(code, newItemCode, score, self:GetBiGameMode(), spreadFinish and "finish:1" or nil, debugInfo)
    else
      local extTable = {}
      if BoardSpreadType.IsLuckySpread(boardSpreadType) then
        extTable.luckyProduce = BoardSpreadTypeName[boardSpreadType]
      end
      local seq = GM.ItemFixedSpreadModel:GetEboxItemSequence(sourceItem:GetId())
      if 0 < seq then
        extTable.req = "ebox" .. seq
      end
      local config = GM.ItemDataModel:GetModelConfig(sourceItem:GetCode())
      local spreadType = config.Spread_WeightType
      if spreadType ~= nil then
        extTable.type = spreadType
      end
      if oldCode ~= nil then
        local oldLevel = GM.ItemDataModel:GetChainLevel(oldCode)
        local newLevel = GM.ItemDataModel:GetChainLevel(newItemCode)
        local levelSpan = newLevel - oldLevel
        local maxSpan = 0
        for strActivityType, v in pairs(DoubleEnergyDefinition) do
          local doubleEnergyModel = GM.ActivityManager:GetModel(strActivityType)
          if doubleEnergyModel ~= nil then
            maxSpan = doubleEnergyModel:GetMaxOpenEnergyMultiple()
          end
        end
        if maxSpan ~= 0 and levelSpan ~= maxSpan then
          extTable.de_switch = math.floor(2 ^ maxSpan)
          extTable.useEne = math.floor(2 ^ levelSpan)
        end
      end
      local ext = GM.BIManager:TableToString(extTable)
      GM.BIManager:LogSpread(sourceItem:GetCode(), newItemCode, score, self:GetBiGameMode(), ext, debugInfo)
    end
  end
end

function BaseSceneBoardModel:SkipItems(sourceItem, duration)
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      item:DispatchComponentEvent("OnTimeSkip", duration)
    end
  end
  self.event:Call(BoardEventType.TimeSkip, {Item = sourceItem, Duration = duration})
end

function BaseSceneBoardModel:DragItem(item, targetPosition)
  if not targetPosition:IsValid() then
    item:SetPosition(item:GetPosition())
    return
  end
  local sourceItem = self:GetItem(item:GetPosition())
  if sourceItem ~= item then
    item:SetPosition(item:GetPosition())
    return
  end
  local targetItem = self:GetItem(targetPosition)
  if targetItem == nil or targetItem == item then
    self:_SetItem(item:GetPosition(), nil, false)
    self:_SetItem(targetPosition, item, false)
    if targetItem ~= item then
      self:_LogMove(item, item:GetPosition(), targetPosition)
    end
    item:SetPosition(targetPosition)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    return
  end
  local canItemSplit, itemSplit, toBeSplitItem = self:CanItemSplit(item, targetItem)
  if itemSplit then
    item:SetPosition(item:GetPosition())
    if canItemSplit then
      itemSplit:StartSplitItem(toBeSplitItem, targetPosition)
    elseif self:IsBoardFull() then
      GM.UIManager:ShowPromptWithKey("hint_board_full")
    else
      GM.UIManager:ShowPromptWithKey("hint_not_split")
    end
    return
  end
  local canMerge, useJoker, curType, mergedType = self:CanItemMerge(item, targetItem)
  if canMerge then
    local autoRun = not GameConfig.IsTestMode() or GM.TestAutoRunModel.autoRun or GM.TestAutoRunModel.mergeAll
    if useJoker and not autoRun then
      GM.UIManager:OpenView(UIPrefabConfigName.JokerConfirmWindow, curType, mergedType, function(window)
        if self:CheckItemStillInPosition(item) and self:CheckItemStillInPosition(targetItem) then
          self:_MergeItem(item, targetItem, targetPosition, useJoker)
        elseif self:CheckItemStillInPosition(item) then
          item:SetPosition(item:GetPosition())
        end
        window:Close()
      end, function(window)
        if self:CheckItemStillInPosition(item) then
          item:SetPosition(item:GetPosition())
        end
        window:Close()
      end)
    elseif self:CheckOrderNeedItem(item, targetItem) then
      if not autoRun then
        GM.UIManager:OpenView(UIPrefabConfigName.NewUserMergeConfirmWindow, curType, mergedType, function(window)
          if self:CheckItemStillInPosition(item) and self:CheckItemStillInPosition(targetItem) then
            self:_MergeItem(item, targetItem, targetPosition, useJoker)
          elseif self:CheckItemStillInPosition(item) then
            item:SetPosition(item:GetPosition())
          end
          window:Close()
        end, function(window)
          if self:CheckItemStillInPosition(item) then
            item:SetPosition(item:GetPosition())
          end
          window:Close()
        end)
      else
        self:_MergeItem(item, targetItem, targetPosition, useJoker)
      end
    else
      self:_MergeItem(item, targetItem, targetPosition, useJoker)
    end
    return
  end
  local targetItemSwallow = targetItem:GetComponent(ItemSwallow)
  if targetItemSwallow ~= nil and targetItemSwallow:CanSwallow(item) then
    targetItemSwallow:Swallow(item)
    return
  end
  if not self:CanItemMove(targetItem) then
    item:SetPosition(item:GetPosition())
    GM.BIManager:LogAction(EBIType.ItemSwapFailed, {
      from = item:GetCode(),
      to = targetItem:GetCode()
    })
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
  self:_SetItem(itemPosition, targetItem, false)
  self:_LogMove(item, item:GetPosition(), targetPosition)
  self:_LogMove(targetItem, targetPosition, itemPosition)
  item:SetPosition(targetPosition)
  targetItem:SetPosition(itemPosition)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end

function BaseSceneBoardModel:_LogMove(item, from, to)
  GM.BIManager:LogMoveItem(item:GetCode(), item:GetId(), from:ToString(), to:ToString())
end

function BaseSceneBoardModel:_MergeItem(item, targetItem, targetPosition, useJoker)
  local itemId = item:GetId()
  self:RemoveItem(item, false)
  local targetItemId = targetItem:GetId()
  local mergeType = item:GetMergedType() or targetItem:GetMergedType()
  local mergedScissorsCount
  local type = item:GetType()
  local targetType = targetItem:GetType()
  if (StringUtil.StartWith(type, ItemCodePrefix.Scissors) or type == ItemType.ScissorsSp) and (StringUtil.StartWith(targetType, ItemCodePrefix.Scissors) or targetType == ItemType.ScissorsSp) then
    mergedScissorsCount = item:GetComponent(ItemSplit):GetLeftCount() + targetItem:GetComponent(ItemSplit):GetLeftCount()
    mergeType = "scissorssp_" .. mergedScissorsCount
  end
  local newItem = self:ReplaceItem(targetItem, mergeType, self:_CalcNewItemCost(item, targetItem), false)
  local mergeMessage = {
    Source = item,
    Target = targetItem,
    New = newItem
  }
  self.event:Call(BoardEventType.MergeItem, mergeMessage)
  local sourcePosition = item:GetPosition()
  local testPosition, testItem
  for _, direction in ipairs(BaseItemLayerModel.Directions4Way) do
    testPosition = targetPosition + direction
    testItem = self:GetItem(testPosition)
    if testItem ~= nil then
      testItem:DispatchComponentEvent("OnShock", false)
    end
    testPosition = sourcePosition + direction
    local testItem = self:GetItem(testPosition)
    if testItem ~= nil then
      testItem:DispatchComponentEvent("OnShock", false)
    end
  end
  local isInNoCDTrainBoard = false
  if self:GetGameMode() == EGameMode.NoCDTrain then
    isInNoCDTrainBoard = true
  end
  local newItemPos = newItem:GetPosition()
  local bubbleType
  if not isInNoCDTrainBoard then
    local isTemp = item:GetType() == ItemType.Ice or targetItem:GetType() == ItemType.Ice
    bubbleType = self:_TrySpreadIceOrBubble(newItem, newItemPos, isTemp)
  end
  if not isInNoCDTrainBoard and GM.OpenFunctionModel:IsFunctionOpen(EFunction.SpreadExtra) then
    local mergeExtra = newItem:GetMergedExtra()
    if not self:IsBoardFull() and mergeExtra then
      local prob = GM.ConfigModel:GetMergedExtraProb()
      local rand = math.random(100)
      if prob >= rand then
        for i = 1, mergeExtra[PROPERTY_COUNT] do
          local position = self:FindEmptyPositionInSpreadOrder(newItemPos)
          if position == nil then
            break
          end
          self:SpreadItem(newItem, position, mergeExtra[PROPERTY_TYPE], true, nil, nil, false)
        end
      end
    end
  end
  self:UpdateOrderState()
  local isTempItem, isIceItem, iceInnerCode
  if item:GetType() == ItemType.Ice then
    isIceItem = true
    isTempItem = item:GetComponent(ItemIce):IsTempIce()
    iceInnerCode = item:GetComponent(ItemIce):GetInnerItemCode()
  elseif targetItem:GetType() == ItemType.Ice then
    isIceItem = true
    isTempItem = targetItem:GetComponent(ItemIce):IsTempIce()
    iceInnerCode = targetItem:GetComponent(ItemIce):GetInnerItemCode()
  end
  local ext = bubbleType and "bb:" .. bubbleType or nil
  if item:GetComponent(ItemCobweb) ~= nil or targetItem:GetComponent(ItemCobweb) ~= nil then
    ext = StringUtil.Append(ext, "cw:1")
  end
  if isIceItem and not isTempItem then
    ext = StringUtil.Append(ext, "ice:1")
  end
  if isIceItem and isTempItem then
    ext = StringUtil.Append(ext, "temp:" .. iceInnerCode)
  end
  if useJoker then
    ext = StringUtil.Append(ext, "jk:1")
  end
  local debugInfo = {
    from_id = itemId,
    to_id = targetItemId,
    new_id = newItem:GetId()
  }
  EventDispatcher.DispatchEvent(EEventType.ItemMerged, mergeMessage)
  local newItemScore = GM.MainBoardModel:GetOrderModel():GetItemScoreByUnlockGen(newItem:GetCode())
  local fromName = iceInnerCode or item:GetType()
  local toName = newItem:GetCode()
  if mergedScissorsCount then
    fromName = "scissors"
    toName = newItem:GetCode() .. "_" .. mergedScissorsCount
    local sourceBIType = item:GetComponent(ItemSplit):GetLeftCount()
    local targetBIType = targetItem:GetComponent(ItemSplit):GetLeftCount()
    ext = StringUtil.Append(ext, "sc:" .. sourceBIType .. "+" .. targetBIType)
  end
  GM.BIManager:LogMerge(fromName, toName, newItemScore, ext, self:GetBiGameMode(), debugInfo)
end

local SpecificFreePdChainId = {
  "pd_5",
  "pd_13",
  "pd_20",
  "pd_35"
}

function BaseSceneBoardModel:_TrySpreadIceOrBubble(newItem, newItemPos, isTemp)
  local tempIceCode
  if GameConfig.IsTestMode() and GM.AutoTestingServer and GM.AutoTestingServer:IsAutoTesting() then
    return
  end
  tempIceCode = self:TrySpreadExtraIceItem(newItem:GetType(), isTemp)
  if tempIceCode then
    local icePosition = self:FindEmptyPositionInSpreadOrder(newItemPos)
    if icePosition then
      GM.ActivityManager:AddIceItemInfo(tempIceCode)
      self:SpreadItem(newItem, icePosition, ItemCodePrefix.Temp .. tempIceCode, true, nil, nil, false)
      return
    end
  end
  local bubbleChance, bubbleType
  if GM.OpenFunctionModel:IsFunctionOpen(EFunction.Bubble) and self.m_bubbleCount < self.m_bubbleMaxNum then
    bubbleChance = newItem:GetBubbleChance()
  end
  if bubbleChance ~= nil and GM.LevelModel:GetCurrentLevel() >= GM.SystemConfigModel:GetConfig(SystemConfigKey.BubbleNoneedInvalid) then
    local itemChain = GM.ItemDataModel:GetChainId(newItem:GetType())
    if itemChain then
      local pdChain = GM.ItemDataModel:GetChainGenerator(itemChain)
      if pdChain then
        local pdItemCode = ItemUtility.GetItemCode(pdChain, GM.ItemDataModel:GetChainUnlockedLevel(pdChain))
        local producerMargin = 5
        local orderModel = GM.MainBoardModel:GetOrderModel()
        if orderModel and orderModel.GetOrderProducerMargin then
          producerMargin = orderModel:GetOrderProducerMargin()
        end
        local mainGenerators = GM.ItemDataModel:GetUnlockedMainGenerator(producerMargin)
        if Table.ListContain(mainGenerators, pdItemCode) and not Table.ListContain(SpecificFreePdChainId, pdChain) and not self:_IsOrderRalatedItem(newItem:GetType()) then
          bubbleChance = nil
        end
      end
    end
  end
  if bubbleChance ~= nil then
    local scoreLimit = GM.ConfigModel:ParseGeneralConf(EGeneralConfType.BubbleOrderBonus)
    scoreLimit = not IsNil(scoreLimit) and tonumber(scoreLimit) or 0
    if 0 < scoreLimit and scoreLimit <= (GM.MainBoardModel:GetItemScoreByUnlockGen(newItem:GetType()) or 0) then
      local itemConfig = GM.ItemDataModel:GetModelConfig(newItem:GetType())
      if itemConfig and itemConfig.MergedType then
        local mergedType = itemConfig.MergedType
        local boardRequireMap = self:GetOrderCodeRequireCount()
        if boardRequireMap[mergedType] and 0 < boardRequireMap[mergedType] then
          local curItemCount = self:GetItemLayerCount(newItem:GetType())
          if curItemCount < boardRequireMap[mergedType] * 2 then
            bubbleChance = 100
          end
        end
      end
    end
  end
  if bubbleChance ~= nil and GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.TestBubble, 0) ~= 0 then
    bubbleChance = bubbleChance * 100
  end
  if not self:IsBoardFull() and bubbleChance ~= nil and bubbleChance >= math.random(100) then
    local bubblePosition = self:FindEmptyPositionInSpreadOrder(newItemPos)
    if bubblePosition ~= nil then
      bubbleType = newItem:GetType()
      local bubbleCode = ItemCodePrefix.Bubble .. bubbleType
      self:SpreadItem(newItem, bubblePosition, bubbleCode, true, nil, nil, false)
      return bubbleType
    end
  end
end

function BaseSceneBoardModel:TrySpreadExtraIceItem(code, isTemp)
  if self:GetGameMode() ~= EGameMode.Main then
    return
  end
  local iceModel = GM.ActivityManager:GetModel(ActivityType.TempItem)
  local codeType
  if iceModel then
    codeType = iceModel:TryCreateExtraTempItem(code, isTemp)
  end
  return codeType
end

function BaseSceneBoardModel:SpreadIntoCache(tilePos, itemType, count, biType)
  local rewards = {
    {
      [PROPERTY_TYPE] = itemType,
      [PROPERTY_COUNT] = count
    }
  }
  RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, biType, CacheItemType.Stack)
  self.event:Call(BoardEventType.SpreadIntoCache, {Rewards = rewards, Tile = tilePos})
end

function BaseSceneBoardModel:SellItem(item)
  local cost = item:GetSellingPrice()
  if cost and cost ~= 0 then
    local exchanges = {
      {
        [PROPERTY_TYPE] = self:GetSellingPropertyType(),
        [PROPERTY_COUNT] = cost
      }
    }
    GM.PropertyDataManager:Acquire(exchanges, EPropertySource.Give, EBIType.ItemSell)
  end
  self:RemoveItem(item)
  GM.BIManager:LogStore(item:GetCode(), 1, self:GetSellingPropertyType(), cost, EShopType.SellItem, self:GetBiGameMode(), {
    id = item:GetId()
  })
  GM.BIManager:LogAction(EBIType.ItemSell, string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s,sc:%s", item:GetCode(), item.costEnergy, item.freeScore, item.shopGemCost, item.bubbleGemCost, item.itemScore or 0, cost or 0), self:GetBiGameMode())
  if GameConfig.IsTestMode() then
    GM.TestOrderStatisticsModel:SellItem(item)
  end
  local msg = {Source = item}
  self.event:Call(BoardEventType.SellItem, msg)
  EventDispatcher.DispatchEvent(EEventType.ItemSelled, msg)
end

function BaseSceneBoardModel:UndoSellItem(item)
  local position = item:GetPosition()
  local removedItem
  local originalItem = self:GetItem(item:GetPosition())
  if originalItem ~= nil then
    local otherPosition = self:FindEmptyPositionInSpreadOrder(item:GetPosition())
    if otherPosition == nil then
      removedItem = originalItem
      self:RemoveItem(originalItem, false)
      local sunshineId = originalItem:GetSunshineId()
      if StringUtil.IsNilOrEmpty(sunshineId) then
        self:CacheItems({
          originalItem:GetCode()
        }, CacheItemType.Stack, {
          originalItem:GetCostInfo()
        })
      else
        self:CacheItems({
          originalItem:GetCode()
        }, CacheItemType.Stack, {
          originalItem:GetCostInfo()
        }, {sunshineId})
      end
    else
      position = otherPosition
    end
  end
  local cost = item:GetSellingPrice()
  if cost ~= 0 then
    GM.PropertyDataManager:Consume(self:GetSellingPropertyType(), cost, EBIType.UndoSellItem, item:GetCode())
  end
  item:SetPosition(position)
  self:SaveItemProperty(item)
  self:_SetItem(position, item)
  GM.BIManager:LogStore(self:GetSellingPropertyType(), cost, item:GetCode(), 1, EShopType.SellItem, self:GetBiGameMode(), {
    id = item:GetId()
  })
  if GameConfig.IsTestMode() then
    GM.TestOrderStatisticsModel:UndoSellItem(item, removedItem)
  end
  local msg = {Source = item, Removed = removedItem}
  self.event:Call(BoardEventType.UndoSellItem, msg)
  EventDispatcher.DispatchEvent(EEventType.ItemSellUndo, msg)
end

function BaseSceneBoardModel:CheckItemStillInPosition(itemModel)
  if not itemModel or self:GetItem(itemModel:GetPosition()) ~= itemModel then
    return false
  end
  return true
end

function BaseSceneBoardModel:CheckOrderNeedItem(item, targetItem)
  if not GM.ConfigModel:IsNewUserSystem() then
    return
  end
  if self.m_gameMode ~= EGameMode.Main then
    return
  end
  if self.m_orderModel.IsLaneOpen and self.m_orderModel:IsLaneOpen() then
    return
  end
  if targetItem:GetType() ~= ItemType.Cobweb then
    return
  end
  if GM.MiscModel:Get(EMiscKey.NewUserItemCobWebMergeTip) then
    return
  end
  local code = item:GetCode()
  local chain = GM.ItemDataModel:GetChainId(code)
  local level = GM.ItemDataModel:GetChainLevel(code)
  local orders = self:GetOrders()
  local requirements
  local bNeed = false
  local bHigherNeed = false
  for _, order in pairs(orders) do
    requirements = order:GetRequirements() or {}
    for _, itemCode in ipairs(requirements) do
      if code == itemCode then
        bNeed = true
      elseif chain == GM.ItemDataModel:GetChainId(itemCode) and level < GM.ItemDataModel:GetChainLevel(itemCode) then
        bHigherNeed = true
      end
    end
  end
  return bNeed and not bHigherNeed
end

function BaseSceneBoardModel:_CalcNewItemCost(sourceItem1, sourceItem2)
  local cost = {}
  if sourceItem1:GetCode() == ItemType.Joker then
    local tmp = sourceItem1
    sourceItem1 = sourceItem2
    sourceItem2 = tmp
  end
  if sourceItem2:GetCode() == ItemType.Joker then
    cost.itemScore = (sourceItem1.itemScore or 0) * 2
    cost.costEnergy = sourceItem1.costEnergy * 2
    cost.freeScore = sourceItem1.freeScore * 2
    cost.shopGemCost = sourceItem1.shopGemCost * 2
    cost.bubbleGemCost = sourceItem1.bubbleGemCost * 2
    if sourceItem1.createTime // 86400 == GM.GameModel:GetServerTime() // 86400 then
      cost.energyToday = sourceItem1.energyToday * 2
      cost.energyStarToday = sourceItem1.energyStarToday * 2
    else
      cost.energyToday = 0
      cost.energyStarToday = 0
    end
  else
    cost.itemScore = (sourceItem1.itemScore or 0) + (sourceItem2.itemScore or 0)
    cost.costEnergy = sourceItem1.costEnergy + sourceItem2.costEnergy
    cost.freeScore = sourceItem1.freeScore + sourceItem2.freeScore
    cost.shopGemCost = sourceItem1.shopGemCost + sourceItem2.shopGemCost
    cost.bubbleGemCost = sourceItem1.bubbleGemCost + sourceItem2.bubbleGemCost
    cost.energyToday = 0
    cost.energyStarToday = 0
    local day = GM.GameModel:GetServerTime() // 86400
    if sourceItem1.createTime // 86400 == day then
      cost.energyToday = cost.energyToday + sourceItem1.energyToday
      cost.energyStarToday = cost.energyStarToday + sourceItem1.energyStarToday
    end
    if sourceItem2.createTime // 86400 == day then
      cost.energyToday = cost.energyToday + sourceItem2.energyToday
      cost.energyStarToday = cost.energyStarToday + sourceItem2.energyStarToday
    end
  end
  cost.createTime = GM.GameModel:GetServerTime()
  return cost
end

function BaseSceneBoardModel:GetBiGameMode()
end

function BaseSceneBoardModel:_IsOrderRalatedItem(code)
  assert(false, "_IsOrderRalatedItem\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end
