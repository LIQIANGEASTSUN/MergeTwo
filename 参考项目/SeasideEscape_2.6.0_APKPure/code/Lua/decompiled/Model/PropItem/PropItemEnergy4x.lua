PropItemEnergy4x = setmetatable({}, PropItemBase)
PropItemEnergy4x.__index = PropItemEnergy4x

function PropItemEnergy4x:LateInit()
  local energy4xInfo = GM.MiscModel:Get(EMiscKey.Energy4x)
  if not StringUtil.IsNilOrEmpty(energy4xInfo) then
    self.m_mapEnergy4xInfo = json.decode(StringUtil.Replace(energy4xInfo, "@", ","))
  end
  self.m_mapEnergy4xInfo = self.m_mapEnergy4xInfo or {
    startTime = 0,
    lastDur = 0,
    multiple = 0,
    popPreview = 0
  }
end

function PropItemEnergy4x:UpdatePerSecond()
  if self.m_mapEnergy4xInfo and self:IsOn() then
    if not self.m_bInEnergy4XLastDuration then
      self.m_bInEnergy4XLastDuration = true
    end
  elseif self.m_bInEnergy4XLastDuration then
    self.m_bInEnergy4XLastDuration = nil
    EventDispatcher.DispatchEvent(EEventType.Energy4xStateChanged)
  end
end

function PropItemEnergy4x:OnAcquired(duration)
  if not duration or not IsNumber(duration) then
    return
  end
  local serverTime = GM.GameModel:GetServerTime()
  local leftTime = self.m_mapEnergy4xInfo.startTime + self.m_mapEnergy4xInfo.lastDur - serverTime
  if leftTime < 0 then
    self.m_mapEnergy4xInfo.startTime = serverTime
    self.m_mapEnergy4xInfo.lastDur = duration
    self.m_mapEnergy4xInfo.multiple = 4
    self.m_mapEnergy4xInfo.popPreview = 1
    GM.BIManager:LogAction(EBIType.DoubleEnergySwitch, {t = 4, type = "auto"})
    leftTime = duration
  else
    self.m_mapEnergy4xInfo.lastDur = self.m_mapEnergy4xInfo.lastDur + duration
    leftTime = leftTime + duration
  end
  GM.BIManager:LogAction(EBIType.Energy4x, leftTime)
  GM.MiscModel:Set(EMiscKey.Energy4x, StringUtil.Replace(json.encode(self.m_mapEnergy4xInfo), ",", "@"))
  EventDispatcher.DispatchEvent(EEventType.Energy4xStateChanged)
end

function PropItemEnergy4x:IsOn()
  if not self.m_mapEnergy4xInfo then
    self:LateInit()
  end
  if self.m_mapEnergy4xInfo and self.m_mapEnergy4xInfo.startTime + self.m_mapEnergy4xInfo.lastDur >= GM.GameModel:GetServerTime() then
    return true
  end
end

function PropItemEnergy4x:CanPopWindow()
  if self:IsOpenMultiEnergy() and self.m_mapEnergy4xInfo.multiple == 4 then
    return not self:HasWindowPopped()
  end
end

function PropItemEnergy4x:HasWindowPopped()
  return self.m_mapEnergy4xInfo.popPreview == 0
end

function PropItemEnergy4x:SetWindowPopped()
  if self:IsOpenMultiEnergy() then
    self.m_mapEnergy4xInfo.popPreview = 0
    GM.MiscModel:Set(EMiscKey.Energy4x, StringUtil.Replace(json.encode(self.m_mapEnergy4xInfo), ",", "@"))
  end
end

function PropItemEnergy4x:GetDuration()
  return self.m_mapEnergy4xInfo.lastDur
end

function PropItemEnergy4x:GetEndTime()
  return self.m_mapEnergy4xInfo.startTime + self.m_mapEnergy4xInfo.lastDur
end

function PropItemEnergy4x:SetEnergy4xMultiple(multiple)
  if self:IsOn() and IsNumber(multiple) then
    self.m_mapEnergy4xInfo.multiple = multiple
    GM.MiscModel:Set(EMiscKey.Energy4x, StringUtil.Replace(json.encode(self.m_mapEnergy4xInfo), ",", "@"))
    EventDispatcher.DispatchEvent(EEventType.Energy4xStateChanged)
  end
end

function PropItemEnergy4x:IsOpenMultiEnergy()
  if self:IsOn() then
    return self.m_mapEnergy4xInfo.multiple > 1
  end
  return false
end

function PropItemEnergy4x:GetEnergyMultiple()
  return self:IsOpenMultiEnergy() and self.m_mapEnergy4xInfo.multiple or 1
end
