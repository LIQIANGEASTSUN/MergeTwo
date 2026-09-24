NoCDTrainModel = setmetatable({
  eModelType = ActivityModelType.Train,
  configFileName = "Data.Config.NoCDTrainOrderConfig",
  FileSuffix = "fsidx"
}, BingoBaseModel)
NoCDTrainModel.__index = NoCDTrainModel
local DBColumnValue = "value"
local DBKey = {
  Round = "rd",
  CompleteBit = "cpb",
  OrderState = "ods",
  RoundEndTime = "ret",
  TrainLine1 = "trl1",
  TrainLine2 = "trl2",
  ExtraRewardTime = "toert",
  UnlockLine = "toulkl",
  EnterAnimation = "toea",
  FinalLineFinished = "FinalLineFinished",
  FinalLineOngoing = "FinalLineOngoing",
  OpenDay = "opd"
}

function NoCDTrainModel.IsLocked(itemCode, gameMode)
  if gameMode ~= EGameMode.Main then
    return false
  end
  if StringUtil.IsNilOrEmpty(itemCode) or not StringUtil.StartWith(itemCode, ItemCodePrefix.MainGenerator) then
    return false
  end
  for _, definition in pairs({
    NoCDTrainDefinition,
    NoCDBingoDefinition,
    PuzzleBingoDefinition
  }) do
    for actType, _ in pairs(definition) do
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:CanShowBoardEntry() and Table.Contain(model:_GetRelatedPDChain(), GM.ItemDataModel:GetChainId(itemCode)) then
        return true, actType
      end
    end
  end
  return false
end

function NoCDTrainModel.IsLockedOrToBeLocked(itemCode, gameMode)
  if gameMode ~= EGameMode.Main then
    return false
  end
  if StringUtil.IsNilOrEmpty(itemCode) or not StringUtil.StartWith(itemCode, ItemCodePrefix.MainGenerator) then
    return false
  end
  local itemChain = GM.ItemDataModel:GetChainId(itemCode)
  for _, definition in pairs({
    NoCDTrainDefinition,
    NoCDBingoDefinition,
    PuzzleBingoDefinition
  }) do
    for actType, _ in pairs(definition) do
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:CanShowBoardEntry() and (Table.Contain(model:_GetRelatedPDChain(), itemChain) or model:_GetToBeRelatedPDChain()[itemChain]) then
        return true, actType
      end
    end
  end
  return false
end

function NoCDTrainModel.GetAllBingoCanShowBoardEntryModel()
  local modelArr = {}
  for _, definition in pairs({
    BingoDefinition,
    NoCDTrainDefinition,
    NoCDBingoDefinition,
    PuzzleBingoDefinition
  }) do
    for actType, _ in pairs(definition) do
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:CanShowBoardEntry() then
        modelArr[#modelArr + 1] = model
      end
    end
  end
  return modelArr
end

function NoCDTrainModel.GetCurOrderRequirements(eGameMode)
  for _, definition in pairs({
    BingoDefinition,
    NoCDTrainDefinition,
    NoCDBingoDefinition,
    PuzzleBingoDefinition
  }) do
    for actType, _ in pairs(definition) do
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:CanShowBoardEntry() then
        return model:GetMapNeedOrderItemCodes(eGameMode, true) or {}
      end
    end
  end
end

function NoCDTrainModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable)
  self.m_activityDefinition = NoCDTrainDefinition[activityType]
  self:_InitRewardMatches()
  BingoBaseModel.Init(self, activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable)
end

function NoCDTrainModel:_DropData()
  BaseActivityModel._DropData(self)
  self:_DropBoardData()
end

function NoCDTrainModel:_DropBoardData()
  self.m_mapCode = nil
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  if self.m_boardModel ~= nil then
    self.m_boardModel:GetItemManager():Destroy()
    self.m_boardModel:ResetData()
  end
end

function NoCDTrainModel:GetBoardEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    extraListenEvent = self.m_activityDefinition.RoundChangedEvent,
    eEntryRootKey = EEntryRootKey.NoCDTrain,
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    checkFun = function()
      return self:IsActivityOpen() and (not self:IsInLockTime() or self:GetUseSuffix() ~= nil)
    end
  }
end

function NoCDTrainModel:CanShowBoardEntry()
  if not (not GM.CheckResourcesStageFinished or self:IsActivityOpen()) or not GM.CheckResourcesStageFinished and not self:HasActivityOpened() then
    return false
  end
  return self:GetUseSuffix() ~= nil
end

function NoCDTrainModel:GetMapEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    extraListenEvent = self.m_activityDefinition.RoundChangedEvent,
    eEntryRootKey = EEntryRootKey.NoCDTrain,
    entryPrefabName = self.m_activityDefinition.MapEntryPrefabName,
    hudKey = self.m_activityDefinition.EntryButtonKey,
    checkFun = function()
      return self:GetState() == ActivityState.Preparing or self:IsActivityOpen() and (not self:IsInLockTime() or self:GetUseSuffix() ~= nil)
    end
  }
