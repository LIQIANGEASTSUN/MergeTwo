HuntMapTransformObstacle = setmetatable({}, HuntMapBaseObstacle)
HuntMapTransformObstacle.__index = HuntMapTransformObstacle

function HuntMapTransformObstacle:RemoveSelf()
  self.m_bRemoved = true
  self.m_model:TransformEmptyObstacle(self, self:GetCodeConifg(self.m_obstacleIndex).transformPrefab)
end

function HuntMapTransformObstacle:IsRemoved()
  return self.m_bRemoved
end

function HuntMapTransformObstacle:GetTransformPrefab()
  return self.m_config.ListCodeConfig[#self.m_config.ListCodeConfig].transformPrefab
end
