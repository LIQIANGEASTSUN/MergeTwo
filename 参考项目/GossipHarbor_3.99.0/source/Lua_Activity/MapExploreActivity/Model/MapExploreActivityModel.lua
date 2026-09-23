MapExploreActivityModel = setmetatable({}, BaseActivityModel)
MapExploreActivityModel.__index = MapExploreActivityModel
MapExploreActivityModel.DBKeys = {
  EverFulledKey = "EverFulled",
  PopEndWindow = "PopEndWindow",
  LastSolvedSlot = "LastSolvedSlot",
  ProgressRecord = "ProgressRecord",
  cloudUnlockCache = "cloudUnlockCache",
  TaskCacheData = "TaskCacheData",
  TaskShowCacheData = "TaskShowCacheData",
  CurrentMergeLevel = "CurrentMergeLevel",
  MapPropertyData = "MapPropertyData",
  ExpriedReward = "ExpriedReward",
  TimeLineCache = "TimeLineCache",
  MainTaskCacheData = "MainTaskCacheData",
  IsPlayFirstTimeLine = "isPlayFirstTimeLine",
  CanPlayFirstShowBubble = "CanPlayFirstShowBubble",
  EnergyRecoverLastStartTime = "EnergyRecoverLastStartTime",
  LastBuyEnergyDay = "LastBuyEnergyDay",
  LastBuyEnergyIndex = "LastBuyEnergyIndex",
  ProgressNewRecord = "ProgressNewRecord",
  SmashData = "SmashData",
  StageTaskData = "StageTaskData",
  StageShowTaskData = "StageShowTaskData",
  StageTaskProgress = "StageTaskProgress"
}
MapExploreActivityModel.EventKeys = {
  ConsumeProperty = 1,
  TaskFinish = 2,
  AcquireProperty = 3,
  TaskProgressIncrease = 4,
  ObstacleTakeReward = 5,
  ObstacleDelete = 6,
  ObstacleTransform = 7,
  stageTaskProgressChanged = 8
}
MapExploreActivityModel.ExtraActivityModel = {
  [MapExploreExtraActivityDefinition.ExtraActivityType.Smash] = MapExploreExtraSmashActivityModel,
  [MapExploreExtraActivityDefinition.ExtraActivityType.StageTask] = MapExploreExtraStageTaskModel
}

function MapExploreActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityDefinition = MapExploreActivityDefinition[activityType]
  self:LoadDefaultConfig(self.m_activityDefinition.ConfigKeySuffix)
  self:LoadCacheData(activityDataTable)
  self.m_mapModel = MapExploreActivityMapModel.Create(self, activityType, activityDataTable)
  self.m_taskModel = MapExploreActivityTaskModel.Create(self, activityDataTable)
  self.m_timeLineModel = MapExploreActivityTimeLineModel.Create(self, activityDataTable)
  self.m_progressActivityModel = MapExploreProgressActivityModel.Create(self, activityDataTable)
  self.m_mapExtraActivityModel = {}
  for extraType, extraModel in pairs(self.ExtraActivityModel) do
    self.m_mapExtraActivityModel[extraType] = extraModel.Create(self, extraType, activityDataTable)
  end
  BaseActivityModel.Init(self, activityType, activityDataTable)
end

function MapExploreActivityModel:GetSmashModel()
  return self.m_mapExtraActivityModel[MapExploreExtraActivityDefinition.ExtraActivityType.Smash]
end

function MapExploreActivityModel:LoadDefaultConfig(configKeySuffix)
  self.m_activityProperty = {}
  local propertyConfig = require("Data.Config.ExplorePropertyConfig_" .. configKeySuffix)
  for _, ele in ipairs(propertyConfig) do
    self.m_activityProperty[ele] = true
  end
end

function MapExploreActivityModel:LoadCacheData(DBTable)
  self.m_propertyData = json.decode(DBTable:GetValue(MapExploreActivityModel.DBKeys.MapPropertyData, "value") or "") or {}
  self.m_expireReward = json.decode(DBTable:GetValue(MapExploreActivityModel.DBKeys.ExpriedReward, "value") or "")
end

function MapExploreActivityModel:GetActivityDefinition()
  return self.m_activityDefinition
end

function MapExploreActivityModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function MapExploreActivityModel:_LoadOtherServerConfig(config)
  self.m_eventOrderScore = config.eventOrderScore
  self.m_taskModel:_LoadOtherServerConfig(config)
  if self.m_activityDefinition.TimeLineConfigName ~= nil then
    self.m_timeLineModel:_LoadOtherServerConfig(self.m_activityDefinition)
  end
  if config.mapExploreProgressConfig ~= nil and config.mapExploreProgressReward ~= nil then
    self.m_progressActivityModel:_LoadOtherServerConfig(config)
  end
  if not Table.IsEmpty(config.mapExploreItem) then
    self.arrMergeLine = {}
    local cnt = 0
    for _, data in pairs(config.mapExploreItem) do
      self.arrMergeLine[data.index] = data.item
      cnt = cnt + 1
    end
    if cnt ~= #self.arrMergeLine then
      Log.Error("MapExploreActivityModel config error: MapExplore_items not continuous")
    end
  end
  self.m_illustratedBook = config.eventBookContents
  for extraType, extraModel in pairs(self.m_mapExtraActivityModel) do
    extraModel:_LoadOtherServerConfig(config)
  end
  if config.misc_conf_new ~= nil then
    local recoverLimitConfig = Table.ListSelect(config.misc_conf_new, function(data)
      return data.confType == "mapExploreRecoverEnergy"
    end)
    local recoverSpeedConfig = Table.ListSelect(config.misc_conf_new, function(data)
      return data.confType == "mapExploreRecoverTime"
    end)
    if recoverLimitConfig ~= nil and recoverLimitConfig[1] ~= nil and recoverSpeedConfig ~= nil and recoverSpeedConfig[1] ~= nil then
      self.m_recoverLimit = recoverLimitConfig[1].param_int
      self.m_recoverSpeed = recoverSpeedConfig[1].param_float
      self.m_recoverSpeed = math.floor(self.m_recoverSpeed * 60 + 0.5)
    else
      self.m_recoverLimit = nil
      self.m_recoverSpeed = nil
    end
  else
    self.m_recoverLimit = nil
    self.m_recoverSpeed = nil
  end
  self:CheckRecoverEnergyStart()
  if config.mapExploreBuyEnergy ~= nil then
    self.m_buyEnergyConfig = Table.DeepCopy(config.mapExploreBuyEnergy)
    table.sort(self.m_buyEnergyConfig, function(a, b)
      return a.index < b.index
    end)
  else
    self.m_buyEnergyConfig = nil
  end
end

function MapExploreActivityModel:GetRecoverLimit()
  return self.m_recoverLimit
end

function MapExploreActivityModel:CheckRecoverEnergyStart()
  if self.m_recoverLimit == nil or self.m_recoverSpeed == nil then
    return
  end
  local recoverLastStartTime = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
  if recoverLastStartTime == -1 and self:GetPropertyNum(self.m_activityDefinition.TokenProperty) < self.m_recoverLimit then
    self.m_dbTable:Set(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value", GM.GameModel:GetServerTime())
  end
end

function MapExploreActivityModel:GetNextRecoverTime()
  if self.m_recoverLimit == nil or self.m_recoverSpeed == nil then
    return -1
  end
  if self:GetPropertyNum(self.m_activityDefinition.TokenProperty) >= self.m_recoverLimit then
    return -1
  end
  local recoverLastStartTime = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
  if recoverLastStartTime == -1 then
    return -1
  end
  return recoverLastStartTime + self.m_recoverSpeed
end

function MapExploreActivityModel:CheckEnergyFull()
  if self.m_recoverLimit == nil or self.m_recoverSpeed == nil then
    return
  end
  if self:GetPropertyNum(self.m_activityDefinition.TokenProperty) >= self.m_recoverLimit then
    local recoverLastStartTime = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
    if recoverLastStartTime ~= -1 then
      self.m_dbTable:Set(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value", -1)
    end
  end
end

function MapExploreActivityModel:CanBuyTokenByGem()
  return self.m_buyEnergyConfig ~= nil
end

function MapExploreActivityModel:GetBuyTokenPrice()
  self:TryRefreshBuyTokenPrice()
  local index = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.LastBuyEnergyIndex, "value") or 0
  index = math.min(#self.m_buyEnergyConfig, index + 1)
  return self.m_buyEnergyConfig[index].gem, self.m_buyEnergyConfig[index].energy
end

function MapExploreActivityModel:TryRefreshBuyTokenPrice()
  local day = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.LastBuyEnergyDay, "value") or 0
  local curDay = GM.GameModel:GetServerTime() // 86400
  if day < curDay then
    self.m_dbTable:Set(MapExploreActivityModel.DBKeys.LastBuyEnergyDay, "value", curDay)
    self.m_dbTable:Set(MapExploreActivityModel.DBKeys.LastBuyEnergyIndex, "value", 0)
  end
end

function MapExploreActivityModel:AddBuyTokenIndex()
  local index = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.LastBuyEnergyIndex, "value") or 0
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.LastBuyEnergyIndex, "value", index + 1)
end

