DropModel = setmetatable({}, BaseActivityModel)
DropModel.__index = DropModel
local DropDBKeys = {
  DBColumnValue = "value",
  DropTokenCount = "DropTokenCount",
  DropScore = "DropScore",
  DropBoardData = "DropBoardData",
  DropLastBuyTokenIndex = "DropLastBuyTokenIndex",
  DropBuyTokenRefreshTime = "DropBuyTokenRefreshTime",
  ExpriedReward = "ExpriedReward",
  StartToken = "StartToken",
  FinishAllRound = "FinishAllRound"
}

function DropModel:Init(activityType, activityDataTable)
  self.m_activityDefinition = DropDefinition[activityType]
  self.m_tokenHelper = ActivityTokenHelper.Create(self, activityDataTable, self.m_activityDefinition.ActivityTokenPropertyType, EFlyElementLabelStyle.Default)
  BaseActivityModel.Init(self, activityType, activityDataTable)
  self:LoadDefaultConfig()
end

function DropModel:IsActivityOpen()
  return self:GetState() == ActivityState.Started
end

function DropModel.GetActiveModel()
  for activityType, definition in pairs(DropDefinition) do
    local model = GM.ActivityManager:GetModel(activityType)
    if model:IsActivityOpen() then
      return model, definition
    end
  end
end

function DropModel:LoadDefaultConfig()
  self.m_expireReward = json.decode(self.m_dbTable:GetValue(DropDBKeys.ExpriedReward, "value") or "")
end

function DropModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function DropModel:_LoadOtherServerConfig(config)
  self.m_tokenHelper:LoadConfig(config.token_general_layout)
  self.m_dropGenerates = config.drop_generate
  self.m_dropItems = {}
  for _, itemInfo in ipairs(config.drop_item) do
    self.m_dropItems[itemInfo.item] = itemInfo
  end
  local dropServerCfg = config.event_rewards or config.drop_reward or {}
  self.m_dropReward = Table.DeepCopy(dropServerCfg)
  table.sort(self.m_dropReward, function(a, b)
    return a.level < b.level
  end)
  local score = 0
  for i = 1, #self.m_dropReward do
    score = score + dropServerCfg[i].score
    self.m_dropReward[i].score = score
  end
  self.m_buyTokenConfig = config.drop_buy_token
  table.sort(self.m_buyTokenConfig, function(a, b)
    return a.time < b.time
  end)
  local genActConfig = {}
  for _, conf in ipairs(config.generalActivityConf or {}) do
    genActConfig[conf.confType] = conf.param
  end
  self.m_dropCatKeyInit = tonumber(genActConfig.dropCatKeyInit) or 100
  self.m_dropCatCost = tonumber(genActConfig.dropCatCost) or 10
  self.m_dropCatTransEnergyMax = tonumber(genActConfig.dropCatTransEnergyMax) or 100
  self.m_dropCatTransEnergy = tonumber(genActConfig.dropCatTransEnergy) or 5
end

function DropModel:LateInit()
  self.m_bLateInit = true
end

function DropModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_expireReward = nil
end

function DropModel:Destroy()
  self.m_tokenHelper:Destroy()
  BaseActivityModel.Destroy(self)
end

function DropModel:_OnStateChanged()
  local state = self:GetState(false)
  if state == ActivityState.Started then
    if not self:_HasActivityStarted() then
      self:LogActivity(EBIType.ActivityRankUp, 0)
      self:_SetActivityStarted()
    end
    if self:HaveStartToken() ~= true then
      self.m_dbTable:Set(DropDBKeys.StartToken, DropDBKeys.DBColumnValue, true)
      self:AcquireActivityToken(self.m_dropCatKeyInit)
      GM.BIManager:LogAcquire(self.m_activityDefinition.ActivityTokenPropertyType, 100, EBIType.DropStartGiveToken, true)
    end
  elseif state == ActivityState.Ended and self:GetDropRankModel() == nil and self.m_expireReward == nil and self.m_bLateInit then
    self:ExchangeReward()
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
end

