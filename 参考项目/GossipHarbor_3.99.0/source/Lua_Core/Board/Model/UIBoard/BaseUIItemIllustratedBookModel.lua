BaseUIItemIllustratedBookModel = {}
BaseUIItemIllustratedBookModel.__index = BaseUIItemIllustratedBookModel
local strKey = "UIItemIllustratedBookSaveCache"
BaseUIItemIllustratedBookModel.ItemState = {
  Lock = 0,
  UnLock = 1,
  Acquire = 2
}
BaseUIItemIllustratedBookModel.EventType = {Refreshed = 0, AddCacheItem = 1}

function BaseUIItemIllustratedBookModel.Create(uiBoardModel, config, dbTable)
  local model = setmetatable({}, BaseUIItemIllustratedBookModel)
  model:Init(uiBoardModel, config, dbTable)
  return model
end

function BaseUIItemIllustratedBookModel:Init(uiBoardModel, config, dBTable)
  self.m_dbTable = dBTable
  self.m_uiBoardModel = uiBoardModel
  self.m_configs = {}
  self.m_finalReward = nil
  for _, info in pairs(config) do
    if info.index == 0 then
      self.m_finalReward = info.reward_finish
    else
      table.insert(self.m_configs, info)
    end
  end
  table.sort(self.m_configs, function(a, b)
    return a.index < b.index
  end)
  self.event = PairEvent.Create()
  self:UpdateCacheInfo()
  EventDispatcher.DispatchEvent(EEventType.UpdateLightUpBook, {
    atype = self.m_uiBoardModel:GetActivityModel():GetType()
  })
end

function BaseUIItemIllustratedBookModel:UpdateCacheInfo()
  self.m_cacheInfo = {}
  if self.m_configs == nil then
    return
  end
  for _, info in pairs(self.m_configs) do
    local eleCache = {}
    eleCache.index = info.index
    eleCache.config = info
    eleCache.isFinish = false
    local dbItemInfos = json.decode(self.m_dbTable:GetValue(strKey .. tostring(info.index), "value") or "")
    if dbItemInfos ~= nil then
      eleCache.itemInfos = dbItemInfos
      eleCache.isFinish = true
      for _, eleitemInfo in ipairs(eleCache.itemInfos) do
        if eleitemInfo.state ~= BaseUIItemIllustratedBookModel.ItemState.Acquire then
          eleCache.isFinish = false
          break
        end
      end
    else
      local items = {}
      for _, chainId in ipairs(info.chainID) do
        local chainMaxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId) or 0
        for i = 1, chainMaxLevel do
          local itemCode = GM.ItemDataModel:GetTypeByChainAndLevel(chainId, i)
          local eleItemInfo = {}
          eleItemInfo.itemCode = itemCode
          eleItemInfo.state = BaseUIItemIllustratedBookModel.ItemState.Lock
          table.insert(items, eleItemInfo)
        end
      end
      eleCache.itemInfos = items
    end
    self.m_cacheInfo[info.index] = eleCache
  end
end

function BaseUIItemIllustratedBookModel:Drop()
  self.m_configs = nil
  self.m_cacheInfo = nil
  self.m_finalReward = nil
end

function BaseUIItemIllustratedBookModel:AddCacheItem(itemCode, boardmodel, position, generateItemState)
  if self.m_cacheInfo == nil then
    return
  end
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
    for _, chain in pairs(info.config.chainID) do
      if chainId == chain then
        bFind = true
        break
      end
    end
    if bFind then
      local isNewUnlock = false
      for _, itemInfo in pairs(info.itemInfos) do
        if itemInfo.itemCode == itemCode and itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Lock then
          itemInfo.state = BaseUIItemIllustratedBookModel.ItemState.UnLock
          self:SaveCacheInfo(info.index)
          isNewUnlock = true
          if info.config.reward_finish ~= nil then
            self.event:Call(BaseUIItemIllustratedBookModel.EventType.AddCacheItem, {
              boardmodel = boardmodel,
              position = position,
              itemCode = itemCode,
              generateItemState = generateItemState
            })
          end
          GM.BIManager:LogAction(EBIType.UIItemIllustrateItemUnlock, {
            activityType = self.m_uiBoardModel:GetActivityModel():GetType(),
            code = itemCode
          })
          break
        end
      end
      if isNewUnlock then
        isFinish = info.config.reward_finish ~= nil
        for _, itemInfo in pairs(info.itemInfos) do
          if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Lock then
            isFinish = false
            break
          end
        end
      end
      break
    end
  end
  self.event:Call(BaseUIItemIllustratedBookModel.EventType.Refreshed, {isFinish = isFinish})
