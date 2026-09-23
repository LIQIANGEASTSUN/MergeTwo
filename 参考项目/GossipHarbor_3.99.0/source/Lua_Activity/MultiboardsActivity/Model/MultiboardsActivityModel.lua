MultiboardsActivityModel = setmetatable({}, BaseActivityModel)
MultiboardsActivityModel.__index = MultiboardsActivityModel
MultiboardsActivityEventType = {
  StateChanged = 1,
  BundleRefresh = 2,
  RefreshGiftRedPoint = 3
}
local DBKeys = {
  CurrentMergeLevel = "CurrentMergeLevel",
  InitialItemGiven = "InitialItemGiven",
  GenerateRoundTotalCountKey = "generateRoundTotalCount",
  GenerateRoundValidCountKey = "generateRoundValidCount",
  EverFulledKey = "EverFulled",
  CurrentBoardIndex = "CurrentBoardIndex",
  PopEndWindow = "PopEndWindow"
}

function MultiboardsActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityDefinition = MultiboardsActivityDefinition[activityType]
  BaseActivityModel.Init(self, activityType, activityDataTable)
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
end

function MultiboardsActivityModel:LateInit()
  BaseActivityModel.LateInit(self)
  self.m_lateInit = true
end

function MultiboardsActivityModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function MultiboardsActivityModel:_LoadOtherServerConfig(config)
  self.arrMergeLine = {}
  if not Table.IsEmpty(config.multiboards_items) then
    local cnt = 0
    for _, data in pairs(config.multiboards_items) do
      self.arrMergeLine[data.index] = data.item
      cnt = cnt + 1
    end
    if cnt ~= #self.arrMergeLine then
      Log.Error("MultiboardsActivityModel config error: Multiboards_items not continuous")
    end
  end
  self.m_boardsConfig = {}
  if not Table.IsEmpty(config.multiboards_board_config) then
    for _, data in pairs(config.multiboards_board_config) do
      table.insert(self.m_boardsConfig, Table.DeepCopy(data, true))
    end
    table.sort(self.m_boardsConfig, function(a, b)
      return a.level < b.level
    end)
  end
  self.m_genByFinishOrderCfg = nil
  self.m_genByFinishOrderUseDiff = false
  self.m_eventOrderScoreConfig = nil
  if not Table.IsEmpty(config.eventOrderScore) then
    local isNew = false
    for _, cfg in pairs(config.eventOrderScore) do
      if cfg.item == EPropertyType.MultiBoardsEnergy then
        isNew = true
      end
    end
    if not isNew then
      self.m_genByFinishOrderCfg = {}
      local isUseDiff = false
      for _, cfg in pairs(config.eventOrderScore) do
        table.insert(self.m_genByFinishOrderCfg, Table.DeepCopy(cfg, true))
        if not isUseDiff and IsNumber(cfg.diff_score_min) then
          isUseDiff = true
        end
      end
      self.m_genByFinishOrderUseDiff = isUseDiff
      if isUseDiff then
        table.sort(self.m_genByFinishOrderCfg, function(a, b)
          return a.diff_score_min < b.diff_score_min
        end)
      else
        table.sort(self.m_genByFinishOrderCfg, function(a, b)
          return a.gold_min < b.gold_min
        end)
      end
    else
      self.m_eventOrderScoreConfig = config.eventOrderScore
    end
  end
  self.m_itemBookConifg = config.eventBookContents
end

function MultiboardsActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  if self.m_boardModel ~= nil then
    self.m_boardModel:DropData(self.m_lateInit)
    self.m_boardModel = nil
  else
    self.m_itemDataTable:Drop()
    self.m_itemLayerDataTable:Drop()
    self.m_itemCacheDataTable:Drop()
    self.m_boardDataTable:Drop()
  end
end

