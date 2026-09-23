StickerboardActivityObstacleMapModel = {}
StickerboardActivityObstacleMapModel.__index = StickerboardActivityObstacleMapModel
local DBKeys = {
  ObstacleLevelData = "ObstacleLevelData%d-%d"
}

function StickerboardActivityObstacleMapModel.Create(activityModel, boardModel)
  local mapModel = setmetatable({}, StickerboardActivityObstacleMapModel)
  mapModel:Init(activityModel, boardModel)
  return mapModel
end

function StickerboardActivityObstacleMapModel:Init(activityModel, boardModel)
  self.m_activityModel = activityModel
  self.m_activityDefinition = StickerboardActivityDefinition[self.m_activityModel:GetType()]
  self.m_boardModel = boardModel
  self.m_dbTable = self.m_activityModel:GetDBTable()
  self:_LoadLocalConfig()
  self:_LoadObstacle()
end

function StickerboardActivityObstacleMapModel:_LoadLocalConfig()
  local configFileName = self.m_activityDefinition.ObstacleConfigFileName
  local config = require("Data.Config." .. configFileName)
  self.m_obstacleConfig = Table.DeepCopy(config)
  table.sort(self.m_obstacleConfig, function(a, b)
    return a.index < b.index
  end)
end

function StickerboardActivityObstacleMapModel:ReInitBoard()
  self:_LoadObstacle()
end

function StickerboardActivityObstacleMapModel:Drop()
  self.m_obstacleConfig = nil
  self.m_obstacleModels = nil
end

function StickerboardActivityObstacleMapModel:GetObstacleConfigByBoardIndex(boardIndex)
  local res = {}
  for _, config in ipairs(self.m_obstacleConfig) do
    if config.boardIndex == boardIndex then
      table.insert(res, config)
    end
  end
  return res
end

function StickerboardActivityObstacleMapModel:_LoadObstacle()
  local curBoardIndex = self.m_activityModel:GetCurrentBoardIndex()
  self.m_obstacleModels = {}
  local curBoardObstacleConfigs = self:GetObstacleConfigByBoardIndex(curBoardIndex)
  if not Table.IsEmpty(curBoardObstacleConfigs) then
    for _, config in ipairs(curBoardObstacleConfigs) do
      local curLevel = self:GetCurrentObstacleLevel(config.index) or config.maxLevel
      if 0 < curLevel then
        config.stickerImage = self.m_activityModel:GetStickerImageByType(config.stickerType)
        local obstacleModel = StickerboardActivityObstacle.Create(self, self.m_activityDefinition, config, curLevel, self.m_activityModel:HasStickerUnlocked(config.stickerType))
        table.insert(self.m_obstacleModels, obstacleModel)
      else
        self:UnlockAndShockNeighbor(config.leftTop, config.rightBottom)
      end
    end
  end
end

function StickerboardActivityObstacleMapModel:UnlockAndShockNeighbor(leftTop, rightBottom)
  for posX = leftTop[1], rightBottom[1] do
    for posY = leftTop[2], rightBottom[2] do
      local position = BoardPosition.Create(posX, posY)
      local oldItem = self.m_boardModel:GetItem(position)
      if oldItem ~= nil then
        local lockedComponent = oldItem:GetComponent(ItemLocked)
        if lockedComponent ~= nil then
          self.m_boardModel:RemoveItem(oldItem, false)
          local newItem = self.m_boardModel:GenerateItem(oldItem:GetPosition(), lockedComponent:GetInnerItemCode(), nil, nil, BaseUIBoardModel.EGenerateItemState.ObstacleResolve)
          self.m_boardModel.event:Call(BoardEventType.UnlockItem, {Source = oldItem, New = newItem})
        end
      end
      self.m_boardModel:ShockNeighborItems(position)
    end
  end
end

function StickerboardActivityObstacleMapModel:GetObstacleModels()
  return self.m_obstacleModels
end

function StickerboardActivityObstacleMapModel:SetObstacleLevel(index, level)
  local boardIndex = self.m_activityModel:GetCurrentBoardIndex()
  local key = string.format(DBKeys.ObstacleLevelData, boardIndex, index)
  self.m_dbTable:Set(key, "value", level)
end

function StickerboardActivityObstacleMapModel:GetCurrentObstacleLevel(index)
  local boardIndex = self.m_activityModel:GetCurrentBoardIndex()
  local key = string.format(DBKeys.ObstacleLevelData, boardIndex, index)
  return self.m_dbTable:GetValue(key, "value")