end

function NoCDTrainModel:UseSuffix(suffix)
  BingoBaseModel.UseSuffix(self, suffix)
  self:StartNewRound(true)
end

function NoCDTrainModel:_SetSuffix(suffix)
  self.m_arrOrderConfigs = formerRequire("Data.Config.NoCDTrainOrderConfig" .. suffix)
  self.m_maxRound = #self.m_arrOrderConfigs
  if not Table.IsEmpty(self.m_arrOrderConfigs) and ItemChangeHelper.HasItemChanged() then
    self:_CheckItemData()
  end
  self.m_orderLines = #self.m_arrOrderConfigs[self:GetCurrentRound(1)]
end

function NoCDTrainModel:_IsCurModeConfig(config)
  return config.actType == "train"
end

function NoCDTrainModel:_LoadOtherServerConfig(config)
  local rewardConfig = config.bingo_order_reward
  if rewardConfig == nil then
    return
  end
  self.m_orderLines = tonumber(self:GetGeneralConfig("lines"))
  self.m_maxRound = tonumber(self:GetGeneralConfig("max_r"))
  self.m_mapRewards = {}
  for _, v in pairs(rewardConfig) do
    self.m_mapRewards[v.type] = ConfigUtil.GetCurrencyFromArrStr(v.reward)
  end
end

function NoCDTrainModel:UpdatePerSecond()
  BingoBaseModel.UpdatePerSecond(self)
  local curRoundEndTime = self:GetCurRoundEndTime()
  if curRoundEndTime ~= nil and 0 < curRoundEndTime and curRoundEndTime ~= self.m_lastRoundEndTime and curRoundEndTime < GM.GameModel:GetServerTime() then
    self:_OnRoundFinish()
    self.m_lastRoundEndTime = curRoundEndTime
  end
end

function NoCDTrainModel:CalculateNextRoundStartTime()
  local curRound = self:_CalculateRound()
  return math.min(self.m_config.sTime + curRound * 86400, self.m_config.eTime)
end

function NoCDTrainModel:_OnStateChanged()
  BaseActivityModel._OnStateChanged(self)
  local state = self:GetState()
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil then
      self.m_boardModel = NoCDTrainBoardModel.Create(self.m_itemDataTable, self.m_itemLayerDataTable, self.m_itemCacheDataTable, self:GetBoardConfigName(), self:GetType(), self.m_activityDefinition.HorizontalTiles, self.m_activityDefinition.VerticalTiles)
      self.m_boardModel:LoadFileConfig()
    end
  else
    self.m_boardModel = nil
  end
  self.m_endWindowPopupHelper:UpdateHasStarted()
  self.m_relatedPDChain = {}
  self.m_mapToBeReleatedPDChain = {}
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.OrderChangedEvent)
end

function NoCDTrainModel:CheckActTaskValid(taskType, num)
  if taskType == ETaskType.FinishActOrder then
    return self:IsActivityOpen() and num <= self:GetAllUnCompleteOrderCount()
  end
  return false
end

function NoCDTrainModel:GetAllUnCompleteOrderCount()
  local totalCount = 0
  if not Table.IsEmpty(self.m_arrOrderConfigs) then
    local orderLines, orderLength
    for i = self:GetCurrentRound(), self:GetMaxRound() do
      orderLines = self.m_arrOrderConfigs[i] and #self.m_arrOrderConfigs[i] or 0
      for j = 1, orderLines do
        orderLength = self.m_arrOrderConfigs[i][j] and #self.m_arrOrderConfigs[i][j] or 0
        totalCount = totalCount + orderLength
      end
    end
  end
  return totalCount - self:GetCompletedOrderCount()
end

function NoCDTrainModel:IsActivityOpen()
  return self:GetState() == ActivityState.Started and not self:HasFinishedAllRounds()
end

function NoCDTrainModel:IsRoundOnGoing()
  return GM.GameModel:GetServerTime() < self:GetCurRoundEndTime() and not self:HasAllOrdersCompleted()
end

function NoCDTrainModel:CanStartNewRound()
  local newRound = self:_CalculateRound()
  local restTime = self.m_config.sTime + newRound * 86400 - GM.GameModel:GetServerTime()
  return self:GetCurrentRound(0) ~= newRound and newRound <= self:GetMaxRound() and restTime > (self.m_lockHours or 0) * 3600
end

function NoCDTrainModel:GetCurRoundEndTime()
  return self.m_config and self.m_config.eTime or 0
end

