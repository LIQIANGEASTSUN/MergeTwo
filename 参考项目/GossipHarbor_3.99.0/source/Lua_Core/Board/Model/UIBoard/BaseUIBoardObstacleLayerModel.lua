BaseUIBoardObstacleLayerModel = {}
BaseUIBoardObstacleLayerModel.__index = BaseUIBoardObstacleLayerModel
local DBKeys = {
  ObstacleLevelData = "ObstacleLevelData%d-%d"
}

function BaseUIBoardObstacleLayerModel.Create(boardModel, configFileName, dbTable)
  local mapModel = setmetatable({}, BaseUIBoardObstacleLayerModel)
  mapModel:Init(boardModel, configFileName, dbTable)
  return mapModel
end

function BaseUIBoardObstacleLayerModel:Init(boardModel, configFileName, dbTable)
  self.m_boardModel = boardModel
  self.m_activityModel = boardModel:GetActivityModel()
  self.m_dbTable = dbTable
  local config = require("Data.Config." .. configFileName)
  self.m_obstacleConfig = Table.DeepCopy(config)
  table.sort(self.m_obstacleConfig, function(a, b)
    return a.index < b.index
  end)
  self:_LoadObstacle()
end

function BaseUIBoardObstacleLayerModel:ReInitBoard()
  self:_LoadObstacle()
end

function BaseUIBoardObstacleLayerModel:Drop()
  self.m_obstacleConfig = nil
  self.m_obstacleModels = nil
end

function BaseUIBoardObstacleLayerModel:GetObstacleConfigByBoardIndex(boardIndex)
  local res = {}
  for _, config in ipairs(self.m_obstacleConfig) do
    if config.boardIndex == boardIndex then
      table.insert(res, config)
    end
  end
  return res
end

function BaseUIBoardObstacleLayerModel:GetObstacleCurrentBoardPosition(posX, posY)
  local position = BoardPosition.Create(posX, posY)
  return self.m_boardModel:ObstacleConfigPositionToCurrentBoardPosition(position)
end

function BaseUIBoardObstacleLayerModel:_LoadObstacle()
  local curBoardIndex = self:GetCurrentBoardIndex()
  self.m_obstacleModels = {}
  local curBoardObstacleConfigs = self:GetObstacleConfigByBoardIndex(curBoardIndex)
  if not Table.IsEmpty(curBoardObstacleConfigs) then
    for _, config in ipairs(curBoardObstacleConfigs) do
      local curLevel = self:GetCurrentObstacleLevel(config.index)
      if curLevel < config.maxLevel then
        local obstacleModel = BaseUIBoardObstacleModel.Create(self, config, curLevel)
        table.insert(self.m_obstacleModels, obstacleModel)
      else
        self:UnlockAndShockNeighbor(config.leftTop, config.rightBottom)
      end
    end
  end
end

function BaseUIBoardObstacleLayerModel:UnlockAndShockNeighbor(leftTop, rightBottom)
  for posX = leftTop[1], rightBottom[1] do
    for posY = leftTop[2], rightBottom[2] do
      local position = self:GetObstacleCurrentBoardPosition(posX, posY)
      local oldItem = self.m_boardModel:GetItem(position)
      if oldItem ~= nil then
        local lockedComponent = oldItem:GetComponent(ItemLocked)
        if lockedComponent ~= nil then
          self.m_boardModel:RemoveItem(oldItem, false)
          local innerItemCode = lockedComponent:GetInnerItemCode()
          local newItem
          if not StringUtil.IsNilOrEmpty(innerItemCode) and tonumber(innerItemCode) ~= 0 then
            newItem = self.m_boardModel:GenerateItem(oldItem:GetPosition(), lockedComponent:GetInnerItemCode(), nil, nil, BaseUIBoardModel.EGenerateItemState.ObstacleResolve)
          end
          self.m_boardModel.event:Call(BoardEventType.UnlockItem, {Source = oldItem, New = newItem})
        end
      end
      self.m_boardModel:ShockNeighborItems(position)
    end
  end
end

function BaseUIBoardObstacleLayerModel:GetObstacleModels()
  return self.m_obstacleModels
end

function BaseUIBoardObstacleLayerModel:GetCurrentBoardIndex()
  if self.m_activityModel.GetCurrentBoardIndex ~= nil then
    return self.m_activityModel:GetCurrentBoardIndex()
  else
    return 0
  end
end

function BaseUIBoardObstacleLayerModel:SetObstacleLevel(index, level)
  local boardIndex = self:GetCurrentBoardIndex()
  local key = string.format(DBKeys.ObstacleLevelData, boardIndex, index)
  self.m_dbTable:Set(key, "value", level)
end

function BaseUIBoardObstacleLayerModel:GetCurrentObstacleLevel(index)
  local boardIndex = self:GetCurrentBoardIndex()
  local key = string.format(DBKeys.ObstacleLevelData, boardIndex, index)
  return self.m_dbTable:GetValue(key, "value") or 0
end

function BaseUIBoardObstacleLayerModel:ReduceObstacleLevel(item)
  if Table.IsEmpty(self.m_obstacleModels) then
    return
  end
  local obstacleModel = self.m_obstacleModels[1]
  local index = obstacleModel:GetIndex()
  local oldLevel = obstacleModel:GetCurLevel()
  local curLevel = oldLevel + 1
  self:SetObstacleLevel(index, curLevel)
  obstacleModel:ReduceLevel(1, item)
  local reward = curLevel == obstacleModel:GetMaxLevel() and obstacleModel:GetReward()[PROPERTY_TYPE] or nil
  local biAction = {
    item = item:GetType(),
    obs = index,
    oldLv = oldLevel,
    newLv = curLevel,
    rwd = reward
  }
  GM.BIManager:LogAction(EBIType.ObstacleResolveLevel, biAction)
end

function BaseUIBoardObstacleLayerModel:RemoveObstacle(obstacleModel)
  if obstacleModel ~= nil then
    Table.ListRemove(self.m_obstacleModels, obstacleModel)
    local reward = obstacleModel:GetReward()
    if RewardApi.CheckRewardCategoryType(reward[PROPERTY_TYPE], ERewardCategoryType.CustomBoardItem) then
      local boardType, itemCode = RewardApi.CustomBoardItem2BoardTypeAndRealItemCode(reward[PROPERTY_TYPE])
      self.m_cachedRewardItemInfo = {itemCode = itemCode}
      self.m_cachedRewardItemInfo.itemModel = self.m_boardModel:DispatchItem(itemCode)
      GM.BIManager:LogAcquire(itemCode, reward[PROPERTY_COUNT], EBIType.ObstacleResolveAcquireReward, true, boardType)
    else
      RewardApi.AcquireRewardsLogic(self.m_reward, EPropertySource.Give, EBIType.ObstacleResolveAcquireReward, EGameMode.Main, CacheItemType.Type2)
    end
  end
end

function BaseUIBoardObstacleLayerModel:GetCachedRewardItemInfo()
  return self.m_cachedRewardItemInfo
end

function BaseUIBoardObstacleLayerModel:ClearCachedRewardItemInfo()
  self.m_cachedRewardItemInfo = nil
end

function BaseUIBoardObstacleLayerModel:GetBoardModel()
  return self.m_boardModel
end
