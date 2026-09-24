MainOrderModel = setmetatable({}, BaseOrderModel)
MainOrderModel.__index = MainOrderModel
MainOrderModel.MaxAvatarId = 8
local OrderLaneDBColumnKey = {
  Polarity = "polarity",
  NextRefreshTime = "insureNextRefreshTime"
}
local DBKeyLastLanePrefix = "lastid_"
local actDefsForClearOrder

function MainOrderModel.Create(dbFinFixTable, dbItemRecentTable, dbTable, dbOrderLaneMetaTable, boardModel)
  local mainOrderModel = setmetatable({}, MainOrderModel)
  mainOrderModel:Init(dbFinFixTable, dbItemRecentTable, dbTable, dbOrderLaneMetaTable, boardModel)
  return mainOrderModel
end

function MainOrderModel:Init(dbFinFixTable, dbItemRecentTable, dbTable, dbOrderLaneMetaTable, boardModel)
  BaseOrderModel.Init(self, boardModel, dbFinFixTable)
  self.m_dbItemRecentTable = dbItemRecentTable
  self.m_dbTable = dbTable
  self.m_dbOrderLaneMeta = dbOrderLaneMetaTable
  self.m_orderIdGenerator = DBIdGenerator.Create()
  self.m_laneQueque = {}
  self.m_circleQueue = {}
  self.m_nMaxLaneNum = 0
  self.m_nMaxRecallLaneNum = 0
  self.m_orderItemConfig = {}
end

function MainOrderModel:OnSyncDataFinished()
  self.m_bSyncDataFinished = true
  self:_CheckAvatarUnlock()
  self:_LoadFixedOrderConfig()
  BaseOrderModel.OnSyncDataFinished(self)
  self.m_mapItemRencent = {}
  self.m_mapFreeItemRecent = {}
  for item, data in pairs(self.m_dbItemRecentTable:GetValues()) do
    if StringUtil.EndWith(item, "_free") then
      self.m_mapFreeItemRecent[item] = tonumber(data.value)
      if self.m_mapFreeItemRecent[item] < 1 then
        self.m_mapFreeItemRecent[item] = nil
        self.m_dbItemRecentTable:Remove(item)
      end
    else
      self.m_mapItemRencent[item] = tonumber(data.value)
      if self.m_mapItemRencent[item] < 1 then
        self.m_mapItemRencent[item] = nil
        self.m_dbItemRecentTable:Remove(item)
      end
    end
  end
  if GM.ConfigModel:GetNewUserOrderChangeLevel() == 0 then
    local id = "newbie_60_1_9"
    if not self.m_orders[id] and not self.m_finFixs[id] and self:IsNewbieOrderClear() then
      self:_DBAddFinishedFix(id)
    end
  end
end

function MainOrderModel:UpdatePerSecond()
  BaseOrderModel.UpdatePerSecond(self)
  self:_UpdateTimeLimitOrder()
  if self.m_bCheckResourcesFinished then
    local hasRefresh = self:_TryCreateCircleOrder()
    if hasRefresh then
      self:_AfterFillOrders()
    end
  end
end

function MainOrderModel:_UpdateTimeLimitOrder()
  if not self.m_bCheckResourcesFinished then
    return
  end
  if not Table.IsEmpty(self.m_orders) then
    local keys = Table.GetKeys(self.m_orders) or {}
    local curTime = GM.GameModel:GetServerTime()
    for _, key in pairs(keys) do
      local order = self.m_orders[key]
      if order and order.GetEndTime and not order:IsCountDownPaused() and order:GetEndTime() > 0 and curTime >= order:GetEndTime() then
        self:OnOrderExpired(order)
      end
    end
  end
end

function MainOrderModel:_LoadItemScoreData()
  return GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemScore, true)
end

function MainOrderModel:_LoadItemChangedScoreData()
  return GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemChangeScore, true)
end

function MainOrderModel:LoadServerConfig()
  local bLaneChange = false
  self.m_laneMd5, self.m_mapLaneConfig, self.m_nMaxLaneNum, bLaneChange = self:_UpdateLaneConfig(ServerConfigKey.OrderLane, self.m_laneMd5, self.m_mapLaneConfig, self.m_nMaxLaneNum)
  self.m_bLaneOpen = self.m_nMaxLaneNum > 0
  local bRecallChange = false
  self.m_recallMD5, self.m_mapRecallLaneConfig, self.m_nMaxRecallLaneNum, bRecallChange = self:_UpdateLaneConfig(ServerConfigKey.OrderRecall, self.m_recallMD5, self.m_mapRecallLaneConfig, self.m_nMaxRecallLaneNum)
  self:_UpdateOrderItemConfig()
  if self.m_bLateInit then
    local ext
    local bNeedTryCreate = false
    if bLaneChange and self.m_bLaneOpen then
      self:_LaneQueueByCar()
      bNeedTryCreate = true
    end
    if bRecallChange and 0 < self.m_nMaxRecallLaneNum then
      self:_RefreshRecallQueue()
      bNeedTryCreate = true
    end
    if bNeedTryCreate then
      self:_OnLevelUp()
    end
    self:_TryLogAllOrders()
  end
end

function MainOrderModel:_UpdateLaneConfig(key, md5, map, maxNum)
  local configMD5 = GM.ConfigModel:GetServerConfigMD5(key)
  if md5 == configMD5 then
    return configMD5, map, maxNum, false
  end
  local list = GM.ConfigModel:GetServerConfig(key)
  if key == ServerConfigKey.OrderLane then
    self.m_mapLaneIDConfig = {}
    self.m_mapExtraCarCount = {}
    self.m_carCircleState = {}
    self.m_mapCarCount = {}
  end
  if Table.IsEmpty(list) then
    return configMD5, {}, 0, true
  end
  maxNum = list[1].maxLaneNum
  map = {}
  local allCircle = true
  local carCount = 0
  for i, v in ipairs(list) do
    local config = Table.ShallowCopy(v)
    config.avgScore = (config.minScore + config.maxScore) / 2
    config.minScore = config.minScore - config.scoreMargin
    config.maxScore = config.maxScore + config.scoreMargin
    map[config.type] = config
    Log.Assert(config.maxLaneNum == maxNum, "\232\189\166\233\129\147\233\133\141\231\189\174\228\184\141\229\144\136\230\179\149, \230\156\137\232\189\166\233\129\147maxLaneNum\233\133\141\231\189\174\228\184\141\228\184\128\232\135\180")
    if key == ServerConfigKey.OrderLane then
      self.m_mapLaneIDConfig[v.id] = config
      if config.car then
        carCount = carCount + 1
        self.m_carCircleState[config.car] = config.circle
        if config.circle == 1 then
          self.m_mapExtraCarCount[config.car] = (self.m_mapExtraCarCount[config.car] or 0) + 1
        else
          allCircle = false
        end
        self.m_mapCarCount[config.car] = (self.m_mapCarCount[config.car] or 0) + 1
      end
    end
  end
  if key == ServerConfigKey.OrderLane then
    if GameConfig.IsTestMode() then
      Log.Assert(carCount == #list, "\232\189\166\233\129\147\233\133\141\231\189\174\228\184\141\229\144\136\230\179\149, \230\156\137\232\189\166\233\129\147\230\188\143\233\133\141car", LogTag.ConfigCheck)
      Log.Assert(allCircle == false, "\232\189\166\233\129\147\233\133\141\231\189\174\228\184\141\229\144\136\230\179\149\239\188\140\230\178\161\230\156\137\230\151\160\233\153\144\232\189\166\233\129\147", LogTag.ConfigCheck)
      Log.Assert(#self.m_mapCarCount == 6, "\232\189\166\233\129\147\230\149\176\233\135\143\228\184\141\230\152\1756\239\188\140\229\189\147\229\137\141\230\149\176\233\135\143\239\188\154" .. #self.m_mapCarCount, LogTag.ConfigCheck)
    end
  elseif key == ServerConfigKey.OrderRecall and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ReturningPlayerOrder) then
    Log.Assert(#list == 6, "\229\155\158\229\189\146\232\189\166\233\129\147\230\149\176\233\135\143\228\184\141\230\152\1756\239\188\140\229\189\147\229\137\141\230\149\176\233\135\143\239\188\154" .. #list, LogTag.ConfigCheck)
    self.m_mapRecallCarConfig = {}
    for _, v in ipairs(list) do
      if v.car == nil then
        Log.Error("\229\155\158\229\189\146\230\150\176\232\167\132\229\136\153\229\188\128\229\144\175\239\188\140\232\189\166\233\129\147\232\174\162\229\141\149\233\133\141\231\189\174\231\188\186\229\176\145car\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174")
      else
        Log.Assert(1 <= v.car and v.car <= 6 and self.m_mapRecallCarConfig[v.car] == nil, "\229\155\158\229\189\146\232\189\166\233\129\147car\233\133\141\231\189\174\233\135\141\229\164\141\239\188\154" .. v.car, LogTag.ConfigCheck)
      end
      self.m_mapRecallCarConfig[v.car] = map[v.type]
    end
    maxNum = 0
  end
  return configMD5, map, maxNum, true
end

function MainOrderModel:LoadFileConfig()
  self.m_avatarConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.OrderAvatar)
  self.m_scoreSeq = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ScoreSequence)
  self.m_seqLen = #self.m_scoreSeq
  local configData = GM.ConfigModel:GetLocalConfig(LocalConfigKey.RandomOrderConfig)
  self.m_randomOrderConfig = RandomOrderConfig.Create(configData)
  configData = GM.ConfigModel:GetLocalConfig(LocalConfigKey.CleanOrderConfig)
  self.m_clearOrderConfig = MainClearOrderConfig.Create(configData)
  self.m_precleanOrderConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.PrecleanOrderConfig)
  self:_UpdateOrderItemCdConfig()