function MultiboardsActivityModel:_OnStateChanged()
  local state = self:GetState(false)
  if state == ActivityState.Started or state == ActivityState.Ended then
    self:UpdateBoardModel(false)
    if state == ActivityState.Started then
      self:_TryGiveInitialItems()
    end
  else
    self.m_boardModel = nil
  end
  self.event:Call(MultiboardsActivityEventType.StateChanged)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  if self.m_lateInit then
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
  if state ~= ActivityState.Released and self.m_eventOrderScoreConfig ~= nil then
    GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.EventScoreConfigAcquireProperty, self, self.m_eventOrderScoreConfig, EPropertyType.MultiBoardsEnergy, function(num, scene)
      self.m_boardModel:GetEnergyModel():AddCurEnergy(num, scene)
    end, function()
      return self:GetState() == ActivityState.Started
    end, function()
      local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
      if mainWindow ~= nil then
        local boardView = GM.ModeViewController:GetMultiboardsActivityBoardView()
        local _, pos = boardView:GetBoardEntryBtnAndPos()
        local energyView = boardView:GetEnergyViewInfo()
        return energyView, pos
      end
    end, true)
    GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.GetRewardIconNameAndNativeSize, self, {
      [EPropertyType.MultiBoardsEnergy] = {
        GetBigIconFunc = function()
          return GM.ItemDataModel:GetSpriteName(self:GetItemCodeByLevel(1)), true
        end,
        GetIconFunc = function()
          return GM.ItemDataModel:GetSpriteName(self:GetItemCodeByLevel(1)), true
        end
      }
    })
  end
  GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.ConvertDynamicReward, self, {
    [EPropertyType.MultiBoardsEnergy] = function(reward, needBI)
      if GM.ActivityManager:GetStartedMultiboards() == nil or not GM.ActivityManager:GetStartedMultiboards():GetBoardModel():IsEnergyModuleOpen() then
        local newReward = {}
        newReward[PROPERTY_TYPE] = EPropertyType.Energy
        newReward[PROPERTY_COUNT] = reward[PROPERTY_COUNT]
        return newReward
      end
      return reward
    end
  })
end

function MultiboardsActivityModel:GetRedPointNum()
  if self.m_boardModel == nil then
    return 0
  end
  if self.m_boardModel:GetEnergyModel() ~= nil then
    return self.m_boardModel:GetEnergyModel():GetCurEnergy()
  else
    return self:GetCacheCount()
  end
end

function MultiboardsActivityModel:_OnOrderFinished(msg)
  local item = self:GetGenerateItemByOrder(msg.order)
  if item == nil then
    return
  end
  local list = {}
  for i = 1, item[PROPERTY_COUNT] do
    table.insert(list, item[PROPERTY_TYPE])
  end
  self:CacheItems(list)
  GM.BIManager:LogAcquire(item[PROPERTY_TYPE], item[PROPERTY_COUNT], self.m_activityDefinition.AcquireItemByOrderBIType, true)
  local message = {
    Source = msg.order,
    MultiboardsActivityItem = item[PROPERTY_TYPE],
    MultiboardsActivityItemCount = item[PROPERTY_COUNT]
  }
  GM.MainBoardModel.event:Call(BoardEventType.AddMultiboardsActivityItem, message)
end

function MultiboardsActivityModel:BoardUpgrade()
  local portalItem = {}
  local bringItems = {}
  for position in self.m_boardModel:GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      if item:GetComponent(ItemCobweb) or item:GetComponent(ItemPaperBox) then
        local innerCode = ItemModelFactory.GetInnerTypeRecursive(item:GetCode())
        local newItem = self.m_boardModel:ReplaceItem(item, innerCode, false)
        local itemSpread = newItem:GetComponent(ItemSpread)
        if itemSpread ~= nil and itemSpread:IsAutoSpread() then
          itemSpread:EmptySpreadCount()
        end
        self.m_boardModel.event:Call(BoardEventType.TransformItem, {
          Source = item,
          New = newItem,
          CostEnergy = false
        })
        item = newItem
      end
      if item:GetComponent(ItemPortal) then
        portalItem = {
          item = item,
          pos = item:GetLocalPositionVector2()
        }
        self.m_boardModel:RemoveItem(item)
      else
        table.insert(bringItems, {
          item = item,
          pos = item:GetLocalPositionVector2()
        })
      end
    end
  end
  local sortedIndex = {}
  for idx, _ in ipairs(bringItems) do
    sortedIndex[idx] = idx
  end
  table.sort(sortedIndex, function(a, b)
    local orderA = 0
    local orderB = 0
    for i, prefix in ipairs(self.m_activityDefinition.ItemCollectPrefix) do
      if StringUtil.StartWith(bringItems[a].item:GetType(), prefix) then
        orderA = i
      end
      if StringUtil.StartWith(bringItems[b].item:GetType(), prefix) then
        orderB = i
      end
    end
    if orderA ~= orderB then
      return orderA < orderB
    end
    return GM.ItemDataModel:GetChainLevel(bringItems[a].item:GetType()) < GM.ItemDataModel:GetChainLevel(bringItems[b].item:GetType())
  end)
  local cacheItems = {}
  local biItems = {}
  local arrBiItems = {}
  for i, idx in ipairs(sortedIndex) do
    cacheItems[i] = bringItems[idx].item
    local code = cacheItems[i]:GetCode()
    biItems[code] = (biItems[code] or 0) + 1
  end
  for k, v in pairs(biItems) do
    arrBiItems[#arrBiItems + 1] = {type = k, count = v}
  end
  local items = self.m_boardModel:GetAllCacheItems()
  local arrItems = {}
  for k, v in pairs(items) do
    arrItems[#arrItems + 1] = {
      type = k,
      count = v.Count
    }
  end
  GM.BIManager:LogAction(self.m_activityDefinition.ItemByLevelUp, {board = arrBiItems, cache = arrItems})
  self:CacheItemsFromBoard(cacheItems)
  local nextBoardIndex = self:GetCurrentBoardIndex() + 1
  if nextBoardIndex > #self.m_boardsConfig then
    Log.Error("MultiboardsActivityModel:BoardLevelUp out of range, nextLevel = " .. tostring(nextBoardIndex))
    return
  end
  self:SetCurrentBoardIndex(nextBoardIndex)
  self:UpdateBoardModel(true)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.UpgradeBoardEvent, {
    portalItem = portalItem,
    bringItems = bringItems,
    hasPropertyCollected = false
  })
