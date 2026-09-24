SpreadFailedReason = {
  ItemClosed = 1,
  ItemOpening = 2,
  ItemRecharging = 3,
  BoardFull = 4,
  LackEnergy = 5
}
ItemSpreadEventType = {
  StateChanged = 1,
  SpeedUp = 2,
  Accelerate = 3
}
ItemSpreadState = {
  Initializing = 4,
  Closed = 1,
  Opening = 2,
  Opened = 3,
  OpenFinish = 5
}
ItemSpreadWeightType = {
  Fixed = 1,
  List = 2,
  RandomSequnce = 3,
  NotItem = 4
}
ItemSpread = setmetatable({}, BaseItemComponent)
ItemSpread.__index = ItemSpread

function ItemSpread.Create(itemConfig)
  local itemSpread = setmetatable({}, ItemSpread)
  itemSpread:Init(itemConfig)
  return itemSpread
end

function ItemSpread:Init(itemConfig)
  self:_CheckBalloonSpread(itemConfig)
  self.event = PairEvent.Create(self)
  self.m_chainId = GM.ItemDataModel:GetChainId(itemConfig.Type)
  if itemConfig.Type == ItemType.SunshineBoost or itemConfig.Type == ItemType.SunshineBoostPro then
    self.m_bSunshineRewardItem = true
  end
  self.m_auto = itemConfig.Spread_Auto
  self.m_initDuration = itemConfig.Spread_InitDuration
  self.m_initSpeedUpCost = itemConfig.Spread_InitSpeedUpCost
  self.m_openDuration = itemConfig.Spread_OpenDuration
  self.m_openSpeedUpCost = itemConfig.Spread_OpenSpeedUpCost
  self.m_costEnergy = itemConfig.CostEnergy == 1
  self.m_itemMaxNumber = itemConfig.Spread_ItemMaxNumber
  self.m_itemRecoveryDuration = itemConfig.Spread_ItemRecoveryDuration
  self.m_itemSpeedUpCost = itemConfig.Spread_ItemSpeedUpCost
  Log.Assert(self.m_itemMaxNumber ~= nil, "Spread_ItemMaxNumber should not be nil : " .. itemConfig.Type)
  Log.Assert(itemConfig.Spread_SubCycles ~= nil, "Spread_SubCycles should not be nil : " .. itemConfig.Type)
  self.m_storageMaxNumber = self.m_itemMaxNumber * itemConfig.Spread_SubCycles
  self.m_storageRecoveryDuration = itemConfig.Spread_StorageRecoveryDuration
  self.m_storageSpeedUpCost = itemConfig.Spread_StorageSpeedUpCost
  self.m_transformNumber = itemConfig.Spread_TransformNumber
  self.m_spreadTapLock = itemConfig.Spread_TapLock
  self.m_codeWeightPairs = Table.DeepCopy(itemConfig.Spread_Weight)
  self.m_weightType = itemConfig.Spread_WeightType
  if self.m_weightType == ItemSpreadWeightType.List then
    Log.Assert(self.m_itemMaxNumber == #self.m_codeWeightPairs, "Spread List config error: " .. tostring(itemConfig.Type))
  end
  self.m_bUseLuckySpread = itemConfig.Lucky_Config ~= nil
  if StringUtil.StartWith(itemConfig.Type, ItemCodePrefix.HugeToolBox) then
    self.m_codeWeightMap = {}
    for _, v in ipairs(self.m_codeWeightPairs) do
      self.m_codeWeightMap[v.Code] = v.Weight
    end
  end
  self:TryUpdateToolBoxConfig(itemConfig.Type)
  self.m_itemRestNumber = self.m_itemMaxNumber
  self.m_storageRestNumber = self.m_storageMaxNumber
  self.m_tBoxExtraSpreadTime = 0
  self.m_spreadCount = 0
  self.m_startTimer = -1
  if self.m_initDuration ~= nil then
    self.m_state = ItemSpreadState.Initializing
    self:UpdatePerSecond()
  elseif self.m_openDuration ~= nil then
    self.m_state = ItemSpreadState.Closed
  else
    self.m_state = ItemSpreadState.Opened
  end
  self.m_spreadItemBoxChain = self.m_spreadItemBoxChain or {}
end

function ItemSpread:SetItemModel(itemModel)
  BaseItemComponent.SetItemModel(self, itemModel)
  if self:GetGameMode() == EGameMode.NoCDTrain then
    if self.m_itemRecoveryDuration and self.m_itemRecoveryDuration > 0 then
      self.m_itemRecoveryDuration = 0
    end
    if self.m_storageRecoveryDuration and 0 < self.m_storageRecoveryDuration then
      self.m_storageRecoveryDuration = 0
    end
  end
end

function ItemSpread:FromSerialization(dbTable)
  self.m_state = dbTable.spreadState or self.m_state
  self.m_startTimer = dbTable.spreadStartTimer or -1
  self.m_itemRestNumber = dbTable.spreadItemRestNumber or self.m_itemRestNumber
  self.m_storageRestNumber = dbTable.spreadStorageRestNumber or self.m_storageRestNumber
  self.m_spreadCount = dbTable.spreadCount or self.m_spreadCount
  if self.m_weightType == ItemSpreadWeightType.List then
    self.m_codeWeightPairs = ItemUtility.StringToCodeWeightPairs(dbTable.spreadCodeWeightPairs)
  end
  self.m_spreadItemBoxChain = self:StringToItemBoxChainInfo(dbTable.spreadItemBoxChain) or {}
  self.m_tBoxExtraSpreadTime = dbTable.tBoxExtraSpreadTime or 0
  if StringUtil.StartWith(self.m_itemModel:GetCode(), ItemCodePrefix.GoldBox) then
    local unlockTime, lastUnlockTime = GM.ConfigModel:GetPboxUnlockTime()
    if unlockTime ~= lastUnlockTime then
      local serverTime = GM.GameModel:GetServerTime()
      if self.m_state == ItemSpreadState.Opening and serverTime < self.m_startTimer + (lastUnlockTime == 0 and self.m_openDuration or lastUnlockTime) then
        self.m_startTimer = GM.GameModel:GetServerTime()
        self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
      end
    end
  end
end

function ItemSpread:ToSerialization(dbTable)
  dbTable.spreadState = self:GetState() or -1
  dbTable.spreadStartTimer = self:GetStartTimer() or -1
  dbTable.spreadItemRestNumber = self:GetItemRestNumber() or -1
  dbTable.spreadStorageRestNumber = self:GetStorageRestNumber() or -1
  dbTable.spreadCount = self:GetSpreadCount() or -1
  if self.m_weightType == ItemSpreadWeightType.List then
    dbTable.spreadCodeWeightPairs = ItemUtility.CodeWeightPairsToString(self:GetCodeWeightPairs()) or ""
  else
    dbTable.spreadCodeWeightPairs = ""
  end
  dbTable.spreadItemBoxChain = self:ItemBoxChainInfoToString()
  dbTable.tBoxExtraSpreadTime = self.m_tBoxExtraSpreadTime or 0
end

function ItemSpread:Update()
  if self:IsAutoSpread() and self.m_itemRestNumber ~= 0 and not self.m_itemModel:IsLocked() and not self:IsHuntExtraSpread() then
    self:_TrySpread(true)
  end
end

function ItemSpread:IsHuntExtraSpread()
  local itemExtraSpread = self.m_itemModel:GetComponent(ItemExtraSpread)
  return itemExtraSpread and itemExtraSpread:CanSpreadFirstMerge()
end

function ItemSpread:UpdatePerSecond()
  if self.m_startTimer < 0 then
    if self.m_state == ItemSpreadState.Initializing or self.m_state == ItemSpreadState.Opening or self.m_state == ItemSpreadState.Opened and (self.m_itemRestNumber < self.m_itemMaxNumber or self.m_storageRestNumber == 0) and not self:IsDisposable() then
      self.m_startTimer = GM.GameModel:GetServerTime()
      if self.m_itemModel ~= nil then
        self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
      end
      self.event:Call(ItemSpreadEventType.StateChanged)
    end
    return
  end
  if self:GetTimerAmount() == 1 then
    self:_UpdateRecoveryState()
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  elseif GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and self:CanSpeedUp() and GM.TestAutoRunModel.gemSkip then
    self:OnSpeedUp()
  end
  self.event:Call(ItemSpreadEventType.StateChanged)
end

function ItemSpread:CanSpeedUp()
  if not self:IsRecyclable() and not self:IsDisposable() then
    return false
  end
  if self:_CanTransform() then
    return false
  end
  if StringUtil.StartWith(self.m_itemModel:GetType(), ItemCodePrefix.Sbox) then
    return false
  end
  local canSpeed = self:GetState() == ItemSpreadState.Initializing or self:GetState() == ItemSpreadState.Opening or self:GetState() == ItemSpreadState.Opened and self:GetItemRestNumber() == 0 and not self:IsDisposable()
  return canSpeed
end

function ItemSpread:_UpdateRecoveryState()
  if self.m_state == ItemSpreadState.Initializing or self.m_state == ItemSpreadState.Opening then
    self.m_startTimer = -1
    self.m_state = ItemSpreadState.Opened
    EventDispatcher.DispatchEvent(EEventType.ItemOpened, {
      item = self.m_itemModel
    })
    return
  end
  if self.m_storageMaxNumber ~= self.m_itemMaxNumber and self.m_itemModel:GetComponent(ItemSwallow) then
    return
  end
  if self.m_storageRestNumber == 0 then
    self.m_startTimer = -1
    self.m_storageRestNumber = self.m_storageMaxNumber
    self.m_itemRestNumber = self.m_itemMaxNumber
    return
  end
  local recoveryNumber = self.m_itemMaxNumber - self.m_itemRestNumber
  self.m_itemRestNumber = self.m_itemMaxNumber
  self.m_storageRestNumber = self.m_storageRestNumber - recoveryNumber
  if self.m_storageRestNumber <= 0 then
    self.m_storageRestNumber = 0
    self.m_startTimer = self.m_startTimer + self.m_itemRecoveryDuration
    self:UpdatePerSecond()
  else
    self.m_startTimer = -1
  end
end

function ItemSpread:Accelerate()
  self.m_storageRestNumber = self.m_storageMaxNumber
  self.m_itemRestNumber = self.m_itemMaxNumber
  self.m_startTimer = -1
  self.m_state = ItemSpreadState.Opened
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  self.event:Call(ItemSpreadEventType.StateChanged)
  self.event:Call(ItemSpreadEventType.SpeedUp)
end

function ItemSpread:OnTap()
  if self.m_itemModel:GetBoardModel():IsToolBoxCollect() then
    local code = self.m_itemModel:GetCode()
    if code == ItemType.ToolBox01 or code == ItemType.ToolBox02 or code == ItemType.HugeToolBox01 or code == ItemType.HugeToolBox02 then
      self:_CollectToolBox(code)
      return
    end
  end
  if self.m_state == ItemSpreadState.OpenFinish then
    return
  end
  if self:IsSpreadTapLock() then
    return
  end
  if NoCDTrainModel.IsLocked(self.m_itemModel:GetCode(), self:GetGameMode()) then
    return
  end
  local spreadCount = 1
  if not GM.TutorialModel:HasAnyStrongTutorialOngoing() and GameConfig.IsTestMode() and (PlayerPrefs.GetInt(EPlayerPrefKey.TestSuperTap, 0) == 1 or GM.TestAutoRunModel.autoRun) then
    spreadCount = 10
  end
  local bSpreadSuccess = false
  if self.m_bSunshineRewardItem then
    bSpreadSuccess = self:_TrySpreadSunshineRewardItem()
  else
    for i = 1, spreadCount do
      if not self:_TrySpread(false) then
        break
      end
      bSpreadSuccess = true
    end
  end
  if bSpreadSuccess then
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
  end
end

function ItemSpread:OnOpen()
  self.m_state = ItemSpreadState.Opening
  self:UpdatePerSecond()
  EventDispatcher.DispatchEvent(EEventType.ItemOpening)
  GM.BIManager:LogAction(EBIType.BoxUnlock, self.m_itemModel:GetType())
end

function ItemSpread:OnSpeedUp(isFree)
  if not isFree then
    local cost = self:GetSpeedUpCost()
    local gemNumber = GM.PropertyDataManager:GetPropertyNum(EPropertyType.Gem)
    if GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and GM.TestAutoRunModel.gemSkip then
      gemNumber = cost
    end
    if cost > gemNumber then
      local boardModel = self.m_itemModel:GetBoardModel()
      boardModel.event:Call(BoardEventType.LackGem, {
        LackNumber = cost - gemNumber
      })
      return
    end
    GM.PropertyDataManager:Consume(EPropertyType.Gem, cost, EBIType.SpeedUp, self.m_itemModel:GetCode())
  end
  self.m_startTimer = GM.GameModel:GetServerTime() - self:GetTimerDuration()
  self:UpdatePerSecond()
  self.event:Call(ItemSpreadEventType.SpeedUp)
end

function ItemSpread:OnTimeSkip(duration)
  if self.m_startTimer > 0 then
    self.m_startTimer = self.m_startTimer - duration
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    self:UpdatePerSecond()
  end
end

function ItemSpread:OnSwallowOver()
  if self.m_initDuration ~= nil then
    self.m_state = ItemSpreadState.Initializing
    self.m_startTimer = GM.GameModel:GetServerTime()
  end
  if self.m_storageMaxNumber ~= self.m_itemMaxNumber and self.m_itemRestNumber == 0 then
    self.m_itemRestNumber = self.m_itemMaxNumber
  end
  self.event:Call(ItemSpreadEventType.StateChanged)
end

function ItemSpread:IsAutoSpread()
  return self.m_auto >= 1
end

function ItemSpread:IsAutoSpreadFullBoard()
  return self.m_auto == 2
end

function ItemSpread:GetOpenDuration()
  local unlockTime, _ = GM.ConfigModel:GetPboxUnlockTime()
  if unlockTime ~= 0 then
    return unlockTime
  end
  return self.m_openDuration
end

function ItemSpread:CostEnergy()
  return self.m_costEnergy
end

function ItemSpread:GetCodeWeightPairs()
  return self.m_codeWeightPairs
end

function ItemSpread:GetItemRestNumber()
  return self.m_itemRestNumber
end

function ItemSpread:GetTransformNumber()
  return self.m_transformNumber
end

function ItemSpread:GetTestStorageRestNumber()
  if self:_IsBalloonSpread() then
    local config = (self.m_codeWeightPairs[1] or {}).Code or ""
    local splited = StringUtil.Split(config, "_")
    return splited[2]
  end
  return self.m_storageRestNumber
end

function ItemSpread:GetStorageRestNumber()
  return self.m_storageRestNumber
end

function ItemSpread:GetSpreadCount()
  return self.m_spreadCount
end

function ItemSpread:GetState()
  return self.m_state
end

function ItemSpread:GetStartTimer()
  return self.m_startTimer
end

function ItemSpread:GetCode()
  if self.m_itemModel ~= nil then
    return self.m_itemModel:GetCode()
  end
  return nil
end

function ItemSpread:GetModel()
  return self.m_itemModel
end

function ItemSpread:IsDisposable()
  return self.m_itemRecoveryDuration == nil
end

function ItemSpread:IsRecyclable()
  return self.m_itemRecoveryDuration and self.m_itemRecoveryDuration >= 0
end

function ItemSpread:GetTimerAmount()
  if self.m_startTimer < 0 then
    return 1
  end
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  return self:_GetTimerAmount(elapsedTime)
end

function ItemSpread:GetNextTimerAmount()
  if self.m_startTimer < 0 then
    return 1
  end
  local nextElapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer + 1
  return self:_GetTimerAmount(nextElapsedTime)
end

function ItemSpread:_GetTimerAmount(elapsedTime)
  local duration = self:GetTimerDuration()
  return math.min(elapsedTime / duration, 1)
end

function ItemSpread:GetTimerDuration()
  local result
  if self.m_state == ItemSpreadState.Initializing then
    result = self.m_initDuration
  elseif self.m_state == ItemSpreadState.Opening then
    result = self:GetOpenDuration()
  elseif self.m_state == ItemSpreadState.Opened then
    if self.m_storageRestNumber == 0 and self.m_storageRecoveryDuration ~= 0 then
      result = self.m_storageRecoveryDuration
    else
      result = self.m_itemRecoveryDuration
    end
  end
  if not result then
    result = 1
    Log.Error("ItemSpread:GetTimerDuration error " .. self.m_itemModel:GetType() .. " " .. self.m_state)
  end
  return result
end

function ItemSpread:GetSpeedUpCost()
  local speedUpCost = GM.TutorialModel:GetForceSkipCost()
  if speedUpCost ~= nil then
    return speedUpCost
  end
  if self.m_startTimer < 0 then
    return 0
  end
  return ItemUtility.GetSpeedUpCost(self.m_startTimer, self:GetTimerDuration())
end

function ItemSpread:IsChestUsedOnce()
  return self.m_openDuration ~= nil and self.m_itemRestNumber ~= self.m_itemMaxNumber
end

function ItemSpread:GenerateItemCode()
  if self:_IsBalloonSpread() then
    local code, finished = self:_GetBalloonSpreadItem()
    self.m_spreadCount = self.m_spreadCount + 1
    if finished then
      self.m_itemRestNumber = 0
    end
    return code
  end
  local luckyProduceType, spreadType = GM.LuckyProduceModel:TryProduceLuckyItem(self.m_itemModel:GetType(), self:GetGameMode())
  if luckyProduceType ~= nil then
    local code, originalCode, levelSpan = self:_GetDoubleEnergyCode(luckyProduceType)
    return code, originalCode, levelSpan, spreadType
  end
  self.m_spreadCount = self.m_spreadCount + 1
  if not self.m_itemModel:GetBoardModel():IsInAccelerating(self.m_itemModel) then
    self.m_itemRestNumber = self.m_itemRestNumber - 1
  end
  self:UpdatePerSecond()
  local code, originalCode, levelSpan, isExtraToolItem, spreadType = self:_GenerateItemCode()
  if isExtraToolItem then
    self.m_spreadCount = self.m_spreadCount - 1
    if not self.m_itemModel:GetBoardModel():IsInAccelerating(self.m_itemModel) then
      self.m_itemRestNumber = self.m_itemRestNumber + 1
    end
  end
  self.event:Call(ItemSpreadEventType.StateChanged)
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  if self.m_state == ItemSpreadState.Opened and self.m_itemRestNumber == 0 and self.m_storageRestNumber == 0 and self.m_storageRecoveryDuration ~= 0 and self.m_storageRecoveryDuration > 1200 then
    GM.NotificationModel:TryPopWindow(NotificationScene.ItemCooldown)
  end
  if self.m_state == ItemSpreadState.Opened and self.m_itemRestNumber <= 0 then
    local itemType = self.m_itemModel and self.m_itemModel:GetType() or nil
    if 0 >= self.m_storageRestNumber and self.m_storageRecoveryDuration and 0 < self.m_storageRecoveryDuration then
      GM.BIManager:LogAction(EBIType.ItemCD, {
        i = itemType,
        cd = self.m_storageRecoveryDuration,
        lcd = 1
      }, map)
    elseif 0 < self.m_storageRestNumber and self.m_itemRecoveryDuration and 0 < self.m_itemRecoveryDuration then
      GM.BIManager:LogAction(EBIType.ItemCD, {
        i = itemType,
        cd = self.m_itemRecoveryDuration,
        lcd = 0
      }, map)
    end
  end
  return code, originalCode, levelSpan, spreadType
end

function ItemSpread:_GenerateItemCode()
  if self:GetGameMode() == EGameMode.NoCDTrain and self.m_weightType == ItemSpreadWeightType.RandomSequnce and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BingoProBalance) then
    return self:_GenerateItemCodeBingoMode()
  end
  local code = GM.TutorialModel:GetForceSpreadItemCode()
  if code ~= nil then
    return code
  end
  local code, originCode, levelSpan = self:_TrySpreadFromCompensation()
  if code ~= nil then
    return code, originCode, levelSpan
  end
  local itemType = self.m_itemModel:GetType()
  if itemType == ItemType.EnergyBox and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.EboxLuckySpread) then
    local id = self.m_itemModel:GetId()
    if self.m_spreadCount == 1 or GM.ItemFixedSpreadModel:HasItemSequence(id) then
      return GM.ItemFixedSpreadModel:FindNextGenerateItemCodeById(id, itemType)
    end
  end
  if itemType == ItemType.ToolBox01 or itemType == ItemType.ToolBox02 then
    self:TryUpdateToolBoxConfig(itemType)
    if GM.ConfigModel:IsTboxToolHighLevelControlOpen() then
      return self:_GenerateHighLevelToolItemCode()
    else
      return self:_GenerateToolItemCode()
    end
  end
  if StringUtil.StartWith(itemType, ItemCodePrefix.HugeToolBox) then
    return self:_GenerateHugeToolItemCode()
  end
  if itemType == ItemType.ItemBox01 or itemType == ItemType.ItemBox02 or itemType == ItemType.ItemBoxMin1 or itemType == ItemType.ItemBoxSunshine or itemType == ItemType.ItemBoxSunshinePro then
    local code, spreadType = self:_GenerateItemBoxSpreadItem()
    return code, nil, nil, nil, spreadType
  end
  if itemType == ItemType.ItemPickBox1 or itemType == ItemType.ItemPickBox2 then
    local code, spreadType = self:_GenerateItemPickBoxSpreadItem()
    return code, nil, nil, nil, spreadType
  end
  if StringUtil.StartWith(itemType, ItemCodePrefix.Blind) then
    return ItemSpread.GenerateBlindSpreadItem(self.m_codeWeightPairs)
  end
  local canLevelDown = false
  local spreadType
  if self.m_weightType == ItemSpreadWeightType.List then
    local item = table.remove(self.m_codeWeightPairs, 1)
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    code = item.Code
  elseif self.m_weightType == ItemSpreadWeightType.RandomSequnce then
    if self.m_bUseLuckySpread and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.LuckySecondaryProduce) then
      code, spreadType = GM.ItemLuckySpreadModel:GenerateItemCode(self.m_itemModel:GetType())
    else
      code = GM.ItemFixedSpreadModel:GenerateItemCode(self.m_itemModel:GetType())
      canLevelDown = true
    end
  elseif self.m_weightType == ItemSpreadWeightType.NotItem then
    local com = self.m_itemModel:GetComponent(ItemBattery)
    if com then
      com:OnSpread()
    end
    return
  else
    code = Table.ListWeightSelectOne(self.m_codeWeightPairs).Code
  end
  local originalCode, levelSpan, orderRequireMap
  code, originalCode, levelSpan, orderRequireMap = self:_GetDoubleEnergyCode(code)
  if canLevelDown and orderRequireMap ~= nil then
    code, originalCode, levelSpan = self:_LevelDownConsiderBoardItems(code, originalCode, levelSpan, orderRequireMap)
  end
  return code, originalCode, levelSpan, nil, spreadType
