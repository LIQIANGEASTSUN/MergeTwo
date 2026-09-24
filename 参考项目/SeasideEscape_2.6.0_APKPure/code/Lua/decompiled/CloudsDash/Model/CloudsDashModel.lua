CloudsDashModel = setmetatable({}, BaseActivityModel)
CloudsDashModel.__index = CloudsDashModel
local DBKey = {
  ActivityTokenNumberKey = "act_tk_num",
  LevelKey = "level_key",
  CachedLevelKey = "cached_lv_key",
  CachedTokenNumber = "cached_tk_key",
  BoardInitDepth = "board_init_depth",
  CloudKeyFirstAppeared = "CloudKeyFirstAppeared",
  CloudState = "CloudState",
  SwallowLockState = "SwallowLockState",
  CurrentMergeLevel = "CurrentMergeLevel",
  ItemGived = "ItemGived",
  RecoverHuntReward = "RecoverHuntReward"
}

function CloudsDashModel:Init(activityType, virtualDBTable, itemDataTable, itemLayerDataTable, itemCacheDataTable)
  self.m_activityDefinition = CloudsDashDefinition[activityType]
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_tokenHelper = ActivityTokenHelper.Create(self, virtualDBTable, self.m_activityDefinition.ActivityTokenPropertyType, EFlyElementLabelStyle.Default, nil, {
    specialFloat = false,
    floatFirst = true,
    floatHeight = 100,
    floatDelay = 0.5,
    floatScale = 1.2,
    startScale = Vector3(1.6, 1.6, 1),
    endScale = 1.6
  })
  BaseActivityModel.Init(self, activityType, virtualDBTable)
end

function CloudsDashModel.GetActiveModel(bWithHunt)
  local model
  for activityType, definition in pairs(CloudsDashDefinition) do
    model = GM.ActivityManager:GetModel(activityType)
    if model ~= nil and model:GetState() == ActivityState.Started and (not bWithHunt or definition.HasBoard) then
      return model
    end
  end
end

function CloudsDashModel:_LoadOtherServerConfig(config)
  self.m_dataGroup = CloudsDashLevelDataGroup.Create(config.event_rewards)
  self.m_tokenHelper:LoadConfig(config.token_general_layout)
  if self.m_activityDefinition.HasBoard then
    local arrItemConfig = config.treasure_hunt_items
    self.m_config.arrMergeLine = {}
    for _, config in pairs(arrItemConfig) do
      table.insert(self.m_config.arrMergeLine, config)
    end
    table.sort(self.m_config.arrMergeLine, function(a, b)
      return a.index < b.index
    end)
  end
end

function CloudsDashModel:Destroy()
  self.m_tokenHelper:Destroy()
  if self.m_boardModel then
    self.m_boardModel:Destroy()
  end
  EventDispatcher.RemoveTarget(self)
  BaseActivityModel.Destroy(self)
end

function CloudsDashModel:GetBoardEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = self.m_activityDefinition.EntryRootKey,
    entryPrefabName = self.m_activityDefinition.BoardCellPrefabName,
    checkFun = function()
      return self:IsActivityOpen()
    end
  }
end

function CloudsDashModel:GetMapEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = self.m_activityDefinition.EntryRootKey,
    entryPrefabName = self.m_activityDefinition.EntryPrefabName,
    hudKey = self.m_activityDefinition.EntryButtonKey,
    checkFun = function()
      return self:IsActivityOpen()
    end
  }
end

function CloudsDashModel:_CalculateState()
  if self.m_config == nil or not self:_CanStartActivity() then
    return ActivityState.Released, -1
  end
  local serverTime = GM.GameModel:GetServerTime()
  if serverTime < self.m_config.sTime then
    return ActivityState.Preparing, self.m_config.sTime
  elseif serverTime < self.m_config.eTime then
    if self:GetLevelConfig() ~= nil or self:GetCachedLevel() < self:GetCurLevel() or not self:IsHuntClear() then
      return ActivityState.Started, self.m_config.eTime
    else
      return ActivityState.Ended, self.m_config.rTime
    end
  elseif self.m_config.rTime and serverTime < self.m_config.rTime then
    return ActivityState.Ended, self.m_config.rTime
  else
    return ActivityState.Released, -1
  end
