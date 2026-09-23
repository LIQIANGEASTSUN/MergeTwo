EBoardScrollDirection = {Up = 1, Down = 2}
EBoardScrollRuleType = {
  MergeLineUnlock = 1,
  Custom = 2,
  FogUnlock = 3
}
EScrollItemProcessingRule = {
  CacheBoardItem = 1,
  CacheItemCode = 2,
  Remove = 3,
  Collect = 4,
  Custom = 5
}
BaseUIBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type2,
  ScrollDirection = EBoardScrollDirection.Down,
  ScrollRule = EBoardScrollRuleType.MergeLineUnlock
}, BaseActionBoardModel)
BaseUIBoardModel.__index = BaseUIBoardModel
BaseUIBoardModel.HorizontalTiles = 5
BaseUIBoardModel.VerticalTiles = 5
BaseUIBoardModel.CurDepthDbKey = "BoardCurDepth"
BaseUIBoardModel.HasItemCollectableTipShownDbKey = "BoardItemCollectableTipShown"
BaseUIBoardModel.CurEnergyInfoKey = "UIBoardEnergyInfo"
BaseUIBoardModel.EGenerateItemState = {
  ItemSpread = 1,
  FarmBoardDispatch = 2,
  FarmBoardAnimal = 3,
  ObstacleResolve = 4,
  ConsumeUIBoardEnergy = 5
}

function BaseUIBoardModel.Create(args)
  local boardModel = setmetatable({}, BaseUIBoardModel)
  boardModel:Init(args)
  return boardModel
end

function BaseUIBoardModel:Init(args)
  args.outValue = {}
  self.m_itemDataTable = args.itemDataTable
  self.m_itemLayerDataTable = args.itemLayerDataTable
  self.m_itemCacheDataTable = args.itemCacheDataTable
  self.m_dbTable = args.boardDataTable
  self.m_activityType = args.activityType
  self.m_activityModel = GM.ActivityManager:GetModel(self.m_activityType)
  self.m_activityDbTable = args.activityDBTable
  if args.boardInitFileName ~= nil then
    self.m_initCodeMap = require("Data.Config." .. args.boardInitFileName)
  else
    self.m_initCodeMap = Table.ListRep(Table.ListRep("0", self.HorizontalTiles, false), self.VerticalTiles, false)
  end
  self.m_maxDepth = #self.m_initCodeMap + 1
  self.m_itemManager = ItemManager.Create(args.itemDataTable, self)
  self.m_itemManager:OnSyncDataFinished()
  local itemLayerModel = BaseUIItemLayerModel.Create(self, args.itemLayerDataTable, self.m_itemManager)
  BaseActionBoardModel.Init(self, itemLayerModel)
  local bCreateInitBoard = self:_CreateInitBoard(args)
  Log.Assert(IsBool(bCreateInitBoard), "BaseUIBoardModel:_CreateInitBoard\232\191\148\229\155\158\229\191\133\233\161\187\230\152\175\229\184\131\229\176\148\229\128\188\239\188\140\232\175\183\230\163\128\230\159\165\229\173\144\231\177\187\229\174\158\231\142\176")
  args.outValue.isCreateInitBoard = bCreateInitBoard
  self.m_itemCacheModel = ItemCacheModel.Create(args.itemCacheDataTable, self.m_itemManager:GetIdGenerator())
  self.m_itemCacheModel:OnSyncDataFinished()
  if args.fogConfigFileName ~= nil then
    self.m_fogModel = BaseUIBoardFogModel.Create(self, args.fogConfigFileName, self.m_dbTable)
  end
  self.m_promptConfig = {}
  local promptConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.BoardPrompt)
  for _, promptConfig in ipairs(promptConfigs) do
    self.m_promptConfig[promptConfig.Type] = promptConfig
  end
  if args.itemIllustrated ~= nil then
    self.m_ItemIllustreatedBookModel = BaseUIItemIllustratedBookModel.Create(self, args.itemIllustrated, self.m_activityDbTable)
  end
  if args.obstacleConfigFileName ~= nil then
    self.m_obstacleLayerModel = BaseUIBoardObstacleLayerModel.Create(self, args.obstacleConfigFileName, self.m_activityDbTable)
  end
  if args.listEnergyMultiUnlockConfig ~= nil then
    self.m_energyModel = BaseUIBoardEnergyModel.Create({
      listEnergyMultiUnlockConfig = args.listEnergyMultiUnlockConfig,
      dbTable = self.m_activityDbTable,
      uiBoardModel = self
    })
  end
  self:InitPaperBoxRewardConfig(true)
