BaseHuntItemBookModel = {}
BaseHuntItemBookModel.__index = BaseHuntItemBookModel
local strKey = "BaseHuntBookSaveCache"
local finalRewardStateKey = "BaseHuntBookFinalRewardState"
BaseHuntItemBookModel.ItemState = {
  Lock = 0,
  UnLock = 1,
  Acquire = 2,
  KnownUnlock = 3
}
BaseHuntItemBookModel.EventType = {
  Refreshed = 0,
  AddCacheItem = 1,
  ItemFlyToEntry = 2
}
BaseHuntItemBookModel.RewardState = {
  UnFinish = 0,
  Finish = 1,
  Reward = 2
}

function BaseHuntItemBookModel.Create(uiBoardModel, dbTable, chainConfig, activityType, boardModel)
  local model = setmetatable({}, BaseHuntItemBookModel)
  model:Init(uiBoardModel, dbTable, chainConfig, activityType, boardModel)
  return model
end

function BaseHuntItemBookModel:Init(uiBoardModel, dBTable, chainConfig, activityType, boardModel)
  self.m_dbTable = dBTable
  self.m_uiBoardModel = uiBoardModel
  self.m_activityType = activityType
  self.m_boardModel = boardModel
  self.m_chainRewardConfigs = {}
  self.m_finalReward = nil
  for _, info in pairs(chainConfig) do
    if info.index == 0 then
      self.m_finalReward = info.rewards
    else
      table.insert(self.m_chainRewardConfigs, info)
    end
  end
  table.sort(self.m_chainRewardConfigs, function(a, b)
    return a.index < b.index
  end)
  self.event = PairEvent.Create()
  self:UpdateCacheInfo()
end

function BaseHuntItemBookModel:UpdateCacheInfo()
  self.m_cacheInfo = {}
  self.m_chainId2ChainIndex = {}
  if self.m_chainRewardConfigs == nil then
    return
  end
  for _, info in pairs(self.m_chainRewardConfigs) do
    local eleCache = {}
    eleCache.index = info.index
    eleCache.config = info
    eleCache.isFinish = false
    eleCache.isReward = false
    local dbItemInfos = json.decode(self.m_dbTable:GetValue(strKey .. tostring(info.index), "value") or "")
    if dbItemInfos ~= nil then
      eleCache.itemInfos = dbItemInfos
      eleCache.isFinish = true
      eleCache.isReward = true
      for _, eleitemInfo in ipairs(eleCache.itemInfos) do
        if eleitemInfo.state ~= BaseHuntItemBookModel.ItemState.Acquire then
          eleCache.isFinish = false
          eleCache.isReward = false
          break
        end
      end
    else
      local items = {}
      for _, chainId in ipairs(info.items) do
        local chainMaxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId) or 0
        for i = 1, chainMaxLevel do
          local itemCode = ItemUtility.GetItemCode(chainId, i)
          local eleItemInfo = {}
          eleItemInfo.itemCode = itemCode
          eleItemInfo.state = BaseHuntItemBookModel.ItemState.Lock
          table.insert(items, eleItemInfo)
        end
      end
      eleCache.itemInfos = items
    end
    if info.frame_type == 1 then
      for _, chainId in ipairs(info.items) do
        self.m_chainId2ChainIndex[chainId] = info.index
      end
    end
    self.m_cacheInfo[info.index] = eleCache
  end
end

function BaseHuntItemBookModel:Destroy()
  self.m_chainRewardConfigs = nil
  self.m_cacheInfo = nil
  self.m_finalReward = nil
end