end

function ItemSpread:_GenerateItemCodeBingoMode()
  local itemType = self.m_itemModel:GetType()
  local maxSpan = self:GetMultiEnergyLevelSpan()
  local cacheCode, cacheNum = GM.ItemFixedSpreadModel:GetCacheItemInfo(itemType)
  if 0 < cacheNum then
    local code, originCode, span = self:_GetDoubleEnergyCode(cacheCode)
    local realSpan = span or 0
    while 0 < realSpan and cacheNum < math.floor(2 ^ realSpan + 0.1) do
      realSpan = realSpan - 1
    end
    if realSpan ~= span then
      code = cacheCode
      for i = 1, realSpan do
        code = GM.ItemDataModel:GetModelConfig(code).MergedType
      end
    end
    GM.ItemFixedSpreadModel:UpdateItemCache(itemType, cacheCode, math.floor(cacheNum - 2 ^ realSpan + 0.1))
    Log.Debug("\231\188\147\229\173\152\229\143\150\229\135\186" .. cacheCode .. "\229\141\135\231\186\167" .. realSpan .. "\229\137\169\228\189\153" .. cacheNum - 2 ^ realSpan)
    return code, cacheCode ~= code and cacheCode or nil, realSpan
  end
  local code, spreadType
  if self.m_bUseLuckySpread and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.LuckySecondaryProduce) then
    code, spreadType = GM.ItemLuckySpreadModel:GenerateItemCode(itemType)
  else
    code = GM.ItemFixedSpreadModel:GenerateItemCode(itemType)
  end
  local originalCode, levelSpan
  code, originalCode, levelSpan = self:_GetDoubleEnergyCode(code)
  levelSpan = levelSpan or 0
  if maxSpan > levelSpan then
    originalCode = originalCode or code
    GM.ItemFixedSpreadModel:UpdateItemCache(itemType, originalCode, math.floor(2 ^ maxSpan - 2 ^ levelSpan + 0.1))
    Log.Debug("\231\188\147\229\173\152" .. originalCode .. "\229\141\135\231\186\167" .. levelSpan .. "\231\188\147\229\173\152" .. 2 ^ maxSpan - 2 ^ levelSpan)
  end
  return code, originalCode ~= code and originalCode or nil, levelSpan, nil, spreadType