end

function BaseUIBoardModel:GetValidPositionIterator(x, y)
  if x == nil or y == nil then
    return self._ValidPositionIterator, self, nil
  end
  return self._ValidPositionIterator, self, BoardPosition.Create(x, y)
end

function BaseUIBoardModel:_CreateInitBoard(args)
  if self:GetCurDepth() == 0 then
    self:_LoadFile(1, 1)
    self:SetCurDepth(self.VerticalTiles + 1)
    return true
  end
  return false
end

function BaseUIBoardModel:Update()
  for item, _ in pairs(self:GetAllBoardItems(true)) do
    item:DispatchComponentUpdateEvent()
  end
end

function BaseUIBoardModel:DropData(bLateInit)
  self.m_dbTable:Drop()
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  if self.m_ItemIllustreatedBookModel ~= nil then
    self.m_ItemIllustreatedBookModel:Drop()
  end
  if self.m_obstacleLayerModel ~= nil then
    self.m_obstacleLayerModel:Drop()
    self.m_obstacleLayerModel = nil
  end
  if bLateInit then
    self.m_itemCacheModel:ResetVar()
    self.m_itemManager:ResetVar()
  end
  self.m_scrollRuleConfig = nil
end

function BaseUIBoardModel:_SetItem(position, item)
  BaseActionBoardModel._SetItem(self, position, item)
  self:CountItemsCode()
end

function BaseUIBoardModel:GenerateItem(position, code, _, _, generateItemState)
  local newItem = BaseActionBoardModel.GenerateItem(self, position, code, nil, false)
  if self.m_ItemIllustreatedBookModel ~= nil then
    self.m_ItemIllustreatedBookModel:AddCacheItem(code, self, position, generateItemState)
  end
  EventDispatcher.DispatchEvent(EEventType.UIBoardGeneratedItem, {
    code = code,
    boardType = self.BoardType
  })
  return newItem
end

function BaseUIBoardModel:DispatchItem(itemCode)
  local boardPosition = self.m_itemLayerModel:FindEmptyPositionInValidOrder()
  if boardPosition ~= nil then
    local newItem = self:GenerateItem(boardPosition, itemCode)
    return newItem
  end
  self:CacheItems({itemCode}, CacheItemType.Type2)
  return nil
end

function BaseUIBoardModel:SpreadItem(sourceItem, newItemPosition, newItemCode, args)
  args.generateItemState = BaseUIBoardModel.EGenerateItemState.ItemSpread
  local message = BaseActionBoardModel.SpreadItem(self, sourceItem, newItemPosition, newItemCode, args)
  EventDispatcher.DispatchEvent(EEventType.ItemSpread, message)
  if args.logSpread then
    GM.BIManager:LogSpread(sourceItem:GetCode(), newItemCode, {
      st = args.spreadType or 0
    }, self.BoardType)
  end
end

