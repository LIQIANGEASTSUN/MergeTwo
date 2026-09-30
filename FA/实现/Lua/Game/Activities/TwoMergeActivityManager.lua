---@type ActivityBase
local ActivityBase = require("Game.Activities.ActivityBase")
---@class TwoMergeActivityManager:ActivityBase 二合活动
local TwoMergeActivityManager = class(ActivityBase, "TwoMergeActivityManager")
---@type MergeConfigUtil
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

function TwoMergeActivityManager:ctor()
    self.hasTwoMergeData = false
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.OnRequestSucc, self)
    MessageDispatcher:AddMessageListener(MessageType.Task_OnTaskStart, self.OnTaskStart, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_UseItem, self.OnUseItem, self)
end

function TwoMergeActivityManager:Destroy()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.OnRequestSucc, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Task_OnTaskStart, self.OnTaskStart, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_UseItem, self.OnUseItem, self)
end

function TwoMergeActivityManager:GetPopKey()
    return "TwoMergePopKey_"
end

-- 活动解锁
function TwoMergeActivityManager:OnUnlock()
    -- 向服务器请求活动信息
    self:DoTwoMergeInfoRequest()
end

function TwoMergeActivityManager:OnInitActivity(finishCallback)
    self:DoTwoMergeInfoRequest(finishCallback)
end

function TwoMergeActivityManager:DoTwoMergeInfoRequest(finishCallback)
    local curLevel = AppServices.User:GetCurrentLevelId()
    local config = AppServices.Meta:Category("ActivityTemplate")[self.activityId]
    -- 等级不足 不请求
    if curLevel < config.unlockLevel then
        Runtime.InvokeCbk(finishCallback)
        return
    end
    local cfg = self:GetActivityConfig()
    if cfg.unlockTask and cfg.unlockTask ~= "" and not AppServices.Task:IsTaskSubmit(cfg.unlockTask) then
        Runtime.InvokeCbk(finishCallback)
        return
    end
    local function funcSuccessCbk(response)
        self:CheckEntrance()
        AppServices.TwoMergeManager:CheckMapData(self.activityId)
        self.waitInitContinuousGift = true
        Runtime.InvokeCbk(finishCallback)
    end

    local function funcFailedCbk(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
        Runtime.InvokeCbk(finishCallback)
    end

    Net.Activitytwomergemodulemsg_30241_ActivityTwoMergeOpen_Request({ activityId = self.activityId }, funcFailedCbk, funcSuccessCbk)
end

function TwoMergeActivityManager:CheckEntrance()
    local inScene = false

    local config = AppServices.Meta:Category("ActivityTemplate")[self.activityId]
    if config.sceneID == "city" then
        inScene = self:IsInScenes()
    else
        local curSceneId = App.scene:GetCurrentSceneId()
        inScene = curSceneId == self:GetSceneId()
    end
    if self:IsUnlock() and self:IsInActivityTime() and inScene then
        local netdata = AppServices.TwoMergeManager:GetNetData(self.activityId)
        if netdata ~= nil then
            self:OnCheckEntrance()
            return
        else
            AppServices.TwoMergeManager:CheckMapData(self.activityId)
        end
    end
    self:CloseEntrance()
end

--- 特殊处理 sceneId列配置的是共生活动的活动Id [>>> *** activity表不允许重复sceneId *** <<<]
function TwoMergeActivityManager:GetSceneId()
    local cfg = self:GetActivityConfig()
    if cfg ~= nil then
        if cfg.sceneID == "city" then
            return "city"
        else
            local config = AppServices.Meta:Category("ActivityTemplate")[cfg.sceneID]
            if config ~= nil then
                return config.sceneID
            end
        end
    end
    return nil
end

---任务开始
function TwoMergeActivityManager:OnTaskStart(taskKind, taskId)
    if self.finishButtonTask then return end

    if self.activityId ~= nil then
        local mapId = self.activityId
        local openTaskId = MergeConfigUtil.GetOpenButtonTask(mapId)
        if openTaskId == taskId then
            self:CheckEntrance()
        end
    end
end

function TwoMergeActivityManager:OnRequestSucc(isRequest) -- 是否真实请求
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.activityId]
    self.energyId = config.default_use_power or ItemId.ENERGY

    if self.energyId ~= ItemId.ENERGY and isRequest then
        self:EnergyRequest() --- 请求体力信息
    end
    self:CheckEntrance()
