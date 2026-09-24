HuntMapActivityModel = setmetatable({}, BaseActivityModel)
HuntMapActivityModel.__index = HuntMapActivityModel
HuntMapActivityModel.BookChainName = "HuntMapItemBookChain"
HuntMapActivityModel.DBKeys = {
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
  GenerateRoundValidCountKey = "GenerateRoundValidCountKey",
  ItemDeleteTutorialShowed = "ItemDeleteTutorialShowed",
  BoardInitDepth = "BoardInitDepth",
  DashScore = "DashScore",
  TicketKey = "TicketKey",
  PayTaskClaimed = "PayTaskClaimed",
  LastStreakOpenDay = "LastStreakOpenDay"
}
HuntMapActivityModel.EventKeys = {
  ConsumeProperty = 1,
  TaskFinish = 2,
  AcquireProperty = 3,
  TaskProgressIncrease = 4,
  UpdateTaskButtonRedPoint = 5
}

function HuntMapActivityModel.IsActivityItem(itemType)
  if itemType and GM.ItemDataModel:IsItemExist(itemType) then
    for actType, v in pairs(HuntMapActivityDefinition) do
      if StringUtil.StartWith(itemType, actType .. "_") then
        return true
      end
    end
  end
  return false
end

function HuntMapActivityModel.IsMainMergeLineItem(type)
  for activityType, _ in pairs(HuntMapActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started and huntModel:GetLevelByItemCode(type) ~= 0 then
      return true, activityType
    end
  end
end

function HuntMapActivityModel.GetActivityTypeByItemType(itemType)
  if itemType and GM.ItemDataModel:IsItemExist(itemType) then
    for actType, v in pairs(HuntMapActivityDefinition) do
      if StringUtil.StartWith(itemType, actType .. "_") then
        return actType
      end
    end
  end
end

function HuntMapActivityModel.GetActiveModel()
  local model
  for activityType, definition in pairs(HuntMapActivityDefinition) do
    model = GM.ActivityManager:GetModel(activityType)
    if model ~= nil and model:GetState() == ActivityState.Started then
      return model
    end
  end
end

function HuntMapActivityModel:IsActivityOpen()
  return self:GetState() == ActivityState.Started
end

function HuntMapActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_activityDefinition = HuntMapActivityDefinition[activityType]
  self:LoadDefaultConfig(self.m_activityDefinition.ConfigKeySuffix)
  self:LoadCacheData(activityDataTable)
  self.m_mapModel = HuntMapActivityMapModel.Create(self, activityType, activityDataTable)
  self.m_taskModel = HuntMapActivityTaskModel.Create(self, activityDataTable)
  self.m_timeLineModel = HuntMapActivityTimeLineModel.Create(self, activityDataTable)
  self.m_tokenHelper = ActivityTokenHelper.Create(self, activityDataTable, self.m_activityDefinition.ActivityTokenPropertyType, EFlyElementLabelStyle.Default, nil, {
    specialFloat = false,
    floatFirst = true,
    floatHeight = 100,
    floatDelay = 0.5,
    floatScale = 1,
    startScale = Vector3(0.9, 0.9, 1),
    endScale = 0.3
  })
  self.m_endWindowPopupHelper = ActivityEndPopupHelper.Create(self, activityDataTable)
  BaseActivityModel.Init(self, activityType, activityDataTable)
  EventDispatcher.AddListener(EEventType.ItemSpread, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.ItemRetrieved, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.PopCachedItem, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.ItemReplaced, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.OpenView, self, self._OnOpenView)
end

function HuntMapActivityModel:LoadDefaultConfig(configKeySuffix)
  self.m_activityProperty = {}
  local propertyConfig = require("Data.Config.ExplorePropertyConfig_" .. configKeySuffix)
  for _, ele in ipairs(propertyConfig) do
    self.m_activityProperty[ele] = true
  end
end

function HuntMapActivityModel:LoadCacheData(DBTable)
  self.m_propertyData = json.decode(DBTable:GetValue(HuntMapActivityModel.DBKeys.MapPropertyData, "value") or "") or {}
  self.m_expireReward = json.decode(DBTable:GetValue(HuntMapActivityModel.DBKeys.ExpriedReward, "value") or "")
end

function HuntMapActivityModel:GetActivityDefinition()
  return self.m_activityDefinition
end

function HuntMapActivityModel:GetEndWindowPopupHelper()
  return self.m_endWindowPopupHelper
end

function HuntMapActivityModel:Destroy()
  BaseActivityModel.Destroy(self)
  if self.m_boardModel ~= nil then
    self.m_boardModel:Destroy()
  end
  if self.m_tokenHelper then
    self.m_tokenHelper:Destroy()
  end
  self.m_endWindowPopupHelper:Destroy()
end

function HuntMapActivityModel:_LoadOtherServerConfig(config)
  self.m_taskModel:_LoadOtherServerConfig(config)
  if self.m_activityDefinition.TimeLineConfigName ~= nil then
    self.m_timeLineModel:_LoadOtherServerConfig(self.m_activityDefinition)
  end
  self.arrMergeLine = {}
  if not Table.IsEmpty(config.treasure_hunt_items) then
    local cnt = 0
    for _, data in pairs(config.treasure_hunt_items) do
      self.arrMergeLine[data.index] = data.item
      cnt = cnt + 1
    end
    if cnt ~= #self.arrMergeLine then
      Log.Error("HuntMapActivityModel config error: MapExplore_items not continuous")
    end
  end
  self.m_bookConfig = config.dig_book_contents
  self.m_recoverLimit = nil
  self.m_recoverSpeed = nil
  self:CheckRecoverEnergyStart()
  if config.mapExploreBuyEnergy ~= nil then
    self.m_buyEnergyConfig = Table.DeepCopy(config.mapExploreBuyEnergy)
    table.sort(self.m_buyEnergyConfig, function(a, b)
      return a.index < b.index
    end)
  else
    self.m_buyEnergyConfig = nil
  end
  self.m_pdItemType = self:GetGeneralConfig("cachePdCode")
  self:UpdateDigReward(config.event_rewards)
  if config.token_general_layout then
    self.m_tokenHelper:LoadConfig(config.token_general_layout)
  end
  self.m_price = self:GetGeneralConfig("mapStreak_price")
end

function HuntMapActivityModel:UpdateDigReward(rewardConfig)
  self.m_digReward = {}
  self.m_digCircleReward = {}
  if not Table.IsEmpty(rewardConfig) then
    table.sort(rewardConfig, function(a, b)
      return a.level < b.level
    end)
    for _, cfg in ipairs(rewardConfig) do
      if cfg.circle ~= 1 then
        table.insert(self.m_digReward, Table.DeepCopy(cfg, true))
      else
        table.insert(self.m_digCircleReward, Table.DeepCopy(cfg, true))
      end
    end
    local sumScore = 0
    for _, cfg in ipairs(self.m_digReward) do
      sumScore = sumScore + cfg.score
      cfg.score = sumScore
    end
  end
end

function HuntMapActivityModel:GetRecoverLimit()
  return self.m_recoverLimit
end

function HuntMapActivityModel:CheckRecoverEnergyStart()
  if self.m_recoverLimit == nil or self.m_recoverSpeed == nil then
    return
  end
  local recoverLastStartTime = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
  if recoverLastStartTime == -1 and self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType) < self.m_recoverLimit then
    self.m_dbTable:Set(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value", GM.GameModel:GetServerTime())
  end
end

function HuntMapActivityModel:GetNextRecoverTime()
  if self.m_recoverLimit == nil or self.m_recoverSpeed == nil then
    return -1
  end
  if self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType) >= self.m_recoverLimit then
    return -1
  end
  local recoverLastStartTime = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
  if recoverLastStartTime == -1 then
    return -1
  end
  return recoverLastStartTime + self.m_recoverSpeed