end

function ItemSpread.ToolItemFilter(item)
  local type = item:GetType()
  return string.match(string.sub(type, 1, 4), ItemCodePrefix.Tool) ~= nil
end

function ItemSpread:_GenerateToolItemCode()
  local chains = self:_CalcToolNumByChain()
  local randomList, count, chain = self:_CalcToolCodeRandomList(chains)
  if 2 <= count and 1 < #randomList then
    return Table.ListWeightSelectOne(randomList).Code
  end
  local insufficientNeeds = GM.MapDataModel:GetInsufficientNeedTools()
  local candidateChains = {}
  if 0 < #insufficientNeeds and (count == 0 or count == 1 and not Table.ListContain(insufficientNeeds, chain)) then
    randomList = {}
    candidateChains = insufficientNeeds
  else
    for chainId, num in pairs(chains) do
      if num == 0 then
        candidateChains[#candidateChains + 1] = chainId
      end
    end
  end
  for _, chainId in ipairs(candidateChains) do
    local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
    for level = 1, maxLevel - 1 do
      local code = ItemUtility.GetItemCode(chainId, level)
      if self.m_codeWeightMap[code] then
        randomList[#randomList + 1] = {
          Code = code,
          Weight = self.m_codeWeightMap[code]
        }
      end
    end
  end
  if 0 < #randomList then
    return Table.ListWeightSelectOne(randomList).Code
  end
  Log.Error("ItemSpread:_GenerateToolItemCode failed")
  return "tl1_1"
end

function ItemSpread:_GenerateHighLevelToolItemCode()
  local chains = self:_CalcToolNumByChain()
  if self.m_tBoxExtraSpreadTime < 1 and not Table.IsEmpty(self.m_tBoxExtraSpreadList) then
    local randomExtraItemList = {}
    for id, num in pairs(chains) do
      if 0 < num then
        local maxLevel = GM.ItemDataModel:GetChainMaxLevel(id)
        local minSpreadLevel = 1
        for i = 1, maxLevel do
          local code = ItemUtility.GetItemCode(id, i)
          if self.m_codeWeightMap[code] then
            minSpreadLevel = i
            break
          end
        end
        local minItemNum = 2 ^ (minSpreadLevel - 1)
        local remainNum = num % minItemNum
        if remainNum ~= 0 then
          for i = minSpreadLevel - 1, 1, -1 do
            if Table.Contain(self.m_tBoxExtraSpreadList, "tl_" .. i) and minItemNum - remainNum >= 2 ^ (i - 1) then
              randomExtraItemList[#randomExtraItemList + 1] = {
                Code = ItemUtility.GetItemCode(id, i),
                Weight = 10
              }
              if (minItemNum - remainNum) % 2 ^ (i - 1) == 0 then
                break
              end
            end
          end
        end
      end
    end
    if 0 < #randomExtraItemList then
      self.m_tBoxExtraSpreadTime = 1
      return Table.ListWeightSelectOne(randomExtraItemList).Code, nil, nil, true
    end
  end
  for id, num in pairs(chains) do
    if 0 < num then
      local maxLevel = GM.ItemDataModel:GetChainMaxLevel(id)
      local minSpreadLevel = 1
      for i = 1, maxLevel do
        local code = ItemUtility.GetItemCode(id, i)
        if self.m_codeWeightMap[code] then
          minSpreadLevel = i
          break
        end
      end
      chains[id] = num - num % 2 ^ (minSpreadLevel - 1)
    end
  end
  local randomList, count = self:_CalcToolCodeRandomList(chains)
  if 1 <= count and 0 < #randomList then
    return Table.ListWeightSelectOne(randomList).Code
  end
  local insufficientNeeds = GM.MapDataModel:GetInsufficientNeedTools()
  local candidateChains = {}
  randomList = {}
  if 0 < #insufficientNeeds then
    candidateChains = insufficientNeeds
  else
    for chainId, num in pairs(chains) do
      if num == 0 then
        candidateChains[#candidateChains + 1] = chainId
      end
    end
  end
  for _, chainId in ipairs(candidateChains) do
    local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
    for level = 1, maxLevel - 1 do
      local code = ItemUtility.GetItemCode(chainId, level)
      if self.m_codeWeightMap[code] then
        randomList[#randomList + 1] = {
          Code = code,
          Weight = self.m_codeWeightMap[code]
        }
      end
    end
  end
  if 0 < #randomList then
    return Table.ListWeightSelectOne(randomList).Code
  end
  Log.Error("ItemSpread:_GenerateHighLevelToolItemCode failed")
  return "tl1_1"
end

function ItemSpread:_GenerateHugeToolItemCode()
  local randomList = {}
  local insufficientNeeds = GM.MapDataModel:GetInsufficientNeedTools()
  for _, chainId in ipairs(insufficientNeeds) do
    local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
    local code = ItemUtility.GetItemCode(chainId, maxLevel)
    if self.m_codeWeightMap[code] then
      randomList[#randomList + 1] = {
        Code = code,
        Weight = self.m_codeWeightMap[code]
      }
    end
  end
  if Table.IsEmpty(randomList) then
    randomList = self.m_codeWeightPairs
  end
  if 0 < #randomList then
    return Table.ListWeightSelectOne(randomList).Code
  end
  Log.Error("ItemSpread:_GenerateHugeToolItemCode failed")
  return "tl1_5"
end

function ItemSpread:_CalcToolNumByChain()
  local chains = {
    [EPropertyType.Tool1] = 0,
    [EPropertyType.Tool2] = 0,
    [EPropertyType.Tool3] = 0,
    [EPropertyType.Tool4] = 0
  }
  if self.m_itemModel:GetBoardModel():IsToolBoxCollect() then
    for type, _ in pairs(chains) do
      local num = GM.PropertyDataManager:GetPropertyNum(type)
      local _, frac = math.modf(num)
      chains[type] = frac * 16
    end
  else
    local boardModel = self.m_itemModel:GetBoardModel()
    local items = boardModel:GetItemsCount(ItemSpread.ToolItemFilter)
    for code, num in pairs(items) do
      local chainId = GM.ItemDataModel:GetChainId(code)
      local level = GM.ItemDataModel:GetChainLevel(code)
      chains[chainId] = chains[chainId] + 2 ^ (level - 1) * num
      chains[chainId] = chains[chainId] % 16
    end
  end
  return chains
end

function ItemSpread:_CalcToolCodeRandomList(chains)
  local randomList = {}
  local count, chain = 0
  for id, num in pairs(chains) do
    if 0 < num then
      count = count + 1
      chain = id
      local level = 1
      while 2 ^ (level - 1) <= 16 - num do
        local code = ItemUtility.GetItemCode(id, level)
        if self.m_codeWeightMap[code] then
          randomList[#randomList + 1] = {
            Code = code,
            Weight = self.m_codeWeightMap[code]
          }
        end
        level = level + 1
      end
    end
  end
  return randomList, count, chain
end

function ItemSpread._GetUsableItemsInOrder(bSplitLevel, minScore, maxScore, orderList)
  local randomList = {}
  local randomListMax = {}
  local itemCodeList = {}
  local itemCodeList2 = {}
  local itemRequireList = {}
  local chainId, score, chainLevel, selectableItemCode, selectableItemScore, scoreList
  local orders = orderList or GM.MainBoardModel:GetOrders()
  local targetLevel
  for _, order in pairs(orders) do
    local requirements = order:GetRequirements()
    for _, itemCode in ipairs(requirements) do
      itemRequireList[itemCode] = 1 + (itemRequireList[itemCode] or 0)
    end
  end
  GM.MainBoardModel:FilterItems(function(itemModel)
    local itemCode = itemModel:GetType()
    if itemRequireList[itemCode] ~= nil then
      itemRequireList[itemCode] = itemRequireList[itemCode] - 1
    end
    return false
  end)
  local backup = {
    score = math.maxinteger
  }
  local targetScore
  if minScore ~= nil and maxScore ~= nil then
    targetScore = (minScore + maxScore) / 2
  else
    targetScore = (minScore or 0) + (maxScore or 0)
  end
  for itemCode, nRequireNum in pairs(itemRequireList) do
    if 0 < nRequireNum then
      chainId = GM.ItemDataModel:GetChainId(itemCode)
      chainLevel = GM.ItemDataModel:GetChainLevel(itemCode)
      score, scoreList = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCode)
      if score then
        targetLevel = bSplitLevel and chainLevel - 1 or chainLevel
        for i = 1, targetLevel do
          selectableItemCode = ItemUtility.GetItemCode(chainId, i)
          selectableItemScore = scoreList and scoreList[selectableItemCode] or nil
          if itemCodeList[selectableItemCode] == nil and selectableItemScore then
            if (maxScore == nil or maxScore >= selectableItemScore) and (minScore == nil or minScore <= selectableItemScore) then
              randomList[#randomList + 1] = {
                c = chainId,
                t = selectableItemCode,
                s = selectableItemScore
              }
              itemCodeList[selectableItemCode] = true
            elseif math.abs(selectableItemScore - targetScore) < math.abs(backup.score - targetScore) then
              backup.code = selectableItemCode
              backup.score = selectableItemScore
            end
          end
        end
        if bSplitLevel and itemCodeList2[itemCode] == nil then
          if (maxScore == nil or maxScore >= score) and (minScore == nil or minScore <= score) then
            randomListMax[#randomListMax + 1] = {
              c = chainId,
              t = itemCode,
              s = score
            }
            itemCodeList2[itemCode] = true
          elseif math.abs(score - targetScore) < math.abs(backup.score - targetScore) then
            backup.code = itemCode
            backup.score = score
          end
        end
      end
    end
  end
  return randomList, randomListMax, backup.code
end

function ItemSpread._GetAllBelongToScoreItemsInOrder(minScore, maxScore, orderList)
  local unfinishedItemList = {}
  local finishedItemList = {}
  local unfinishedItemCodesFlag = {}
  local finishedItemCodesFlag = {}
  local itemRequireList = {}
  local _, chainId, scoreList
  local orders = orderList or GM.MainBoardModel:GetOrders()
  for _, order in pairs(orders) do
    local requirements = order:GetRequirements()
    for _, itemCode in ipairs(requirements) do
      itemRequireList[itemCode] = 1 + (itemRequireList[itemCode] or 0)
    end
  end
  GM.MainBoardModel:FilterItems(function(itemModel)
    local itemCode = itemModel:GetType()
    if itemRequireList[itemCode] ~= nil then
      itemRequireList[itemCode] = itemRequireList[itemCode] - 1
    end
    return false
  end)
  local backup = {
    score = math.maxinteger
  }
  local targetScore
  if minScore ~= nil and maxScore ~= nil then
    targetScore = (minScore + maxScore) / 2
  else
    targetScore = (minScore or 0) + (maxScore or 0)
  end
  for itemCode, nRequireNum in pairs(itemRequireList) do
    local targetItemList = 0 < nRequireNum and unfinishedItemList or finishedItemList
    local targetFlagList = 0 < nRequireNum and unfinishedItemCodesFlag or finishedItemCodesFlag
    chainId = GM.ItemDataModel:GetChainId(itemCode)
    _, scoreList = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCode)
    if scoreList then
      for orderItemCode, score in pairs(scoreList) do
        if GM.ItemDataModel:GetChainId(orderItemCode) == chainId and not targetFlagList[orderItemCode] then
          if (maxScore == nil or score <= maxScore) and (minScore == nil or minScore <= score) then
            targetItemList[#targetItemList + 1] = {
              c = chainId,
              t = orderItemCode,
              s = score
            }
            targetFlagList[orderItemCode] = true
          elseif math.abs(score - targetScore) < math.abs(backup.score - targetScore) then
            backup.code = orderItemCode
            backup.score = score
          end
        end
      end
    end
  end
  return unfinishedItemList, finishedItemList, backup.code
