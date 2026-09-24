PropItemExtraOrder = setmetatable({}, PropItemBase)
PropItemExtraOrder.__index = PropItemExtraOrder

function PropItemExtraOrder:Init()
  self.m_extraOrderDuration = -1
  self.m_extraOrderExpireTime = -1
  self.m_enabled = false
end

function PropItemExtraOrder:LoadServerConfig(tbLoginResp)
  local enabled = GM.ConfigModel:HasExtraOrderFunction()
  if enabled ~= self.m_enabled and self.m_initialized then
    EventDispatcher.DispatchEvent(EEventType.PropItemAcquired, EPropItemType.ExtraOrder)
    local mainOrderModel = GM.MainBoardModel:GetOrderModel()
    local extraOrder = mainOrderModel:GetExtraOrder()
    if enabled and not extraOrder then
      self:_TryGenerateExtraOrder()
    end
  end
  self.m_enabled = enabled
end

function PropItemExtraOrder:LateInit()
  self.m_extraOrderDuration = tonumber(GM.MiscModel:Get(EMiscKey.ExtraOrderDuration)) or -1
  self.m_extraOrderExpireTime = tonumber(GM.MiscModel:Get(EMiscKey.ExtraOrderExpireTime)) or -1
  self.m_initialized = true
end

function PropItemExtraOrder:UpdatePerSecond()
  if self.m_extraOrderExpireTime < 0 then
    return
  end
  if GM.GameModel:GetServerTime() > self.m_extraOrderExpireTime then
    self.m_extraOrderExpireTime = -1
    GM.MiscModel:Set(EMiscKey.ExtraOrderExpireTime, -1)
  end
end

function PropItemExtraOrder:OnAcquired(timeInSeconds)
  local currentExpireTime = self.m_extraOrderExpireTime
  local serverTime = GM.GameModel:GetServerTime()
  local newDuration = timeInSeconds
  if currentExpireTime > serverTime then
    newDuration = newDuration + self.m_extraOrderDuration
  else
    currentExpireTime = serverTime
  end
  local newExpireTime = currentExpireTime + timeInSeconds
  self.m_extraOrderDuration = newDuration
  self.m_extraOrderExpireTime = newExpireTime
  GM.MiscModel:Set(EMiscKey.ExtraOrderDuration, self.m_extraOrderDuration)
  GM.MiscModel:Set(EMiscKey.ExtraOrderExpireTime, self.m_extraOrderExpireTime)
  self:SetWindowPopped(false)
  self:_TryGenerateExtraOrder()
  local leftTime = newExpireTime - serverTime
  GM.BIManager:LogAction(EBIType.ExtraOrder, leftTime)
end

function PropItemExtraOrder:_TryGenerateExtraOrder()
  local mainOrderModel = GM.MainBoardModel:GetOrderModel()
  mainOrderModel:ClearExtraOrderFlag()
  mainOrderModel:TryFillOrdersManually()
end

function PropItemExtraOrder:IsOn()
  if not GM.ConfigModel:HasExtraOrderFunction() then
    return false
  end
  return GM.GameModel:GetServerTime() <= self.m_extraOrderExpireTime
end

function PropItemExtraOrder:CanPopWindow()
  return self:IsOn() and not self:HasWindowPopped()
end

function PropItemExtraOrder:HasWindowPopped()
  return GM.MiscModel:Get(EMiscKey.ExtraOrderPopWindow) == "1"
end

function PropItemExtraOrder:SetWindowPopped(bool)
  GM.MiscModel:Set(EMiscKey.ExtraOrderPopWindow, bool and "1" or "0")
end

function PropItemExtraOrder:GetDuration()
  if not GM.ConfigModel:HasExtraOrderFunction() then
    return -1
  end
  return self.m_extraOrderDuration
end

function PropItemExtraOrder:GetEndTime()
  if not GM.ConfigModel:HasExtraOrderFunction() then
    return -1
  end
  return self.m_extraOrderExpireTime
end