function DropModel:_CalculateState()
  if self.m_config == nil or not self:_CanStartActivity() then
    return ActivityState.Released, -1
  end
  local serverTime = GM.GameModel:GetServerTime()
  if serverTime < self.m_config.sTime then
    return ActivityState.Preparing, self.m_config.sTime
  elseif serverTime < self.m_config.eTime then
    if self:IsFinishAnimEnd() then
      return ActivityState.Ended, self.m_config.rTime
    end
    return ActivityState.Started, self.m_config.eTime
  elseif self.m_config.rTime and serverTime < self.m_config.rTime then
    return ActivityState.Ended, self.m_config.rTime
  else
    return ActivityState.Released, -1
  end
end

function DropModel:GetAllStateChangedEvent()
  return {
    self.m_activityDefinition.StateChangedEvent
  }
end

function DropModel:IsFinishAnimEnd()
  return self.m_dbTable:GetValue(DropDBKeys.FinishAllRound, DropDBKeys.DBColumnValue) == "1"
end

function DropModel:TrySetFinishAnimEnd()
  if self:GetState() == ActivityState.Started then
    local _, bIsFinish = self:GetProgressLevel()
    if bIsFinish then
      self.m_dbTable:Set(DropDBKeys.FinishAllRound, DropDBKeys.DBColumnValue, "1")
    end
  end
end

function DropModel:ExchangeReward()
  if self.m_expireReward ~= nil then
    return
  end
  local maxnum = self.m_dropCatTransEnergyMax
  local cnt = self:GetActivityTokenNumber()
  local rewards = {
    {
      [PROPERTY_TYPE] = EPropertyType.Energy,
      [PROPERTY_COUNT] = math.min(maxnum, math.floor(cnt / self.m_dropCatTransEnergy))
    }
  }
  if cnt == 0 then
    rewards[1][PROPERTY_COUNT] = 0
  end
  GM.BIManager:LogUseItem(self.m_activityDefinition.ActivityTokenPropertyType, cnt, EBIType.DropRecoverToken, EPropertyType.Energy)
  self.m_expireReward = rewards
  self:SaveExpireReward()
  self:_ClearToken()
  return rewards
end

function DropModel:SaveExpireReward()
  local jsonData = ""
  if self.m_expireReward ~= nil then
    jsonData = json.encode(self.m_expireReward)
    self.m_dbTable:Set(DropDBKeys.ExpriedReward, "value", jsonData)
  end
end

function DropModel:GetExpireReward()
  return self.m_expireReward
end

function DropModel:CanAddScore()
  return self:IsActivityOpen()
end

function DropModel:GetActivityTokenNumber()
  return self.m_dbTable:GetValue(DropDBKeys.DropTokenCount, DropDBKeys.DBColumnValue) or 0
end

function DropModel:AcquireActivityToken(count)
  local currentTokenCount = self:GetActivityTokenNumber()
  self.m_dbTable:Set(DropDBKeys.DropTokenCount, DropDBKeys.DBColumnValue, currentTokenCount + count)
  EventDispatcher.DispatchEvent(EEventType.DropTokenCountChanged, count)
end

function DropModel:ConsumeActivityToken(count)
  local currentTokenCount = self:GetActivityTokenNumber()
  local consumedTokenCount = currentTokenCount - count
  if consumedTokenCount < 0 then
    return false
  end
  self.m_dbTable:Set(DropDBKeys.DropTokenCount, DropDBKeys.DBColumnValue, consumedTokenCount)
  EventDispatcher.DispatchEvent(EEventType.DropTokenCountChanged, -count)
  return true
end

function DropModel:GetBuyTokenGem()
  local serverTime = GM.GameModel:GetServerTime()
  local refreshTime = self.m_dbTable:GetValue(DropDBKeys.DropBuyTokenRefreshTime, DropDBKeys.DBColumnValue) or 0
  if serverTime >= refreshTime then
    self.m_dbTable:Set(DropDBKeys.DropLastBuyTokenIndex, DropDBKeys.DBColumnValue, "0")
    refreshTime = TimeUtil.ToCur24ClockTimestamp(serverTime)
    self.m_dbTable:Set(DropDBKeys.DropBuyTokenRefreshTime, DropDBKeys.DBColumnValue, refreshTime)
  end
  local curIndex = tonumber(self.m_dbTable:GetValue(DropDBKeys.DropLastBuyTokenIndex, DropDBKeys.DBColumnValue) or "0")
  curIndex = math.min(curIndex + 1, self:GetMaxBuyTokenTimes())
  return self.m_buyTokenConfig[curIndex].price, self.m_buyTokenConfig[curIndex].token_num