end

function MainOrderModel:_LoadFixedOrderConfig()
  self.m_fixedOrderConfig = {}
  self.m_arrFixedOrderConfigs = {}
  local fixedOrderConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.OrderFixed, true)
  for index, data in ipairs(fixedOrderConfigs) do
    local config = FixedOrderConfig.Create(data)
    self.m_fixedOrderConfig[config.id] = config
    self.m_arrFixedOrderConfigs[index] = config
  end
  self.m_fixedOrderChainMap = {}
  for id, config in pairs(self.m_fixedOrderConfig) do
    local chainId = config.chainId
    if chainId then
      if not self.m_fixedOrderChainMap[chainId] then
        self.m_fixedOrderChainMap[chainId] = {}
      end
      self.m_fixedOrderChainMap[chainId][#self.m_fixedOrderChainMap[chainId] + 1] = id
    else
      local arrRequirements = config.requirements
      local needChain, pdChain
      for _, requirement in ipairs(arrRequirements) do
        needChain = GM.ItemDataModel:GetChainId(requirement)
        if needChain then
          pdChain = GM.ItemDataModel:GetChainGenerator(needChain)
          if pdChain then
            if not self.m_fixedOrderChainMap[pdChain] then
              self.m_fixedOrderChainMap[pdChain] = {id}
            elseif not Table.ListContain(self.m_fixedOrderChainMap[pdChain], id) then
              self.m_fixedOrderChainMap[pdChain][#self.m_fixedOrderChainMap[pdChain] + 1] = id
            end
          end
        end
      end
    end
  end
end

function MainOrderModel:GetRandomOrderConfig()
  return self.m_randomOrderConfig
end

function MainOrderModel:LateInit()
  BaseOrderModel.LateInit(self)
  EventDispatcher.AddListener(EEventType.ItemMerged, self, self._OnNewItemCreate)
  EventDispatcher.AddListener(EEventType.PopCachedItem, self, self._OnNewItemCreate)
  EventDispatcher.AddListener(EEventType.ItemSpread, self, self._OnNewItemCreate)
  EventDispatcher.AddListener(EEventType.BubbleBroken, self, self._OnNewItemCreate)
  EventDispatcher.AddListener(EEventType.LevelUp, self, self._OnLevelUp)
  EventDispatcher.AddListener(EEventType.OrderStateChanged, self, self._OnOrderStateChanged)
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self._OnLoginFinished)
  EventDispatcher.AddListener(EEventType.ChangeGameMode, self, self._OnGameModeChanged)
  EventDispatcher.AddListener(EEventType.LimiteOrderFinished, self, self._OnLimiteOrderFinished)
  for _, activityDefinition in pairs(DashActivityDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
    EventDispatcher.AddListener(activityDefinition.UpgradedEvent, self, self._UpdateMainOrderStatus)
  end
  for _, activityDefinition in pairs(DigActivityDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
    EventDispatcher.AddListener(activityDefinition.DigItemStateChangedEvent, self, self._UpdateMainOrderStatus)
  end
  EventDispatcher.AddListener(EEventType.PoppedCacheAlbumPack, self, self._UpdateMainOrderStatus)
  EventDispatcher.AddListener(EEventType.AlbumKingcardUseSuccess, self, self._UpdateMainOrderStatus)
  EventDispatcher.AddListener(EEventType.AlbumStateChanged, self, self._UpdateMainOrderStatus)
  EventDispatcher.AddListener(EEventType.AlbumBuffStateChanged, self, self._UpdateMainOrderStatus)
  EventDispatcher.AddListener(EEventType.SunflowerOrderStateChanged, self, self._UpdateMainOrderStatus)
  EventDispatcher.AddListener(EEventType.SuperWheelStateChanged, self, self._UpdateMainOrderStatus)
  EventDispatcher.AddListener(EEventType.HuntMapBuffRefreshReward, self, self._UpdateMainOrderStatus)
  for _, activityDefinition in pairs(CoinRaceActivityDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
  end
  for _, activityDefinition in pairs(OrderRankDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
  end
  for _, activityDefinition in pairs(DecorationDefinition) do
    if activityDefinition.IsTimeLimitExtraSeries then
      EventDispatcher.AddListener(activityDefinition.ScoreChangedEvent, self, self._UpdateMainOrderStatus)
    end
  end
  for _, activityDefinition in pairs(PhotoActivityDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
    EventDispatcher.AddListener(activityDefinition.UpdateEntryEvent, self, self._UpdateMainOrderStatus)
  end
  for _, activityDefinition in pairs(RoadRankDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
  end
  for _, activityDefinition in pairs(DredgeActivityDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self._UpdateMainOrderStatus)
  end
  EventDispatcher.AddListener(EEventType.SunshineOrderLogicStart, self, self.TryCreateSunshineOrder)
  EventDispatcher.AddListener(EEventType.SunshineTryCreateOrders, self, self.TryFillSunshineOrder)
end

function MainOrderModel:OnCheckResourcesFinished()
  self.m_bCheckResourcesFinished = true
  self:_UpdateTimeLimitOrder()
  local refreshQueue = true
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ReturningPlayerOrder) or self:IsRecallOrderActive() then
    refreshQueue = self:_DeleteOrderByRecall()
  end
  if refreshQueue and self.m_bLaneOpen then
    self:_LaneQueueByCar()
  end
  self:_OnLevelUp()
  self.m_bLateInit = true
  self:_TryLogAllOrders()
  local model = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  if model then
    model:TryStartMute()
  end
end

function MainOrderModel:_OnLoginFinished()
  if self.m_bCheckResourcesFinished then
    self:_TryRemoveClearOrder()
    if GM.SceneManager:GetGameMode() == EGameMode.Main then
      local fillOrder = self:_TryCreateCurtainCallOrder(nil, true)
      if fillOrder then
        self:_AfterFillOrders()
      end
    end
    if GameConfig.IsTestMode() then
      local maxLevel = GM.ConfigModel:GetNewUserOrderMaxLevel()
      local changeLevel = GM.ConfigModel:GetNewUserOrderChangeLevel()
      Log.Assert(changeLevel == 0 and maxLevel == 0 or maxLevel > changeLevel, "\230\150\176\230\137\139\232\174\162\229\141\149\229\136\135\230\141\162\233\133\141\231\189\174\229\188\130\229\184\184max:" .. maxLevel .. ",change:" .. changeLevel)
    end
    if self:IsLaneOpen() and self:_TryCreateLaneOrder() then
      self:_AfterFillOrders()
    end
  end
end

function MainOrderModel:_OnItemUnlocked(...)
  BaseOrderModel._OnItemUnlocked(self, ...)
  self:_OnGameModeChanged()
end

function MainOrderModel:_OnGameModeChanged()
  if GM.SceneManager:GetGameMode() == EGameMode.Main then
    local fillOrder = self:_TryCreateCurtainCallOrder(nil, true)
    if fillOrder then
      self:_AfterFillOrders()
    end
  end
end

function MainOrderModel:_OnLimiteOrderFinished(order)
  if GM.SceneManager:GetGameMode() == EGameMode.Main then
    local fillOrder = self:_TryCreateCurtainCallOrder(order)
    if fillOrder then
      self:_AfterFillOrders()
    end
  end
end

function MainOrderModel:_TryLogAllOrders()
  local day = GM.MiscModel:GetBIOrderReportDayInNumber()
  local curDay = GM.GameModel:GetServerDay()
  if day < curDay then
    GM.BIManager:LogUserAllOrders(self.m_orders)
    GM.MiscModel:SetBIOrderReportDay(curDay)
  end
end

function MainOrderModel:IsRecallOrderActive()
  local needPro = tonumber(GM.ConfigModel:ParseGeneralConf(EGeneralConfType.UserTopLevel) or 0)
  return GM.UserModel:IsReturnUser(needPro ~= 0) and 0 < self.m_nMaxRecallLaneNum
end

function MainOrderModel:_DeleteOrderByRecall()
  if not GM.UserModel:CanGiveRewards() then
    self:_RefreshRecallQueue()
    return true
  end
  local arrDeleteOrderId = {}
  for orderId, order in pairs(self.m_orders) do
    if self:_CanDeletedOrderByRecall(order) then
      arrDeleteOrderId[#arrDeleteOrderId + 1] = orderId
    end
  end
  for _, id in ipairs(arrDeleteOrderId) do
    self:_LogOrderAction(self.m_orders[id], EBIType.OrderDelete)
    self.m_orders[id] = nil
    self:_DBRemoveOrder(id)
  end
  self:_RefreshRecallQueue()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ReturningPlayerOrder) then
    self:_InitReturningOrder()
    return false
  end
  return true
end

function MainOrderModel:_InitReturningOrder()
  self:_LaneQueueByCar()
  local hasFillOrder = false
  local pdMargin = self:GetOrderProducerMargin()
  local scoreMap, countMap = self:_InitBoardItemInfo(pdMargin)
  local day = GM.GameModel:GetServerDay()
  for car, config in ipairs(self.m_mapRecallCarConfig or {}) do
    if (self.m_carHoldMap[car] or 0) < 1 and (not self.m_mapExtraCarCount[car] or self:_CanCreateCurCar(car, self.m_mapExtraCarCount[car], day)) then
      local order, extInfo = ReturningOrderCreator.Create(self, config, scoreMap, countMap, pdMargin)
      if order then
        self.m_carHoldMap[order:GetCar()] = 1
        self.m_orders[order:GetId()] = order
        self:_DBAddOrder(order, nil, nil, extInfo)
        EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order})
        hasFillOrder = true
      end
    end
  end
  if hasFillOrder then
    self:_AfterFillOrders()
  end
end

function MainOrderModel:_InitBoardItemInfo()
  local allItems = GM.MainBoardModel:GetItemManager():GetAllItems()
  local itemScoreMap = {}
  local genList = GM.ItemDataModel:GetUnlockedMainGenerator(self:GetOrderProducerMargin())
  for _, gen in pairs(genList) do
    for item, score in pairs(self:GetItemScoresByGenerator(gen)) do
      itemScoreMap[item] = score
    end
  end
  local countMap = {}
  local scoreMap = {}
  for _, v in pairs(allItems) do
    local code = v:GetCode()
    if itemScoreMap[code] then
      scoreMap[code] = itemScoreMap[code]
      countMap[code] = (countMap[code] or 0) + 1
    end
  end
  for _, v in pairs(self.m_orders) do
    for _, item in pairs(v:GetRequirements()) do
      if countMap[item] then
        ReturningOrderCreator.RemoveOneItemFromInfoMap(scoreMap, countMap, item)
      end
    end
  end
  return scoreMap, countMap
end

function MainOrderModel:_CanDeletedOrderByRecall(order)
  return order:GetType() ~= OrderType.Fixed and order:GetState() ~= OrderState.CanDeliver
end

function MainOrderModel:_OnOrderStateChanged()
  if not self.m_bLateInit then
    return
  end
  self:_OnNewItemCreate()
end

function MainOrderModel:_OnNewItemCreate(msg)
  if self:_TryCreateClearOrder() then
    self:_AfterFillOrders()
    EventDispatcher.DispatchEvent(EEventType.RefreshSpreadView)
  end
end

function MainOrderModel:_UpdateMainOrderStatus()
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
end

function MainOrderModel:Destroy()
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
end

function MainOrderModel:_DBGetOrders()
  local orders = {}
  local orderData = self.m_dbTable:GetValues()
  for id, data in pairs(orderData) do
    if StringUtil.IsNilOrEmpty(data.allRequirements) then
      local requirements = StringUtil.Split(data.requirements, ";")
      if data.type == OrderType.CurtainCall then
        orders[id] = CurtainCallOrder.Create(self.m_boardModel, id, data.createTime, data.endTime, requirements[1])
      else
        local dirty = false
        for i = 1, #requirements do
          local code = ItemUtility.CheckData(requirements[i], EItemUnlockState.Locked)
          if code then
            dirty = true
            requirements[i] = code
          end
        end
        orders[id] = MainOrder.Create(self.m_boardModel, id, requirements, ConfigUtil.GetCurrencyFromArrStr(StringUtil.Split(data.rewards, ";")), data.createScore, data.type, data.avatarId or 1, data.createTime, data.laneName, data.laneId, data.precleanType, data.endTime, data.difficulty)
        if dirty then
          self:_DBAddOrder(orders[id], requirements, true)
        end
      end
    else
      self.m_dbTable:Remove(id)
    end
  end
  return orders
end

function MainOrderModel:TryCreateSunshineOrder()
  if not self:IsLaneOpen() then
    return
  end
  local hasFilledOrder = self:_TryCreateLaneOrder()
  local circleOrderCalls = {}
  for _, order in pairs(self.m_orders) do
    local car = order:GetCar()
    if car ~= nil then
      circleOrderCalls[car] = true
    end
  end
  for car, _ in pairs(self.m_mapExtraCarCount) do
    if not circleOrderCalls[car] then
      local carList = self.m_circleQueue[car]
      local preId
      if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.SunNoSeq) and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderSeq) then
        preId = self:_GetLastFinishedLaneIdByCar(car)
      else
        preId = nil
      end
      local index = self:_GetCarNextIndex(carList, preId)
      local laneConfig = self.m_mapLaneIDConfig[carList[index]]
      local order = LaneOrderCreator.Create(self, laneConfig, self:GetOrderProducerMargin(), OrderType.Lane)
      if order then
        self.m_carHoldMap[order:GetCar()] = 1
        self.m_orders[order:GetId()] = order
        self:_DBAddOrder(order)
        EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order})
        hasFilledOrder = true
      end
    end
  end
  if hasFilledOrder then
    self:_AfterFillOrders()
  end
  local sunModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  sunModel:InitOrderScore()