function BaseHuntItemBookModel:AddCacheItem(itemCode, boardmodel, newItem)
  if self.m_cacheInfo == nil then
    return
  end
  local innerCode, prefix = ItemUtility.GetInnerCodeAndPrefixByCode(itemCode)
  itemCode = innerCode
  if GM.ItemDataModel:GetModelConfig(itemCode, true) == nil then
    return
  end
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  if chainId == nil then
    return
  end
  local isFinish = false
  for _, info in pairs(self.m_cacheInfo) do
    local bFind = false
    for _, chain in pairs(info.config.items) do
      if chainId == chain then
        bFind = true
        break
      end
    end
    if bFind then
      local isNewUnlock = false
      for _, itemInfo in pairs(info.itemInfos) do
        if itemInfo.itemCode == itemCode and prefix == nil and (itemInfo.state == BaseHuntItemBookModel.ItemState.Lock or itemInfo.state == BaseHuntItemBookModel.ItemState.KnownUnlock) then
          itemInfo.state = BaseHuntItemBookModel.ItemState.UnLock
          self:SaveCacheInfo(info.index)
          isNewUnlock = true
          if info.config.rewards ~= nil then
            self.event:Call(BaseHuntItemBookModel.EventType.AddCacheItem, {boardmodel = boardmodel, itemCode = itemCode})
          end
          if not (not HuntActivityDefinition[self.m_activityType] or HuntActivityModel.IsMainMergeLineItem(itemCode)) or HuntMapActivityDefinition[self.m_activityType] and not HuntMapActivityModel.IsMainMergeLineItem(itemCode) then
            self:PlayItemFlyAnim(itemCode, newItem)
          end
          GM.BIManager:LogAction(EBIType.HuntItemBookUnlock, {
            activityType = self.m_activityType,
            code = itemCode
          }, self.m_boardModel:GetGameMode())
          break
        elseif itemInfo.itemCode == itemCode and prefix ~= nil and prefix == ItemCodePrefix.Cobweb and itemInfo.state == BaseHuntItemBookModel.ItemState.Lock then
          itemInfo.state = BaseHuntItemBookModel.ItemState.KnownUnlock
          self:SaveCacheInfo(info.index)
        end
      end
      if isNewUnlock then
        isFinish = info.config.rewards ~= nil
        for _, itemInfo in pairs(info.itemInfos) do
          if itemInfo.state == BaseHuntItemBookModel.ItemState.Lock or itemInfo.state == BaseHuntItemBookModel.ItemState.KnownUnlock then
            isFinish = false
            break
          end
        end
      end
      break
    end
  end
  self.event:Call(BaseHuntItemBookModel.EventType.Refreshed, {isFinish = isFinish})
end

function BaseHuntItemBookModel:PlayItemFlyAnim(itemCode, newItem)
  local seq = DOTween.Sequence()
  seq:AppendInterval(0.1)
  seq:AppendCallback(function()
    local window
    if HuntActivityDefinition[self.m_activityType] then
      window = GM.UIManager:GetOpenedViewByName(HuntActivityDefinition[self.m_activityType].MainWindowPrefabName)
    elseif HuntMapActivityDefinition[self.m_activityType] then
      window = GM.UIManager:GetOpenedViewByName(HuntMapActivityDefinition[self.m_activityType].BoardWindowPrefabName)
    end
    if window and window.GetTileWorldPos then
      local boardPos = newItem:GetPosition()
      local worldPos = window:GetTileWorldPos(boardPos:GetX(), boardPos:GetY())
      self.event:Call(BaseHuntItemBookModel.EventType.ItemFlyToEntry)
      RewardApi.AcquireRewardsInView({
        {
          [PROPERTY_TYPE] = itemCode,
          [PROPERTY_COUNT] = 1
        }
      }, {
        arrWorldPos = {worldPos},
        startScale = Vector3(2, 2, 1),
        endScale = 0.55,
        hideLabel = true,
        floatFirst = false,
        floatDelay = 0.2,
        floatScale = 2,
        endPos = window:GetItemBookEntryPos()
      })
    end
  end)
end

