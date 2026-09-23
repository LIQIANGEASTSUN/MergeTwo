PureBoardActivityBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type1,
  BoardType = EBoardType.PureBoard
}, BaseUIBoardModel)
PureBoardActivityBoardModel.__index = PureBoardActivityBoardModel
PureBoardActivityBoardModel.HorizontalTiles = 7
PureBoardActivityBoardModel.VerticalTiles = 10

function PureBoardActivityBoardModel.Create(args)
  local boardModel = setmetatable({}, PureBoardActivityBoardModel)
  boardModel:Init(args)
  return boardModel
end

function PureBoardActivityBoardModel:Init(item)
  BaseUIBoardModel.Init(self, item)
  self.ScrollRule = self:GetScrollRuleType()
end

function PureBoardActivityBoardModel:CanItemSell(item)
  local chainId = GM.ItemDataModel:GetChainId(item:GetType())
  return GM.ItemDataModel:GetChainProtectLevel(chainId) == nil
end

function PureBoardActivityBoardModel:CheckBoardFulled()
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
    Log.Error("PureBoardActivityBoardModel:CheckBoardFulled() count > self.HorizontalTiles * self.VerticalTiles")
  end
  if self:FindMergePair() ~= nil then
    return false
  end
  return true
end

function PureBoardActivityBoardModel:GetScrollRuleConfig()
  return require("Data.Config." .. PureBoardActivityDefinition[self.m_activityType].BoardScrollConfigName)
end

function PureBoardActivityBoardModel:GetScrollRuleType()
  local scrollRuleConfig = self:GetScrollRuleConfig()
  if not Table.IsEmpty(scrollRuleConfig) then
    if scrollRuleConfig[1].level then
      return EBoardScrollRuleType.MergeLineUnlock
    elseif scrollRuleConfig[1].fogId then
      return EBoardScrollRuleType.FogUnlock
    else
      Log.Error("\230\142\162\233\153\169\230\163\139\231\155\152\230\156\170\231\159\165\231\154\132\230\187\154\229\138\168\232\167\132\229\136\153\233\133\141\231\189\174")
    end
  end
end

function PureBoardActivityBoardModel:GetMergeLineLevel()
  return self.m_activityModel:GetLevel()
end

function PureBoardActivityBoardModel:SortScrollToCacheItems(waitScrollOutItems)
  table.sort(waitScrollOutItems, function(a, b)
    local orderA = 0
    local orderB = 0
    local itemTypeA = a.innerCode or a.item:GetType()
    local itemTypeB = b.innerCode or b.item:GetType()
    for i, prefix in ipairs(PureBoardActivityDefinition[self.m_activityType].ScrollCacheItemSortPrefix) do
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

function PureBoardActivityBoardModel:GetPaperBoxRewardConfigName()
  return self.m_activityModel:GetDefinition().BoardPaperRewardConfigName
end