end

function MainOrderModel:TryFillSunshineOrder()
  if not self:IsLaneOpen() then
    return
  end
  local sunModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  local hasFilledOrder
  local circleOrderCalls = {}
  for _, order in pairs(self.m_orders) do
    local car = order:GetCar()
    if car ~= nil then
      circleOrderCalls[car] = true
    end
  end
  for car, _ in pairs(self.m_mapExtraCarCount) do
    if not circleOrderCalls[car] then
      local carList = self.m_circleQueue[car]
      local preId
      if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderSeq) then
        preId = self:_GetLastFinishedLaneIdByCar(car)
      else
        preId = nil
      end
      local index = self:_GetCarNextIndex(carList, preId)
      local laneConfig = self.m_mapLaneIDConfig[carList[index]]
      local diff = laneConfig.difficulty
      if sunModel and sunModel:GetSunshineScoreBySlot(nil, diff) > 0 then
        local order = LaneOrderCreator.Create(self, laneConfig, self:GetOrderProducerMargin(), OrderType.Lane)
        if order then
          self.m_carHoldMap[order:GetCar()] = 1
          self.m_orders[order:GetId()] = order
          self:_DBAddOrder(order)
          EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order})
          hasFilledOrder = true
        end
      end
    end
  end
  if hasFilledOrder then
    self:_AfterFillOrders()
  end
end

function MainOrderModel:TryFillOrdersManually()
  local hasFilledOrder = false
  hasFilledOrder = self:_TryCreateFixedOrder()
  if self:IsRecallOrderActive() then
    hasFilledOrder = self:_TryCreateRecallOrder() or hasFilledOrder
  elseif self:IsLaneOpen() then
    hasFilledOrder = self:_TryCreateLaneOrder() or hasFilledOrder
  else
    hasFilledOrder = self:_TryCreateRandomOrder() or hasFilledOrder
  end
  hasFilledOrder = self:_TryCreateClearOrder() or hasFilledOrder
  if hasFilledOrder then
    self:_AfterFillOrders()
  end
end

function MainOrderModel:_OnLevelUp()
  self:_CheckAvatarUnlock()
  self:TryFillOrdersManually()
end

function MainOrderModel:_TryCreateClearOrder(order, bOnlyOne, msg)
  if msg and not GM.ItemDataModel:IsItemMaxLevel(msg.New:GetCode()) then
    return
  end
  local itemCount = self.m_boardModel:GetItemsCount(ClearOrderHelper.Filter)
  local requirements = {}
  for _, order in pairs(self.m_orders) do
    for _, v in pairs(order:GetRequirements()) do
      requirements[v] = requirements[v] and requirements[v] + 1 or 1
    end
  end
  for _, order in pairs(GM.ActivityManager:GetAllUnFinishedOrders()) do
    for _, v in pairs(order:GetRequirements()) do
      requirements[v] = requirements[v] and requirements[v] + 1 or 1
    end
  end
  actDefsForClearOrder = actDefsForClearOrder or {
    BingoDefinition,
    NoCDTrainDefinition,
    NoCDBingoDefinition,
    PuzzleBingoDefinition
  }
  for _, def in pairs(actDefsForClearOrder) do
    for activityType, _ in pairs(def) do
      local bingoItemCodes = GM.ActivityManager:GetModel(activityType):GetMapNeedOrderItemCodes()
      if bingoItemCodes then
        for v, _ in pairs(bingoItemCodes) do
          requirements[v] = requirements[v] and requirements[v] + 1 or 1
        end
      end
    end
  end
  local fill, order, tempFill
  for item, count in pairs(itemCount) do
    if requirements[item] then
      count = count - requirements[item]
    end
    if 0 < count then
      tempFill, order = self:_TryCreateClearItemOrder(item, count)
      fill = fill or tempFill
      if bOnlyOne and fill then
        break
      end
    end
  end
  return fill, order
end

function MainOrderModel:_TryCreateClearItemOrder(item, num)
  for _, order in pairs(self.m_orders) do
    if order:GetType() == OrderType.Clear then
      for _, v in pairs(order:GetRequirements()) do
        if v == item then
          return false
        end
      end
    end
  end
  local order = MainClearOrderCreator.Create(self, self.m_clearOrderConfig, item, num)
  if order ~= nil then
    self.m_orders[order:GetId()] = order
    self:_DBAddOrder(order)
    return true
  end
  return false
end

function MainOrderModel:TryCreateLuckyStarOrder(order)
  local fill, luckyStarOrder = self:_TryCreateLuckyStarOrder(order)
  if luckyStarOrder then
    self:_AfterFillOrders()
    return luckyStarOrder
  end
end

function MainOrderModel:_TryCreateLuckyStarOrder(preOrder)
  local bCanCreate, activityType = LuckyStarOrderCreator.CanCreate(self, preOrder)
  if bCanCreate then
    local order = LuckyStarOrderCreator.Create(self, preOrder, activityType)
    if order ~= nil then
      self.m_orders[order:GetId()] = order
      self:_DBAddOrder(order)
      return true, order
    end
  end
  return false
end

function MainOrderModel:_LoadCurtainCallProducerArray()
  local strCurtainCallProducerArray = GM.MiscModel:Get(EMiscKey.CurtainCallProducerArray)
  if StringUtil.IsNilOrEmpty(strCurtainCallProducerArray) then
    self.m_arrHasCurtainCallProducer = {}
  else
    self.m_arrHasCurtainCallProducer = StringUtil.Split(strCurtainCallProducerArray, ";")
  end
