BaseOrderModel = {}
BaseOrderModel.__index = BaseOrderModel

function BaseOrderModel:Init(boardModel, dbFinFixTable)
  self.m_boardModel = boardModel
  self.m_dbFinFixTable = dbFinFixTable
  self.m_avatarMap = {}
end

function BaseOrderModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function BaseOrderModel:LoadFileConfig()
  Log.Assert(false, "LoadFileConfig()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrderModel:_LoadItemScoreData()
  Log.Assert(false, "_LoadItemScoreData()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrderModel:_LoadScoreConfig()
  self.m_mapGen2ITScore = {}
  self.m_notInOrderScore = {}
  local itemScoreMap = {}
  local itemScoreData = self:_LoadItemScoreData()
  self.m_mapITItemAvgScore = {}
  local model = GM.ItemDataModel
  for _, v in pairs(itemScoreData) do
    if model:IsInOrder(v.item) then
      self:_ParseItemScore(v.producer, v.item, v.score, itemScoreMap, model)
    elseif GM.ItemDataModel:IsItemExist(v.item) then
      local factor = GM.ItemDataModel:GetModelConfig(v.item).BufFactor or 1
      local score = v.score * factor
      if not self.m_notInOrderScore[v.producer] then
        self.m_notInOrderScore[v.producer] = {
          [v.item] = score
        }
      else
        self.m_notInOrderScore[v.producer][v.item] = score
      end
    end
  end
  for producer, list in pairs(itemScoreMap) do
    for chainId, value in pairs(list) do
      local maxLevel = model:GetChainMaxLevel(chainId)
      if value ~= maxLevel then
        local base = ItemUtility.GetItemCode(chainId, 1)
        for i = 2, maxLevel do
          local item = ItemUtility.GetItemCode(chainId, i)
          if not self.m_mapGen2ITScore[producer][item] and model:IsInOrder(item) then
            self:_AddItemScore(producer, item, self.m_mapGen2ITScore[producer][base] * 2 ^ (i - 1))
          end
        end
      end
    end
  end
  for k, info in pairs(self.m_mapITItemAvgScore) do
    self.m_mapITItemAvgScore[k] = info[1] / info[2]
  end
end

function BaseOrderModel:_ParseItemScore(producer, item, score, map, itemDataModel)
  local chainId = itemDataModel:GetChainId(item)
  if map[producer] == nil then
    map[producer] = {}
  end
  if map[producer][chainId] == nil then
    map[producer][chainId] = 0
  end
  map[producer][chainId] = map[producer][chainId] + 1
  self:_AddItemScore(producer, item, score)
end

function BaseOrderModel:_AddItemScore(producer, item, score)
  local factor = GM.ItemDataModel:GetModelConfig(item).BufFactor or 1
  score = score * factor
  if not self.m_mapGen2ITScore[producer] then
    self.m_mapGen2ITScore[producer] = {
      [item] = score
    }
  else
    self.m_mapGen2ITScore[producer][item] = score
  end
  if not self.m_mapITItemAvgScore[item] then
    self.m_mapITItemAvgScore[item] = {score, 1}
  else
    local info = self.m_mapITItemAvgScore[item]
    info[1] = info[1] + score
    info[2] = info[2] + 1
  end
end

function BaseOrderModel:GetITItemAvgScore(item)
  return self.m_mapITItemAvgScore[item]
end

function BaseOrderModel:GetItemScoresByGenerator(gen)
  return self.m_mapGen2ITScore[gen]
end

function BaseOrderModel:GetNotInOrderScore(itemCode)
  local generator = self:GetItemUnlockGenerator(itemCode)
  local score = self:GetItemScore(itemCode, generator)
  if not score then
    score = self.m_notInOrderScore[generator] and self.m_notInOrderScore[generator][itemCode]
    return score, generator
  end
  return score, generator
end

function BaseOrderModel:GetItemScoreByUnlockGen(itemCode)
  local generator = self:GetItemUnlockGenerator(itemCode)
  if not generator then
    if StringUtil.StartWith(itemCode, ItemCodePrefix.Spokesperson) then
      return 0
    end
    return
  end
  return self:GetItemScore(itemCode, generator)
end

function BaseOrderModel:GetItemScore(itemCode, generator)
  local scoreMap = self:GetItemScoresByGenerator(generator)
  if scoreMap and scoreMap[itemCode] then
    return scoreMap[itemCode], scoreMap, generator
  end
end

function BaseOrderModel:GetItemUnlockGenerator(itemCode)
  return GM.ItemDataModel:GetItemUnlockGenerator(ItemUtility.GetItemTypeByCode(itemCode))
end

function BaseOrderModel:ResetData()
  self.m_avatarMap = {}
  self.m_orders = {}
  self.m_finFixs = {}
  self.m_mapGen2ITScore = {}
  self.m_mapITItemAvgScore = {}
end

function BaseOrderModel:OnSyncDataFinished()
  self:ResetData()
  self:_LoadScoreConfig()
  self.m_orders = self:_DBGetOrders()
  self.m_finFixs = self:_DBGetFinishedFix()
  self:UpdateState(true)
end

function BaseOrderModel:CheckItemData()
  self.m_orders = self:_DBGetOrders()
end

function BaseOrderModel:LateInit()
  EventDispatcher.AddListener(EEventType.ItemUnlocked, self, self._OnItemUnlocked)
end

function BaseOrderModel:UpdatePerSecond()
end

function BaseOrderModel:_DBGetOrders()
  Log.Assert(false, "_DBGetOrders()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrderModel:_DBAddOrder(order)
  Log.Assert(false, "_DBAddOrder()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrderModel:_DBRemoveOrder(order)
  Log.Assert(false, "_DBRemoveOrder()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrderModel:_AfterFinishOrder(order)
  local hasFilledOrder = self:_TryFillOrders(order)
  if hasFilledOrder then
    self:_AfterFillOrders()
  else
    self:UpdateState()
    self.m_boardModel:Refresh("RefreshChoice")
  end
end

function BaseOrderModel:_TryFillOrders(order)
  local hasFilledOrder = false
  if order:GetType() == OrderType.Fixed then
    hasFilledOrder = self:_TryCreateFixedOrder()
  end
  return hasFilledOrder
end

function BaseOrderModel:_AfterFillOrders()
  self:UpdateState(nil, {NewOrder = true})
  self.m_boardModel:Refresh("RefreshChoice")
end

function BaseOrderModel:_DBAddFinishedFix(id)
  local value = self.m_dbFinFixTable:GetValue("fin", "value")
  if StringUtil.IsNilOrEmpty(value) then
    self.m_dbFinFixTable:Set("fin", "value", id)
  else
    self.m_dbFinFixTable:Set("fin", "value", value .. ";" .. id)
  end
end

function BaseOrderModel:_DBGetFinishedFix()
  local list = StringUtil.Split(self.m_dbFinFixTable:GetValue("fin", "value"), ";")
  local map = {}
  for _, v in ipairs(list) do
    map[v] = true
  end
  return map
end

function BaseOrderModel:IsFixedOrderFinished(id)
  return self.m_finFixs[id]
end

function BaseOrderModel:_TryCreateFixedOrder()
  Log.Assert(false, "_TryCreateFixedOrder()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrderModel:_OnItemUnlocked(type)
  if self:_TryCreateFixedOrder(type) then
    self:_AfterFillOrders()
  end
end

function BaseOrderModel:ReleaseAvatar(order)
  local avatar = order:GetAvatarId()
  if avatar and self.m_avatarMap[avatar] ~= nil then
    self.m_avatarMap[avatar] = self.m_avatarMap[avatar] - 1
    if self.m_avatarMap[avatar] <= 0 then
      Log.Assert(self.m_avatarMap[avatar] == 0, avatar .. "\232\174\161\230\149\176\233\148\153\232\175\175")
      self.m_avatarMap[avatar] = nil
    end
  end
end

function BaseOrderModel:AddAvatar(avatar, orderId)
  if not avatar then
    return
  end
  self.m_avatarMap[avatar] = (self.m_avatarMap[avatar] or 0) + 1
end

function BaseOrderModel:FinishOrder(order, removedItems, orginBaseRewards)
  local id = order:GetId()
  self.m_orders[id] = nil
  self:_DBRemoveOrder(id)
  if order:GetType() == OrderType.Fixed then
    self.m_finFixs[id] = true
    self:_DBAddFinishedFix(id)
  end
  self:_LogOrderAction(order, EBIType.OrderFinish, order.finishScore, order:GetCostInfo(removedItems), order.ext, orginBaseRewards)
  self:_AfterFinishOrder(order)
  self:ReleaseAvatar(order)
  return true
end

function BaseOrderModel:RefreshOrder(order)
  local id = order:GetId()
  self.m_orders[id] = nil
  self:_DBRemoveOrder(id)
  if order:GetType() == OrderType.Fixed then
    self.m_finFixs[id] = true
    self:_DBAddFinishedFix(id)
  end
  local newOrder = self:_TryRefreshOrder(order)
  self:_LogOrderAction(order, EBIType.OrderDelete, order.finishScore, nil, ItemType.RefreshOrder)
  self:ReleaseAvatar(order)
  return newOrder
end

function BaseOrderModel:_TryRefreshOrder(order)
  local hasRefreshOrder = false
  local newOrder
  if order:GetType() == OrderType.Fixed then
    hasRefreshOrder, newOrder = self:_TryCreateFixedOrder()
  end
  return newOrder
end

function BaseOrderModel:UpdateState(fromSyncData, msg)
  local changed = false
  for _, order in pairs(self.m_orders) do
    changed = order:GetState() ~= OrderState.Finished and order:UpdateState() or changed
  end
  self.m_codeStateMap = {}
  self.m_codeRequireCount = {}
  self.m_allStateCodeRequireCount = {}
  for _, order in pairs(self.m_orders) do
    local fillStates = order:GetRequirementFillStates()
    for index, code in ipairs(order:GetRequirements()) do
      if fillStates[index] then
        self.m_codeStateMap[code] = (self.m_codeStateMap[code] or 0) + 1
      else
        self.m_codeRequireCount[code] = (self.m_codeRequireCount[code] or 0) + 1
      end
      self.m_allStateCodeRequireCount[code] = (self.m_allStateCodeRequireCount[code] or 0) + 1
    end
  end
  EventDispatcher.DispatchEvent(EEventType.OrderStateChanged, msg)
  if not fromSyncData and changed then
    self.m_boardModel:Refresh("RefreshChoice")
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateOrderState)
end

function BaseOrderModel:_LogOrderAction(order, action, score, costInfo, extInfo, orginBaseRewards)
  self:LogOrderAction(order, order:GetBIType(), action, score, costInfo, extInfo, orginBaseRewards)
end

function BaseOrderModel:LogOrderAction(order, typeStr, action, score, costInfo, extInfo, orginBaseRewards)
  local content = {}
  for _, requirement in ipairs(order:GetRequirements()) do
    if content[requirement] == nil then
      content[requirement] = 0
    end
    content[requirement] = content[requirement] + 1
  end
  local rewards = {}
  if order.GetBIRewards then
    for _, reward in pairs(order:GetBIRewards()) do
      rewards[reward[PROPERTY_TYPE]] = reward[PROPERTY_COUNT]
    end
  else
    for _, reward in pairs(orginBaseRewards or order:GetRewards()) do
      rewards[reward[PROPERTY_TYPE]] = reward[PROPERTY_COUNT]
    end
  end
  if order.GetSunshineOrderReward then
    local sunReward = order:GetSunshineOrderReward()
    if not Table.IsEmpty(sunReward) then
      rewards[sunReward[PROPERTY_TYPE]] = sunReward[PROPERTY_COUNT]
      if GM.ActivityManager:IsSuperSunshineActive() then
        if StringUtil.IsNilOrEmpty(extInfo) then
          extInfo = "supersunshine:1"
        else
          extInfo = extInfo .. "; supersunshine:1"
        end
      end
    end
  end
  if order.GetSpokespersonOrderReward then
    local personReward = order:GetSpokespersonOrderReward()
    if not Table.IsEmpty(personReward) then
      rewards[personReward[PROPERTY_TYPE]] = personReward[PROPERTY_COUNT]
    end
  end
  if order.GetPhotoReward then
    local reward = order:GetPhotoReward()
    if not Table.IsEmpty(reward) then
      rewards[reward[PROPERTY_TYPE]] = reward[PROPERTY_COUNT]
    end
  end
  local finishTime
  if action == EBIType.OrderFinish then
    finishTime = GM.GameModel:GetServerTime()
  end
  local activityModel
  for activityType, _ in pairs(DecorationDefinition) do
    activityModel = GM.ActivityManager:GetModel(activityType)
    if activityModel ~= nil and activityModel:IsDoubleRewardPeriod() then
      extInfo = self:_AppendExtInfo(extInfo, "desc_double:1")
      break
    end
  end
  if order.HasFireworksBuffReward and order:HasFireworksBuffReward() then
    local fireworksGalaModel = GM.ActivityManager:GetModel(ActivityType.FireworksGala)
    local buffId = fireworksGalaModel:GetBuffId()
    extInfo = self:_AppendExtInfo(extInfo, "fwbuff:" .. buffId)
    if fireworksGalaModel:IsSuperBuffActive() then
      extInfo = self:_AppendExtInfo(extInfo, "fwbuff_super:1")
    end
  end
  local albumModel = AlbumModel.GetActiveModel(false, true)
  if albumModel ~= nil and albumModel:IsBuffOpenning(EAlbumBuffType.DoublePack) then
    extInfo = self:_AppendExtInfo(extInfo, "album_double:1")
  end
  if albumModel ~= nil and albumModel:IsBuffOpenning(EAlbumBuffType.MoreCard) then
    extInfo = self:_AppendExtInfo(extInfo, "album_max:1")
  end
  for activityType, _ in pairs(SurpriseChestActivityDefinition) do
    activityModel = GM.ActivityManager:GetModel(activityType)
    if activityModel ~= nil and activityModel:CanAcquireChestRewards(order:GetId()) then
      extInfo = self:_AppendExtInfo(extInfo, "surprise_chest:1")
      break
    end
  end
  for activityType, _ in pairs(SurpriseChestOneTimeDefinition) do
    activityModel = GM.ActivityManager:GetModel(activityType)
    if activityModel ~= nil and activityModel:GetChestDataByOrderId(order:GetId()) then
      extInfo = self:_AppendExtInfo(extInfo, "surprisechest_limit:1")
      break
    end
  end
  local chestModel = GM.ActivityManager:GetModel(ActivityType.ChestCustomer)
  if chestModel and chestModel:IsChestCustomerOrder(order) then
    extInfo = self:_AppendExtInfo(extInfo, "chestcustomer:" .. chestModel:GetOrderRewardScore(order))
  end
  if action == EBIType.OrderFinish then
    local volcanoRaceModel = VolcanoRaceModel.GetActiveModel()
    if volcanoRaceModel and order:GetId() == volcanoRaceModel:GetCurOrderId() then
      extInfo = self:_AppendExtInfo(extInfo, "volcano_race:1")
    end
    local roadOrderModel = RoadOrderModel.GetActiveModel()
    if roadOrderModel and order:GetId() == roadOrderModel:GetCurOrderId() then
      extInfo = self:_AppendExtInfo(extInfo, "roadorder:1")
    end
    local singleJumpModel = SingleJumpModel.GetActiveModel()
    if singleJumpModel and order:GetId() == singleJumpModel:GetCurOrderId() then
      extInfo = self:_AppendExtInfo(extInfo, "singleJump:1")
    end
    local huntMapBuffModel = GM.ActivityManager:GetModel(ActivityType.HuntMapBuff)
    if huntMapBuffModel and huntMapBuffModel:IsInBuffTime() then
      extInfo = self:_AppendExtInfo(extInfo, "huntMapBuff:" .. (huntMapBuffModel:IsBuffOrder(order) and "1" or "0"))
    end
  end
  if action == EBIType.OrderFinish or action == EBIType.OrderUnlock then
    local model = DecorationScoreModel.GetActiveModel()
    if model then
      local reward = model:GetOrderReward(order:GetTotalScore(GM.MainBoardModel:GetOrderModel()), order:GetId())
      if reward then
        extInfo = self:_AppendExtInfo(extInfo, "decoration_tokenchest:" .. reward[PROPERTY_COUNT])
      end
    end
    model = SunflowerModel.GetActiveModel()
    if model ~= nil and (model:IsSunflowerOrder(order:GetId()) or model:CanAddSunflowerToken(order)) then
      extInfo = self:_AppendExtInfo(extInfo, "magicLamp:1")
    end
    model = TimedBuffModel.GetActiveModel()
    if model:IsBuffActive() then
      extInfo = self:_AppendExtInfo(extInfo, "toolBuff:1")
    end
    if GM.ActivityManager:IsSunshineGroupRacing() then
      extInfo = self:_AppendExtInfo(extInfo, "grouprace:1")
    end
  end
  if action == EBIType.OrderFinish and EBIType.Order[order:GetType()] == typeStr then
    local model = GM.ActivityManager:GetModel(ActivityType.LuckySpin)
    if model and model:IsActivityOpen() and model:IsTargetOrderType(order:GetType()) and model:GetScore() < model:GetTargetScore() then
      extInfo = self:_AppendExtInfo(extInfo, "luck_turn:" .. model:GetCurRound() .. "-" .. model:GetScore() + 1 .. "/" .. model:GetTargetScore())
    end
  end
  if costInfo == nil and (action == EBIType.OrderUnlock or action == EBIType.OrderFinish) and order.GetCostInfo then
    costInfo = order:GetCostInfo()
  end
  GM.BIManager:LogOrder(order:GetId(), typeStr, content, action, score, order:GetCreateTime(), rewards, order:GetLaneId(), finishTime, nil, extInfo, costInfo)
end

function BaseOrderModel:_AppendExtInfo(str, info)
  if StringUtil.IsNilOrEmpty(str) then
    return info
  end
  return str .. ";" .. info
end

function BaseOrderModel:GetOrders()
  return self.m_orders
end

function BaseOrderModel:GetCodeStateMap()
  return self.m_codeStateMap
end

function BaseOrderModel:GetCodeRequireCount()
  return self.m_codeRequireCount
end

function BaseOrderModel:GetAllStateCodeRequireCount()
  return ReadOnly.New(self.m_allStateCodeRequireCount)
end

function BaseOrderModel:GetBoardModel()
  return self.m_boardModel
end

function BaseOrderModel:OnOrderExpired(order)
  local id = order:GetId()
  self.m_orders[id] = nil
  self:_DBRemoveOrder(id)
  self:_AfterFinishOrder(order)
  self:ReleaseAvatar(order)
  EventDispatcher.DispatchEvent(EEventType.OrderExpired, {order = order})
end

function BaseOrderModel:DBUpdateEndTime(order)
  if order and order:GetId() and self.m_orders[order:GetId()] ~= nil then
    self.m_dbTable:Set(order:GetId(), "endTime", order:GetEndTime())
  end
end