end

function HuntMapActivityModel:CheckEnergyFull()
  if self.m_recoverLimit == nil or self.m_recoverSpeed == nil then
    return
  end
  if self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType) >= self.m_recoverLimit then
    local recoverLastStartTime = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
    if recoverLastStartTime ~= -1 then
      self.m_dbTable:Set(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value", -1)
    end
  end
end

function HuntMapActivityModel:CanBuyTokenByGem()
  return self.m_buyEnergyConfig ~= nil
end

function HuntMapActivityModel:GetBuyTokenPrice()
  self:TryRefreshBuyTokenPrice()
  local index = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.LastBuyEnergyIndex, "value") or 0
  index = math.min(#self.m_buyEnergyConfig, index + 1)
  return self.m_buyEnergyConfig[index].gem, self.m_buyEnergyConfig[index].energy
end

function HuntMapActivityModel:TryRefreshBuyTokenPrice()
  local day = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.LastBuyEnergyDay, "value") or 0
  local curDay = GM.GameModel:GetServerTime() // 86400
  if day < curDay then
    self.m_dbTable:Set(HuntMapActivityModel.DBKeys.LastBuyEnergyDay, "value", curDay)
    self.m_dbTable:Set(HuntMapActivityModel.DBKeys.LastBuyEnergyIndex, "value", 0)
  end
end

function HuntMapActivityModel:AddBuyTokenIndex()
  local index = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.LastBuyEnergyIndex, "value") or 0
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.LastBuyEnergyIndex, "value", index + 1)
end

function HuntMapActivityModel:BuyToken()
  local i32GemNum, i32TokenNum = self:GetBuyTokenPrice()
  if GM.PropertyDataManager:Consume(EPropertyType.Gem, i32GemNum, self.m_activityDefinition.BIGemBuyToken, self.m_activityDefinition.ActivityTokenPropertyType, EGameMode.HuntMap) then
    self:AddBuyTokenIndex()
    self:AddPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType, i32TokenNum, "gemBuy")
    return i32TokenNum, i32GemNum
  end
  return nil, i32GemNum
end

function HuntMapActivityModel:UpdatePerSecond()
  BaseActivityModel.UpdatePerSecond(self)
  if self:GetState() == ActivityState.Started then
    self.m_endWindowPopupHelper:UpdateHasStarted()
    if self.m_recoverLimit ~= nil and self.m_recoverSpeed ~= nil then
      local recoverLastStartTime = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value") or 0
      if recoverLastStartTime ~= -1 then
        self:CheckEnergyFull()
        local curTime = GM.GameModel:GetServerTime()
        local dTime = curTime - recoverLastStartTime
        local recoverEnergy = dTime // self.m_recoverSpeed
        local curEnergy = self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType)
        local addEnergy = math.min(self.m_recoverLimit - curEnergy, recoverEnergy)
        if 0 < addEnergy then
          self:AddPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType, addEnergy, "recover")
          self.m_dbTable:Set(HuntMapActivityModel.DBKeys.EnergyRecoverLastStartTime, "value", curTime)
        end
      end
    end
  end
