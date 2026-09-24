BaseActivityModel = {
  eModelType = ActivityModelType.Other
}
BaseActivityModel.__index = BaseActivityModel
local hasEnterMainBoardWhenStartedKey = "baseAct_enter_main"

function BaseActivityModel:Init(type, virtualDBTable)
  self.event = PairEvent.Create(self)
  self.m_type = type
  self.m_dbTable = virtualDBTable
  self._state = ActivityState.Released
  self.m_lockHours = 0
  self:LoadServerConfig()
end

function BaseActivityModel:LateInit()
end

function BaseActivityModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function BaseActivityModel:FromSyncData()
  self.m_dbTable:ReloadData()
end

function BaseActivityModel:LoadServerConfig()
  local config = GM.ConfigModel:GetServerConfig(self.m_type)
  self:_LoadServerConfig(config)
  self:_CheckId()
  if config ~= nil then
    self:_LoadOtherServerConfig(config)
  end
  if config ~= nil then
    self:_ParseServerItemConfig(config)
  end
  self:_UpdateState()
end

function BaseActivityModel:_CheckId()
  local dataId = self:GetId()
  local loopId = self:GetLoopId()
  local configLoopId = self.m_config and self.m_config.loopId
  if dataId == nil then
    if self.m_config ~= nil then
      self.m_dbTable:Set("id", "value", self.m_config.id)
      if configLoopId ~= nil then
        self.m_dbTable:Set("loopid", "value", configLoopId)
      end
    end
  elseif self.m_config == nil or self.m_config.id ~= dataId or loopId ~= configLoopId then
    if self.m_config ~= nil or GM.SyncModel.eSyncState ~= ESyncState.VersionError then
      self:_DropData()
    end
    EventDispatcher.DispatchEvent(EEventType.ActivityDataDropped, {
      type = self.m_type
    })
    self._state = nil
    self.m_nextStateTime = nil
    if self.m_config ~= nil then
      self.m_dbTable:Set("id", "value", self.m_config.id)
      if configLoopId ~= nil then
        self.m_dbTable:Set("loopid", "value", configLoopId)
      end
    end
  end
end

function BaseActivityModel:Update()
end

function BaseActivityModel:UpdatePerSecond()
  if self._state ~= ActivityState.Released then
    self:_UpdateState()
    return
  end
  if not self.m_bResourceReady and self:_CalculateState() ~= ActivityState.Released then
    self.m_bResourceReady = self:IsResourceReady()
    if self.m_bResourceReady or not self.m_bResourceReady and not GM.ActivityManager:IsResourceDownloadWindowPoped() then
      self:_UpdateState()
    end
  end
end

function BaseActivityModel:_LoadServerConfig(config)
  if config == nil then
    self.m_config = nil
    return
  end
  self.m_config = {}
  self.m_config.id = config.id
  self.m_config.preTime = config.preTime
  self.m_config.sTime = config.sTime
  self.m_config.eTime = config.eTime
  self.m_config.rTime = config.rTime
  self.m_config.eventFinish = config.eventFinish
  self.m_config.eLv = config.eLv
  self.m_config.sLv = config.sLv
  self.m_avatarframeCfg = config.activity_avatar_frame
  self.m_config.loopId = config.loopId
  self:_LoadGeneralConfig(config)
end

function BaseActivityModel:GetAvatarFrameConfig()
  return self.m_avatarframeCfg
end

function BaseActivityModel:_LoadGeneralConfig(config)
  self.m_config.generalActivityConf = {}
  local arrGeneralActivityConf = config.generalActivityConf
  if arrGeneralActivityConf then
    for _, conf in ipairs(arrGeneralActivityConf) do
      Log.Assert(self.m_config.generalActivityConf[conf.confType] == nil, "Same confType overwrite!" .. tostring(conf.confType))
      self.m_config.generalActivityConf[conf.confType] = conf.param
    end
  end
  self.m_lockHours = config.lockHours or tonumber(self:GetGeneralConfig("lockHours")) or 0