function BaseUIBoardModel:DragItem(item, targetPosition)
  if not self:IsPositionInteractable(targetPosition) then
    item:SetPosition(item:GetPosition())
    return
  end
  local targetItem = self:GetItem(targetPosition)
  if targetItem == nil or targetItem == item then
    self:_SetItem(item:GetPosition(), nil, false)
    self:_SetItem(targetPosition, item)
    item:SetPosition(targetPosition)
    return
  end
  if self:CanItemMerge(item, targetItem) then
    self:_MergeItem(item, targetItem, targetPosition)
    return
  end
  local targetItemSwallow = targetItem:GetComponent(ItemSwallow)
  if targetItemSwallow ~= nil and targetItemSwallow:CanSwallow(item) then
    targetItemSwallow:Swallow(item)
    return
  end
  if not self:CanItemMove(targetItem) then
    item:SetPosition(item:GetPosition())
    return
  end
  local itemPosition = item:GetPosition()
  self:_SetItem(item:GetPosition(), nil, false)
  self:_SetItem(targetPosition, item, false)
  self:_SetItem(itemPosition, targetItem)
  item:SetPosition(targetPosition)
  targetItem:SetPosition(itemPosition)
end

function BaseUIBoardModel:_DoMergeItem(item, targetItem, targetPosition)
  local message = BaseActionBoardModel._DoMergeItem(self, item, targetItem, targetPosition)
  local remainAutoSpreadItems
  local remainSpreadItemsA = item:GetComponent(ItemSpread) and item:GetComponent(ItemSpread):GetAutoSpreadDecrementalRemainTypes()
  local remainSpreadItemsB = targetItem:GetComponent(ItemSpread) and targetItem:GetComponent(ItemSpread):GetAutoSpreadDecrementalRemainTypes()
  if remainSpreadItemsA ~= nil or remainSpreadItemsB ~= nil then
    remainAutoSpreadItems = {}
    if remainSpreadItemsA ~= nil then
      Table.ListAppend(remainAutoSpreadItems, remainSpreadItemsA)
    end
    if remainSpreadItemsB ~= nil then
      Table.ListAppend(remainAutoSpreadItems, remainSpreadItemsB)
    end
    GM.BIManager:LogAction(EBIType.CacheItemFromMerge, {
      ia = item:GetType(),
      ca = remainSpreadItemsA or Table.Empty,
      ib = targetItem:GetType(),
      cb = remainSpreadItemsB or Table.Empty
    })
    self.m_itemCacheModel:PushItems(remainAutoSpreadItems, CacheItemType.Type2)
    EventDispatcher.DispatchEvent(EEventType.CacheItems, {
      boardType = self.BoardType
    })
  end
  GM.BIManager:LogMerge(item:GetType(), message.New:GetCode(), nil, self.BoardType)
  if targetItem:GetComponent(ItemObstacleClear) ~= nil and self.m_obstacleLayerModel ~= nil then
    self.m_obstacleLayerModel:ReduceObstacleLevel(targetItem, targetPosition)
  end
  return message
end

function BaseUIBoardModel:CanItemMove(item)
  if item:GetComponent(ItemFog) ~= nil then
    return false
  end
  local config = GM.ItemDataModel:GetModelConfig(item:GetCode(), true)
  if config ~= nil and config.Static == 1 then
    return false
  end
  return BaseActionBoardModel.CanItemMove(self, item)
end

function BaseUIBoardModel:GetCurDepth()
  return self.m_dbTable:GetValue(BaseUIBoardModel.CurDepthDbKey, "value") or 0
end

function BaseUIBoardModel:SetCurDepth(y)
  self.m_dbTable:Set(BaseUIBoardModel.CurDepthDbKey, "value", y)
end

function BaseUIBoardModel:_LoadFile(y, depth, bScroll)
  local bInverse = self.ScrollDirection == EBoardScrollDirection.Down
  self.m_itemLayerModel:LoadFile(self, self.m_initCodeMap, y, depth, bInverse, bScroll)
end

