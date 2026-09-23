PureBoardActivityModel = setmetatable({}, BaseActivityModel)
PureBoardActivityModel.__index = PureBoardActivityModel
local DBKeys = {
  PopEndWindow = "PopEndWindow",
  CurrentMergeLevel = "CurrentMergeLevel",
  InitialItemGiven = "InitialItemGiven",
  EverFulledKey = "EverFulledKey"
}
PureBoardActivityModel.PopUnlockWindowLevel = 6

function PureBoardActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityDefinition = PureBoardActivityDefinition[activityType]
  BaseActivityModel.Init(self, activityType, activityDataTable)
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
end

function PureBoardActivityModel:GetDefinition()
  return self.m_activityDefinition
end

function PureBoardActivityModel:LateInit()
  BaseActivityModel.LateInit(self)
  self.m_lateInit = true
end

function PureBoardActivityModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function PureBoardActivityModel:_LoadOtherServerConfig(config)
  self.arrMergeLine = {}
  self.arrMergeReward = {}
  if not Table.IsEmpty(config.pureBoardItems) then
    local cnt = 0
    for _, data in pairs(config.pureBoardItems) do
      self.arrMergeLine[data.index] = data.item_id
      self.arrMergeReward[data.index] = data.reward
      cnt = cnt + 1
    end
    if cnt ~= #self.arrMergeLine then
      Log.Error("PureBoardActivityModel config error: pureBoardItems not continuous")
    end
  end
  if not Table.IsEmpty(config.eventOrderScore) then
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
  end
  self.m_illustratedBook = config.eventBookContents
end

function PureBoardActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  self.m_boardDataTable:Drop()
  self.m_boardModel = nil
end

function PureBoardActivityModel:_OnStateChanged()
  local state = self:GetState(false)
  if (state == ActivityState.Started or state == ActivityState.Ended) and self.m_boardModel == nil then
    local args = {
      itemDataTable = self.m_itemDataTable,
      itemLayerDataTable = self.m_itemLayerDataTable,
      itemCacheDataTable = self.m_itemCacheDataTable,
      boardDataTable = self.m_boardDataTable,
      boardInitFileName = self.m_activityDefinition.BoardModelConfigName,
      itemIllustrated = self.m_illustratedBook,
      activityDBTable = self.m_dbTable,
      activityType = self:GetType(),
      fogConfigFileName = self.m_activityDefinition.FogConfigName
    }
    self.m_boardModel = PureBoardActivityBoardModel.Create(args)
    self:InitUpdateLevel()
  end
  if state == ActivityState.Started then
    self:_TryGiveInitialItems()
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  if self.m_lateInit then
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
end

function PureBoardActivityModel:_TryGiveInitialItems()
  if self:HasInitialItemGiven() then
    return
  end
  local itemType = GM.ItemDataModel:GetTypeByChainAndLevel(self.m_activityDefinition.ItemChainPrefix, 1)
  local cacheItems = {}
  for i = 1, 5 do
    table.insert(cacheItems, itemType)
  end
  self:CacheItems(cacheItems)
  self:SetInitialItemGiven()
  GM.BIManager:LogAcquire(itemType, 5, self.m_activityDefinition.AcquirePureBoardItem, true, EBoardType.PureBoard, "free")
end

function PureBoardActivityModel:_OnOrderFinished(msg)
  local item = self:GetGenerateItemByOrder(msg.order)
  if item == nil then
    return
  end
  local list = {}
  for i = 1, item[PROPERTY_COUNT] do
    table.insert(list, item[PROPERTY_TYPE])
  end
  self:CacheItems(list)
  GM.BIManager:LogAcquire(item[PROPERTY_TYPE], item[PROPERTY_COUNT], EBIType.FinishOrder, true, EBoardType.PureBoard)
  local message = {
    Source = msg.order,
    Img = item[PROPERTY_TYPE],
    Count = item[PROPERTY_COUNT],
    ActivityType = self.m_type,
    ItemFlyType = ItemFlyView.EFLYTYPE.PureBoardActivity
  }
  GM.MainBoardModel.event:Call(BoardEventType.AddOrderFinishItem, message)