end

function BaseActivityModel:GetGeneralConfig(configType)
  return self.m_config and self.m_config.generalActivityConf and self.m_config.generalActivityConf[configType]
end

function BaseActivityModel:_LoadOtherServerConfig(config)
  assert(false, "_LoadOtherServerConfig()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseActivityModel:_DropData()
  self:TryResetItemConfig()
  self.m_mapPopupTriggerRuleInfo = nil
  self.m_dbTable:Drop()
end

function BaseActivityModel:IsResourceReady(bNeedLog)
  for _, label in ipairs(self:GetResourceLabels()) do
    if not GM.DownloadManager:IsLabelDownloaded(label) or MINIGAME and not GM.CheckResourcesStageFinished then
      if bNeedLog then
        GM.BIManager:LogProject("rs_df", label)
      end
      return false
    end
  end
  return true
end

function BaseActivityModel:_UpdateState()
  local state, nextStateTime = self:_CalculateState()
  if state ~= ActivityState.Released and not self:IsResourceReady(GM.CheckResourcesStageFinished) then
    if GM.SceneManager:GetGameMode() ~= EGameMode.Loading and not GM.TutorialModel:HasAnyStrongTutorialOngoing() then
      if GM.UIManager:IsEventLock() or not GM.UIManager.allWindowClosed then
        return
      end
      if GM.ActivityManager:IsResourceDownloadWindowPoped() then
        GM.DownloadManager:TryMuteDownload()
        return
      end
      GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, GM.GameTextModel:GetText("resource_download_require_title"), GM.GameTextModel:GetText("resource_download_require_desc"), GM.GameTextModel:GetText("resource_download_require_btn"), function()
        PlayerPrefs.SetString(EPlayerPrefKey.RestartTimeByDownloadResource, tostring(TimeUtil.GetTimeInSecond()))
        GM:RestartGame(nil, EBIProjectType.RestartGameAction.DownloadRequiredResource)
      end, function()
        GM.DownloadManager:TryMuteDownload()
      end, true)
      GM.ActivityManager:SetResourceDownloadWindowPoped(true)
    end
    return
  end
  if not self.m_bHasEverUpdatedState then
    self.m_bHasEverUpdatedState = true
  end
  if self._state ~= state then
    self._state = state
    self.m_nextStateTime = nextStateTime
    if self._state ~= ActivityState.Released then
      self:_SetActivityOpened()
    end
    self:_OnStateChanged()
  end
end

function BaseActivityModel:_CalculateState()
  if self.m_config == nil or not self:_CanStartActivity() then
    return ActivityState.Released, -1
  end
  local serverTime = GM.GameModel:GetServerTime()
  if serverTime < self.m_config.sTime then
    return ActivityState.Preparing, self.m_config.sTime
  elseif serverTime < self.m_config.eTime then
    return ActivityState.Started, self.m_config.eTime
  elseif self.m_config.rTime and serverTime < self.m_config.rTime then
    return ActivityState.Ended, self.m_config.rTime
  else
    return ActivityState.Released, -1
  end
end

function BaseActivityModel:GetCalculateState()
  return self:_CalculateState()
end

function BaseActivityModel:_IsPreConditionSatisfied()
  if self.m_config == nil or self.m_config.eventFinish == nil then
    return true, -1
  end
  if not GM.CheckResourcesStageFinished then
    return false
  end
  local activityModel
  local startScaleTime = 0
  for _, config in ipairs(self.m_config.eventFinish) do
    activityModel = GM.ActivityManager:GetModel(config.finishType)
    if activityModel == nil or activityModel:GetId() ~= config.finishId or activityModel:GetEndTime() == nil then
      return false
    end
    if activityModel:GetState() == ActivityState.Released and not activityModel:HasActivityOpened() then
      return false
    end
    if not activityModel:IsActivityOpen() then
      startScaleTime = math.max(startScaleTime, math.min(GM.GameModel:GetServerTime(), activityModel:GetEndTime()))
    else
      return false
    end
  end
  return true, startScaleTime
