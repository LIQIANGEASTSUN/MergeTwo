---@class ActivityBase 活动基类
local ActivityBase = class(nil, "ActivityBase")
---@param activityData ActivityMsg
function ActivityBase:ctor()
    self.unlockCheck = nil
    self._isUnlock = nil
    -- -- console.lzl('--------ActivityBase:ctor-----', self) --@DEL
    self._registers = {}
    self._timerIds = {}
    self._durationCheckCbks = {}
    self._refreshCheckCbks = {}
end

---获取到活动数据
---@param activityMsg ActivityMsg
function ActivityBase:OnGetActivityMsg(activityMsg, finishCallback)
    --已经初始化过的活动, 更新即可, 在子类中自行选择更新方式
    if self:IsInited() then
        self:UpdateActivity(activityMsg, finishCallback)
    else
        -- 初始化活动
        self:InitActivity(activityMsg, finishCallback)
    end
end

---@param activityMsg ActivityMsg
function ActivityBase:InitActivity(activityMsg, finishCallback)
    if self:CheckHadInit(finishCallback) then
        self:SetConfig(activityMsg)
        self:InitActAction(finishCallback)
    end
end

function ActivityBase:CheckHadInit(finishCallback)
    if self._inited then
        Runtime.InvokeCbk(finishCallback)
        return false
    end
    self._inited = true
    return true
end
 
function ActivityBase:SetConfig(activityMsg)
    self.activityMsg = activityMsg
    local activityId = activityMsg.activityId
    self.activityId = activityId
    local activityConfig = AppServices.Meta:Category("ActivityTemplate")[activityId]
    self.activityConfig = activityConfig
end

function ActivityBase:InitActAction(finishCallback)
    local activityConfig = self:GetActivityConfig()
    -- 0. 检查任务配置
    -- -- console.lzl('---InitActivity--', table.serialize(activityMsg), activityConfig.sceneID) --@DEL
    if not string.isEmpty(activityConfig.sceneID) and self:NeedInitTask() then
        AppServices.Task:InitActivityTaskConifgs(activityConfig.sceneID)
    end
    -- 1. 检查解锁
    local isUnlock = self:CheckUnlock()
    -- 2. 已解锁处理
    self:SetUnlock(isUnlock)
    -- 3. 检查是不是在活动时间内
    self:checkActivityTime()
    -- 4. 触发初始化回调, 子类用
    self:OnInitActivity(finishCallback)
end

function ActivityBase:NeedInitTask()
    return true
end

function ActivityBase:CheckEntrance()
    if self:IsUnlock() and self:IsInActivityTime() and self:IsInScenes() then
        self:OnCheckEntrance()
    end
end

function ActivityBase:OnCheckEntrance()
end

function ActivityBase:IsInited()
    return self._inited
end

function ActivityBase:UpdateActivity(activityMsg, finishCallback)
    self.activityMsg = activityMsg
    self:OnUpdateActivityData(finishCallback)
    self:CheckEntrance()
end

function ActivityBase:InitPrewarmUp(activityMsg)
    if self._inited then
        return
    end
    self._inited = true
    self.activityMsg = activityMsg
    -- -- console.lzl('---InitActivity--', table.serialize(activityMsg)) --@DEL
    local activityId = activityMsg.activityId
    self.activityId = activityId
    local activityConfig = AppServices.Meta:Category("ActivityTemplate")[activityId]
    self.activityConfig = activityConfig
    -- 0. 检查任务配置
    if not string.isEmpty(activityConfig.sceneID) then
        AppServices.Task:InitActivityTaskConifgs(activityConfig.sceneID)
    end
    -- 1. 检查解锁
    local isUnlock = self:CheckUnlock()
    -- 2. 已解锁处理
    self:SetUnlock(isUnlock)
    -- 3. 检查是不是在活动时间内
    self:checkActivityTime()
end
-----接口
---初始化 活动
function ActivityBase:OnInitActivity(finishCallback)
    -- -- console.lzl("OnInitActivity", self) --@DEL
    Runtime.InvokeCbk(finishCallback)
end

---更新 活动
function ActivityBase:OnUpdateActivityData(finishCallback)
    -- -- console.lzl("OnUpdateActivityData", self) --@DEL
    Runtime.InvokeCbk(finishCallback)
end

---活动结束信息处理
---@param endActivityMsg EndActivityMsg
function ActivityBase:OnEndActivityMsg(endActivityMsg, finishCallback, isInQueue)
    self.activityId = endActivityMsg.activityId
    self.isSendOverMsg = true
    if table.isEmpty(endActivityMsg) then
        Runtime.InvokeCbk(finishCallback)
        return
    end
    if endActivityMsg.rewardState == 0 then
        Runtime.InvokeCbk(finishCallback)
    else
        self:MapRankRewardRequest(finishCallback, nil, isInQueue, true)
    end
end

function ActivityBase:OnMapRankRewardResponse(rankRewards, finishCallback)
    -- -- console.lzl("OnMapRankRewardResponse", table.serialize(rankRewards)) --@DEL
    Runtime.InvokeCbk(finishCallback)
end

function ActivityBase:MapRankRewardRequest(finishCallback, isOnlineEnd, isInQueue)
    local activityId = self:GetActivityId()
    if not activityId then
        console.error("no activityId") --@DEL
        Runtime.InvokeCbk(finishCallback)
        return
    end
    local params = {
        activityId = activityId
    }
    local function funcSuccessCbk(response)
        local rankRewards = Net.Converter.ConvertArray(response.rankRewards, Net.Converter.ConvertRankRewardMsg) or {}

        for _, rankRewardMsg in ipairs(rankRewards) do
            if rankRewardMsg.rewards then
                for _, v in ipairs(rankRewardMsg.rewards) do
                    if ItemId.IsDragon(v.itemTemplateId) then
                        ConnectionManager:block()
                        for _ = 1, v.count do
                            AppServices.MagicalCreatures:AddDragonByItem(v.itemTemplateId)
                        end
                        ConnectionManager:flush(false)
                    else
                        AppServices.User:AddItem(v.itemTemplateId, v.count, ItemGetMethod.MapRankReward)
                    end
                end
            end
        end
        self:OnMapRankRewardResponse(rankRewards, finishCallback, isOnlineEnd, isInQueue)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(finishCallback)
        console.error("MapRankRewardRequest Error ", errorCode, activityId)
    end
    Net.Activitymapmodulemsg_26304_MapRankReward_Request(params, funcFailedCbk, funcSuccessCbk)
    -- finishCallback()