end

function MainOrderModel:IsProducerHasCurtainCall(pdChain)
  if not self.m_arrHasCurtainCallProducer then
    self:_LoadCurtainCallProducerArray()
  end
  return Table.ListContain(self.m_arrHasCurtainCallProducer, pdChain)
end

function MainOrderModel:_TryCreateCurtainCallOrder(order, ingorePreOrder)
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.CurtainCallOrder) then
    return false
  end
  if order and order:GetType() == OrderType.CurtainCall then
    return
  end
  local orders, extInfos = CurtainCallOrderCreator.Create(self, self:GetOrderProducerMargin(), order, ingorePreOrder)
  if not Table.IsEmpty(orders) then
    local maxSeries = tonumber(GM.MiscModel:Get(EMiscKey.LastCurtainCallProducerSeries)) or 0
    if not self.m_arrHasCurtainCallProducer then
      self:_LoadCurtainCallProducerArray()
    end
    self.m_arrToShowCurtainOrders = self.m_arrToShowCurtainOrders or {}
    local testStr = ""
    for index, order in ipairs(orders) do
      self.m_orders[order:GetId()] = order
      self:_DBAddOrder(order, nil, nil, extInfos[index])
      order:SetNeedPlayEnterAnimation(true)
      local pdItem = ItemUtility.GetItemCode(order:GetPdChainId(), GM.ItemDataModel:GetChainUnlockedLevel(order:GetPdChainId()))
      maxSeries = math.max(maxSeries, tonumber(GM.ItemDataModel:GetModelConfig(pdItem).series) or 0)
      self.m_arrHasCurtainCallProducer[#self.m_arrHasCurtainCallProducer + 1] = order:GetPdChainId()
      testStr = testStr .. order:GetPdChainId() .. ";"
      self.m_arrToShowCurtainOrders[#self.m_arrToShowCurtainOrders + 1] = order
    end
    Log.Debug(testStr, "[CurtainCall][New]")
    GM.MiscModel:Set(EMiscKey.LastCurtainCallProducerSeries, maxSeries)
    GM.MiscModel:Set(EMiscKey.CurtainCallProducerArray, table.concat(self.m_arrHasCurtainCallProducer, ";"))
    if not self.m_curtainCallOrderMonitor then
      function self.m_curtainCallOrderMonitor()
        if not GM.UIManager:IsEventLock() and GM.UIManager.allWindowClosed and not GM.TutorialModel:HasAnyStrongTutorialOngoing() and GM.SceneManager:GetGameMode() == EGameMode.Main and not LuckyStarModel.HasLuckyStarOrderOnBoard() and not LuckyStarRewardItem.IsPlayingRewardAnimation() then
          GM.UIManager:OpenView(UIPrefabConfigName.CurtainCallOrderWindow, self.m_arrToShowCurtainOrders, true)
          
          self.m_arrToShowCurtainOrders = nil
          EventDispatcher.DispatchEvent(EEventType.CurtainCallOrderShow)
          Scheduler.Unschedule(self.m_curtainCallOrderMonitor, self)
        end
      end
    end
    if order then
      Scheduler.Schedule(self.m_curtainCallOrderMonitor, self, nil, nil, 2)
    else
      Scheduler.Schedule(self.m_curtainCallOrderMonitor, self)
    end
    return true
  end
  return false
end

function MainOrderModel:FinishOrder(order, removedItems, orginBaseRewards)
  self:_UpdateRecentItems(order)
  if order:GetType() == OrderType.Lane then
    self:_UpdateLaneQueue(order)
  elseif order:GetType() == OrderType.Recall then
    local laneName = order:GetLaneName()
    if self.m_mapRecallLaneConfig and self.m_mapRecallLaneConfig[laneName] and self.m_recallQueue ~= nil then
      table.insert(self.m_recallQueue, laneName)
    end
  elseif order:GetType() == OrderType.Fixed then
    local config = self.m_fixedOrderConfig[order:GetId()]
    if config and config.chainId then
      self.m_finFixs[config.chainId] = nil
    else
      local arrRequirements = order:GetRequirements()
      local needChain, pdChain
      for _, requirement in ipairs(arrRequirements or {}) do
        needChain = GM.ItemDataModel:GetChainId(requirement)
        if needChain then
          pdChain = GM.ItemDataModel:GetChainGenerator(needChain)
          if pdChain then
            self.m_finFixs[pdChain] = nil
          end
        end
      end
    end
  end
  BaseOrderModel.FinishOrder(self, order, removedItems, orginBaseRewards)
  if order:GetType() ~= OrderType.LuckyStar and order:GetType() ~= OrderType.CurtainCall then
    EventDispatcher.DispatchEvent(EEventType.FinishMainOrder, {order = order})
  end
  EventDispatcher.DispatchEvent(EEventType.RefreshSpreadView)
  return true
end

function MainOrderModel:_TryFillOrders(order)
  local hasFilledOrder = BaseOrderModel._TryFillOrders(self, order)
  local orderType = order:GetType()
  if orderType == OrderType.Recall then
    hasFilledOrder = self:_TryCreateInsureOrder(order) or hasFilledOrder
    hasFilledOrder = self:_TryFillOrder(order) or hasFilledOrder
  elseif orderType == OrderType.Lane then
    hasFilledOrder = self:_TryFillOrder(order) or hasFilledOrder
  elseif orderType == OrderType.Random then
    hasFilledOrder = self:_TryFillOrder(order, order:GetId()) or hasFilledOrder
  elseif orderType == OrderType.Insure then
    hasFilledOrder = self:_TryFillOrder(order)
  elseif orderType == OrderType.Fixed then
    if GM.ConfigModel:GetNewUserOrderChangeLevel() == 0 then
      hasFilledOrder = self:_TryCreateLastFixed(order, hasFilledOrder)
    end
    hasFilledOrder = hasFilledOrder or self:_OnLevelUp()
  end
  hasFilledOrder = self:_TryCreateLuckyStarOrder(order) or hasFilledOrder
  hasFilledOrder = self:_TryCreateClearOrder(order) or hasFilledOrder
  hasFilledOrder = self:_TryCreateCurtainCallOrder(order) or hasFilledOrder
  return hasFilledOrder
end

function MainOrderModel:_TryFillOrder(preOrder, randomOrderId)
  local hasFilledOrder = false
  if self:IsRecallOrderActive() then
    hasFilledOrder = self:_TryCreateRecallOrder(preOrder)
  elseif self:IsLaneOpen() then
    hasFilledOrder = hasFilledOrder or self:_TryCreateCircleOrder(preOrder)
    hasFilledOrder = self:_TryCreateLaneOrder(preOrder) or hasFilledOrder
  else
    hasFilledOrder = self:_TryCreateRandomOrder(randomOrderId, preOrder)
  end
  return hasFilledOrder
end

function MainOrderModel:RefreshOrder(order)
  self:_UpdateRecentItems(order)
  local laneName = order.GetLaneName and order:GetLaneName()
  if order:GetType() == OrderType.Lane then
    self:_UpdateLaneQueue(order)
  elseif order:GetType() == OrderType.Recall and laneName and self.m_mapRecallLaneConfig and self.m_mapRecallLaneConfig[laneName] and self.m_recallQueue ~= nil then
    table.insert(self.m_recallQueue, laneName)
  end
  local newOrder = BaseOrderModel.RefreshOrder(self, order)
  return newOrder
end

function MainOrderModel:_TryRefreshOrder(order)
  local newOrder = BaseOrderModel._TryRefreshOrder(self, order)
  local hasRefreshOrder = newOrder ~= nil
  local orderType = order:GetType()
  if not hasRefreshOrder and orderType == OrderType.Recall then
    hasRefreshOrder, newOrder = self:_TryCreateInsureOrder(order)
  end
  if not hasRefreshOrder and self:IsRecallOrderActive() and not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ReturningPlayerOrder) then
    hasRefreshOrder, newOrder = self:_TryCreateRecallOrder(order, true)
  end
  if not hasRefreshOrder and self:IsLaneOpen() then
    hasRefreshOrder, newOrder = self:_TryCreateLaneOrder(order, true)
    if not hasRefreshOrder then
      hasRefreshOrder, newOrder = self:_TryCreateCircleOrder(order)
    end
  end
  if not hasRefreshOrder then
    hasRefreshOrder, newOrder = self:_TryCreateRandomOrder(order:GetId(), order, true)
  end
  if not hasRefreshOrder then
    hasRefreshOrder, newOrder = self:_TryCreateClearOrder(order, true)
  end
  return newOrder
end

function MainOrderModel:UpdateState(...)
  local activityOrders = GM.ActivityManager:GetOngoingOrders()
  for _, activityOrder in ipairs(activityOrders) do
    activityOrder:UpdateState()
  end
  BaseOrderModel.UpdateState(self, ...)
  self:_TryRemoveClearOrder()
end

function MainOrderModel:_TryRemoveClearOrder()
  if not GM.CheckResourcesStageFinished then
    return
  end
  local bChanged = false
  for _, order in pairs(self.m_orders) do
    if order:GetType() == OrderType.Clear and order:GetState() ~= OrderState.Finished and order:GetState() ~= OrderState.CanDeliver then
      local id = order:GetId()
      self.m_orders[id] = nil
      self:_DBRemoveOrder(id)
      self:ReleaseAvatar(order)
      local fillStates = order:GetRequirementFillStates()
      for index, code in ipairs(order:GetRequirements()) do
        if fillStates[index] and self.m_codeStateMap[code] then
          self.m_codeStateMap[code] = self.m_codeStateMap[code] - 1
          if self.m_codeStateMap[code] == 0 then
            self.m_codeStateMap[code] = nil
          end
        elseif self.m_codeRequireCount[code] then
          self.m_codeRequireCount[code] = self.m_codeRequireCount[code] - 1
          if self.m_codeRequireCount[code] == 0 then
            self.m_codeRequireCount[code] = nil
          end
        end
      end
      bChanged = true
      self:_LogOrderAction(order, EBIType.OrderVanish, nil, nil, "reason:unable")
      EventDispatcher.DispatchEvent(EEventType.OrderRemoved, {order = order})
    end
  end
  if bChanged then
    EventDispatcher.DispatchEvent(EEventType.UpdateItemCheck)
  end
end

function MainOrderModel:_UpdateLaneQueue(order)
  local laneId = order:GetLaneId()
  if self.m_mapLaneIDConfig[laneId] and self.m_mapLaneIDConfig[laneId].circle ~= 1 then
    self.m_laneQueque[#self.m_laneQueque + 1] = laneId
  end
  local car = order:GetCar()
  if car and car ~= 0 then
    self:_SetLastFinishedLaneIdByCar(car, laneId)
    if self.m_carHoldMap then
      self.m_carHoldMap[car] = self.m_carHoldMap[car] - 1
    end
    self:_UpdateCarCircleInfo(car)
  end
  self:_SerializeLaneQueue()
end

function MainOrderModel:_UpdateRecentItems(order)
  local orderType = order:GetType()
  if orderType ~= OrderType.Lane and orderType ~= OrderType.Recall and orderType ~= OrderType.Random then
    return
  end
  for item, cd in pairs(self.m_mapItemRencent) do
    if cd < 2 then
      self.m_mapItemRencent[item] = nil
      self.m_dbItemRecentTable:Remove(item)
    else
      self.m_mapItemRencent[item] = cd - 1
    end
  end
  local requirements = order:GetAllRequireItems()
  local cd = self.m_randomOrderConfig.recentlyOrder
  local chainCd = self.m_randomOrderConfig.recentlyLine
  for _, item in pairs(requirements) do
    self.m_mapItemRencent[item] = cd
    if chainCd then
      local chain = GM.ItemDataModel:GetChainId(item)
      self.m_mapItemRencent[chain] = chainCd
    end
  end
  for item, cd in pairs(self.m_mapItemRencent) do
    self.m_dbItemRecentTable:Set(item, "value", tostring(cd))
  end
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.FreeItemCD) then
    for item, cd in pairs(self.m_mapFreeItemRecent) do
      if cd < 2 then
        self.m_mapFreeItemRecent[item] = nil
        self.m_dbItemRecentTable:Remove(item)
      else
        self.m_mapFreeItemRecent[item] = cd - 1
      end
    end
    local freeItemCD = self.m_randomOrderConfig.recentlyOrderFree or 0
    local freeChainCD = self.m_randomOrderConfig.recentlyLineFree or 0
    for _, item in pairs(requirements) do
      if GM.ItemDataModel:IsFreeItem(item) then
        if 0 < freeItemCD then
          self.m_mapFreeItemRecent[self:GetFreeItemKey(item)] = freeItemCD
        end
        if 0 < freeChainCD then
          local chain = GM.ItemDataModel:GetChainId(item)
          self.m_mapFreeItemRecent[self:GetFreeItemKey(chain)] = freeChainCD
        end
      end
    end
    for item, cd in pairs(self.m_mapFreeItemRecent) do
      self.m_dbItemRecentTable:Set(item, "value", tostring(cd))
    end
  end
end

function MainOrderModel:_TryCreateFixedOrder()
  local order
  local level = self.m_boardModel:GetLevel()
  for _, config in ipairs(self.m_arrFixedOrderConfigs) do
    if not self.m_orders[config.id] and not self:IsFixedOrderFinished(config.id) and MainFixedOrderCreator.CanCreate(self, config, level) then
      order = MainFixedOrderCreator.Create(self, config, OrderType.Fixed)
      self.m_orders[order:GetId()] = order
      self:_DBAddOrder(order)
    end
  end
  return order ~= nil, order
end

function MainOrderModel:_TryCreateLastFixed(order, hasFilledOrder)
  local id = "newbie_60_1_9"
  if not self:IsNewbieOrderClear() or self.m_orders[id] then
    return hasFilledOrder
  end
  if not self:IsFixedOrderFinished(id) and self.m_boardModel:GetItemLayerCount(ItemType.Cobweb) > 0 and self.m_boardModel:IsItemExist("c#it3_2_8") then
    local config = Table.ShallowCopy(self.m_fixedOrderConfig.newbie_60_1_8)
    config.id = id
    local order = MainFixedOrderCreator.Create(self, config, OrderType.Fixed)
    self.m_orders[order:GetId()] = order
    self:_DBAddOrder(order)
    hasFilledOrder = true
  elseif order:GetId() ~= id then
    self:_DBAddFinishedFix(id)
  end
  return hasFilledOrder
end

function MainOrderModel:IsNewbieOrderClear()
  local clear = self:IsFixedOrderFinished("newbie_50_1_8") and self:IsFixedOrderFinished("newbie_50_2_6") and self:IsFixedOrderFinished("newbie_60_1_8") and self:IsFixedOrderFinished("newbie_70_1_8") and self:IsFixedOrderFinished("newbie_70_2_4") and self:IsFixedOrderFinished("newbie_80_1_3")
  return clear
end

function MainOrderModel:GetNewbieChainFinishedNum()
  local count = 0
  count = count + (self:IsFixedOrderFinished("newbie_50_1_8") and 1 or 0)
  count = count + (self:IsFixedOrderFinished("newbie_50_2_6") and 1 or 0)
  count = count + (self:IsFixedOrderFinished("newbie_60_1_8") and 1 or 0)
  count = count + (self:IsFixedOrderFinished("newbie_70_1_8") and 1 or 0)
  count = count + (self:IsFixedOrderFinished("newbie_70_2_4") and 1 or 0)
  return count
end

function MainOrderModel:_GetMaxUnlockedCar()
  local changeLevel = GM.ConfigModel:GetNewUserOrderChangeLevel()
  if changeLevel == 0 then
    return 6
  end
  local curLevel = GM.LevelModel:GetCurrentLevel()
  if changeLevel <= curLevel then
    if curLevel >= GM.ConfigModel:GetNewUserOrderMaxLevel() then
      return 6
    end
    local num = self:GetNewbieChainFinishedNum()
    if num < 3 then
      return 2
    elseif num < 5 then
      return 4
    else
      return 6
    end
  end
  return 0
end

function MainOrderModel:_CheckExtraOrderCreation(order, maxConfigNum)
  if order and GM.PropItemManager:GetModel(EPropItemType.ExtraOrder):IsOn() and maxConfigNum <= self:GetOrdersAmountByFilter(MainRandomOrderCreator.TypeFilter) then
    self:ClearExtraOrderFlag()
    order:SetExtraFlag(true)
  end
end

function MainOrderModel:GetExtraOrder()
  for _, order in pairs(self.m_orders) do
    if order:IsExtraOrder() then
      return order
    end
  end
end

function MainOrderModel:ClearExtraOrderFlag()
  for _, order in pairs(self.m_orders) do
    order:SetExtraFlag(false)
  end
end

function MainOrderModel:_TryCreateRandomOrder(preId, preOrder, bOnlyOne)
  local level = self.m_boardModel:GetLevel()
  local flag, order
  while MainRandomOrderCreator.CanCreate(self, level, self.m_randomOrderConfig) do
    order = MainRandomOrderCreator.Create(self, self.m_randomOrderConfig, preId)
    if not order then
      break
    end
    self.m_orders[order:GetId()] = order
    self:_DBAddOrder(order)
    flag = true
    self:_TryLogSameChain(order, preOrder)
    EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order, preOrder = preOrder})
    if bOnlyOne then
      break
    end
  end
  self:_CheckExtraOrderCreation(order, self.m_randomOrderConfig:GetMaxNum())
  return flag, order