end

function BaseActivityModel:_SetStartScaleTime(startScaleTime)
  if startScaleTime ~= nil then
    self.m_dbTable:Set("stcTime", "value", tostring(startScaleTime))
  end
end

function BaseActivityModel:_GetStartScaleTime()
  return self.m_dbTable:GetValue("stcTime", "value")
end

function BaseActivityModel:_CanStartActivity()
  if self.m_config == nil or self:HasActivityOpened() then
    return true
  end
  if GameConfig.IsTestMode() and not self.m_bTestErrorStartCondition and self.m_config.preTime ~= nil and (self:GetGeneralConfig("needScore") ~= nil or self:GetGeneralConfig("useEnergy") ~= nil) then
    self.m_bTestErrorStartCondition = true
    Log.Error("[BaseActivityModel:_CanStartActivity] \233\162\132\229\145\138\230\156\159\229\146\140\229\188\128\229\167\139\230\180\187\229\138\168\230\157\161\228\187\182\228\186\146\230\150\165, \232\175\183\230\163\128\230\159\165\229\144\142\229\143\176\233\133\141\231\189\174, id=" .. self.m_config.id)
  end
  local bOrderCondition = self:GetFinishedOrderScore() >= self:GetActivityStartNeededOrderScore()
  local bEnergyCondition = self:GetCostEnertyCount() >= self:GetActivityStartNeededCostEnerty()
  local relation = self:GetGeneralConfig("relation")
  if relation == "and" or relation == nil then
    if not bOrderCondition or not bEnergyCondition then
      return false
    end
  elseif relation == "or" and not bOrderCondition and not bEnergyCondition then
    return false
  end
  if self.m_config.eventFinish == nil then
    return true
  end
  local startScaleTime = self:_GetStartScaleTime()
  local bSatisfied = false
  if startScaleTime == nil then
    bSatisfied, startScaleTime = self:_IsPreConditionSatisfied()
    if not bSatisfied then
      return false
    elseif startScaleTime ~= nil then
      self:_SetStartScaleTime(startScaleTime)
    end
  end
  local scaleTime = 0
  local protectTime = 0
  local curTime = GM.GameModel:GetServerTime()
  for _, config in ipairs(self.m_config.eventFinish) do
    scaleTime = math.max(scaleTime, (config.scale or 0) * 60)
    protectTime = math.max(protectTime, (config.protectTime or 0) * 60)
  end
  return curTime >= startScaleTime + scaleTime and curTime < self:GetEndTime() - protectTime
end

function BaseActivityModel:_SetActivityOpened()
  self:_CalculateState()
  self.m_dbTable:Set("act_ef", "value", tostring(true))
end

function BaseActivityModel:HasActivityOpened()
  return self.m_dbTable:GetValue("act_ef", "value") ~= nil
end

function BaseActivityModel:_OnStateChanged()
end

function BaseActivityModel:GetState()
  if not GM.CheckResourcesStageFinished and not self.m_bHasEverUpdatedState then
    Log.Error("BaseActivityModel:GetState Before CheckResourcesStageFinished!!!")
  end
  return self._state
end

function BaseActivityModel:GetNextStateTime()
  return self.m_nextStateTime
end

function BaseActivityModel:GetEndTime()
  return self.m_config and self.m_config.eTime or nil
end

function BaseActivityModel:GetRewardTime()
  return self.m_config and self.m_config.rTime or nil
end

function BaseActivityModel:GetStartTime()
  return self.m_config and self.m_config.sTime or 0
end

function BaseActivityModel:IsInLockTime()
  local serverTime = GM.GameModel:GetServerTime()
  local deadline = (self:GetEndTime() or 0) - self.m_lockHours * 3600
  return serverTime >= deadline