end

function PureBoardActivityModel:GetGenerateItemByOrder(order)
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
    Log.Error("PureBoardActivityModel: _OnOrderFinished, itemCode is nil")
    return
  end
  local count = selected.reward_num_percentage and math.floor(score * selected.reward_num_percentage * 1.0E-4) or selected.reward_num_fix
  if count <= 0 then
    local str = tostring(selected.reward_num_percentage) .. " " .. tostring(score) .. " " .. tostring(selected.reward_num_fix) .. " " .. tostring(count) .. " " .. tostring(selectedIdx) .. " " .. tostring(json.encode(self.m_genByFinishOrderCfg))
    if selected.reward_num_percentage then
      str = str .. " " .. tostring(score * selected.reward_num_percentage) .. " " .. tostring(math.floor(score * selected.reward_num_percentage))
    end
    Log.Error("PureBoardActivityModel: _OnOrderFinished, gen item count is 0!" .. str)
    return
  end
  return {
    [PROPERTY_TYPE] = newItemType,
    [PROPERTY_COUNT] = count
  }
end

function PureBoardActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function PureBoardActivityModel:SetPopEndWindow()
  self.m_dbTable:Set(DBKeys.PopEndWindow, "value", "1")
end

function PureBoardActivityModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(DBKeys.PopEndWindow, "value") ~= "1"
end

function PureBoardActivityModel:GetEndRewards()
  return self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
end

function PureBoardActivityModel:GetBoardModel()
  return self.m_boardModel
end

function PureBoardActivityModel:CacheItems(cachedItemCodes)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes)
end

function PureBoardActivityModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function PureBoardActivityModel:GetMergeLength()
  return #self.arrMergeLine
end

function PureBoardActivityModel:GetItemTypeByIndex(index)
  return self.arrMergeLine[index]
end

function PureBoardActivityModel:SetLevel(level)
  self.m_dbTable:Set(DBKeys.CurrentMergeLevel, "value", level)
  self:LogActivity(EBIType.ActivityRankUp, level)
end

function PureBoardActivityModel:GetLevel()
  return self.m_dbTable:GetValue(DBKeys.CurrentMergeLevel, "value") or 0
end

function PureBoardActivityModel:GetNextRewardLevel()
  local level = self:GetLevel() + 1
  while level <= self:GetMergeLength() and self.arrMergeReward[level] == nil do
    level = level + 1
  end
  if level <= self:GetMergeLength() then
    return level
  end
end

function PureBoardActivityModel:HasInitialItemGiven()
  return self.m_dbTable:GetValue(DBKeys.InitialItemGiven, "value") == 1
end

function PureBoardActivityModel:SetInitialItemGiven()
  self.m_dbTable:Set(DBKeys.InitialItemGiven, "value", 1)
end

function PureBoardActivityModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(DBKeys.EverFulledKey, "value") or false
end

function PureBoardActivityModel:SetBoardFulled()
  self.m_dbTable:Set(DBKeys.EverFulledKey, "value", true)
end

function PureBoardActivityModel:UpdateLevel(itemCode, itemModel)
  local lvl = self:GetLevelByItemCode(itemCode)
  local curLvl = self:GetLevel()
  local unlockedFog = false
  if lvl > curLvl then
    self:SetLevel(lvl)
    if self.arrMergeReward[lvl] ~= nil then
      self.m_arrFlyItem = {}
      local otherRewards = {}
      for _, reward in ipairs(self.arrMergeReward[lvl]) do
        if RewardApi.CheckRewardCategoryType(reward[PROPERTY_TYPE], ERewardCategoryType.CustomBoardItem) then
          local _, itemCode = RewardApi.CustomBoardItem2BoardTypeAndRealItemCode(reward[PROPERTY_TYPE])
          self:AddItems(itemCode, reward[PROPERTY_COUNT])
          GM.BIManager:LogAcquire(itemCode, reward[PROPERTY_COUNT], self.m_activityDefinition.MergeLineRewardBIType, true, EBoardType.PureBoard)
        else
          table.insert(otherRewards, reward)
        end
      end
      RewardApi.AcquireRewardsLogic(otherRewards, EPropertySource.Give, self.m_activityDefinition.MergeLineRewardBIType, EGameMode.Main, CacheItemType.Type2, EBoardType.PureBoard)
    end
    if self.m_boardModel:GetFogModel() then
      local fogs = self.m_boardModel:TryUnlockFogByLevel(lvl, itemModel, lvl >= PureBoardActivityModel.PopUnlockWindowLevel or self.arrMergeReward[lvl] ~= nil)
      if not Table.IsEmpty(fogs) then
        unlockedFog = true
      end
    end
    return true, unlockedFog
  end
  return false
