MultiboardsActivityBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type1,
  BoardType = EBoardType.Multiboards
}, BaseUIBoardModel)
MultiboardsActivityBoardModel.__index = MultiboardsActivityBoardModel

function MultiboardsActivityBoardModel.Create(args, horizontal, vertical)
  local boardModel = setmetatable({}, MultiboardsActivityBoardModel)
  boardModel.HorizontalTiles = horizontal
  boardModel.VerticalTiles = vertical
  boardModel:Init(args)
  return boardModel
end

function MultiboardsActivityBoardModel:_LogCacheItems(info)
  info.idx = self.m_activityModel:GetCurrentBoardIndex()
  GM.BIManager:LogAction(self.m_activityModel:GetDefinition().CacheItem, info)
end

function MultiboardsActivityBoardModel:_LogPopCacheItem(code, cacheitemId)
  GM.BIManager:LogAction(self.m_activityModel:GetDefinition().PopCacheItem, {
    c = code,
    idx = self.m_activityModel:GetCurrentBoardIndex(),
    id = cacheitemId
  })
end

function MultiboardsActivityBoardModel:CanItemSell(item)
  local chainId = GM.ItemDataModel:GetChainId(item:GetType())
  return GM.ItemDataModel:GetChainProtectLevel(chainId) == nil
end

function MultiboardsActivityBoardModel:CanItemMove(item)
  if item:GetComponent(ItemPortal) ~= nil then
    return false
  end
  return BaseUIBoardModel.CanItemMove(self, item)
end

function MultiboardsActivityBoardModel:GetMergeLineLevel()
  return self.m_activityModel:GetLevel()
end

function MultiboardsActivityBoardModel:CheckBoardFulled()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item == nil then
      return false
    end
    if item:GetComponent(ItemCollectable) ~= nil then
      return false
    end
  end
  if self:FindMergePair() ~= nil then
    return false
  end
  return true
end

function MultiboardsActivityBoardModel:ChangeBoard(fileName, horizontal, vertical)
  self.m_initCodeMap = require("Data.Config." .. fileName)
  self.m_maxDepth = #self.m_initCodeMap + 1
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      self:RemoveItem(item)
      self:_RemoveItemProperty(item)
    end
  end
  self.HorizontalTiles = horizontal
  self.VerticalTiles = vertical
  self.m_itemLayerModel:ReInitBoard()
  self:_LoadFile(1, 1)
  self:SetCurDepth(self.VerticalTiles + 1)
  self:InitPaperBoxRewardConfig(true)
  if self.m_obstacleLayerModel ~= nil then
    self.m_obstacleLayerModel:ReInitBoard()
  end
end

function MultiboardsActivityBoardModel:GetActivityModel()
  return self.m_activityModel
end

function MultiboardsActivityBoardModel:CollectPropertyItem()
  local hasPropertyItem = false
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      local collectTb = item:GetComponent(ItemCollectable)
      if collectTb then
        local collectRewards = collectTb:GetRewards()
        self:RemoveItem(item)
        hasPropertyItem = true
        RewardApi.AcquireRewardsLogic(collectRewards, EPropertySource.Give, self.m_activityModel:GetDefinition().RewardByBoardLevelUpBIType, EGameMode.Main, CacheItemType.Type2)
        self.event:Call(BoardEventType.CollectItem, {Source = item})
      end
    end
  end
  return hasPropertyItem
end

function MultiboardsActivityBoardModel:GetBoardSize()
  return self.HorizontalTiles, self.VerticalTiles
end

function MultiboardsActivityBoardModel:GetPaperBoxRewardConfigName()
  if self.m_activityModel:GetDefinition().BoardPaperRewardConfigName ~= nil then
    return self.m_activityModel:GetDefinition().BoardPaperRewardConfigName .. "_" .. self.m_activityModel:GetCurrentBoardIndex()
  end
end

function MultiboardsActivityBoardModel:GetMainItemCodeByLevel(level)
  return self.m_activityModel:GetItemCodeByLevel(level)
end
