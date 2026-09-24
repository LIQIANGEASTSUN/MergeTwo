ActivityManager = {}
ActivityManager.__index = ActivityManager
DBServerItemConfigKey = "ServerItemConfig"

local function DEFINE_SYNC_DATA(model, name, value)
  local variableName = "m_" .. string.lower(string.sub(name, 1, 1)) .. string.sub(name, 2)
  model[variableName] = value
  model["Get" .. name] = function(model)
    return model[variableName]
  end
  model["Sync" .. name] = function(model, dataArray)
    value:Clear()
    local contents = {}
    for _, data in ipairs(dataArray) do
      local index = string.find(data, ",")
      local name = string.sub(data, 1, index - 1)
      local data = string.sub(data, index + 1)
      contents[name] = {data = data}
    end
    value:BatchSet(contents)
    local activityModels = model:GetModels()
    if not Table.IsEmpty(activityModels) then
      for _, model in pairs(activityModels) do
        model:FromSyncData()
      end
    end
  end
end

function ActivityManager:Init()
  DEFINE_SYNC_DATA(self, "GeneralData", GM.DBTableManager:GetTable(EDBTableConfigs.Activity))
  DEFINE_SYNC_DATA(self, "EventActivityData", GM.DBTableManager:GetTable(EDBTableConfigs.EventActivity))
  self.m_staticActivityData = GM.DBTableManager:GetTable(EDBTableConfigs.StaticActivityData)
  self.m_localData = GM.DBTableManager:GetTable(EDBTableConfigs.ActivityLocalData)
  ModelHelper.DefineDispatchEvent(self, "LateInit")
  ModelHelper.DefineBoolEvent(self, "IsSendingRankRequest")
  ModelHelper.DefineBoolEvent(self, "CanHeartBeat")
  EventDispatcher.AddListener(EEventType.CollectGold, self, self._OnCollectGold)
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
  EventDispatcher.AddListener(EEventType.ConsumeEnergy, self, self._OnConsumeEnergy)
  self.m_models = {}
  self:_InitResourceDownloadWindowPopState()
end

function ActivityManager:GetStaticActivityData()
  return self.m_staticActivityData
end

function ActivityManager:GetLocalData()
  return self.m_localData
end

function ActivityManager:SyncStaticActivityData(dataArr)
  self.m_staticActivityData:FromArr(dataArr or {})
end

function ActivityManager:Destroy()
  if self.m_models ~= nil then
    for _, model in pairs(self.m_models) do
      model:Destroy()
    end
  end
  EventDispatcher.RemoveTarget(self)
end

function ActivityManager:InvokeFuncByTopologicalSort(funcName)
  if self.m_models ~= nil then
    local arrActivityType = self:GetActivityTopologicalSortRes()
    if arrActivityType ~= nil then
      local model
      for _, actType in ipairs(arrActivityType) do
        model = self.m_models[actType]
        if model ~= nil then
          model[funcName](model)
        end
      end
    else
      for _, model in pairs(self.m_models) do
        model[funcName](model)
      end
    end
  end
end

function ActivityManager:UpdatePerSecond()
  if not self.m_bResourceCheckFinished then
    return
  end
  self:InvokeFuncByTopologicalSort("UpdatePerSecond")
end

function ActivityManager:IsResourceCheckFinished()
  return self.m_bResourceCheckFinished
end

function ActivityManager:Update()
  if not self.m_bResourceCheckFinished then
    return
  end
  if self.m_models ~= nil then
    for _, model in pairs(self.m_models) do
      model:Update()
    end
  end
end

function ActivityManager:LoadServerConfig()
  self:InvokeFuncByTopologicalSort("LoadServerConfig")
end

function ActivityManager:LoadServerItemConfig()
  local dbTable = self:GetGeneralData()
  for name, data in pairs(dbTable:GetValues()) do
    if data and data.data then
      local activityData = json.decode(data.data)
      if activityData and activityData[DBServerItemConfigKey] and not StringUtil.IsNilOrEmpty(activityData[DBServerItemConfigKey].value) then
        local strItemConfig = activityData[DBServerItemConfigKey].value
        local mapItemConfig = json.decode(StringUtil.Replace(strItemConfig, "@", ","))
        if not Table.IsEmpty(mapItemConfig) then
          for code, config in pairs(mapItemConfig) do
            if GM.ItemDataModel:IsItemExist(code) then
              GM.ItemDataModel:UpdateItemConfig(code, config.add, config.del)
            end
          end
        end
      end
    end
  end