end

function MultiboardsActivityModel:UpdateBoardModel(bForceCreate)
  local curBoardIndex = self:GetCurrentBoardIndex()
  local boardConfig = self:GetBoardConfig(curBoardIndex)
  if boardConfig == nil then
    Log.Error("MultiboardsActivityModel:UpdateBoardModel, boardConfig is nil, index = " .. tostring(curBoardIndex))
    return
  end
  local initBoardFileName = self.m_activityDefinition.BoardModelConfigNamePrefix .. tostring(curBoardIndex)
  local initCodeMap = require("Data.Config." .. initBoardFileName)
  local horizontal, vertical = 6, 8
  if initCodeMap ~= nil then
    horizontal = #initCodeMap[1]
    vertical = #initCodeMap
  end
  if bForceCreate then
    self.m_boardModel:ChangeBoard(initBoardFileName, horizontal, vertical)
  elseif self.m_boardModel == nil then
    local energyConfig
    if self.m_eventOrderScoreConfig ~= nil then
      energyConfig = require("Data.Config." .. self.m_type .. "BoostUnlock")
    end
    local args = {
      activityType = self:GetType(),
      itemDataTable = self.m_itemDataTable,
      itemLayerDataTable = self.m_itemLayerDataTable,
      itemCacheDataTable = self.m_itemCacheDataTable,
      boardDataTable = self.m_boardDataTable,
      boardInitFileName = initBoardFileName,
      activityDBTable = self.m_dbTable,
      itemIllustrated = self.m_itemBookConifg,
      obstacleConfigFileName = self.m_activityDefinition.BoardObstacleConfigName,
      listEnergyMultiUnlockConfig = energyConfig
    }
    self.m_boardModel = MultiboardsActivityBoardModel.Create(args, horizontal, vertical)
  end
  self:InitUpdateLevel()
end

function MultiboardsActivityModel:GetGenerateItemByOrder(order)
  if self:GetState() ~= ActivityState.Started then
    return
  end
  if self.m_genByFinishOrderCfg == nil then
    return
  end
  local selectedIdx, score
  if self.m_genByFinishOrderUseDiff then
    local diffScore = order:GetDiffScore()
    if diffScore == 0 then
      return
    end
    selectedIdx = Table.BinarySearch(self.m_genByFinishOrderCfg, diffScore, "diff_score_min", "diff_score_max")
    score = diffScore
  else
    local price = order:GetPrice()
    if price == 0 then
      return
    end
    selectedIdx = Table.BinarySearch(self.m_genByFinishOrderCfg, price, "gold_min", "gold_max")
    score = price
  end
  if selectedIdx == nil then
    return
  end
  local selected = self.m_genByFinishOrderCfg[selectedIdx]
  local newItemType = selected.item
  if newItemType == nil then
    Log.Error("MultiboardsActivityModel: _OnOrderFinished, itemCode is nil")
    return
  end
  local count = selected.reward_num_percentage and math.floor(score * selected.reward_num_percentage * 1.0E-4) or selected.reward_num_fix
  if count <= 0 then
    local str = tostring(selected.reward_num_percentage) .. " " .. tostring(score) .. " " .. tostring(selected.reward_num_fix) .. " " .. tostring(count) .. " " .. tostring(selectedIdx) .. " " .. tostring(json.encode(self.m_genByFinishOrderCfg))
    if selected.reward_num_percentage then
      str = str .. " " .. tostring(score * selected.reward_num_percentage) .. " " .. tostring(math.floor(score * selected.reward_num_percentage))
    end
    Log.Error("MultiboardsActivityModel: _OnOrderFinished, gen item count is 0!" .. str)
    return
  end
  return {
    [PROPERTY_TYPE] = newItemType,
    [PROPERTY_COUNT] = count
  }