function MapExploreActivityModel:BuyToken()
  local i32GemNum, i32TokenNum = self:GetBuyTokenPrice()
  if GM.PropertyDataManager:Consume(EPropertyType.Gem, i32GemNum, self.m_activityDefinition.BIGemBuyToken, self.m_activityDefinition.TokenProperty) then
    self:AddBuyTokenIndex()
    self:AddPropertyNum(self.m_activityDefinition.TokenProperty, i32TokenNum, "gemBuy")
    return i32TokenNum, i32GemNum
  end
  return nil, i32GemNum
end

function MapExploreActivityModel:UpdatePerSecond()
  BaseActivityModel.UpdatePerSecond(self)
  for _, extraModel in pairs(self.m_mapExtraActivityModel) do
    extraModel:UpdatePerSecond()
  end
  if self:GetState() == ActivityState.Started then
    if self.m_recoverLimit ~= nil and self.m_recoverSpeed ~= nil then
      local recoverLastStartTime = self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
      if recoverLastStartTime ~= -1 then
        self:CheckEnergyFull()
        local curTime = GM.GameModel:GetServerTime()
        local dTime = curTime - recoverLastStartTime
        local recoverEnergy = dTime // self.m_recoverSpeed
        local curEnergy = self:GetPropertyNum(self.m_activityDefinition.TokenProperty)
        local addEnergy = math.min(self.m_recoverLimit - curEnergy, recoverEnergy)
        if 0 < addEnergy then
          self:AddPropertyNum(self.m_activityDefinition.TokenProperty, addEnergy, "recover")
          self.m_dbTable:Set(MapExploreActivityModel.DBKeys.EnergyRecoverLastStartTime, "value", curTime)
          EventDispatcher.DispatchEvent(self.m_activityDefinition.EnergyRecoverEvent, addEnergy)
        end
      end
    end
    if self.m_bLateInit then
      self.m_progressActivityModel:UpdatePerSecond()
    end
  end
end

function MapExploreActivityModel:LateInit()
  self.m_bLateInit = true
  if self:GetState() == ActivityState.Ended then
    self.m_progressActivityModel:TryCollectRewardLogic(true)
  end
  if self:GetState() == ActivityState.Ended and self.m_expireReward == nil then
    self:ExchangeReward()
  end
  for _, extraModel in pairs(self.m_mapExtraActivityModel) do
    extraModel:LateInit()
  end
end

function MapExploreActivityModel:GetMainTargetConfig()
  return self.m_taskModel:GetMainTargetConfig()
end

function MapExploreActivityModel:ExistsBoardActivity()
  return self.arrMergeLine ~= nil
end

function MapExploreActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  self.m_boardDataTable:Drop()
  for _, extraModel in pairs(self.m_mapExtraActivityModel) do
    extraModel:DropData()
  end
  self.m_boardModel = nil
  self.m_tempProgressScore = nil
  self:LoadCacheData(self.m_dbTable)
  self.m_mapModel:ClearMapData()
  self.m_taskModel:LoadCacheData()
  self.m_timeLineModel:ClearTimeline()
end

