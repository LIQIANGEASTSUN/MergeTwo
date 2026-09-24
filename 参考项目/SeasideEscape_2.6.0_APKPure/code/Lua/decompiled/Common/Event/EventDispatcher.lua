EventDispatcher = {}
EventDispatcher._listeners = {}
EventDispatcher._ArrWaitingDispatchNewTarget = {}
EventDispatcher._ArrCachedDispatchingEvent = {}
EventDispatcher._ArrWaitingDispatchTarget = {}

function EventDispatcher.AddListener(eventType, target, listener)
  if not target or not listener then
    Log.Error((target == nil and "target is nil" or "listener is nil") .. " for event " .. eventType)
  end
  if not EventDispatcher._listeners[eventType] then
    EventDispatcher._listeners[eventType] = setmetatable({}, {__mode = "k"})
  end
  EventDispatcher._listeners[eventType][target] = listener
  if EventDispatcher.DispatchingEventType == eventType and not Table.ListContain(EventDispatcher._ArrWaitingDispatchNewTarget, target) then
    table.insert(EventDispatcher._ArrWaitingDispatchNewTarget, target)
  end
end

function EventDispatcher.AddActiveListener(eventType, target, listener)
  assert(target.gameObject ~= nil)
  
  local function wrapper(target, message)
    if target.gameObject.activeInHierarchy then
      listener(target, message)
    end
  end
  
  EventDispatcher.AddListener(eventType, target, wrapper)
end

function EventDispatcher.RemoveListener(eventType, target)
  Log.Assert(target, "EventDispatcher.RemoveListener")
  if EventDispatcher._listeners[eventType] and EventDispatcher._listeners[eventType][target] then
    EventDispatcher._listeners[eventType][target] = nil
    Table.ListRemove(EventDispatcher._ArrWaitingDispatchTarget, target)
    Table.ListRemove(EventDispatcher._ArrWaitingDispatchNewTarget, target)
  else
    Log.Warning("no matching listener to remove :" .. tostring(eventType))
  end
end

function EventDispatcher.RemoveTarget(target)
  for _, listeners in pairs(EventDispatcher._listeners) do
    if listeners[target] then
      listeners[target] = nil
    end
  end
  Table.ListRemove(EventDispatcher._ArrWaitingDispatchTarget, target)
  Table.ListRemove(EventDispatcher._ArrWaitingDispatchNewTarget, target)
end

function EventDispatcher.DispatchEvent(eventType, message)
  if EventDispatcher.DispatchingEventType ~= nil then
    EventDispatcher._ArrCachedDispatchingEvent[#EventDispatcher._ArrCachedDispatchingEvent + 1] = {event = eventType, message = message}
    return
  end
  local listeners = EventDispatcher._listeners[eventType]
  if listeners then
    EventDispatcher.DispatchingEventType = eventType
    for target, _ in pairs(listeners) do
      table.insert(EventDispatcher._ArrWaitingDispatchTarget, target)
    end
    while EventDispatcher._ArrWaitingDispatchTarget[1] ~= nil do
      local target = table.remove(EventDispatcher._ArrWaitingDispatchTarget)
      listeners[target](target, message)
    end
    while EventDispatcher._ArrWaitingDispatchNewTarget[1] ~= nil do
      local target = EventDispatcher._ArrWaitingDispatchNewTarget[1]
      listeners[target](target, message)
      table.remove(EventDispatcher._ArrWaitingDispatchNewTarget)
    end
    EventDispatcher.DispatchingEventType = nil
  end
  if #EventDispatcher._ArrCachedDispatchingEvent > 0 then
    local dispatchingData = table.remove(EventDispatcher._ArrCachedDispatchingEvent, 1)
    EventDispatcher.DispatchEvent(dispatchingData.event, dispatchingData.message)
  end
end

function EventDispatcher.Clear()
  if GameConfig.IsTestMode() and not Table.IsEmpty(EventDispatcher._listeners) then
    for eventType, targets in pairs(EventDispatcher._listeners) do
      if not Table.IsEmpty(targets) then
        for target, func in pairs(targets) do
          if target and target.gameObject and not target.gameObject:IsNull() and target.OnDestroy then
            target:OnDestroy()
          end
        end
      end
    end
    local output = {}
    for eventType, targets in pairs(EventDispatcher._listeners) do
      if not Table.IsEmpty(targets) then
        for target, func in pairs(targets) do
          if func then
            local info = debug.getinfo(func)
            local strInfo = info.short_src
            local objName = target and (target.name or target.m_name)
            if objName then
              strInfo = objName .. ", " .. strInfo
            end
            if output[eventType] == nil then
              output[eventType] = {strInfo}
            elseif not Table.Contain(output[eventType], strInfo) then
              table.insert(output[eventType], strInfo)
            end
          end
        end
      end
    end
    if not Table.IsEmpty(output) then
      for eventType, allSrc in pairs(output) do
        for _, src in pairs(allSrc) do
          Log.Error("EventDispatcher. listener not removed. type:" .. eventType .. ", file:" .. src)
        end
      end
    end
  end
  EventDispatcher._listeners = {}
end