end

function MainOrderModel:GetOrderProducerMargin()
  local localProducerMargin = self.m_randomOrderConfig.producerMargin
  local pdNumConfigMd5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.PdNum)
  if self.m_pdNumConfigMd5 ~= pdNumConfigMd5 then
    self.m_pdNumConfigMd5 = pdNumConfigMd5
    local pdNumConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.PdNum)
    if pdNumConfig then
      self.m_pdNumConfigInNumber = pdNumConfig.num
    else
      self.m_pdNumConfigInNumber = nil
    end
  end
  if self.m_pdNumConfigInNumber == nil then
    return localProducerMargin
  end
  if localProducerMargin > self.m_pdNumConfigInNumber then
    Log.Assert(false, "PdNum cannot be less than 5 !!!")
    return localProducerMargin
  end
  local genList = GM.ItemDataModel:GetUnlockedMainGenerator(self.m_pdNumConfigInNumber)
  local pdChain
  local lastCurtainPdIndex = self.m_pdNumConfigInNumber + 1
  for i = #genList, localProducerMargin + 1, -1 do
    pdChain = GM.ItemDataModel:GetChainId(genList[i])
    if self:IsProducerHasCurtainCall(pdChain) or NoCDTrainModel.IsLockedOrToBeLocked(genList[i], EGameMode.Main) then
      lastCurtainPdIndex = i
    end
  end
  if GameConfig.IsTestMode() then
    local str = ""
    for i = 1, lastCurtainPdIndex - 1 do
      str = str .. (genList[i] or "nil") .. ";"
    end
    Log.Debug(str, "[PdNum]")
  end
  return lastCurtainPdIndex - 1