end

function DropModel:GetMaxBuyTokenTimes()
  return #self.m_buyTokenConfig
end

function DropModel:BuyToken()
  local i32GemNum, i32TokenNum = self:GetBuyTokenGem()
  if GM.PropertyDataManager:Consume(EPropertyType.Gem, i32GemNum, EBIType.DropBuyToken, "token") then
    RewardApi.AcquireRewardsLogic({
      {
        [PROPERTY_TYPE] = EPropertyType.DropToken,
        [PROPERTY_COUNT] = i32TokenNum
      }
    }, EPropertySource.Buy, EBIType.DropBuyToken)
    local curIndex = tonumber(self.m_dbTable:GetValue(DropDBKeys.DropLastBuyTokenIndex, DropDBKeys.DBColumnValue)) + 1
    self.m_dbTable:Set(DropDBKeys.DropLastBuyTokenIndex, DropDBKeys.DBColumnValue, tostring(curIndex))
    return i32TokenNum, i32GemNum
  end
  return nil, i32GemNum
end

function DropModel:SaveBoardData(strBoardInfo)
  self.m_dbTable:Set(DropDBKeys.DropBoardData, DropDBKeys.DBColumnValue, strBoardInfo)
end

function DropModel:GetBoardData()
  return json.decode(self.m_dbTable:GetValue(DropDBKeys.DropBoardData, DropDBKeys.DBColumnValue) or "")
end

function DropModel:GetDropRankModel()
end

function DropModel:_ClearToken()
  self.m_dbTable:Set(DropDBKeys.DropTokenCount, DropDBKeys.DBColumnValue, 0)
end

function DropModel:CanShowIcon()
  return self:IsActivityOpen()
end

function DropModel:CanShowBoardIcon()
  return self:IsActivityOpen()
end

function DropModel:AddScore(score)
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
  end
  self.m_dbTable:Set(DropDBKeys.DropScore, DropDBKeys.DBColumnValue, tostring(curScore))
  EventDispatcher.DispatchEvent(EEventType.DropScoreChanged, score)
  GM.BIManager:LogAcquire(self.m_activityDefinition.BIAcquireScore, score, EBIType.DropMergeAcuqireRewards, true)
  if not Table.IsEmpty(progressReward) then
    for _, data in ipairs(progressReward) do
      RewardApi.AcquireRewardsLogic(data.reward, EPropertySource.Give, EBIType.DropProgressRewards, CacheItemType.Stack)
      self:LogActivity(EBIType.ActivityGetRewards, data.level)
    end
  end
  return progressReward
end

function DropModel:GetScore()
  return tonumber(self.m_dbTable:GetValue(DropDBKeys.DropScore, DropDBKeys.DBColumnValue) or "") or 0
end

function DropModel:GetTokenNumNeeedForDrop()
  return self.m_dropCatCost
end

function DropModel:CanDropOnBoard()
  local _, bIsFinish = self:GetProgressLevel()
  if self:GetState() == ActivityState.Started and not bIsFinish then
    return self:GetTokenNumNeeedForDrop() <= self:GetActivityTokenNumber()
  end
  return false
end

function DropModel:TryDropOnBoard()
  if not self:CanDropOnBoard() then
    return false
  end
  self:ConsumeActivityToken(self:GetTokenNumNeeedForDrop())
  return true
end

function DropModel:CanShowRedPoint()
  if self:GetState() == ActivityState.Started or self:GetState() == ActivityState.Preparing then
    return self:CanDropOnBoard()
  end
  return false
end

function DropModel:GetDroppedItems()
  local curScore = self:GetScore()
  local target = {}
  for _, dropConfig in ipairs(self.m_dropGenerates) do
    if dropConfig.type == 1 and curScore >= dropConfig.score_min and curScore <= dropConfig.score_max then
      local minNum = dropConfig.drop_num.min
      local maxNum = dropConfig.drop_num.max
      local num = math.random(minNum, maxNum)
      for i = 1, num do
        table.insert(target, Table.ListWeightSelectOne(dropConfig.drop_items).Code)
      end
      break
    end
  end
  return target
end