end

function CloudsDashModel:_OnStateChanged()
  local state = self:GetState()
  if not self:_HasActivityStarted() and self:IsActivityOpen() then
    self:LogActivity(EBIType.ActivityRankUp, 0)
    self:_SetActivityStarted()
  end
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil and self.m_activityDefinition.HasBoard then
      self:_LoadActivityBoardModel()
    end
    local bItemGived = self.m_dbTable:GetValue(DBKey.ItemGived, "value") or 0
    if bItemGived == 0 then
      self:TutorialCacheItems()
      GM.BIManager:LogActivity(self.m_type .. "_progress", self:GetId(), EBIType.ActivityRankUp, 0)
    end
  else
    if self.m_boardModel ~= nil then
      self.m_boardModel:Destroy()
    end
    self.m_boardModel = nil
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
end

function CloudsDashModel:_DropData()
  BaseActivityModel._DropData(self)
  if self.m_itemDataTable ~= nil then
    self.m_itemDataTable:Drop()
  end
  if self.m_itemLayerDataTable ~= nil then
    self.m_itemLayerDataTable:Drop()
  end
  if self.m_itemCacheDataTable ~= nil then
    self.m_itemCacheDataTable:Drop()
  end
  if self.m_boardModel ~= nil then
    self.m_boardModel:GetItemCacheModel():ResetData()
    self.m_boardModel:Destroy()
    self.m_boardModel = nil
  end
end

function CloudsDashModel:GetAllStateChangedEvent()
  return {
    self.m_activityDefinition.StateChangedEvent
  }
end

function CloudsDashModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function CloudsDashModel:IsActivityOpen()
  return self:GetState() == ActivityState.Started
end

function CloudsDashModel:GetActivityTokenNumber()
  return tonumber(self.m_dbTable:GetValue(DBKey.ActivityTokenNumberKey, "value")) or 0
end

function CloudsDashModel:AcquireActivityToken(count)
  if self:GetLevelConfig() ~= nil then
    self:UpdateScoreProgress(count)
  end
end

function CloudsDashModel:GetCurLevel()
  return tonumber(self.m_dbTable:GetValue(DBKey.LevelKey, "value")) or 1
end

function CloudsDashModel:GetCachedLevel()
  return tonumber(self.m_dbTable:GetValue(DBKey.CachedLevelKey, "value")) or 1
end

function CloudsDashModel:GetCachedTokenNumber()
  return tonumber(self.m_dbTable:GetValue(DBKey.CachedTokenNumber, "value")) or 0
end

function CloudsDashModel:SyncCacheData2CurData()
  local curLevel = self:GetCurLevel()
  local climedLevel = self:GetCachedLevel()
  local rewards = {}
  for level = climedLevel, curLevel - 1 do
    local levelConfig = self:GetLevelConfig(level)
    local biType = self.m_activityDefinition.GetRewardsBITypeNomal
    if self:GetLevelConfig(level + 1) == nil then
      biType = self.m_activityDefinition.GetRewardsBITypeFinal
    elseif 1 < #levelConfig.rewards then
      biType = self.m_activityDefinition.GetRewardsBITypeStage
    end
    local arrRews = levelConfig.rewards
    RewardApi.AcquireRewardsLogic(arrRews, EPropertySource.Give, biType, CacheItemType.Queue)
    RewardApi.MergeRewards(rewards, arrRews)
  end
  self.m_dbTable:Set(DBKey.CachedLevelKey, "value", curLevel)
  self.m_dbTable:Set(DBKey.CachedTokenNumber, "value", self:GetActivityTokenNumber())
  EventDispatcher.DispatchEvent(self.m_activityDefinition.UpdateReddotEvent)
  return rewards
end

function CloudsDashModel:UpdateScoreProgress(count)
  local currentTokenNumber = self:GetActivityTokenNumber()
  self.m_dbTable:Set(DBKey.ActivityTokenNumberKey, "value", currentTokenNumber + count)
  while self:CanUpgrade() do
    self:Upgrade()
  end
  if not self:CanAddScore() then
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.AcquireTokenEvent)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.UpdateReddotEvent)
end

function CloudsDashModel:CanUpgrade()
  local levelConfig = self:GetLevelConfig()
  if levelConfig == nil then
    return false
  end
  local score = self:GetActivityTokenNumber()
  return score >= levelConfig.score