end

function MainOrderModel:_TryCreateLaneOrder(preOrder, bOnlyOne)
  local flag, order, laneConfig
  laneConfig = self:_GetNextLane(preOrder)
  while laneConfig ~= nil do
    order = LaneOrderCreator.Create(self, laneConfig, self:GetOrderProducerMargin(), OrderType.Lane)
    if not order then
      break
    end
    self.m_orders[order:GetId()] = order
    self:_DBAddOrder(order)
    flag = true
    self:_RemoveLane(laneConfig)
    self:_TryLogSameChain(order, preOrder)
    EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order, preOrder = preOrder})
    if bOnlyOne then
      break
    end
    laneConfig = self:_GetNextLane(preOrder)
  end
  self:_CheckExtraOrderCreation(order, self.m_nMaxLaneNum)
  return flag, order
end

function MainOrderModel:GetSunshineLaneConfig(maxUnlockCar)
  local activityModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  if not activityModel:IsActivityLogicStart() then
    return
  end
  local bCheckCarUnlock = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.SunshineNewbie)
  for i = 1, #self.m_laneQueque do
    local slot = self:GetLaneDifficultyByLaneId(self.m_laneQueque[i])
    local config = self.m_mapLaneIDConfig[self.m_laneQueque[i]]
    if slot and activityModel and activityModel:GetUnfinishedOrderNumBySlot(slot, config.circle == 1) > 0 and (self.m_carHoldMap[config.car] or 0) < config.car_hold_lane and (not bCheckCarUnlock or maxUnlockCar >= config.car) then
      return config
    end
  end
end

function MainOrderModel:GetPhotoLaneConfig(preOrder, maxUnlockCar)
  local preOrderId = preOrder and preOrder:GetId()
  local bCheckCarUnlock = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.SunshineNewbie)
  for type, def in pairs(PhotoActivityDefinition) do
    local activityModel = GM.ActivityManager:GetModel(type)
    if activityModel and activityModel:IsActivityOpen() and activityModel:NeedPhotoLaneConfig(preOrderId) then
      local findOrderCfg = activityModel:GetCurLevelServerConfig()
      local hashList = activityModel:GetLastDiffHashList(self, findOrderCfg, preOrder)
      for i = 1, #self.m_laneQueque do
        local slot = self:GetLaneDifficultyByLaneId(self.m_laneQueque[i])
        local config = self.m_mapLaneIDConfig[self.m_laneQueque[i]]
        if slot and hashList[slot] and 0 < hashList[slot] and (self.m_carHoldMap[config.car] or 0) < config.car_hold_lane and (not bCheckCarUnlock or maxUnlockCar >= config.car) then
          Log.Debug("[MainOrderModel:GetPhotoLaneConfig] \231\155\184\229\134\140\228\191\157\229\186\149\231\173\150\231\149\1651")
          return config
        end
      end
    end
  end
  return nil
end

function MainOrderModel:_CanCreateExtraSunShineCar(order)
  local laneId = order and order:GetLaneId()
  if laneId == nil then
    return false
  end
  local sunshineModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  local slot = self:GetLaneDifficultyByLaneId(laneId)
  slot = slot or order:GetLaneSlot()
  if slot and sunshineModel and sunshineModel:GetUnfinishedOrderNumBySlot(slot, true) > 0 then
    return true, slot
  end
  return false
end

function MainOrderModel:_CanCreateExtraPhotoCar(order)
  local laneId = order and order:GetLaneId()
  if laneId == nil then
    return false
  end
  local slot = self:GetLaneDifficultyByLaneId(laneId)
  slot = slot or order:GetLaneSlot()
  for type, def in pairs(PhotoActivityDefinition) do
    local activityModel = GM.ActivityManager:GetModel(type)
    if slot and activityModel and activityModel:IsActivityOpen() and activityModel:NeedPhotoLaneConfig(order:GetId()) then
      local findOrderCfg = activityModel:GetCurLevelServerConfig()
      local hashList = activityModel:GetLastDiffHashList(self, findOrderCfg, order)
      if hashList and hashList[slot] and 0 < hashList[slot] then
        return true, slot
      end
    end
  end
  return false
end

function MainOrderModel:_TryCreateCircleOrder(preOrder)
  if self:IsRecallOrderActive() or not self:IsLaneOpen() then
    return
  end
  local laneConfig = self:_GetNextCircleCarConfig(preOrder)
  if not laneConfig then
    return false
  end
  local order = LaneOrderCreator.Create(self, laneConfig, self:GetOrderProducerMargin(), OrderType.Lane)
  if not order then
    return false
  end
  self.m_carHoldMap[order:GetCar()] = 1
  self.m_orders[order:GetId()] = order
  self:_DBAddOrder(order)
  EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order, preOrder = preOrder})
  return true, order
end

function MainOrderModel:_GetNextLane(preOrder)
  local maxUnlockCar = self:_GetMaxUnlockedCar()
  local nxtSunshineLaneConfig = self:GetSunshineLaneConfig(maxUnlockCar)
  if nxtSunshineLaneConfig ~= nil then
    return nxtSunshineLaneConfig
  end
  local nxtPhotoLaneConfig = self:GetPhotoLaneConfig(preOrder, maxUnlockCar)
  if nxtPhotoLaneConfig ~= nil then
    return nxtPhotoLaneConfig
  end
  local maxNum = self.m_nMaxLaneNum
  if GM.PropItemManager:GetModel(EPropItemType.ExtraOrder):IsOn() then
    maxNum = maxNum + 1
  end
  local amount = self:GetOrdersAmountByFilter(MainRandomOrderCreator.TypeFilter)
  if maxNum <= amount then
    return
  end
  for i = 1, #self.m_laneQueque do
    local config = self.m_mapLaneIDConfig[self.m_laneQueque[i]]
    if (self.m_carHoldMap[config.car] or 0) < config.car_hold_lane and maxUnlockCar >= config.car then
      return config
    end
  end
  return nil
end

function MainOrderModel:_RemoveLane(config)
  for i = 1, #self.m_laneQueque do
    if self.m_laneQueque[i] == config.id then
      table.remove(self.m_laneQueque, i)
      break
    end
  end
  self.m_carHoldMap[config.car] = (self.m_carHoldMap[config.car] or 0) + 1
  self:_SerializeLaneQueue()
end

function MainOrderModel:_TryCreateRecallOrder(preOrder, bOnlyOne)
  local flag, order
  while LaneOrderCreator.CanCreate(self, self.m_mapRecallLaneConfig, self.m_nMaxRecallLaneNum) do
    local lane = self.m_recallQueue[1]
    local laneConfig = self.m_mapRecallLaneConfig[lane]
    if laneConfig == nil then
      Log.Assert(false, "[RecallOrder] \232\174\162\229\141\149\229\136\155\229\187\186\229\164\177\232\180\165\239\188\140\230\178\161\230\156\137\229\143\175\231\148\168\231\154\132\232\189\166\233\129\147")
      break
    end
    order = LaneOrderCreator.Create(self, laneConfig, self:GetOrderProducerMargin(), OrderType.Recall)
    if not order then
      break
    end
    self.m_orders[order:GetId()] = order
    self:_DBAddOrder(order)
    flag = true
    table.remove(self.m_recallQueue, 1)
    self:_TryLogSameChain(order, preOrder)
    EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order, preOrder = preOrder})
    if bOnlyOne then
      break
    end
  end
  self:_CheckExtraOrderCreation(order, self.m_nMaxRecallLaneNum)
  return flag, order
end

function MainOrderModel:_TryCreateInsureOrder(preOrder)
  local flag = false
  local order
  if InsureOrderCreator.CanCreate(self, self.m_precleanOrderConfig.insureOrderNum) then
    order = InsureOrderCreator.Create(self, self.m_randomOrderConfig, OrderType.Insure)
    if not order then
      return
    end
    self.m_orders[order:GetId()] = order
    self:_DBAddOrder(order)
    flag = true
    self:_TryLogSameChain(order, preOrder)
    self:SetInsureNextRefreshTime()
    EventDispatcher.DispatchEvent(EEventType.MainOrderCreated, {order = order, preOrder = preOrder})
  end
  return flag, order
end

function MainOrderModel:_TryLogSameChain(order, preOrder)
  if preOrder == nil then
    return
  end
  local str = ""
  local mapChain = preOrder:GetRequiredChainsMap()
  for _, v in pairs(order:GetRequirements()) do
    local chainId = GM.ItemDataModel:GetChainId(v)
    if mapChain[chainId] then
      str = str .. chainId .. ","
    end
  end
  GM.BIManager:LogProject(EBIProjectType.OrderRepeatLine, str)
end

function MainOrderModel:_DBUpdateOrder(order)
  self.m_dbTable:Set(order:GetId(), "round", order:GetRound())
end

function MainOrderModel:_DBAddOrder(order, oldRequirements, noLog, extInfo)
  local score = order:GetTotalScore(self)
  local requirements = oldRequirements or order:GetRequirements()
  local addData = {
    [order:GetId()] = {
      type = order:GetType(),
      requirements = table.concat(requirements, ";"),
      rewards = table.concat(ConfigUtil.GetArrFromCurrency(order:GetRewards(true)), ";"),
      avatarId = order:GetAvatarId(),
      laneName = order:GetLaneName(),
      laneId = order:GetLaneId(),
      createTime = order:GetCreateTime(),
      createScore = score,
      endTime = order:GetEndTime(),
      precleanType = order:GetCar(),
      difficulty = order:GetLaneSlot(),
      round = nil,
      allRequirements = nil
    }
  }
  if order:GetType() == OrderType.CurtainCall then
    addData[order:GetId()].requirements = order:GetPdChainId()
  end
  self.m_dbTable:BatchSet(addData)
  local str
  if order.weightList then
    str = "weight:"
    for i = 1, #requirements do
      str = str .. order.weightList[i] .. "-" .. requirements[i]
      if i ~= #requirements then
        str = str .. ","
      end
    end
  end
  if extInfo and str then
    str = extInfo .. ";" .. str
  end
  if not noLog then
    self:_LogOrderAction(order, EBIType.OrderUnlock, score, nil, str)
  end
