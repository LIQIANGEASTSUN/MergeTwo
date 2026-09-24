OrderType = {
  Fixed = 0,
  Random = 1,
  Clear = 2,
  Lane = 3,
  Recall = 4,
  Insure = 5,
  LuckyStar = 6,
  CurtainCall = 7
}
OrderState = {
  Init = 1,
  PartiallyFinished = 2,
  CanDeliver = 3,
  Finished = 4
}
OrderStateChange = {Higher = 1, Lower = 2}
PrecleanType = {
  Random = 1,
  More = 2,
  Up = 3
}
BaseOrder = {}
BaseOrder.__index = BaseOrder

function BaseOrder:Init(boardModel, id, requirements, rewards, type, createTime, car)
  self.m_boardModel = boardModel
  self.m_id = id
  self.m_requirements = requirements
  self.m_type = type
  self.m_createTime = createTime
  self.m_filledRequirementCount = 0
  self.m_requirementFillStates = {}
  self.m_requirementStoredFillStates = {}
  self.m_car = car
  for i = 1, #self.m_requirements do
    self.m_requirementFillStates[i] = false
  end
  self.m_rewards = rewards
  self:_SetState(OrderState.Init)
end

function BaseOrder:GetId()
  return self.m_id
end

function BaseOrder:GetRequirements()
  return self.m_requirements
end

function BaseOrder:GetAllRequireItems()
  return self.m_requirements
end

function BaseOrder:GetCar()
  return self.m_car
end

function BaseOrder:IsChestCustomerOrder()
  local model = GM.ActivityManager:GetModel(ActivityType.ChestCustomer)
  if model and model:IsChestCustomerOrder(self) then
    return true
  end
  return false
end

function BaseOrder:GetDartDashOrderAvatar()
  local model = DartDashModel.GetActiveModel()
  if model and not model:IsOrderCellUpdateBlocked() and model:GetCurOrderId() == self.m_id and model:GetRaceState() == DartDashRoundState.InRace then
    return DartDashDefinition[model:GetType()].OrderAvatarPrefabName
  end
end

function BaseOrder:GetRequiredChainsMap()
  if not self.m_mapRequiredChains then
    self.m_mapRequiredChains = {}
    for _, v in pairs(self.m_requirements) do
      self.m_mapRequiredChains[GM.ItemDataModel:GetChainId(v)] = true
    end
  end
  return self.m_mapRequiredChains
end

function BaseOrder:IsRequire(code)
  for i = 1, #self.m_requirements do
    if code == self.m_requirements[i] then
      return true
    end
  end
end

function BaseOrder:GetRequirementFillStates()
  return self.m_requirementFillStates
end

function BaseOrder:GetRequirementStoredFillStates()
  return self.m_requirementStoredFillStates
end

function BaseOrder:GetFilledRequirementCount()
  return self.m_filledRequirementCount
end

function BaseOrder:GetState()
  return self.m_state
end

function BaseOrder:GetOrderAreaSortState()
  if self.m_state >= OrderState.CanDeliver then
    return OrderState.CanDeliver
  end
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderSortRule) then
    return self.m_state
  end
  return OrderState.Init
end

function BaseOrder:_SetState(state)
  Log.Assert(state ~= OrderState.Finished, "BaseOrder:_SetState")
  if self.m_state ~= state then
    if self.m_state == nil or state > self.m_state then
      self.m_stateChange = OrderStateChange.Higher
    else
      self.m_stateChange = OrderStateChange.Lower
    end
    self.m_state = state
    self.m_stateChangeTime = GM.GameModel:GetServerTime()
  end
end

function BaseOrder:UpdateState()
  local changed = false
  self.m_filledRequirementCount = 0
  self.m_bUseStore = false
  for i, requirement in ipairs(self.m_requirements) do
    local count = 1
    for k = i - 1, 1, -1 do
      if requirement == self.m_requirements[k] then
        count = count + 1
      end
    end
    local bEnough = false
    local bStoreEnough = false
    if self.m_boardModel then
      local onBoardNum = self.m_boardModel:GetItemLayerCount(requirement)
      if count <= onBoardNum then
        bEnough = true
      else
        bEnough = count <= onBoardNum + self.m_boardModel:GetStoredItemCountByCode(requirement)
        bStoreEnough = bEnough
      end
    end
    if bEnough then
      if not self.m_requirementFillStates[i] then
        changed = true
      end
      self.m_requirementFillStates[i] = true
      self.m_filledRequirementCount = self.m_filledRequirementCount + 1
    else
      if self.m_requirementFillStates[i] then
        changed = true
      end
      self.m_requirementFillStates[i] = false
    end
    if bStoreEnough then
      if not self.m_requirementStoredFillStates[i] then
        changed = true
        self.m_requirementStoredFillStates[i] = true
      end
    elseif self.m_requirementStoredFillStates[i] then
      changed = true
      self.m_requirementStoredFillStates[i] = false
    end
    self.m_bUseStore = self.m_bUseStore or bStoreEnough
  end
  if self.m_filledRequirementCount == 0 then
    self:_SetState(OrderState.Init)
  elseif self.m_filledRequirementCount == #self.m_requirements then
    self:_SetState(OrderState.CanDeliver)
  else
    self:_SetState(OrderState.PartiallyFinished)
  end
  return changed