end

function CloudsDashModel:Upgrade()
  local level = self:GetCurLevel()
  local levelConfig = self:GetLevelConfig(level)
  local score = self:GetActivityTokenNumber()
  self:LogActivity(EBIType.ActivityRankUp, level)
  self.m_dbTable:Set(DBKey.ActivityTokenNumberKey, "value", score - levelConfig.score)
  self.m_dbTable:Set(DBKey.LevelKey, "value", level + 1)
end

function CloudsDashModel:CanAddScore()
  return self:GetState() == ActivityState.Started and self:GetLevelConfig() ~= nil
end

function CloudsDashModel:GetLevelConfig(level)
  local result = self.m_dataGroup and self.m_dataGroup:GetLevelConfigs(level or self:GetCurLevel(), 1)
  return result[1]
end

function CloudsDashModel:GetArrLevelConfig()
  local result = self.m_dataGroup and self.m_dataGroup:GetLevelConfigs(1)
  return result
end

function CloudsDashModel:GetFinalData()
  return self.m_dataGroup:GetFinalReward()
end

function CloudsDashModel:GetInitCodeMap(horizontalTiles, verticalTiles, boardName)
  local cloud = self:GetGeneralConfig(HuntActivityModel.HuntCloud)
  local boardName = boardName or self:GetGeneralConfig(HuntActivityModel.HuntCobweb)
  local skipBoard = StringUtil.IsNilOrEmpty(boardName)
  local skipCloud = StringUtil.IsNilOrEmpty(cloud)
  if skipBoard and skipCloud then
    return
  end
  local fileConfig = require("Data.Config.CloudsDashHuntBoardConfig")
  local cloudCfg = not skipCloud and fileConfig.cloud[cloud] or nil
  if skipBoard then
    return nil, cloudCfg
  end
  horizontalTiles = horizontalTiles or self.m_activityDefinition.HorizontalTiles or CloudsDashHuntBoardModel.HorizontalTiles
  verticalTiles = verticalTiles or self.m_activityDefinition.VerticalTiles or CloudsDashHuntBoardModel.VerticalTiles
  local defaultCfgName = "default" .. horizontalTiles .. "_" .. verticalTiles
  local codeMap = fileConfig[boardName] or fileConfig[self:GetType()] or fileConfig[defaultCfgName]
  if Table.IsEmpty(codeMap) then
    Log.Error("\229\176\143\230\163\139\231\155\152\230\180\187\229\138\168" .. self:GetType() .. "\231\188\186\229\176\145\230\163\139\231\155\152\233\133\141\231\189\174")
    return nil, cloudCfg
  end
  local isConfigValid = true
  if isConfigValid then
    for _, v in pairs(codeMap) do
      if Table.IsEmpty(v) or #v ~= horizontalTiles then
        isConfigValid = false
        break
      end
    end
  end
  if not isConfigValid then
    Log.Error("\229\176\143\230\163\139\231\155\152" .. self:GetType() .. "\229\136\157\229\167\139\233\133\141\231\189\174" .. boardName .. "\232\161\140\229\136\151\230\149\176\233\148\153\232\175\175")
    codeMap = nil
  end
  codeMap = Table.DeepCopy(codeMap)
  return codeMap, cloudCfg
end

function CloudsDashModel:GetInitBoardInfo()
  local horizontalTiles = self.m_activityDefinition.HorizontalTiles or CloudsDashHuntBoardModel.HorizontalTiles
  local verticalTiles = self.m_activityDefinition.VerticalTiles or CloudsDashHuntBoardModel.VerticalTiles
  return horizontalTiles, verticalTiles, self:GetInitCodeMap()
end

function CloudsDashModel:_LoadActivityBoardModel()
  local horizontalTiles, verticalTiles, initCodeMap, cloud = self:GetInitBoardInfo()
  self.m_maxDepth = not Table.IsEmpty(initCodeMap) and #initCodeMap or verticalTiles
  self.m_boardModel = CloudsDashHuntBoardModel.Create(self.m_itemDataTable, self.m_itemLayerDataTable, self.m_itemCacheDataTable, initCodeMap, self:GetType(), horizontalTiles, verticalTiles, cloud)
  self:InitUpdateLevel()
  local depth = self:GetBoardInitDepth()
  if depth == 0 then
    self.m_boardModel:LoadFile(1, 1, true)
    self:SetBoardInitDepth(verticalTiles + 1)
  end
  self:CheckBoardEmptyState()
