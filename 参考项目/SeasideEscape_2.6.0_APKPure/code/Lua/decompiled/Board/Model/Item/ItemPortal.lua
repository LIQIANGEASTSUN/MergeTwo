ItemPortal = setmetatable({canMove = false}, BaseItemComponent)
ItemPortal.__index = ItemPortal
ItemPortalEventType = {StateChanged = 1}
EItemPortalState = {Close = 1, Open = 2}

function ItemPortal.Create(itemConfig)
  local itemPortal = setmetatable({}, ItemPortal)
  itemPortal:Init(itemConfig)
  return itemPortal
end

function ItemPortal:Init(itemConfig)
  self.event = PairEvent.Create(self)
  self.m_activityModel = HuntActivityModel.GetActiveModel()
  self:UpdateState()
  EventDispatcher.AddListener(EEventType.HuntActivityItemUnlocked, self, self.OnHuntItemUnlocked)
end

function ItemPortal:OnRemoved()
  EventDispatcher.RemoveTarget(self)
end

function ItemPortal:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function ItemPortal:OnHuntItemUnlocked()
  self:UpdateState()
end

function ItemPortal:GetCode()
  return self.m_itemModel:GetCode()
end

function ItemPortal:GetState()
  return self.m_state
end

function ItemPortal:UpdateState()
  local state = self:CalculateState()
  if self.m_state ~= state then
    self.m_state = state
    self.event:Call(ItemPortalEventType.StateChanged)
  end
end

function ItemPortal:CalculateState()
  if self.m_activityModel ~= nil and self.m_activityModel:HasFinishedCurrentPhase() then
    return EItemPortalState.Open
  else
    return EItemPortalState.Close
  end
end

function ItemPortal:OnTap()
  if self:GetState() == EItemPortalState.Open and self.m_activityModel ~= nil then
    self.m_activityModel:TryOpenNextPhaseWindow()
  end
end

function ItemPortal:GetPortalKey()
  if self.m_itemModel ~= nil then
    return self.m_itemModel:GetCode() .. "_key"
  end
end