end

function MultiboardsActivityModel:GetBoardModel()
  return self.m_boardModel
end

function MultiboardsActivityModel:GetBoardConfig(index)
  return self.m_boardsConfig[index]
end

function MultiboardsActivityModel:GetTotalStage()
  return #self.m_boardsConfig
end

function MultiboardsActivityModel:CacheItems(cachedItemCodes)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes)
end

function MultiboardsActivityModel:CacheItemsFromBoard(items)
  if Table.IsEmpty(items) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItemsFromBoard(items, CacheItemType.Type2)
end

function MultiboardsActivityModel:_TryGiveInitialItems()
  if self:HasInitialItemGiven() then
    return
  end
  if self.m_boardModel:IsEnergyModuleOpen() then
    self.m_boardModel:GetEnergyModel():AddCurEnergy(5)
    GM.BIManager:LogAcquire(EPropertyType.MultiBoardsEnergy, 5, self.m_activityDefinition.AcquireItemByStart, true)
  else
    local itemChainInConfig
    for _, config in ipairs(self.m_genByFinishOrderCfg) do
      local itemChain = GM.ItemDataModel:GetChainId(config.item)
      if not itemChainInConfig then
        itemChainInConfig = itemChain
      elseif itemChainInConfig ~= itemChain then
        itemChainInConfig = nil
        break
      end
    end
    local itemType = GM.ItemDataModel:GetTypeByChainAndLevel(itemChainInConfig or self.m_activityDefinition.ItemChain, 1)
    local cacheItems = {}
    for i = 1, 5 do
      table.insert(cacheItems, itemType)
    end
    self:CacheItems(cacheItems)
    GM.BIManager:LogAcquire(itemType, 5, self.m_activityDefinition.AcquireItemByStart, true)
  end
  self:SetInitialItemGiven()
end

function MultiboardsActivityModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function MultiboardsActivityModel:GetMergeLength()
  return #self.arrMergeLine
end

function MultiboardsActivityModel:GetItemTypeByIndex(index)
  return self.arrMergeLine[index]
end

function MultiboardsActivityModel:SetLevel(level)
  self.m_dbTable:Set(DBKeys.CurrentMergeLevel, "value", level)
  local idx = self:GetCurrentBoardIndex()
  self:LogActivity(EBIType.ActivityRankUp, level)
  local limitLevel = self:GetCurLimitLevel()
  GM.BIManager:LogAction(self.m_activityDefinition.UnlockItem, {
    boardLevel = idx,
    limitLevel = limitLevel,
    level = level
  })
  self.m_boardModel:TryUpdateMultiLevel()
end

function MultiboardsActivityModel:GetLevel()
  return self.m_dbTable:GetValue(DBKeys.CurrentMergeLevel, "value") or 0
end

function MultiboardsActivityModel:HasInitialItemGiven()
  return self.m_dbTable:GetValue(DBKeys.InitialItemGiven, "value") == 1
end

function MultiboardsActivityModel:SetInitialItemGiven()
  self.m_dbTable:Set(DBKeys.InitialItemGiven, "value", 1)
end

function MultiboardsActivityModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(DBKeys.EverFulledKey, "value") or false
end

function MultiboardsActivityModel:SetBoardFulled()
  self.m_dbTable:Set(DBKeys.EverFulledKey, "value", true)
end

function MultiboardsActivityModel:GetCurrentBoardIndex()
  return self.m_dbTable:GetValue(DBKeys.CurrentBoardIndex, "value") or 1
end

function MultiboardsActivityModel:SetCurrentBoardIndex(index)
  self.m_dbTable:Set(DBKeys.CurrentBoardIndex, "value", index)
end

function MultiboardsActivityModel:SetPopEndWindow()
  self.m_dbTable:Set(DBKeys.PopEndWindow, "value", "1")
end

function MultiboardsActivityModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(DBKeys.PopEndWindow, "value") ~= "1"
end