end

function MainOrderModel:_DBRemoveOrder(order)
  self.m_dbTable:Remove(order)
end

function MainOrderModel:_CheckAvatarUnlock()
  self.m_avatarList = {
    [EAmbienceStyle.Kryphos] = {},
    [EAmbienceStyle.Kaona] = {}
  }
  local count = 1
  local level = self:GetLevel()
  for _, v in pairs(self.m_avatarConfig.NormalAvatars) do
    if not v.UnlockLevel or level >= v.UnlockLevel then
      table.insert(self.m_avatarList[v.Area], v.Id)
    end
  end
end

function MainOrderModel:GetAvatarId()
  if Table.IsEmpty(self.m_avatarList) or Table.IsEmpty(self.m_avatarList[EAmbienceStyle.Kryphos]) then
    return math.random(1, 4)
  end
  local style = AmbienceHelper.GetAmbienceStyle()
  local avatrList = self.m_avatarList[style]
  local list, count = {}, 1
  for _, v in ipairs(avatrList) do
    if not self.m_avatarMap[v] then
      list[count] = v
      count = count + 1
    end
  end
  local occupiedAvatars = {}
  for activityType, activityDefinition in pairs(DashActivityDefinition) do
    local model = GM.ActivityManager:GetModel(activityType)
    if activityDefinition.OccupiedAvatar and model and model:CanAddScore() then
      table.insert(occupiedAvatars, activityDefinition.OccupiedAvatar)
      if Table.ListRemove(list, activityDefinition.OccupiedAvatar) then
        count = count - 1
      end
    end
  end
  for activityType, activityDefinition in pairs(CoinRaceActivityDefinition) do
    local coinRaceModel = GM.ActivityManager:GetModel(activityType)
    if coinRaceModel and coinRaceModel:CanShowOrderCell() then
      table.insert(occupiedAvatars, 5)
      if Table.ListRemove(list, 5) then
        count = count - 1
      end
    end
  end
  if count == 1 then
    list = Table.DeepCopy(avatrList)
    for _, v in pairs(occupiedAvatars) do
      if 1 < #list then
        Table.ListRemove(list, v)
      end
    end
  end
  return Table.ListRandomSelectOne(list)
end

function MainOrderModel:GetItemCodeConfigMap()
  return self.m_itemCodeConfigMap
end

function MainOrderModel:GetItemNumberWeightConfig()
  return self.m_itemNumberWeightConfig
end

function MainOrderModel:GetAvatarConfig()
  return self.m_avatarConfig
end

function MainOrderModel:GetLevel()
  return self.m_boardModel:GetLevel()
end

function MainOrderModel:GetItemScoreRange()
  return self.m_precleanOrderConfig.insureOrderItemScoreRange
end

function MainOrderModel:IsLaneOpen()
  local unlockLevel = GM.ConfigModel:GetNewUserOrderChangeLevel()
  return self.m_bLaneOpen and GM.LevelModel:GetCurrentLevel() >= (unlockLevel == 0 and self.m_randomOrderConfig.unlockLevel or unlockLevel) and GM.MapDataModel:CanUseLaneOrder()
end

function MainOrderModel:GetOrdersAmountByFilter(filter)
  local num = 0
  for k, v in pairs(self.m_orders) do
    if filter(v) then
      num = num + 1
    end
  end
  return num
end

function MainOrderModel:GetOrders(type)
  if not type then
    return self.m_orders
  end
  local list = {}
  for k, v in pairs(self.m_orders) do
    if v:GetType() == type then
      list[#list + 1] = v
    end
  end
  return list
end

function MainOrderModel:GetOrderById(id)
  return self.m_orders[id]
end

function MainOrderModel:IsMainOrderById(id)
  if not id and Table.IsEmpty(self.m_orders) then
    return false
  end
  return self.m_orders[id] ~= nil
end

function MainOrderModel:GetRandomOrderNeedScore(id)
  return self.m_scoreSeq[id % self.m_seqLen + 1].needScore
end

function MainOrderModel:GetItemCd(code)
  return self.m_mapItemRencent[code] or 0
end

function MainOrderModel:GetFreeItemCd(code)
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.FreeItemCD) then
    return 0
  end
  local key = self:GetFreeItemKey(code)
  return self.m_mapFreeItemRecent[key] or 0
end

function MainOrderModel:CanGenerateFreeOrder()
  local maxNum = tonumber(self.m_randomOrderConfig.meanwhileFree or "0")
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.FreeItemCD) or maxNum == 0 then
    return true
  end
  local curNum = self:GetOrdersAmountByFilter(function(order)
    local requirements = order:GetRequirements()
    for _, item in ipairs(requirements) do
      if GM.ItemDataModel:IsFreeItem(item) then
        return true
      end
    end
  end)
  return maxNum > curNum
end

function MainOrderModel:GetFreeItemKey(code)
  return code .. "_free"
end

function MainOrderModel:GenerateOrderId()
  return self.m_orderIdGenerator:Generate()
end

function MainOrderModel:GetLaneDifficultyByLaneName(laneName)
  return self.m_mapLaneConfig[laneName] and self.m_mapLaneConfig[laneName].difficulty or nil
end

function MainOrderModel:GetLaneDifficultyByLaneId(laneId)
  return self.m_mapLaneIDConfig[laneId] and self.m_mapLaneIDConfig[laneId].difficulty or nil
end

function MainOrderModel:_LaneQueueByCar()
  if Table.IsEmpty(self.m_laneQueque) and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderSeq) then
    local strIds = GM.MiscModel:Get(EMiscKey.OrderQueue)
    if StringUtil.IsNilOrEmpty(strIds) then
      self.m_laneQueque = {}
    else
      self.m_laneQueque = StringUtil.SplitToNum(strIds, ";")
    end
  end
  local usingLane = {}
  for i = #self.m_laneQueque, 1, -1 do
    if self.m_mapLaneIDConfig[self.m_laneQueque[i]] == nil then
      self.m_laneQueque[i] = nil
    else
      usingLane[self.m_laneQueque[i]] = true
    end
  end
  self.m_carHoldMap = {}
  for _, order in pairs(self.m_orders) do
    if order:GetType() == OrderType.Lane then
      local id = order:GetLaneId()
      usingLane[id] = true
      local car = order:GetCar()
      if car and car ~= 0 then
        self.m_carHoldMap[car] = (self.m_carHoldMap[car] or 0) + 1
      end
    end
  end
  local laneList = {}
  local circleCarList = {}
  for id, v in pairs(self.m_mapLaneIDConfig) do
    if v.car ~= nil then
      if not usingLane[id] and v.circle ~= 1 then
        table.insert(laneList, id)
      elseif v.circle == 1 then
        if not circleCarList[v.car] then
          circleCarList[v.car] = {}
        end
        table.insert(circleCarList[v.car], id)
      end
    end
  end
  table.sort(laneList, function(a, b)
    if self.m_mapLaneIDConfig[a].car == self.m_mapLaneIDConfig[b].car then
      return a < b
    else
      return self.m_mapLaneIDConfig[a].car < self.m_mapLaneIDConfig[b].car
    end
  end)
  for _, v in pairs(circleCarList) do
    table.sort(v)
  end
  self.m_circleQueue = circleCarList
  local num = #self.m_laneQueque
  for i = 1, #laneList do
    self.m_laneQueque[num + i] = laneList[i]
  end
end

function MainOrderModel:_RefreshRecallQueue()
  local usingLane = {}
  for _, order in pairs(self.m_orders) do
    if order:GetType() == OrderType.Recall then
      usingLane[order:GetLaneName()] = true
    end
  end
  self.m_recallQueue = {}
  for laneName, _ in pairs(self.m_mapRecallLaneConfig or {}) do
    if not usingLane[laneName] then
      table.insert(self.m_recallQueue, laneName)
    end
  end
end

function MainOrderModel:_SerializeLaneQueue()
  GM.MiscModel:Set(EMiscKey.OrderQueue, table.concat(self.m_laneQueque, ";"))
end

function MainOrderModel:GetOrderLanePolarity(lane)
  return self.m_dbOrderLaneMeta:GetValue(lane, OrderLaneDBColumnKey.Polarity) or 0
end

function MainOrderModel:SetOrderLanePolarity(lane, polarity)
  self.m_dbOrderLaneMeta:Set(lane, OrderLaneDBColumnKey.Polarity, polarity)
end

local insureKey = "insure"

function MainOrderModel:SetInsureNextRefreshTime()
  local cd = self.m_precleanOrderConfig.insureOrderCD
  local nextRefreshTime = GM.GameModel:GetServerTime() + cd
  self.m_dbOrderLaneMeta:Set(insureKey, OrderLaneDBColumnKey.NextRefreshTime, nextRefreshTime)
end

function MainOrderModel:GetInsureNextRefreshTime()
  return self.m_dbOrderLaneMeta:GetValue(insureKey, OrderLaneDBColumnKey.NextRefreshTime) or 0
end

