HuntMapNormalObstacle = setmetatable({}, HuntMapBaseObstacle)
HuntMapNormalObstacle.__index = HuntMapNormalObstacle

function HuntMapNormalObstacle:RemoveSelf()
  self.m_bRemoved = true
  self.m_model:RemoveObstacle(self)
end

function HuntMapNormalObstacle:IsRemoved()
  return self.m_bRemoved
end