function DropModel:GetSpecialDroppItem(num)
  local curScore = self:GetScore()
  local target = {}
  for _, dropConfig in ipairs(self.m_dropGenerates) do
    if dropConfig.type == 2 and curScore >= dropConfig.score_min and curScore <= dropConfig.score_max then
      for i = 1, num do
        table.insert(target, Table.ListWeightSelectOne(dropConfig.drop_items).Code)
      end
      break
    end
  end
  return target
end

function DropModel:GetMergeItemCode(itemCode)
  if self.m_dropItems[itemCode] == nil then
    return nil
  end
  return self.m_dropItems[itemCode].merge_item
end

function DropModel:GetItemLevel(itemCode)
  local itemInfo = StringUtil.rFind(itemCode, "_")
  if itemInfo == nil then
    return 1
  end
  return tonumber(string.sub(itemCode, itemInfo + 1))
end

function DropModel:GetItemType(itemCode)
  local itemInfo = StringUtil.rFind(itemCode, "_")
  if itemInfo == nil then
    return itemCode
  end
  return string.sub(itemCode, 1, itemInfo - 1)
end

function DropModel:OnCreateItem(MergeItemCode, itemCode)
  if self.m_dropItems[itemCode] == nil then
    return
  end
  local itemInfo = self.m_dropItems[itemCode]
  local reward = itemInfo.merge_reward[1]
  local progressReward
  if reward[PROPERTY_TYPE] == "score" then
    progressReward = self:AddScore(reward[PROPERTY_COUNT])
  elseif reward[PROPERTY_TYPE] == "dropToken" then
    self:AcquireActivityToken(reward[PROPERTY_COUNT])
    GM.BIManager:LogAcquire(self.m_activityDefinition.ActivityTokenPropertyType, reward[PROPERTY_COUNT], EBIType.DropMergeAcuqireRewards, true)
  elseif reward[PROPERTY_TYPE] == "item" then
  else
    RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, EBIType.DropMergeAcuqireRewards)
  end
  return reward, progressReward
end

function DropModel:GetProgressLevelByScore(score)
  for _, dropReward in ipairs(self.m_dropReward) do
    if score < dropReward.score then
      return dropReward.level, false
    end
  end
  return self.m_dropReward[#self.m_dropReward].level, true
end

function DropModel:GetProgressLevel()
  local score = self:GetScore()
  return self:GetProgressLevelByScore(score)
end

function DropModel:GetProgressConfigByLevel(level)
  for _, dropReward in ipairs(self.m_dropReward) do
    if dropReward.level == level then
      return dropReward
    end
  end
  return nil
end

function DropModel:GetProgressMaxNum()
  return #self.m_dropReward
end

function DropModel:GetItemConfig(itemCode)
  return self.m_dropItems[itemCode]
end

function DropModel:GetTokenType()
  return self.m_activityDefinition.ActivityTokenPropertyType
end

function DropModel:GetBoardEntryShowConfig()
  local listeners = {}
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.VendingDrop,
    entryPrefabName = UIPrefabConfigName.VendingDropBoardEntry,
    checkFun = function()
      return self:CanShowBoardIcon()
    end,
    extraListenEvent = listeners
  }
end

function DropModel:GetMapEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.VendingDrop,
    entryPrefabName = UIPrefabConfigName.VendingDropEntry,
    hudKey = self.m_activityDefinition.EntryButtonKey,
    checkFun = function()
      return self:CanShowIcon()
    end
  }
end

function DropModel:GetOrderAreaBoardEntryFuncName()
  return "GetActivityDropBubble" .. self.m_type
end

function DropModel:HaveStartToken()
  return self.m_dbTable:GetValue(DropDBKeys.StartToken, DropDBKeys.DBColumnValue)
end

function DropModel:OnLackDropToken(endFunc)
  if self:IsActivityOpen() and self:GetActivityTokenNumber() < self:GetTokenNumNeeedForDrop() and not GM.TutorialModel:HasAnyStrongTutorialOngoing() then
    return GM.BundleManager:TryStartBundlePopupChain(EBundleTriggerType.LackDropToken, nil, nil, endFunc)
  end
  return false
end

function DropModel:OnTestDropData()
  if not GM.UIManager:IsTestActivityButtonValid() then
    return
  end
  self.m_dbTable:Drop()
end