end

function ItemSpread:_GenerateItemBoxSpreadItem()
  local orderList = Table.ShallowCopy(GM.MainBoardModel:GetOrders())
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.IboxEventOrder) then
    local activityOrdersList = GM.ActivityManager:GetOngoingOrders()
    Table.ListAppend(orderList, activityOrdersList)
  end
  local randomList = ItemSpread._GetUsableItemsInOrder(false, nil, nil, orderList)
  local itemBoxMaxType = GM.SystemConfigModel:GetConfig(SystemConfigKey.ItemBoxMaxType) or 1
  if itemBoxMaxType <= #self.m_spreadItemBoxChain then
    local allItemBoxChainContained
    for k, v in pairs(self.m_spreadItemBoxChain) do
      allItemBoxChainContained = false
      for i = 1, #randomList do
        if randomList[i].c == v then
          allItemBoxChainContained = true
          break
        end
      end
      if not allItemBoxChainContained then
        table.remove(self.m_spreadItemBoxChain, k)
        break
      end
    end
    if allItemBoxChainContained then
      local index = 1
      while index <= #randomList do
        if not Table.Contain(self.m_spreadItemBoxChain, randomList[index].c) then
          table.remove(randomList, index)
        else
          index = index + 1
        end
      end
    end
  end
  table.sort(randomList, function(a, b)
    return a.s < b.s
  end)
  local resultItem
  local selectedScore = Table.ListWeightSelectOne(self.m_codeWeightPairs).Code
  local nTargetScore = tonumber(string.sub(selectedScore, string.find(selectedScore, "_") + 1))
  if nTargetScore then
    resultItem = self:_GetTargetItemRecursive(randomList, randomList, nTargetScore)
  end
  local boardSpreadType
  if resultItem then
    local spreadItemChain = resultItem.rootChainId or resultItem.c
    if not Table.Contain(self.m_spreadItemBoxChain, spreadItemChain) then
      self.m_spreadItemBoxChain[#self.m_spreadItemBoxChain + 1] = spreadItemChain
    end
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BoxLuckyTip) then
      local realScore = resultItem.s
      boardSpreadType = 1 <= realScore and BoardSpreadType.Lucky or nil
    end
  end
  return resultItem and resultItem.t or "gold_2", boardSpreadType