end

function CloudsDashModel:GetBoardInitDepth()
  return self.m_dbTable:GetValue(DBKey.BoardInitDepth, "value") or 0
end

function CloudsDashModel:SetBoardInitDepth(y)
  self.m_dbTable:Set(DBKey.BoardInitDepth, "value", y)
end

function CloudsDashModel:CheckBoardEmptyState()
  if not self.m_boardModel then
    return
  end
  if self:GetBoardInitDepth() <= self.m_boardModel.VerticalTiles + 1 then
    return
  end
  if self:GetProtectedEmptySquare() <= 0 or 0 >= self:GetProtectedUnlockRow() then
    return
  end
  self.m_boardModel:CheckBoardEmptyState(self:GetProtectedEmptySquare(), self:GetProtectedUnlockRow())
end

function CloudsDashModel:GetProtectedEmptySquare()
  return tonumber(self:GetGeneralConfig("EmptySquare")) or 0
end

function CloudsDashModel:GetProtectedUnlockRow()
  return tonumber(self:GetGeneralConfig("UnlockRow")) or 0
end

function CloudsDashModel:GetBoardModel()
  return self.m_boardModel
end

function CloudsDashModel:GetCloudKeyFirstAppeared()
  local val = self.m_dbTable:GetValue(DBKey.CloudKeyFirstAppeared, "value") or 0
  return val == 1
end

function CloudsDashModel:SetCloudKeyFirstAppeared(bAppeared)
  self.m_dbTable:Set(DBKey.CloudKeyFirstAppeared, "value", bAppeared and 1 or 0)
end

function CloudsDashModel:CheckBoardScroll()
  if self.m_boardModel == nil then
    return
  end
  local moveRows = self.m_boardModel:CanMoveRows(self:GetBoardInitDepth())
  if 0 < moveRows then
    return moveRows
  end
end

function CloudsDashModel:GetCloudState()
  local value = self.m_dbTable:GetValue(DBKey.CloudState, DB_VALUE_KEY)
  local ids = StringUtil.SplitToNum(value or "", ";")
  local map = {}
  for _, id in pairs(ids) do
    map[id] = true
  end
  return map
end

function CloudsDashModel:UpdateCloudState(map)
  local ids = Table.GetKeys(map)
  self.m_dbTable:Set(DBKey.CloudState, DB_VALUE_KEY, table.concat(ids, ";"))
end

function CloudsDashModel:GetCloudSwallowLockState()
  local value = self.m_dbTable:GetValue(DBKey.SwallowLockState, DB_VALUE_KEY)
  local strs = StringUtil.Split(value or "", ";")
  local map = {}
  for _, str in pairs(strs) do
    local ids = StringUtil.SplitToNum(str or "", ";")
    for k, v in pairs(ids) do
      map[k] = v
    end
  end
  return map
end

function CloudsDashModel:UpdateCloudSwallowLockState(map)
  local val = ""
  if not Table.IsEmpty(map) then
    local tmp = {}
    for k, v in pairs(map) do
      tmp[#tmp + 1] = k .. "-" .. v
    end
    val = table.concat(tmp, ";")
  end
  self.m_dbTable:Set(DBKey.SwallowLockState, DB_VALUE_KEY, val)
end

function CloudsDashModel:CacheItems(cachedItemCodes, type, isTutorialItem)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes, type, nil, nil, nil, isTutorialItem)
  EventDispatcher.DispatchEvent(EEventType.CloudsDashGetHuntEvent, {
    activityType = self:GetType()
  })
end

function CloudsDashModel:BoardScroll(rows, flyItemRoot)
  local depth = self:GetBoardInitDepth()
  self.m_boardModel:ScrollDown(rows, depth)
  self:SetBoardInitDepth(depth + rows)
  local boardview = GM.ModeViewController:GetCloudsDashBoardView()
  boardview:ScrollDown(rows, self.m_boardModel, flyItemRoot)
end