end

--活动Id
function ActivityBase:GetActivityId()
    return self.activityId
end

---活动解锁
function ActivityBase.OnUnlock(self)
    -- -- console.lzl("OnUnlock", self) --@DEL
end

---达到解锁等级
function ActivityBase.OnUnlockLevel(self)
    -- -- console.lzl("OnUnlockLevel", self) --@DEL
end

---完成解锁活动任务
function ActivityBase.OnUnlockTask(self)
    -- -- console.lzl("OnUnlockTask", self) --@DEL
end
---获取任务按钮icon
function ActivityBase.GetTaskIconButton()
end
---活动时间到开始
function ActivityBase.OnActivityBegin(self, isFromTimer)
    self._isOver = false
    -- -- console.lzl("OnActivityBegin", isFromTimer, self) --@DEL
    if isFromTimer then
        self:checkStartEndTimer()
    end
end

---获取排行结束时间
function ActivityBase:GetRankEndTime()
    if not self.rankEndTime then
        self.rankEndTime = self.activityMsg and self.activityMsg.rankEndTime / 1000
    end
    return self.rankEndTime
end
---获取活动内挂机奖励
function ActivityBase:GetHangUpRewardConfig()
end
---活动时间到结束
function ActivityBase.OnActivityEnd(self)
    self._isOver = true
    -- -- console.lzl("OnActivityEnd", self) --@DEL
    local cfg = self:GetActivityConfig()
    local sceneCloseTime = cfg.sceneCloseTime
    if sceneCloseTime and sceneCloseTime ~= 0 and App.scene:GetCurrentSceneId() == cfg.sceneID then
        self:StartAutoKickTimer(TimeUtil.ServerTimeMilliseconds())
    end
    MessageDispatcher:SendMessage(
        MessageType.Activity_On_Activity_End,
        {activityId = self.activityId, activityType = self.activityConfig.type}
    )
end

function ActivityBase:OnActivityAutoKick()
    local cfg = self:GetActivityConfig()
    if App.scene:GetCurrentSceneId() == cfg.sceneID then
        AppServices.Jump.changeSceneById(SceneMode.home.name, nil, true)
    end
end

function ActivityBase:IsOver()
    return self._isOver
end

---查询是否解锁
function ActivityBase:IsUnlock()
    return self._isUnlock
end

---查询活动时间
function ActivityBase:GetTime()
    local data = self.activityMsg
    if not data then
        -- -- console.lzl("error", self) --@DEL
        return 0,0,0
    end
    return data.startTime, data.endTime, data.prewarm
end

---是否在活动时间内
function ActivityBase:IsInActivityTime()
    if not self._inited or not self.activityMsg then
        return false
    end
    local now = TimeUtil.ServerTimeMilliseconds()
    local st, et = self:GetTime()
    if not st or not et then
        return false
    end
    return now >= st and now <= et
end

function ActivityBase:IsInScenes()
    local cfg = self:GetActivityConfig()
    if cfg then
        return AppServices.ButtonsForSceneManager.CheckScenes(cfg.showId)
    end
end

function ActivityBase:IsValid()
    return self:IsInActivityTime() and self:IsUnlock()
end

function ActivityBase:GetPopKey()
    
end

function ActivityBase:GetSaveKey(keyStr)
    keyStr = keyStr or self:GetPopKey()
    if keyStr then
        local activityId = self:GetActivityId()
        local key = string.format("%s%s", keyStr, activityId)
        return key
    end
end

function ActivityBase:CheckPop()
    local isCan = self:IsValid() and self:IsInScenes()
    if not isCan then
        return false
    end
    local key = self:GetSaveKey()
    if key then
        local value = AppServices.User.Default:GetKeyValue(key, 0)
        if value > 0 then
            return false
        end
    end
    return true
end

function ActivityBase:IsTimeOut()
    local now = TimeUtil.ServerTime()
    local _, et = self:GetTime()
    if not et then
        return false
    end
    et = et // 1000
    return now >= (et - 1)
end

function ActivityBase:IsReopen()
    local reopen = self.reopen
    return reopen
end
function ActivityBase:IsDoubleItem(itemId)
    if not itemId then
        return false
    end
    if not self.reopen then
        return false
    end
    itemId = tostring(itemId)
    if not self.reopeningpartner then
        local reopeningpartner = {}
        local activityMeta = self:GetActivityConfig()
        if type(activityMeta.reopeningpartner) == "table" then
            for _, id in ipairs(activityMeta.reopeningpartner) do
                reopeningpartner[tostring(id)] = true
            end
        end
        self.reopeningpartner = reopeningpartner
    end
    return self.reopeningpartner[itemId]
end
------------------------------------------------------------内部
function ActivityBase:SetUnlock(isUnlock)
    local old = self._isUnlock
    self._isUnlock = isUnlock
    -- 只有从未解锁到解锁时候触发一次解锁, 初始化时, old == nil
    if old == false and isUnlock == true then
        self:OnUnlock()
        local config = self:GetActivityConfig()
        if not string.isEmpty(config.sceneID) then
            AppServices.Task:CheckOpenActivityTask(config.sceneID)
        end
        MessageDispatcher:SendMessage(MessageType.Activity_On_Activity_Unlock, self.activityMsg.activityId)
    end