function NoCDTrainModel:StartNewRound(bstart)
  self.m_dbTable:Set(DBKey.Round, DBColumnValue, self:GetNextRound())
  self.m_dbTable:Set(DBKey.CompleteBit, DBColumnValue, 0)
  self.m_dbTable:Set(DBKey.FinalLineFinished, DBColumnValue, 0)
  self.m_dbTable:Set(DBKey.FinalLineOngoing, DBColumnValue, 0)
  self:_DropBoardData()
  self:_ResetTrainOrderLineInfo()
  self:SetEnterAnimationPlayed(false)
  self:_AddPDItemToBoardModel(bstart)
  self:SetMainWindowTutorialFinished(false)
  self:_UpdateCodeMap()
  EventDispatcher.DispatchEvent(self.m_activityDefinition.OrderChangedEvent)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.RoundChangedEvent, bstart)
  self:LogActivity(EBIType.ActivityRankUp, 0)
  self:LogOrderUnlock(1)
  self:LogOrderUnlock(2)
  return true
end

function NoCDTrainModel:_OnRoundFinish()
  self.m_dbTable:Set(DBKey.RoundEndTime, DBColumnValue, 0)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.OrderChangedEvent)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.RoundChangedEvent)
  self.m_relatedPDChain = {}
  self.m_mapToBeReleatedPDChain = {}
end

function NoCDTrainModel:_ResetTrainOrderLineInfo()
  self.m_dbTable:Set(DBKey.TrainLine1, DBColumnValue, 1)
  self.m_dbTable:Set(DBKey.TrainLine2, DBColumnValue, 2)
  self.m_dbTable:Set(DBKey.UnlockLine, DBColumnValue, 2)
end

function NoCDTrainModel:ConvertUiLineNumToLogicLineNum(uiLineNum)
  Log.Assert(uiLineNum and 1 <= uiLineNum and uiLineNum <= 2, "NoCDTrainModel.FinishLine uiLineNum out of range. line:" .. uiLineNum or "")
  return self.m_dbTable:GetValue(DBKey["TrainLine" .. uiLineNum], DBColumnValue)
end

function NoCDTrainModel:ConvertLogicLineNumToUiLineNum(logicLineNum)
  for i = 1, 2 do
    if self.m_dbTable:GetValue(DBKey["TrainLine" .. i], DBColumnValue) == logicLineNum then
      return i
    end
  end
end

function NoCDTrainModel:_UpdateUnlockLine()
  local line1 = self:GetUnlockLine()
  local line2 = math.max(self.m_dbTable:GetValue(DBKey.TrainLine1, DBColumnValue), self.m_dbTable:GetValue(DBKey.TrainLine2, DBColumnValue))
  self.m_dbTable:Set(DBKey.UnlockLine, DBColumnValue, math.max(line1, line2))
end

function NoCDTrainModel:GetUnlockLine()
  return self.m_dbTable:GetValue(DBKey.UnlockLine, DBColumnValue) or 2
end

function NoCDTrainModel:GetFinishLineNum()
  if Table.IsEmpty(self.m_arrOrderConfigs) then
    return 0
  end
  local num = 0
  for i = 1, self:GetUnlockLine() do
    num = num + (self:IsLineFinished(i) and 1 or 0)
  end
  return num
end

function NoCDTrainModel:FinishLine(logicLineNum)
  local uiLineNum = self:ConvertLogicLineNumToUiLineNum(logicLineNum)
  Log.Assert(uiLineNum and 1 <= uiLineNum and uiLineNum <= 2, "NoCDTrainModel.FinishLine uiLineNum out of range. line:" .. uiLineNum or "")
  local curMaxUnlockLine = self:GetUnlockLine()
  local nextLine = curMaxUnlockLine < self:GetOrderLines() and curMaxUnlockLine + 1 or 0
  if self.m_newUnlockLogicLines == nil then
    self.m_newUnlockLogicLines = {}
  end
  self.m_newUnlockLogicLines[#self.m_newUnlockLogicLines + 1] = nextLine
  self.m_dbTable:Set(DBKey["TrainLine" .. uiLineNum], DBColumnValue, nextLine)
  self:_UpdateUnlockLine()
  self:LogOrderUnlock(nextLine)
  self:_UpdateState()
end

function NoCDTrainModel:ClearNewUnlockLine(logicLineNum)
  if Table.IsEmpty(self.m_newUnlockLogicLines) then
    return
  end
  if logicLineNum then
    Table.ListRemove(self.m_newUnlockLogicLines, logicLineNum)
  else
    self.m_newUnlockLogicLines = {}
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateItemCheck)
end

function NoCDTrainModel:GetRewards(rewardType, round, index)
  if index == nil then
    return round and self.m_mapRewards[rewardType .. "-" .. round] or self.m_mapRewards[rewardType]
  else
    return self.m_mapRewards[rewardType .. "-" .. round .. "-" .. index] or self.m_mapRewards[rewardType .. "-" .. round] or self.m_mapRewards[rewardType]
  end
