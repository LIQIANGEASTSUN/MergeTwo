FarmboardActivityBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type2,
  BoardType = EBoardType.Farmboard,
  ScrollRule = EBoardScrollRuleType.FogUnlock
}, BaseUIBoardModel)
FarmboardActivityBoardModel.__index = FarmboardActivityBoardModel
FarmboardActivityBoardModel.HorizontalTiles = 7
FarmboardActivityBoardModel.VerticalTiles = 7

function FarmboardActivityBoardModel.Create(args)
  local boardModel = setmetatable({}, FarmboardActivityBoardModel)
  boardModel:Init(args)
  return boardModel
end

function FarmboardActivityBoardModel:CanItemSell(item)
  local chainId = GM.ItemDataModel:GetChainId(item:GetType())
  return GM.ItemDataModel:GetChainProtectLevel(chainId) == nil
end

function FarmboardActivityBoardModel:CheckBoardFulled()
  local count = 0
  for item, _ in pairs(self:GetAllBoardItems()) do
    if item:GetComponent(ItemCollectable) ~= nil then
      return false
    end
    count = count + 1
  end
  if count < self.HorizontalTiles * self.VerticalTiles then
    return false
  end
  if count > self.HorizontalTiles * self.VerticalTiles then
    Log.Error("FarmboardActivityBoardModel:CheckBoardFulled() count > self.HorizontalTiles * self.VerticalTiles")
  end
  if self:FindMergePair() ~= nil then
    return false
  end
  return true
end

function FarmboardActivityBoardModel:GetAnimalActivateItem()
  for position in self:GetValidPositionIterator() do
    if self:IsPositionInteractable(position) then
      local item = self:GetItem(position)
      if item ~= nil then
        local itemCommand = item:GetComponent(ItemCommand)
        if itemCommand and itemCommand:GetCommand() == ItemCommandOperation.FarmboardActivateAnimal then
          return item
        end
      end
    end
  end
end

function FarmboardActivityBoardModel:GetItemByItemType(itemType)
  for position in self:GetValidPositionIterator() do
    if self:IsPositionInteractable(position) then
      local item = self:GetItem(position)
      if item ~= nil and item:GetType() == itemType then
        return item
      end
    end
  end
end

function FarmboardActivityBoardModel:GetScrollRuleConfig()
  return require("Data.Config." .. FarmboardActivityDefinition[self.m_activityType].BoardScrollConfigName)
end

function FarmboardActivityBoardModel:SortScrollToCacheItems(waitScrollOutItems)
  table.sort(waitScrollOutItems, function(a, b)
    local orderA = 999
    local orderB = 999
    local itemTypeA = a.innerCode and a.innerCode or a.item:GetType()
    local itemTypeB = b.innerCode and b.innerCode or b.item:GetType()
    for i, prefix in ipairs(FarmboardActivityDefinition[self.m_activityType].ScrollCacheItemSortPrefix) do
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

function FarmboardActivityBoardModel:BlockDispatchItem(itemCode)
  local boardPosition = self.m_itemLayerModel:FindEmptyPositionInValidOrder()
  if boardPosition ~= nil then
    local newItem = self:GenerateItem(boardPosition, itemCode, nil, nil, BaseUIBoardModel.EGenerateItemState.FarmBoardDispatch)
    return newItem
  end
  self:CacheItems({itemCode}, CacheItemType.Type2)
  return nil
end

function FarmboardActivityBoardModel:_LogCacheItems(info)
  GM.BIManager:LogAction(FarmboardActivityDefinition[self.m_activityType].BICacheItem, info)
end

function FarmboardActivityBoardModel:_LogPopCacheItem(code, cacheitemId)
  GM.BIManager:LogAction(FarmboardActivityDefinition[self.m_activityType].BIPopItem, {c = code, id = cacheitemId})
end

function FarmboardActivityBoardModel:GetPaperBoxRewardConfigName()
  return self.m_activityModel:GetDefinition().BoardPaperRewardConfigName
end

function FarmboardActivityBoardModel:CheckActivityProp(reward)
  return reward[PROPERTY_TYPE] == self.m_activityModel:GetDefinition().TokenProperty
end
