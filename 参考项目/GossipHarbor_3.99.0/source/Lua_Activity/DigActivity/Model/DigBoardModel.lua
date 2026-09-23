DigBoardModel = setmetatable({
  BoardType = EBoardType.DigBoard,
  ScrollDirection = EBoardScrollDirection.Up,
  ScrollRule = EBoardScrollRuleType.Custom
}, BaseUIBoardModel)
DigBoardModel.__index = DigBoardModel
DigBoardModel.HorizontalTiles = 6
DigBoardModel.VerticalTiles = 8

function DigBoardModel.Create(args)
  local boardModel = setmetatable({}, DigBoardModel)
  boardModel:Init(args)
  return boardModel
end

function DigBoardModel:Init(args)
  BaseUIBoardModel.Init(self, args)
  self.m_activityDefinition = DigActivityDefinition[args.activityType]
end

function DigBoardModel:_CreateInitBoard(args)
  if args.boardInitDepth ~= nil and args.boardInitDepth > 0 then
    self:SetCurDepth(args.boardInitDepth)
  end
  return BaseUIBoardModel._CreateInitBoard(self, args)
end

function DigBoardModel:Update()
  for model, _ in pairs(self:GetAllBoardItems(true)) do
    model:DispatchComponentUpdateEvent()
  end
end

function DigBoardModel:CheckBoardFulled()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item == nil then
      return false
    end
    local collectTb = item:GetComponent(ItemCollectable)
    if collectTb then
      return false
    end
  end
  if self:FindMergePair() ~= nil then
    return false
  end
  return true
end

function DigBoardModel:GetScrollRowByCustomRule()
  local depth = self:GetCurDepth()
  if depth == #self.m_initCodeMap + 1 then
    return 0
  end
  local m = 7
  local n = 5
  local OreMinRow = DigBoardModel.VerticalTiles + 1
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      if item:GetComponent(ItemDig) ~= nil then
        OreMinRow = position:GetY()
        break
      end
      local code = item:GetCode()
      while true do
        local innerCode = ItemModelFactory.GetInnerType(code)
        if innerCode == code then
          break
        end
        code = innerCode
      end
      local config = GM.ItemDataModel:GetModelConfig(code, true)
      if config ~= nil and config.Dig_MaxLevel ~= nil then
        OreMinRow = position:GetY()
        break
      end
    end
  end
  if m > OreMinRow then
    return 0
  else
    return math.min(OreMinRow - n, #self.m_initCodeMap - depth + 1)
  end
end

function DigBoardModel:GetScrollItemProcessingRule(item, innerCode)
  if item:GetType() ~= ItemType.RewardBubble then
    local code = innerCode or item:GetCode()
    local config = GM.ItemDataModel:GetModelConfig(code, true)
    if not config then
      return EScrollItemProcessingRule.Remove
    end
    if config.Dig_MaxLevel then
      return EScrollItemProcessingRule.Remove
    end
  end
  return BaseUIBoardModel.GetScrollItemProcessingRule(self, item, innerCode)
end

function DigBoardModel:SortScrollToCacheItems(waitScrollOutItems)
  local itemDataModel = GM.ItemDataModel
  table.sort(waitScrollOutItems, function(a, b)
    local orderA = 999
    local orderB = 999
    local itemTypeA = a.processingRule ~= EScrollItemProcessingRule.CacheBoardItem and a.innerCode and a.innerCode or a.item:GetType()
    local itemTypeB = b.processingRule ~= EScrollItemProcessingRule.CacheBoardItem and b.innerCode and b.innerCode or b.item:GetType()
    local chainIdA = itemDataModel:GetChainId(itemTypeA)
    local chainIdB = itemDataModel:GetChainId(itemTypeB)
    for i, prefix in ipairs(self.m_activityDefinition.ScrollCacheItemSortPrefix) do
      if prefix == chainIdA then
        orderA = i
      end
      if prefix == chainIdB then
        orderB = i
      end
    end
    if orderA ~= orderB then
      return orderA > orderB
    end
    return GM.ItemDataModel:GetChainLevel(itemTypeA) > GM.ItemDataModel:GetChainLevel(itemTypeB)
  end)
end

function DigBoardModel:GetBoardItemCount()
  return self.HorizontalTiles * self.VerticalTiles - self.m_itemLayerModel:_GetEmptyPositionCount()
end

function DigBoardModel:_LogCacheItems(info)
  GM.BIManager:LogAction(self.m_activityDefinition.CacheItemBIType, info)
end

function DigBoardModel:_LogPopCacheItem(code, cachedItemId)
  GM.BIManager:LogAction(self.m_activityDefinition.PopCacheItemBIType, {c = code, id = cachedItemId})
end

function DigBoardModel:CanItemMove(item)
  if item:GetComponent(ItemDig) ~= nil then
    return false
  end
  return BaseUIBoardModel.CanItemMove(self, item)
end

function DigBoardModel:IsPropEnoughToDig()
  if self.m_activityModel:GetDigPropNum() <= 0 then
    return false
  end
  return true
end

function DigBoardModel:ConsumeProp(num, itemType)
  self.m_activityModel:AddDigPropNum(num, itemType)
  EventDispatcher.DispatchEvent(EEventType.DigPropUsed, -num)
end

function DigBoardModel:GetMaxDepth()
  return #self.m_initCodeMap
end

function DigBoardModel:IsTopCollectItem(itemType)
  for _, chainId in pairs(self.m_activityDefinition.MainCollectItemChainList) do
    if itemType == GM.ItemDataModel:GetTypeByChainAndLevel(chainId, GM.ItemDataModel:GetChainMaxLevel(chainId)) then
      return true
    end
  end
end

function DigBoardModel:GetActivityDefinition()
  return self.m_activityDefinition
end

function DigBoardModel:GetPaperBoxRewardConfigName()
  return self.m_activityModel:GetDefinition().BoardPaperRewardConfigName
end

function DigBoardModel:CheckActivityProp(reward)
  return reward[PROPERTY_TYPE] == self.m_activityModel:GetDefinition().ActivityTokenPropertyType
end