end

function NoCDTrainModel:_CalculateRound()
  local deltaTime = GM.GameModel:GetServerTime() - self.m_config.sTime
  return deltaTime // 86400 + 1
end

function NoCDTrainModel:GetNextRound()
  return self:GetCurrentRound(0) + 1
end

function NoCDTrainModel:HasFinishedAllRounds()
  if self:GetUseSuffix() == nil then
    return false
  end
  return self:GetCurrentRound() >= self:GetMaxRound() and (self:HasAllOrdersCompleted() or self:GetCurRoundEndTime() < GM.GameModel:GetServerTime())
end

function NoCDTrainModel:GetOrderItemCode(x, y)
  local result = self.m_arrOrderConfigs[self:GetCurrentRound(1)][y][x]
  if result == "random" then
    return "it1_1_5"
  end
  return result
end

local needCodesMeta = {}
local mapNeedCodes = {}

function NoCDTrainModel:GetMapNeedOrderItemCodes(eGameMode, bExceptNewLine)
  if Table.IsEmpty(self.m_arrOrderConfigs) then
    return {}
  end
  if (not bExceptNewLine or not not Table.IsEmpty(self.m_newUnlockLogicLines)) and self:GetState() ~= ActivityState.Released and self:IsFinalLineOnGoing() then
    local mapNeeds = {}
    if eGameMode ~= EGameMode.Main then
      for position in NoCDTrainBoardModel.GetValidPositionIterator() do
        local item = self.m_boardModel:GetItem(position)
        if item ~= nil and not StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
          mapNeeds[item:GetCode()] = (mapNeeds[item:GetCode()] or 0) + 1
        end
      end
    end
    return mapNeeds
  end
  if not self:IsActivityOpen() or self:GetCurRoundEndTime() < GM.GameModel:GetServerTime() then
    return {}
  end
  if bExceptNewLine and not Table.IsEmpty(self.m_newUnlockLogicLines) then
    local result = {}
    for y = 1, self:GetUnlockLine() do
      if not Table.Contain(self.m_newUnlockLogicLines, y) then
        for x = 1, self:GetOrderLength(y) do
          if not self:HasOrderCompleted(x, y) then
            result[self:GetOrderItemCode(x, y)] = (result[self:GetOrderItemCode(x, y)] or 0) + 1
          end
        end
      end
    end
    return result
  end
  if needCodesMeta.completeBit ~= self:_GetCompleteBit() or not self:NeedOpenReadyWindow() and needCodesMeta.round ~= self:GetCurrentRound() then
    for k, _ in pairs(mapNeedCodes) do
      mapNeedCodes[k] = nil
    end
    if self:_GetCompleteBit() == self:GetCompleteAllBit() then
      for position in NoCDTrainBoardModel.GetValidPositionIterator() do
        local item = self.m_boardModel:GetItem(position)
        if item ~= nil and not StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
          mapNeedCodes[item:GetCode()] = (mapNeedCodes[item:GetCode()] or 0) + 1
        end
      end
    else
      for y = 1, self:GetUnlockLine() do
        for x = 1, self:GetOrderLength(y) do
          if not self:HasOrderCompleted(x, y) then
            mapNeedCodes[self:GetOrderItemCode(x, y)] = (mapNeedCodes[self:GetOrderItemCode(x, y)] or 0) + 1
          end
        end
      end
    end
    needCodesMeta.completeBit = self:_GetCompleteBit()
    needCodesMeta.round = self:GetCurrentRound()
  end
  return mapNeedCodes
end

function NoCDTrainModel:HasAllOrdersCompleted()
  return not Table.IsEmpty(self.m_arrOrderConfigs) and self:_GetCompleteBit() == self:GetCompleteAllBit() and (not self:IsFinalLineOnGoing() or self:IsFinalLineFinished())
end

function NoCDTrainModel:IsFinalLineOnGoing()
  return not Table.IsEmpty(self.m_arrOrderConfigs) and self:_GetCompleteBit() == self:GetCompleteAllBit() and self:_IsFinalLineOngoing()
end

function NoCDTrainModel:_IsFinalLineOngoing()
  local isGoing = self.m_dbTable:GetValue(DBKey.FinalLineOngoing, DBColumnValue) or 0
  if isGoing == 0 then
    local isGoing = not Table.IsEmpty(self:ConvertItemToFinalReward())
    self:_SetFinalLineOngoing(isGoing)
    return isGoing
  end
  return (self.m_dbTable:GetValue(DBKey.FinalLineOngoing, DBColumnValue) or 0) == 1
end

function NoCDTrainModel:_SetFinalLineOngoing(isGoing)
  self.m_dbTable:Set(DBKey.FinalLineOngoing, DBColumnValue, isGoing and 1 or 2)
end