function BaseUIBoardModel:TryScroll()
  local moveRows = self:GetScrollRows()
  if moveRows == 0 then
    return 0
  end
  local curDepth = self:GetCurDepth()
  local tarDepth = math.min(curDepth + moveRows, self.m_maxDepth)
  self:SetCurDepth(tarDepth)
  moveRows = tarDepth - curDepth
  GM.BIManager:LogAction(EBIType.BoardDepthUpdate, {
    b = self.BoardType,
    r = moveRows,
    d = tarDepth
  })
  local waitScrollOutItems, waitScrollMoveItems = self:GetAllNeedScrollItems(moveRows)
  if GameConfig.IsTestMode() then
    local str = "[\229\176\143\230\163\139\231\155\152\230\187\154\229\138\168]\230\187\154\229\138\168\229\135\186\229\177\143\229\185\149\231\154\132\230\163\139\229\173\144\239\188\136\230\142\146\229\186\143\229\137\141\239\188\137\239\188\154\n"
    for _, itemData in ipairs(waitScrollOutItems) do
      str = str .. itemData.item:GetCode() .. ",\n"
    end
    Log.Info(str)
  end
  self:SortScrollToCacheItems(waitScrollOutItems)
  if GameConfig.IsTestMode() then
    local str = "[\229\176\143\230\163\139\231\155\152\230\187\154\229\138\168]\230\187\154\229\138\168\229\135\186\229\177\143\229\185\149\231\154\132\230\163\139\229\173\144\239\188\136\230\142\146\229\186\143\229\144\142\239\188\137\239\188\154\n"
    for _, itemData in ipairs(waitScrollOutItems) do
      str = str .. itemData.item:GetCode() .. ",\n"
    end
    Log.Info(str)
  end
  for _, itemData in ipairs(waitScrollOutItems) do
    self:ScrollItemProcessor(itemData.item, itemData.innerCode, itemData.processingRule)
  end
  for _, data in ipairs(waitScrollMoveItems) do
    self.m_itemLayerModel:SetItem(data.item:GetPosition(), nil)
    self.m_itemLayerModel:SetItem(data.moveTo, data.item)
  end
  self:_LoadFile(self.VerticalTiles - moveRows + 1, curDepth, true)
  if self.m_fogModel then
    self.m_fogModel:UpdateFogGroup()
  end
  return moveRows
end

function BaseUIBoardModel:GetScrollRows()
  if self.m_maxDepth <= self.VerticalTiles + 1 then
    return 0
  end
  local curDepth = self:GetCurDepth()
  if curDepth == self.m_maxDepth then
    return 0
  end
  if self.ScrollRule == EBoardScrollRuleType.MergeLineUnlock then
    return self:GetScrollRowByMergeLineUnlock()
  elseif self.ScrollRule == EBoardScrollRuleType.FogUnlock then
    return self:GetScrollRowByFogUnlock()
  elseif self.ScrollRule == EBoardScrollRuleType.Custom then
    return self:GetScrollRowByCustomRule()
  end
  Log.Assert(false, "\230\187\154\229\138\168\232\167\132\229\136\153\231\177\187\229\158\139\233\148\153\232\175\175")
  return 0
end

function BaseUIBoardModel:GetScrollRowByMergeLineUnlock()
  local ruleConfig = self:GetScrollRuleConfig()
  if Table.IsEmpty(ruleConfig) then
    return 0
  end
  local curLevel = self:GetMergeLineLevel()
  local curDepth = self:GetCurDepth()
  local totalMoveRows = 0
  for _, data in ipairs(ruleConfig) do
    if curLevel >= data.level then
      totalMoveRows = totalMoveRows + data.scrollRows
    end
  end
  local alreadyMoveRows = curDepth - 1 - self.VerticalTiles
  local moveRows = totalMoveRows - alreadyMoveRows
  moveRows = math.min(moveRows, self.m_maxDepth - curDepth)
  return math.max(0, moveRows)
end