end

function ActivityBase:GetActivityConfig()
    return self.activityConfig
end

function ActivityBase:GetData()
    return self.activityMsg
end

function ActivityBase:UpdateData(activityMsg)
    self.activityMsg = activityMsg
end
-----------------解锁检查
---检查解锁
function ActivityBase:CheckUnlock()
    local cfg = self:GetActivityConfig()
    local isUnlock = true
    local unlockLevel = cfg.unlockLevel
    local unlockTask = cfg.unlockTask
    --等级
    if unlockLevel and unlockLevel ~= 0 and unlockLevel > AppServices.User:GetCurrentLevelId() then
        self.unlockCheck = self.unlockCheck or {}
        self.unlockCheck.level = unlockLevel
        isUnlock = false
        self:AddListener("OnPlayerLevelUp", MessageType.Global_After_Player_Levelup)
    end
    -- 任务
    if unlockTask and unlockTask ~= "" and not AppServices.Task:IsTaskSubmit(unlockTask) then
        self.unlockCheck = self.unlockCheck or {}
        self.unlockCheck.taskId = unlockTask
        isUnlock = false
        self:AddListener("OnTaskSubmit", MessageType.Task_After_TaskSubmit)
    end
    if not isUnlock then
        local activityMsg = self.activityMsg
        local lastEnterTime = activityMsg and activityMsg.lastEnterTime
        local endTime = activityMsg and activityMsg.endTime
        local startTime = activityMsg and activityMsg.startTime
        local now = TimeUtil.ServerTimeMilliseconds()
        if lastEnterTime and lastEnterTime > 0 then
            if lastEnterTime < endTime and lastEnterTime > startTime
                and endTime > now
            then
                isUnlock = true
            end
        end
    end
    return isUnlock
end

function ActivityBase:OnPlayerLevelUp(level)
    if not self.unlockCheck or not self.unlockCheck.level or self.unlockCheck.level > level then
        return
    end
    self.unlockCheck.level = nil
    self:OnUnlockLevel()
    self:RemoveListener(MessageType.Global_After_Player_Levelup)
    if table.isEmpty(self.unlockCheck) then
        self:SetUnlock(true)
    end
end

function ActivityBase:OnTaskSubmit(taskId)
    if not self.unlockCheck or self.unlockCheck.taskId ~= taskId then
        return
    end
    self.unlockCheck.taskId = nil
    self:OnUnlockTask()
    self:RemoveListener(MessageType.Task_After_TaskSubmit)
    if table.isEmpty(self.unlockCheck) then
        self:SetUnlock(true)
    end
end

-----------------时间检查
function ActivityBase:checkActivityTime()
    local st, et = self:GetTime()
    local now = TimeUtil.ServerTimeMilliseconds()
    if now < st then -- 未开始
        -- -- console.lzl('----时间检查--未开始', self.activityId) --@DEL
        self:StartBeginTimer(st)
    elseif now < et then
        -- -- console.lzl('----时间检查--已开始', self.activityId) --@DEL
        self:StartEndTimer(et)
    elseif now > et then
        -- -- console.lzl('----时间检查--已结束', self.activityId) --@DEL
        local cfg = self:GetActivityConfig()
        local sceneCloseTime = cfg.sceneCloseTime
        -- -- console.lzl('----时间检查--sceneCloseTime', self.activityId, sceneCloseTime, App.scene:GetCurrentSceneId(), cfg.sceneID)  --@DEL
        if sceneCloseTime and sceneCloseTime ~= 0 and App.scene:GetCurrentSceneId() == cfg.sceneID then
            self:StartAutoKickTimer(et)
        end
    else
        self:OnActivityBegin()
    end
    self:StartRepeat(
        "onSecond",
        function()
            self:OnSecond()
        end
    )
end

function ActivityBase:StartBeginTimer(overTime)
    local callback = function()
        if TimeUtil.ServerTimeMilliseconds() >= overTime then
            -- -- console.lzl("---OnActivityBegin ", self.activityId) --@DEL
            local config = self:GetActivityConfig()
            if not string.isEmpty(config.sceneID) then
                AppServices.Task:CheckOpenActivityTask(config.sceneID)
            end
            self:OnActivityBegin(true)
            self:registDurationCheckCbk("ActivityStartTimer", nil)
        end
    end
    self:registDurationCheckCbk("ActivityStartTimer", callback)
end