function CloudsDashModel:CheckTiles(rows)
  if self.m_tileInversed == nil then
    self.m_tileInversed = 1
  end
  if rows % 2 == 1 then
    local boardview = GM.ModeViewController:GetCloudsDashBoardView()
    boardview:InverseTiles()
    self.m_tileInversed = self.m_tileInversed * -1
  end
end

function CloudsDashModel:InitUpdateLevel()
  if self.m_boardModel == nil then
    return
  end
  local curLvl = self:GetLevel()
  local lvl = 0
  local tempLvl
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      local code = item:GetCode()
      tempLvl = self:GetLevelByItemCode(code)
      if lvl < tempLvl then
        lvl = tempLvl
      end
    end
  end
  if curLvl < lvl then
    self:SetLevel(lvl)
  end
end

function CloudsDashModel:GetLevel()
  return self.m_dbTable:GetValue(DBKey.CurrentMergeLevel, "value") or 0
end

function CloudsDashModel:SetLevel(level)
  self.m_dbTable:Set(DBKey.CurrentMergeLevel, "value", level)
  GM.BIManager:LogActivity(self.m_type .. "_progress", self:GetId(), EBIType.ActivityRankUp, level)
  self:SetSubscriptionConcluded(4 <= level)
end

function CloudsDashModel:UpdateLevel(itemCode)
  local lvl = self:GetLevelByItemCode(itemCode)
  local curLvl = self:GetLevel()
  if lvl > curLvl then
    self:SetLevel(lvl)
    return true
  end
  return false
end

function CloudsDashModel:GetLevelByItemCode(itemCode)
  if not self.m_config or Table.IsEmpty(self.m_config.arrMergeLine) then
    return 0
  end
  for i, v in ipairs(self.m_config.arrMergeLine) do
    if v.item == itemCode then
      return i
    end
  end
  return 0
end

function CloudsDashModel:GetItemCodeByLevel(lvl)
  if not self.m_config.arrMergeLine[lvl] then
    return
  end
  return self.m_config.arrMergeLine[lvl].item
end

function CloudsDashModel:IsMaxLevel()
  return self:GetLevel() == self:GetMergeLength()
end

function CloudsDashModel:GetMergeLength()
  return self.m_config and self.m_config.arrMergeLine and #self.m_config.arrMergeLine or 0
end

function CloudsDashModel:GetItemTypeByIndex(index)
  return self.m_config.arrMergeLine[index].item
end

function CloudsDashModel:RecoverEndRewards()
  if tonumber(self.m_dbTable:GetValue(DBKey.RecoverHuntReward, "value")) == 1 then
    return {}
  end
  local endrewards = self:GetEndRewards()
  RewardApi.AcquireRewardsLogic(endrewards, EPropertySource.Give, EBIType.CloudsDashRewardStage, CacheItemType.Stack)
  self.m_dbTable:Set(DBKey.RecoverHuntReward, "value", 1)
  return endrewards
end

function CloudsDashModel:GetEndRewards()
  if not Table.IsEmpty(self.m_endRewards) then
    return self.m_endRewards
  end
  local rewards = {}
  if self.m_boardModel == nil then
    return rewards
  end
  
  local function _MergeRewards(to, from)
    if not Table.IsEmpty(from) then
      for _, v in pairs(from) do
        if not StringUtil.StartWith(v[PROPERTY_TYPE], ItemCodePrefix.CloudsDash) then
          RewardApi.MergeRewards(to, {v})
        end
      end
    end
  end
  
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      local tempLvl = self:GetLevelByItemCode(item:GetCode())
      if tempLvl == 0 then
        local collectTb = item:GetComponent(ItemCollectable)
        if collectTb then
          _MergeRewards(rewards, collectTb:GetRewards())
        end
        local bubbleTb = item:GetComponent(ItemBubble)
        if bubbleTb then
          _MergeRewards(rewards, {
            {
              [PROPERTY_TYPE] = bubbleTb:GetInnerItemCode(),
              [PROPERTY_COUNT] = 1
            }
          })
        end
        local itemSpread = item:GetComponent(ItemSpread)
        if itemSpread then
          local arrRwds = itemSpread:GetNotSpreadRewards()
          _MergeRewards(rewards, arrRwds)
        end
      elseif 0 < tempLvl then
        local itemSpread = item:GetComponent(ItemSpread)
        if itemSpread then
          local arrRwds = itemSpread:GetNotSpreadRewards()
          _MergeRewards(rewards, arrRwds)
        end
      end
    end
  end
  local cachedItemCount = self.m_boardModel:GetCachedItemCount()
  for i = 1, cachedItemCount do
    local itemType = self.m_boardModel:GetCachedItem(i)
    if StringUtil.StartWith(itemType, ItemCodePrefix.Bubble) then
      local code = string.sub(itemType, 3)
      if not Table.IsEmpty(GM.ItemDataModel:GetModelConfig(code)) then
        _MergeRewards(rewards, {
          {
            [PROPERTY_TYPE] = code,
            [PROPERTY_COUNT] = 1
          }
        })
      end
    else
      local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
      local arrRwds = itemConfig.CollectRewards
      if not Table.IsEmpty(arrRwds) then
        _MergeRewards(rewards, arrRwds)
      end
    end
  end
  self.m_endRewards = rewards
  return rewards