end

function BaseActivityModel:GetType()
  return self.m_type
end

function BaseActivityModel:GetId()
  return self.m_dbTable:GetValue("id", "value")
end

function BaseActivityModel:GetLoopId()
  return self.m_dbTable:GetValue("loopid", "value")
end

function BaseActivityModel:HasWindowOpenedOnce(state)
  local key = "windowOpened" .. state
  return self.m_dbTable:GetValue(key, "value") ~= nil
end

function BaseActivityModel:SetWindowOpened(state)
  local key = "windowOpened" .. (state or self._state)
  self.m_dbTable:Set(key, "value", 1)
end

function BaseActivityModel:ResetWindowOpened(state)
  local key = "windowOpened" .. (state or self._state)
  self.m_dbTable:Remove(key)
end

function BaseActivityModel:LogActivity(scene, action)
  GM.BIManager:LogActivity(self.m_type, self:GetId(), scene, action)
end

function BaseActivityModel:IsSendingRankRequest()
  return false
end

function BaseActivityModel:CanHeartBeat()
  return false
end

function BaseActivityModel:FromHeartBeat(data)
end

function BaseActivityModel:ToHeartBeat(data)
end

function BaseActivityModel:NeedCheckResource()
  return self:_CalculateState() ~= ActivityState.Released
end

function BaseActivityModel:GetResourceLabels()
  Log.Error("\229\189\147\229\137\141model\231\188\186\229\176\145GetResourceLabels\231\154\132\229\174\158\231\142\176: type = " .. self.m_type)
end

function BaseActivityModel:RestoreIapRewards(iapType)
  return false
end

function BaseActivityModel:CanAddScore()
  return false
end

function BaseActivityModel:IsTargetOrderType(orderType)
  return false
end

function BaseActivityModel:CanAddOrderScore(orderType)
  return self:CanAddScore()
end

function BaseActivityModel:GetOrderRewardScore(totalScore)
  return 0
end

function BaseActivityModel:IsOrderDoubleRewardModel(rewardType)
  return false
end

function BaseActivityModel:IsActivityOpen()
  Log.Error("\229\189\147\229\137\141model\231\188\186\229\176\145\230\180\187\229\138\168\229\188\128\229\144\175\228\184\148\230\156\170\230\143\144\229\137\141\229\174\140\230\136\144\231\154\132\229\174\158\231\142\176: type = " .. self.m_type)
end

function BaseActivityModel:GetAllStateChangedEvent()
  Log.Error("\229\189\147\229\137\141model\231\188\186\229\176\145\232\142\183\229\143\150\230\180\187\229\138\168\231\138\182\230\128\129\230\148\185\229\143\152\228\186\139\228\187\182\231\154\132\229\174\158\231\142\176: type = " .. self.m_type)
end

local commonStartRecordKey = "common_asr"

function BaseActivityModel:_HasActivityStarted()
  return self.m_dbTable:GetValue(commonStartRecordKey, "value") ~= nil
end

function BaseActivityModel:_SetActivityStarted()
  self.m_dbTable:Set(commonStartRecordKey, "value", tostring(true))
end

local ACTIVITY_END_TIME_FOR_SUBSCRIPTION_KEY = "subs_et"

function BaseActivityModel:GetETimeForSubscription()
  return self.m_dbTable:GetValue(ACTIVITY_END_TIME_FOR_SUBSCRIPTION_KEY, DB_VALUE_KEY) or 0
end

function BaseActivityModel:SetETimeForSubscription(val)
  if not IsNumber(val) then
    return
  end
  local cond = self:GetETimeForSubscription()
  if cond == val then
    return
  end
  self.m_dbTable:Set(ACTIVITY_END_TIME_FOR_SUBSCRIPTION_KEY, DB_VALUE_KEY, val)
  GM.SyncModel:UploadData()