function ActivityBase:StartEndTimer(overTime)
    local callback = function()
        if TimeUtil.ServerTimeMilliseconds() >= overTime then
            -- -- console.lzl("---OnActivityEnd") --@DEL
            self:OnActivityEnd()
            self:registDurationCheckCbk("ActivityEndTimer", nil)
            local _, et = self:GetTime()
            if et then
                local cfg = self:GetActivityConfig()
                if cfg then
                    local sceneCloseTime = cfg.sceneCloseTime
                    -- -- console.lzl('----时间检查-2-sceneCloseTime', self.activityId, sceneCloseTime, App.scene:GetCurrentSceneId(), cfg.sceneID)  --@DEL
                    if sceneCloseTime and sceneCloseTime ~= 0 and App.scene:GetCurrentSceneId() == cfg.sceneID then
                        self:StartAutoKickTimer(et // 1000)
                    end
                end
            end
        end
    end
    self:registDurationCheckCbk("ActivityEndTimer", callback)
end

function ActivityBase:StartAutoKickTimer(overTime)
    local cfg = self:GetActivityConfig()
    local sceneCloseTime = cfg.sceneCloseTime
    if not sceneCloseTime or sceneCloseTime == "" then
        return
    end
    local kickTime = overTime + sceneCloseTime * 24 * 60 * 60
    ActivityServices.ActivityManager:StartAutoKickTimer(cfg.sceneID, kickTime)
end

---@private
---检查活动结束的timer
function ActivityBase:checkStartEndTimer()
    local st, et = self:GetTime()
    local now = TimeUtil.ServerTimeMilliseconds()
    if now >= st and now <= et then
        -- -- console.lzl('----时间检查--增加活动结束的timer 2', self.activityId, et) --@DEL
        self:StartEndTimer(et)
    end
end

function ActivityBase:OnSecond()
    --- 检查开启/结束
    self:OnActivityDurationCheck()
    --- 检查刷新
    if self:IsOver() then
        return
    end
    self:OnActivityRefreshCheck()
end

function ActivityBase:registDurationCheckCbk(name, callback)
    self._durationCheckCbks[name] = callback
end

function ActivityBase:registRefreshCheckCbk(name, callback)
    self._refreshCheckCbks[name] = callback
end

function ActivityBase:OnActivityDurationCheck()
    for _, cbk in pairs(self._durationCheckCbks) do
        Runtime.InvokeCbk(cbk)
    end
end
function ActivityBase:OnActivityRefreshCheck()
    for _, cbk in pairs(self._refreshCheckCbks) do
        Runtime.InvokeCbk(cbk)
    end
end

-----------------TOOLS
function ActivityBase:CheckClearDramaCache()
    local cfg = self:GetActivityConfig()
    local sceneId = cfg.sceneID
    if string.isEmpty(sceneId) then
        return
    end
    local taskMgr = AppServices.Task
    local tasks = taskMgr:GetActivitySceneTasks(sceneId)
    if table.isEmpty(tasks) then
        return
    end
    local taskdata = AppServices.User.TaskData
    for _, taskId in ipairs(tasks) do
        if not taskMgr:IsTaskFinish(taskId) then
            local cfg = taskMgr:GetFullConfig(taskId)
            if cfg then
                if not string.isEmpty(cfg.DramaId) and cfg.DramaPlayBeforeMission then
                    local key = taskId .. "_dramaPlayed"
                    local played = taskdata:GetKeyValue(key)
                    if played then
                        taskdata:SetKeyValue(key, false)
                    end
                end
                for subIdx, subCfg in ipairs(cfg.SubMissions) do
                    if not taskMgr:IsSubFinish(taskId, subIdx) and not string.isEmpty(subCfg.DramaId) then
                        local key = taskId .. subIdx .. "_dramaPlayed"
                        local played = taskdata:GetKeyValue(key)
                        if played then
                            taskdata:SetKeyValue(key, false)
                        end
                    end
                end
            end
        end
    end
end

function ActivityBase:AddListener(funcName, messageType)
    if not self._registers[messageType] then
        self._registers[messageType] = funcName
        MessageDispatcher:AddMessageListener(messageType, self[funcName], self)
    end
end

function ActivityBase:RemoveListener(messageType)
    if self._registers[messageType] then
        local funcName = self._registers[messageType]
        MessageDispatcher:RemoveMessageListener(messageType, self[funcName], self)
        self._registers[messageType] = nil
    end
end

function ActivityBase:RemoveAllListener()
    for messageType, funcName in pairs(self._registers) do
        MessageDispatcher:RemoveMessageListener(messageType, self[funcName], self)
    end
end

function ActivityBase:StartRepeat(name, callback)
    self:RemoveTimer(name)
    local timerId = WaitExtension.InvokeRepeating(callback, 0, 1)
    self._timerIds[name] = timerId
    Runtime.InvokeCbk(callback)
end

function ActivityBase:RemoveTimer(name)
    if self._timerIds[name] then
        WaitExtension.CancelTimeout(self._timerIds[name])
        self._timerIds[name] = nil
    end
end

function ActivityBase:RemoveAllTimer()
    for _, timerId in pairs(self._timerIds) do
        WaitExtension.CancelTimeout(timerId)
    end
    self._timerIds = {}
end

---是否需要显示入口界面/单独处理入口
function ActivityBase:NeedShowEntrance()
    return false
end
function ActivityBase:HasPrewarm()
    return false
end
function ActivityBase:ShowEntrance(sceneId)
    AppServices.Jump.changeSceneById(sceneId)
    return false
end

function ActivityBase:ShowPrewarm()
end

---返回处理世界地图界面入口的额外信息
function ActivityBase.GetWorldMapInfo()
end

---跨天刷新
function ActivityBase.onDayRefresh()

end

function ActivityBase:ShowEventMapFeedback()
end

function ActivityBase:CanShowIsEventMapFeedback()
end

function ActivityBase:GetSceneId()
    local cfg = self:GetActivityConfig()
    return cfg and cfg.sceneID
end

function ActivityBase:SetBpRedDotKey(key)
    self.bpRedDotKey = key
end

function ActivityBase:GetBpRedDotKey()
    return self.bpRedDotKey
end

---是否开启了小BP
function ActivityBase:HaveBP()
    -- local cfg = self:GetLevelMetaTable()
    local cfg = ActivityServices.ActivityManager:GetEventMapBPLevelCfg(self:GetActivityId())
    return not not cfg
end

function ActivityBase:GetBPInfo()
    return self.scoreTasks
end

function ActivityBase:GetLevelMetaTable()
    local _eventMapBpLevelCfg = self._eventMapBpLevelCfg
    if not _eventMapBpLevelCfg then
        local activityId = self:GetActivityId()
        _eventMapBpLevelCfg = ActivityServices.ActivityManager:GetEventMapBPLevelCfg(activityId)
        local payLabel = self:GetPayLabel()
        if not table.isEmpty(_eventMapBpLevelCfg) then
            self._eventMapBpLevelCfg = _eventMapBpLevelCfg[payLabel]
            if not self._eventMapBpLevelCfg then
                self._eventMapBpLevelCfg = _eventMapBpLevelCfg[0]
            end
        end
    end
    return self._eventMapBpLevelCfg
end

function ActivityBase:ClearRefreshBPRedDot()
    local bpRedDotKey = self:GetBpRedDotKey()
    if bpRedDotKey then
        AppServices.RedDotManage:ClearCount(bpRedDotKey)
        local cur = self:GetLevel()
        for i = 0, cur do
            if self:CanGetReward(i) then
                AppServices.RedDotManage:SetDate_Count(bpRedDotKey, 1)
                break
            end
        end
    end
end

function ActivityBase:IsUnlockPass()
    local info = self:GetBPInfo()
    return info and info.unlock or false
end

function ActivityBase:GetReceivedRewards()
    local info = self:GetBPInfo()
    if info then
        return info.baseLevels or {}, info.passLevels or {}
    end
end

function ActivityBase:GetLevelCfg(level)
    local lv = tostring(level)
    local cfg = self:GetLevelMetaTable()
    return cfg and cfg[lv]
end

function ActivityBase:CanGetReward(level)
    local curLv = self:GetLevel()
    if level > curLv then
        return false, false
    end
    local info = self:GetBPInfo()
    local base = info.baseLevels
    local vip = info.passLevels
    return not table.exists(base, level), self:IsUnlockPass() and not table.exists(vip, level)
end

function ActivityBase:GetFirstReward()
    local curLv = self:GetLevel()
    local info = self:GetBPInfo()
    local base = info.baseLevels
    local vip = info.passLevels
    for level = 0, self:GetMaxBPLevel() do
        if level <= curLv then
            if not table.exists(base, level) then
                return level
            end
            if self:IsUnlockPass() and not table.exists(vip, level) then
                return level
            end
        end
    end
end

function ActivityBase:RewardRequest(goldPassKind, level, callback)
    local curLevel = self:GetLevel()
    if curLevel < level then
        -- TODO LZL 等级不足提示
        console.error("等级不足", curLevel, level) --@DEL
        Runtime.InvokeCbk(callback, false)
        return
    end
    local isNormal = goldPassKind == GoldPassKind.Normal
    local info = self:GetBPInfo()
    local rewardeds = isNormal and info.baseLevels or info.passLevels
    if table.exists(rewardeds, level) then
        --- TODO LZL显示已领取
        console.error("该等级奖励已经领取过了", goldPassKind, level) --@DEL
        Runtime.InvokeCbk(callback, false)
        return
    end
    local function funcSuccessCbk()
        local cfg = self:GetLevelCfg(level)
        local rewardKind = isNormal and cfg.normalType or cfg.vipType
        local reward = isNormal and cfg.normalReward or cfg.vipReward
        local itemId = tostring(reward[1])
        local count = reward[2] or 1
        if rewardKind  == 1 then
            itemId = tostring(cfg.payIcon[2])
            count = 1
        end
        if self:IsDoubleItem(itemId) then
            count = count * 2
        end
        local key = isNormal and ItemGetMethod.ActivityBp_level_normal_award or ItemGetMethod.ActivityBp_level_vip_award
        if rewardKind == 2 and not ItemId.IsDragonGene(itemId) then
            ConnectionManager:block()
            for _ = 1, count do
                AppServices.MagicalCreatures:AddDragonByItem(itemId)
            end
            ConnectionManager:flush(false)
        elseif rewardKind ~= 1 then
            local needCompose = false
            if ItemId.IsDragonGene(itemId) then
                local funcParam = AppServices.Meta:GetItemFuncParamById(itemId)
                local needCount = funcParam[2]
                local templateId = tostring(funcParam[1])
                local _cfg = AppServices.Meta:GetMagicalCreateuresConfigById(templateId)
                local havePartner = AppServices.MagicalCreatures:GetCreatureByType(_cfg.type)
                local curCount = AppServices.User:GetItemAmount(itemId)
                curCount = (curCount or 0) + count
                if not havePartner and curCount >= needCount  then
                    needCompose = true
                end
            end
            if needCompose then
                AppServices.User:AddItem(itemId, count, key)
                AppServices.PartnerManager:ComposePartner(itemId, function()
                    AppServices.PartnerManager:ShowCacheObtainPartner()
                end)
            else
                AppServices.User:AddItem(itemId, count, key)
            end
        end

        -- MessageDispatcher:SendMessage(MessageType.Activity_GoldPass_ReceiveReward, {rewardKind = rewardKind, level = level})
        -- TODO 展示奖励
        self:UpdateAwarded(goldPassKind, level)
        self:showRewardByKind(rewardKind, level, reward)
        self:RefreshBPRedDot(nil, nil, true)

        -- if self:IsAllRewardGot() and self:IsUnlockPass() then
            -- self:SetOver()

        -- end
        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        actId = self:GetActivityId(),
        type = goldPassKind,
        level = level
    }
    if string.isEmpty(params.actId) then
        Runtime.InvokeCbk(callback, false)
        return
    end
    Net.Activitymapmodulemsg_26306_TakeBpLevelAward_Request(params, funcFailedCbk, funcSuccessCbk)