function BaseUIBoardModel:GetScrollRowByFogUnlock()
  local fogModel = self:GetFogModel()
  if self.m_fogModel == nil then
    Log.Error("\230\187\154\229\138\168\232\167\132\229\136\153\228\184\186\228\186\145\229\177\130\232\167\163\233\148\129\239\188\140\228\189\134\230\152\175\230\178\161\230\156\137\233\133\141\231\189\174\228\186\145\229\177\130")
    return 0
  end
  if self.m_scrollRuleConfig == nil then
    self.m_scrollRuleConfig = Table.DeepCopy(self:GetScrollRuleConfig())
    if not Table.IsEmpty(self.m_scrollRuleConfig) then
      table.sort(self.m_scrollRuleConfig, function(a, b)
        local fogIdA = a.fogId
        local fogIdB = b.fogId
        local indexA = fogModel:GetFogConfigById(fogIdA).index
        local indexB = fogModel:GetFogConfigById(fogIdB).index
        return indexA < indexB
      end)
    end
  end
  if Table.IsEmpty(self.m_scrollRuleConfig) then
    return 0
  end
  local curDepth = self:GetCurDepth()
  local totalMoveRows = 0
  for _, data in ipairs(self.m_scrollRuleConfig) do
    if fogModel:IsFogUnlocked(data.fogId) then
      totalMoveRows = totalMoveRows + data.scrollRows
    end
  end
  local alreadyMoveRows = curDepth - 1 - self.VerticalTiles
  local moveRows = totalMoveRows - alreadyMoveRows
  moveRows = math.min(moveRows, self.m_maxDepth - curDepth)
  return math.max(0, moveRows)
end

function BaseUIBoardModel:GetMergeLineLevel()
  Log.Assert(false, "\233\187\152\232\174\164\229\144\136\230\136\144\231\186\191\232\167\163\233\148\129\230\187\154\229\138\168\232\167\132\229\136\153\239\188\140\229\173\144\231\177\187\229\191\133\233\161\187\233\135\141\232\189\189GetMergeLineLevel")
end

function BaseUIBoardModel:GetScrollRuleConfig()
  Log.Assert(false, "\233\187\152\232\174\164\229\144\136\230\136\144\231\186\191\232\167\163\233\148\129\230\187\154\229\138\168\232\167\132\229\136\153\239\188\140\229\173\144\231\177\187\229\191\133\233\161\187\233\135\141\232\189\189GetScrollRuleConfig")
end

function BaseUIBoardModel:GetScrollRowByCustomRule()
  Log.Assert(false, "\232\135\170\229\174\154\228\185\137\230\187\154\229\138\168\232\167\132\229\136\153\239\188\140\229\173\144\231\177\187\229\191\133\233\161\187\233\135\141\232\189\189GetScrollRowByCustomRule")
  return 0
end

function BaseUIBoardModel:GetScrollItemProcessingRule(item, innerCode)
  if item:GetType() == ItemType.RewardBubble then
    return EScrollItemProcessingRule.CacheBoardItem
  end
  local code = item:GetCode()
  if code == nil then
    Log.Error("GetScrollItemProcessingRule\230\137\190\228\184\141\229\136\176item Code \228\184\186\231\169\186")
    return EScrollItemProcessingRule.Remove
  end
  if innerCode ~= nil then
    code = innerCode
  end
  local config = GM.ItemDataModel:GetModelConfig(code, true)
  if config == nil then
    Log.Error("GetScrollItemProcessingRule\230\137\190\228\184\141\229\136\176item\233\133\141\231\189\174\239\188\154" .. code)
    return EScrollItemProcessingRule.Remove
  end
  if innerCode then
    return EScrollItemProcessingRule.CacheItemCode
  end
  return EScrollItemProcessingRule.CacheBoardItem
end

