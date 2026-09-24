ItemTransform = setmetatable({}, BaseItemComponent)
ItemTransform.__index = ItemTransform
ItemTransformEventType = {StateChange = 1}

function ItemTransform.Create(itemConfig)
  local itemTransform = setmetatable({}, ItemTransform)
  itemTransform:Init(itemConfig)
  return itemTransform
end

function ItemTransform:Init(itemConfig)
  self.event = PairEvent.Create(self)
  self.m_targetItemType = itemConfig.Transform_Item
  self.m_transformCodeWeightPairs = itemConfig.Transform_Weight
  self.m_duration = itemConfig.Transform_Duration
  self.m_costEnergy = itemConfig.CostEnergy == 1
  self.m_canTap = itemConfig.CostEnergy == 1 or itemConfig.CostEnergy == 0
  if not self.m_costEnergy and self.m_duration ~= nil then
    self.m_startTimer = GM.GameModel:GetServerTime()
  else
    self.m_startTimer = -1
  end
end

function ItemTransform:FromSerialization(dbTable)
  self.m_startTimer = dbTable.transformStartTimer or -1
end

function ItemTransform:ToSerialization(dbTable)
  dbTable.transformStartTimer = self:GetStartTimer() or -1
end

function ItemTransform:CanTap()
  if not self.m_canTap then
    return false
  end
  if self.m_itemModel:GetComponent(ItemSpread) then
    return false
  end
  if not self.m_duration then
    return true
  end
  if self.m_startTimer >= 0 then
    return self:GetTimerAmount() == 1
  end
  return false
end

function ItemTransform:CostEnergy()
  return self.m_costEnergy
end

function ItemTransform:OnTap()
  if not self.m_canTap then
    return false
  end
  if self.m_itemModel:GetComponent(ItemSpread) then
    return
  end
  if self.m_costEnergy then
    local energyPropertyType = self.m_itemModel:GetEnergyPropertyType()
    local energyModel = EnergyModel.GetCurrentEnergyModel(energyPropertyType)
    if not energyModel:HasEnoughEnergy(1) then
      self.m_itemModel:GetBoardModel().event:Call(BoardEventType.LackSpreadEnergy)
      return false
    end
    local biMap = self:GetGameMode() == EGameMode.NoCDTrain and EGameMode.Main or nil
    GM.PropertyDataManager:Consume(energyPropertyType, 1, EBIType.TransformItem, self.m_itemModel:GetCode(), biMap)
    EnergyModel.OnEnergyConsumed(self.m_itemModel, 1, self:GetGameMode())
  end
  if self.m_duration then
    self.m_startTimer = GM.GameModel:GetServerTime()
    self.event:Call(ItemTransformEventType.StateChange)
    if self.m_duration > 0 then
      GM.BIManager:LogAction(EBIType.ItemCD, {
        i = self.m_itemModel and self.m_itemModel:GetType() or nil,
        cd = self.m_duration,
        lcd = 0
      })
    end
  else
    self:Transform(nil, true)
  end
end

function ItemTransform:UpdatePerSecond()
  if self.m_startTimer >= 0 then
    if self:GetTimerAmount() == 1 then
      self:Transform()
    elseif GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and GM.TestAutoRunModel.gemSkip then
      self:OnSpeedUp()
    end
  end
end

function ItemTransform:OnSpeedUp(isFree)
  if self.m_duration == nil then
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
  self:Transform()
end

function ItemTransform:OnTimeSkip(duration)
  if self.m_startTimer > 0 then
    self.m_startTimer = self.m_startTimer - duration
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    self:UpdatePerSecond()
  end
end

function ItemTransform:GetWeightTransformItems()
  return self.m_transformCodeWeightPairs or {}
end

function ItemTransform:Transform(bWithoutCost, fromTap)
  if self.m_targetItemType == ItemType.HuntMineTransform then
    local boardModel = self.m_itemModel:GetBoardModel()
    if boardModel and boardModel.GetItemTransformModel then
      local targetTransformItemModel = boardModel:GetItemTransformModel(self.m_itemModel:GetPosition())
      if targetTransformItemModel then
        boardModel:ShockNearby(self.m_itemModel)
        boardModel:ReplaceToTransformLayerItem(self.m_itemModel, targetTransformItemModel)
        local eventInfo = {
          Source = self.m_itemModel,
          New = targetTransformItemModel,
          bTransformLayer = true
        }
        boardModel.event:Call(BoardEventType.TransformItem, eventInfo)
        EventDispatcher.DispatchEvent(EEventType.ItemTransform, eventInfo)
        GM.BIManager:LogTransform(self.m_itemModel:GetType(), targetTransformItemModel:GetType(), nil, nil, self:GetGameMode(), self:_GetBIExtStr(), {
          fid = self.m_itemModel:GetId(),
          tid = targetTransformItemModel:GetId()
        })
        return true
      end
    end
    boardModel:ShockNearby(self.m_itemModel)
    return false
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  if not self.m_targetItemType and self.m_transformCodeWeightPairs then
    self:GenerateTurnboxTransformItem()
  end
  if GM.ItemDataModel:IsItemExist() and MagicCrucibleModel.IsCrucibleItem(self.m_targetItemType) then
    local model = GM.ActivityManager:GetModel(ActivityType.MagicCrucible)
    model:Upgrade()
  end
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_targetItemType, not bWithoutCost and self:_GetNewItemCost() or nil)
  if GM.ItemDataModel:GetChainId(self.m_itemModel:GetType()) == ItemChain.DBox1 or GM.ItemDataModel:GetChainId(self.m_itemModel:GetType()) == ItemChain.FourthBox1 or StringUtil.StartWith(self.m_itemModel:GetType(), ItemCodePrefix.Blind) then
    GM.BIManager:LogAction(EBIType.BoxUnlock, self.m_itemModel:GetType())
  end
  if StringUtil.StartWith(newItem:GetType(), ItemCodePrefix.Turnbox) then
    GM.BIManager:LogAction(EBIType.BoxUnlock, self.m_itemModel:GetType())
  elseif StringUtil.StartWith(self.m_itemModel:GetType(), ItemCodePrefix.Turnbox) then
    GM.BIManager:LogSpread(self.m_itemModel:GetType(), newItem:GetType(), nil, nil, nil, {
      id = newItem:GetId()
    })
  end
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem
  }
  boardModel.event:Call(BoardEventType.TransformItem, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.ItemTransform, eventInfo)
  if fromTap and self.m_costEnergy then
    GM.BIManager:LogTransform(self.m_itemModel:GetType(), newItem:GetType(), EPropertyType.Energy, 1, self:GetGameMode(), self:_GetBIExtStr(), {
      fid = self.m_itemModel:GetId(),
      tid = newItem:GetId()
    })
  else
    GM.BIManager:LogTransform(self.m_itemModel:GetType(), newItem:GetType(), nil, nil, self:GetGameMode(), self:_GetBIExtStr(), {
      fid = self.m_itemModel:GetId(),
      tid = newItem:GetId()
    })
  end
  return true