end

function ActivityBase:TakeBpAwardRequest(goldPassKind, level, callback)
    local curLevel = self:GetLevel()
    if curLevel < level then
        console.error("等级不足", curLevel, level) --@DEL
        Runtime.InvokeCbk(callback, false)
        return
    end
    local isNormal = goldPassKind == GoldPassKind.Normal
    local info = self:GetBPInfo()
    local rewardeds = isNormal and info.baseLevels or info.passLevels
    if table.exists(rewardeds, level) then
        console.error("该等级奖励已经领取过了", goldPassKind, level) --@DEL
        Runtime.InvokeCbk(callback, false)
        return
    end
    local function funcSuccessCbk()
        local cfg = self:GetLevelCfg(level)
        local rewardKind = isNormal and cfg.normalType or cfg.vipType
        local reward = isNormal and cfg.normalReward or cfg.vipReward
        local itemId = tostring(reward[1])
        local count = reward[2] or 1
        if rewardKind  == 1 then
            itemId = tostring(cfg.payIcon[2])
            count = 1
        end
        local key = isNormal and ItemGetMethod.ActivityBp_level_normal_award or ItemGetMethod.ActivityBp_level_vip_award
        if rewardKind == 2 and not ItemId.IsDragonGene(itemId) then
            ConnectionManager:block()
            for _ = 1, count do
                AppServices.MagicalCreatures:AddDragonByItem(itemId)
            end
            ConnectionManager:flush(false)
        elseif rewardKind ~= 1 then
            AppServices.User:AddItem(itemId, count, key)
        end

        -- MessageDispatcher:SendMessage(MessageType.Activity_GoldPass_ReceiveReward, {rewardKind = rewardKind, level = level})
        -- TODO 展示奖励
        self:UpdateAwarded(goldPassKind, level)
        self:showRewardByKind(rewardKind, level, reward)
        self:RefreshBPRedDot(nil, nil, true)

        -- if self:IsAllRewardGot() and self:IsUnlockPass() then
            -- self:SetOver()

        -- end
        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        actId = self:GetActivityId(),
        type = goldPassKind,
        level = level
    }
    if string.isEmpty(params.actId) then
        Runtime.InvokeCbk(callback, false)
        return
    end
    Net.Activitymodulemsg_12004_TakeBpAward_Request(params, funcFailedCbk, funcSuccessCbk)