end

function HuntMapActivityModel:OnCheckResourcesFinished()
  self.m_bLateInit = true
  if self:GetState() == ActivityState.Ended and self.m_expireReward == nil then
    self:ExchangeReward()
  end
end

function HuntMapActivityModel:GetMainTargetConfig()
  return self.m_taskModel:GetMainTargetConfig()
end

function HuntMapActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  if self.m_boardModel ~= nil then
    self.m_boardModel:GetItemCacheModel():ResetData()
    self.m_boardModel:Destroy()
    self.m_boardModel = nil
  end
  self.m_tempProgressScore = nil
  self:LoadCacheData(self.m_dbTable)
  self.m_mapModel:ClearMapData()
  self.m_taskModel:LoadCacheData()
  self.m_timeLineModel:ClearTimeline()
  HuntMapSceneView.CharacterInfo = nil
end

function HuntMapActivityModel:_OnStateChanged()
  self.m_mapModel:OnStatedChanged()
  local state = self:GetState()
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil then
      local horizontalTiles, verticalTiles, initCodeMap, cloud, transformLayerConfig, openMapConfig = self:GetInitBoardInfo()
      self.m_boardModel = HuntMapActivityBoardModel.Create(self.m_itemDataTable, self.m_itemLayerDataTable, self.m_itemCacheDataTable, initCodeMap, self:GetType())
      self:InitUpdateLevel()
      local depth = self:GetBoardInitDepth()
      if depth == 0 then
        self.m_boardModel:LoadFile(1, 1, not self.m_activityDefinition.IsDigType)
        self:SetBoardInitDepth(verticalTiles + 1)
      end
    end
    self.m_taskModel:RegisterBookModel(self.m_boardModel:GetItemIllustratedBook())
  end
  if self:GetState() == ActivityState.Ended and self.m_expireReward == nil and self.m_bLateInit then
    self:ExchangeReward()
  end
  if state == ActivityState.Started and self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.MapPropertyData, "value") == nil then
    self:AddPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType, 10, "free")
  end
  if not self:_HasActivityStarted() and self:GetState() == ActivityState.Started then
    self:_SetActivityStarted()
    self:LogActivity(EBIType.ActivityRankUp, 0)
    self:LogActivity(EBIType.ActivityRankUp, 0, self.m_type .. "_vice")
    self:LogActivity(EBIType.ActivityRankUp, 0, self.m_type .. "_merge")
    if self:HasVipTask() then
      self:LogActivity(EBIType.ActivityRankUp, 0, self.m_type .. "_streak")
    end
    if self:HasDashRewards() then
      self:LogActivity(EBIType.ActivityRankUp, 0, self.m_type .. "_progress")
    end
  end
  self.m_endWindowPopupHelper:UpdateHasStarted()
  self.m_taskModel:OnStatedChanged()
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
end

function HuntMapActivityModel:LogActivity(scene, action, type)
  GM.BIManager:LogActivity(type or self.m_type, self:GetId(), scene, action)
end

function HuntMapActivityModel:GetPropertyNum(type)
  if type == "huntMap1_bomb" then
    return 1
  end
  return self.m_propertyData[type] or 0
end

function HuntMapActivityModel:CanAddScore()
  return self:GetState() == ActivityState.Started
end

function HuntMapActivityModel:AcquireActivityToken(num)
  self:AddPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType, num, "normal")
end

function HuntMapActivityModel:ConsumeActivityToken(num)
  local pp = {
    {
      [PROPERTY_TYPE] = self.m_activityDefinition.ActivityTokenPropertyType,
      [PROPERTY_COUNT] = num
    }
  }
  if self:HasProperty(pp) then
    return self:CostProperty(pp)
  end
  return false
end

function HuntMapActivityModel:GetActivityTokenNumber()
  return self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType)
end

function HuntMapActivityModel:AcquireActivityKey(num)
  self:AddPropertyNum(EPropertyType.HuntMap1Key, num, "free")
end

function HuntMapActivityModel:ConsumeActivityKey(num)
  local pp = {
    {
      [PROPERTY_TYPE] = EPropertyType.HuntMap1Key,
      [PROPERTY_COUNT] = num
    }
  }
  if self:HasProperty(pp) then
    return self:CostProperty(pp)
  end
  return false
end

function HuntMapActivityModel:GetActivityKeyNumber()
  return self:GetPropertyNum(EPropertyType.HuntMap1Key)
end

function HuntMapActivityModel:AddPropertyNum(type, num, biKey)
  if self.m_propertyData[type] == nil then
    self.m_propertyData[type] = 0
  end
  self.m_propertyData[type] = self.m_propertyData[type] + num
  self.event:Call(HuntMapActivityModel.EventKeys.AcquireProperty, {type = type, num = num})
  self:SavePropertyData()
  if type == self.m_activityDefinition.ActivityTokenPropertyType then
    self:CheckEnergyFull()
  end
  if type == self.m_activityDefinition.ActivityTokenPropertyType then
    if biKey == "free" then
      GM.BIManager:LogAcquire(type, num, self.m_activityDefinition.BIAcquireFreeToken, true, EGameMode.HuntMap)
    elseif biKey == "recover" or biKey == "normal" then
    elseif biKey == "gemBuy" then
      GM.BIManager:LogAcquire(type, num, self.m_activityDefinition.BIGemBuyToken, true, EGameMode.HuntMap)
    else
      GM.BIManager:LogAcquire(type, num, biKey, true, EGameMode.HuntMap)
    end
  else
    GM.BIManager:LogAcquire(type, num, self.m_activityDefinition.BITaskProperty, true, EGameMode.HuntMap)
  end