function BaseHuntItemBookModel:AcquireCacheItemInfo(itemCode)
  if self.m_cacheInfo == nil then
    return
  end
  local huntModel = GM.ActivityManager:GetModel(self.m_activityType)
  local reward, groupReward
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  local groupTile
  local bMainObjectiveLast = false
  for _, info in pairs(self.m_cacheInfo) do
    local bFind = false
    for _, chain in pairs(info.config.items) do
      if chainId == chain then
        bFind = true
        break
      end
    end
    if bFind then
      groupTile = info.config.set
      for i, itemInfo in pairs(info.itemInfos) do
        if itemInfo.itemCode == itemCode and itemInfo.state == BaseHuntItemBookModel.ItemState.UnLock then
          itemInfo.state = BaseHuntItemBookModel.ItemState.Acquire
          reward = GM.ItemDataModel:GetHuntUnlockedReward(itemCode)
          self:SaveCacheInfo(info.index)
          if huntModel:GetLevelByItemCode(itemInfo.itemCode) ~= 0 then
            local chain = GM.ItemDataModel:GetChainId(itemInfo.itemCode)
            local level = GM.ItemDataModel:GetChainLevel(itemInfo.itemCode)
            local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chain)
            if level == maxLevel then
              bMainObjectiveLast = true
            end
          end
          break
        end
      end
      if reward ~= nil then
        local bFinal = true
        for _, itemInfo in pairs(info.itemInfos) do
          if itemInfo.state ~= BaseHuntItemBookModel.ItemState.Acquire then
            bFinal = false
            break
          end
        end
        if bFinal then
          info.isFinish = true
          groupReward = info.config.rewards
        end
      end
      break
    end
  end
  self.m_bFinalReward = nil
  local finalReward
  if reward ~= nil and self.m_finalReward ~= nil then
    local bFinal = true
    for _, info in pairs(self.m_cacheInfo) do
      if info.isFinish ~= true then
        bFinal = false
      end
    end
    if bFinal then
      self.m_bFinalReward = true
      finalReward = self.m_finalReward
      self:SetFinalRewardState(self.RewardState.Finish)
    end
  end
  if reward ~= nil then
    RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, EBIType.HuntItemBookAcquire, CacheItemType.Stack, nil, nil, self.m_boardModel:GetGameMode())
  end
  if bMainObjectiveLast then
    EventDispatcher.DispatchEvent(EEventType.HuntBookClaimMainObjectiveReward, {
      activityType = self.m_activityType
    })
  end
  if groupReward ~= nil then
    RewardApi.AcquireRewardsLogic(groupReward, EPropertySource.Give, EBIType.HuntItemBookGroupAcquire, CacheItemType.Stack, nil, nil, self.m_boardModel:GetGameMode())
  end
  self:UpdateTilteProgress()
  self.event:Call(BaseHuntItemBookModel.EventType.Refreshed)
  return reward, groupReward, finalReward
end

function BaseHuntItemBookModel:AcquireFinalRewards()
  self:SetFinalRewardState(self.RewardState.Reward)
  RewardApi.AcquireRewardsLogic(self.m_finalReward, EPropertySource.Give, EBIType.HuntItemBookFinalAcquire, CacheItemType.Stack, nil, nil, self.m_boardModel:GetGameMode())
  self.event:Call(BaseHuntItemBookModel.EventType.Refreshed)
  EventDispatcher.DispatchEvent(EEventType.HuntBookClaimFinalReward, {
    activityType = self.m_activityType
  })
end

function BaseHuntItemBookModel.TryDispatchHuntBookEvent(struct, activityType)
  if struct and struct.bHasFinalRewards then
    EventDispatcher.DispatchEvent(EEventType.HuntBookClaimFinalReward, {activityType = activityType})
  end
  if struct and struct.bHasMainObjectiveRewards then
    EventDispatcher.DispatchEvent(EEventType.HuntBookClaimMainObjectiveReward, {activityType = activityType})
  end
end

function BaseHuntItemBookModel:HasCurChainAllAcquired(index)
  local info = self.m_cacheInfo[index]
  for _, itemInfo in pairs(info.itemInfos) do
    if itemInfo.state == BaseHuntItemBookModel.ItemState.UnLock then
      return false
    end
  end
  return true
end

function BaseHuntItemBookModel:SaveCacheInfo(index)
  local saveInfoStr = json.encode(self.m_cacheInfo[index].itemInfos)
  self.m_dbTable:Set(strKey .. tostring(index), "value", saveInfoStr)
end

function BaseHuntItemBookModel:GetCacheInfo()
  return self.m_cacheInfo
end

function BaseHuntItemBookModel:GetFinalReward()
  return self.m_finalReward
end

function BaseHuntItemBookModel:GetProgress()
  local curProgress = 0
  local maxProgress = 0
  local acProgress = 0
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == BaseHuntItemBookModel.ItemState.UnLock then
        curProgress = curProgress + 1
      end
      if itemInfo.state == BaseHuntItemBookModel.ItemState.Acquire then
        curProgress = curProgress + 1
        acProgress = acProgress + 1
      end
      maxProgress = maxProgress + 1
    end
  end
  return curProgress, maxProgress, acProgress
end

function BaseHuntItemBookModel:GetEvent()
  return self.event
end

function BaseHuntItemBookModel:CanShowRedPoint()
  return self:HasUnclaimReward()
end

function BaseHuntItemBookModel:HasUnclaimReward()
  if self:GetFinalRewardState() == self.RewardState.Finish then
    return true
  end
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == self.ItemState.UnLock then
        return true
      end
    end
  end
  return false
