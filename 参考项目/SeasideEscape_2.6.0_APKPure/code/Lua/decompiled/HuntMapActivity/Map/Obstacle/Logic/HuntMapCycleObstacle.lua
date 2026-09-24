HuntMapCycleObstacle = setmetatable({}, HuntMapBaseObstacle)
HuntMapCycleObstacle.__index = HuntMapCycleObstacle

function HuntMapCycleObstacle:OnDispose()
  if not self:CanDispose() then
    return false
  end
  local config = self:GetCodeConifg()
  local bFlag = self.m_model:CostProperty(config.cost)
  if bFlag then
    self.m_model:AcquireObstacleRewards(self.m_model:GetProduceRewards(config), self)
    for k, v in pairs(config.cost) do
      local ext = "pro:" .. self.m_obstacleIndex .. "/" .. (not Table.IsEmpty(self.m_config.ListCodeConfig) and #self.m_config.ListCodeConfig or 1)
      GM.BIManager:LogUseItem(v[PROPERTY_TYPE], v[PROPERTY_COUNT], self.m_model:GetActivityDefinition().BICostToken, self.m_slot, EGameMode.HuntMap, ext)
    end
    return true
  else
    return false
  end
end

function HuntMapCycleObstacle:IsRemoved()
  return false
end