end

function HuntMapActivityModel:HasProperty(listProperty)
  if listProperty == nil then
    return true
  end
  for i, property in ipairs(listProperty) do
    if property[PROPERTY_TYPE] == "huntMap1_bomb" then
    elseif self.m_propertyData[property[PROPERTY_TYPE]] == nil or self.m_propertyData[property[PROPERTY_TYPE]] < property[PROPERTY_COUNT] then
      return false
    end
  end
  return true
end

function HuntMapActivityModel:CostProperty(listProperty)
  for i, property in ipairs(listProperty) do
    if property[PROPERTY_TYPE] == "huntMap1_bomb" then
    elseif self.m_propertyData[property[PROPERTY_TYPE]] == nil or self.m_propertyData[property[PROPERTY_TYPE]] < property[PROPERTY_COUNT] then
      Log.Error("\233\129\147\229\133\183\230\182\136\232\128\151\233\148\153\232\175\175")
      return false
    end
    self.m_propertyData[property[PROPERTY_TYPE]] = (self.m_propertyData[property[PROPERTY_TYPE]] or 0) - property[PROPERTY_COUNT]
    if property[PROPERTY_TYPE] == self.m_activityDefinition.ActivityTokenPropertyType then
      self:CheckRecoverEnergyStart()
    end
  end
  self.event:Call(HuntMapActivityModel.EventKeys.ConsumeProperty, listProperty)
  self:SavePropertyData()
  return true
end

function HuntMapActivityModel:GetTempProgressScore()
  return self.m_tempProgressScore
end

function HuntMapActivityModel:ClearTempProgressScore()
  self.m_tempProgressScore = nil
end

function HuntMapActivityModel:SavePropertyData()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.MapPropertyData, "value", json.encode(self.m_propertyData))
end

function HuntMapActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function HuntMapActivityModel:GetDefinition()
  return self.m_activityDefinition
end

function HuntMapActivityModel:SetPopEndWindow()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.PopEndWindow, "value", "1")
end

function HuntMapActivityModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.PopEndWindow, "value") ~= "1"
end

function HuntMapActivityModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.EverFulledKey, "value") or false
end

function HuntMapActivityModel:SetBoardFulled()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.EverFulledKey, "value", true)
end

function HuntMapActivityModel:CanPlayFirstTimeLine()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.IsPlayFirstTimeLine, "value") ~= "1"
end

function HuntMapActivityModel:SetPlayFirstTimeLine()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.IsPlayFirstTimeLine, "value", "1")
end

function HuntMapActivityModel:CacheItems(cachedItemCodes, type)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes, type)
end

function HuntMapActivityModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function HuntMapActivityModel:GetMergeLength()
  return #self.arrMergeLine
end

function HuntMapActivityModel:GetItemTypeByIndex(index)
  return self.arrMergeLine[index]
end

function HuntMapActivityModel:SetLevel(level)
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.CurrentMergeLevel, "value", level)
  self:LogActivity(EBIType.ActivityRankUp, level, self:GetType() .. "_merge")
end

function HuntMapActivityModel:GetLevel()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.CurrentMergeLevel, "value") or 0
end

function HuntMapActivityModel:UpdateLevel(itemCode)
  local lvl = self:GetLevelByItemCode(itemCode)
  local curLvl = self:GetLevel()
  if lvl > curLvl then
    self:SetLevel(lvl)
    return true
  end
  return false
end

function HuntMapActivityModel:InitUpdateLevel()
  if self.m_boardModel == nil then
    return
  end
  local curLvl = self:GetLevel()
  local lvl = 0
  local tempLvl = 0
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

function HuntMapActivityModel:GetLevelByItemCode(itemCode)
  for i, v in ipairs(self.arrMergeLine) do
    if v == itemCode then
      return i
    end
  end
  return 0
end

function HuntMapActivityModel:GetItemCodeByLevel(lvl)
  return self.arrMergeLine[lvl]
end

function HuntMapActivityModel:IsFinishMapTask()
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

function HuntMapActivityModel:IsMaxLevel()
  local curLevel = self:GetLevel()
  local maxLevel = self:GetMergeLength()
  return curLevel == maxLevel
end