end

function BaseHuntItemBookModel:GetFirstUnlockChainIndex()
  for ind, info in ipairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == self.ItemState.UnLock then
        return ind
      end
    end
  end
  return -1
end

function BaseHuntItemBookModel:GetChainItemsCount(chainIndex)
  if self.m_cacheInfo[chainIndex] then
    return #self.m_cacheInfo[chainIndex].itemInfos
  end
end

function BaseHuntItemBookModel:GetChainIndexByChainId(chainId)
  return self.m_chainId2ChainIndex[chainId]
end

function BaseHuntItemBookModel:OnTestUnlockAllItem()
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == BaseHuntItemBookModel.ItemState.Lock then
        itemInfo.state = BaseHuntItemBookModel.ItemState.UnLock
      end
    end
    self:SaveCacheInfo(info.index)
  end
end

function BaseHuntItemBookModel:OnTestLockAllItem()
  for _, info in pairs(self.m_cacheInfo) do
    info.isFinish = false
    for _, itemInfo in pairs(info.itemInfos) do
      itemInfo.state = BaseHuntItemBookModel.ItemState.Lock
    end
    self:SaveCacheInfo(info.index)
  end
end

function BaseHuntItemBookModel:GetAllItemBookEndRewards()
  if self:GetFinalRewardState() == self.RewardState.Reward then
    return
  end
  local huntModel = GM.ActivityManager:GetModel(self.m_activityType)
  local Rewards = {}
  local isAllFinish
  local rewardInfoStruct = {}
  for _, info in pairs(self.m_cacheInfo) do
    local isSetFinish = true
    if info.isFinish == false then
      if isAllFinish == nil then
        isAllFinish = true
      end
      for _, itemInfo in pairs(info.itemInfos) do
        if itemInfo.state == BaseHuntItemBookModel.ItemState.UnLock then
          local reward = GM.ItemDataModel:GetHuntUnlockedReward(itemInfo.itemCode)
          Table.ListAppend(Rewards, {reward})
          if huntModel:GetLevelByItemCode(itemInfo.itemCode) ~= 0 then
            local chain = GM.ItemDataModel:GetChainId(itemInfo.itemCode)
            local level = GM.ItemDataModel:GetChainLevel(itemInfo.itemCode)
            local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chain)
            if level == maxLevel then
              rewardInfoStruct.bHasMainObjectiveRewards = true
            end
          end
        elseif itemInfo.state == BaseHuntItemBookModel.ItemState.Lock then
          isAllFinish = false
          isSetFinish = false
        end
      end
    else
      isSetFinish = false
      if isAllFinish == nil then
        isAllFinish = true
      end
    end
    if isSetFinish and info.config.rewards ~= nil then
      Table.ListAppend(Rewards, info.config.rewards)
    end
  end
  if isAllFinish and self.m_finalReward ~= nil and self:GetFinalRewardState() ~= self.RewardState.Reward then
    Table.ListAppend(Rewards, self.m_finalReward)
    rewardInfoStruct.bHasFinalRewards = true
  end
  return Rewards, rewardInfoStruct
end