end

---更新已领取
---@param goldPassKind GoldPassKind
function ActivityBase:UpdateAwarded(goldPassKind, level)
    if goldPassKind == GoldPassKind.Normal then
        table.insert(self.scoreTasks.baseLevels, level)
    elseif goldPassKind == GoldPassKind.Vip then
        table.insert(self.scoreTasks.passLevels, level)
    end
end

function ActivityBase:showRewardByKind(rewardKind, level, reward)
    local itemId = reward[1]
    local useCommonRewardPanel = ItemId.isItem(itemId) and ItemId.IsDragonGene(itemId)
    local double = self:IsDoubleItem(reward[1])
    if double or rewardKind == GoldPassRewardKind.Item or useCommonRewardPanel then --道具奖励
        local rwds = {
            {ItemId = reward[1], Amount = reward[2], double = double}
        }
        PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, {rewards = rwds, double = double})
    else
        PanelManager.showPanel(GlobalPanelEnum.ActivityBPSpecialRewardPanel, {activityId = self:GetActivityId(), level= level})
    end
end

function ActivityBase:GetMaxBPLevel()
    local activityId = self:GetActivityId()
    local _eventBpMaxLvs = ActivityServices.ActivityManager:GetEventMapBpMaxLv(activityId)
    return _eventBpMaxLvs or 0
end

function ActivityBase:GetLevel()
    local info = self:GetBPInfo()
    return info and info.level or 0
end

function ActivityBase:SetLevel(level)
    level = math.min(level, self:GetMaxBPLevel())
    self.scoreTasks.level = level
end


function ActivityBase:GetExp()
    local info = self:GetBPInfo()
    return info and info.exp or 0
end


function ActivityBase:SetExp(exp)
    self.scoreTasks.exp = exp
end

function ActivityBase:AddExp(exp)
    local oldExp = self:GetExp()
    local newExp = oldExp + exp
    local level = self:GetLevel()
    console.lzl("SmallBP_LOG AddExp", self:GetActivityId(), exp, level) --@DEL
    local cfgLv = self:GetLevelCfg(level)
    if newExp >= cfgLv.exp and level < self:GetMaxBPLevel() then
        newExp = newExp - cfgLv.exp
        self:SetExp(0)
        self:LevelUp(level + 1, newExp)
        return
    end
    self:SetExp(newExp)
end

function ActivityBase:LevelUp(newLevel, newExp)
    -- console.lzl("SmallBP_LOG LevelUp", newLevel, newExp) --@DEL
    self:RefreshBPRedDot(true)
    self:SetLevel(newLevel)
    if newLevel < self:GetMaxBPLevel() then
        self:AddExp(newExp)
    end
end

function ActivityBase:GetAddExp()
    local exp = self.addExp
    self.addExp = 0
    return exp
end

---购买通行证 接口
function ActivityBase:BuyPass(finishCallback)
    local id = self:GetProductId()
    local productId = AppServices.ProductManager:GetProductId(id)
    local function onSuc()
        self:SetPass(true)
        self:RefreshBPRedDot(nil, true)
        Runtime.InvokeCbk(finishCallback, true)
    end

    local function onFail(failReason)
        Runtime.InvokeCbk(finishCallback, false)
        ErrorHandler.ShowErrorMessage(Runtime.Translate("purchase.fail.text", {reason = failReason or ""}))
    end
    local ext = {
        activityId = self:GetActivityId(),
        source = "eventmapbp",
        version = RuntimeContext.BUNDLE_VERSION
    }
    AppServices.ProductManager:StartPay(productId, ext, onFail, onSuc,true)
end

function ActivityBase:BuyPass_ByPTCoin(finishCallback)
    local id = self:GetProductId()
    local productId = AppServices.ProductManager:GetProductId(id)
    local function onSuc()
        self:SetPass(true)
        self:RefreshBPRedDot(nil, true)
        Runtime.InvokeCbk(finishCallback, true)
    end

    local function onFail(failReason)
        Runtime.InvokeCbk(finishCallback, false)
        --ErrorHandler.ShowErrorMessage(Runtime.Translate("purchase.fail.text", {reason = failReason or ""}))
    end
    local ext = {
        activityId = self:GetActivityId(),
        source = "eventmapbp",
        version = RuntimeContext.BUNDLE_VERSION
    }
    AppServices.ProductManager:StartPay_ByPTCoin(productId, ext, onFail, onSuc,true)
