ItemIce = setmetatable({}, BaseItemComponent)
ItemIce.__index = ItemIce

function ItemIce.Create(innerItemCode, startTimer, duration, isTempIce)
  local itemIce = setmetatable({}, ItemIce)
  itemIce:Init(innerItemCode, startTimer, duration, isTempIce)
  return itemIce
end

function ItemIce:Init(innerItemCode, startTimer, duration, isTempIce)
  self.m_innerItemCode = innerItemCode
  self.m_startTimer = startTimer
  self.m_countDown = duration
  self.m_isTempIce = isTempIce
end

function ItemIce:GetMergedType()
  local config = GM.ItemDataModel:GetModelConfig(self.m_innerItemCode)
  return config.MergedType
end

function ItemIce:CanMergeByJoker()
  local config = GM.ItemDataModel:GetModelConfig(self.m_innerItemCode)
  return config.Only_Same ~= 1
end

function ItemIce:UpdatePerSecond()
  if self:GetTimerAmount() == 1 then
    local transformCode
    if self.m_isTempIce then
      transformCode = GM.ActivityManager:GetIceTransformItem()
    else
      transformCode = ItemType.Coin01
    end
    if not transformCode then
      self:_RemoveItem()
      return
    end
    self:_Disappear(transformCode)
  end
end

function ItemIce:OnSpeedUp()
  local transformCode
  if self.m_isTempIce then
    transformCode = GM.ActivityManager:GetIceTransformItem()
  else
    transformCode = ItemType.Coin01
  end
  if not transformCode then
    self:_RemoveItem()
    return
  end
  self:_Disappear(transformCode, true)
end

function ItemIce:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemIce:GetStartTimer()
  return self.m_startTimer
end

function ItemIce:GetRestTime()
  return math.max(0, self.m_countDown - GM.GameModel:GetServerTime() + self.m_startTimer)
end

function ItemIce:GetTimerAmount()
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  local result = elapsedTime / self.m_countDown
  return math.min(result, 1)
end

function ItemIce:_Disappear(code, bUserDelete)
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, code)
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem
  }
  boardModel.event:Call(BoardEventType.IceDisappear, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.IceDisappear, eventInfo)
  if self.m_isTempIce then
    GM.BIManager:LogTransform(self.m_itemModel:GetCode(), code, nil, 1, nil, nil, {
      fid = self.m_itemModel:GetId(),
      tid = newItem:GetId()
    })
  elseif bUserDelete then
    GM.BIManager:LogAction(EBIType.RemoveIce, self.m_innerItemCode)
    GM.BIManager:LogStore(self.m_itemModel:GetCode(), 1, code, 1, EShopType.SellItem, boardModel:GetBiGameMode())
  else
    GM.BIManager:LogSpread(self.m_itemModel:GetCode(), code, 0, nil, nil, {
      id = newItem:GetId()
    })
  end
end

function ItemIce:OnTempItemStateChanged()
  self:_RemoveItem()
end

function ItemIce:_RemoveItem()
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  local eventInfo = {
    Removed = {
      self.m_itemModel
    }
  }
  boardModel.event:Call(BoardEventType.BatchRemoveItems, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.IceDisappear, eventInfo)
  if self.m_isTempIce then
    GM.BIManager:LogTransform(self.m_itemModel:GetCode(), "gold", nil, 0, nil, nil, {
      fid = self.m_itemModel:GetId()
    })
  end
end

function ItemIce:IsTempIce()
  return self.m_isTempIce
end
