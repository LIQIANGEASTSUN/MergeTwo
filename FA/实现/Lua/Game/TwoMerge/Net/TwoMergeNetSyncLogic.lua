local TwoMergeNetSyncLogic = {}
local _mapId = 0

local sync_time_interval = 10
local last_sync_time = 0
local _timer = nil
local isLog = false

TwoMergeNetSyncLogic.Init = function(mapId)
    _mapId = mapId
    last_sync_time = TimeUtil.ServerTime()
    _timer = WaitExtension.InvokeRepeating(TwoMergeNetSyncLogic.Tick, 0, 1)
end

TwoMergeNetSyncLogic.Destroy = function()
    if _timer ~= nil then
        WaitExtension.CancelTimeout(_timer)
        _timer = nil
    end
end

TwoMergeNetSyncLogic.Trigger = function() last_sync_time = 0 end

TwoMergeNetSyncLogic.Tick = function()
    local now = TimeUtil.ServerTime()
    -- if last_sync_time + sync_time_interval - now < 3 and not isLog then
    --     console.error(">>>  准备同步 ")
    --     isLog = true
    -- end
    if last_sync_time + sync_time_interval <= now then
        last_sync_time = now
        -- isLog = false
        AppServices.TwoMergeManager:SynGridInfoRequest(_mapId)
    end
end

return TwoMergeNetSyncLogic