end

function TwoMergeActivityManager:EnergyRequest()
    local succfunc = function(info)
        local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.activityId]
        local maxcount = tonumber(config.default_use_limit) -- 最大数量上限
        local cd = tonumber(config.default_use_grown) -- cd
        if self.energyId ~= ItemId.ENERGY then
            -- itemId, count, maxcount, recoverycd, laststamp
            local count = info.cur
            local laststamp = info.purpleEnergyValueTime * 0.001
            AppServices.User:SetPropNumber(self.energyId, count)
            AppServices.RecoveryItemManager.AddRecovery(self.energyId, count, maxcount, cd, laststamp)
        end
    end
    local failfunc = function(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    Net.Coremodulemsg_1033_PurpleEnergy_Request({}, failfunc, succfunc)
end

function TwoMergeActivityManager:CloseEntrance()
    local btn = App.scene:GetWidget(CONST.MAINUI.ICONS.TwoMergeButton)
    if btn then btn:SetMapId(nil) end
end

--- 检测活动入口
function TwoMergeActivityManager:OnCheckEntrance()
    local btn = App.scene:GetWidget(CONST.MAINUI.ICONS.TwoMergeButton)
    if btn then
        local mapId = self.activityId
        local openTaskId = MergeConfigUtil.GetOpenButtonTask(mapId)
        if openTaskId == nil then
            btn:SetMapId(mapId)
            return
        end

        local state = AppServices.Task:GetTaskState(openTaskId)
        if state ~= TaskState.locked then
            self.finishButtonTask = true
            local mapId = self.activityId
            btn:SetMapId(mapId)
            if self.waitInitContinuousGift then
                ---触发连续礼包
                AppServices.ContinuousGiftManager:CreatePack(self:GetActivityId())
                self.waitInitContinuousGift = false
            end
        else
            btn:SetMapId(nil) -- 关闭按钮
        end
    end
end

---活动结束信息处理
---@param endActivityMsg EndActivityMsg
function TwoMergeActivityManager:OnEndActivityMsg(endActivityMsg, finishCallback)
    self.activityId = endActivityMsg.activityId
    self.isSendOverMsg = true
    AppServices.RecoveryItemManager.RemoveRecovery(self.energyId)

    if table.isEmpty(endActivityMsg) then
        Runtime.InvokeCbk(finishCallback)
        return
    end
    Runtime.InvokeCbk(finishCallback)
end

function TwoMergeActivityManager:GetLefttime()
    local starttime, endtime = self:GetTime()
    local now = TimeUtil.ServerTime()
    return endtime / 1000 - now
end

function TwoMergeActivityManager:ShowEndPanel(finishCallback)
    Runtime.InvokeCbk(finishCallback)
end

-- function TwoMergeActivityManager:BI()
--     local biParams = {
--     }
--     DcDelegates:Log(SDK_EVENT.jam_game_finish, biParams)
--     DcDelegates:TDLog(SDK_EVENT.jam_game_finish,biParams)
-- end

function TwoMergeActivityManager:HaveOneTokenEvent()
   return false
end

function TwoMergeActivityManager:GetEnergyId()
    return self.energyId or ItemId.ENERGY
end

function TwoMergeActivityManager:IsDoing()
    return self:IsUnlock() and self:IsInActivityTime()
end

function TwoMergeActivityManager:NeedFlyReward(count)
    if not self:IsDoing() then return false, 0 end
    if self.energyId == ItemId.ENERGY then return false, 0 end
    count = count or 0
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.activityId]
    local rate = tonumber(config.default_use_change) -- 转化比例
    local getCount = math.modf(count * rate) -- 向下取整
    if getCount <= 0 then return false, 0 end
    return true, getCount
end

function TwoMergeActivityManager:OnUseItem(id, num)
    if id == ItemId.ENERGY and self:GetEnergyId() ~= ItemId.ENERGY then
        local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.activityId]
        local rate = tonumber(config.default_use_change) -- 转化比例
        local getCount = math.modf(num * rate) -- 向下取整
        if getCount > 0 then
            AppServices.User:AddItem(self:GetEnergyId(), getCount)
        end
    end
end

return TwoMergeActivityManager.new()