end

function ItemSpread:_GenerateItemPickBoxSpreadItem()
  local pdCode = self.m_itemModel:GetComponent(ItemPick):GetChoosedCode()
  local selectedScore = Table.ListWeightSelectOne(self.m_codeWeightPairs).Code
  local nTargetScore = tonumber(string.sub(selectedScore, string.find(selectedScore, "_") + 1))
  local code, score = ItemRewardAquire.GetRewardItemCodeByPdAndScore(pdCode, nTargetScore)
  local boardSpreadType
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BoxLuckyTip) then
    boardSpreadType = 1 <= score and BoardSpreadType.Lucky or nil
  end
  return code or "gold_2", boardSpreadType
end

function ItemSpread:_GetTargetItemRecursive(selectableItemList, allItemList, nTargetScore)
  local resultItem = ItemSpread._GetItemNearTargetScore(selectableItemList, nTargetScore)
  if resultItem == nil then
    local upperSelectableItemList = {}
    local upperAllItemList = {}
    local selectableCodeRecordList = {}
    for _, v in pairs(allItemList) do
      local config = GM.ItemDataModel:GetModelConfig(v.t)
      local generators = config.Generators ~= nil and GM.ItemDataModel:GetItemGenerators(v.t) or nil
      if generators ~= nil then
        local includedItems, excludedItems = {}, {}
        for _, generator in pairs(generators) do
          local itemConfig = GM.ItemDataModel:GetModelConfig(generator)
          local swallowCfg = itemConfig and (itemConfig.Swallow_Weight1 or itemConfig.CostItem)
          if not Table.IsEmpty(swallowCfg) then
            if GM.MainBoardModel:GetItemLayerCount(generator) > 0 then
              excludedItems[#excludedItems + 1] = generator
            end
            for _, cfg in pairs(swallowCfg) do
              if 0 >= GM.MainBoardModel:GetItemLayerCount(cfg.Code) then
                includedItems[#includedItems + 1] = cfg.Code
              end
            end
          end
        end
        Table.ListAppend(generators, includedItems)
        for _, generator in pairs(generators) do
          if not StringUtil.StartWith(generator, ItemCodePrefix.MainGenerator) and not Table.Contain(excludedItems, generator) then
            local chainId = GM.ItemDataModel:GetChainId(generator)
            if chainId ~= v.c then
              local chainLevel = GM.ItemDataModel:GetChainLevel(generator)
              upperAllItemList[#upperAllItemList + 1] = {
                c = chainId,
                t = generator,
                rootChainId = v.rootChainId or v.c
              }
              for i = 1, chainLevel do
                local selectableItemCode = ItemUtility.GetItemCode(chainId, i)
                local score = GM.MainBoardModel:GetItemScoreByUnlockGen(selectableItemCode)
                if selectableCodeRecordList[selectableItemCode] == nil and score then
                  upperSelectableItemList[#upperSelectableItemList + 1] = {
                    c = chainId,
                    t = selectableItemCode,
                    s = score,
                    rootChainId = v.rootChainId or v.c
                  }
                  selectableCodeRecordList[selectableItemCode] = true
                end
              end
            end
          end
        end
      end
    end
    if not Table.IsEmpty(upperAllItemList) then
      resultItem = self:_GetTargetItemRecursive(upperSelectableItemList, upperAllItemList, nTargetScore)
    end
  end
  return resultItem
end

function ItemSpread._GetItemNearTargetScore(itemList, nTargetScore)
  if Table.IsEmpty(itemList) or nTargetScore == nil then
    return
  end
  table.sort(itemList, function(a, b)
    return a.s < b.s
  end)
  local resultItem
  if #itemList == 1 then
    if itemList[1].s - nTargetScore < 0.5 then
      resultItem = itemList[1]
    end
  elseif 1 < #itemList then
    for i = 1, #itemList - 1 do
      if nTargetScore >= itemList[i].s and nTargetScore < itemList[i + 1].s then
        if nTargetScore - itemList[i].s <= itemList[i + 1].s - nTargetScore or itemList[i + 1].s - nTargetScore > 0.5 then
          resultItem = itemList[i]
          break
        end
        resultItem = itemList[i + 1]
        break
      elseif nTargetScore < itemList[i].s then
        if itemList[i].s - nTargetScore < 0.5 then
          resultItem = itemList[i]
        end
        break
      elseif i == #itemList - 1 then
        resultItem = itemList[i + 1]
        break
      end
    end
  end
  return resultItem
end

function ItemSpread.GenerateBlindSpreadItem(codeWeightPairs)
  local tmpCodeWeightPairs = Table.ShallowCopy(codeWeightPairs)
  local target, index, code
  while not Table.IsEmpty(tmpCodeWeightPairs) do
    target, index = Table.ListWeightSelectOne(tmpCodeWeightPairs)
    code = target.Code
    table.remove(tmpCodeWeightPairs, index)
    if StringUtil.StartWith(code, "range_") then
      code = ItemSpread.TryGenerateItemCodeByRange(code)
      if code ~= nil then
        return code
      end
    else
      return code
    end
  end
  return "gold_3"
end

function ItemSpread.TryGenerateItemCodeByRange(rangeCode, computeScoreRangeFunc, allowExceedOrderLevel, bBackup)
  local targetScore = rangeCode ~= nil and tonumber(string.sub(rangeCode, string.find(rangeCode, "_") + 1)) or 0
  local curComputeScoreRangeFunc = computeScoreRangeFunc or function(score)
    local minScore = math.max(score - 0.5, 0)
    local maxScore = score + 0.5
    return minScore, maxScore
  end
  local minScore, maxScore = curComputeScoreRangeFunc(targetScore)
  
  local function checkScoreFunc(itemScore)
    if itemScore ~= nil then
      return itemScore >= minScore and itemScore <= maxScore
    end
  end
  
  local orderList = Table.ShallowCopy(GM.MainBoardModel:GetOrders())
  local randomListFirst, randomListSecond, backupCode
  if allowExceedOrderLevel then
    randomListFirst, randomListSecond, backupCode = ItemSpread._GetAllBelongToScoreItemsInOrder(minScore, maxScore, orderList)
  else
    randomListFirst, randomListSecond, backupCode = ItemSpread._GetUsableItemsInOrder(true, minScore, maxScore, orderList)
  end
  if not Table.IsEmpty(randomListFirst) then
    return Table.ListRandomSelectOne(randomListFirst).t
  elseif not Table.IsEmpty(randomListSecond) then
    return Table.ListRandomSelectOne(randomListSecond).t
  elseif bBackup then
    return backupCode
  else
    return nil
  end
end

function ItemSpread:IsLockedBySwallow()
  local itemSwallow = self.m_itemModel:GetComponent(ItemSwallow)
  return itemSwallow and not itemSwallow:IsSwallowOver()
end

function ItemSpread:_TrySpreadSunshineRewardItem()
  local boardModel = self.m_itemModel:GetBoardModel()
  local empty = boardModel:GetEmptyPositionCount()
  if empty == nil or empty <= 0 then
    self:_NotifySpreadFailed(false, SpreadFailedReason.BoardFull)
    return false
  end
  local nCostEnergy = 0
  local newItemCode, spreadFinish
  local sunshineId = self.m_itemModel:GetSunshineId()
  local sunshineModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  local sunshineRewardItem = sunshineModel:GetRewardBoxById(sunshineId)
  if sunshineRewardItem == nil then
    return false
  end
  local spreadType
  newItemCode, spreadFinish = sunshineRewardItem:GenerateItemFromRewardList(self.m_itemModel:GetType())
  local position
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoNearNew) then
    position = boardModel:FindEmptyPositionInAttach(newItemCode)
  end
  if position == nil then
    position = boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
  end
  if newItemCode ~= nil then
    boardModel:SpreadItem(self.m_itemModel, position, newItemCode, true, nil, self:_GetNewItemCost(nCostEnergy, newItemCode), nil, spreadType, spreadFinish)
  end
  if spreadFinish then
    boardModel:RemoveItem(self.m_itemModel)
    boardModel.event:Call(BoardEventType.CollapseItem, {
      Source = self.m_itemModel
    })
    EventDispatcher.DispatchEvent(EEventType.ItemCollapse, {
      Source = self.m_itemModel
    })
  end
  return true
end

function ItemSpread:_TrySpread(isAuto)
  if self:IsLockedBySwallow() then
    return false
  end
  if self.m_itemModel:GetBoardModel():IsBoardFull() and self.m_weightType ~= ItemSpreadWeightType.NotItem then
    self:_NotifySpreadFailed(isAuto, SpreadFailedReason.BoardFull)
    return false
  end
  if self.m_state == ItemSpreadState.Closed then
    self:_NotifySpreadFailed(isAuto, SpreadFailedReason.ItemClosed)
    return false
  end
  if self.m_state == ItemSpreadState.Opening then
    self:_NotifySpreadFailed(isAuto, SpreadFailedReason.ItemOpening)
    return false
  end
  if self.m_state == ItemSpreadState.Initializing or self.m_itemRestNumber == 0 then
    self:_NotifySpreadFailed(isAuto, SpreadFailedReason.ItemRecharging)
    return false
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  if GameConfig.IsTestMode() and boardModel:GetGameMode() == EGameMode.Hunt and self.m_weightType == ItemSpreadWeightType.RandomSequnce then
    local spreadCalNum = 0
    for _, cfg in pairs(self.m_codeWeightPairs) do
      spreadCalNum = spreadCalNum + cfg.Weight
    end
    if spreadCalNum ~= self.m_itemMaxNumber then
      Log.Assert(false, "item_config or HuntItemModelConfig Error!!! \229\165\150\229\138\177\232\174\161\231\174\151\231\187\147\230\158\156\228\184\142\233\133\141\231\189\174\231\187\147\230\158\156\228\184\141\231\155\184\231\173\137! type is " .. self.m_itemModel.m_type)
    end
  end
  local nCostEnergy, energyPropertyType, maxSpan = 0
  if not isAuto and self.m_costEnergy then
    energyPropertyType = self.m_itemModel:GetEnergyPropertyType()
    local energyModel = EnergyModel.GetCurrentEnergyModel(energyPropertyType)
    nCostEnergy, maxSpan = self:_GetCostEnergy()
    if not energyModel:HasEnoughEnergy(nCostEnergy) then
      boardModel.event:Call(BoardEventType.LackSpreadEnergy)
      return false
    end
  end
  local position, newItemCode, originalCode, levelSpan, boardSpreadType
  if not isAuto or self:IsAutoSpreadFullBoard() then
    newItemCode, originalCode, levelSpan, boardSpreadType = self:GenerateItemCode()
    position = boardModel:FindEmptyPositionInAttach(newItemCode)
    if not position then
      position = boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
    end
  else
    position = boardModel:FindEmptyPositionInCircleOrder(self.m_itemModel:GetPosition())
    if position then
      newItemCode, originalCode, levelSpan, boardSpreadType = self:GenerateItemCode()
    end
  end
  if position == nil and self.m_weightType ~= ItemSpreadWeightType.NotItem then
    self:_NotifySpreadFailed(isAuto, SpreadFailedReason.BoardFull)
    return false
  end
  local itemHuntAnim = self.m_itemModel:GetComponent(ItemHuntAnim)
  if newItemCode ~= nil then
    boardModel:SpreadItem(self.m_itemModel, position, newItemCode, true, originalCode, self:_GetNewItemCost(nCostEnergy, newItemCode), nil, boardSpreadType)
    if itemHuntAnim and not isAuto then
      EventDispatcher.DispatchEvent(EEventType.HuntAnimItemClicked, self.m_itemModel)
    end
  end
  if nCostEnergy ~= 0 then
    if originalCode and levelSpan and originalCode ~= newItemCode then
      nCostEnergy = math.modf(2 ^ levelSpan)
    else
      nCostEnergy = 1
    end
    nCostEnergy = newItemCode ~= originalCode and nCostEnergy or 1
    local biMap = self:GetGameMode() == EGameMode.NoCDTrain and EGameMode.Main or nil
    local ext
    if maxSpan ~= 0 and levelSpan ~= maxSpan then
      ext = "de_switch:" .. math.floor(2 ^ maxSpan)
    end
    if self:GetGameMode() == EGameMode.NoCDTrain then
      if not StringUtil.IsNilOrEmpty(ext) then
        ext = ext .. ";"
      else
        ext = ""
      end
      ext = ext .. "map:bingo"
    end
    GM.PropertyDataManager:Consume(energyPropertyType, nCostEnergy, EBIType.SpreadItem, self.m_itemModel:GetCode(), biMap, ext)
    EnergyModel.OnEnergyConsumed(self.m_itemModel, nCostEnergy, self:GetGameMode(), position)
    GM.LuckyProduceModel:OnEnergyConsumed(self:GetGameMode(), nCostEnergy)
  end
  if self:_CanTransform() then
    local itemTransform = self.m_itemModel:GetComponent(ItemTransform)
    Log.Assert(itemTransform, self.m_itemModel:GetType() .. " Transform \233\133\141\231\189\174\230\156\137\232\175\175")
    if itemHuntAnim then
      itemTransform:HuntPdTransform(itemHuntAnim.Index)
      return false
    else
      local bTransform = itemTransform:Transform(true)
      if bTransform then
        return false
      end
    end
  end
  if self.m_itemRestNumber == 0 then
    local itemSwallow = self.m_itemModel:GetComponent(ItemSwallow)
    if itemSwallow and itemSwallow:WillSwallow() then
      itemSwallow:OnCostSpreadFinish()
      self.event:Call(ItemSpreadEventType.StateChanged)
    elseif self:IsDisposable() then
      GM.ItemFixedSpreadModel:ClearEboxSequence(self.m_itemModel:GetId())
      boardModel:RemoveItem(self.m_itemModel)
      boardModel.event:Call(BoardEventType.CollapseItem, {
        Source = self.m_itemModel
      })
      EventDispatcher.DispatchEvent(EEventType.ItemCollapse, {
        Source = self.m_itemModel
      })
      return false
    elseif not self:IsRecyclable() then
      self.m_state = ItemSpreadState.OpenFinish
      self.m_startTimer = -1
      boardModel:SaveItemProperty(self.m_itemModel)
      self.event:Call(ItemSpreadEventType.StateChanged)
      return false
    end
  else
    local itemSwallow = self.m_itemModel:GetComponent(ItemSwallow)
    if itemSwallow and itemSwallow:WillCostItem() then
      itemSwallow:OnCostSpreadFinish()
      self.event:Call(ItemSpreadEventType.StateChanged)
    end
  end
  return true
end

function ItemSpread:_CanTransform()
  return self.m_transformNumber ~= nil and self.m_transformNumber == self.m_spreadCount
end

function ItemSpread:_NotifySpreadFailed(isAuto, reason)
  if isAuto then
    return
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.SpreadFailed, {
    Item = self.m_itemModel,
    Reason = reason
  })
  EventDispatcher.DispatchEvent(EEventType.VibrationHeavy)
