PropertyDataManager = {}
PropertyDataManager.__index = PropertyDataManager

function PropertyDataManager:Init()
  Log.Info("PropertyDataManager\229\136\157\229\167\139\229\140\150")
  self.m_base64 = require("Model.Network.Base64")
  self.m_propItems = {}
  self.m_animQueue = {}
  self.m_lastAnimTime = 0
  self.m_animQueueLen = 0
end

function PropertyDataManager:LoadServerConfig()
  local md5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.PropertyItem)
  if self.m_propItemsMD5 ~= md5 then
    local configs = GM.ConfigModel:GetServerConfig(ServerConfigKey.PropertyItem) or Table.Empty
    self.m_propItems = {}
    for _, v in pairs(configs) do
      local config = Table.ShallowCopy(v)
      config.value = ConfigUtil.GetCurrencyFromStr(v.value)
      self.m_propItems[v.itemId] = config
    end
  end
  md5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.ItemsReplacedConfig)
  if self.m_itemReplacedMD5 ~= md5 then
    self.m_itemReplacedMD5 = md5
    local configs = GM.ConfigModel:GetServerConfig(ServerConfigKey.ItemsReplacedConfig) or Table.Empty
    self.m_mapItem2ReplacedInfo = {}
    for _, config in ipairs(configs) do
      if self.m_mapItem2ReplacedInfo[config.item] ~= nil and GameConfig.IsTestMode() then
        Log.Error("items_replace\232\161\168item\229\173\151\230\174\181\233\135\141\229\164\141\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174!")
      end
      self.m_mapItem2ReplacedInfo[config.item] = self.m_mapItem2ReplacedInfo[config.item] or {}
      table.insert(self.m_mapItem2ReplacedInfo[config.item], config)
    end
  end
end

function PropertyDataManager:IsPropertyType(type)
  if self.m_mapPropertyType == nil then
    self.m_mapPropertyType = {}
    for _, v in pairs(EPropertyType) do
      self.m_mapPropertyType[v] = true
    end
  end
  return self.m_mapPropertyType[type] or self.m_propItems[type]
end