function MapExploreActivityModel:_OnStateChanged()
  self.m_mapModel:OnStatedChanged()
  local state = self:GetState(false)
  if state ~= ActivityState.Released and self.m_eventOrderScore ~= nil then
    GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.EventScoreConfigAcquireProperty, self, self.m_eventOrderScore, self.m_activityDefinition.TokenProperty, function(num, scene)
      self:AddPropertyNum(self.m_activityDefinition.TokenProperty, num, scene)
    end, function()
      return self:GetState() == ActivityState.Started
    end, function()
      local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
      if mainWindow ~= nil then
        return mainWindow:GetHudButton()
      end
    end)
  end
  if state ~= ActivityState.Released then
    GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.LogicAcquireReward, self, {
      [EPropertyType.MapExploreKeyReward] = function(num, scene)
        self:AddPropertyNum(EPropertyType.MapExploreKeyReward, num, scene)
      end
    })
  end
  GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.ConvertDynamicReward, self, {
    [self.m_activityDefinition.TokenProperty] = function(reward, needBI)
      if GM.ActivityManager:GetStartedActivityByDefinition(MapExploreActivityDefinition) == nil then
        local newReward = {}
        newReward[PROPERTY_TYPE] = EPropertyType.Gold
        newReward[PROPERTY_COUNT] = reward[PROPERTY_COUNT]
        return newReward
      end
      return reward
    end
  })
  if (self:GetState() == ActivityState.Started or state == ActivityState.Ended) and self:ExistsBoardActivity() then
    if self.m_boardModel == nil then
      local args = {
        itemDataTable = self.m_itemDataTable,
        itemLayerDataTable = self.m_itemLayerDataTable,
        itemCacheDataTable = self.m_itemCacheDataTable,
        boardDataTable = self.m_boardDataTable,
        boardInitFileName = self.m_activityDefinition.BoardModelConfigName,
        activityDBTable = self.m_dbTable,
        itemIllustrated = self.m_illustratedBook,
        activityType = self:GetType()
      }
      self.m_boardModel = MapExploreActivityBoardModel.Create(args)
      self:InitUpdateLevel()
    end
    self.m_taskModel:RegisterBookModel(self.m_boardModel:GetItemIllustratedBook())
    for _, extraModel in pairs(self.m_mapExtraActivityModel) do
      extraModel:RegisterBoardModel(self.m_boardModel)
    end
  end
  if self:GetState() == ActivityState.Ended then
    if self.m_bLateInit then
      self.m_progressActivityModel:TryCollectRewardLogic(true)
    end
    if self.m_expireReward == nil and self.m_bLateInit then
      self:ExchangeReward()
    end
  end
  if state == ActivityState.Started and self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.MapPropertyData, "value") == nil then
    self:AddPropertyNum(self.m_activityDefinition.TokenProperty, 10, "free")
  end
  self.m_taskModel:OnStatedChanged()
  for _, extraModel in pairs(self.m_mapExtraActivityModel) do
    extraModel:OnStatedChanged()
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
end

function MapExploreActivityModel:GetPropertyNum(type)
  return self.m_propertyData[type] or 0
end

function MapExploreActivityModel:AddPropertyNum(type, num, biKey)
  if self.m_propertyData[type] == nil then
    self.m_propertyData[type] = 0
  end
  self.m_propertyData[type] = self.m_propertyData[type] + num
  self.event:Call(MapExploreActivityModel.EventKeys.AcquireProperty, {type = type, num = num})
  self:SavePropertyData()
  if type == self.m_activityDefinition.TokenProperty then
    self:CheckEnergyFull()
  end
  local mainTargetConfig = self.m_taskModel:GetMainTargetConfig()
  if self.m_taskModel:GetMainTaskConfig() == nil and type == mainTargetConfig.content[PROPERTY_TYPE] then
    self:LogActivity(EBIType.ActivityRankUp, self.m_propertyData[type])
    if self.m_propertyData[type] == mainTargetConfig.content[PROPERTY_COUNT] then
      RewardApi.AcquireRewardsLogic(mainTargetConfig.rewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireMainTargetReward, EGameMode.Main, CacheItemType.Type2)
    end
  end
  if type == self.m_activityDefinition.TokenProperty then
    if biKey == "free" then
      GM.BIManager:LogAcquire(type, num, self.m_activityDefinition.BIAcquireFreeToken, true)
    elseif biKey == "recover" then
      GM.BIManager:LogAcquire(type, num, self.m_activityDefinition.BIEnergyRecover, true)
    elseif biKey == "progress" then
      GM.BIManager:LogAcquire(type, num, self.m_activityDefinition.BIAcquireProgressActivityReward, true)
    end
  end
end

function MapExploreActivityModel:HasProperty(listProperty)
  if listProperty == nil then
    return true
  end
  for i, property in ipairs(listProperty) do
    if self.m_propertyData[property[PROPERTY_TYPE]] == nil or self.m_propertyData[property[PROPERTY_TYPE]] < property[PROPERTY_COUNT] then
      return false
    end
  end
  return true
