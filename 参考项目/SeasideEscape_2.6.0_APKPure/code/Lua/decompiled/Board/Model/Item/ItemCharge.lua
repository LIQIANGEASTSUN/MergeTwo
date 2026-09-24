ItemCharge = setmetatable({}, BaseItemComponent)
ItemCharge.__index = ItemCharge
ItemChargeEventType = {SpeedUp = 1, StateChange = 2}
ItemChargeState = {Initializing = 0, Charging = 1}
ChargeConfig = {}

function ChargeConfig.Create(config)
  local list = StringUtil.Split(config, ",")
  local info = table.remove(list, 1)
  info = StringUtil.SplitToNum(info, "-")
  local data = {
    id = info[1],
    maxLevel = info[2],
    Weight = info[3],
    initLevel = info[4] or 1,
    spread = ItemModelFactory.GetCodeAndWeightPairs(list)
  }
  return data
end

function ItemCharge.GetStageAndLevel(itemType)
  if not GM.ItemDataModel:IsItemExist(itemType) then
    return
  end
  local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
  local chargeConfig = itemConfig.Charge_Stage
  if chargeConfig == nil or #chargeConfig == 0 then
    return
  end
  local next = chargeConfig[1]
  return next.id, next.initLevel - 1
end

function ItemCharge.Create(itemConfig)
  local itemCharge = setmetatable({}, ItemCharge)
  itemCharge:Init(itemConfig)
  return itemCharge
end

function ItemCharge:Init(itemConfig)
  self.event = PairEvent.Create(self)
  self.m_duration = itemConfig.Charge_InitDuration
  self.m_stageConfig = itemConfig.Charge_Stage
  self.m_costEnergy = itemConfig.CostEnergy == 1
  self.m_curStage = 0
  self.m_curLevel = 0
  self:_InitStage()
  if self.m_duration ~= nil and self.m_duration > 0 then
    self.m_startTimer = GM.GameModel:GetServerTime()
    self.m_state = ItemChargeState.Initializing
    if GM.SceneManager:GetGameMode() == EGameMode.Main and self.m_duration > 0 then
      GM.BIManager:LogAction(EBIType.ItemCD, {
        i = itemConfig.Type,
        cd = self.m_duration,
        lcd = 0
      })
    end
  else
    self.m_state = ItemChargeState.Charging
  end
end

function ItemCharge:_InitStage()
  local next = Table.ListWeightSelectOne(self.m_stageConfig)
  self.m_curStage = next.id
  self.m_curLevel = next.initLevel - 1
end

function ItemCharge:FromSerialization(dbTable)
  self.m_startTimer = dbTable.chargeStartTimer or -1
  self.m_curStage = dbTable.chargeStage or 0
  self.m_curLevel = dbTable.chargeLevel or 0
  if self.m_startTimer == -1 or dbTable.chargeStage ~= 0 then
    self.m_state = ItemChargeState.Charging
  end
  if self.m_curStage == 0 then
    self:_InitStage()
  end
end

function ItemCharge:ToSerialization(dbTable)
  dbTable.chargeStartTimer = self:GetStartTimer() or -1
  dbTable.chargeStage = self:GetStage() or 0
  dbTable.chargeLevel = self:GetLevel() or 0
end

function ItemCharge:UpdatePerSecond()
  if self.m_state == ItemChargeState.Charging then
    return
  end
  if self.m_duration ~= nil and self:GetTimerAmount() == 1 then
    self.m_state = ItemChargeState.Charging
    self.m_startTimer = -1
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    EventDispatcher.DispatchEvent(EEventType.TutorialItemCharge, {
      item = self.m_itemModel,
      cmp = self
    })
  elseif GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and GM.TestAutoRunModel.gemSkip then
    self:OnSpeedUp()
  end
  self.event:Call(ItemChargeEventType.StateChange)
end

function ItemCharge:OnSpeedUp(isFree)
  if self.m_state == ItemChargeState.Charging then
    return
  end
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
  self.m_state = ItemChargeState.Charging
  self.m_startTimer = -1
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  EventDispatcher.DispatchEvent(EEventType.TutorialItemCharge, {
    item = self.m_itemModel,
    cmp = self
  })
  self.event:Call(ItemChargeEventType.SpeedUp)
end

function ItemCharge:OnTimeSkip(duration)
  if self.m_state == ItemChargeState.Charging then
    return
  end
  if self.m_startTimer > 0 then
    self.m_startTimer = self.m_startTimer - duration
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    self:UpdatePerSecond()
  end
end

function ItemCharge:OnTap()
  if self.m_state == ItemChargeState.Initializing then
    local boardModel = self.m_itemModel:GetBoardModel()
    boardModel.event:Call(BoardEventType.SpreadFailed, {
      Item = self.m_itemModel,
      Reason = SpreadFailedReason.ItemRecharging
    })
    return false
  end
  if self.m_costEnergy then
    local energyPropertyType = self.m_itemModel:GetEnergyPropertyType()
    local energyModel = EnergyModel.GetCurrentEnergyModel(energyPropertyType)
    if not energyModel:HasEnoughEnergy(1) then
      self.m_itemModel:GetBoardModel().event:Call(BoardEventType.LackSpreadEnergy)
      EventDispatcher.DispatchEvent(EEventType.TutorialItemCharge, {
        item = self.m_itemModel,
        cmp = self
      })
      return false
    else
      self.m_itemModel.costEnergy = self.m_itemModel.costEnergy + 1
    end
  end
  local config = self.m_stageConfig[self.m_curStage]
  if self.m_curLevel >= config.maxLevel then
    return self:TrySpread()
  else
    self:_UpdateState(nil, self.m_curLevel + 1)
    EventDispatcher.DispatchEvent(EEventType.TutorialItemCharge, {
      item = self.m_itemModel,
      cmp = self
    })
    self:TryCostEnergy()
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    return true
  end