function NoCDTrainModel:IsFinalLineFinished()
  return (self.m_dbTable:GetValue(DBKey.FinalLineFinished, DBColumnValue) or 0) == 1
end

function NoCDTrainModel:SetFinalLineFinished()
  self.m_dbTable:Set(DBKey.FinalLineFinished, DBColumnValue, 1)
end

function NoCDTrainModel:CanCompleteOrder(x, y)
  if self:HasOrderCompleted(x, y) then
    return false
  end
  if y > self:GetUnlockLine() then
    return false
  end
  return self.m_mapCode and self.m_mapCode[self:GetOrderItemCode(x, y)]
end

function NoCDTrainModel:CanCompleteAnyOrder()
  if Table.IsEmpty(self.m_arrOrderConfigs) then
    return false
  end
  if not self:IsActivityOpen() or self:HasAllOrdersCompleted() then
    return false
  end
  for y = 1, self:GetUnlockLine() do
    for x = 1, self:GetOrderLength(y) do
      if self:CanCompleteOrder(x, y) then
        return true
      end
    end
  end
  return false
end

function NoCDTrainModel:GetCompletedOrderCount()
  if self:HasAllOrdersCompleted() then
    return self:GetOrderMaxCount()
  end
  local count = 0
  for y = 1, self:GetUnlockLine() do
    for x = 1, self:GetOrderLength(y) do
      if self:HasOrderCompleted(x, y) then
        count = count + 1
      end
    end
  end
  return count
end

function NoCDTrainModel:GetOrderMaxCount()
  local cnt = 0
  for y = 1, self:GetOrderLines() do
    cnt = cnt + self:GetOrderLength(y)
  end
  return cnt
end

function NoCDTrainModel:IsLineFinished(logicLineNum)
  for posX = 1, self:GetOrderLength(logicLineNum) do
    if not self:HasOrderCompleted(posX, logicLineNum) then
      return false
    end
  end
  return true
end

function NoCDTrainModel:CompleteOrder(x, y, itemModel)
  if not self:CanCompleteOrder(x, y) then
    return false
  end
  local itemCode = self:GetOrderItemCode(x, y)
  local success, item
  if self.m_boardModel then
    success, item = self.m_boardModel:FinishBingoOrder(itemCode, x, y, self:GetType(), itemModel)
  end
  if not success then
    success, item = GM.MainBoardModel:FinishBingoOrder(itemCode, self:GetType())
  end
  if not success then
    return false
  end
  local ext
  local arrRewards, hasSpecialRewards = self:GetOrderCompleteRewards(x, y)
  for i = #arrRewards, 1, -1 do
    local biType = self.m_activityDefinition.OrderRewardBIType
    if arrRewards[i].type == NoCDTrainRewardType.Line then
      biType = self.m_activityDefinition.LineRewardBIType
    elseif arrRewards[i].type == NoCDTrainRewardType.Extra then
      biType = self.m_activityDefinition.ExtraRewardBIType
      ext = "extra_gift:1"
    elseif arrRewards[i].type == NoCDTrainRewardType.Stage then
      biType = self.m_activityDefinition.StageRewardBIType
    end
    RewardApi.AcquireRewardsLogic(arrRewards[i].reward, EPropertySource.Give, biType, CacheItemType.Stack)
  end
  local costInfo = string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s", itemCode, item.costEnergy, item.freeScore, item.shopGemCost, item.bubbleGemCost, item.itemScore or 0)
  GM.BIManager:LogOrder(self:GetCurrentRound() .. "_" .. self:ConvertIndex(x, y) + 1, self:GetType(), {
    [itemCode] = 1
  }, EBIType.OrderFinish, item.itemScore, nil, nil, nil, nil, nil, ext, costInfo)
  self:_SetCompleteBit(self:ConvertIndex(x, y))
  self:_SetFinalLineOngoing(not Table.IsEmpty(self:ConvertItemToFinalReward()))
  if self:IsLineFinished(y) then
    self:FinishLine(y)
  end
  if self:_GetCompleteBit() == self:GetCompleteAllBit() then
    self:LogActivity(EBIType.ActivityRankUp, self:GetCurrentRound())
    EventDispatcher.DispatchEvent(EEventType.NoCDTrainFinishOneRound, {
      activityType = self:GetType()
    })
  end
  if self:HasAllOrdersCompleted() then
    EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
    EventDispatcher.DispatchEvent(self.m_activityDefinition.RoundChangedEvent)
    self.m_relatedPDChain = {}
    self.m_mapToBeReleatedPDChain = {}
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.OrderChangedEvent)
  EventDispatcher.DispatchEvent(EEventType.UpdateItemCheck)
  EventDispatcher.DispatchEvent(EEventType.OrderStateChanged)
  if self:HasFinishedAllRounds() then
    self:SetSubscriptionConcluded(false)
  elseif hasSpecialRewards then
    self:SetSubscriptionConcluded(true)
  end
  return true