end

function MapExploreActivityModel:CostProperty(listProperty)
  for i, property in ipairs(listProperty) do
    if self.m_propertyData[property[PROPERTY_TYPE]] == nil or self.m_propertyData[property[PROPERTY_TYPE]] < property[PROPERTY_COUNT] then
      Log.Error("\233\129\147\229\133\183\230\182\136\232\128\151\233\148\153\232\175\175")
      return false
    end
    self.m_propertyData[property[PROPERTY_TYPE]] = (self.m_propertyData[property[PROPERTY_TYPE]] or 0) - property[PROPERTY_COUNT]
    if property[PROPERTY_TYPE] == self.m_activityDefinition.TokenProperty then
      self:CheckRecoverEnergyStart()
      self.m_tempProgressScore = self.m_progressActivityModel:AddScore(property[PROPERTY_COUNT])
      EventDispatcher.DispatchEvent(EEventType.MapExploreCostEnergy, {
        num = property[PROPERTY_COUNT]
      })
    end
  end
  self.event:Call(MapExploreActivityModel.EventKeys.ConsumeProperty, listProperty)
  self:SavePropertyData()
  return true
end

function MapExploreActivityModel:GetTempProgressScore()
  return self.m_tempProgressScore
end

function MapExploreActivityModel:ClearTempProgressScore()
  self.m_tempProgressScore = nil
end

function MapExploreActivityModel:SavePropertyData()
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.MapPropertyData, "value", json.encode(self.m_propertyData))
end

function MapExploreActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function MapExploreActivityModel:GetDefinition()
  return self.m_activityDefinition
end

function MapExploreActivityModel:SetPopEndWindow()
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.PopEndWindow, "value", "1")
end

function MapExploreActivityModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.PopEndWindow, "value") ~= "1"
end

function MapExploreActivityModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.EverFulledKey, "value") or false
end

function MapExploreActivityModel:SetBoardFulled()
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.EverFulledKey, "value", true)
end

function MapExploreActivityModel:CanPlayFirstTimeLine()
  return self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.IsPlayFirstTimeLine, "value") ~= "1"
end

function MapExploreActivityModel:SetPlayFirstTimeLine()
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.IsPlayFirstTimeLine, "value", "1")
end

function MapExploreActivityModel:SetTutorialStartFinish()
  GM.MiscModel:SetMapExploreFinishStartTutorial(1)
end

function MapExploreActivityModel:IfTutorialStartFinish()
  return GM.MiscModel:GetMapExploreFinishStartTutorial() == "1"
end

function MapExploreActivityModel:SetTutorialBoardFinish()
  GM.MiscModel:SetMapExploreFinishBoardTutorial(1)
end

function MapExploreActivityModel:IfTutorialBoardFinish()
  return GM.MiscModel:GetMapExploreFinishBoardTutorial() == "1"
end

function MapExploreActivityModel:CacheItems(cachedItemCodes)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes)
end

function MapExploreActivityModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function MapExploreActivityModel:GetMergeLength()
  return #self.arrMergeLine
end

function MapExploreActivityModel:GetItemTypeByIndex(index)
  return self.arrMergeLine[index]
end

function MapExploreActivityModel:SetLevel(level)
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.CurrentMergeLevel, "value", level)
  GM.BIManager:LogAction(self.m_activityDefinition.BIMergeLineUnlock, {
    code = self:GetItemTypeByIndex(level),
    level = level
  })
end

function MapExploreActivityModel:GetLevel()
  return self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.CurrentMergeLevel, "value") or 0
end

function MapExploreActivityModel:UpdateLevel(itemCode)
  local lvl = self:GetLevelByItemCode(itemCode)
  local curLvl = self:GetLevel()
  if lvl > curLvl then
    self:SetLevel(lvl)
    return true
  end
  return false
end

function MapExploreActivityModel:InitUpdateLevel()
  if self.m_boardModel == nil then
    return
  end
  local curLvl = self:GetLevel()
  local lvl = 0
  local tempLvl = 0
  for item, _ in pairs(self.m_boardModel:GetAllBoardItems(true)) do
    local code = item:GetCode()
    tempLvl = self:GetLevelByItemCode(code)
    if lvl < tempLvl then
      lvl = tempLvl
    end
  end
  if curLvl < lvl then
    self:SetLevel(lvl)
  end