function BaseUIBoardModel:ScrollItemProcessor(item, innerCode, processingRule)
  if processingRule == EScrollItemProcessingRule.Remove then
    self:RemoveItem(item)
  elseif processingRule == EScrollItemProcessingRule.CacheItemCode then
    self:CacheItems({innerCode})
    self:RemoveItem(item)
  elseif processingRule == EScrollItemProcessingRule.CacheBoardItem then
    self:CacheItemsFromBoard({item})
  elseif processingRule == EScrollItemProcessingRule.Collect then
    Log.Error("Collect\233\128\187\232\190\145\231\155\174\229\137\141\230\178\161\230\156\137\233\156\128\230\177\130\239\188\140\229\155\160\230\173\164\228\187\165\228\184\139\233\128\187\232\190\145\229\185\182\230\178\161\230\156\137\232\183\145\232\191\135\239\188\140\233\156\128\232\166\129\230\156\137\230\173\164\233\156\128\230\177\130\231\154\132\228\186\186\230\181\139\232\175\149\228\184\128\228\184\139")
    local rewards = {}
    rewards = self:_CalculateItemCollectRewards(item, rewards, 1)
    self:RemoveItem(item)
    RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, EBIType.BoardScroll, EGameMode.Main, CacheItemType.Type2, self.BoardType)
    EventDispatcher.DispatchEvent(EEventType.BoardCollect, {
      Source = item:GetType(),
      Rewards = rewards,
      item = item
    })
    self.event:Call(BoardEventType.CollectItem, {Source = item})
  elseif processingRule == EScrollItemProcessingRule.Custom then
    self:ScrollItemProcessorCustom(item, innerCode)
  else
    Log.Error("ScrollItemProcessor\230\156\170\231\159\165\229\164\132\231\144\134\232\167\132\229\136\153\239\188\154" .. tostring(processingRule))
  end
end

function BaseUIBoardModel:ScrollItemProcessorCustom(item)
  Log.Assert(false, "\232\135\170\229\174\154\228\185\137\230\163\139\229\173\144\229\155\158\230\148\182\229\164\132\231\144\134\232\167\132\229\136\153\239\188\140\229\173\144\231\177\187\229\191\133\233\161\187\233\135\141\232\189\189ScrollItemProcessorCustom")
end

function BaseUIBoardModel:SortScrollToCacheItems(waitScrollOutItems)
  table.sort(waitScrollOutItems, function(a, b)
    local itemTypeA = a.innerCode or a.item:GetType()
    local itemTypeB = b.innerCode or b.item:GetType()
    return GM.ItemDataModel:GetChainLevel(itemTypeA) > GM.ItemDataModel:GetChainLevel(itemTypeB)
  end)
end

function BaseUIBoardModel:GetAllNeedScrollItems(rows)
  local waitScrollOutItems = {}
  local waitScrollMoveItems = {}
  if self.ScrollDirection == EBoardScrollDirection.Up then
    for position in self:GetValidPositionIterator() do
      local item = self:GetItem(position, true)
      if item ~= nil then
        if rows >= position:GetY() then
          local innerCode = ItemModelFactory.GetInnerTypeRecursive(item:GetCode())
          local processingRule = self:GetScrollItemProcessingRule(item, innerCode)
          local itemData = {
            item = item,
            processingRule = processingRule,
            innerCode = innerCode
          }
          table.insert(waitScrollOutItems, itemData)
        else
          local itemData = {
            item = item,
            moveTo = BoardPosition.Create(position:GetX(), position:GetY() - rows)
          }
          table.insert(waitScrollMoveItems, itemData)
        end
      end
    end
  else
    for y = self.VerticalTiles, 1, -1 do
      for x = 1, self.HorizontalTiles do
        local position = BoardPosition.Create(x, y)
        local item = self:GetItem(position, true)
        if item ~= nil then
          if position:GetY() > self.VerticalTiles - rows then
            local innerCode = ItemModelFactory.GetInnerTypeRecursive(item:GetCode())
            local processingRule = self:GetScrollItemProcessingRule(item, innerCode)
            local itemData = {
              item = item,
              processingRule = processingRule,
              innerCode = innerCode
            }
            table.insert(waitScrollOutItems, itemData)
          else
            local itemData = {
              item = item,
              moveTo = BoardPosition.Create(position:GetX(), position:GetY() + rows)
            }
            table.insert(waitScrollMoveItems, itemData)
          end
        end
      end
    end
  end
  return waitScrollOutItems, waitScrollMoveItems