end

function ActivityManager:OnSyncDataFinished()
  local keys = self.m_generalData:GetPrimaryKeys()
  for _, key in pairs(keys) do
    if not Table.Contain(VirtualDBTableName, key) then
      self.m_generalData:Remove(key)
    end
  end
  local arrActivityType = self:GetActivityTopologicalSortRes()
  self.m_models = {}
  if arrActivityType ~= nil then
    for _, type in ipairs(arrActivityType) do
      ActivityModelFactory.AddModel(type)
    end
  else
    for _, type in pairs(ActivityType) do
      ActivityModelFactory.AddModel(type)
    end
  end
end

function ActivityManager:OnCheckResourcesFinished()
  self.m_bResourceCheckFinished = true
  self:UpdatePerSecond()
  for _, model in pairs(self.m_models) do
    if model.OnCheckResourcesFinished then
      model:OnCheckResourcesFinished()
    end
  end
  LuckyStarModel.TryTransformLuckyStarItem()
end

function ActivityManager:AddModel(type, model)
  self.m_models[type] = model
end

function ActivityManager:GetModel(type)
  return self.m_models and self.m_models[type] or nil
end

function ActivityManager:GetModels()
  return self.m_models
end

function ActivityManager:FromHeartBeat(data, tbMsgReq)
  if self.m_models ~= nil then
    for _, model in pairs(self.m_models) do
      model:FromHeartBeat(data, tbMsgReq)
    end
  end
end

function ActivityManager:ToHeartBeat(data)
  if self.m_models == nil then
    return nil
  end
  local result = {}
  for _, model in pairs(self.m_models) do
    model:ToHeartBeat(result)
  end
  result.deco_token = 0
  result.order_token = result.order_token or 0
  result.order_robot_update_min_token = result.order_robot_update_min_token or 0
  result.drop_token = result.drop_token or 0
  result.drop_robot_update_min_token = result.drop_robot_update_min_token or 0
  result.road_token = result.road_token or 0
  result.road_robot_update_min_token = result.road_robot_update_min_token or 0
  return result
end

function ActivityManager:GetResourceLabels()
  local labels = {}
  for _, model in pairs(self.m_models) do
    if model:NeedCheckResource() then
      for _, label in ipairs(model:GetResourceLabels()) do
        table.insert(labels, label)
      end
    end
  end
  return labels
end

function ActivityManager:GetActivityTopologicalSortRes()
  local mapActivityType = {}
  for _, activityType in pairs(ActivityType) do
    mapActivityType[activityType] = true
  end
  local graph = {}
  local serverConfig, targetActType
  for _, activityType in pairs(ActivityType) do
    serverConfig = GM.ConfigModel:GetServerConfig(activityType)
    if graph[activityType] == nil then
      graph[activityType] = {}
    end
    if serverConfig ~= nil and not Table.IsEmpty(serverConfig.eventFinish) then
      local arrDuplicate = {}
      for _, config in pairs(serverConfig.eventFinish) do
        targetActType = config.finishType
        if targetActType ~= nil and mapActivityType[targetActType] and not arrDuplicate[targetActType] then
          arrDuplicate[targetActType] = true
          graph[targetActType] = graph[targetActType] or {}
          table.insert(graph[targetActType], activityType)
        elseif GameConfig.IsTestMode() then
          Log.Error("eventFinish\233\133\141\231\189\174\228\184\141\229\144\136\230\179\149, \233\133\141\231\189\174\233\135\141\229\164\141\230\136\150\232\128\133finishType\230\180\187\229\138\168\229\144\141\231\167\176\228\184\141\229\173\152\229\156\168: " .. (targetActType or "nil"))
        end
      end
    end
  end
  for noCDTrainType, _ in pairs(NoCDTrainDefinition) do
    for bingoType, _ in pairs(BingoDefinition) do
      if graph[noCDTrainType] == nil then
        graph[noCDTrainType] = {}
      end
      table.insert(graph[noCDTrainType], bingoType)
    end
  end
  for noCDTrainType, _ in pairs(NoCDBingoDefinition) do
    for bingoType, _ in pairs(BingoDefinition) do
      if graph[noCDTrainType] == nil then
        graph[noCDTrainType] = {}
      end
      table.insert(graph[noCDTrainType], bingoType)
    end
  end
  local limitTypeArr = {
    ActivityType.LimitPickLevel,
    ActivityType.LimitPickReward,
    ActivityType.LimiteOrder,
    ActivityType.LimiteOrder_Clone
  }
  for idx = 1, #limitTypeArr - 1 do
    local actType = limitTypeArr[idx]
    if graph[actType] == nil then
      graph[actType] = {}
    end
    for i = idx + 1, #limitTypeArr do
      table.insert(graph[actType], limitTypeArr[i])
    end
  end
  for surpriseChestOneTimeType, _ in pairs(SurpriseChestOneTimeDefinition) do
    for surpriseChestActivityType, _ in pairs(SurpriseChestActivityDefinition) do
      if graph[surpriseChestOneTimeType] == nil then
        graph[surpriseChestOneTimeType] = {}
      end
      table.insert(graph[surpriseChestOneTimeType], surpriseChestActivityType)
    end
  end
  for albumType, _ in pairs(AlbumDefinition) do
    for dailyOceanTaskType, _ in pairs(DailyOceanTaskDefinition) do
      if graph[albumType] == nil then
        graph[albumType] = {}
      end
      table.insert(graph[albumType], dailyOceanTaskType)
    end
  end
  graph[ActivityType.TimedBuff] = {
    ActivityType.ToolBuff
  }
  HuntActivityModel.AddDependencyGraph(graph)
  for huntAchiType, _ in pairs(HuntAchiDefinition) do
    for huntActivityType, _ in pairs(HuntActivityDefinition) do
      if graph[huntAchiType] == nil then
        graph[huntAchiType] = {}
      end
      table.insert(graph[huntAchiType], huntActivityType)
    end
  end
  AchievementMissionModel.AddDependencyGraph(graph)
  local result = Table.TopologicalSort(graph)
  if result == nil and GameConfig.IsTestMode() then
    Log.Error("eventFinish \229\173\152\229\156\168\231\142\175\229\189\162\228\190\157\232\181\150\229\133\179\231\179\187\239\188\140\232\175\183\230\163\128\230\159\165")
  end
  return result