end

function MapExploreActivityModel:GetLevelByItemCode(itemCode)
  for i, v in ipairs(self.arrMergeLine) do
    if v == itemCode then
      return i
    end
  end
  return 0
end

function MapExploreActivityModel:GetItemCodeByLevel(lvl)
  return self.arrMergeLine[lvl]
end

function MapExploreActivityModel:IsFinishMapTask()
  if self.m_taskModel:GetMainTaskConfig() == nil then
    local mainTargetConfig = self:GetMainTargetConfig()
    if self:GetPropertyNum(mainTargetConfig.content[PROPERTY_TYPE]) >= mainTargetConfig.content[PROPERTY_COUNT] then
      return true
    end
  else
    return self.m_taskModel:IsFinishAllMainTask()
  end
  return false
end

function MapExploreActivityModel:IsMaxLevel()
  local curLevel = self:GetLevel()
  local maxLevel = self:GetMergeLength()
  return curLevel == maxLevel
end

function MapExploreActivityModel:GetEndRewards()
  local rewards = {}
  if self.m_boardModel ~= nil then
    rewards = self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
  end
  Table.ListAppend(rewards, self.m_taskModel:GetEndRecoverRewards())
  for _, extraModel in pairs(self.m_mapExtraActivityModel) do
    Table.ListAppend(rewards, extraModel:GetEndRecoverRewards() or {})
  end
  return rewards
end

function MapExploreActivityModel:GetEvent()
  return self.event
end

function MapExploreActivityModel:ExchangeReward()
  if self.m_expireReward ~= nil then
    return
  end
  local maxnum = 100
  local cnt = self:GetPropertyNum(self.m_activityDefinition.TokenProperty)
  local rewards = {
    {
      [PROPERTY_TYPE] = EPropertyType.Gold,
      [PROPERTY_COUNT] = math.min(maxnum, cnt)
    }
  }
  if cnt == 0 then
    rewards[1][PROPERTY_COUNT] = 0
  end
  self.m_propertyData[self.m_activityDefinition.TokenProperty] = 0
  self:SavePropertyData()
  RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, self.m_activityDefinition.BIRewardRecoverBIType, EGameMode.Main, CacheItemType.Type2)
  self.m_expireReward = rewards
  GM.BIManager:LogAction(self.m_activityDefinition.BIRewardRecoverBIType, {
    re = self.m_expireReward[1],
    cnt = cnt
  })
  self:SaveExpireReward()
  return rewards
end

function MapExploreActivityModel:SaveExpireReward()
  local jsonData = ""
  if self.m_expireReward ~= nil then
    jsonData = json.encode(self.m_expireReward)
    self.m_dbTable:Set(MapExploreActivityModel.DBKeys.ExpriedReward, "value", jsonData)
  else
    self.m_dbTable:Remove(MapExploreActivityModel.DBKeys.ExpriedReward)
  end
end

function MapExploreActivityModel:GetExpiredReward()
  return self.m_expireReward
end

function MapExploreActivityModel:IsActivityProperty(type)
  return self.m_activityProperty[type] == true
end

function MapExploreActivityModel:OnTestClearMapData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  self.m_boardDataTable:Drop()
  self.m_mapModel:ClearMapData()
  self.m_progressActivityModel:OnTestClearData()
  self.m_taskModel:ClearAllTaskCache()
  if self.m_timeLineModel ~= nil then
    self.m_timeLineModel:ClearTimeline()
  end
  for _, extraModel in pairs(self.m_mapExtraActivityModel) do
    extraModel:TestClearData()
  end
  self.m_boardModel = nil
  self:LoadServerConfig()
end

function MapExploreActivityModel:OnTestSetMapDataToStage(stage)
  self:OnTestClearMapData()
  if self.m_timeLineModel ~= nil then
    self.m_timeLineModel:ClearTimeline()
  end
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.IsPlayFirstTimeLine, "value", "1")
  self:_OnTestSetToStage(stage)
end

