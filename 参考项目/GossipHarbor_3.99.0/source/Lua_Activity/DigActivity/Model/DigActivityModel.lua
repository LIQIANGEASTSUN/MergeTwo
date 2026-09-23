DigActivityModel = setmetatable({}, BaseActivityModel)
DigActivityModel.__index = DigActivityModel
local EStrDBKeys = {
  EverFull = "EverFull",
  BoardInitDepth = "BoardInitDepth",
  DigPropNum = "DigPropNum",
  DigScore = "DigScore",
  ExpriedReward = "ExpriedReward",
  PopEndWindow = "PopEndWindow",
  RestartTutorial = "RestartTutorial"
}

function DigActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityDefinition = DigActivityDefinition[activityType]
  BaseActivityModel.Init(self, activityType, activityDataTable)
  self:LoadDefaultConfig()
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
end

function DigActivityModel:LoadDefaultConfig()
  self.m_expireReward = json.decode(self.m_dbTable:GetValue(EStrDBKeys.ExpriedReward, "value") or "")
end

function DigActivityModel:_LoadOtherServerConfig(config)
  self.m_digReward = {}
  if not Table.IsEmpty(config.digReward) then
    for _, cfg in pairs(config.digReward) do
      table.insert(self.m_digReward, Table.DeepCopy(cfg, true))
    end
    table.sort(self.m_digReward, function(a, b)
      return a.level < b.level
    end)
    local sumScore = 0
    for i, cfg in ipairs(self.m_digReward) do
      sumScore = sumScore + cfg.score
      cfg.score = sumScore
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
  self.m_itemBookConifg = config.eventBookContents
end

function DigActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  self.m_boardDataTable:Drop()
  self.m_boardModel = nil
  self.m_expireReward = nil
  self:ClearCacheProgressRewardsAndUpdateView()
end