end

function NoCDTrainModel:GetOrderCompleteRewards(x, y)
  local completeRewards = {}
  local hasSpecialRewards = false
  for _, matcher in ipairs(self.m_arrRewardMatches) do
    local bMatch, rwdTp, idx = matcher.Matcher(x, y)
    if bMatch then
      local rewards = self:GetRewards(rwdTp, self:GetCurrentRound(), idx)
      if not Table.IsEmpty(rewards) then
        table.insert(completeRewards, {
          reward = rewards,
          type = matcher.RewardType
        })
      end
      hasSpecialRewards = true
    end
  end
  local orderRewards = self:GetRewards(NoCDTrainRewardType.Order, self:GetCurrentRound(), self:ConvertIndex(x, y) + 1)
  if not Table.IsEmpty(orderRewards) then
    table.insert(completeRewards, {
      reward = orderRewards,
      type = NoCDTrainRewardType.Order
    })
  end
  completeRewards = Table.DeepCopy(completeRewards)
  local itemCode = self:GetOrderItemCode(x, y)
  local score = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCode)
  local goldRatio = score or 0.5
  for _, r in pairs(completeRewards) do
    for _, v in pairs(r.reward) do
      if v[PROPERTY_TYPE] == EPropertyType.Gold then
        local coinConstant = v[PROPERTY_COUNT]
        local gold = math.floor(coinConstant * GM.LevelModel:GetCurrentLevel() * goldRatio // 5 * 5)
        if gold == 0 then
          gold = 5
        end
        v[PROPERTY_COUNT] = gold
      end
    end
  end
  return completeRewards, hasSpecialRewards
end

function NoCDTrainModel:IsRalatedItem(itemCode)
  if Table.IsEmpty(self.m_arrOrderConfigs) then
    return false
  end
  local model = GM.ItemDataModel
  local lines = self:GetOrderLines()
  for i = 1, lines do
    local length = self:GetOrderLength(i)
    for j = 1, length do
      if model:IsRalatedItem(self:GetOrderItemCode(j, i), itemCode) then
        return true
      end
    end
  end
end

function NoCDTrainModel:ConvertIndex(x, y)
  local idx = 0
  for i = 1, y - 1 do
    idx = idx + self:GetOrderLength(i)
  end
  return idx + (x - 1)
end

function NoCDTrainModel:_InitRewardMatches()
  self.m_arrRewardMatches = {
    {
      Matcher = function(x, y)
        local isCurLineFinished = true
        for i = 1, self:GetOrderLength(y) do
          if i ~= x and not self:HasOrderCompleted(i, y) then
            isCurLineFinished = false
            break
          end
        end
        local cnt = self:GetFinishLineNum() + (isCurLineFinished and 1 or 0)
        if isCurLineFinished and self:GetRewards(NoCDTrainRewardType.Stage, self:GetCurrentRound(), cnt) ~= nil then
          return true, NoCDTrainRewardType.Stage, cnt
        end
      end,
      RewardType = NoCDTrainRewardType.Stage
    },
    {
      Matcher = function(x, y)
        local bHasReward = self:HasExtraReward(x, y)
        return bHasReward, NoCDTrainRewardType.Extra, y .. "_" .. x
      end,
      RewardType = NoCDTrainRewardType.Extra
    },
    {
      Matcher = function(x, y)
        for i = 1, self:GetOrderLength(y) do
          if i ~= x and not self:HasOrderCompleted(i, y) then
            return false
          end
        end
        return true, NoCDTrainRewardType.Line, y
      end,
      RewardType = NoCDTrainRewardType.Line
    }
  }
end

function NoCDTrainModel:GetOrderLength(logicLineNum)
  if not logicLineNum or logicLineNum < 1 or logicLineNum > self:GetOrderLines() then
    Log.Error("NoCDTrainModel:GetOrderLength. logicLineNum is invalid")
    return 0
  end
  return self.m_arrOrderConfigs[self:GetCurrentRound()] and self.m_arrOrderConfigs[self:GetCurrentRound()][logicLineNum] and #self.m_arrOrderConfigs[self:GetCurrentRound()][logicLineNum] or 0
end

function NoCDTrainModel:GetOrderLines()
  if Table.IsEmpty(self.m_arrOrderConfigs) then
    return self.m_orderLines
  end
  return self.m_arrOrderConfigs[self:GetCurrentRound()] and #self.m_arrOrderConfigs[self:GetCurrentRound()]
end

function NoCDTrainModel:IsEnterAnimationPlayed()
  return self.m_dbTable:GetValue(DBKey.EnterAnimation, DBColumnValue) == 1
end

function NoCDTrainModel:SetEnterAnimationPlayed(bPlayed)
  self.m_dbTable:Set(DBKey.EnterAnimation, DBColumnValue, bPlayed and 1 or 0)
end

function NoCDTrainModel:GetBoardConfigName()
end

function NoCDTrainModel:_AddPDItemToBoardModel(bstart)
  if not self.m_boardModel then
    return
  end
  self.m_relatedPDChain = {}
  self.m_mapToBeReleatedPDChain = {}
  local pdChains = self:_GetRelatedPDChain()
  self.m_boardModel:AddPdChainsItems(pdChains, bstart)
end

function NoCDTrainModel:_GetRelatedPDChain()
  if not Table.IsEmpty(self.m_relatedPDChain) then
    return self.m_relatedPDChain
  end
  self.m_relatedPDChain = {}
  local chainMap = {}
  for y = 1, self:GetOrderLines() do
    for x = 1, self:GetOrderLength(y) do
      local itemCode = self:GetOrderItemCode(x, y)
      chainMap[GM.ItemDataModel:GetChainId(itemCode)] = true
    end
  end
  for chainId, _ in pairs(chainMap) do
    local pdChain = GM.ItemDataModel:GetChainGenerator(chainId)
    if pdChain and not Table.Contain(self.m_relatedPDChain, pdChain) then
      self.m_relatedPDChain[#self.m_relatedPDChain + 1] = pdChain
    end
  end
  local series = {}
  for _, v in pairs(self.m_relatedPDChain) do
    series[v] = tonumber(string.sub(v, string.find(v, "_") + 1))
  end
  table.sort(self.m_relatedPDChain, function(a, b)
    if series[a] and series[b] then
      return series[a] < series[b]
    end
    return a < b
  end)
  return self.m_relatedPDChain
end

function NoCDTrainModel:NeedOpenReadyWindow()
  if self:GetState() == ActivityState.Started then
    if self:GetUseSuffix() == nil then
      return not self:IsInLockTime() and self:GetOpenDay() == 0
    end
    if not self:HasWindowOpenedOnce(ActivityState.Started) or self:HasAllOrdersCompleted() and self:GetCurrentRound() < self:GetMaxRound() then
      return true
    end
  end
end

function NoCDTrainModel:UpdateExtraRewardInfo(logicLineNum, columnNum)
  if self:GetExtraRewardEndTime(logicLineNum, columnNum) > 0 then
    return
  end
  local curRound = self:GetCurrentRound()
  local reward = self:GetRewards(NoCDTrainRewardType.Extra, curRound, logicLineNum .. "_" .. columnNum)
  if Table.IsEmpty(reward) then
    return
  end
  local endTime = math.min(self:GetCurRoundEndTime(), GM.GameModel:GetServerTime() + self:GetExtraRewardLastHour() * 3600)
  self.m_dbTable:Set(self:_GetExtraRewardDBKey(DBKey.ExtraRewardTime, logicLineNum, columnNum), DBColumnValue, tostring(endTime))
end

function NoCDTrainModel:GetExtraRewardEndTime(logicLineNum, columnNum)
  return tonumber(self.m_dbTable:GetValue(self:_GetExtraRewardDBKey(DBKey.ExtraRewardTime, logicLineNum, columnNum), DBColumnValue) or "0") or 0
end

function NoCDTrainModel:_GetExtraRewardDBKey(prefix, logicLineNum, columnNum)
  local curRound = self:GetCurrentRound()
  return prefix .. logicLineNum .. "_" .. curRound .. "_" .. columnNum
end

function NoCDTrainModel:GetExtraRewardLastHour()
  return self:GetGeneralConfig("limitHours") or 1
end

function NoCDTrainModel:HasExtraReward(x, y)
  if self:HasOrderCompleted(x, y) then
    return false
  end
  local rewards = self:GetRewards(NoCDTrainRewardType.Extra, self:GetCurrentRound(), y .. "_" .. x)
  if Table.IsEmpty(rewards) then
    return false
  end
  local endTime = self:GetExtraRewardEndTime(y, x)
  if endTime <= 0 or endTime <= GM.GameModel:GetServerTime() then
    return false
  end
  return true
end

function NoCDTrainModel:LogOrderUnlock(logicLineNum)
  if self:IsFinalLineOnGoing() then
    local requirement = {}
    for position in NoCDTrainBoardModel.GetValidPositionIterator() do
      local item = self.m_boardModel:GetItem(position)
      if item ~= nil and not StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
        requirement[item:GetCode()] = (requirement[item:GetCode()] or 0) + 1
      end
    end
    GM.BIManager:LogOrder(self:GetCurrentRound() .. "_final", self:GetType(), requirement, EBIType.OrderUnlock, nil, nil, nil, nil, nil, nil, "final:1")
  end
  if logicLineNum <= 0 or logicLineNum > self:GetOrderLines() then
    return
  end
  for x = 1, self:GetOrderLength(logicLineNum) do
    local itemCode = self:GetOrderItemCode(x, logicLineNum)
    local ext
    if not Table.IsEmpty(self:GetRewards(NoCDTrainRewardType.Extra, self:GetCurrentRound(), logicLineNum .. "_" .. x)) then
      ext = "extra_gift:1"
    end
    GM.BIManager:LogOrder(self:GetCurrentRound() .. "_" .. self:ConvertIndex(x, logicLineNum) + 1, self:GetType(), {
      [itemCode] = 1
    }, EBIType.OrderUnlock, nil, nil, nil, nil, nil, nil, ext)
  end
end

function NoCDTrainModel:IsOrderNeededItemCode(itemCode)
  for y = 1, self:GetUnlockLine() do
    for x = 1, self:GetOrderLength(y) do
      if not self:HasOrderCompleted(x, y) and self:GetOrderItemCode(x, y) == itemCode then
        return true
      end
    end
  end
  return false
end

function NoCDTrainModel:TryFinishOrderByItem(itemModel)
  local itemCode = itemModel:GetCode()
  for y = 1, self:GetUnlockLine() do
    for x = 1, self:GetOrderLength(y) do
      if not self:HasOrderCompleted(x, y) and self:GetOrderItemCode(x, y) == itemCode then
        local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
        if window then
          local cell = window:GetCell(x, y)
          if cell then
            cell:OnDoubleClick(itemModel)
          end
        end
        return
      end
    end
  end
end

function NoCDTrainModel:CanItemMoveToBoard(itemCode)
  if StringUtil.StartWith(itemCode, ItemCodePrefix.MainGenerator) then
    return false
  end
  local pdChainId = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(itemCode))
  return pdChainId and Table.Contain(self:_GetRelatedPDChain(), pdChainId)
end

function NoCDTrainModel:CompleteFinalLine()
  local requirement = {}
  local list = {}
  local totalScore = 0
  for position in NoCDTrainBoardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil and not StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
      requirement[item:GetCode()] = (requirement[item:GetCode()] or 0) + 1
      local score = GM.MainBoardModel:GetItemScoreByUnlockGen(item:GetCode()) or 0
      totalScore = totalScore + score
      table.insert(list, string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s", item:GetCode(), item.costEnergy, item.freeScore, item.shopGemCost, item.bubbleGemCost, item.itemScore or 0))
    end
  end
  self:SetFinalLineFinished()
  local rewards = self:ConvertItemToFinalReward()
  RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, self.m_activityDefinition.FinalRewardBIType, CacheItemType.Stack)
  local biRewards = {}
  for _, reward in pairs(rewards) do
    biRewards[reward[PROPERTY_TYPE]] = reward[PROPERTY_COUNT]
  end
  local costInfo = table.concat(list, ";")
  GM.BIManager:LogOrder(self:GetCurrentRound() .. "_final", self:GetType(), requirement, EBIType.OrderFinish, totalScore, nil, biRewards, nil, nil, nil, "final:1", costInfo)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.OrderChangedEvent)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.RoundChangedEvent)
  self.m_relatedPDChain = {}
  self.m_mapToBeReleatedPDChain = {}
  return rewards