end

function ItemTransform:HuntPdTransform(index)
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceHuntPdItem(self.m_itemModel, self.m_targetItemType, index)
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem
  }
  boardModel.event:Call(BoardEventType.HuntPdTransformItem, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.ItemTransform, eventInfo)
  GM.BIManager:LogTransform(self.m_itemModel:GetType(), newItem:GetType(), nil, nil, self:GetGameMode(), self:_GetBIExtStr(), {
    fid = self.m_itemModel:GetId(),
    tid = newItem:GetId()
  })
end

function ItemTransform:GenerateTurnboxTransformItem()
  local codeWeightPairs = self.m_transformCodeWeightPairs
  local turnboxMustUpgradeDbKey = EMiscKey.TurnboxUpgradeNum
  local turnboxTutorialId = ETutorialId.TurnboxTutorial1
  local isTurnboxMustUpgrade = GM.MiscModel:Get(turnboxMustUpgradeDbKey)
  if GM.TutorialModel:GetOngoingDatas(turnboxTutorialId) == "1" and not isTurnboxMustUpgrade then
    GM.MiscModel:Set(turnboxMustUpgradeDbKey, "1")
    for _, item in ipairs(codeWeightPairs) do
      if StringUtil.StartWith(item.Code, ItemCodePrefix.Turnbox) then
        self.m_targetItemType = item.Code
        return
      end
    end
  end
  
  local function computeScoreRangeFunc(score)
    return 0, score
  end
  
  local tmpCodeWeightPairs = Table.ShallowCopy(codeWeightPairs)
  local target, index, code
  while not Table.IsEmpty(tmpCodeWeightPairs) do
    target, index = Table.ListWeightSelectOne(tmpCodeWeightPairs)
    code = target.Code
    if StringUtil.StartWith(code, "score_") then
      code = ItemSpread.TryGenerateItemCodeByRange(code, computeScoreRangeFunc, true)
      if code ~= nil then
        self.m_targetItemType = code
        break
      end
    else
      self.m_targetItemType = code
      break
    end
    table.remove(tmpCodeWeightPairs, index)
  end
  self.m_targetItemType = self.m_targetItemType or "gold_3"
end

function ItemTransform:_GetNewItemCost()
  local energyToday = 0
  local createTime = GM.GameModel:GetServerTime()
  if createTime // 86400 == self.m_itemModel.createTime // 86400 then
    energyToday = self.m_itemModel.energyToday
  end
  energyToday = energyToday + (self.m_costEnergy and 1 or 0)
  return {
    costEnergy = self.m_itemModel.costEnergy + (self.m_costEnergy and 1 or 0),
    freeScore = self.m_itemModel.freeScore,
    shopGemCost = self.m_itemModel.shopGemCost,
    bubbleGemCost = self.m_itemModel.bubbleGemCost,
    energyToday = energyToday,
    createTime = createTime
  }
end

function ItemTransform:GetDuration()
  return self.m_duration
end

function ItemTransform:GetStartTimer()
  return self.m_startTimer
end

function ItemTransform:GetSpeedUpCost()
  return ItemUtility.GetSpeedUpCost(self.m_startTimer, self.m_duration)
end

function ItemTransform:GetTimerAmount()
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  return self:_GetTimerAmount(elapsedTime)
end

function ItemTransform:GetNextTimerAmount()
  local nextElapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer + 1
  return self:_GetTimerAmount(nextElapsedTime)
end

function ItemTransform:_GetTimerAmount(elapsedTime)
  return math.min(elapsedTime / self.m_duration, 1)
end

function ItemTransform:Accelerate()
  if self.m_duration ~= nil then
    if self.m_startTimer > 0 then
      self.event:Call(ItemEventType.Accelerate)
    end
    self:OnTimeSkip(self.m_duration)
  end
end

function ItemTransform:_GetBIExtStr()
  local swallow = self.m_itemModel:GetComponent(ItemSwallow)
  if not swallow then
    return
  end
  local str = "sw:" .. swallow:GetSwallowInfo()[1].Code
  local config = GM.ItemDataModel:GetModelConfig(self.m_itemModel:GetCode())
  if config.Spread_Auto == nil then
    return str
  end
  str = str .. ";num:" .. config.Spread_TransformNumber
  if config.Spread_SubCycles ~= 1 then
    str = str .. ";cycle:" .. config.Spread_SubCycles
  end
  return str
end