function HuntMapActivityModel:GetEndRewards()
  if not Table.IsEmpty(self.m_endRewards) then
    return self.m_endRewards
  end
  local rewards = {}
  if self.m_boardModel == nil then
    return self.m_taskModel:GetEndRecoverRewards()
  end
  
  local function _MergeRewards(to, from)
    if not Table.IsEmpty(from) then
      for _, v in pairs(from) do
        if v[PROPERTY_TYPE] ~= HuntActivityModel.MineScoreType and not StringUtil.StartWith(v[PROPERTY_TYPE], "hunt") then
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
      local itemExtraSpread = item:GetComponent(ItemExtraSpread)
      if itemExtraSpread then
        local arrRwds = itemExtraSpread:GetNotSpreadRewards()
        _MergeRewards(rewards, arrRwds)
      end
      if item:GetComponent(ItemWheel) then
        _MergeRewards(rewards, {
          {
            [PROPERTY_TYPE] = EPropertyType.Energy,
            [PROPERTY_COUNT] = 20
          }
        })
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
      if GM.WheelItemModel:IsWheelItem(itemConfig.Mode) then
        _MergeRewards(rewards, {
          {
            [PROPERTY_TYPE] = EPropertyType.Energy,
            [PROPERTY_COUNT] = 20
          }
        })
      end
    end
  end
  if self.m_boardModel ~= nil and self.m_boardModel.GetBookEndRewards then
    local bookEndRewards, bookRecoverStruct = self.m_boardModel:GetBookEndRewards()
    if not Table.IsEmpty(bookEndRewards) then
      _MergeRewards(rewards, bookEndRewards)
    end
  end
  _MergeRewards(rewards, self.m_taskModel:GetEndRecoverRewards())
  self.m_endRewards = RewardApi.FilterInvalidReward(rewards)
  return self.m_endRewards
end

function HuntMapActivityModel:GetEvent()
  return self.event
end

function HuntMapActivityModel:ExchangeReward()
  if self.m_expireReward ~= nil then
    return
  end
  local maxnum = 100
  local cnt = self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType)
  local rewards = {
    {
      [PROPERTY_TYPE] = EPropertyType.Energy,
      [PROPERTY_COUNT] = math.min(maxnum, cnt)
    }
  }
  if cnt == 0 then
    rewards[1][PROPERTY_COUNT] = 0
  end
  self.m_propertyData[self.m_activityDefinition.ActivityTokenPropertyType] = 0
  self:SavePropertyData()
  self.m_expireReward = rewards
  self:SaveExpireReward()
  return rewards
end

function HuntMapActivityModel:SaveExpireReward()
  local jsonData = ""
  if self.m_expireReward ~= nil then
    jsonData = json.encode(self.m_expireReward)
    self.m_dbTable:Set(HuntMapActivityModel.DBKeys.ExpriedReward, "value", jsonData)
  else
    self.m_dbTable:Remove(HuntMapActivityModel.DBKeys.ExpriedReward)
  end
end

function HuntMapActivityModel:GetExpiredReward()
  return self.m_expireReward
end

function HuntMapActivityModel:IsActivityProperty(type)
  return self.m_activityProperty[type] == true
end

function HuntMapActivityModel:OnClearMapData()
  self.m_mapModel:ClearMapData()
  self.m_propertyData = {}
  self.m_propertyData[self.m_activityDefinition.ActivityTokenPropertyType] = 100
  self:SavePropertyData()
  self.m_taskModel:ClearAllTaskCache()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.IsPlayFirstTimeLine, "value", "0")
  if self.m_timeLineModel ~= nil then
    self.m_timeLineModel:ClearTimeline()
  end
end

function HuntMapActivityModel:OnTestSetMissingStarNum()
  if self.m_taskModel:GetMainTaskConfig() ~= nil then
    return
  end
  local mainTargetConfig = self.m_taskModel:GetMainTargetConfig()
  self.m_propertyData[mainTargetConfig.content[PROPERTY_TYPE]] = mainTargetConfig.content[PROPERTY_COUNT] - 1
  self:SavePropertyData()
end

function HuntMapActivityModel:GetMapEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.HuntMap,
    entryPrefabName = self.m_activityDefinition.MapEntryPrefabName,
    hudKey = self.m_activityDefinition.EntryButtonKey,
    checkFun = function()
      return self:GetState() == ActivityState.Started or self:GetState() == ActivityState.Preparing
    end
  }
end

function HuntMapActivityModel:GetBoardEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.HuntMap,
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function HuntMapActivityModel:GetMapModel()
  return self.m_mapModel
end

function HuntMapActivityModel:GetTaskModel()
  return self.m_taskModel
end

function HuntMapActivityModel:GetBoardModel()
  return self.m_boardModel
end

function HuntMapActivityModel:GetTimelineModel()
  return self.m_timeLineModel
end

function HuntMapActivityModel:SetPlayFirstShowBubble(bFlag)
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.CanPlayFirstShowBubble, "value", bFlag)
end

function HuntMapActivityModel:CanPlayFirstShowBubble()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.CanPlayFirstShowBubble, "value") or false
end

function HuntMapActivityModel:GetTimelineStartPos()
  return self.m_timeLineModel:GetStartTimelinePos()
end

function HuntMapActivityModel:HasTimeline()
  return self.m_activityDefinition.TimeLineConfigName ~= nil
end

function HuntMapActivityModel:GetHuntBookConfig()
  return self.m_bookConfig
end

function HuntMapActivityModel:GetActivityDataTable()
  return self.m_dbTable
end

function HuntMapActivityModel:HasCachePd()
  return self.m_pdItemType ~= nil
end