end

function ActivityBase:GetPayLabel()
    if self.scoreTasks then
        return self.scoreTasks.payLabel or 0
    end
    return 0
end

---获取商品ID
function ActivityBase:GetProductId()
    local payLabel = self:GetPayLabel() or 0
    local _mapBPLabel = self:GetMapBPLabel()
    if _mapBPLabel and _mapBPLabel[payLabel] then
        return _mapBPLabel[payLabel]
    else
        return "800"
    end
end

function ActivityBase:GetMapBPLabel()
    local _mapBPLabel = self._mapBPLabel
    if not _mapBPLabel then
        local MapBPLabel = AppServices.Meta:GetConfigMetaValue("MapBPLabel")
        _mapBPLabel = {}
        MapBPLabel = table.deserialize(MapBPLabel)
        for _, v in ipairs(MapBPLabel) do
            local protuctId = tostring(v[1])
            for i = 2, #v do
                local label = v[i]
                _mapBPLabel[label] = protuctId
                if label == -1 then
                    _mapBPLabel[0] = protuctId
                end
            end
        end
        self._mapBPLabel = _mapBPLabel
    end
    return _mapBPLabel
end

function ActivityBase:SetPass(isOpen)
    self.scoreTasks.unlock = not not isOpen
end

function ActivityBase:ActivityEndRequest()
    local params = {
        activityId = self:GetActivityId()
    }
    local function onFail(errorCode)
        ErrorHandler.ShowErrorPanel(errorCode)
    end

    local showEndPanel = function()
        PanelManager.showPanel(GlobalPanelEnum.ActivityEndNotifyPanel, {
            activityId = self:GetActivityId(),
        })
    end

    local function onSuc(Msg)
        AppServices.MailManager:RequestMailList()
        local cfg = self:GetActivityConfig()
        local  isShow = cfg and cfg.isShow and Msg.state == 1
        if isShow then
            Runtime.InvokeCbk(showEndPanel)
        end
    end



    WaitExtension.SetTimeout(function()
        Net.Activitymodulemsg_12002_ActivityCountdownOver_Request(params, onFail, onSuc)
    end, 1)
end

function ActivityBase:OnAddItem(itemId, count)
    if self:GetLevelMetaTable() then
        local cfg = self:GetActivityConfig()
        if itemId == cfg.rankItem then
            self:AddExp(count)
        end
    end
end

function ActivityBase:IsUnlockFactorySingleSlot()
    if not self:IsInActivityTime() then
        return false, false
    end
    if not self:HaveBP() then
        return false, false
    end

    local unlockLv
    for _, cfg in pairs(self:GetLevelMetaTable()) do
        if cfg.vipType == 1 then
            unlockLv = cfg.level
            break
        end
    end
    if not self:IsUnlockPass() or not unlockLv then
        return false, not not unlockLv
    end
    local obtained = false
    for _, lv in pairs(self.scoreTasks.passLevels or {}) do
        if lv == unlockLv then
            obtained = true
            break
        end
    end
    return obtained, true
end

function ActivityBase:RefreshBPRedDot(isLvUp, isCheckShow, isSub)
    local bpRedDotKey = self:GetBpRedDotKey()
    if string.isEmpty(bpRedDotKey) then
        return
    end
    local oldRed = AppServices.RedDotManage:GetRed(bpRedDotKey)
    if isLvUp then
        if not oldRed then
            AppServices.RedDotManage:FreshDate_Count(bpRedDotKey, 1)
        end
    end
    if isCheckShow then
        if not oldRed and self:GetFirstReward() then
            AppServices.RedDotManage:FreshDate_Count(bpRedDotKey, 1)
        end
    end
    if isSub then
        if oldRed and not self:GetFirstReward() then
            AppServices.RedDotManage:FreshDate_Count(bpRedDotKey, -1)
        end
    end
    local btn = App.scene:GetWidget(self.widgetKey)
    if btn then
        Runtime.InvokeCbk(btn.UpdateRedDot, btn)
    end
    sendNotification("ActivityTaskRankPanelNotificationEnum_Refresh_ActivityBP_Reddot")
end

---判断此活动当前是否满足参加排行榜条件, 子类要继承一下(参考TeamActivityBase)
function ActivityBase:CheckRankConditions()
    return true
end

