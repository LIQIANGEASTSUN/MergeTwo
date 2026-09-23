ItemAccelerateEventType = {Activated = 1}
ItemAccelerate = setmetatable({}, BaseItemComponent)
ItemAccelerate.__index = ItemAccelerate

function ItemAccelerate.Create(accelerateDuration)
  local itemAccelerate = setmetatable({}, ItemAccelerate)
  itemAccelerate:Init(accelerateDuration)
  return itemAccelerate
end

function ItemAccelerate:Init(accelerateDuration)
  self.event = PairEvent.Create(self)
  self.m_duration = accelerateDuration
end

function ItemAccelerate:UpdatePerSecond()
  if self.m_startTimer == nil then
    return
  end
  if self:GetTimerAmount() == 1 then
    local itemTransform = self.m_itemModel:GetComponent(ItemTransform)
    if itemTransform ~= nil then
      itemTransform:Transform()
    else
      local boardModel = self.m_itemModel:GetBoardModel()
      boardModel:RemoveItem(self.m_itemModel)
      boardModel.event:Call(BoardEventType.CollapseItem, {
        Source = self.m_itemModel
      })
    end
  end
end

function ItemAccelerate:OnActivate()
  self.m_startTimer = GM.GameModel:GetServerTime()
  self:UpdatePerSecond()
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  self.event:Call(ItemAccelerateEventType.Activated)
  EventDispatcher.DispatchEvent(EEventType.ItemActivated, {
    Source = self.m_itemModel
  })
end

function ItemAccelerate:GetStartTimer()
  return self.m_startTimer
end

function ItemAccelerate:GetTimerAmount()
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  return self:_GetTimerAmount(elapsedTime)
end

function ItemAccelerate:GetNextTimerAmount()
  local nextElapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer + 1
  return self:_GetTimerAmount(nextElapsedTime)
end

function ItemAccelerate:_GetTimerAmount(elapsedTime)
  return math.min(elapsedTime / self.m_duration, 1)
end

function ItemAccelerate:GetTimerDuration()
  return self.m_duration
end

function ItemAccelerate:IsActivated()
  return self.m_startTimer ~= nil
end