end

function BaseUIItemIllustratedBookModel:AcquireCacheItemInfo(itemCode)
  if self.m_cacheInfo == nil then
    return
  end
  local reward, groupReward, finialReward
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  local groupTile
  for _, info in pairs(self.m_cacheInfo) do
    local bFind = false
    for _, chain in pairs(info.config.chainID) do
      if chainId == chain then
        bFind = true
        break
      end
    end
    if bFind then
      groupTile = info.config.title
      for _, itemInfo in pairs(info.itemInfos) do
        if itemInfo.itemCode == itemCode and itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.UnLock then
          itemInfo.state = BaseUIItemIllustratedBookModel.ItemState.Acquire
          reward = info.config.reward
          self:SaveCacheInfo(info.index)
          break
        end
      end
      if reward ~= nil then
        local bFinal = true
        for _, itemInfo in pairs(info.itemInfos) do
          if itemInfo.state ~= BaseUIItemIllustratedBookModel.ItemState.Acquire then
            bFinal = false
            break
          end
        end
        if bFinal then
          info.isFinish = true
          groupReward = info.config.reward_finish
        end
      end
      break
    end
  end
  local bFinalReward
  if reward ~= nil and self.m_finalReward ~= nil then
    local bFinal = true
    for _, info in pairs(self.m_cacheInfo) do
      if info.isFinish ~= true then
        bFinal = false
      end
    end
    if bFinal then
      bFinalReward = self.m_finalReward
    end
  end
  if reward ~= nil then
    RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, EBIType.UIItemIllustrateAcquire, EGameMode.Main, CacheItemType.Type2, self.m_uiBoardModel.BoardType)
    local activityType = self.m_uiBoardModel:GetActivityModel():GetType()
    EventDispatcher.DispatchEvent(EEventType.LightUpBook, {
      atype = activityType,
      item = itemCode,
      num = 1
    })
    GM.BIManager:LogAction(EBIType.UIItemIllustrateAcquire, {
      reward = reward,
      groupReward = groupReward,
      bFinalReward = bFinalReward,
      itemCode = itemCode,
      activityType = activityType,
      group = groupTile
    })
  end
  if groupReward ~= nil then
    RewardApi.AcquireRewardsLogic(groupReward, EPropertySource.Give, EBIType.UIItemIllustrateAcquire, EGameMode.Main, CacheItemType.Type2, self.m_uiBoardModel.BoardType)
  end
  if bFinalReward ~= nil then
    RewardApi.AcquireRewardsLogic(bFinalReward, EPropertySource.Give, EBIType.UIItemIllustrateAcquire, EGameMode.Main, CacheItemType.Type2, self.m_uiBoardModel.BoardType)
  end
  self.event:Call(BaseUIItemIllustratedBookModel.EventType.Refreshed)
  return reward, groupReward, bFinalReward
end

function BaseUIItemIllustratedBookModel:SaveCacheInfo(index)
  local saveInfoStr = json.encode(self.m_cacheInfo[index].itemInfos)
  self.m_dbTable:Set(strKey .. tostring(index), "value", saveInfoStr)
end

function BaseUIItemIllustratedBookModel:GetCacheInfo()
  return self.m_cacheInfo
end

function BaseUIItemIllustratedBookModel:GetFinalReward()
  return self.m_finalReward
end

function BaseUIItemIllustratedBookModel:GetProgress()
  local curProgress = 0
  local maxProgress = 0
  local unLockProgress = 0
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Acquire then
        curProgress = curProgress + 1
      end
      if itemInfo.state ~= BaseUIItemIllustratedBookModel.ItemState.Lock then
        unLockProgress = unLockProgress + 1
      end
      maxProgress = maxProgress + 1
    end
  end
  return curProgress, maxProgress, unLockProgress
end

function BaseUIItemIllustratedBookModel:GetEvent()
  return self.event
end

function BaseUIItemIllustratedBookModel:CanShowRedPoint()
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.UnLock then
        return true
      end
    end
  end
  return false
end

function BaseUIItemIllustratedBookModel:OnTestUnlockAllItem()
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Lock then
        itemInfo.state = BaseUIItemIllustratedBookModel.ItemState.UnLock
      end
    end
    self:SaveCacheInfo(info.index)
  end
end

function BaseUIItemIllustratedBookModel:OnTestlockAllItem()
  for _, info in pairs(self.m_cacheInfo) do
    info.isFinish = false
    for _, itemInfo in pairs(info.itemInfos) do
      itemInfo.state = BaseUIItemIllustratedBookModel.ItemState.Lock
    end
    self:SaveCacheInfo(info.index)
  end