end

function BaseOrder:CanDeliverUseStore()
  return self.m_bUseStore
end

function BaseOrder:SetFinished()
  self.m_state = OrderState.Finished
end

function BaseOrder:GetStateChange()
  return self.m_stateChange
end

function BaseOrder:GetStateChangeTime()
  return self.m_stateChangeTime
end

function BaseOrder:GetType()
  return self.m_type
end

function BaseOrder:GetCreateTime()
  return self.m_createTime
end

function BaseOrder:GetLaneName()
  return self.m_laneName
end

function BaseOrder:GetLaneSlot()
  return not self.m_difficulty and (not self.m_laneId or not GM.MainBoardModel:GetOrderModel():GetLaneDifficultyByLaneId(self.m_laneId)) and self.m_laneName and GM.MainBoardModel:GetOrderModel():GetLaneDifficultyByLaneName(self.m_laneName)
end

function BaseOrder:GetLaneId()
  return self.m_laneId
end

function BaseOrder:GetRound()
  return nil
end

function BaseOrder:GetSerializedAllRequirements()
  return nil
end

function BaseOrder:GetBIType()
  Log.Assert(false, "GetBIType()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrder:GetAvatarName()
  Log.Assert(false, "GetAvatarName()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrder:GetAvatarId()
end

function BaseOrder:GetRewards()
  Log.Assert(false, "GetRewards()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseOrder:GetUnFilledRequirements()
  local result = {}
  for i = 1, #self.m_requirementFillStates do
    if self.m_requirementFillStates[i] == false then
      result[#result + 1] = self.m_requirements[i]
    end
  end
  return result
end

function BaseOrder:GetFilledRequirements()
  local result = {}
  for i = 1, #self.m_requirementFillStates do
    if self.m_requirementFillStates[i] == true then
      result[#result + 1] = self.m_requirements[i]
    end
  end
  return result
end

function BaseOrder:NowCanFinishBy(itemCode)
  if self:GetState() ~= OrderState.CanDeliver then
    return false
  end
  return self:IsRequire(itemCode)
end

function BaseOrder:_AppendActivityRewards(orderModel, rewards)
  if self:GetType() == OrderType.LuckyStar or self:GetType() == OrderType.CurtainCall then
    return
  end
  local totalScore = self:GetTotalScore(orderModel)
  self:_AppendTokenRewards(rewards, totalScore)
  self:_AppendAlbumRewards(rewards, totalScore)
end

function BaseOrder:_AppendTokenRewards(rewards, totalScore)
  local tokenType, activityModel
  for _, activityType in pairs(ActivityType) do
    tokenType = MapActivityType2Token[activityType]
    if tokenType ~= nil then
      activityModel = GM.ActivityManager:GetModel(activityType)
      if activityModel ~= nil and activityModel:CanAddOrderScore(self.m_type) then
        local tokenNum = activityModel:GetOrderRewardScore(totalScore, self:GetId(), self)
        if 0 < tokenNum then
          table.insert(rewards, {
            [PROPERTY_TYPE] = tokenType,
            [PROPERTY_COUNT] = tokenNum
          })
        end
      end
    end
  end
  local bundleModel = GM.BundleManager:GetModel(EBundleType.TokenChain)
  local bundleGroupDatas = bundleModel:GetGroupDatas()
  local bundleTokenHelpers = bundleModel:GetTokenHelpers()
  if not Table.IsEmpty(bundleGroupDatas) and not Table.IsEmpty(bundleTokenHelpers) then
    for _, dataGroup in pairs(bundleGroupDatas) do
      if bundleTokenHelpers[dataGroup:GetGroupId()] and dataGroup:CanAddOrderScore(self.m_type) then
        local tokenNum = dataGroup:GetOrderRewardScore(totalScore, self:GetId())
        if 0 < tokenNum then
          table.insert(rewards, {
            [PROPERTY_TYPE] = BundleUIType[dataGroup:GetBundleUIType()].tokenType,
            [PROPERTY_COUNT] = tokenNum
          })
        end
      end
    end
  end
end

function BaseOrder:_AppendAlbumRewards(rewards, totalScore)
  local albumModel = AlbumModel.GetActiveModel(false, true)
  if albumModel then
    local reward = albumModel:AppendPackRewardForOrder(self.m_type, totalScore, self:GetId(), self:GetActType())
    if not Table.IsEmpty(reward) then
      table.insert(rewards, {
        [PROPERTY_TYPE] = reward[PROPERTY_TYPE],
        [PROPERTY_COUNT] = reward[PROPERTY_COUNT]
      })
    end
  end
end

function BaseOrder:GetCreateScore()
  return self.m_createScore or 0
end

function BaseOrder:GetEndTime()
  return self.m_endTime or 0
end

function BaseOrder:GetTotalScore(orderModel)
  if self.m_createScore then
    return self.m_createScore
  end
  return self:GetScoreByRequirements(orderModel)
end

function BaseOrder:GetScoreByRequirements(orderModel)
  local totalScore = 0
  local score
  for _, itemCode in ipairs(self.m_requirements) do
    score = orderModel:GetItemScoreByUnlockGen(itemCode)
    if score then
      totalScore = totalScore + score
    end
  end
  return totalScore
end

function BaseOrder:GetCostInfo(items, orderModel)
  if self.costInfo then
    return self.costInfo
  end
  local list = {}
  if items and 0 < #items then
    local day = GM.GameModel:GetServerDay()
    for i, item in ipairs(items) do
      local et, est = 0, 0
      if item.createTime // 86400 == day then
        et = item.energyToday
        est = item.energyStarToday
      end
      table.insert(list, string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s,et:%s,elt:%s", item:GetCode(), item.costEnergy, item.freeScore, item.shopGemCost, item.bubbleGemCost, item.itemScore or 0, et, est))
    end
  else
    if orderModel == nil and self.m_boardModel then
      orderModel = self.m_boardModel:GetOrderModel()
    end
    if orderModel ~= nil then
      local score
      for _, itemCode in ipairs(self.m_requirements) do
        score = orderModel:GetItemScoreByUnlockGen(itemCode) or 0
        table.insert(list, string.format("id:%s,s:%s", itemCode, score))
      end
    end
  end
  if #list == 0 and GameConfig.IsTestMode() then
    Log.Error("Empty costInfo for order: " .. (self.m_id or ""))
  end
  return table.concat(list, ";")
end

function BaseOrder:SetExtraFlag(flag)
  self.m_bIsExtraOrder = flag
end

function BaseOrder:IsExtraOrder()
  return self.m_bIsExtraOrder == true
end

function BaseOrder:IsCountDownPaused()
  return self.m_bCountDownPaused
end

function BaseOrder:StopCountDown()
  self.m_bCountDownPaused = true
end

function BaseOrder:RestartCountDown()
  if self.m_orderLastTime == nil or self.m_orderLastTime <= 0 then
    return
  end
  self.m_endTime = GM.GameModel:GetServerTime() + self.m_orderLastTime
  self.m_bCountDownPaused = nil
  if self.m_boardModel and self.m_boardModel:GetOrderModel() then
    self.m_boardModel:GetOrderModel():DBUpdateEndTime(self)
  end
end

function BaseOrder:IsExtraLane()
  return false
end

function BaseOrder:GetSunshineOrderReward()
  local reward, bShow, model
  for activityType, _ in pairs(SunshineOrderBoostDefinition) do
    local tokenType = MapActivityType2Token[activityType]
    model = GM.ActivityManager:GetModel(activityType)
    if model and model:GetState() == ActivityState.Started then
      local tokenNum = model:GetAddOrderBoostScoreByOrder(self)
      if 0 < tokenNum then
        reward = {
          [PROPERTY_TYPE] = tokenType,
          [PROPERTY_COUNT] = tokenNum
        }
      end
    end
    bShow = model:IsActivityOngoing()
  end
  if model and model:GetState() == ActivityState.Started and self.m_sunshineReward then
    return self.m_sunshineReward, bShow
  end
  if reward then
    self.m_sunshineReward = reward
  end
  return reward, bShow
end

function BaseOrder:HasSunshineReward()
  return self.m_sunshineReward ~= nil or self:GetSunshineOrderReward() ~= nil
end

function BaseOrder:ClearSunReward()
  self.m_sunshineReward = nil
end

function BaseOrder:GetActType()
  return nil
end

function BaseOrder.CanDeliverByItem(itemModel, code)
  if itemModel:GetCode() ~= code then
    return false
  end
  local swallow = itemModel:GetComponent(ItemSwallow)
  return not swallow or not swallow:IsSwallowOver()
end

function BaseOrder:HasFireworksBuffReward()
  local model = GM.ActivityManager:GetModel(ActivityType.FireworksGala)
  if model:IsActivityOpen() then
    return model:GetBuffConfig(self:GetTotalScore(self.m_boardModel:GetOrderModel()), self.m_type) ~= nil
  end
end

function BaseOrder:GetFireworksBuffReward()
  local model = GM.ActivityManager:GetModel(ActivityType.FireworksGala)
  if model:IsActivityOpen() then
    return model:GetOrderReward(self.m_id, self:GetTotalScore(self.m_boardModel:GetOrderModel()), self.m_type)
  end
end