end

function BaseActivityModel:SetSubscriptionConcluded(bool)
  self:SetETimeForSubscription(bool and self.m_config.eTime or 0)
end

function BaseActivityModel:_ParseServerItemConfig(config)
end

function BaseActivityModel:UpdateItemConfig(code, changedVal, removedVal)
  GM.ItemDataModel:UpdateItemConfig(code, changedVal, removedVal)
  local mapItemConfig = {}
  local strItemConfig = self.m_dbTable:GetValue(DBServerItemConfigKey, "value")
  if not StringUtil.IsNilOrEmpty(strItemConfig) then
    mapItemConfig = json.decode(StringUtil.Replace(strItemConfig, "@", ",")) or {}
  end
  mapItemConfig[code] = {add = changedVal, del = removedVal}
  self.m_dbTable:Set(DBServerItemConfigKey, "value", StringUtil.Replace(json.encode(mapItemConfig), ",", "@"))
end

function BaseActivityModel:TryResetItemConfig()
  local mapItemConfig = {}
  local strItemConfig = self.m_dbTable:GetValue(DBServerItemConfigKey, "value")
  if not StringUtil.IsNilOrEmpty(strItemConfig) then
    mapItemConfig = json.decode(StringUtil.Replace(strItemConfig, "@", ","))
  end
  if not Table.IsEmpty(mapItemConfig) then
    for code, _ in pairs(mapItemConfig) do
      GM.ItemDataModel:ResetItemConfig(code)
    end
  end
end

local PopupRuleInfoDataKey = "popup_rule"

function BaseActivityModel:_OnOrderFinished(msg)
  self:_AddFinishedOrderScore(msg and msg.order)
  if not self:IsActivityOpen() then
    return
  end
  if Table.IsEmpty(msg) or msg.order == nil or msg.order.bIsActOrder or msg.order:GetType() == OrderType.LuckyStar or msg.order:GetType() == OrderType.CurtainCall then
    return
  end
  local mapInfo = self:_GetPopupTriggerRuleInfoMap()
  local key = "t_r_" .. EPopupChainTriggerType.OrderNum
  mapInfo[key] = (mapInfo[key] or 0) + 1
  key = "t_r_" .. EPopupChainTriggerType.OrderPoint
  mapInfo[key] = (mapInfo[key] or 0) + (msg.order.finishScore or 0)
  self.m_dbTable:Set(PopupRuleInfoDataKey, "value", mapInfo)
end

function BaseActivityModel:_OnConsumeEnergy(msg)
  self:_AddCostEnertyCount(msg and msg.num)
  if not self:IsActivityOpen() then
    return
  end
  if Table.IsEmpty(msg) or not msg.num then
    return
  end
  local mapInfo = self:_GetPopupTriggerRuleInfoMap()
  local key = "t_r_" .. EPopupChainTriggerType.CostEnergy
  mapInfo[key] = (mapInfo[key] or 0) + msg.num
  self.m_dbTable:Set(PopupRuleInfoDataKey, "value", mapInfo)
end

function BaseActivityModel:CanPopupRuleTrigger(eWindowType, eTriggerType, triggerParam)
  local mapInfo = self:_GetPopupTriggerRuleInfoMap()
  triggerParam = tonumber(triggerParam) or 0
  if eTriggerType == EPopupChainTriggerType.TokenNum then
    return self:_CanPopupRuleTokenNumTrigger(eWindowType, eTriggerType, triggerParam)
  elseif triggerParam > (mapInfo["t_r_last_" .. eWindowType .. eTriggerType] or 0) and triggerParam <= (mapInfo["t_r_" .. eTriggerType] or 0) then
    return true
  end
  return false
end