function PropertyDataManager:Acquire(arrProperties, source, scene, map, acquireLogExt)
  Log.Assert(source == EPropertySource.Buy or source == EPropertySource.Give, "should only acquire buy or give property")
  local propArr
  for i = 1, #arrProperties do
    local type = arrProperties[i][PROPERTY_TYPE]
    local count = arrProperties[i][PROPERTY_COUNT]
    local validTime
    local activityType, handler = self:_GetActivityHandler(type, "acquire")
    if ToolCodeToLevel[type] then
      local amount = ToolLevelAmountMap[ToolCodeToLevel[type]]
      local propType = GM.ItemDataModel:GetChainId(type)
      local key = self:GetPropertyKey(propType, source)
      GM.ItemDataModel:SetUnlocked(type)
      local originNum = self:GetPropertyNum(propType)
      GM.UserModel:ChangeNumber(key, count * amount)
      local newNum = count * amount + originNum
      local delta = math.floor(newNum) - math.floor(originNum)
      if 0 < delta then
        GM.BIManager:LogAcquire(propType, delta, scene, source == EPropertySource.Give, map, acquireLogExt)
        propArr = propArr or {}
        propArr[#propArr + 1] = {
          [PROPERTY_TYPE] = propType,
          [PROPERTY_COUNT] = delta
        }
      end
      if 1 <= self:GetPropertyNum(propType) then
        GM.ItemDataModel:SetUnlocked(ToolCode[propType])
      end
    elseif activityType ~= nil then
      local model = GM.ActivityManager:GetModel(activityType)
      model[handler](model, count)
    elseif type == EPropertyType.Energy then
      local energyModel = EnergyModel.GetCurrentEnergyModel(type)
      energyModel:AddEnergy(count, true)
    elseif type == EPropertyType.EnergyInfiniteTime then
      local energyModel = EnergyModel.GetCurrentEnergyModel()
      energyModel:AddEnergyInfiniteTime(count)
    elseif self.m_propItems[type] then
      type, count, validTime = self:UsePropItem(type, count)
    elseif PassActivityModel.IsVIPTicket(type) then
      local bpModel
      for actType, actDefinition in pairs(PassActivityDefinition) do
        bpModel = GM.ActivityManager:GetModel(actType)
        if bpModel ~= nil and bpModel:TryAcquireVIPTicket(type) then
          break
        end
      end
    elseif HuntStreakModel.IsVIPTicket(type) then
      local hsModel
      for actType, actDefinition in pairs(HuntStreakDefinition) do
        hsModel = GM.ActivityManager:GetModel(actType)
        if hsModel ~= nil and hsModel:TryAcquireVIPTicket() then
          break
        end
      end
    elseif HuntMapActivityModel.IsVIPTicket(type) then
      local hmModel
      for actType, actDefinition in pairs(HuntMapActivityDefinition) do
        hmModel = GM.ActivityManager:GetModel(actType)
        if hmModel ~= nil and hmModel:TryAcquireVIPTicket() then
          break
        end
      end
    elseif FreefallActivityModel.IsHitTokenType(type) then
      local model = FreefallActivityModel.GetActiveModel()
      if model ~= nil then
        model:AcquireHitTokens({
          arrProperties[i]
        })
      end
    elseif type == EPropertyType.FreefallBossRewardToken then
      local model = FreefallActivityModel.GetActiveModel()
      if model ~= nil then
        model:AcquireBossScore(arrProperties[i])
      end
    elseif type == EPropertyType.FreefallRoundRewardToken then
      local model = FreefallActivityModel.GetActiveModel()
      if model ~= nil then
        model:AcquireRoundScore(arrProperties[i])
      end
    elseif BundleDefinition.IsBundleTokenType(type) then
      local bundleModel = GM.BundleManager:GetModel(EBundleType.TokenChain)
      if bundleModel then
        bundleModel:OnAcquireBundleToken(arrProperties[i])
      end
    elseif GM.UISkinModel:IsSkinInDuration(type) then
      GM.UISkinModel:TryUnlockUISkin(type, scene)
    else
      local key = self:GetPropertyKey(type, source)
      GM.UserModel:ChangeNumber(key, count)
      if GameConfig.IsTestMode() and (scene == EBIType.ItemCollect or scene == EBIType.SuperItemCollect) then
        if type == EPropertyType.Gem then
          GM.UserModel:ChangeNumber(EPropertyTestKey.GemAcquireFromBoardCollect, count)
        elseif type == EPropertyType.Gold then
          GM.UserModel:ChangeNumber(EPropertyTestKey.GoldAcquireFromBoardCollect, count)
        end
      end
    end
    if validTime then
      acquireLogExt = acquireLogExt and acquireLogExt .. ";expt:" .. validTime or "expt:" .. validTime
    end
    if type == EPropertyType.SunshineOrderToken then
      if GM.ActivityManager:IsSuperSunshineActive() then
        acquireLogExt = acquireLogExt and acquireLogExt .. ";supersunshine:1" or "supersunshine:1"
      end
      if GM.ActivityManager:IsSunshineGroupRacing() then
        acquireLogExt = acquireLogExt and acquireLogExt .. ";grouprace:1" or "grouprace:1"
      end
    end
    GM.BIManager:LogAcquire(type, count, scene, source == EPropertySource.Give, map, acquireLogExt)
  end
  if not Table.IsEmpty(propArr) then
    EventDispatcher.DispatchEvent(EEventType.PropertyAcquired, {arrProperties = propArr, scene = scene})
  end
  EventDispatcher.DispatchEvent(EEventType.PropertyAcquired, {arrProperties = arrProperties, scene = scene})
  for i = 1, #arrProperties do
    local type = arrProperties[i][PROPERTY_TYPE]
    local count = arrProperties[i][PROPERTY_COUNT]
    if type == EPropertyType.Gold and scene ~= EBIType.ItemSell then
      EventDispatcher.DispatchEvent(EEventType.CollectGold, {count = count, scene = scene})
    end
    if type == EPropertyType.Gold or type == EPropertyType.Energy or type == EPropertyType.Gem or type == EPropertyType.Experience then
      CSPlatform:SDK_TrackEvent("virtual_resource_transaction", type .. ":" .. count)
      if type == EPropertyType.Experience then
        EventDispatcher.DispatchEvent(EEventType.AcquireExp)
      end
    end
  end
end

function PropertyDataManager:AcquireWithCollectAnimation(arrProperties, source, uiWorldPos, customData, scene)
  self:Acquire(arrProperties, source, scene)
  self:PlayCollectAnimation(arrProperties, uiWorldPos, customData)