end

function StickerboardActivityObstacleMapModel:GetObstacleByIndex(index)
  for i, obstacle in pairs(self.m_obstacleModels) do
    if obstacle.m_index == index then
      return obstacle, i
    end
  end
end

function StickerboardActivityObstacleMapModel:ReduceObstacleLevel(itemType, obstacleModel, num, bSpecial)
  local index = obstacleModel:GetIndex()
  local oldLevel = obstacleModel:GetCurLevel()
  obstacleModel:ReduceLevel(num, bSpecial)
  local curLevel = obstacleModel:GetCurLevel()
  self:SetObstacleLevel(index, curLevel)
  local stickerType = curLevel == 0 and obstacleModel:GetStickerType() or nil
  local biAction = {
    itemType = itemType,
    obstacle = index,
    oldLv = oldLevel,
    newLv = curLevel,
    sticker = stickerType
  }
  GM.BIManager:LogAction(self.m_activityDefinition.UseClearToolItemBIType, biAction)
end

function StickerboardActivityObstacleMapModel:RemoveObstacle(obstacleModel)
  if obstacleModel ~= nil then
    self.m_activityModel:AcquireSticker(obstacleModel)
    Table.ListRemove(self.m_obstacleModels, obstacleModel)
  end
end

function StickerboardActivityObstacleMapModel:ClearAllObstacle(itemType, num)
  for i = #self.m_obstacleModels, 1, -1 do
    self:ReduceObstacleLevel(itemType, self.m_obstacleModels[i], num, true)
  end
end

function StickerboardActivityObstacleMapModel:FindOneObstacleToClear(itemType, num, itemPosition)
  local function sortFunc(a, b)
    local aLevel = a:GetCurLevel()
    
    local bLevel = b:GetCurLevel()
    if aLevel >= num and bLevel >= num or aLevel < num and bLevel < num then
      if aLevel ~= bLevel then
        if aLevel >= num and bLevel >= num then
          return aLevel < bLevel
        else
          return aLevel > bLevel
        end
      else
        local aDist = self:_CalculateMinDistanceToObstacle(a, itemPosition)
        local bDist = self:_CalculateMinDistanceToObstacle(b, itemPosition)
        return aDist < bDist
      end
    elseif aLevel >= num then
      return true
    else
      return false
    end
  end
  
  table.sort(self.m_obstacleModels, sortFunc)
  if self.m_obstacleModels[1] ~= nil then
    self:ReduceObstacleLevel(itemType, self.m_obstacleModels[1], num)
  end
end

function StickerboardActivityObstacleMapModel:_CalculateMinDistanceToObstacle(obstacleModel, itemPosition)
  local minDist
  for x = obstacleModel.m_leftTop[1], obstacleModel.m_rightBottom[1] do
    for y = obstacleModel.m_leftTop[2], obstacleModel.m_rightBottom[2] do
      local dist = Vector2.Distance(Vector2(x, y), Vector2(itemPosition:GetX(), itemPosition:GetY()))
      if minDist == nil or minDist > dist then
        minDist = dist
      end
    end
  end
  return minDist
end

function StickerboardActivityObstacleMapModel:FindClearToolToUse(obstacleModel)
  local function filter(itemModel)
    if itemModel ~= nil then
      local cmp = itemModel:GetComponent(ItemClearTool)
      
      return cmp ~= nil and not cmp:IsSpecial()
    end
  end
  
  local toolItems = self.m_boardModel:FilterItems(filter)
  if not Table.IsEmpty(toolItems) then
    table.sort(toolItems, function(a, b)
      local aPos = a:GetPosition()
      local bPos = b:GetPosition()
      local aDist = self:_CalculateMinDistanceToObstacle(obstacleModel, aPos)
      local bDist = self:_CalculateMinDistanceToObstacle(obstacleModel, bPos)
      return aDist < bDist
    end)
    local selectedItemModel = toolItems[1]
    local itemClearTool = selectedItemModel:GetComponent(ItemClearTool)
    local itemType = selectedItemModel:GetType()
    itemClearTool:OnTap(obstacleModel)
    return true
  end
  return false
end

function StickerboardActivityObstacleMapModel:HaveNoObstacle()
  return Table.IsEmpty(self.m_obstacleModels)
end

function StickerboardActivityObstacleMapModel:GetBoardModel()
  return self.m_boardModel
end