end

function BaseUIItemIllustratedBookModel:CalculateItemIllustreatedItemReward()
  local Rewards = {}
  local isAllFinish
  for _, info in pairs(self.m_cacheInfo) do
    local isSetFinish = true
    if info.isFinish == false then
      if isAllFinish == nil then
        isAllFinish = true
      end
      for _, itemInfo in pairs(info.itemInfos) do
        if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.UnLock then
          Rewards = RewardApi.MergeRewards(Rewards, {
            info.config.reward
          })
        elseif itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Lock then
          isAllFinish = false
          isSetFinish = false
        end
      end
    else
      isSetFinish = false
    end
    if isSetFinish and info.config.reward_finish ~= nil then
      Rewards = RewardApi.MergeRewards(Rewards, info.config.reward_finish)
    end
  end
  if isAllFinish and self.m_finalReward ~= nil then
    Rewards = RewardApi.MergeRewards(Rewards, self.m_finalReward)
  end
  return Rewards
end

function BaseUIItemIllustratedBookModel:GetBITilteProgress()
  local progress = {}
  for _, info in pairs(self.m_cacheInfo) do
    progress[info.config.title] = {}
    local curUnLock = 0
    local curLock = 0
    local curAcquire = 0
    for _, iteminfo in ipairs(info.itemInfos) do
      if iteminfo.state == BaseUIItemIllustratedBookModel.ItemState.UnLock then
        curUnLock = curUnLock + 1
      elseif iteminfo.state == BaseUIItemIllustratedBookModel.ItemState.Lock then
        curLock = curLock + 1
      else
        curAcquire = curAcquire + 1
      end
    end
    progress[info.config.title].curUnLock = curUnLock
    progress[info.config.title].curLock = curLock
    progress[info.config.title].curAcquire = curAcquire
  end
  return progress
end

function BaseUIItemIllustratedBookModel:CheckItemCodeNoUnlockByCode(itemCode)
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  for _, info in pairs(self.m_cacheInfo) do
    local bFind = false
    for _, chain in pairs(info.config.chainID) do
      if chainId == chain then
        bFind = true
        break
      end
    end
    if bFind then
      for _, itemInfo in pairs(info.itemInfos) do
        if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.UnLock then
          return false
        end
      end
      break
    end
  end
  return true
end

function BaseUIItemIllustratedBookModel:CheckItemCodeNoLock(itemCode)
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.itemCode == itemCode and itemInfo.state ~= BaseUIItemIllustratedBookModel.ItemState.Lock then
        return true
      end
    end
  end
  return false
end

function BaseUIItemIllustratedBookModel:CheckItemCodeAcquired(itemCode)
  for _, info in pairs(self.m_cacheInfo) do
    for _, itemInfo in pairs(info.itemInfos) do
      if itemInfo.itemCode == itemCode and itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Acquire then
        return true
      end
    end
  end
  return false
end

function BaseUIItemIllustratedBookModel:GetChainProgress(itemCode)
  local cnt = 0
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  for _, cache in pairs(self.m_cacheInfo) do
    local tempIdArr = cache.config.chainID
    if Table.Contain(tempIdArr, chainId) then
      local itemInfos = cache.itemInfos
      for _, itemInfo in pairs(itemInfos) do
        if itemInfo.state == BaseUIItemIllustratedBookModel.ItemState.Acquire and GM.ItemDataModel:GetChainId(itemInfo.itemCode) == chainId then
          cnt = cnt + 1
        end
      end
    end
  end
  return cnt
end

function BaseUIItemIllustratedBookModel:GetChainProgressNoLock(itemCode)
  local cnt = 0
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  for _, cache in pairs(self.m_cacheInfo) do
    local tempIdArr = cache.config.chainID
    if Table.Contain(tempIdArr, chainId) then
      local itemInfos = cache.itemInfos
      for _, itemInfo in pairs(itemInfos) do
        if itemInfo.state ~= BaseUIItemIllustratedBookModel.ItemState.Lock and GM.ItemDataModel:GetChainId(itemInfo.itemCode) == chainId then
          cnt = cnt + 1
        end
      end
    end
  end
  return cnt
end

function BaseUIItemIllustratedBookModel:GetItemCodeCountMap(includeBoard, includeCache)
  return self.m_uiBoardModel:GetCodeCountMap(includeBoard, includeCache, false)
end

function BaseUIItemIllustratedBookModel:GetItemModelByType(itemType)
  return self.m_uiBoardModel:FilterItems(function(itemModel)
    return itemModel:GetType() == itemType
  end)
end