end

function CloudsDashModel:IsHuntClear()
  if self.m_boardModel == nil then
    return true
  end
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      return false
    end
  end
  local cloudConfig = self.m_boardModel:GetCloudInfo()
  local lockState = self:GetCloudState()
  for id, cfg in pairs(cloudConfig.lock) do
    if not lockState[id] then
      return false
    end
  end
  return true
end

function CloudsDashModel:GetCachedItemCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function CloudsDashModel:TutorialCacheItems()
  local bItemGived = tonumber(self.m_dbTable:GetValue(DBKey.ItemGived, "value")) or 0
  if bItemGived == 1 then
    return
  end
  if self.m_config == nil or self.m_config.arrMergeLine == nil then
    return
  end
  local cacheItems = {
    self.m_config.arrMergeLine[1].item,
    self.m_config.arrMergeLine[1].item,
    self.m_config.arrMergeLine[1].item,
    self.m_config.arrMergeLine[1].item,
    self.m_config.arrMergeLine[1].item,
    self.m_config.arrMergeLine[1].item
  }
  self:CacheItems(cacheItems, CacheItemType.Stack2, true)
  self.m_dbTable:Set(DBKey.ItemGived, "value", 1)
end

CloudsDashLevelDataGroup = {}
CloudsDashLevelDataGroup.__index = CloudsDashLevelDataGroup

function CloudsDashLevelDataGroup.Create(arrCfgs)
  local ins = setmetatable({}, CloudsDashLevelDataGroup)
  ins:Init(arrCfgs)
  return ins
end

function CloudsDashLevelDataGroup:Init(arrCfgs)
  self.m_levelData = {}
  self.m_arrCircleLevel = {}
  for _, config in ipairs(arrCfgs) do
    local data = CloudsDashLevelData.Create(config)
    self.m_levelData[data.level] = data
  end
  table.sort(self.m_arrCircleLevel, function(a, b)
    return a < b
  end)
end

function CloudsDashLevelDataGroup:GetLevelConfigs(startLevel)
  local arrCfgs = self.m_levelData
  if arrCfgs == nil or startLevel == nil then
    return {}
  end
  local result = {}
  for i = startLevel, #arrCfgs do
    if i <= #arrCfgs then
      result[#result + 1] = Table.ShallowCopy(arrCfgs[i])
    end
  end
  return result
end

function CloudsDashLevelDataGroup:GetFinalReward()
  local arrCfgs, index
  arrCfgs = self.m_levelData or {}
  index = #arrCfgs
  if arrCfgs[index] == nil then
    Log.Error("[CloudsDashLevelDataGroup:GetFinalReward] \229\165\150\229\138\177\228\184\186nil")
    return {}
  end
  return arrCfgs[index]
end

CloudsDashLevelData = {}
CloudsDashLevelData.__index = CloudsDashLevelData

function CloudsDashLevelData.Create(config)
  local ins = setmetatable({}, CloudsDashLevelData)
  ins:Init(config)
  return ins
end

function CloudsDashLevelData:Init(config)
  self.score = config.score
  self.level = config.level
  self.rewards = config.rewards
  self.icon = config.reward_icon
  self.bIsCircle = config.circle == 1
end