end

function BaseUIBoardModel:GetFogModel()
  return self.m_fogModel
end

function BaseUIBoardModel:TryUnlockFogByLevel(activityLevel, itemModel, bViewDelay)
  if self.m_fogModel == nil then
    return
  end
  local fogs = self.m_fogModel:TryUnlockFogByLevel(activityLevel, itemModel, bViewDelay)
  if self.m_ItemIllustreatedBookModel ~= nil and not Table.IsEmpty(fogs) then
    for _, fog in ipairs(fogs) do
      local itemModel = fog:GetItemModel()
      self.m_ItemIllustreatedBookModel:AddCacheItem(itemModel:GetCode(), self.m_boardModel, itemModel:GetPosition())
    end
  end
  return fogs
end

function BaseUIBoardModel:_PostProcessOnPopCachedItem(code, cachedItemId)
  if self._LogPopCacheItem then
    self:_LogPopCacheItem(code, cachedItemId)
  end
end

function BaseUIBoardModel:FindSpreadPosition(itemSpread, itemModel)
  return self.m_itemLayerModel:FindEmptyPositionInSpreadOrderWithNum(itemModel:GetPosition(), nil, 1, false)[1]
end

function BaseUIBoardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
  local cacheItems = self.m_itemCacheModel:GetAllCacheItems()
  local rewards = {}
  for code, data in pairs(cacheItems) do
    local simpleItemNumber = data.Count - #data.CacheItemIdList
    local simpleItem = ItemModelFactory.CreateWithCode(self.m_boardModel, nil, code, false)
    rewards = self:_CalculateItemCollectRewards(simpleItem, rewards, simpleItemNumber)
    for _, itemId in ipairs(data.CacheItemIdList) do
      local itemModel = self.m_itemManager:GetItem(itemId)
      if itemModel ~= nil then
        rewards = self:_CalculateItemCollectRewards(itemModel, rewards, 1)
      end
    end
  end
  rewards = RewardApi.MergeRewards(rewards, self:CollectBoardPropertyRewardsWithoutConvert())
  return rewards
end

function BaseUIBoardModel:CollectBoardPropertyRewardsWithoutConvert()
  local rewards = BaseActionBoardModel.CollectBoardPropertyRewardsWithoutConvert(self)
  if self.m_ItemIllustreatedBookModel ~= nil then
    rewards = RewardApi.MergeRewards(rewards, self.m_ItemIllustreatedBookModel:CalculateItemIllustreatedItemReward())
  end
  return rewards
end

function BaseUIBoardModel:GetItemIllustratedBook()
  return self.m_ItemIllustreatedBookModel
end

function BaseUIBoardModel:GetInitCodeMapAndMaxDepth()
  return self.m_initCodeMap, self.m_maxDepth
end

function BaseUIBoardModel:GetActivityModel()
  return self.m_activityModel
end

function BaseUIBoardModel:HasItemTypeCollectableTipShownFromMerge(itemType)
  if self.m_mapItemTypeCollectableTipShownFromMerge == nil then
    local jsonStr = self.m_dbTable:GetValue(BaseUIBoardModel.HasItemCollectableTipShownDbKey, "value")
    if not StringUtil.IsNilOrEmpty(jsonStr) then
      self.m_mapItemTypeCollectableTipShownFromMerge = json.decode(jsonStr)
    else
      self.m_mapItemTypeCollectableTipShownFromMerge = {}
    end
  end
  return self.m_mapItemTypeCollectableTipShownFromMerge[itemType]
end

function BaseUIBoardModel:SetItemTypeCollectableTipShownFromMerge(itemType)
  if self:HasItemTypeCollectableTipShownFromMerge(itemType) then
    return
  end
  self.m_mapItemTypeCollectableTipShownFromMerge[itemType] = true
  self.m_dbTable:Set(BaseUIBoardModel.HasItemCollectableTipShownDbKey, "value", json.encode(self.m_mapItemTypeCollectableTipShownFromMerge))
