MapExploreActivityBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type1,
  BoardType = EBoardType.MapExplore
}, BaseUIBoardModel)
MapExploreActivityBoardModel.__index = MapExploreActivityBoardModel
MapExploreActivityBoardModel.HorizontalTiles = 7
MapExploreActivityBoardModel.VerticalTiles = 7

function MapExploreActivityBoardModel.Create(args)
  local boardModel = setmetatable({}, MapExploreActivityBoardModel)
  boardModel:Init(args)
  return boardModel
end

function MapExploreActivityBoardModel:CanItemSell(item)
  local chainId = GM.ItemDataModel:GetChainId(item:GetType())
  return GM.ItemDataModel:GetChainProtectLevel(chainId) == nil
end

function MapExploreActivityBoardModel:CheckBoardFulled()
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

function MapExploreActivityBoardModel:GetActivityModel()
  return self.m_activityModel
end

function MapExploreActivityBoardModel:CollectPropertyItem()
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

function MapExploreActivityBoardModel:GetBoardSize()
  return self.HorizontalTiles, self.VerticalTiles
end

function MapExploreActivityBoardModel:GetMergeLineLevel()
  return self.m_activityModel:GetLevel()
end

function MapExploreActivityBoardModel:GetScrollRuleConfig()
  return require("Data.Config." .. MapExploreActivityDefinition[self.m_activityType].BoardScrollConfigName)
end

function MapExploreActivityBoardModel:SortScrollToCacheItems(waitScrollOutItems)
  table.sort(waitScrollOutItems, function(a, b)
    local orderA = 0
    local orderB = 0
    local itemTypeA = a.innerCode or a.item:GetType()
    local itemTypeB = b.innerCode or b.item:GetType()
    for i, prefix in ipairs(MapExploreActivityDefinition[self.m_activityType].ScrollCacheItemSortPrefix) do
      if StringUtil.StartWith(itemTypeA, prefix) then
        orderA = i
      end
      if StringUtil.StartWith(itemTypeB, prefix) then
        orderB = i
      end
    end
    if orderA ~= orderB then
      return orderA > orderB
    end
    return GM.ItemDataModel:GetChainLevel(itemTypeA) < GM.ItemDataModel:GetChainLevel(itemTypeB)
  end)
end
