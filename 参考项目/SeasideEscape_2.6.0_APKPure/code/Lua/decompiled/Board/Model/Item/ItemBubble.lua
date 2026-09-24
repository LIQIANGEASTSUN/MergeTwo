ItemBubble = setmetatable({}, BaseItemComponent)
ItemBubble.__index = ItemBubble
ItemBubble.Countdown = 60
local bubbleBrokenTransMap = {
  [ItemCodePrefix.Gem] = {
    ReplaceKey = ItemCodePrefix.Energy,
    HasGenCurItemNumKey = EMiscKey.BubbleBrokenGemNum,
    ConfigLimitKey = SystemConfigKey.BubbleBrokenGemLimit
  },
  [ItemCodePrefix.Energy] = {
    ReplaceKey = ItemCodePrefix.Gold,
    HasGenCurItemNumKey = EMiscKey.BubbleBrokenEnergyNum,
    ConfigLimitKey = SystemConfigKey.BubbleBrokenEnergyLimit
  }
}

function ItemBubble.Create(innerItemCode)
  local itemBubble = setmetatable({}, ItemBubble)
  itemBubble:Init(innerItemCode)
  return itemBubble
end

function ItemBubble:Init(innerItemCode)
  self.m_innerItemCode = innerItemCode
  local config = GM.ItemDataModel:GetModelConfig(innerItemCode)
  self.m_startTimer = GM.GameModel:GetServerTime()
  self.m_breakCost = config.BubblePrice or 0
  self.m_bubbleTime = GM.ConfigModel:GetBubbleTimeByPrice(self.m_breakCost)
end

function ItemBubble:Destroy()
  BaseItemComponent.Destroy(self)
end

function ItemBubble:FromSerialization(dbTable)
  self.m_startTimer = dbTable.bubbleStartTimer
end

function ItemBubble:ToSerialization(dbTable)
  dbTable.bubbleStartTimer = self:GetStartTimer() or -1
end

function ItemBubble:_BubbleBrokenDailyLimit(code)
  local curDayTime = GM.GameModel:GetServerDay()
  local lastDayTime = GM.MiscModel:GetBubbleBrokenLastDayTimeInNumber()
  if not lastDayTime or lastDayTime ~= curDayTime then
    GM.MiscModel:SetBubbleBrokenLastDayTime(curDayTime)
    for _, keyTable in pairs(bubbleBrokenTransMap) do
      GM.MiscModel:Set(keyTable.HasGenCurItemNumKey, 0)
    end
  end
  for prefix, keyTable in pairs(bubbleBrokenTransMap) do
    if StringUtil.StartWith(code, prefix) then
      local hasGenCurItemNum = tonumber(GM.MiscModel:Get(keyTable.HasGenCurItemNumKey))
      if GM.SystemConfigModel:GetConfig(keyTable.ConfigLimitKey) then
        if hasGenCurItemNum < GM.SystemConfigModel:GetConfig(keyTable.ConfigLimitKey) then
          GM.MiscModel:Set(keyTable.HasGenCurItemNumKey, hasGenCurItemNum + 1)
          break
        end
        return StringUtil.Replace(code, prefix, keyTable.ReplaceKey)
      end
      break
    end
  end
  return code
end

function ItemBubble:UpdatePerSecond()
  if self:GetGameMode() == EGameMode.Hunt or self:GetGameMode() == EGameMode.CloudsDash or self:GetGameMode() == EGameMode.HuntMap then
  elseif not self.m_lockBreak and self:GetTimerAmount() == 1 then
    local bubbleBrokenConfig = self.m_itemModel:GetBubbleBrokenConfig()
    local afterBrokenCode = Table.ListWeightSelectOne(bubbleBrokenConfig).Code
    afterBrokenCode = self:_BubbleBrokenDailyLimit(afterBrokenCode)
    self:_Disappear(afterBrokenCode)
  elseif GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and GM.TestAutoRunModel.buyBubble then
    self:OnBreak()
  end
end

function ItemBubble:OnBreak(isFree)
  if self:GetGameMode() == EGameMode.Hunt then
    self:_BreakOnHuntBubble()
    return
  end
  if self:GetGameMode() == EGameMode.CloudsDash then
    self:_BreakOnCloudsDashBubble()
    return
  end
  if self:GetGameMode() == EGameMode.HuntMap then
    self:_BreakOnHuntMapBubble()
    return
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  local cost, freeNum
  if not isFree then
    cost, freeNum = self:GetBreakCost()
    if freeNum then
      GM.MiscModel:SetFreeBubbleNum(freeNum)
    end
    local gemNumber = GM.PropertyDataManager:GetPropertyNum(EPropertyType.Gem)
    if GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and GM.TestAutoRunModel.buyBubble then
      gemNumber = cost
    end
    if cost > gemNumber then
      boardModel.event:Call(BoardEventType.LackGem, {
        LackNumber = cost - gemNumber
      })
      return
    end
    GM.PropertyDataManager:Consume(EPropertyType.Gem, cost, EBIType.BreakBubble, self.m_innerItemCode)
    EventDispatcher.DispatchEvent(EEventType.BuyBubble, {
      source = self.m_itemModel,
      cost = cost
    })
  end
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode, {bubbleGemCost = cost})
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem,
    Cost = cost
  }
  boardModel:MinusBubbleCount(self:GetInnerItemCode())
  boardModel.event:Call(BoardEventType.BubbleBreak, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.BubbleBroken, eventInfo)
  self:Destroy()