end

function NoCDTrainModel:ConvertItemToFinalReward()
  local item
  local totalScore = -1
  if self.m_boardModel ~= nil then
    for position in NoCDTrainBoardModel.GetValidPositionIterator() do
      item = self.m_boardModel:GetItem(position)
      if item ~= nil and not StringUtil.StartWith(item:GetCode(), ItemCodePrefix.MainGenerator) then
        local score = GM.MainBoardModel:GetItemScoreByUnlockGen(item:GetCode()) or 0
        totalScore = math.max(0, totalScore)
        totalScore = totalScore + score
      end
    end
  end
  return self:GetFinalRewardByTotalItemScore(totalScore)
end

function NoCDTrainModel:GetFinalRewardByTotalItemScore(score, round)
  round = round or self:GetCurrentRound()
  local prefix = NoCDTrainRewardType.Final .. "-" .. round .. "-"
  for k, v in pairs(self.m_mapRewards) do
    if StringUtil.StartWith(k, prefix) then
      local config = string.sub(k, string.len(prefix) + 1) or "0-0"
      local scoreRange = StringUtil.Split(config, "_") or {}
      if score >= tonumber(scoreRange and scoreRange[1] or "0") and score < tonumber(scoreRange and scoreRange[2] or "0") then
        return v
      end
    end
  end
end

function NoCDTrainModel:SetOpenDay(day)
  self.m_dbTable:Set(DBKey.OpenDay, DB_VALUE_KEY, day)
end

function NoCDTrainModel:GetOpenDay()
  return self.m_dbTable:GetValue(DBKey.OpenDay, DB_VALUE_KEY) or 0
end