end

function PropertyDataManager:AcquireWithSimpleAnimation(arrProperties, source, scene)
  self:Acquire(arrProperties, source, scene)
  self:PlayAcquireAnimation(arrProperties)
end

function PropertyDataManager:PlayCollectAnimation(arrProperties, uiWorldPos, customData, bNewLayout)
  if bNewLayout then
    table.insert(self.m_animQueue, 1, {
      arrProperties = arrProperties,
      uiWorldPos = uiWorldPos,
      customData = customData
    })
    self.m_animQueueLen = self.m_animQueueLen + 1
  else
    EventDispatcher.DispatchEvent(EEventType.PlayCollectAnimation, {
      arrProperties = arrProperties,
      uiWorldPos = uiWorldPos,
      customData = customData
    })
  end
end

function PropertyDataManager:LateUpdate()
  if self.m_animQueueLen <= 0 then
    return
  end
  local curTime = os.clock()
  if curTime >= self.m_lastAnimTime + 0.5 then
    if self.m_animQueueLen == 1 then
      EventDispatcher.DispatchEvent(EEventType.PlayCollectAnimation, self.m_animQueue[1])
      self.m_animQueue[1] = nil
      self.m_animQueueLen = 0
    else
      local data1 = table.remove(self.m_animQueue, self.m_animQueueLen)
      local data2 = table.remove(self.m_animQueue, self.m_animQueueLen - 1)
      self.m_animQueueLen = self.m_animQueueLen - 2
      if data1.uiWorldPos == data2.uiWorldPos then
        UIUtil._AddVector(data1.uiWorldPos, -60, 0, 0)
        UIUtil._AddVector(data2.uiWorldPos, 60, 0, 0)
      end
      if data1.customData[1].specialFloat == true and data2.customData[1].specialFloat == true then
        data1.customData[1].specialFloatPos = Vector3(-80, 0, 0)
        data2.customData[1].specialFloatPos = Vector3(80, 0, 0)
      end
      EventDispatcher.DispatchEvent(EEventType.PlayCollectAnimation, data1)
      EventDispatcher.DispatchEvent(EEventType.PlayCollectAnimation, data2)
    end
    self.m_lastAnimTime = curTime
  end
end

function PropertyDataManager:SetRewardButtonInView(arrRewards)
  EventDispatcher.DispatchEvent(EEventType.SetRewardButtonInView, {arrRewards = arrRewards})
end

function PropertyDataManager:PlayAcquireAnimation(arrProperties)
  for _, property in ipairs(arrProperties) do
    EventDispatcher.DispatchEvent(EEventType.PlayAcquireAnimation, {property = property})
  end
end

function PropertyDataManager:DispatchConsumeEvent(propertyType, num, scene, consumer, map, ext)
  local message = {
    property = {
      [PROPERTY_TYPE] = propertyType,
      [PROPERTY_COUNT] = num
    }
  }
  EventDispatcher.DispatchEvent(EEventType.PropertyConsumed, message)
  GM.BIManager:LogUseItem(propertyType, num, scene, consumer, map, ext)
end

local mapTestIgnoreProperties = {
  [EPropertyType.Gem] = true,
  [EPropertyType.Energy] = true
}

function PropertyDataManager:Consume(propertyType, num, scene, consumer, map, ext)
  num = num or 1
  if num < 0 then
    Log.Error("PropertyDataManager:Consume num < 0")
    return false
  end
  if num == 0 then
    return true
  end
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and mapTestIgnoreProperties[propertyType] then
    self:DispatchConsumeEvent(propertyType, num, scene, consumer, map, ext)
    return true
  end
  local activityType, handler = self:_GetActivityHandler(propertyType, "consume")
  if activityType ~= nil then
    local model = GM.ActivityManager:GetModel(activityType)
    local result = model[handler](model, num)
    if result then
      GM.BIManager:LogUseItem(propertyType, num, scene, consumer, map, ext)
      CSPlatform:SDK_TrackEvent("use_prop", propertyType .. ":" .. num)
    end
    return result
  end
  if propertyType == EPropertyType.Energy then
    local energyModel = EnergyModel.GetCurrentEnergyModel(propertyType)
    local result = energyModel:SubtractEnergy(num)
    if result then
      self:DispatchConsumeEvent(propertyType, num, scene, consumer, map, ext)
      CSPlatform:SDK_TrackEvent("virtual_resource_transaction", propertyType .. ":" .. -num)
    end
    return result
  end
  if num <= self:GetPropertyNum(propertyType) then
    local result = true
    local buyKey = self:GetPropertyKey(propertyType, EPropertySource.Buy)
    local buyNum = self:GetPropertyNum(propertyType, EPropertySource.Buy)
    if num <= buyNum then
      result = GM.UserModel:ChangeNumber(buyKey, -num)
    else
      local giveKey = self:GetPropertyKey(propertyType, EPropertySource.Give)
      result = GM.UserModel:ChangeNumber(buyKey, -buyNum) and GM.UserModel:ChangeNumber(giveKey, buyNum - num)
    end
    if result then
      self:DispatchConsumeEvent(propertyType, num, scene, consumer, map, ext)
      if propertyType == EPropertyType.Gold or propertyType == EPropertyType.Gem or propertyType == EPropertyType.Experience then
        CSPlatform:SDK_TrackEvent("virtual_resource_transaction", propertyType .. ":" .. -num)
      end
    end
    return result
  end
  return false
