HuntMapBaseObstacle = {}
HuntMapBaseObstacle.__index = HuntMapBaseObstacle

function HuntMapBaseObstacle:Init(config, model, slot, ObstacleIndex)
  self.m_config = config
  self.m_model = model
  self.m_slot = slot
  self.m_obstacleIndex = ObstacleIndex
end

function HuntMapBaseObstacle:CheckCanSkipAppearAnimation()
  if self.m_obstacleIndex == 1 and self.m_model:HasAppearAnimation(self.m_slot) and self.m_model:GetAnchorSlot() == self.m_slot then
    self:OnAppear()
  end
end

function HuntMapBaseObstacle:UpdateIndex(ObstacleIndex)
  self.m_obstacleIndex = ObstacleIndex
  self.m_model:SaveCacheData()
end

function HuntMapBaseObstacle:GetCodeConifg(ObstacleIndex)
  ObstacleIndex = ObstacleIndex or self.m_obstacleIndex
  if self.m_config.ListCodeConfig == nil then
    return nil
  end
  return self.m_config.ListCodeConfig[ObstacleIndex]
end

function HuntMapBaseObstacle:GetShownCost()
  local cost = self:GetCodeConifg().cost
  if Table.IsEmpty(cost) then
    return
  end
  return cost
end

function HuntMapBaseObstacle:GetBubbleType()
  return self:GetCodeConifg().bubbleType
end

function HuntMapBaseObstacle:GetBubbleTextKey()
  return self:GetCodeConifg().bubbleKey
end

function HuntMapBaseObstacle:IsNotEnergyCost()
  return self.m_model:IsNotEnergyCost(self:GetCodeConifg().cost)
end

function HuntMapBaseObstacle:CanDispose()
  local state = self.m_model:GetSlotState(self.m_slot)
  if state ~= HuntMapActivityMapModel.SlotState.isWillLock then
    return false, state
  end
  if Table.IsEmpty(self:GetCodeConifg().cost) then
    return true
  end
  if not self.m_model:HasProperty(self:GetCodeConifg().cost) then
    return false, -1
  end
  if not self.m_model:HasObstacleBySlot(self.m_slot, self) then
    return false, -2
  end
  return true
end

function HuntMapBaseObstacle:CanBlockRaycast()
  local state = self.m_model:GetSlotState(self.m_slot)
  return state ~= HuntMapActivityMapModel.SlotState.Error and state ~= HuntMapActivityMapModel.SlotState.isFinish, state
end

function HuntMapBaseObstacle:OnDispose()
  local config = self:GetCodeConifg()
  local bFlag = self.m_model:CostProperty(config.cost)
  if bFlag then
    self.m_cachePreDisposeTaskInfo = self.m_model:GetTaskModel():GetDeepCopyTaskCacheInfo()
    local characterAni = self.m_model:AcquireObstacleRewards(self.m_model:GetProduceRewards(config), self)
    if not Table.IsEmpty(config.cost) then
      for k, v in pairs(config.cost) do
        local ext = "pro:" .. self.m_obstacleIndex .. "/" .. (not Table.IsEmpty(self.m_config.ListCodeConfig) and #self.m_config.ListCodeConfig or 1)
        GM.BIManager:LogUseItem(v[PROPERTY_TYPE], v[PROPERTY_COUNT], self.m_model:GetActivityDefinition().BICostToken, self.m_slot, EGameMode.HuntMap, ext)
      end
    end
    local nextIndex = self.m_obstacleIndex + 1
    if self:GetCodeConifg(nextIndex) == nil then
      self:RemoveSelf()
    else
      self:UpdateIndex(nextIndex)
    end
    return true, characterAni
  else
    return false
  end
end

function HuntMapBaseObstacle:HasUnClaimedReward(rewardType)
  for index = self.m_obstacleIndex, #self.m_config.ListCodeConfig do
    local produces = self.m_model:GetProduceRewards(self.m_config.ListCodeConfig[index])
    if produces ~= nil then
      for _, reward in ipairs(produces) do
        if rewardType == reward[PROPERTY_TYPE] then
          return true
        end
      end
    end
  end
  return false
end

function HuntMapBaseObstacle:GetAniPrefabName()
  return self.m_config.prefabName
end

function HuntMapBaseObstacle:GetobstacleIndex()
  return self.m_obstacleIndex
end

function HuntMapBaseObstacle:GetListCodeConfig()
  return self.m_config.ListCodeConfig
end

function HuntMapBaseObstacle:GetUpcomingBreakObstacles()
  local target = {}
  for index = self.m_obstacleIndex, #self.m_config.ListCodeConfig do
    local config = self.m_config.ListCodeConfig[index]
    table.insert(target, config)
  end
  return target
end

function HuntMapBaseObstacle:HasTransform()
  local config = self.m_config.ListCodeConfig[#self.m_config.ListCodeConfig]
  return config.transformPrefab ~= nil
end

function HuntMapBaseObstacle:GetSlot()
  return self.m_slot
end

function HuntMapBaseObstacle:GetType()
  return self.m_config.type
end

function HuntMapBaseObstacle:GetCost()
  return self:GetCodeConifg().cost
end

function HuntMapBaseObstacle:GetOtherInfo()
  return nil
end

function HuntMapBaseObstacle:GetMapModel()
  return self.m_model
end

function HuntMapBaseObstacle:RemoveSelf()
  Log.Assert(false, "HuntMapBaseObstacle:RemoveSelf is \231\186\175\232\153\154\229\135\189\230\149\176")
end

function HuntMapBaseObstacle:GetActivityDefinition()
  return self.m_model:GetActivityDefinition()
end

function HuntMapBaseObstacle:GetCameraSizeScale(index)
  if self:GetCodeConifg(index) ~= nil then
    return self:GetCodeConifg(index).cameraSize
  end
  return nil
end

function HuntMapBaseObstacle:GetPreDisposeCacheInfo()
  return self.m_cachePreDisposeTaskInfo
end

function HuntMapBaseObstacle:GetCharacterAni(index)
  return self:GetCodeConifg(index).characterAniName
end

function HuntMapBaseObstacle:OnAppear()
  local nextIndex = self.m_obstacleIndex + 1
  self:UpdateIndex(nextIndex)
end

function HuntMapBaseObstacle:GetCharacterAniName()
  if self:GetCharacterAni() ~= nil then
    return self:GetCharacterAni()
  end
  local characterAnim = "clear"
  if self:HasTransform() then
    characterAnim = "collect"
  elseif self:GetCost() == nil then
    characterAnim = "collect"
  end
  return characterAnim
end