end

function BaseUIBoardModel:GetPaperBoxRewardConfig()
  local configName = self:GetPaperBoxRewardConfigName()
  if configName ~= nil then
    local config = require("Data.Config." .. configName)
    return config
  end
end

function BaseUIBoardModel:GetPaperBoxRewardConfigName()
end

function BaseUIBoardModel:GetPaperBoxRewardVerticalTiles()
  return #self.m_initCodeMap
end

function BaseUIBoardModel:GetPaperBoxRewardPosition(boardPos)
  local depth = self:GetCurDepth()
  if self.ScrollDirection == EBoardScrollDirection.Down then
    return BoardPosition.Create(boardPos:GetX(), #self.m_initCodeMap + boardPos:GetY() - depth + 1)
  else
    return BoardPosition.Create(boardPos:GetX(), depth - self.VerticalTiles - 1 + boardPos:GetY())
  end
  return boardPos
end

function BaseUIBoardModel:GetObstacleLayerModel()
  return self.m_obstacleLayerModel
end

function BaseUIBoardModel:ObstacleConfigPositionToCurrentBoardPosition(boardPos)
  self:PositionIsValid(boardPos)
  local depth = self:GetCurDepth()
  if self.ScrollDirection == EBoardScrollDirection.Down then
    return BoardPosition.Create(boardPos:GetX(), boardPos:GetY() - #self.m_initCodeMap + depth - 1)
  else
    return BoardPosition.Create(boardPos:GetX(), boardPos:GetY() + self.VerticalTiles - depth + 1)
  end
  return boardPos
end

function BaseUIBoardModel:IsEnergyModuleOpen()
  return self.m_energyModel ~= nil
end

function BaseUIBoardModel:GetEnergyModel()
  return self.m_energyModel
end

function BaseUIBoardModel:GetMainItemCodeByLevel(level)
  Log.Error("\230\173\164\229\135\189\230\149\176\228\184\186\228\189\147\229\138\155\230\168\161\229\188\143\228\184\139\231\154\132\231\186\175\232\153\154\229\135\189\230\149\176\239\188\140\232\175\183\231\187\167\230\137\191")
end

function BaseUIBoardModel:TryUpdateMultiLevel()
  if self.m_energyModel ~= nil then
    self.m_energyModel:TryUnlockLevel()
  end
end

function BaseUIBoardModel:TryGenerateMainItem()
  if self.m_energyModel == nil then
    return
  end
  if self:IsBoardFull() then
    Log.Error("\233\148\153\232\175\175\239\188\140\230\163\139\231\155\152\229\183\178\230\187\161 ")
    return
  end
  if self.m_energyModel:CanCostEnergyNum() then
    local nMulti = self.m_energyModel:CostEnergyNum()
    local code = self:GetMainItemCodeByLevel(1 + nMulti)
    local pos = self:FindEmptyPositionInValidOrder()
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemLandOpt) then
      pos = self:FindEmptySpreadPosition(code)
    end
    local newItem = self:GenerateItem(pos, code, BaseUIBoardModel.EGenerateItemState.ConsumeUIBoardEnergy)
    self.event:Call(BoardEventType.ConsumeGenItemByUIEnergy, {newItem = newItem, exponent = nMulti})
    EventDispatcher.DispatchEvent(EEventType.ItemGenByUIEnergy, {newItem = newItem, exponent = nMulti})
    GM.BIManager:LogAction(EBIType.UIBoardClickEnergyGenItem, {e = nMulti})
  else
    Log.Error("\228\189\147\229\138\155\228\184\141\232\182\179")
  end
end

function BaseUIBoardModel:GetConsumePropertyItemCount()
  return self:GetCachedItemCount() + (self.m_energyModel ~= nil and self.m_energyModel:GetCurEnergy() or 0)
end