function ActivityBase:AllRewardRequest(callback)
    local curLevel = self:GetLevel()
    --判断是不是有奖励可以领取
    local baseRewards_tmp = self.scoreTasks.baseLevels
    local passRewards_tmp = self.scoreTasks.passLevels
    local baseRewards, passRewards = {}, {}
    for _, v in ipairs(baseRewards_tmp) do
        baseRewards[v] = true
    end
    for _, v in ipairs(passRewards_tmp) do
        passRewards[v] = true
    end
    local isUnlockPass = self:IsUnlockPass()
    local hasReward = false
    for lv = 0, curLevel do
        if not baseRewards[lv] then
            hasReward = true
            break
        end
        if isUnlockPass and not passRewards[lv] then
            hasReward = true
            break
        end
    end

    if not hasReward then
        Runtime.InvokeCbk(callback, false)
        return
    end

    local function funcSuccessCbk(response)
        Util.BlockAll(0, "25907_GoldPassAllReward_Request")
        local newLv = response.level
        local baseRewards_tmp = self.scoreTasks.baseLevels
        local passRewards_tmp = self.scoreTasks.passLevels
        local baseRewards, passRewards = {}, {}
        for _, v in ipairs(baseRewards_tmp) do
            baseRewards[v] = true
        end
        for _, v in ipairs(passRewards_tmp) do
            passRewards[v] = true
        end
        local rewardInfo = {}
        local rewards = {}
        local tmpRewards = {}
        for lv = 0, newLv do
            local cfg = self:GetLevelCfg(lv)
            local rewardKind, itemId, count, goldPassKind
            if not baseRewards[lv] then
                goldPassKind = GoldPassKind.Normal
                rewardKind = cfg.normalType
                local reward = cfg.normalReward
                itemId = tostring(reward[1])
                if rewardKind == 1 then
                    itemId = tostring(cfg.payIcon[2])
                    count = 1
                end
                if rewardKind == GoldPassRewardKind.Item then
                    count = reward[2]
                else
                    count = 1
                end
                if self:IsDoubleItem(itemId) then
                    count = count * 2
                end
                if not rewardInfo[lv] then
                    rewardInfo[lv] = {}
                end
                rewardInfo[lv][GoldPassKind.Normal] = lv
                -- if table.exists(GoldPassItemRewards, rewardKind) then
                if not tmpRewards[itemId] then
                    tmpRewards[itemId] = { rewardKind = rewardKind }
                end
                tmpRewards[itemId].count = (tmpRewards[itemId].count or 0) + count
                -- if rewardKind ~= 1 then
                -- end
                self:UpdateAwarded(goldPassKind, lv)
            end

            if isUnlockPass and not passRewards[lv] then
                goldPassKind = GoldPassKind.Vip
                rewardKind = cfg.vipType
                local reward = cfg.vipReward
                itemId = tostring(reward[1])
                if rewardKind == 1 then
                    itemId = tostring(cfg.payIcon[2])
                    count = 1
                end
                if rewardKind == GoldPassRewardKind.Item then
                    count = reward[2]
                else
                    count = 1
                end
                if not rewardInfo[lv] then
                    rewardInfo[lv] = {}
                end
                rewardInfo[lv][GoldPassKind.Vip] = lv
                -- if table.exists(GoldPassItemRewards, rewardKind) then
                if not tmpRewards[itemId] then
                    tmpRewards[itemId] = { rewardKind = rewardKind }
                end
                tmpRewards[itemId].count = (tmpRewards[itemId].count or 0) + count
                -- if rewardKind ~= 1 then
                -- end
                self:UpdateAwarded(goldPassKind, lv)
            end
        end
        MessageDispatcher:SendMessage(MessageType.Activity_GoldPass_ReceiveReward, {})
        for itemId, info in pairs(tmpRewards) do
            local count = info.count
            local rewardKind = info.rewardKind
            local key = ItemGetMethod.ActivityBp_level_all_award
            if rewardKind == 2 and not ItemId.IsDragonGene(itemId) then
                ConnectionManager:block()
                for _ = 1, count do
                    AppServices.MagicalCreatures:AddDragonByItem(itemId)
                end
                ConnectionManager:flush(false)
                table.insert(rewards, {ItemId = itemId, Amount = count})
            elseif rewardKind ~= 1 then
                local needCompose = false
                if ItemId.IsDragonGene(itemId) then
                    local funcParam = AppServices.Meta:GetItemFuncParamById(itemId)
                    local needCount = funcParam[2]
                    local templateId = tostring(funcParam[1])
                    local _cfg = AppServices.Meta:GetMagicalCreateuresConfigById(templateId)
                    local havePartner = AppServices.MagicalCreatures:GetCreatureByType(_cfg.type)
                    local curCount = AppServices.User:GetItemAmount(itemId)
                    curCount = (curCount or 0) + count
                    if not havePartner and curCount >= needCount  then
                        needCompose = true
                    end
                end
                if needCompose then
                    AppServices.User:AddItem(itemId, count, key)
                    table.insert(rewards, {ItemId = itemId, Amount = count})
                    AppServices.PartnerManager:ComposePartner(itemId, function()
                        AppServices.PartnerManager:ShowCacheObtainPartner()
                    end)
                else
                    AppServices.User:AddItem(itemId, count, key)
                    table.insert(rewards, {ItemId = itemId, Amount = count})
                end
            end

        end
        if not table.isEmpty(rewards) then
            PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, {
                rewards = rewards,
                useDragonIcon = true,
                useGrid = true,
            })
        end
        self:RefreshBPRedDot(nil, nil, true)
        Runtime.InvokeCbk(callback, true, newLv, rewardInfo)
    end

    local function funcFailedCbk(errorCode)
        Util.BlockAll(0, "25907_GoldPassAllReward_Request")
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        actId = self:GetActivityId(),
    }
    Util.BlockAll(3, "25907_GoldPassAllReward_Request")
    Net.Activitymapmodulemsg_26310_TakeAllBpLevelAward_Request(params, funcFailedCbk, funcSuccessCbk)
end

function ActivityBase:SetSkitNumRequest(num, callback)
    local function funcSuccessCbk(response)
        Runtime.InvokeCbk(callback, true)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        actId = self:GetActivityId(),
        num = num, -- 第几集
    }
    Net.Activitymapmodulemsg_26311_SetSkitNum_Request(params, funcFailedCbk, funcSuccessCbk)
end
function ActivityBase:GetVideoMirrorInfo()
    local sortId, totalScore = 0, 0
    if self.scoreTasks ~= nil then
        sortId = self.scoreTasks.skitNum or 0 -- 已经观看到第几集
        totalScore = self.scoreTasks.skitScore or 0 -- 当前总分
    end
    return sortId, totalScore
end

function ActivityBase:Destroy()
    self:RemoveAllListener()
    self:RemoveAllTimer()
    self.activityMsg = nil
    self.activityConfig = nil
end

--根据活动id获得活动的付费分层
function ActivityBase:GetPayLevel()
    local _level = self.scoreTasks.payLevelMap == "" and 0 or self.scoreTasks.payLevelMap
    return _level
end

return ActivityBase