function MultiboardsActivityModel:UpdateLevel(itemCode)
  local lvl = self:GetLevelByItemCode(itemCode)
  if lvl > self:GetCurLimitLevel() then
    return false
  end
  local curLvl = self:GetLevel()
  if lvl > curLvl then
    self:SetLevel(lvl)
    return true
  end
  return false
end

function MultiboardsActivityModel:InitUpdateLevel()
  if self.m_boardModel == nil then
    return
  end
  local curLvl = self:GetLevel()
  local lvl = 0
  local tempLvl = 0
  local limitLevel = self:GetCurLimitLevel()
  for position in self.m_boardModel:GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      local code = item:GetCode()
      tempLvl = self:GetLevelByItemCode(code)
      if lvl < tempLvl and limitLevel >= tempLvl then
        lvl = tempLvl
      end
    end
  end
  if curLvl < lvl then
    self:SetLevel(lvl)
  end
end

function MultiboardsActivityModel:GetEndRewards()
  return self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
end

function MultiboardsActivityModel:GetLevelByItemCode(itemCode)
  for i, v in ipairs(self.arrMergeLine) do
    if v == itemCode then
      return i
    end
  end
  return 0
end

function MultiboardsActivityModel:GetItemCodeByLevel(lvl)
  return self.arrMergeLine[lvl]
end

function MultiboardsActivityModel:IsMaxLevel(needCheckBoardIndex)
  local maxLevel = self:GetMergeLength()
  if needCheckBoardIndex then
    local curBoardIndex = self:GetCurrentBoardIndex()
    if curBoardIndex + 1 == #self.m_boardsConfig and self:HasExtraStage() then
      return true
    end
    if curBoardIndex < #self.m_boardsConfig then
      return false
    end
  end
  local curLevel = self:GetLevel()
  return curLevel == maxLevel
end

function MultiboardsActivityModel:HasExtraStage()
  return self.m_boardsConfig[#self.m_boardsConfig].limit > self:GetMergeLength()
end

function MultiboardsActivityModel:GetCurLimitLevel()
  local curIndex = self:GetCurrentBoardIndex()
  local boardConfig = self:GetBoardConfig(curIndex)
  return boardConfig.limit
end

function MultiboardsActivityModel:IsReachLimitLevel()
  local curIndex = self:GetCurrentBoardIndex()
  if curIndex == #self.m_boardsConfig then
    return false
  end
  return self:GetLevel() >= self:GetCurLimitLevel()
end

function MultiboardsActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function MultiboardsActivityModel:GetDefinition()
  return self.m_activityDefinition
end

function MultiboardsActivityModel:GetBoardEntryShowConfig()
  return {
    statusChangeName = self.m_activityDefinition.StateChangedEvent,
    bubbleName = "m_" .. self.m_type .. "Bubble",
    bubbleNodeName = "m_multiboardsActivityBubbleNode",
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    bubbleCountName = "m_multiboardsActivityBubbleCount",
    scrollToFunName = "ScrollToMultiboardsActivity",
    activityType = self:GetType(),
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function MultiboardsActivityModel:GetHudEntryShowConfig()
  return {
    Type = "multiboardsActivity",
    ArrCheckShowEvent = {
      self.m_activityDefinition.StateChangedEvent
    },
    EntryPrefabConfigName = UIPrefabConfigName.HudActivityEntry,
    CheckFunc = function()
      return self:GetState() == ActivityState.Preparing or self:GetState() == ActivityState.Started
    end,
    HudSideBarType = EHudSideBarType.Left,
    EntryButtonKey = self.m_activityDefinition.EntryButtonKey,
    EntryIconName = self.m_activityDefinition.EntryImageName,
    OnClickedFunc = function()
      if self:GetState() == ActivityState.Preparing then
        GM.UIManager:OpenView(self.m_activityDefinition.NoticeWindowPrefabName, self:GetType())
      else
        GM.UIManager:OpenView(self.m_activityDefinition.MainWindowPrefabName, self:GetType())
      end
    end,
    RedPointType = EntryRedPointType.Num,
    GetRedPointNumFunc = function()
      return self:GetRedPointNum()
    end,
    ArrUpdateEntryContentEvent = {
      EEventType.PopCachedItem,
      EEventType.ItemFlyTarget,
      EEventType.CacheItems,
      EEventType.UIBoardEnergyChanged
    }
  }
end

function MultiboardsActivityModel:GetPaperBoxRewardConfigName()
  return self.m_activityDefinition.BoardPaperRewardConfigName
end