function BaseActivityModel:RecordPopupRuleTriggerInfo(eWindowType, eTriggerType)
  local mapInfo = self:_GetPopupTriggerRuleInfoMap()
  local curValue
  if eTriggerType == EPopupChainTriggerType.TokenNum then
    curValue = self:_GetPopupRuleTokenNum()
  else
    curValue = mapInfo["t_r_" .. eTriggerType] or 0
  end
  mapInfo["t_r_last_" .. eWindowType .. eTriggerType] = curValue
  self.m_dbTable:Set(PopupRuleInfoDataKey, "value", mapInfo)
end

function BaseActivityModel:_GetPopupTriggerRuleInfoMap()
  if not self.m_mapPopupTriggerRuleInfo then
    self.m_mapPopupTriggerRuleInfo = self.m_dbTable:GetValue(PopupRuleInfoDataKey, "value") or {}
  end
  return self.m_mapPopupTriggerRuleInfo
end

function BaseActivityModel:_CanPopupRuleTokenNumTrigger(eWindowType, eTriggerType, triggerParam)
  local curTokenNum = self:_GetPopupRuleTokenNum()
  local mapInfo = self:_GetPopupTriggerRuleInfoMap()
  if curTokenNum and triggerParam <= curTokenNum and triggerParam > (mapInfo["t_r_last_" .. eWindowType .. eTriggerType] or 0) then
    return true
  end
  return false
end

function BaseActivityModel:_GetPopupRuleTokenNum()
  assert(false, "_GetPopupRuleTokenNum()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163\227\128\130activityType:" .. self.m_type)
end

local DBFinishedOrderScoreKey = "dbFinishedOrderScoreKey"

function BaseActivityModel:GetFinishedOrderScore()
  return tonumber(self.m_dbTable:GetValue(DBFinishedOrderScoreKey, "value") or "0") or 0
end

function BaseActivityModel:GetActivityStartNeededOrderScore()
  return tonumber(self:GetGeneralConfig("needScore") or "0") or 0
end

function BaseActivityModel:_AddFinishedOrderScore(order)
  if self.m_config == nil or order == nil or order.GetTotalScore == nil then
    return
  end
  local orderScore = order:GetTotalScore(GM.MainBoardModel:GetOrderModel()) or 0
  if orderScore <= 0 then
    return
  end
  local newScore = self:GetFinishedOrderScore() + orderScore
  self.m_dbTable:Set(DBFinishedOrderScoreKey, "value", tostring(newScore))
end

local DBCostEnertyCountKey = "dbCostEnertyCountKey"

function BaseActivityModel:GetCostEnertyCount()
  return tonumber(self.m_dbTable:GetValue(DBCostEnertyCountKey, "value") or "0") or 0
end

function BaseActivityModel:GetActivityStartNeededCostEnerty()
  return tonumber(self:GetGeneralConfig("useEnergy") or "0") or 0
end

function BaseActivityModel:_AddCostEnertyCount(num)
  if self.m_config == nil or num == nil then
    return
  end
  local newNum = self:GetCostEnertyCount() + num
  self.m_dbTable:Set(DBCostEnertyCountKey, "value", tostring(newNum))
  if self:GetState() == ActivityState.Released and self:GetActivityStartNeededCostEnerty() > 0 and self:GetCostEnertyCount() >= self:GetActivityStartNeededCostEnerty() then
    self:_UpdateState()
  end
end

function BaseActivityModel:HasEnterMainBoardWhenStarted()
  return tonumber(self.m_dbTable:GetValue(hasEnterMainBoardWhenStartedKey, "value") or 0) >= 2
end

function BaseActivityModel:SetEnterMainBoardWhenStarted()
  if self:HasEnterMainBoardWhenStarted() then
    return
  end
  local numStr = self.m_dbTable:GetValue(hasEnterMainBoardWhenStartedKey, "value") or 0
  local num = tonumber(numStr) + 1
  self.m_dbTable:Set(hasEnterMainBoardWhenStartedKey, "value", num)
end

function BaseActivityModel:CanSignUp()
  return false
end