end

function ActivityManager:RestoreIapRewards(iapType, bIsUserTriggered)
  assert(self.m_models ~= nil)
  for _, model in pairs(self.m_models) do
    local state = model:GetState()
    if (state == ActivityState.Started or state == ActivityState.Ended) and model:RestoreIapRewards(iapType, bIsUserTriggered) then
      return true
    end
  end
  return false
end

function ActivityManager:_OnCollectGold(msg)
  local goldCount = msg.count
  local scene = msg.scene
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.GetGold) and scene or not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.GetGold) and not scene then
    for _, model in pairs(self.m_models) do
      if model.OnCollectGold and model:GetState() == ActivityState.Started then
        model:OnCollectGold(goldCount)
      end
    end
  end
end

function ActivityManager:_OnOrderFinished(msg)
  for _, model in pairs(self.m_models) do
    model:_OnOrderFinished(msg)
  end
end

function ActivityManager:_OnConsumeEnergy(msg)
  for _, model in pairs(self.m_models) do
    model:_OnConsumeEnergy(msg)
  end
end

function ActivityManager:GenerateExtraItemsMap(nCostEnergy, gameMode)
  local mapActivityExtraItems = {}
  local tempMap
  for _, model in pairs(self.m_models) do
    if model.GenerateExtraItemsMap and model:GetState() == ActivityState.Started then
      tempMap = model:GenerateExtraItemsMap(nCostEnergy, gameMode)
      if not Table.IsEmpty(tempMap) then
        mapActivityExtraItems[#mapActivityExtraItems + 1] = tempMap
      end
    end
  end
  return mapActivityExtraItems
end

function ActivityManager:GetOrderCodeStateMap(bOnlyCanDeliver)
  local map = {}
  local tempMap
  for _, model in pairs(self.m_models) do
    if model.GetOngoingRequirementsMap and model.GetOngoingOrder and model:GetState() == ActivityState.Started then
      local order = model:GetOngoingOrder()
      if not bOnlyCanDeliver or order and order:GetState() == OrderState.CanDeliver then
        tempMap = model:GetOngoingRequirementsMap()
        if tempMap then
          for code, count in pairs(tempMap) do
            map[code] = (map[code] or 0) + count
          end
        end
      end
    end
  end
  local model = self.m_models[ActivityType.ExtraCustomer]
  for _, order in pairs(model:GetOngoingOrders()) do
    if not bOnlyCanDeliver or order and order:GetState() == OrderState.CanDeliver then
      for _, code in pairs(order:GetRequirements()) do
        map[code] = (map[code] or 0) + 1
      end
    end
  end
  return map
end

function ActivityManager:TryFinishOrders(itemModel)
  for _, model in pairs(self.m_models) do
    if model.GetOngoingOrder and model:GetState() == ActivityState.Started then
      local order = model:GetOngoingOrder()
      if self:_FinishOrder(order, itemModel, model) then
        return true
      end
    end
  end
  local model = self.m_models[ActivityType.ExtraCustomer]
  local orders = model:GetOngoingOrders()
  for _, order in pairs(orders) do
    if self:_FinishOrder(order, itemModel, model) then
      return true
    end
  end
  return false
end

function ActivityManager:_FinishOrder(order, itemModel, actModel)
  if order and order:NowCanFinishBy(itemModel:GetCode()) then
    if order:CanDeliverUseStore() then
      GM.UIManager:OpenView(UIPrefabConfigName.UseInventoryItemConfirmWindow, order, function()
        actModel:FinishOrder(order, itemModel)
      end)
    else
      actModel:FinishOrder(order, itemModel)
    end
    return true
  end
  return false
end

function ActivityManager:GetAllUnFinishedOrders()
  local unfinishedOrders = {}
  if not GM.CheckResourcesStageFinished then
    return unfinishedOrders
  end
  for _, model in pairs(self.m_models) do
    if model:GetState() == ActivityState.Started then
      if model.GetAllUnFinishedOrders then
        local orders = model:GetAllUnFinishedOrders()
        if orders then
          Table.ListAppend(unfinishedOrders, orders)
        end
      elseif model.GetOngoingOrder then
        local order = model:GetOngoingOrder()
        if order then
          unfinishedOrders[#unfinishedOrders + 1] = order
        end
      end
    end
  end
  local model = self.m_models[ActivityType.ExtraCustomer]
  for _, order in pairs(model:GetOngoingOrders()) do
    unfinishedOrders[#unfinishedOrders + 1] = order
  end
  return unfinishedOrders
end

function ActivityManager:GetOngoingOrders()
  local orders = {}
  if not GM.CheckResourcesStageFinished then
    return orders
  end
  for _, model in pairs(self.m_models) do
    if model.GetOngoingOrder and model:GetState() == ActivityState.Started then
      local order = model:GetOngoingOrder()
      if order then
        orders[#orders + 1] = order
      end
    end
  end
  local model = self.m_models[ActivityType.ExtraCustomer]
  for _, order in pairs(model:GetOngoingOrders()) do
    orders[#orders + 1] = order
  end
  return orders
end

function ActivityManager:GetOngoingOrdersAndActivityTypes()
  local activityTypes = {}
  local orders = {}
  if not GM.CheckResourcesStageFinished then
    return orders, activityTypes
  end
  for _, model in pairs(self.m_models) do
    if model.GetOngoingOrder and model:GetState() == ActivityState.Started then
      local order = model:GetOngoingOrder()
      if order then
        orders[#orders + 1] = order
        activityTypes[#activityTypes + 1] = model:GetType()
      end
    end
  end
  local model = self.m_models[ActivityType.ExtraCustomer]
  for _, order in pairs(model:GetOngoingOrders()) do
    orders[#orders + 1] = order
    activityTypes[#activityTypes + 1] = ActivityType.ExtraCustomer
  end
  return orders, activityTypes
end

function ActivityManager:IsOrderRalatedItem(itemCode)
  local itemDataModel = GM.ItemDataModel
  for _, model in pairs(self.m_models) do
    if model.GetOngoingOrder and model:GetState() == ActivityState.Started then
      local order = model:GetOngoingOrder()
      if order then
        for _, code in pairs(order:GetRequirements()) do
          if itemDataModel:IsRalatedItem(code, itemCode) then
            return true
          end
        end
      end
    elseif model.IsRalatedItem and model:GetState() == ActivityState.Started and model:IsRalatedItem(itemCode) then
      return true
    end
  end
end

function ActivityManager:GetOneActivityModel(eModelType, eActivityState)
  eActivityState = eActivityState or ActivityState.Started
  for _, model in pairs(self.m_models) do
    if model.eModelType == eModelType and model:GetState() == eActivityState then
      return model
    end
  end
  return nil
end

function ActivityManager:SetResourceDownloadWindowPoped(bPoped)
  self.m_bResourceDownloadWindowPoped = bPoped
end

function ActivityManager:IsResourceDownloadWindowPoped()
  return self.m_bResourceDownloadWindowPoped
end

function ActivityManager:_InitResourceDownloadWindowPopState()
  local restartTime = tonumber(PlayerPrefs.GetString(EPlayerPrefKey.RestartTimeByDownloadResource, "0") or "0") or 0
  if math.abs(TimeUtil.GetTimeInSecond() - restartTime) <= 60 then
    self.m_bResourceDownloadWindowPoped = true
  end
  PlayerPrefs.SetString(EPlayerPrefKey.RestartTimeByDownloadResource, "")
end

function ActivityManager:GetEndNoticeStatus()
  local arr = {}
  for _, eModelType in pairs(ActivityModelType) do
    if eModelType ~= ActivityModelType.Other then
      local eTimeForSubscription = 0
      local model = self:GetOneActivityModel(eModelType)
      if model then
        eTimeForSubscription = model:GetETimeForSubscription()
      end
      arr[eModelType] = eTimeForSubscription
    end
  end
  Log.Assert(Table.GetMapSize(ActivityModelType) - 1 == #arr, "\230\173\164\229\164\132\229\143\175\232\131\189\230\156\137\230\188\143\231\154\132 index")
  return arr
end

function ActivityManager:GetIceItemInfo(isTempIce)
  local iceModel = isTempIce and self.m_models[ActivityType.TempItem] or nil
  if iceModel then
    return iceModel:GetItemStartTimer(), iceModel:GetItemDuration()
  end
  if not isTempIce then
    return nil, nil
  else
    local data = self.m_generalData:GetValue(VirtualDBTableName.TempItem, "data")
    if not StringUtil.IsNilOrEmpty(data) then
      data = json.decode(data)
      if not data[TempItemModel.ItemStartTimerKey] or not data[TempItemModel.ItemDurationKey] then
        return nil, nil
      end
      return data[TempItemModel.ItemStartTimerKey].value, data[TempItemModel.ItemDurationKey].value
    end
  end
  if GameConfig.IsTestMode() then
    return GM.GameModel:GetServerTime(), 10
  end
end

function ActivityManager:AddIceItemInfo(code)
  local tempIceItemModel = self.m_models[ActivityType.TempItem]
  if tempIceItemModel then
    tempIceItemModel:AddTempItem(code)
  end
end

function ActivityManager:GetIceTransformItem()
  local tempIceItemModel = self.m_models[ActivityType.TempItem]
  if tempIceItemModel then
    return tempIceItemModel:GetIceTransformItem()
  end
end

function ActivityManager:GetSunshineRewardPrefab()
  local sunshineModel = self.m_models[ActivityType.SunshineOrderBoost]
  if sunshineModel then
    return sunshineModel:GetSunshineRewardPrefab()
  end
end

function ActivityManager:GetSunshineTokenImage()
  local sunshineModel = self.m_models[ActivityType.SunshineOrderBoost]
  if sunshineModel then
    return sunshineModel:GetSunshineTokenImage()
  end
end

function ActivityManager:IsSuperSunshineActive()
  local sunshineModel = self.m_models[ActivityType.SunshineOrderBoost]
  if sunshineModel then
    local superModel = sunshineModel:GetSunperSunshineModel()
    return superModel and superModel:IsActive()
  end
end

function ActivityManager:IsSunshineGroupRacing()
  local sunshineModel = self.m_models[ActivityType.SunshineOrderBoost]
  if sunshineModel then
    return sunshineModel:GetRaceGroupModel() and sunshineModel:GetRaceGroupModel():IsInRacing()
  end
end

function ActivityManager:IsInSuperSunshineRewardSpan()
  local sunshineModel = self.m_models[ActivityType.SunshineOrderBoost]
  if sunshineModel then
    return sunshineModel:IsInSunshineProRewardSpan()
  end
end

function ActivityManager:HasAnyModelDontEnterMain(setState)
  local flag = false
  for _, model in pairs(self.m_models) do
    if model:GetState() == ActivityState.Started and not model:HasEnterMainBoardWhenStarted() and model.GetBoardEntryShowConfig then
      if setState then
        flag = true
        model:SetEnterMainBoardWhenStarted()
      else
        return true
      end
    end
  end
  return flag
end

function ActivityManager:GetCanSignUpActivityModels()
  local canSignUpModels = {}
  for _, model in pairs(self.m_models) do
    if model:IsActivityOpen() and model:CanSignUp() then
      table.insert(canSignUpModels, model)
    end
  end
  return canSignUpModels
end
