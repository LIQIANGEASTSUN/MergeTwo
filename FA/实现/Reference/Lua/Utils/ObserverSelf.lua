
---@class ObserverSelf
local ObserverSelf = class(nil, "ObserverSelf")

function ObserverSelf:ctor()
    self.observers = {}
end

-- 注册观察者
function ObserverSelf:Register(key, callback, observer)
    local listenerList = self.observers[key]
    local listener = {observer = observer, callback = callback}
    if table.isEmpty(listenerList) then
        self.observers[key] = {listener}
        return
    end

    for _, v in ipairs(listenerList) do
        if v.callback == callback and v.observer == observer then
            return
        end
    end
    table.insert(listenerList, listener)
end

-- 移除观察者
function ObserverSelf:Remove(key, callback, observer)
    local listenerList = self.observers[key]
    if table.isEmpty(listenerList) then
        return
    end

    for index, v in ipairs(listenerList) do
        if v.callback == callback and v.observer == observer then
            table.remove(listenerList, index)
        end
    end
end

-- 通知观察者
-- function ObserverSelf:Notify(key, ...)
--     local listenerList = self.observers[key]
--     if table.isEmpty(listenerList) then
--         return
--     end

--     for _, v in ipairs(listenerList) do
--         Runtime.InvokeCbk(v.callback, v.observer, ...)
--     end
-- end

-- 通知观察者
--- 如果 abortResult 非空，函数执行返回结果等于 abortResult 则退出后续执行
function ObserverSelf:Notify(key, abortResult, ...)
    local listenerList = self.observers[key]
    if table.isEmpty(listenerList) then
        return
    end

    for _, v in ipairs(listenerList) do
        local result = v.callback(v.observer, ...)
        if result and abortResult and result == abortResult then
            break
        end
    end
end

return ObserverSelf