end

function ItemSpread.CodeWeightPairsToString(codeWeightPairs)
  local data = ""
  for index, item in ipairs(codeWeightPairs) do
    data = data .. item.Code .. "-" .. item.Weight
    if index ~= #codeWeightPairs then
      data = data .. ";"
    end
  end
  return data
end

function ItemSpread:StringToItemBoxChainInfo(strInfo)
  local result
  if strInfo then
    result = StringUtil.Split(strInfo, ";")
  end
  return result
end

function ItemSpread:ItemBoxChainInfoToString()
  local result
  if not Table.IsEmpty(self.m_spreadItemBoxChain) then
    for i = 1, #self.m_spreadItemBoxChain do
      if result ~= nil then
        result = result .. ";" .. self.m_spreadItemBoxChain[i]
      else
        result = self.m_spreadItemBoxChain[i]
      end
    end
  end
  return result
end

function ItemSpread:_GetCostEnergy()
  local span = self:GetMultiEnergyLevelSpan()
  local energyCost = 2 ^ span
  return energyCost, span
end

function ItemSpread:GetCostEnergy()
  return self:_GetCostEnergy()
end

function ItemSpread:_GetNewItemCost(nCostEnergy, newItemCode)
  local itemType = self.m_itemModel:GetType()
  local cost
  if ItemUtility.IsItemRewardBoxType(itemType) then
    cost = {
      freeScore = self.m_itemModel:GetBoardModel():GetItemScoreByUnlockGen(newItemCode)
    }
  elseif self:IsDisposable() then
    local energy = nCostEnergy + self.m_itemModel.costEnergy / self.m_storageMaxNumber
    cost = {
      costEnergy = energy,
      freeScore = self.m_itemModel.freeScore / self.m_storageMaxNumber,
      shopGemCost = self.m_itemModel.shopGemCost / self.m_storageMaxNumber,
      bubbleGemCost = self.m_itemModel.bubbleGemCost / self.m_storageMaxNumber,
      energyToday = energy,
      createTime = GM.GameModel:GetServerTime()
    }
  else
    cost = {
      costEnergy = nCostEnergy,
      energyToday = nCostEnergy,
      createTime = GM.GameModel:GetServerTime()
    }
  end
  return cost
end