function MainOrderModel:_GetNextCircleCarConfig(preOrder)
  local day = GM.GameModel:GetServerDay()
  local canSunshine, preDifficulty = self:_CanCreateExtraSunShineCar(preOrder, true)
  local canPhoto, preDifficulty_ph = self:_CanCreateExtraPhotoCar(preOrder)
  for car, count in pairs(self.m_mapExtraCarCount) do
    local carList = self.m_circleQueue[car]
    local bCanCreateCurCar = self:_CanCreateCurCar(car, count, day)
    local bCanCreateBySunshine = canSunshine and self:GetLaneDifficultyByLaneId(carList[1]) == preDifficulty
    local bCanCreateByPhoto = canPhoto and self:GetLaneDifficultyByLaneId(carList[1]) == preDifficulty_ph
    if bCanCreateCurCar or bCanCreateBySunshine or bCanCreateByPhoto then
      local preId
      if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderSeq) then
        preId = self:_GetLastFinishedLaneIdByCar(car)
      else
        preId = preOrder and preOrder:GetLaneId()
      end
      local index = self:_GetCarNextIndex(carList, preId)
      return self.m_mapLaneIDConfig[carList[index]]
    end
  end
end

function MainOrderModel:_GetCarNextIndex(idList, preId)
  local index = 1
  if preId ~= nil then
    index = Table.GetIndex(idList, preId) + 1
    index = index > #idList and 1 or index
  end
  return index
end

function MainOrderModel:_GetLastFinishedLaneIdByCar(car)
  return self.m_dbOrderLaneMeta:GetValue(DBKeyLastLanePrefix .. car, OrderLaneDBColumnKey.Polarity)
end

function MainOrderModel:_SetLastFinishedLaneIdByCar(car, laneId)
  self.m_dbOrderLaneMeta:Set(DBKeyLastLanePrefix .. car, OrderLaneDBColumnKey.Polarity, laneId)
end

function MainOrderModel:_CanCreateCurCar(car, maxCount, curDay)
  for _, order in pairs(self.m_orders) do
    if order:GetCar() == car then
      return false
    end
  end
  local curCount = self:_GetCarCircleInfo(car)
  return maxCount > curCount
end

function MainOrderModel:_GetCarCircleInfo(car)
  local dbKey = "car_" .. car
  local lastDay = self.m_dbOrderLaneMeta:GetValue(dbKey, OrderLaneDBColumnKey.NextRefreshTime) or 0
  local curCount = self.m_dbOrderLaneMeta:GetValue(dbKey, OrderLaneDBColumnKey.Polarity) or 0
  local curDay = GM.GameModel:GetServerDay()
  if curDay ~= lastDay then
    curCount = 0
  end
  return curCount, curDay, dbKey
end

function MainOrderModel:_UpdateCarCircleInfo(car)
  local curCount, curDay, dbKey = self:_GetCarCircleInfo(car)
  self.m_dbOrderLaneMeta:Set(dbKey, OrderLaneDBColumnKey.Polarity, curCount + 1)
  self.m_dbOrderLaneMeta:Set(dbKey, OrderLaneDBColumnKey.NextRefreshTime, curDay)
end

function MainOrderModel:IsExtraLane(car)
  return self.m_carCircleState[car] == 1
end

function MainOrderModel:GetRemainFixOrderRequirementChain()
  local neededChains = {}
  for _, config in pairs(self.m_fixedOrderConfig) do
    if not self.m_orders[config.id] and not self:IsFixedOrderFinished(config.id) then
      for _, itemType in pairs(config.requirements) do
        neededChains[GM.ItemDataModel:GetChainId(itemType)] = true
      end
    end
  end
  return neededChains
end

function MainOrderModel:HasAllTutorialOrderFinished(chainId)
  if not self.m_bSyncDataFinished then
    Log.Erro("MainOrderModel:HasAllTutorialOrderFinished, SyncDataFinished \228\185\139\229\137\141\232\162\171\232\176\131\231\148\168\228\186\134")
    return
  end
  if self.m_finFixs[chainId] == nil then
    self.m_finFixs[chainId] = true
    if self.m_fixedOrderChainMap[chainId] then
      for _, id in pairs(self.m_fixedOrderChainMap[chainId]) do
        if not self:IsFixedOrderFinished(id) then
          self.m_finFixs[chainId] = false
          break
        end
      end
    end
  end
  return self.m_finFixs[chainId]
end

function MainOrderModel:IsDifficultyLaneExsit(slot)
  if not slot and Table.IsEmpty(self.m_orders) then
    return false
  end
  for id, order in pairs(self.m_orders) do
    if order.GetLaneSlot and order:GetLaneSlot() == slot then
      return true
    end
  end
  return false
end

function MainOrderModel:SelectOneOrderAsActivityOrder(range, scoreMargin, finishOrderFirst)
  Log.Assert(range and range.Left ~= nil, "MainOrderModel:SelectOneOrderAsActivityOrder, range.Left shoudnot be nil")
  local priority = {
    Sun_Unfinish = 1,
    NoSun_Unfinish = 2,
    Sun_Finish = 3,
    NoSun_Finish = 4,
    Others = 5
  }
  if finishOrderFirst then
    priority.Sun_Unfinish = 3
    priority.NoSun_Unfinish = 4
    priority.Sun_Finish = 1
    priority.NoSun_Finish = 2
  end
  
  local function isTargetOrderType(orderType)
    return orderType == OrderType.Lane or orderType == OrderType.Recall or orderType == OrderType.Random
  end
  
  local mapSeparatedOrders = {}
  for i = 1, priority.Others do
    mapSeparatedOrders[i] = {}
  end
  local allOrders = self:GetOrders()
  local SunshineModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  local left = range.Left - (scoreMargin or 0)
  local right = (range.Right or range.Left) + (scoreMargin or 0)
  for k, order in pairs(allOrders) do
    if isTargetOrderType(order:GetType()) then
      local orderScore = order:GetTotalScore(self) or -1
      if left <= orderScore and right > orderScore then
        local bSunFlowerOrder = SunshineModel ~= nil and 0 < SunshineModel:GetAddOrderBoostScoreByOrder(order)
        local bCanDeliver = order:GetState() == OrderState.CanDeliver
        if bSunFlowerOrder and bCanDeliver then
          table.insert(mapSeparatedOrders[priority.Sun_Finish], order)
        elseif bSunFlowerOrder and not bCanDeliver then
          table.insert(mapSeparatedOrders[priority.Sun_Unfinish], order)
        elseif not bSunFlowerOrder and bCanDeliver then
          table.insert(mapSeparatedOrders[priority.NoSun_Finish], order)
        elseif not bSunFlowerOrder and not bCanDeliver then
          table.insert(mapSeparatedOrders[priority.NoSun_Unfinish], order)
        end
      else
        table.insert(mapSeparatedOrders[priority.Others], order)
      end
    end
  end
  
  local function getOffsetRangeScore(score)
    if score < left then
      return left - score
    elseif score >= right then
      return score - right
    else
      return 0
    end
  end
  
  for k, v in pairs(mapSeparatedOrders) do
    if not Table.IsEmpty(v) then
      if k ~= priority.Others then
        table.sort(mapSeparatedOrders[k], function(orderA, orderB)
          local scoreA = orderA:GetTotalScore(self) or -1
          local scoreB = orderB:GetTotalScore(self) or -1
          return scoreA < scoreB
        end)
      else
        table.sort(mapSeparatedOrders[k], function(orderA, orderB)
          local scoreA = getOffsetRangeScore(orderA:GetTotalScore(self) or -1)
          local scoreB = getOffsetRangeScore(orderB:GetTotalScore(self) or -1)
          return scoreA < scoreB
        end)
      end
    end
  end
  for i = 1, priority.Others do
    if not Table.IsEmpty(mapSeparatedOrders[i]) then
      if i == priority.Others then
        return mapSeparatedOrders[i][1], i
      else
        return mapSeparatedOrders[i][#mapSeparatedOrders[i]], i
      end
    end
  end
end

function MainOrderModel:IsSunshineNewbieUnlocked()
  return self.m_orders.newbie_12_1_1 or self:IsFixedOrderFinished("newbie_12_1_1")
end

function MainOrderModel:GetOrderItemConfig(car)
  return self.m_orderItemConfig[car] or self.m_orderItemConfig[0]
end

function MainOrderModel:IsNewRuleOpen()
  return not Table.IsEmpty(self.m_orderItemConfig)
end

function MainOrderModel:_UpdateOrderItemConfig()
  local configMD5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.OrderItem)
  if self.m_orderItemConfigMd5 == configMD5 then
    return
  end
  self.m_orderItemConfigMd5 = configMD5
  local list = Table.ShallowCopy(GM.ConfigModel:GetServerConfig(ServerConfigKey.OrderItem)) or {}
  self.m_orderItemConfig = {}
  for _, config in pairs(list) do
    if config.car == "default" then
      self.m_orderItemConfig[0] = Table.ShallowCopy(config)
    else
      local car = tonumber(config.car:sub(4))
      Log.Assert(car ~= nil, "\232\174\162\229\141\149\230\150\176\232\167\132\229\136\153\229\143\130\230\149\176\233\133\141\231\189\174\233\157\158\230\179\149, id:" .. config.id, LogTag.ConfigCheck)
      self.m_orderItemConfig[car] = Table.ShallowCopy(config)
    end
  end
  if self.m_randomOrderConfig then
    self:_UpdateOrderItemCdConfig()
  end
end

function MainOrderModel:_UpdateOrderItemCdConfig()
  for _, config in pairs(self.m_orderItemConfig) do
    config.hardItemCD = math.max(0, self.m_randomOrderConfig.recentlyOrder - config.hardItemCD)
  end
end

function MainOrderModel:GetLaneCarCountConfig()
  return self.m_mapCarCount
end
