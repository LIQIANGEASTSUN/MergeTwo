StickerboardObstacleEventType = {ReduceLevel = 1}
StickerboardActivityObstacle = {}
StickerboardActivityObstacle.__index = StickerboardActivityObstacle

function StickerboardActivityObstacle.Create(mapModel, activityDefinition, config, curLevel, bUnLockedSticker)
  local obstacleModel = setmetatable({}, StickerboardActivityObstacle)
  obstacleModel:Init(mapModel, activityDefinition, config, curLevel, bUnLockedSticker)
  return obstacleModel
end

function StickerboardActivityObstacle:Init(mapModel, activityDefinition, config, curLevel, bUnLockedSticker)
  self.m_mapModel = mapModel
  self.m_activityDefinition = activityDefinition
  self.event = PairEvent.Create(self)
  self.m_index = config.index
  self.m_leftTop = config.leftTop
  self.m_rightBottom = config.rightBottom
  self.m_maxLevel = config.maxLevel
  self.m_stickerImage = config.stickerImage
  self.m_curLevel = curLevel
  self.m_stickerType = config.stickerType
  if bUnLockedSticker then
    self.m_bGetReward = true
  end
end

function StickerboardActivityObstacle:ReduceLevel(num, bSpecial)
  local level = self.m_curLevel - num
  self.m_curLevel = math.max(0, level)
  self.event:Call(StickerboardObstacleEventType.ReduceLevel, bSpecial)
  if self.m_curLevel == 0 then
    self.m_mapModel:RemoveObstacle(self)
  end
end

function StickerboardActivityObstacle:OnRemove()
  self.m_mapModel:UnlockAndShockNeighbor(self.m_leftTop, self.m_rightBottom)
end

function StickerboardActivityObstacle:GetMaxLevel()
  return self.m_maxLevel
end

function StickerboardActivityObstacle:GetCurLevel()
  return self.m_curLevel
end

function StickerboardActivityObstacle:GetIconBottomImage()
  return self.m_activityDefinition.ObstacleBottomImageName
end

function StickerboardActivityObstacle:GetIconStickerImage()
  return self.m_stickerImage
end

function StickerboardActivityObstacle:GetIconTopImage()
  local imgIndex = self.m_maxLevel - self.m_curLevel + 1
  return self.m_activityDefinition.ObstacleTopImageNamePrefix .. imgIndex
end

function StickerboardActivityObstacle:GetPosition()
  return self.m_leftTop, self.m_rightBottom
end

function StickerboardActivityObstacle:GetSize()
  local boardModel = self.m_mapModel:GetBoardModel()
  local deltaX = self.m_rightBottom[1] - self.m_leftTop[1] + 1
  local deltaY = self.m_rightBottom[2] - self.m_leftTop[2] + 1
  return Vector2(deltaX, deltaY) * boardModel.TileSize
end

function StickerboardActivityObstacle:GetStickerType()
  return self.m_stickerType
end

function StickerboardActivityObstacle:GetIndex()
  return self.m_index
end

function StickerboardActivityObstacle:HasGotStickerReward()
  return self.m_bGetReward == true
end

function StickerboardActivityObstacle:GetStickerReward()
  self.m_bGetReward = true
end

function StickerboardActivityObstacle:GetActivityDefinition()
  return self.m_activityDefinition
end