end

function PropertyDataManager:UsePropItem(itemId, num)
  local itemConfig = self.m_propItems[itemId]
  local type = itemConfig.value[PROPERTY_TYPE]
  local count = itemConfig.value[PROPERTY_COUNT]
  local time = count * num
  local model = GM.PropItemManager:GetModel(type)
  local ignoreLog
  if model then
    if type == EPropertyType.BalloonBox then
      ignoreLog = model:OnAcquired(num, itemConfig.exInfo, itemId, count)
    else
      ignoreLog = model:OnAcquired(time, itemConfig.exInfo, itemId)
    end
    EventDispatcher.DispatchEvent(EEventType.PropItemAcquired, type)
  end
  if ignoreLog ~= true then
    GM.BIManager:LogUseItem(type, time, "prop", "mb", EGameMode.Main)
  end
  if type == EPropertyType.TimedBuff or type == EPropertyType.MoreCardBuff then
    return itemConfig.exInfo, time, GM.GameModel:GetServerTime() + 604800
  end
  return type, time
end

function PropertyDataManager:GetPropItem(itemId)
  return self.m_propItems and self.m_propItems[itemId]
end

function PropertyDataManager:GetPropItemType(itemId)
  local itemConfig = self:GetPropItem(itemId)
  if itemConfig and itemConfig.value then
    return itemConfig.value[PROPERTY_TYPE]
  end
end

function PropertyDataManager:GetPropertyKey(key, source)
  if key == nil then
    return false
  end
  return key .. EPropertyKeySuffix[source]
end

function PropertyDataManager:GetPropertyNum(propertyType, propertySource)
  local activityType, handler = self:_GetActivityHandler(propertyType, "get_number")
  if activityType ~= nil then
    local model = GM.ActivityManager:GetModel(activityType)
    return model[handler](model)
  end
  if propertyType == EPropertyType.Energy then
    if propertySource == EPropertySource.Buy then
      return 0
    else
      local energyModel = EnergyModel.GetCurrentEnergyModel(propertyType)
      return energyModel:GetEnergy()
    end
  end
  if propertySource then
    return GM.UserModel:GetInNumber(self:GetPropertyKey(propertyType, propertySource))
  else
    return GM.UserModel:GetInNumber(self:GetPropertyKey(propertyType, EPropertySource.Give)) + GM.UserModel:GetInNumber(self:GetPropertyKey(propertyType, EPropertySource.Buy))
  end
end

local maxint = 2.147483647E9

function PropertyDataManager:PropertyToSyncDataTable(ePropertyType)
  local tb = {}
  for _, ePropertySource in pairs(EPropertySource) do
    local num = self:GetPropertyNum(ePropertyType, ePropertySource)
    tb[ePropertySource] = num and math.min(maxint, num)
  end
  return tb
end

function PropertyDataManager:PropertyToSyncData(ePropertyType)
  return json.encode(self:PropertyToSyncDataTable(ePropertyType))
end

function PropertyDataManager:PropertyFromSyncData(ePropertyType, propertyJson)
  propertyJson = propertyJson or ""
  local tb = json.decode(propertyJson) or {}
  local mapContent = {}
  for ePropertySource, count in pairs(tb) do
    mapContent[self:GetPropertyKey(ePropertyType, ePropertySource)] = {value = count}
  end
  GM.UserModel:BatchSet(mapContent)
  return tb