function BaseHuntItemBookModel:AcquireAllUnclaimRewards()
  if self:GetFinalRewardState() == self.RewardState.Reward then
    return
  end
  local huntModel = GM.ActivityManager:GetModel(self.m_activityType)
  local totalRewards = {}
  local separateRewards = {
    itemRewardsMap = {},
    chainRewardsMap = {},
    finalRewards = nil
  }
  local allItemRewards = {}
  local allSetRewards = {}
  local mapNeedSaveIndex = {}
  local isAllFinish
  local rewardInfoStruct = {}
  for _, info in pairs(self.m_cacheInfo) do
    local isSetFinish = true
    local chainId
    if info.isFinish == false then
      if isAllFinish == nil then
        isAllFinish = true
      end
      for _, itemInfo in pairs(info.itemInfos) do
        chainId = chainId or GM.ItemDataModel:GetChainId(itemInfo.itemCode)
        if itemInfo.state == BaseHuntItemBookModel.ItemState.UnLock then
          local reward = GM.ItemDataModel:GetHuntUnlockedReward(itemInfo.itemCode)
          RewardApi.MergeRewards(allItemRewards, {reward})
          itemInfo.state = BaseHuntItemBookModel.ItemState.Acquire
          mapNeedSaveIndex[info.index] = true
          Table.ListAppend(totalRewards, {reward})
          separateRewards.itemRewardsMap[itemInfo.itemCode] = reward
          if huntModel:GetLevelByItemCode(itemInfo.itemCode) ~= 0 then
            local level = GM.ItemDataModel:GetChainLevel(itemInfo.itemCode)
            local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
            if level == maxLevel then
              EventDispatcher.DispatchEvent(EEventType.HuntBookClaimMainObjectiveReward, {
                activityType = self.m_activityType
              })
            end
          end
        elseif itemInfo.state == BaseHuntItemBookModel.ItemState.Lock then
          isAllFinish = false
          isSetFinish = false
        end
      end
    else
      isSetFinish = false
      if isAllFinish == nil then
        isAllFinish = true
      end
    end
    if isSetFinish and info.config.rewards ~= nil then
      RewardApi.MergeRewards(allSetRewards, info.config.rewards)
      info.isFinish = true
      Table.ListAppend(totalRewards, info.config.rewards)
      separateRewards.chainRewardsMap[chainId] = info.config.rewards
      EventDispatcher.DispatchEvent(EEventType.HuntBookClaimFinalReward, {
        activityType = self.m_activityType
      })
    end
  end
  if not Table.IsEmpty(allItemRewards) then
    RewardApi.AcquireRewardsLogic(allItemRewards, EPropertySource.Give, EBIType.HuntItemBookAcquire, CacheItemType.Stack, nil, nil, self.m_boardModel:GetGameMode())
  end
  if not Table.IsEmpty(allSetRewards) then
    RewardApi.AcquireRewardsLogic(allSetRewards, EPropertySource.Give, EBIType.HuntItemBookGroupAcquire, CacheItemType.Stack, nil, nil, self.m_boardModel:GetGameMode())
  end
  for index, _ in pairs(mapNeedSaveIndex) do
    self:SaveCacheInfo(index)
  end
  if isAllFinish and self.m_finalReward ~= nil and self:GetFinalRewardState() ~= self.RewardState.Reward then
    RewardApi.AcquireRewardsLogic(self.m_finalReward, EPropertySource.Give, EBIType.HuntItemBookFinalAcquire, CacheItemType.Stack, nil, nil, self.m_boardModel:GetGameMode())
    self:SetFinalRewardState(self.RewardState.Reward)
    Table.ListAppend(totalRewards, self.m_finalReward)
    rewardInfoStruct.bHasFinalRewards = true
    separateRewards.finalRewards = Table.ShallowCopy(self.m_finalReward)
  end
  self:UpdateTilteProgress()
  self.event:Call(BaseHuntItemBookModel.EventType.Refreshed)
  return totalRewards, rewardInfoStruct, separateRewards
end

function BaseHuntItemBookModel:UpdateTilteProgress()
  self.m_progress = {}
  for _, info in pairs(self.m_cacheInfo) do
    self.m_progress[info.config.set] = {}
    local curUnLock = 0
    local curLock = 0
    local curAcquire = 0
    for _, iteminfo in ipairs(info.itemInfos) do
      if iteminfo.state == BaseHuntItemBookModel.ItemState.UnLock then
        curUnLock = curUnLock + 1
      elseif iteminfo.state == BaseHuntItemBookModel.ItemState.Lock or iteminfo.state == BaseHuntItemBookModel.ItemState.KnownUnlock then
        curLock = curLock + 1
      else
        curAcquire = curAcquire + 1
      end
    end
    self.m_progress[info.config.set].curUnLock = curUnLock
    self.m_progress[info.config.set].curLock = curLock
    self.m_progress[info.config.set].curAcquire = curAcquire
  end
end

function BaseHuntItemBookModel:GetTilteProgressByTitle(set)
  if not self.m_progress then
    self:UpdateTilteProgress()
  end
  return not Table.IsEmpty(self.m_progress) and self.m_progress[set]
end

function BaseHuntItemBookModel:GetChainInfoByIndex(index)
  return self.m_cacheInfo[index]
end

function BaseHuntItemBookModel:GetFinalRewardState()
  return self.m_dbTable:GetValue(finalRewardStateKey, "value") or self.RewardState.UnFinish
end

function BaseHuntItemBookModel:SetFinalRewardState(state)
  return self.m_dbTable:Set(finalRewardStateKey, "value", state)
end
