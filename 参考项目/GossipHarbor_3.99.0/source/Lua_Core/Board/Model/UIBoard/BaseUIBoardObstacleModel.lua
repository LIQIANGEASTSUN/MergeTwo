UIBoardObstacleEventType = {ReduceLevel = 1}
BaseUIBoardObstacleModel = {}
BaseUIBoardObstacleModel.__index = BaseUIBoardObstacleModel

function BaseUIBoardObstacleModel.Create(layerModel, config, curLevel)
  local obstacleModel = setmetatable({}, BaseUIBoardObstacleModel)
  obstacleModel:Init(layerModel, config, curLevel)
  return obstacleModel
end

function BaseUIBoardObstacleModel:Init(layerModel, config, curLevel)
  self.m_layerModel = layerModel
  self.m_index = config.index
  self.m_leftTop = config.leftTop
  self.m_rightBottom = config.rightBottom
  self.m_maxLevel = config.maxLevel
  self.m_prefabName = config.prefab
  self.m_toolIconName = config.toolIcon
  self.m_curLevel = curLevel
  self.m_reward = ConfigUtil.GetCurrencyFromStr(config.reward)
  self.event = PairEvent.Create(self)
end

function BaseUIBoardObstacleModel:ReduceLevel(num, item)
  local level = self.m_curLevel + num
  self.m_curLevel = math.min(self.m_maxLevel, level)
  self.event:Call(UIBoardObstacleEventType.ReduceLevel, item)
  if self.m_curLevel == self.m_maxLevel then
    self.m_layerModel:RemoveObstacle(self)
  end
end

function BaseUIBoardObstacleModel:OnRemove()
  self.m_layerModel:UnlockAndShockNeighbor(self.m_leftTop, self.m_rightBottom)
end

function BaseUIBoardObstacleModel:GetMaxLevel()
  return self.m_maxLevel
end

function BaseUIBoardObstacleModel:GetCurLevel()
  return self.m_curLevel
end

function BaseUIBoardObstacleModel:GetPrefabName()
  return self.m_prefabName
end

function BaseUIBoardObstacleModel:GetToolIconName()
  return self.m_toolIconName
end

function BaseUIBoardObstacleModel:GetPosition()
  local leftTop = self.m_layerModel:GetObstacleCurrentBoardPosition(self.m_leftTop[1], self.m_leftTop[2])
  local rightBottom = self.m_layerModel:GetObstacleCurrentBoardPosition(self.m_rightBottom[1], self.m_rightBottom[2])
  if self.m_layerModel:GetBoardModel():PositionIsValid(leftTop) and self.m_layerModel:GetBoardModel():PositionIsValid(rightBottom) then
    return leftTop, rightBottom
  end
  return nil, nil
end

function BaseUIBoardObstacleModel:GetSize()
  local boardModel = self.m_layerModel:GetBoardModel()
  local deltaX = self.m_rightBottom[1] - self.m_leftTop[1] + 1
  local deltaY = self.m_rightBottom[2] - self.m_leftTop[2] + 1
  return Vector2(deltaX, deltaY) * boardModel.TileSize
end

function BaseUIBoardObstacleModel:GetIndex()
  return self.m_index
end

function BaseUIBoardObstacleModel:GetReward()
  return self.m_reward
end
