HuntMapResidualObstacle = setmetatable({}, HuntMapBaseObstacle)
HuntMapResidualObstacle.__index = HuntMapResidualObstacle

function HuntMapResidualObstacle:RemoveSelf()
  Log.Assert(false, "\228\184\141\229\143\175\229\136\160\233\153\164\230\174\139\231\149\153\233\154\156\231\162\141\231\137\169")
end

function HuntMapResidualObstacle:GetobstacleIndex()
  return 1
end

function HuntMapResidualObstacle:CanDispose()
  return false
end

function HuntMapResidualObstacle:CanBlockRaycast()
  if GameConfig.IsTestMode() then
    return true, 999
  end
  return false, 999
end

function HuntMapResidualObstacle:GetType()
  return "ResidualObstacle"
end

function HuntMapResidualObstacle:GetCost()
  return nil
end

function HuntMapResidualObstacle:GetUpcomingBreakObstacles()
  return {}
end

function HuntMapResidualObstacle:GetOtherInfo()
  return {
    prefabName = self.m_config.prefabName
  }
end

function HuntMapResidualObstacle:IsRemoved()
  return false
end
