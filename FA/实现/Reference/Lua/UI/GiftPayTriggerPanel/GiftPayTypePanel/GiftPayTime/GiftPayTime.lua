
---@class GiftPayTime
local GiftPayTime = class(nil, "GiftPayTime")

function GiftPayTime:ctor(giftId, txt_time, panel)
    self.giftId = giftId
    self.txt_time = txt_time
    self.panel = panel

    self:StartTimer()
end

function GiftPayTime:TimerRefresh()
    if not Runtime.CSValid(self.txt_time) then
        self:StopTimer()
        return
    end
    local difftime = math.max(0, AppServices.GiftManager:GetGiftCloseTime(self.giftId) - TimeUtil.ServerTime())
    local hour = math.floor(difftime / 3600)
    self.txt_time.text = TimeUtil.SecToHMS(difftime)
    if hour < 1 then
        self.txt_time.color = Color.red
    end
    if difftime <= 0 then
        self.panel:TimeEnd()
    end
end

function GiftPayTime:StartTimer()
    self:StopTimer()
    self.timerId = WaitExtension.InvokeRepeating(function()
        self:TimerRefresh()
    end, 0, 1)
end

function GiftPayTime:StopTimer()
    if self.timerId then
        WaitExtension.CancelTimeout(self.timerId)
        self.timerId = nil
    end
end

function GiftPayTime:Clear()
    self:StopTimer()
end

return GiftPayTime