function MapExploreActivityModel:DisposeSlot(curSlot)
  local listObstacles = self:GetMapModel():GetSlotListObstalce(curSlot)
  for _, listObstacle in ipairs(listObstacles) do
    local cost = listObstacle:GetCodeConfig().cost
    if not self:HasProperty(cost) then
      local newRewards = {}
      for _, reward in ipairs(cost) do
        if self:IsActivityProperty(reward[PROPERTY_TYPE]) then
          self:AddPropertyNum(reward[PROPERTY_TYPE], reward[PROPERTY_COUNT], self.m_activityDefinition.BIAcquireObstacleReward)
        else
          table.insert(newRewards, reward)
        end
      end
      RewardApi.AcquireRewardsLogic(newRewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireObstacleReward, EGameMode.Main, CacheItemType.Type1)
    end
    listObstacle:OnDispose()
  end
end

function MapExploreActivityModel:TestReachSlot(slot, bInclude)
  local curSlot = self:GetMapModel():GetPreUnlockSlot(slot)
  local index = 0
  while curSlot ~= slot and not (1000 < index) do
    index = index + 1
    self:DisposeSlot(curSlot)
    curSlot = self:GetMapModel():GetPreUnlockSlot(slot)
  end
  if bInclude then
    self:DisposeSlot(curSlot)
  end
end

function MapExploreActivityModel:_OnTestSetToStage(stage)
  local config = self.m_taskModel:GetMainTaskConfig()
  for i = 1, stage do
    for _, mainTaskConfig in ipairs(config[i]) do
      local taskContentType = mainTaskConfig.content[PROPERTY_TYPE]
      if mainTaskConfig.taskType == MapExploreActivityTaskModel.MainTaskType.reach then
        self:TestReachSlot(taskContentType, false)
      elseif mainTaskConfig.taskType == MapExploreActivityTaskModel.MainTaskType.Tool then
        self:TestReachSlot(self.m_mapModel:GetCurrentToTargetObstaclePrefabDistance(taskContentType, MapExploreActivityTaskModel.TaskType.Tool), true)
      else
        self:TestReachSlot(self.m_mapModel:GetSlotIdByObstacletype(taskContentType), true)
      end
    end
  end
end

function MapExploreActivityModel:GetRedPointNum()
  local energyLimit = self:GetRecoverLimit()
  if energyLimit ~= nil then
    return (energyLimit <= self:GetPropertyNum(self.m_activityDefinition.TokenProperty) or self:GetTaskModel():HasUnClaimedReward()) and 1 or 0
  end
  if self:GetMapModel():CanShowRedPoint() or self:GetTaskModel():HasUnClaimedReward() then
    return 1
  end
  for _, model in pairs(self.m_mapExtraActivityModel) do
    if model:CanShowRedPoint() then
      return 1
    end
  end
  return 0
end

function MapExploreActivityModel:GetHudEntryShowConfig()
  return {
    Type = "MapExploreActivity",
    ArrCheckShowEvent = {
      self.m_activityDefinition.StateChangedEvent
    },
    EntryPrefabConfigName = self.m_activityDefinition.HudEntryPrefabName,
    CheckFunc = function()
      return self:GetState() == ActivityState.Started or self:GetState() == ActivityState.Preparing
    end,
    HudSideBarType = EHudSideBarType.Left,
    EntryButtonKey = self.m_activityDefinition.EntryButtonKey,
    EntryIconName = self.m_activityDefinition.EntryImageName,
    OnClickedFunc = function()
      if self:GetState() == ActivityState.Started then
        GM.UIManager:OpenView(self.m_activityDefinition.MainWindowPrefabName, self.m_type, false)
      elseif self:GetState() == ActivityState.Preparing then
        GM.UIManager:OpenView(self.m_activityDefinition.NoticeWindowPrefabName, self.m_type, false)
      end
    end,
    RedPointType = EntryRedPointType.Exc,
    GetRedPointNumFunc = function()
      return self:GetRedPointNum()
    end,
    ArrUpdateEntryContentEvent = {},
    ArrUpdateEntryContentModelEvent = {
      MapExploreActivityModel.EventKeys.ConsumeProperty,
      MapExploreActivityModel.EventKeys.AcquireProperty
    }
  }
end