end

function ItemBubble:_BreakOnHuntBubble()
  local viewData = {noDelayTime = true}
  local biScene
  for _, v in pairs(HuntActivityDefinition) do
    local window = GM.UIManager:GetOpenedViewByName(v.MainWindowPrefabName)
    if window ~= nil then
      local tilePos = self.m_itemModel:GetPosition()
      local uiWorldPosition = window:GetTileWorldPos(tilePos:GetX(), tilePos:GetY())
      viewData.arrWorldPos = {uiWorldPosition}
      biScene = v.BreakBubbleBIType
      break
    end
  end
  RewardApi.AcquireRewards({
    {
      [PROPERTY_TYPE] = self.m_innerItemCode,
      [PROPERTY_COUNT] = 1
    }
  }, EPropertySource.Give, biScene or EBIType.BreakBubble, viewData, CacheItemType.Stack, self:GetGameMode())
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  boardModel.event:Call(BoardEventType.BatchRemoveItems, {
    Removed = {
      self.m_itemModel
    }
  })
  self:Destroy()
end

function ItemBubble:_BreakOnCloudsDashBubble()
  local viewData = {noDelayTime = true}
  local biScene
  for _, v in pairs(CloudsDashDefinition) do
    local window = GM.UIManager:GetOpenedViewByName(v.HuntWindowPrefabName)
    if window ~= nil then
      local tilePos = self.m_itemModel:GetPosition()
      local uiWorldPosition = window:GetTileWorldPos(tilePos:GetX(), tilePos:GetY())
      viewData.arrWorldPos = {uiWorldPosition}
      biScene = v.BreakBubbleBIType
      break
    end
  end
  RewardApi.AcquireRewards({
    {
      [PROPERTY_TYPE] = self.m_innerItemCode,
      [PROPERTY_COUNT] = 1
    }
  }, EPropertySource.Give, biScene or EBIType.BreakBubble, viewData, CacheItemType.Stack, self:GetGameMode())
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  boardModel.event:Call(BoardEventType.BatchRemoveItems, {
    Removed = {
      self.m_itemModel
    }
  })
  self:Destroy()
end

function ItemBubble:_BreakOnHuntMapBubble()
  local viewData = {noDelayTime = true}
  local biScene
  for _, v in pairs(HuntMapActivityDefinition) do
    local window = GM.UIManager:GetOpenedViewByName(v.BoardWindowPrefabName)
    if window ~= nil then
      local tilePos = self.m_itemModel:GetPosition()
      local uiWorldPosition = window:GetTileWorldPos(tilePos:GetX(), tilePos:GetY())
      viewData.arrWorldPos = {uiWorldPosition}
      biScene = v.BreakBubbleBIType
      break
    end
  end
  RewardApi.AcquireRewards({
    {
      [PROPERTY_TYPE] = self.m_innerItemCode,
      [PROPERTY_COUNT] = 1
    }
  }, EPropertySource.Give, biScene or EBIType.BreakBubble, viewData, CacheItemType.Stack, self:GetGameMode())
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  boardModel.event:Call(BoardEventType.BatchRemoveItems, {
    Removed = {
      self.m_itemModel
    }
  })
  self:Destroy()
end

function ItemBubble:OnSpeedUp()
  local code = GM.SystemConfigModel:GetConfig(SystemConfigKey.BubbleDelete)
  self:_Disappear(code, true)
end

function ItemBubble:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemBubble:GetStartTimer()
  return self.m_startTimer
end

function ItemBubble:GetBubbleTime()
  return self.m_bubbleTime
end

function ItemBubble:GetBreakCost()
  local freeNum = GM.MiscModel:GetFreeBubbleNumInNumber()
  if freeNum < GM.SystemConfigModel:GetConfig(SystemConfigKey.FreeBubbleNum) then
    return 0, freeNum + 1
  end
  local breakCost = GM.TutorialModel:GetForceUnlockBubbleCost()
  return breakCost or self.m_breakCost
end

function ItemBubble:GetTimerAmount()
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  local result = elapsedTime / (self.m_bubbleTime or ItemBubble.Countdown)
  return math.min(result, 1)
end

function ItemBubble:_Disappear(code, bUserDelete)
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, code)
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem
  }
  boardModel:MinusBubbleCount(self:GetInnerItemCode())
  boardModel.event:Call(BoardEventType.BubbleDisappear, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.BubbleDisappear, eventInfo)
  if bUserDelete then
    GM.BIManager:LogAction(EBIType.RemoveBubble, self.m_innerItemCode)
    GM.BIManager:LogStore(self.m_itemModel:GetCode(), 1, code, 1, EShopType.SellItem, boardModel:GetBiGameMode(), {
      id = self.m_itemModel:GetId(),
      tid = newItem:GetId()
    })
  else
    GM.BIManager:LogSpread(self.m_itemModel:GetCode(), code, 0, nil, nil, {
      id = newItem:GetId(),
      fid = self.m_itemModel:GetId()
    })
  end
  self:Destroy()
end

function ItemBubble:SetLockBreak(lockBreak)
  self.m_lockBreak = lockBreak
end
