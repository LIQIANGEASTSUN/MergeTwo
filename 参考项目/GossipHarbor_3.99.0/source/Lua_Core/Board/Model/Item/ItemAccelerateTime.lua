ItemAccelerateItemEventType = {UpdateView = 1}
ItemAccelerateTime = setmetatable({}, BaseItemComponent)
ItemAccelerateTime.__index = ItemAccelerateTime

function ItemAccelerateTime.Create()
  local itemAccelerateTime = setmetatable({}, ItemAccelerateTime)
  itemAccelerateTime:Init()
  return itemAccelerateTime
end

function ItemAccelerateTime:Init()
  self.event = PairEvent.Create(self)
  self.m_lastUpdateTime = 0
  self.m_time = 0
end

function ItemAccelerateTime:UpdateAccelerateTime()
  local newTime = 0
  local boardModel = self.m_itemModel:GetBoardModel()
  local itemPosition = self.m_itemModel:GetPosition()
  for dir = 1, 8 do
    local position = BoardPosition.GetDir8Position(itemPosition, dir)
    local item = boardModel:GetItem(position)
    local itemAccelerate = item and item:GetComponent(ItemAccelerate)
    if itemAccelerate ~= nil and itemAccelerate:IsActivated() then
      local accelerateTime = itemAccelerate:GetStartTimer() + itemAccelerate:GetTimerDuration()
      newTime = math.max(newTime, accelerateTime)
    end
  end
  local serverTime = GM.GameModel:GetServerTime()
  if newTime <= serverTime then
    newTime = 0
  end
  if self.m_time ~= 0 or newTime ~= 0 then
    self.m_lastUpdateTime = serverTime
    self.m_time = newTime
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  end
  self.event:Call(ItemAccelerateItemEventType.UpdateView)
end

function ItemAccelerateTime:GetTime()
  return self.m_time
end

function ItemAccelerateTime:GetLastUpdateTime()
  return self.m_lastUpdateTime
end

function ItemAccelerateTime:IsAccelerated()
  return self.m_time ~= 0
end