end

function PureBoardActivityModel:TryFogUnlockViewUpdate()
  local fogModel = self.m_boardModel:GetFogModel()
  if fogModel then
    return fogModel:UnlockViewUpdate()
  end
end

function PureBoardActivityModel:AddItems(item, cnt)
  for i = 1, cnt do
    local position = self.m_boardModel:FindEmptyPositionInValidOrder()
    if position == nil then
      self:CacheItems({item})
      self.m_arrFlyItem[item] = self.m_arrFlyItem[item] or {}
      table.insert(self.m_arrFlyItem[item], {ToCache = true, Source = item})
    else
      local itemModel = self.m_boardModel:GenerateItem(position, item)
      EventDispatcher.DispatchEvent(EEventType.PureBoardFlyMergeLineReward, {Pos = position, Source = itemModel})
      self.m_arrFlyItem[item] = self.m_arrFlyItem[item] or {}
      table.insert(self.m_arrFlyItem[item], {Pos = position, Source = itemModel})
    end
  end
end

function PureBoardActivityModel:GetFlyInfo(item)
  local info = self.m_arrFlyItem[item][1]
  table.remove(self.m_arrFlyItem[item], 1)
  return info
end

function PureBoardActivityModel:ClearArrFlyItem()
  self.m_arrFlyItem = nil
end

function PureBoardActivityModel:GetLevelRewards(lvl)
  return self.arrMergeReward[lvl]
end

function PureBoardActivityModel:InitUpdateLevel()
  if self.m_boardModel == nil then
    return
  end
  local curLvl = self:GetLevel()
  local lvl = 0
  local tempLvl = 0
  for item, _ in pairs(self.m_boardModel:GetAllBoardItems(true)) do
    local code = item:GetCode()
    tempLvl = self:GetLevelByItemCode(code)
    if lvl < tempLvl then
      lvl = tempLvl
    end
  end
  if curLvl < lvl then
    self:SetLevel(lvl)
  end
end

function PureBoardActivityModel:GetLevelByItemCode(itemCode)
  for i, v in ipairs(self.arrMergeLine) do
    if v == itemCode then
      return i
    end
  end
  return 0
end

function PureBoardActivityModel:GetItemCodeByLevel(lvl)
  return self.arrMergeLine[lvl]
end

function PureBoardActivityModel:IsMaxLevel()
  local curLevel = self:GetLevel()
  local maxLevel = self:GetMergeLength()
  return curLevel == maxLevel
end

function PureBoardActivityModel:GetHudEntryShowConfig()
  return {
    Type = "PureBoardActivity",
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
      return self:GetCacheCount()
    end,
    ArrUpdateEntryContentEvent = {
      EEventType.PopCachedItem,
      EEventType.ItemFlyTarget,
      EEventType.CacheItems
    }
  }
end

function PureBoardActivityModel:GetBoardEntryShowConfig()
  return {
    listeners = {
      self.m_activityDefinition.StateChangedEvent
    },
    bubbleName = "m_" .. self.m_type .. "Bubble",
    bubbleNodeName = "m_PureBoardActivityBubbleNode",
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    bubbleCountName = "m_PureBoardActivityBubbleCount",
    scrollToFunName = "ScrollToPureBoardActivity",
    activityType = self:GetType(),
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end