function HuntMapActivityModel:GetCachePdSpreadCode(levelSpan)
  local count = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.GenerateRoundValidCountKey, "value") or 0
  local originCode, itemConfig
  local realLevelSpan = 0
  if count < self.m_fixedSpreadCount then
    count = count + 1
    self.m_dbTable:Set(HuntMapActivityModel.DBKeys.GenerateRoundValidCountKey, "value", count)
    originCode = self:GetItemCodeByLevel(1)
  else
    originCode = GM.ItemFixedSpreadModel:GenerateItemCode(self.m_pdItemType)
  end
  local code = originCode
  for i = 1, levelSpan do
    itemConfig = GM.ItemDataModel:IsItemExist(code) and GM.ItemDataModel:GetModelConfig(code)
    if not (itemConfig and itemConfig.MergedType) then
      break
    end
    code = itemConfig.MergedType
    realLevelSpan = i
  end
  self:ConsumeActivityToken(2 ^ realLevelSpan, self.m_pdItemType)
  return code, originCode, realLevelSpan
end

function HuntMapActivityModel:GetCurrentPhaseMaxLevel()
  return nil
end

function HuntMapActivityModel:_OnOpenView(msg)
  local name = msg and msg.name
  if name ~= self.m_activityDefinition.BoardWindowPrefabName then
    return
  end
  self:_TryShowItemDeleteButton()
end

function HuntMapActivityModel:_TryShowItemDeleteButton()
  if self:IsItemDeleteTutorialShowed() then
    return
  end
  local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.BoardWindowPrefabName)
  if window ~= nil and not GM.UIManager:IsEventLock() and not GM.TutorialModel:HasAnyStrongTutorialOngoing() and self:GetBoardModel():IsBoardFull() and not self:_CheckCanMergeItem() and self:_GetItemToSell() ~= nil then
    self:SetItemDeleteTutorialShowed(true)
  end
end

function HuntMapActivityModel:_CheckCanMergeItem()
  local prompt = BoardPromptHuntMapMergeItems.Create()
  return prompt:GetPromptItemModels(self:GetBoardModel()) ~= nil
end

function HuntMapActivityModel:_GetItemToSell()
  local boardItems = self:GetBoardModel():FilterItems(function(itemModel)
    return not self:GetBoardModel():CanItemSell(itemModel) or StringUtil.StartWith(itemModel:GetCode(), "huntMap") or StringUtil.StartWith(itemModel:GetCode(), "cw#huntMap")
  end)
  if Table.IsEmpty(boardItems) then
    return
  end
  local minLevelItem, level, itemType
  local minLevel = 10000
  for _, itemModel in ipairs(boardItems) do
    itemType = itemModel:GetType()
    if itemType == ItemType.Cobweb then
      itemType = itemModel:GetComponent(ItemCobweb):GetInnerItemCode()
    end
    level = GM.ItemDataModel:GetChainLevel(itemType)
    if minLevel > level then
      minLevelItem = itemModel
      minLevel = level
    end
  end
  return minLevelItem
end

function HuntMapActivityModel:SetItemDeleteTutorialShowed(bShowed)
  return self.m_dbTable:Set(HuntMapActivityModel.DBKeys.ItemDeleteTutorialShowed, "value", bShowed and 1 or 0)
end

function HuntMapActivityModel:IsItemDeleteTutorialShowed()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.ItemDeleteTutorialShowed, "value") == 1
end

function HuntMapActivityModel:GetBoardInitDepth()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.BoardInitDepth, "value") or 0
end

function HuntMapActivityModel:SetBoardInitDepth(y)
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.BoardInitDepth, "value", y)
end

function HuntMapActivityModel:TryOnLackHuntMapEnergy()
  if self:IsActivityOpen() then
    return GM.BundleManager:TryTriggerActivityBundle(EBundleTriggerType.HuntMapLackEnergy)
  end
  return false
end

function HuntMapActivityModel:GetAllStateChangedEvent()
  return {
    self.m_activityDefinition.StateChangedEvent
  }
end

function HuntMapActivityModel:GetInitBoardInfo()
  local horizontalTiles = self.m_activityDefinition.HorizontalTiles or HuntMapActivityBoardModel.HorizontalTiles
  local verticalTiles = self.m_activityDefinition.VerticalTiles or HuntMapActivityBoardModel.VerticalTiles
  return horizontalTiles, verticalTiles, self:GetInitCodeMap()
end