function ItemSpread:_GetDoubleEnergyCode(code)
  local itemConfig = GM.ItemDataModel:IsItemExist(code) and GM.ItemDataModel:GetModelConfig(code)
  if not itemConfig or not itemConfig.MergedType then
    return code
  end
  local levelSpan = self:GetMultiEnergyLevelSpan()
  if levelSpan <= 0 then
    return code
  end
  local doubleCode = itemConfig.MergedType
  local quadrupleCode
  if doubleCode then
    local doubleConfig = GM.ItemDataModel:GetModelConfig(doubleCode)
    quadrupleCode = doubleConfig.MergedType
  end
  local orderRequireMap = self:_GetOrderRequireItemCodeCountMap()
  local boardModel = self.m_itemModel:GetBoardModel()
  local originRequireCount = orderRequireMap[code] or 0
  local originStoreCount = boardModel:GetItemLayerCount(code) + boardModel:GetStoredItemCountByCode(code)
  if originRequireCount > originStoreCount then
    return code
  end
  local doubleRequireCount = orderRequireMap[doubleCode] or 0
  local doubleStoreCount = boardModel:GetItemLayerCount(doubleCode) + boardModel:GetStoredItemCountByCode(doubleCode)
  if doubleRequireCount > doubleStoreCount then
    return doubleCode, code, 1
  end
  if 1 < levelSpan and quadrupleCode then
    local quadrupleRequireCount = orderRequireMap[quadrupleCode] or 0
    local quadrupleStoreCount = boardModel:GetItemLayerCount(quadrupleCode) + boardModel:GetStoredItemCountByCode(quadrupleCode)
    if quadrupleRequireCount > quadrupleStoreCount then
      return quadrupleCode, code, 2
    end
    if levelSpan == 3 then
      itemConfig = GM.ItemDataModel:GetModelConfig(quadrupleCode)
      if itemConfig.MergedType then
        return itemConfig.MergedType, code, 3, orderRequireMap
      end
    end
    return quadrupleCode, code, 2, orderRequireMap
  end
  return doubleCode, code, 1, orderRequireMap
end

function ItemSpread:_GetOrderRequireItemCodeCountMap()
  local boardModel = self.m_itemModel:GetBoardModel()
  local orderRequireMap = Table.ShallowCopy(boardModel:GetOrderCodeRequireCount())
  local actRequireMap = GM.ActivityManager:GetOrderCodeStateMap()
  for code, count in pairs(actRequireMap) do
    orderRequireMap[code] = (orderRequireMap[code] or 0) + count
  end
  local bingoItemCodes
  for activityType, _ in pairs(BingoDefinition) do
    bingoItemCodes = GM.ActivityManager:GetModel(activityType):GetMapNeedOrderItemCodes()
    for code, count in pairs(bingoItemCodes or {}) do
      orderRequireMap[code] = (orderRequireMap[code] or 0) + count
    end
  end
  local arrSwallItems
  if boardModel.FilterItemsWithComponent then
    arrSwallItems = boardModel:FilterItemsWithComponent(ItemSwallow)
  elseif boardModel.FilterItems then
    arrSwallItems = boardModel:FilterItems(function(item)
      local itemSwallow = item:GetComponent(ItemSwallow)
      if itemSwallow ~= nil then
        return true
      end
      return false
    end)
  end
  if not Table.IsEmpty(arrSwallItems) then
    local itemSwallow, swallowInfo
    for _, item in ipairs(arrSwallItems) do
      itemSwallow = item:GetComponent(ItemSwallow)
      if itemSwallow then
        swallowInfo = itemSwallow:GetSwallowInfo() or {}
        for _, info in ipairs(swallowInfo) do
          if info.Swallowed < info.Count then
            orderRequireMap[info.Code] = (orderRequireMap[info.Code] or 0) + (info.Count - info.Swallowed)
          end
        end
      end
    end
  end
  return orderRequireMap
end