end

function PropertyDataManager:GetPropertyNumFromSyncData(propertyJson)
  local total = 0
  local tb = json.decode(propertyJson) or {}
  for _, count in pairs(tb) do
    total = total + count
  end
  return total
end

function PropertyDataManager:MergeProperties(arrFrom, arrTo)
  local mapMerged = {}
  for i = 1, #arrTo do
    local ePropertyType = arrTo[i][PROPERTY_TYPE]
    local iAmount = arrTo[i][PROPERTY_COUNT]
    mapMerged[ePropertyType] = iAmount
  end
  for i = 1, #arrFrom do
    local ePropertyType = arrFrom[i][PROPERTY_TYPE]
    local iAmount = arrFrom[i][PROPERTY_COUNT]
    if mapMerged[ePropertyType] then
      mapMerged[ePropertyType] = mapMerged[ePropertyType] + iAmount
    else
      mapMerged[ePropertyType] = iAmount
    end
  end
  local arrMerged = {}
  for type, count in pairs(mapMerged) do
    arrMerged[#arrMerged + 1] = {
      [PROPERTY_TYPE] = type,
      [PROPERTY_COUNT] = count
    }
  end
  return arrMerged
end

function PropertyDataManager:CreateNewUser()
  local mapContent = {}
  for _, v in pairs(EPropertyType) do
    mapContent[self:GetPropertyKey(v, EPropertySource.Give)] = {value = 0}
  end
  GM.UserModel:BatchSet(mapContent)
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.Initgemless) then
    self:Acquire({
      {
        [PROPERTY_TYPE] = EPropertyType.Gem,
        [PROPERTY_COUNT] = 45
      }
    }, EPropertySource.Give, EBIType.CreateNewUser)
  end
end