function HuntMapActivityModel:GetInitCodeMap(horizontalTiles, verticalTiles, boardName)
  local cloud = self:GetGeneralConfig(HuntActivityModel.HuntCloud)
  local boardName = boardName or self:GetGeneralConfig(HuntActivityModel.HuntCobweb)
  local openMapReward = self:GetGeneralConfig(HuntActivityModel.HuntBoardReward)
  local transformLayer = self:GetGeneralConfig(HuntActivityModel.HuntTransform)
  local skipBoard = StringUtil.IsNilOrEmpty(boardName)
  local skipCloud = StringUtil.IsNilOrEmpty(cloud)
  local skipTransform = StringUtil.IsNilOrEmpty(transformLayer)
  local skipOpenMapReward = StringUtil.IsNilOrEmpty(openMapReward)
  if skipBoard and skipCloud and skipTransform and skipOpenMapReward then
    return
  end
  local fileConfig = require("Data.Config.HuntActivityBoardConfig")
  local cloudCfg = not skipCloud and fileConfig.cloud[cloud] or nil
  local transformLayerConfig = not skipTransform and fileConfig.transform[transformLayer] or nil
  if not skipOpenMapReward and (not fileConfig.boardReward or not fileConfig.boardReward[openMapReward]) then
    Log.Error("\229\176\143\230\163\139\231\155\152\229\140\133\229\134\133\230\156\170\233\133\141\231\189\174\229\175\185\229\186\148\231\154\132\229\188\128\229\155\190\229\165\150\229\138\177: " .. self.m_type)
  end
  local openMapRewardCfg = not skipOpenMapReward and fileConfig.boardReward and fileConfig.boardReward[openMapReward] or nil
  if skipBoard then
    return nil, cloudCfg, transformLayerConfig, openMapRewardCfg
  end
  horizontalTiles = horizontalTiles or self.m_activityDefinition.HorizontalTiles or HuntMapActivityBoardModel.HorizontalTiles
  verticalTiles = verticalTiles or self.m_activityDefinition.VerticalTiles or HuntMapActivityBoardModel.VerticalTiles
  local defaultCfgName = "default" .. horizontalTiles .. "_" .. verticalTiles
  local codeMap = fileConfig[boardName] or fileConfig[self:GetType()] or fileConfig[defaultCfgName]
  if Table.IsEmpty(codeMap) then
    Log.Error("\229\176\143\230\163\139\231\155\152\230\180\187\229\138\168" .. self:GetType() .. "\231\188\186\229\176\145\230\163\139\231\155\152\233\133\141\231\189\174")
    return nil, cloudCfg, transformLayerConfig, openMapRewardCfg
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
  for y, line in pairs(codeMap) do
    for x, code in pairs(line) do
      codeMap[y][x] = StringUtil.Replace(code, ItemCodePrefix.HuntX, self:GetType() .. "_")
    end
  end
  return codeMap, cloudCfg, transformLayerConfig, openMapRewardCfg
end

function HuntMapActivityModel:CanShowRedPoint()
  return self:GetPropertyNum(self.m_activityDefinition.ActivityTokenPropertyType) > 100
end

function HuntMapActivityModel:HasVipTask()
  return not StringUtil.IsNilOrEmpty(self.m_price)
end

function HuntMapActivityModel:HasTicket()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.TicketKey, "value") == 1
end

function HuntMapActivityModel:GetTicektIapType()
  return self.m_price
end

function HuntMapActivityModel:BuyTicket()
  if self:HasTicket() then
    self:_OnBuyTicketSuccess()
    return
  end
  
  local function purchaseCallback()
    self:_OnBuyTicketSuccess()
  end
  
  GM.InAppPurchaseModel:StartPurchase(self:GetTicektIapType(), purchaseCallback, EBIType.ShopBuy)
end

function HuntMapActivityModel:_OnBuyTicketSuccess()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.TicketKey, "value", 1)
  EventDispatcher.DispatchEvent(EEventType.HuntStreakBuyTicketSuccess)
end

function HuntMapActivityModel:RestoreIapRewards(iapType, bIsUserTriggered)
  if iapType == self.m_price and self:IsActivityOpen() then
    self:_OnBuyTicketSuccess()
    return true
  end
  return false
end

function HuntMapActivityModel.IsVIPTicket(propertyType)
  for _, activityDefinition in pairs(HuntMapActivityDefinition) do
    if propertyType == activityDefinition.TicketPropertyType then
      return true
    end
  end
  return false
end

function HuntMapActivityModel:TryAcquireVIPTicket()
  if self:GetState() == ActivityState.Released or self:HasTicket() then
    return
  end
  if self:IsActivityOpen() then
    self:_OnBuyTicketSuccess()
    return true
  end
  return false
end

function HuntMapActivityModel:SetLastStreakOpenDay()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.LastStreakOpenDay, DB_VALUE_KEY, GM.GameModel:GetServerDay())
end

function HuntMapActivityModel:GetLastStreakOpenDay()
  return tonumber(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.LastStreakOpenDay, DB_VALUE_KEY)) or 0
end

function HuntMapActivityModel:CanShowBigTreasure()
  return (tonumber(self:GetGeneralConfig("showTreasure") or "0") or 0) == 1
end

function HuntMapActivityModel:IsMapQuicklyLocateFuncOpen()
  return (tonumber(self:GetGeneralConfig("mapQuicklyLocate") or "0") or 0) == 1
end

function HuntMapActivityModel:HasDashRewards()
  return (tonumber(self:GetGeneralConfig("mapRewards") or "0") or 0) == 1
end

function HuntMapActivityModel:HasCircleDigRewards()
  return not Table.IsEmpty(self.m_digCircleReward)
end

function HuntMapActivityModel:GetNormalDigRewardConfig()
  return self.m_digReward
end

function HuntMapActivityModel:GetCircleDigRewardConfig()
  return self.m_digCircleReward
end

function HuntMapActivityModel:GetDigNormalRewardNum()
  return self.m_digReward and #self.m_digReward or 0
end

function HuntMapActivityModel:HasFinishAllNormalDigRewards()
  return self:GetProgressLevelByScore(self:GetDigScore()) > self:GetDigNormalRewardNum()
end