function MapExploreActivityModel:GetBoardEntryShowConfig()
  return {
    statusChangeName = self.m_activityDefinition.StateChangedEvent,
    bubbleName = "m_" .. self.m_type .. "Bubble",
    bubbleNodeName = "m_MapExplorectivityBubbleNode",
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    bubbleCountName = "m_MapExplorectivityBubbleCount",
    scrollToFunName = "ScrollToMapExplorectivity",
    activityType = self:GetType(),
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function MapExploreActivityModel:GetMapModel()
  return self.m_mapModel
end

function MapExploreActivityModel:GetTaskModel()
  return self.m_taskModel
end

function MapExploreActivityModel:GetBoardModel()
  return self.m_boardModel
end

function MapExploreActivityModel:GetTimelineModel()
  return self.m_timeLineModel
end

function MapExploreActivityModel:SetPlayFirstShowBubble(bFlag)
  self.m_dbTable:Set(MapExploreActivityModel.DBKeys.CanPlayFirstShowBubble, "value", bFlag)
end

function MapExploreActivityModel:CanPlayFirstShowBubble()
  return self.m_dbTable:GetValue(MapExploreActivityModel.DBKeys.CanPlayFirstShowBubble, "value") or false
end

function MapExploreActivityModel:GetTimelineStartPos()
  return self.m_timeLineModel:GetStartTimelinePos()
end

function MapExploreActivityModel:HasTimeline()
  return self.m_activityDefinition.TimeLineConfigName ~= nil
end

function MapExploreActivityModel:GetMissionProgress(missionType)
  local taskModel = self:GetTaskModel()
  if missionType == TaskEventType.MapExploreMain then
    if taskModel:GetMainTaskConfig() then
      return taskModel:GetFinishTaskNum()
    else
      local config = self:GetMainTargetConfig()
      if config then
        return self:GetPropertyNum(config.content[PROPERTY_TYPE])
      else
        return 0
      end
    end
  elseif missionType == TaskEventType.MapExploreAll then
    local finishNum = 0
    local stageTaskModel = self:GetExtraActivityModelByType(MapExploreExtraActivityDefinition.ExtraActivityType.StageTask)
    if stageTaskModel ~= nil and stageTaskModel:IsStageTaskOpen() then
      for stage, _ in pairs(stageTaskModel:GetStageTaskConfig()) do
        local stageCache = stageTaskModel:GetStageCache(stage)
        if stageCache ~= nil then
          stageCache = stageCache.stageCache
          for _, cache in pairs(stageCache) do
            if cache.indexState == MapExploreExtraStageTaskModel.IndexState.RewardFinish then
              finishNum = finishNum + 1
            end
          end
        end
      end
    else
      local cacheInfo = taskModel:GetTaskCacheData()
      for _, info in ipairs(cacheInfo) do
        if info.state == MapExploreActivityTaskModel.TaskState.Reward then
          finishNum = finishNum + 1
        end
      end
    end
    return finishNum
  end
end

function MapExploreActivityModel:IsProgressActive()
  return self.m_progressActivityModel:IsProgressActive()
end

function MapExploreActivityModel:GetProgressActivityModel()
  return self.m_progressActivityModel
end

function MapExploreActivityModel:CanPopProgressReady()
  return self:IsProgressActive() and not self.m_progressActivityModel:HasPopStartWindow()
end

function MapExploreActivityModel:HasProgressReward()
  return self:IsProgressActive() and not Table.IsEmpty(self.m_progressActivityModel:CalcReward())
end

function MapExploreActivityModel:CanPopProgressWindow(ignoreFirstPop)
  if ignoreFirstPop then
    return not self:CanPlayFirstTimeLine() and self:IsProgressActive() and not Table.IsEmpty(self.m_progressActivityModel:CalcReward())
  else
    return not self:CanPlayFirstTimeLine() and self:IsProgressActive() and (not self.m_progressActivityModel:HasPopProgressWindow() or not Table.IsEmpty(self.m_progressActivityModel:CalcReward()))
  end
end

function MapExploreActivityModel:GetPairEvent()
  return self.event
end

function MapExploreActivityModel:DispatchExtraActivityEvent(extraType, msg)
  self.event:Call(extraType, msg)
end

function MapExploreActivityModel:GetExtraActivityModels()
  return self.m_mapExtraActivityModel
end

function MapExploreActivityModel:GetExtraActivityModelByType(extraType)
  return self.m_mapExtraActivityModel[extraType]
end

function MapExploreActivityModel:TestClearExpireReward()
  self.m_expireReward = nil
  self.m_dbTable:Remove(MapExploreActivityModel.DBKeys.ExpriedReward)
end