function PropertyDataManager:_GetActivityHandler(property, use)
  local activityType, handler = nil, "ActivityToken"
  local arrActDef = {
    {
      def = DecorationDefinition
    },
    {
      def = PassActivityDefinition
    },
    {
      def = OrderRankDefinition
    },
    {
      def = FlyingRaceActivityDefinition
    },
    {
      def = SunflowerDefinition
    },
    {
      def = HuntActivityDefinition,
      key = "TokenType"
    },
    {
      def = DigActivityDefinition,
      key = "ScorePropertyType"
    },
    {
      def = DropDefinition
    },
    {
      def = ConveyorBeltDefinition
    },
    {
      def = SuperWheelDefinition
    },
    {
      def = CoinRaceActivityDefinition
    },
    {
      def = PkRaceDefinition
    },
    {
      def = CloudsDashDefinition
    },
    {
      def = WeeklyActiveQuestDefinition
    },
    {
      def = DonutRaceDefinition
    },
    {
      def = DonutRaceDefinition,
      key = "DashTokenPropertyType",
      handler = "DashToken"
    },
    {
      def = FloatRaceDefinition
    },
    {
      def = SealDefinition
    },
    {
      def = HuntDashDefinition
    },
    {
      def = RoadRankDefinition
    },
    {
      def = TriggerPlaneDefinition
    },
    {
      def = DredgeActivityDefinition
    },
    {
      def = FreefallActivityDefinition
    },
    {
      def = CrackerRaceDefinition
    },
    {
      def = CrackerRaceDefinition,
      key = "DashTokenPropertyType",
      handler = "DashToken"
    },
    {
      def = KitchenRaceDefinition
    },
    {
      def = KitchenRaceDefinition,
      key = "DashTokenPropertyType",
      handler = "DashToken"
    },
    {
      def = PenguinBattleDefinition
    },
    {
      def = PenguinBattleDefinition,
      key = "ProgressTokenType",
      handler = "ProgressToken"
    },
    {
      def = DivingPkRaceDefinition
    },
    {
      def = DivingPkRaceDefinition,
      key = "DashTokenPropertyType",
      handler = "DashToken"
    },
    {
      def = OtterRankDefinition
    },
    {
      def = DartDashDefinition
    },
    {
      def = TopRaceDefinition
    },
    {
      def = MoreRoundRaceDefinition
    },
    {
      def = MoreRoundRaceDefinition,
      key = "ScrollType",
      handler = "DashToken"
    },
    {
      def = VolcanoRaceDefinition,
      key = "TokenPropertyType",
      handler = "OrderIndexIn"
    },
    {
      def = SingleJumpDefinition,
      key = "TokenPropertyType",
      handler = "OrderIndexIn"
    },
    {
      def = HuntAchiDefinition
    },
    {
      def = HuntAchiDefinition,
      key = "TrophyPropertyType",
      handler = "Trophy"
    },
    {
      def = EaterRankDefinition
    },
    {
      def = EaterRankDefinition,
      key = "DashTokenPropertyType",
      handler = "DashToken"
    }
  }
  for _, oneActDef in pairs(arrActDef) do
    if activityType ~= nil then
      break
    end
    for actType, actDef in pairs(oneActDef.def) do
      local tokenKey = oneActDef.key or "ActivityTokenPropertyType"
      if actDef[tokenKey] and property == actDef[tokenKey] then
        activityType = actType
        if oneActDef.handler ~= nil then
          handler = oneActDef.handler
        end
        break
      end
    end
  end
  local arrSingleProperty = {
    [EPropertyType.BandToken1] = {
      actType = ActivityType.Band
    },
    [EPropertyType.BandToken2] = {
      actType = ActivityType.Band
    },
    [EPropertyType.BandToken3] = {
      actType = ActivityType.Band
    },
    [EPropertyType.BandDouble] = {
      actType = ActivityType.Band,
      handler = "ActivityDoubleTime"
    },
    [EPropertyType.FireworksGalaToken] = {
      actType = ActivityType.FireworksGala
    },
    [EPropertyType.HuntMap1Key] = {
      actType = ActivityType.HuntMap1,
      handler = "ActivityKey"
    }
  }
  if activityType == nil and arrSingleProperty[property] ~= nil then
    activityType = arrSingleProperty[property].actType
    if arrSingleProperty[property].handler ~= nil then
      handler = arrSingleProperty[property].handler
    end
  end
  local arrGeneralActivityProperty = {
    [EPropertyType.WAQStar] = {
      def = WeeklyActiveQuestDefinition,
      checkFunc = function(actType)
        return GM.ActivityManager:GetModel(actType):GetState() ~= ActivityState.Released
      end,
      handler = "Star"
    },
    [EPropertyType.WAQDoubleStar] = {
      def = WeeklyActiveQuestDefinition,
      checkFunc = function(actType)
        return GM.ActivityManager:GetModel(actType):GetState() ~= ActivityState.Released
      end,
      handler = "Star"
    },
    [EPropertyType.HuntMapEnergyToken] = {
      def = HuntMapActivityDefinition,
      checkFunc = function(actType)
        return GM.ActivityManager:GetModel(actType):GetState() == ActivityState.Started
      end
    },
    [EPropertyType.WeekAQwheel] = {
      def = WeeklyActiveQuestDefinition,
      checkFunc = function(actType)
        return GM.ActivityManager:GetModel(actType):GetState() == ActivityState.Started
      end,
      handler = "WheelToken"
    },
    [EPropertyType.HuntMapDashToken] = {
      def = HuntMapActivityDefinition,
      checkFunc = function(actType)
        return GM.ActivityManager:GetModel(actType):GetState() == ActivityState.Started
      end,
      handler = "DigScore"
    }
  }
  if activityType == nil and arrGeneralActivityProperty[property] ~= nil then
    for actType, _ in pairs(arrGeneralActivityProperty[property].def) do
      if arrGeneralActivityProperty[property].checkFunc(actType) then
        activityType = actType
        handler = arrGeneralActivityProperty[property].handler or handler
        break
      end
    end
  end
  if use == "acquire" then
    handler = "Acquire" .. handler
  elseif use == "consume" then
    handler = "Consume" .. handler
  elseif use == "get_number" then
    handler = "Get" .. handler .. "Number"
  else
    handler = nil
  end
  return activityType, handler
end

function PropertyDataManager:GetItemReplacedConfig()
  return self.m_mapItem2ReplacedInfo or {}
end

function PropertyDataManager:RecoverGoldPoints()
  local num = self:GetPropertyNum(EPropertyType.Gold, EPropertySource.Give)
  local newNum = math.ceil(num)
  local key = self:GetPropertyKey(EPropertyType.Gold, EPropertySource.Give)
  if num ~= newNum then
    GM.UserModel:Set(key, newNum)
  end
end