function ItemSpread:_LevelDownConsiderBoardItems(code, originCode, levelSpan, orderRequireMap)
  local showLog = GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.ShowItemTestInfo, 0) == 1
  local maxSpan = self:GetMultiEnergyLevelSpan()
  local config = GM.ConfigModel:GetGeneralConf(EGeneralConfType.EnergyBoostAdaptBoard) or {}
  config = tonumber(config.param) or 0
  if config == 0 or maxSpan == 3 and config == 1 then
    if showLog then
      Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\229\188\128\229\133\179\230\156\170\229\188\128")
    end
    return code, originCode, levelSpan
  end
  local lowerLevel = maxSpan + 1
  local orginLevel = GM.ItemDataModel:GetChainLevel(originCode)
  if lowerLevel <= orginLevel then
    if showLog then
      Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\229\138\169\229\138\155\229\137\141\231\173\137\231\186\167 " .. orginLevel .. " \233\171\152\228\186\142\230\136\150\231\173\137\228\186\142\229\138\169\229\138\155\229\144\142\230\156\128\228\189\142\231\173\137\231\186\167 " .. lowerLevel .. "\239\188\140\230\151\160\233\156\128\232\128\131\232\153\145\230\163\139\231\155\152\233\153\141\231\186\167")
    end
    return code, originCode, levelSpan
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  local chain = GM.ItemDataModel:GetChainId(originCode)
  local itemCountArray = {}
  local itemCode
  for i = 1, maxSpan do
    itemCode = ItemUtility.GetItemCode(chain, i)
    itemCountArray[i] = math.max(0, boardModel:GetItemLayerCount(itemCode) - (orderRequireMap[itemCode] or 0))
  end
  self:_ItemCountAfterMerge(itemCountArray)
  if showLog then
    Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\229\138\169\229\138\155\229\137\141\231\173\137\231\186\167 " .. orginLevel .. "\227\128\130\230\163\139\231\155\152\230\163\139\229\173\144\229\144\136\229\185\182\229\144\142\228\184\170\230\149\176\228\184\186 " .. table.concat(itemCountArray, ","))
  end
  local boardMinLevel
  for i = 1, #itemCountArray do
    if 0 < itemCountArray[i] then
      boardMinLevel = i
      break
    end
  end
  if boardMinLevel == nil or orginLevel > boardMinLevel then
    if showLog then
      Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\229\138\169\229\138\155\229\137\141\231\173\137\231\186\167 " .. orginLevel .. " \233\171\152\228\186\142\229\165\135\230\149\176\228\184\170\230\156\128\228\189\142\231\173\137\231\186\167 " .. (boardMinLevel or 0) .. "\239\188\140\230\151\160\233\156\128\232\128\131\232\153\145\230\163\139\231\155\152\233\153\141\231\186\167")
    end
    return code, originCode, levelSpan
  end
  local candidates = {}
  for i = orginLevel, maxSpan do
    if itemCountArray[i] == 1 then
      candidates[#candidates + 1] = ItemUtility.GetItemCode(chain, i)
      itemCountArray[i] = 0
      if itemCountArray[i + 1] ~= nil then
        itemCountArray[i + 1] = itemCountArray[i + 1] + 1
        self:_ItemCountAfterMerge(itemCountArray)
      end
    end
  end
  if #candidates == 0 then
    if showLog then
      Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\230\163\139\231\155\152\228\184\138\228\189\142\231\173\137\231\186\167\230\163\139\229\173\144\229\143\175\229\144\136\230\136\144\229\136\176\229\138\169\229\138\155\229\144\142\230\156\128\228\189\142\231\173\137\231\186\167\239\188\140\230\151\160\233\156\128\233\153\141\231\186\167")
    end
    return code, originCode, levelSpan
  end
  if 1 < #candidates then
    self.m_arrCompensation = {}
    for i = 2, #candidates do
      levelSpan = GM.ItemDataModel:GetChainLevel(candidates[i]) - orginLevel
      table.insert(self.m_arrCompensation, {
        code = candidates[i],
        originCode = originCode,
        levelSpan = levelSpan
      })
    end
    if showLog then
      Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\233\153\141\231\186\167\229\144\142\229\144\142\231\187\173\232\161\165\229\129\191 " .. table.concat(candidates, ",", 2))
    end
  elseif showLog then
    Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\233\153\141\231\186\167\229\144\142\230\151\160\233\156\128\232\161\165\229\129\191")
  end
  levelSpan = GM.ItemDataModel:GetChainLevel(candidates[1]) - orginLevel
  if showLog then
    Log.Info("\229\164\154\229\128\141\229\138\169\229\138\155\228\188\152\229\140\150\239\188\154\233\153\141\231\186\167\229\144\142\230\156\172\230\172\161\229\150\183\229\143\145 " .. candidates[1])
  end
  return candidates[1], originCode, levelSpan
end

function ItemSpread:_TrySpreadFromCompensation()
  if self.m_arrCompensation == nil or #self.m_arrCompensation <= 0 then
    return
  end
  local result = table.remove(self.m_arrCompensation, 1)
  if #self.m_arrCompensation <= 0 then
    self.m_arrCompensation = nil
  end
  return result.code, result.originCode, result.levelSpan
end

function ItemSpread:_ItemCountAfterMerge(itemCountArray)
  local arrayCount = #itemCountArray
  local merged
  for i = 1, arrayCount do
    merged = itemCountArray[i] // 2
    itemCountArray[i] = itemCountArray[i] - merged * 2
    if arrayCount >= i + 1 then
      itemCountArray[i + 1] = itemCountArray[i + 1] + merged
    end
  end
end

function ItemSpread:GetMultiEnergyLevelSpan()
  local levelSpan = 0
  if DoubleEnergyModel.IsDoubleEnergyItemByCode(self.m_itemModel:GetCode()) then
    for strActivityType, v in pairs(DoubleEnergyDefinition) do
      local doubleEnergyModel = GM.ActivityManager:GetModel(strActivityType)
      if doubleEnergyModel ~= nil then
        levelSpan = doubleEnergyModel:GetMaxOpenEnergyMultiple()
      end
    end
  end
  return levelSpan
end

function ItemSpread:IsSpreadFinish()
  if self.m_weightType == ItemSpreadWeightType.List then
    for _, cw in ipairs(self.m_codeWeightPairs) do
      if cw.Weight > 0 then
        return false
      end
    end
    return true
  end
  if self.m_weightType == ItemSpreadWeightType.RandomSequnce then
    return self:GetState() == ItemSpreadState.OpenFinish
  end
end

function ItemSpread:GetNotSpreadItem()
  local items = {}
  if self.m_weightType == ItemSpreadWeightType.List then
    local arrCw = self:GetCodeWeightPairs()
    for _, v in ipairs(arrCw) do
      if v.Weight > 0 then
        table.insert(items, v.Code)
      end
    end
  elseif self.m_weightType == ItemSpreadWeightType.RandomSequnce then
    for i = self.m_itemRestNumber, 1, -1 do
      local code = GM.ItemFixedSpreadModel:GenerateItemCode(self.m_itemModel:GetType())
      table.insert(items, code)
    end
  end
  return items
end

function ItemSpread:GetNotSpreadRewards()
  local rewards = {}
  if self.m_weightType == ItemSpreadWeightType.List then
    local arrCw = self:GetCodeWeightPairs()
    for _, v in ipairs(arrCw) do
      if v.Weight > 0 then
        if StringUtil.StartWith(v.Code, ItemCodePrefix.Bubble) or StringUtil.StartWith(v.Code, ItemCodePrefix.Cobweb) then
          local code = string.sub(v.Code, 3)
          if not Table.IsEmpty(GM.ItemDataModel:GetModelConfig(code)) then
            table.insert(rewards, {
              [PROPERTY_TYPE] = code,
              [PROPERTY_COUNT] = 1
            })
          end
        elseif GM.ItemDataModel:IsItemExist(v.Code) then
          local itemConfig = GM.ItemDataModel:GetModelConfig(v.Code)
          local arrRwds = itemConfig.CollectRewards
          if not Table.IsEmpty(arrRwds) then
            for _, v1 in ipairs(arrRwds) do
              v1[PROPERTY_COUNT] = v1[PROPERTY_COUNT] * v.Weight
              table.insert(rewards, v1)
            end
          end
        end
      end
    end
  elseif self.m_weightType == ItemSpreadWeightType.RandomSequnce then
    for i = self.m_itemRestNumber, 1, -1 do
      local code = GM.ItemFixedSpreadModel:GenerateItemCode(self.m_itemModel:GetType())
      if StringUtil.StartWith(code, ItemCodePrefix.Bubble) or StringUtil.StartWith(code, ItemCodePrefix.Cobweb) then
        code = string.sub(code, 3)
        if not Table.IsEmpty(GM.ItemDataModel:GetModelConfig(code)) then
          table.insert(rewards, {
            [PROPERTY_TYPE] = code,
            [PROPERTY_COUNT] = 1
          })
        end
      elseif GM.ItemDataModel:IsItemExist(code) then
        local itemConfig = GM.ItemDataModel:GetModelConfig(code)
        local arrRwds = itemConfig.CollectRewards
        if not Table.IsEmpty(arrRwds) then
          for _, v1 in ipairs(arrRwds) do
            table.insert(rewards, v1)
          end
        end
      end
    end
  end
  return rewards
end

function ItemSpread:IsErrorItem()
  return self.m_itemRestNumber == 0 and self:IsDisposable()
end

function ItemSpread:IsSunshineRewardBox()
  return self.m_bSunshineRewardItem
end

function ItemSpread:GetNextGenerateItemCode()
  if self.m_weightType == ItemSpreadWeightType.RandomSequnce and self.m_itemRestNumber > 0 then
    return GM.ItemFixedSpreadModel:FindNextGenerateItemCode(self.m_itemModel:GetType())
  end
end

function ItemSpread:TryUpdateToolBoxConfig(itemType)
  if itemType ~= ItemType.ToolBox01 and itemType ~= ItemType.ToolBox02 then
    return
  end
  local isConfigValid = GM.ConfigModel:IsTboxToolHighLevelControlOpen()
  if not (self.m_useHighLevelTboxConfig ~= false or isConfigValid) or self.m_useHighLevelTboxConfig == true and isConfigValid then
    return
  end
  self.m_useHighLevelTboxConfig = isConfigValid
  if isConfigValid then
    local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
    local spreadConfig = GM.SystemConfigModel:GetConfig(itemType == ItemType.ToolBox01 and SystemConfigKey.SmallTboxToolHighLevelWeight or SystemConfigKey.BigTboxToolHighLevelWeight)
    self.m_codeWeightMap = {}
    for _, v in ipairs(spreadConfig) do
      self.m_codeWeightMap[v.Code] = v.Weight
    end
    self.m_itemMaxNumber = GM.SystemConfigModel:GetConfig(itemType == ItemType.ToolBox01 and SystemConfigKey.SmallTboxToolHighLevelNum or SystemConfigKey.BigTboxToolHighLevelNum)
    self.m_tBoxExtraSpreadList = GM.SystemConfigModel:GetConfig(itemType == ItemType.ToolBox01 and SystemConfigKey.SmallTboxToolHighLevel or SystemConfigKey.BigTboxToolHighLevel)
    self.m_storageMaxNumber = self.m_itemMaxNumber * itemConfig.Spread_SubCycles
  else
    self.m_codeWeightMap = {}
    for _, v in ipairs(self.m_codeWeightPairs) do
      self.m_codeWeightMap[v.Code] = v.Weight
    end
    local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
    self.m_itemMaxNumber = itemConfig.Spread_ItemMaxNumber
    self.m_storageMaxNumber = self.m_itemMaxNumber * itemConfig.Spread_SubCycles
  end
end

function ItemSpread:_CollectToolBox(itemType)
  local boardModel = self.m_itemModel:GetBoardModel()
  local rewards = self:GetToolBoxSpreadItems(itemType)
  boardModel.event:Call(BoardEventType.CollectFromItem, {
    Source = self.m_itemModel,
    Rewards = rewards
  })
  boardModel:RemoveItem(self.m_itemModel)
  EventDispatcher.DispatchEvent(EEventType.ItemCollapse, {
    Source = self.m_itemModel
  })
  GM.BIManager:LogUseItem(itemType, 1, EBIType.ItemCollect, EGameMode.Main, EGameMode.Main)
end

function ItemSpread:GetToolBoxSpreadItems(itemType)
  local rewards = {}
  while self.m_itemRestNumber ~= 0 do
    local code, _origin, _span, isExtraToolItem
    if itemType == ItemType.ToolBox01 or itemType == ItemType.ToolBox02 then
      self:TryUpdateToolBoxConfig(itemType)
      code, _origin, _span, isExtraToolItem = self:_GenerateHighLevelToolItemCode()
    else
      code = self:_GenerateHugeToolItemCode()
    end
    if not isExtraToolItem then
      self.m_itemRestNumber = self.m_itemRestNumber - 1
    end
    local toolProp = {
      [PROPERTY_TYPE] = code,
      [PROPERTY_COUNT] = 1
    }
    GM.PropertyDataManager:Acquire({toolProp}, EPropertySource.Give, EBIType.ItemCollect, self:GetGameMode())
    table.insert(rewards, toolProp)
  end
  return rewards
end

function ItemSpread:IsSpreadTapLock()
  return self.m_spreadTapLock == 1
end

function ItemSpread:_CheckBalloonSpread(itemConfig)
  if itemConfig.Spread_Weight ~= nil and #itemConfig.Spread_Weight > 0 and StringUtil.StartWith(itemConfig.Spread_Weight[1].Code, "balloon") then
    Log.Assert(#itemConfig.Spread_Weight == 1 and itemConfig.Spread_WeightType == ItemSpreadWeightType.List, "balloon\229\150\183\229\143\145\233\133\141\231\189\174\229\143\170\230\148\175\230\140\129\233\133\141\228\184\128\230\157\161\239\188\140\228\184\148Spread_WeightType\232\166\129\233\133\1412")
    self.m_bIsBalloonSpread = true
    self.m_balloonOrginScore = StringUtil.Split(itemConfig.Spread_Weight[1].Code, "_")[2]
    return
  end
  self.m_bIsBalloonSpread = false
end

function ItemSpread:_IsBalloonSpread()
  return self.m_bIsBalloonSpread
end

function ItemSpread:_GetBalloonSpreadItem()
  local config = (self.m_codeWeightPairs[1] or {}).Code
  if not config then
    return ItemType.Coin01, true
  end
  local splited = StringUtil.Split(config, "_")
  local minId = tonumber(splited[3]) or 0
  local maxId = tonumber(splited[4]) or 0
  local nearScore = tonumber(splited[5]) or 0
  local itemCode, score = GM.BalloonRewardModel:GetOneItem(minId, maxId, nearScore, {}, true)
  local remainScore = (tonumber(splited[2]) or 0) - score
  splited[2] = string.format("%.2f", remainScore)
  self.m_codeWeightPairs[1].Code = table.concat(splited, "_")
  self.event:Call(ItemSpreadEventType.StateChanged)
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  if remainScore <= 0 then
    local orginScore = tonumber(self.m_balloonOrginScore)
    local ext = {
      rewards_num = self.m_spreadCount + 1,
      chainId = self.m_chainId
    }
    if orginScore then
      ext.score_sum = string.format("%.2f", orginScore - remainScore)
      ext.score_real_sum = orginScore
    end
    GM.BIManager:LogAction(EBIType.LuckyBagRewardFinish, ext)
  end
  return itemCode, remainScore <= 0
end