end

function ItemCharge:TryCostEnergy()
  if self.m_costEnergy then
    local biMap = self:GetGameMode() == EGameMode.NoCDTrain and EGameMode.Main or nil
    GM.PropertyDataManager:Consume(self.m_itemModel:GetEnergyPropertyType(), 1, EBIType.ChargeItem, self.m_itemModel:GetCode(), biMap)
    EnergyModel.OnEnergyConsumed(self.m_itemModel, 1, self:GetGameMode())
  end
end

function ItemCharge:TrySpread()
  local boardModel = self.m_itemModel:GetBoardModel()
  if boardModel:IsBoardFull() then
    boardModel.event:Call(BoardEventType.SpreadFailed, {
      Item = self.m_itemModel,
      Reason = SpreadFailedReason.BoardFull
    })
    EventDispatcher.DispatchEvent(EEventType.VibrationHeavy)
    return false
  end
  local code = Table.ListWeightSelectOne(self.m_stageConfig[self.m_curStage].spread).Code
  local position
  position = boardModel:FindEmptyPositionInAttach(code)
  position = position or boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
  if position == nil then
    local boardModel = self.m_itemModel:GetBoardModel()
    boardModel.event:Call(BoardEventType.SpreadFailed, {
      Item = self.m_itemModel,
      Reason = SpreadFailedReason.BoardFull
    })
    EventDispatcher.DispatchEvent(EEventType.VibrationHeavy)
    return false
  end
  boardModel:SpreadItem(self.m_itemModel, position, code, true, nil, self:_GetNewItemCost())
  self:TryCostEnergy()
  EventDispatcher.DispatchEvent(EEventType.TutorialItemCharge, {
    item = self.m_itemModel,
    cmp = self,
    spreadPos = position,
    spreadCode = code
  })
  self:_UpdateState(0, 0)
  self.m_itemModel.costEnergy = 0
  self.m_itemModel.energyToday = 0
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
  return true
end

function ItemCharge:_GetNewItemCost()
  return {
    costEnergy = self.m_itemModel.costEnergy or 0,
    freeScore = self.m_itemModel.freeScore or 0,
    shopGemCost = self.m_itemModel.shopGemCost or 0,
    bubbleGemCost = self.m_itemModel.bubbleGemCost or 0,
    energyToday = self.m_itemModel.energyToday or 0,
    energyStarToday = self.m_itemModel.energyStarToday or 0
  }
end

function ItemCharge:_UpdateState(id, level)
  self.m_curStage = id or self.m_curStage
  self.m_curLevel = level
  if id == 0 then
    if self.m_duration and 0 < self.m_duration then
      self.m_state = ItemChargeState.Initializing
      self.m_startTimer = GM.GameModel:GetServerTime()
      GM.BIManager:LogAction(EBIType.ItemCD, {
        i = self.m_itemModel and self.m_itemModel:GetType() or nil,
        cd = self.m_duration,
        lcd = 0
      })
      if self.m_itemModel:GetBoardModel():IsInAccelerating(self.m_itemModel) then
        self.m_startTimer = -1
        self.m_state = ItemChargeState.Charging
      end
    else
      self.m_startTimer = -1
      self.m_state = ItemChargeState.Charging
    end
    self:_InitStage()
  end
  local eventInfo = {
    Source = self.m_itemModel
  }
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.ChargeItem, eventInfo)
  boardModel:SaveItemProperty(self.m_itemModel)
  self.event:Call(ItemChargeEventType.StateChange)
  EventDispatcher.DispatchEvent(EEventType.ItemCharged, {
    item = self.m_itemModel
  })
end

function ItemCharge:GetDuration()
  return self.m_duration
end

function ItemCharge:GetStartTimer()
  return self.m_startTimer
end

function ItemCharge:GetState()
  return self.m_state
end

function ItemCharge:GetStage()
  return self.m_curStage
end

function ItemCharge:GetLevel()
  return self.m_curLevel
end

function ItemCharge:GetSpeedUpCost()
  return ItemUtility.GetSpeedUpCost(self.m_startTimer, self.m_duration)
end

function ItemCharge:GetTimerAmount()
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  return self:_GetTimerAmount(elapsedTime)
end

function ItemCharge:GetNextTimerAmount()
  local nextElapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer + 1
  return self:_GetTimerAmount(nextElapsedTime)
end

function ItemCharge:_GetTimerAmount(elapsedTime)
  return math.min(elapsedTime / self.m_duration, 1)
end

function ItemCharge:CostEnergy()
  return self.m_costEnergy
end

function ItemCharge:Accelerate()
  self.m_startTimer = -1
  self.m_state = ItemChargeState.Charging
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  self.event:Call(ItemChargeEventType.StateChange)
  self.event:Call(ItemChargeEventType.SpeedUp)
end