function HuntMapActivityModel:AcquireDigScore(score)
  local curScore = self:GetDigScore()
  local result = {}
  local oldLevel, bIsOldFinish = self:GetProgressLevelByScore(curScore)
  local oldScore = curScore
  curScore = curScore + score
  local newLevel, bIsFinish = self:GetProgressLevelByScore(curScore)
  if bIsOldFinish == false and bIsFinish == true then
  else
    newLevel = newLevel - 1
  end
  local bLock = false
  if oldLevel <= newLevel then
    for i = oldLevel, newLevel do
      local config = self:GetProgressConfigByLevel(i)
      if config ~= nil then
        bLock = true
        RewardApi.MergeRewards(result, config.rewards)
      end
      self:LogActivity(EBIType.ActivityRankUp, i, self.m_type .. "_progress")
    end
  end
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.DashScore, "value", self:GetDigScore() + score)
  if not Table.IsEmpty(result) then
    RewardApi.AcquireRewardsLogic(result, EPropertySource.Give, self.m_activityDefinition.BIDashReward, CacheItemType.Stack, nil, nil, EGameMode.HuntMap)
  end
  if bLock then
    local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if window then
      window:_SetEventLock(true)
      self.m_digRewardAniState = true
    end
  end
end

function HuntMapActivityModel:GetDigScore()
  return self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.DashScore, "value") or 0
end

function HuntMapActivityModel:GetDigRewardConfig()
  if not self:HasCircleDigRewards() then
    return self.m_digReward
  else
    local level = self:GetProgressLevelByScore(self:GetDigScore())
    if level <= self:GetDigNormalRewardNum() then
      return self.m_digReward
    end
    local digReward = Table.DeepCopy(self.m_digReward or {})
    local curScore = self:GetDigScore()
    local curLevel = self:GetProgressLevelByScore(curScore)
    local remainingLevel = curLevel - self:GetDigNormalRewardNum()
    local circleNum = self.m_digCircleReward and #self.m_digCircleReward or 0
    local scoreSum = self.m_digReward[#self.m_digReward].score
    for i = 1, remainingLevel + #self.m_digCircleReward do
      local index = (i - 1) % circleNum + 1
      local config = Table.DeepCopy(self.m_digCircleReward[index])
      config.level = self:GetDigNormalRewardNum() + i
      config.score = scoreSum + config.score
      scoreSum = config.score
      table.insert(digReward, config)
    end
    return digReward
  end
end

function HuntMapActivityModel:GetProgressLevelByScore(score)
  for _, digReward in ipairs(self.m_digReward) do
    if score < digReward.score then
      return digReward.level, false
    end
  end
  if not self:HasCircleDigRewards() then
    return self.m_digReward[#self.m_digReward].level, true
  else
    local maxLevel = self:GetDigNormalRewardNum()
    local totalCircleScore = 0
    for _, circleReward in ipairs(self.m_digCircleReward) do
      totalCircleScore = totalCircleScore + circleReward.score
    end
    if totalCircleScore == 0 then
      return maxLevel, true
    end
    local lastNormalRewardConfig = self.m_digReward[maxLevel]
    local remainingScore = score - lastNormalRewardConfig.score
    local completeCycles = math.floor(remainingScore / totalCircleScore)
    local currentCycleRemaining = remainingScore % totalCircleScore
    local currentCycleLevel = 0
    local accumulatedScore = 0
    for i, circleReward in ipairs(self.m_digCircleReward) do
      accumulatedScore = accumulatedScore + circleReward.score
      if currentCycleRemaining < accumulatedScore then
        currentCycleLevel = i
        break
      end
    end
    local totalLevel = maxLevel + completeCycles * #self.m_digCircleReward + currentCycleLevel
    return totalLevel, false
  end
end

function HuntMapActivityModel:GetProgressConfigByLevel(level)
  for _, digReward in ipairs(self.m_digReward) do
    if digReward.level == level then
      return digReward
    end
  end
  if self:HasCircleDigRewards() then
    local maxNormalLevel = self:GetDigNormalRewardNum()
    if level <= maxNormalLevel then
      return nil
    end
    local circleRewards = self.m_digCircleReward
    local circleCount = #circleRewards
    local levelOffset = level - maxNormalLevel
    local circleIndex1 = (levelOffset - 1) % circleCount + 1
    local circleIndex2 = levelOffset % circleCount
    local scoreSum = self:GetNormalDigRewardConfig()[maxNormalLevel].score
    local circleTotalScore = 0
    local circleOffsetScore = 0
    for i, cfg in ipairs(circleRewards) do
      circleTotalScore = circleTotalScore + cfg.score
      if i <= circleIndex2 then
        circleOffsetScore = circleOffsetScore + cfg.score
      end
    end
    local circleNum = math.floor(levelOffset / circleCount)
    circleTotalScore = circleTotalScore * circleNum
    scoreSum = scoreSum + circleTotalScore + circleOffsetScore
    if 1 <= circleIndex1 and circleCount >= circleIndex1 then
      local config = Table.DeepCopy(circleRewards[circleIndex1], true)
      config.level = level
      config.score = scoreSum
      return config
    end
  end
  return nil
end

function HuntMapActivityModel:GetOrderRewardScore(orderScore, orderId, order)
  local score = self:GetOriginalConfigScore(orderScore, orderId)
  local huntMapBuffModel = GM.ActivityManager:GetModel(ActivityType.HuntMapBuff)
  if huntMapBuffModel and huntMapBuffModel:IsBuffOrder(order) then
    score = score * 2
  end
  return score
end

function HuntMapActivityModel:GetOriginalConfigScore(orderScore, orderId)
  return self.m_tokenHelper:GetOrderRewardScore(orderScore, orderId)
end