function DigActivityModel:GetBoardEntryShowConfig()
  return {
    listeners = {
      self.m_activityDefinition.StateChangedEvent
    },
    bubbleName = "m_" .. self.m_type .. "Bubble",
    bubbleNodeName = "m_DigBubbleNode",
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    bubbleCountName = "m_DigBubbleCount",
    activityType = self:GetType(),
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function DigActivityModel:GetHudEntryShowConfig()
  return {
    Type = "digActivity",
    ArrCheckShowEvent = {
      self.m_activityDefinition.StateChangedEvent
    },
    EntryPrefabConfigName = UIPrefabConfigName.HudActivityEntry,
    CheckFunc = function()
      return self:IsActivityOpen()
    end,
    HudSideBarType = EHudSideBarType.Left,
    EntryButtonKey = self.m_activityDefinition.EntryButtonKey,
    EntryIconName = self.m_activityDefinition.EntryImageName,
    OnClickedFunc = function()
      local state = self:GetState()
      if state == ActivityState.Preparing then
        GM.UIManager:OpenView(self.m_activityDefinition.NoticeWindowPrefabName, self:GetType())
      elseif state == ActivityState.Started then
        GM.UIManager:OpenView(self.m_activityDefinition.MainWindowPrefabName, self:GetType())
      end
    end,
    RedPointType = EntryRedPointType.Num,
    GetRedPointNumFunc = function()
      return self:GetDigPropNum()
    end,
    ArrUpdateEntryContentEvent = {
      self.m_activityDefinition.TokenNumChangedEvent
    }
  }
end

function DigActivityModel:IsActivityOpen()
  return self:GetState() == ActivityState.Preparing or self:GetState() == ActivityState.Started
end

function DigActivityModel:CanBuyProp()
  return self:GetState() == ActivityState.Started
end

function DigActivityModel:LateInit()
  BaseActivityModel.LateInit(self)
  self.m_lateInit = true
  if self:GetState(false) == ActivityState.Ended and self.m_expireReward == nil then
    self:ExchangeReward()
  end
end

function DigActivityModel:_OnStateChanged()
  local state = self:GetState(false)
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil then
      local boardInitDepth = self:GetBoardInitDepth_old()
      if boardInitDepth ~= 0 then
        self.m_dbTable:Remove(EStrDBKeys.BoardInitDepth, "value")
      else
        boardInitDepth = nil
      end
      local args = {
        itemDataTable = self.m_itemDataTable,
        itemLayerDataTable = self.m_itemLayerDataTable,
        itemCacheDataTable = self.m_itemCacheDataTable,
        boardDataTable = self.m_boardDataTable,
        boardInitFileName = self.m_activityDefinition.BoardModelConfigName,
        boardInitDepth = boardInitDepth,
        activityType = self:GetType(),
        activityDBTable = self.m_dbTable,
        itemIllustrated = self.m_itemBookConifg
      }
      self.m_boardModel = DigBoardModel.Create(args)
      if args.outValue.isCreateInitBoard then
        self:AddDigPropNum(3)
        GM.BIManager:LogAcquire(self.m_activityDefinition.ActivityTokenPropertyType, 3, self.m_activityDefinition.GetStartTokenBIType, true)
      end
      self:InitDepthStage()
      if self.m_dbTable:GetValue(EStrDBKeys.RestartTutorial, "value") ~= "1" then
        self.m_dbTable:Set(EStrDBKeys.RestartTutorial, "value", "1")
        GM.TutorialModel:RebootTutorial(ETutorialId.DigStartTutorial)
      end
    end
    local curScore = self:GetScore()
    local level, bFinish = self:GetProgressLevelByScore(curScore)
    if not bFinish then
      level = level - 1
    end
    EventDispatcher.DispatchEvent(EEventType.DigLevelUp, {num = level})
  else
    self.m_boardModel = nil
  end
  if state == ActivityState.Ended and self.m_lateInit and self.m_expireReward == nil then
    self:ExchangeReward()
  end
  if self.m_lateInit then
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
end

function DigActivityModel:ExchangeReward()
  if self.m_expireReward ~= nil then
    return
  end
  local maxnum = 100
  local propNum = self:GetDigPropNum()
  local excNum = 10 + math.floor(propNum * 0.5) * 5
  local rewards = {
    {
      [PROPERTY_TYPE] = EPropertyType.Energy,
      [PROPERTY_COUNT] = math.min(maxnum, excNum)
    }
  }
  if propNum == 0 then
    rewards[1][PROPERTY_COUNT] = 0
  end
  self.m_expireReward = rewards
  self:SaveExpireReward()
  self:_ClearDigProp()
  return rewards
end

function DigActivityModel:SaveExpireReward()
  local jsonData = ""
  if self.m_expireReward ~= nil then
    jsonData = json.encode(self.m_expireReward)
    self.m_dbTable:Set(EStrDBKeys.ExpriedReward, "value", jsonData)
  end
end

function DigActivityModel:GetBoardModel()
  return self.m_boardModel
end

function DigActivityModel:TryBoardScroll()
  local moveRows = self.m_boardModel:GetScrollRows()
  if 0 < moveRows and not self:HasViewController() then
    local viewController = self:GetNewViewController()
    viewController:State0(moveRows, self:GetTileInversed())
  end
end

function DigActivityModel:BoardScroll()
  local moveRows = self.m_boardModel:TryScroll()
  local boardview = GM.ModeViewController:GetDigBoardView()
  boardview:ScrollUp(moveRows, self.m_boardModel)
  self:CheckTiles(moveRows)
end

function DigActivityModel:InitDepthStage()
  local maxDepth = self.m_boardModel:GetMaxDepth()
  local depth = self:GetBoardInitDepth() - 1
  self.m_depthStage = math.floor(depth / 10)
  if depth == maxDepth and maxDepth % 10 ~= 0 then
    self.m_depthStage = self.m_depthStage + 1
  end
end

function DigActivityModel:CheckSpecialDepthPrompt()
  local maxDepth = self.m_boardModel:GetMaxDepth()
  local depth = self:GetBoardInitDepth() - 1
  local update = false
  local bMax = false
  local maxStage = maxDepth % 10 ~= 0 and math.floor(maxDepth / 10) + 1 or math.floor(maxDepth / 10)
  if depth == maxDepth and maxStage > self.m_depthStage then
    update = true
    bMax = true
  end
  if depth >= (self.m_depthStage + 1) * 10 then
    update = true
    self.m_depthStage = math.floor(depth / 10)
    if depth == maxDepth and maxDepth % 10 ~= 0 then
      self.m_depthStage = self.m_depthStage + 1
      bMax = true
    end
  end
  if update then
    EventDispatcher.DispatchEvent(self.m_activityDefinition.DepthPromptEvent, bMax)
  end
end

function DigActivityModel:CheckTiles(rows)
  if self.m_tileInversed == nil then
    self.m_tileInversed = 1
  end
  if rows % 2 == 1 then
    local boardview = GM.ModeViewController:GetDigBoardView()
    boardview:InverseTiles()
    self.m_tileInversed = self.m_tileInversed * -1
  end
end

function DigActivityModel:SetTileInversed()
  self.m_tileInversed = 1
end

function DigActivityModel:GetTileInversed()
  if self.m_tileInversed == nil then
    self.m_tileInversed = 1
  end
  return self.m_tileInversed
end

function DigActivityModel:_CacheItems(cachedItemCodes)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  for _, itemcode in pairs(cachedItemCodes) do
    GM.BIManager:LogAcquire(itemcode, 1, EBIType.DigItem, true)
  end
  self.m_boardModel:CacheItems(cachedItemCodes)
end

function DigActivityModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function DigActivityModel:GetBoardItemCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetBoardItemCount()
end

function DigActivityModel:GetEndRewards()
  local rewards = self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
  local result = {}
  for i, rew in ipairs(rewards) do
    if rew[PROPERTY_TYPE] ~= self.m_activityDefinition.ScoreType and rew[PROPERTY_COUNT] ~= 0 then
      table.insert(result, rew)
    end
  end
  return result
end

function DigActivityModel:GetGenerateItemByOrder(order)
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
  local count = selected.reward_num_percentage and math.floor(score * selected.reward_num_percentage / 10000) or selected.reward_num_fix
  if count <= 0 then
    return
  end
  return {
    [PROPERTY_TYPE] = selected.item or self.m_activityDefinition.ActivityTokenPropertyType,
    [PROPERTY_COUNT] = count
  }
end

function DigActivityModel:_OnOrderFinished(msg)
  local item = self:GetGenerateItemByOrder(msg.order)
  if item == nil then
    return
  end
  RewardApi.AcquireRewardsLogic({item}, EPropertySource.Give, self.m_activityDefinition.GetTokenByOrderBIType, EGameMode.Main, CacheItemType.Type2)
  local message = {
    Source = msg.order,
    Img = self.m_activityDefinition.TokenImageName,
    Count = item[PROPERTY_COUNT],
    ActivityType = self:GetType(),
    ItemFlyType = ItemFlyView.EFLYTYPE.DigActivity
  }
  GM.MainBoardModel.event:Call(BoardEventType.AddOrderFinishItem, message)
end

function DigActivityModel:AddScore(score)
  local curScore = self:GetScore()
  local progressReward = {}
  local oldLevel, bIsOldFinish = self:GetProgressLevelByScore(curScore)
  curScore = curScore + score
  local newLevel, bIsFinish = self:GetProgressLevelByScore(curScore)
  if bIsOldFinish == false and bIsFinish == true then
  else
    newLevel = newLevel - 1
  end
  if oldLevel <= newLevel then
    for i = oldLevel, newLevel do
      local config = self:GetProgressConfigByLevel(i)
      if config ~= nil then
        table.insert(progressReward, {
          level = i,
          reward = config.rewards
        })
      end
      self:LogActivity(EBIType.ActivityRankUp, i)
    end
    EventDispatcher.DispatchEvent(EEventType.DigLevelUp, {num = newLevel})
  end
  self.m_dbTable:Set(EStrDBKeys.DigScore, "value", self:GetScore() + score)
  self:LogActivity(EBIType.ActivityAddScore, score)
  if not Table.IsEmpty(progressReward) then
    self.m_cacheProgressReward = {}
    for _, data in ipairs(progressReward) do
      Table.ListAppend(self.m_cacheProgressReward, Table.DeepCopy(data.reward))
      RewardApi.AcquireRewardsLogic(data.reward, EPropertySource.Give, self.m_activityDefinition.GetProgressRewardsBIType, EGameMode.Main, CacheItemType.Type2)
      self:LogActivity(EBIType.ActivityGetRewards, data.level)
    end
  end
  return progressReward
end

function DigActivityModel:ClearCacheProgressRewards()
  self.m_cacheProgressReward = {}
end

function DigActivityModel:ClearCacheProgressRewardsAndUpdateView()
  if not Table.IsEmpty(self.m_cacheProgressReward) then
    RewardApi.AcquireRewardsInView(self.m_cacheProgressReward, {simpleCollect = true})
    self:ClearCacheProgressRewards()
  end
end

function DigActivityModel:GetScore()
  return self.m_dbTable:GetValue(EStrDBKeys.DigScore, "value") or 0
end

function DigActivityModel:GetProgressMaxNum()
  return #self.m_digReward
end

function DigActivityModel:GetProgressLevelByScore(score)
  for _, digReward in ipairs(self.m_digReward) do
    if score < digReward.score then
      return digReward.level, false
    end
  end
  return self.m_digReward[#self.m_digReward].level, true
end

function DigActivityModel:GetProgressConfigByLevel(level)
  for _, digReward in ipairs(self.m_digReward) do
    if digReward.level == level then
      return digReward
    end
  end
  return nil
end

function DigActivityModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(EStrDBKeys.EverFull, "value") == 1
end

function DigActivityModel:SetBoardFulled()
  self.m_dbTable:Set(EStrDBKeys.EverFull, "value", 1)
end

function DigActivityModel:GetBoardInitDepth()
  return self.m_boardModel:GetCurDepth()
end

function DigActivityModel:GetBoardInitDepth_old()
  return self.m_dbTable:GetValue(EStrDBKeys.BoardInitDepth, "value") or 0
end

function DigActivityModel:AddDigPropNum(num, itemType)
  self.m_dbTable:Set(EStrDBKeys.DigPropNum, "value", self:GetDigPropNum() + num)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.TokenNumChangedEvent, num)
  if num < 0 then
    GM.BIManager:LogAction(self.m_activityDefinition.ConsumeTokenBIType, {
      num = 1,
      type = itemType,
      lv = self:GetProgressLevelByScore(self:GetScore())
    })
    GM.BIManager:LogUseItem(self.m_activityDefinition.ActivityTokenPropertyType, 1, self.m_activityType, "itemDig")
  end
end

function DigActivityModel:GetDigPropNum()
  return self.m_dbTable:GetValue(EStrDBKeys.DigPropNum, "value") or 0
end

function DigActivityModel:_ClearDigProp()
  self.m_dbTable:Set(EStrDBKeys.DigPropNum, "value", 0)
end

function DigActivityModel:GetExpireReward()
  return self.m_expireReward
end

function DigActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function DigActivityModel:GetNewViewController()
  self.m_conCnt = (self.m_conCnt or 0) + 1
  local viewController = DigViewController.Create(self.m_type, self.m_conCnt)
  self.m_conArr = self.m_conArr or {}
  self.m_conArr[self.m_conCnt] = viewController
  return viewController
end

function DigActivityModel:ViewControllerFinished(id)
  self.m_conArr[id] = nil
end

function DigActivityModel:HasViewController()
  return not Table.IsEmpty(self.m_conArr)
end

function DigActivityModel:PopEndWindow()
  self.m_dbTable:Set(EStrDBKeys.PopEndWindow, "value", "1")
end

function DigActivityModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(EStrDBKeys.PopEndWindow, "value") ~= "1"
end

function DigActivityModel:GetMissionProgress()
  local curScore = self:GetScore()
  local level, bFinish = self:GetProgressLevelByScore(curScore)
  if not bFinish then
    level = level - 1
  end
  return level
end

function DigActivityModel:GetDefinition()
  return self.m_activityDefinition
end
