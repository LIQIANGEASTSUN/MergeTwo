MainOrder = setmetatable({}, BaseOrder)
MainOrder.__index = MainOrder

function MainOrder.Create(boardModel, id, requirements, rewards, score, type, avatarId, createTime, laneName, laneId, car, endTime, difficulty)
  local order = setmetatable({}, MainOrder)
  order:Init(boardModel, id, requirements, rewards, score, type, avatarId, createTime, laneName, laneId, car, endTime, difficulty)
  return order
end

function MainOrder:Init(boardModel, id, requirements, rewards, score, type, avatarId, createTime, laneName, laneId, car, endTime, difficulty)
  BaseOrder.Init(self, boardModel, id, requirements, rewards, type, createTime, car)
  self.m_orderModel = boardModel:GetOrderModel()
  self.m_avatarId = avatarId
  self.m_laneName = laneName
  self.m_difficulty = difficulty
  self.m_laneId = laneId
  self.m_orderModel:AddAvatar(self.m_avatarId, id)
  self.m_createScore = score
  self.m_endTime = endTime
  self.m_orderLastTime = math.max(0, (self.m_endTime or 0) - (self.m_createTime or 0))
end

function MainOrder:GetBIType()
  if EBIType.Order[self.m_type] == nil then
    GM.BIManager:LogProject("ote", self.m_id .. (tostring(self.m_type) or "nil"))
    Log.Error((tostring(self.m_type) or "nil") .. " \231\188\186\229\176\145\232\174\162\229\141\149BI\231\177\187\229\158\139\229\174\154\228\185\137")
  end
  return EBIType.Order[self.m_type]
end

function MainOrder:GetAvatarId()
  return self.m_avatarId
end

local ChestCustomerName = {
  "ChestCustomer1",
  "ChestCustomer1",
  "ChestCustomer2",
  "ChestCustomer2",
  "ChestCustomer3",
  "ChestCustomer4"
}

function MainOrder:GetAvatarName()
  if self:IsChestCustomerOrder() then
    return ChestCustomerName[self.m_car]
  end
  local dartDashOrderAvatar = self:GetDartDashOrderAvatar()
  if dartDashOrderAvatar then
    return dartDashOrderAvatar
  end
  local avatarConfig = self.m_orderModel:GetAvatarConfig()
  local config = avatarConfig.NormalAvatars[self.m_avatarId]
  Log.Assert(config ~= nil, "\231\188\186\229\176\145\232\174\162\229\141\149\232\167\146\232\137\178" .. self.m_avatarId)
  local curStyle = AmbienceHelper.GetAmbienceStyle()
  if config.Area == curStyle then
    return config.Avatar
  end
  self.m_orderModel:ReleaseAvatar(self)
  self.m_avatarId = self.m_orderModel:GetAvatarId()
  self.m_orderModel:AddAvatar(self.m_avatarId, self.m_id)
  config = avatarConfig.NormalAvatars[self.m_avatarId]
  return config.Avatar
end

function MainOrder:GetRewards(forStorage)
  if forStorage then
    return self.m_rewards
  end
  local rewards = {}
  Table.ListAppend(rewards, self.m_rewards)
  self:_AppendActivityRewards(self.m_orderModel, rewards)
  return rewards
end

function MainOrder:GetSpokespersonOrderReward()
  for actType, _ in pairs(SpokespersonDefinition) do
    local model = GM.ActivityManager:GetModel(actType)
    if model:IsActivityOpen() then
      return model:GetOrderRewardByOrderId(self:GetId())
    end
  end
end

function MainOrder:GetChestReward()
  local model = GM.ActivityManager:GetModel(ActivityType.ChestCustomer)
  if model:IsChestCustomerOrder(self) then
    return model:AcquireOrderReward(self)
  end
end

function MainOrder:GetPhotoReward()
  for actType, _ in pairs(PhotoActivityDefinition) do
    local model = GM.ActivityManager:GetModel(actType)
    if model and model:IsActivityOpen() then
      return model:GetOrderRewardByOrder(self)
    end
  end
end

function MainOrder:SetSiblingIndex(index)
  self.m_siblingIndex = index
end

function MainOrder:GetSiblingIndex()
  return self.m_siblingIndex
end

function MainOrder:SetTutorialStage(tutorialStage)
  self.m_tutorialStage = tutorialStage
end

function MainOrder:GetEndTime()
  if self:GetType() == OrderType.LuckyStar and self.m_tutorialStage ~= nil then
    return GM.GameModel:GetServerTime() + self.m_orderLastTime - self.m_tutorialStage
  end
  if self:IsCountDownPaused() then
    return GM.GameModel:GetServerTime() + self.m_orderLastTime
  end
  return self.m_endTime or 0
end

function MainOrder:IsExtraLane()
  return self.m_car and self.m_orderModel:IsExtraLane(self.m_car)
end
