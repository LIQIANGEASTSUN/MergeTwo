Scheduler = {
  _unitList = {}
}
Scheduler.__index = Scheduler
Scheduler.RepeatForever = -1

function Scheduler.Schedule(callback, target, interval, repeatTimes, delay, unscheduleCallback)
  if not callback then
    return
  end
  if not Scheduler.IsScheduled(callback, target) then
    table.insert(Scheduler._unitList, SchedulerUnit.Create(callback, target, interval, repeatTimes, delay, unscheduleCallback))
  end
end

function Scheduler.Unschedule(callback, target)
  if not callback then
    return
  end
  local unitList = Scheduler._unitList
  local index = 1
  while index <= #unitList do
    if unitList[index]:GetCallback() == callback and (not target or unitList[index]:GetTarget() == target) then
      Scheduler._UnscheduleUnit(unitList, index)
      return
    end
    index = index + 1
  end
  Log.Warning("no matching selector to unschedule")
end

function Scheduler.UnscheduleTarget(target)
  local unitList = Scheduler._unitList
  local index = 1
  while index <= #unitList do
    if unitList[index]:GetTarget() == target then
      Scheduler._UnscheduleUnit(unitList, index)
    else
      index = index + 1
    end
  end
end

function Scheduler._UnscheduleUnit(unitList, index)
  local unit = unitList[index]
  if unit._unscheduleCallback then
    unit._unscheduleCallback()
    unit._unscheduleCallback = nil
  end
  table.remove(unitList, index)
end

function Scheduler.PauseTarget(target)
  local index = 1
  while index <= #Scheduler._unitList do
    if Scheduler._unitList[index]:GetTarget() == target then
      Scheduler._unitList[index]:SetRunning(false)
    end
    index = index + 1
  end
end

function Scheduler.ResumeTarget(target)
  local index = 1
  while index <= #Scheduler._unitList do
    if Scheduler._unitList[index]:GetTarget() == target then
      Scheduler._unitList[index]:SetRunning(true)
    end
    index = index + 1
  end
end

function Scheduler.IsScheduled(callback, target)
  if not callback or not target then
    return false
  end
  local index = 1
  while index <= #Scheduler._unitList do
    if Scheduler._unitList[index]:GetCallback() == callback and Scheduler._unitList[index]:GetTarget() == target then
      return true
    end
    index = index + 1
  end
  return false
end

function Scheduler.Update(dt)
  Scheduler._updatedSchedulers = {}
  Scheduler._Update(dt)
end

function Scheduler._Update(dt)
  local bNeedRemove = false
  local schedulersToRemove = {}
  local index = 1
  local scheduleUnit, bTriggered
  local unitList = Scheduler._unitList
  while index <= #unitList do
    scheduleUnit = unitList[index]
    if not Scheduler._updatedSchedulers[scheduleUnit] then
      bTriggered = unitList[index]:Update(dt)
      if bTriggered and scheduleUnit:GetRemainTimes() == 0 then
        bNeedRemove = true
        schedulersToRemove[scheduleUnit] = 1
      end
      Scheduler._updatedSchedulers[scheduleUnit] = 1
    end
    index = index + 1
  end
  if bNeedRemove then
    index = 1
    while index <= #unitList do
      if schedulersToRemove[unitList[index]] then
        table.remove(Scheduler._unitList, index)
      else
        index = index + 1
      end
    end
  end
  index = 1
  local bAgainUpdate = false
  while index <= #unitList do
    if not Scheduler._updatedSchedulers[unitList[index]] then
      bAgainUpdate = true
      break
    end
    index = index + 1
  end
  if bAgainUpdate then
    Scheduler._Update(dt)
  end
end

function Scheduler.Clear()
  Scheduler._unitList = {}
end

SchedulerUnit = {}
SchedulerUnit.__index = SchedulerUnit
SchedulerUnit.__mode = "v"

function SchedulerUnit.Create(callback, target, interval, repeatTimes, delay, unscheduleCallback)
  local unit = setmetatable({}, SchedulerUnit)
  unit[callback] = true
  unit._callback = callback
  unit._unscheduleCallback = unscheduleCallback
  unit._target = target
  unit._interval = interval or 0
  unit._remainTimes = repeatTimes or Scheduler.RepeatForever
  unit._delay = delay or unit._interval
  unit._deltaTime = 0
  unit._hasfirstCalled = false
  unit._running = true
  return unit
end

function SchedulerUnit:Update(dt)
  if not self._running then
    return false
  end
  self._deltaTime = self._deltaTime + dt
  if not self._hasfirstCalled then
    if self._deltaTime >= self._delay then
      self._hasfirstCalled = true
      self._deltaTime = self._deltaTime - self._delay
      SafeCall(self._XpExecuteFunc1, self)
      self._remainTimes = self._remainTimes - 1
      return true
    end
  elseif self._deltaTime >= self._interval or self._interval == 0 then
    self._deltaTime = self._deltaTime - self._interval
    SafeCall(self._XpExecuteFunc2, self, dt)
    self._remainTimes = self._remainTimes - 1
    return true
  end
  return false
end

function SchedulerUnit:GetRemainTimes()
  return self._remainTimes
end

function SchedulerUnit:GetCallback()
  return self._callback
end

function SchedulerUnit:GetTarget()
  return self._target
end

function SchedulerUnit:IsRunning()
  return self._running == true
end

function SchedulerUnit:SetRunning(bRunning)
  self._running = bRunning
end

function SchedulerUnit:_XpExecuteFunc1()
  if self._target then
    self._callback(self._target, 0)
  else
    self._callback(0)
  end
end

function SchedulerUnit:_XpExecuteFunc2(dt)
  if self._target then
    self._callback(self._target, self._interval > 0 and self._interval or dt)
  else
    self._callback(self._interval > 0 and self._interval or dt)
  end
end
