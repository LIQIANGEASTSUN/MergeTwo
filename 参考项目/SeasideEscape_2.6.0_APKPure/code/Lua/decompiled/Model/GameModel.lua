GameModel = {}
GameModel.__index = GameModel
local LocaleTimeDelta = "LocaleTimeDelta"

function GameModel:Init()
  self.m_iTestTimeDelta = 0
  if GameConfig.IsTestMode() then
    self.m_iTestTimeDelta = PlayerPrefs.GetInt(EPlayerPrefKey.ServerTimeOffset, 0)
  end
  self:UpdatePerSecond()
  self:_InitLocaleTimeDelta()
  self.m_asaaManager = ASAAManager.Create()
end

function GameModel:Destroy()
  self.m_asaaManager:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function GameModel:UpdatePerSecond()
  if self.m_iServerTimeDelta ~= nil then
    self.m_iServerTime = DeviceInfo.GetCpuTime() + self.m_iServerTimeDelta
    if self.m_lastServerTime and MINIGAME and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.StrongNetworkEnterForeground) and GM.LastServerTimeBeforeEnterBackground == nil and math.abs(self.m_iServerTime - self.m_lastServerTime) > 10 then
      self.m_iServerTimeDelta = self.m_lastServerTime + 1 - DeviceInfo.GetCpuTime()
      self.m_iServerTime = self.m_lastServerTime + 1
    end
    self.m_lastServerTime = self.m_iServerTime
  end
  if GM:NeedCheckStrongNetwork() then
    if not self.m_bLog then
      self.m_bLog = true
      GM.BIManager:LogProject(EBIProjectType.TimeStop, tostring(GM.LastServerTimeBeforeEnterBackground))
    end
    self.m_iServerTime = GM.LastServerTimeBeforeEnterBackground
  end
  self.m_maxClientTime = self.m_maxClientTime and math.max(self.m_maxClientTime, TimeUtil.GetTimeInSecond()) or TimeUtil.GetTimeInSecond()
end

function GameModel:HasServerTime()
  return self.m_iServerTimeDelta ~= nil
end

function GameModel:GetServerTime()
  Log.Assert(self.m_iServerTimeDelta ~= nil, "shouldn't get server time before login finished")
  return (self.m_iServerTime or 0) + self.m_iTestTimeDelta
end

function GameModel:GetServerDay()
  return self:GetServerTime() // 86400
end

function GameModel:GetLocaleTime()
  return self:GetServerTime() + self.m_iLocaleTimeDelta
end

function GameModel:ServerTime2LocaleTime(serverTime)
  return serverTime + self.m_iLocaleTimeDelta
end

function GameModel:LocaleTime2ServerTime(localeTime)
  return localeTime - self.m_iLocaleTimeDelta
end

function GameModel:SSO(callbackFunc)
  callbackFunc = callbackFunc or function()
  end
  local recordVendorId = GM.UserModel:GetVendorId()
  local recordDeviceId = GM.UserModel:GetDeviceId()
  local vendorIdChanged = not StringUtil.IsNilOrEmpty(recordVendorId) and recordVendorId ~= DeviceInfo.GetVendorID()
  local deviceIdChanged = not StringUtil.IsNilOrEmpty(recordDeviceId) and recordDeviceId ~= DeviceInfo.GetDeviceID()
  if vendorIdChanged or deviceIdChanged then
    if not self.m_deviceInfoUpdated then
      if vendorIdChanged then
        GM.BIManager:LogProject(EBIProjectType.DeviceCopy, "vid: " .. recordVendorId)
      end
      if deviceIdChanged then
        GM.BIManager:LogProject(EBIProjectType.DeviceCopy, "did: " .. recordDeviceId)
      end
      GM.SsoManager:SetToken("")
      GM.SsoManager:Register(function(success, msg)
        if success then
          self.m_deviceInfoUpdated = true
          self:_SSOUpdateInstallId(callbackFunc)
        else
          callbackFunc(false, msg)
        end
      end, true)
    else
      self:_SSOUpdateInstallId(callbackFunc)
    end
  else
    self:_SSOAfterCheckDeviceInfo(callbackFunc)
  end
end

function GameModel:_SSOUpdateInstallId(callbackFunc)
  local newUuid = PlatformInterface.GenerateUUID()
  GM.BIManager:LogProject(EBIProjectType.DeviceCopy, "uuid: " .. newUuid)
  GM.SsoManager:Register(function(success, msg)
    if success then
      GM.UserModel:SetInstallUuid(newUuid)
      GM.BIManager:ResetInstallUuidCache(newUuid)
      self:_SSOAfterCheckDeviceInfo(callbackFunc)
    else
      callbackFunc(false, msg)
    end
  end, true, newUuid)
end

function GameModel:_SSOAfterCheckDeviceInfo(callbackFunc)
  GM.UserModel:SetVendorId(DeviceInfo.GetVendorID())
  GM.UserModel:SetDeviceId(DeviceInfo.GetDeviceID())
  if GM.SsoManager:GetToken() == "" then
    GM.SsoManager:Register(callbackFunc, true)
  elseif GM.UserModel:GetUserId() == 0 then
    GM.SsoManager:SetToken("")
    GM.SsoManager:Register(callbackFunc, true)
  else
    callbackFunc(true)
  end
end

function GameModel:RefreshServerTime(serverTime)
  local clientTime = TimeUtil.GetTimeInSecond()
  local localTime = DeviceInfo.GetCpuTime()
  local oldDelta = self.m_iServerTimeDelta or 0
  local curDelta = serverTime - localTime
  local needRestart = false
  if curDelta < oldDelta - 360 then
    if GameConfig.IsTestMode() and GM.AutoTestingServer and GM.AutoTestingServer:IsAutoTesting() then
      needRestart = false
    else
      GM.BIManager:LogAction(EBIType.TimeDeltaGoBack, {
        ll = self.m_lastLocalTime,
        ls = self.m_lastServerTime,
        od = oldDelta,
        std = self.m_iServerTimeDelta,
        lt = localTime,
        st = serverTime,
        cd = curDelta
      })
      needRestart = true
    end
  elseif self.m_maxClientTime and clientTime < self.m_maxClientTime - 360 then
    GM.BIManager:LogAction(EBIType.TimeDeltaGoBack, self.m_maxClientTime - clientTime)
    needRestart = true
  end
  self.m_lastLocalTime = localTime
  self.m_lastServerTime = serverTime
  self.m_iServerTimeDelta = math.max(oldDelta, curDelta)
  CSBIManager.serverTimeDelta = self.m_iServerTimeDelta
  self:UpdatePerSecond()
  return needRestart
end

function GameModel:_InitLocaleTimeDelta()
  local strLocaleTimeDelta = PlayerPrefs.GetString(LocaleTimeDelta, "")
  if strLocaleTimeDelta ~= "" then
    self.m_iLocaleTimeDelta = tonumber(strLocaleTimeDelta)
  else
    self:_UpdateLocaleTimeDelta()
  end
end

function GameModel:_UpdateLocaleTimeDelta()
  local currentTime = os.time()
  local localeTimeDelta = currentTime - os.time(os.date("!*t", currentTime))
  PlayerPrefs.SetString(LocaleTimeDelta, tostring(localeTimeDelta))
  self.m_iLocaleTimeDelta = localeTimeDelta
end

function GameModel:Login(callbackFunc, isLoading, isEnterForeground)
  if self.isLoginingService then
    if callbackFunc ~= nil then
      callbackFunc(false)
    end
    return
  end
  if self.m_asaaManager:IsAgeComplying() then
    Log.Info("GameModel ageChecking, skip")
    if callbackFunc then
      callbackFunc(false)
    end
    return
  end
  local startTime = DeviceInfo.GetCpuTime()
  callbackFunc = callbackFunc or function()
  end
  local ad = CSAppsFlyerManager:GetConversionValue("af_ad")
  local adset = CSAppsFlyerManager:GetConversionValue("af_adset")
  local adgroup = CSAppsFlyerManager:GetConversionValue("adgroup")
  local status = CSAppsFlyerManager:GetConversionValue("af_status")
  local source = CSAppsFlyerManager:GetConversionValue("media_source")
  local group = AdSourceHelper.GetUserSourceGroup(source, status, ad, adset, adgroup)
  Log.Info("GameModel login start, isloading:" .. tostring(isLoading))
  GM.BIManager:LogNet(EBIType.NetworkCheckAction.StartLogin, nil, nil, nil, isLoading)
  local requestId = TimeUtil.GetTimeInSecond()
  
  local function callback(bSuccess, tbLoginResp, reqCtx)
    self.isLoginingService = false
    local timeInterval = DeviceInfo.GetCpuTime() - startTime
    if bSuccess then
      Log.Info("GameModel login success, id:" .. requestId .. ", isloading:" .. tostring(isLoading))
      GM.BIManager:LogNet(EBIType.NetworkCheckAction.LoginSuccess, "id=" .. requestId, reqCtx, timeInterval, isLoading)
      if GM.TestModel then
        GM.TestModel:SetABTestGroupInfo(tbLoginResp.group_name)
      end
      self.m_mapGroup2Status = {}
      if not StringUtil.IsNilOrEmpty(tbLoginResp.group_name) then
        GM.BIManager:LogABTest(tbLoginResp.group_name, tbLoginResp.group_status)
        local arrGroupInfo = json.decode(tbLoginResp.group_name)
        for _, info in pairs(arrGroupInfo or {}) do
          self.m_mapGroup2Status[info.name] = info.status
        end
      end
      self.m_groupName = tbLoginResp.group_name
      GM.SDKHelper:AiHelpUpdateUserInfo()
    else
      Log.Info("GameModel login failed, id:" .. requestId .. ", isloading:" .. tostring(isLoading))
      GM.BIManager:LogNet(EBIType.NetworkCheckAction.LoginFailed, "id=" .. requestId .. "\n" .. (tbLoginResp or "nil"), reqCtx, timeInterval, isLoading)
    end
    if DeviceInfo.GetCpuTime() - startTime > 300 then
      self:Login(callbackFunc, isLoading)
      return
    end
    if bSuccess then
      if self:CheckRestart(tbLoginResp, isEnterForeground) then
        return
      end
      self:RefreshServerTime(math.floor(tbLoginResp.server_time / 1000))
      self.loginFinishTime = self:GetServerTime()
      if tbLoginResp.force_sso == 1 then
        GM.SsoManager:SetToken("")
        GM.SsoManager:Register()
      end
      if self:_TryOpenAccountNoticeWindow(tbLoginResp) then
        callbackFunc(false, {hideNetError = true}, reqCtx)
        return
      end
      if tbLoginResp.total_pay then
        GM.InAppPurchaseModel:SetTotalRecharge(tbLoginResp.total_pay)
      end
      GM.InAppPurchaseModel:SetMonthRecharge(tbLoginResp.month_pay)
      GM.InAppPurchaseModel:SetRecentDayRecharge(tbLoginResp.d7_pay, tbLoginResp.d14_pay, tbLoginResp.d21_pay, tbLoginResp.d28_pay)
      GM:LoadServerConfig(tbLoginResp)
      GM.TinyGameManager:UpdateAfterLoginFinished(tbLoginResp)
      GM.BundleManager:UpdateAfterLoginFinished()
      GM.NoticeModel:UpdateAfterLoginFinished(tbLoginResp)
      GM.UserModel:UpdateAfterLoginFinished(tbLoginResp)
      if GM.UserModel:CanRestartGame() and GM.SceneManager:GetGameMode() ~= EGameMode.Loading and tbLoginResp.force_sync ~= 1 then
        GM:RestartGame(ERestartType.Normal, EBIProjectType.RestartGameAction.ReturnUser)
        return
      end
      if tbLoginResp.session then
        GM.HeartBeatManager:SetSession(tbLoginResp.session)
      end
      GM.HeartBeatManager:SetInterval(tbLoginResp.heart_beat_max_interval)
      GM.UpdateHintModel:ParseLogin(tbLoginResp)
      self.m_validGroupName = tbLoginResp.valid_group_name
      if CHINA_APP then
        local monthPay = 0
        if tbLoginResp.today_month_pay then
          monthPay = math.ceil(tbLoginResp.today_month_pay / 100)
        end
        GM.StrictCertModel:UpdateMonthTotal(monthPay)
      end
      self:TriggerServer()
      BIHelper.LogOnceDay()
      local strCountryRegion
      if isLoading then
        local bNeedCheckAge = false
        local headers = GM.HttpManager:ConvertHeaders(reqCtx.ResponseHeaders)
        strCountryRegion = headers["microfun-geo"]
        ASAAManager.TestCountryRegion = strCountryRegion
        bNeedCheckAge = self.m_asaaManager:NeedCheckAge(strCountryRegion)
        self.m_asaaManager:LogHeader({
          cr = strCountryRegion,
          b = bNeedCheckAge and 1 or 0
        }, strCountryRegion)
        if bNeedCheckAge then
          local function funcAfterAgeCheck()
            GM:RecoverTimeFlagAndMask()
            
            EventDispatcher.DispatchEvent(EEventType.LoginFinished, {bSuccess = bSuccess, tbResp = tbLoginResp})
            callbackFunc(bSuccess, tbLoginResp, reqCtx)
          end
          
          self.m_asaaManager:StartAgeCompilance(strCountryRegion, tbLoginResp.valid_group_name, callbackFunc, funcAfterAgeCheck)
          return
        end
      end
      local tbAgeGate
      if not StringUtil.IsNilOrEmpty(strCountryRegion) and ASAAManager.NeedRequestPermissionOnOperLogin() then
        tbAgeGate = {query = true, jurisdiction = strCountryRegion}
      end
      GM.OperManager:Login(tbLoginResp.valid_group_name, nil, tbAgeGate)
    elseif self:IsCheatByModifiedClientTime() then
      return
    end
    GM:RecoverTimeFlagAndMask()
    self:UpdatePerSecond()
    EventDispatcher.DispatchEvent(EEventType.LoginFinished, {bSuccess = bSuccess, tbResp = tbLoginResp})
    callbackFunc(bSuccess, tbLoginResp, reqCtx)
  end
  
  self.isLoginingService = true
  ApiMessage.Login(requestId, group, callback, isLoading)
end

function GameModel:CheckPrivacyPolicy(callback)
  local showPolicyWindow
  if GLOBAL_APP then
    self:GetCloudConfig()
    
    function showPolicyWindow()
      local desc = GM.GameTextModel:GetText("game_start_notice_desc_new", NetworkConfig.GetUserAgreementLink(), NetworkConfig.GetPrivacyPolicyLink(), NetworkConfig.GetChildPrivacyLink())
      GM.SceneManager:StartPrivacyTick()
      GM.UIManager:OpenView(UIPrefabConfigName.PrivacyConfirmWindow, GM.GameTextModel:GetText("game_start_notice_title"), desc, GM.GameTextModel:GetText("game_start_notice_button"), nil, function()
        GM.SceneManager:EndPrivacyTick()
        PlayerPrefs.SetInt(EPlayerPrefKey.PrivacyPolicyAccepted, 1)
        PlatformInterface.RequestATTPermission(function(status)
          callback(true)
        end)
      end, false)
    end
  else
    function showPolicyWindow()
      GM.SceneManager:StartPrivacyTick()
      
      GM.UIManager:OpenView(UIPrefabConfigName.PrivacyConfirmWindowCN, "game_start_notice_title", "game_start_notice_desc", "game_start_red_button", "game_start_notice_button", function()
        GM.SceneManager:EndPrivacyTick()
        GM.UIManager:OpenView(UIPrefabConfigName.TwoButtonWindow, "privacy_tip_title", "privacy_tip_desc", "privacy_tip_red_button", "privacy_tip_green_button", function()
          PlatformInterface.ExitGame()
        end)
      end, function(tbWindow)
        PlayerPrefs.SetInt(EPlayerPrefKey.PrivacyPolicyAccepted, 1)
        tbWindow:Close()
        PlatformInterface.RequestATTPermission(function(status)
          callback(true)
        end)
        GM.BIManager:LogAction(EBIType.PrivacyAgree, DeviceInfo.GetDeviceID())
        CSPlatform:BDA_StartSendingEvents()
      end, false)
    end
  end
  if PlayerPrefs.GetInt(EPlayerPrefKey.PrivacyPolicyAccepted, 0) == 1 then
    callback(true)
  elseif GM.UserModel:GetUserId() ~= 0 then
    PlayerPrefs.SetInt(EPlayerPrefKey.PrivacyPolicyAccepted, 1)
    callback(true)
    CSPlatform:BDA_StartSendingEvents()
  else
    showPolicyWindow()
  end
end

function GameModel:GetCloudConfig()
  NetworkConfig.UpdateCompressMethod("deflate")
end

function GameModel:OnCheat(banType)
  self:_TryOpenAccountNoticeWindow(banType == "minors" and {ban_type = "minors"} or {force_sync = 2})
end

function GameModel:_TryOpenAccountNoticeWindow(tbLoginResp)
  local endLoginHandle = false
  self.m_accountNotice = nil
  if tbLoginResp.ban_type == "minors" or tbLoginResp.force_sync == 2 then
    GM.HeartBeatManager:Unschedule()
    GM.SyncModel:SetDataInconsistent(true)
    self.m_accountNotice = tbLoginResp.ban_type == "minors" and {
      type = EAccountNotice.CheatMinors
    } or {
      type = EAccountNotice.Cheat
    }
    endLoginHandle = true
  elseif tbLoginResp.rcode == 2 then
    self.m_accountNotice = {
      type = EAccountNotice.AccountDeleted,
      msg = tbLoginResp.logout_time
    }
    endLoginHandle = true
  elseif tbLoginResp.rcode == 1 then
    self.m_accountNotice = {
      type = EAccountNotice.LowVersion
    }
    GM.SyncModel:ChangeSyncState(ESyncState.VersionError)
    if ProjectConfig.NonUseLocalData() then
      endLoginHandle = true
    end
  end
  if GM.UIManager:IsViewExisting(UIPrefabConfigName.AccountNoticeWindow) then
    self.m_accountNotice = nil
    return endLoginHandle
  end
  if GM.SceneManager:GetGameMode() ~= EGameMode.Loading or endLoginHandle then
    self:OnSceneViewLoaded()
  end
  return endLoginHandle
end

function GameModel:OnSceneViewLoaded()
  if self.m_accountNotice ~= nil then
    GM.UIManager:OpenView(UIPrefabConfigName.AccountNoticeWindow, self.m_accountNotice)
    self.m_accountNotice = nil
  end
end

function GameModel:GetGroupName()
  return self.m_groupName or ""
end

function GameModel:GetValidGroupName()
  return self.m_validGroupName or ""
end

function GameModel:TriggerServer()
  if self.m_bTriggeringServer then
    return
  end
  if not MINIGAME and not GLOBAL_APP then
    return
  end
  self.m_bTriggeringServer = true
  if self.m_bTriggerCallback == nil then
    function self.m_bTriggerCallback(bSuccess, tbResp, reqCtx)
      self.m_bTriggeringServer = false
      
      local eventType = GLOBAL_APP and EEventType.ABTriggerServerFinished or EEventType.TriggerServerFinished
      EventDispatcher.DispatchEvent(eventType, {
        bSuccess = bSuccess and tbResp.rcode == 0,
        tbResp = tbResp
      })
    end
  end
  ApiMessage.GetTriggerData(self.m_bTriggerCallback)
end

function GameModel:CheckRestart(tbLoginResp, isEnterForeground)
  local restart = GM.ConfigModel:UpdateServerConfigs(tbLoginResp.config)
  if restart then
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.FileReplaceChanged)
    return true
  end
  self.m_bServerCacheMode = tbLoginResp.server_cache == 1
  local serverTime = math.floor(tbLoginResp.server_time / 1000)
  restart = self:RefreshServerTime(serverTime)
  if restart then
    if MINIGAME then
      GM.EnergyModel:ReCulculateEnergy(serverTime)
      GM:RestartGame(nil, EBIProjectType.RestartGameAction.TimeChanged)
      return true
    else
      Log.Error("\230\156\141\229\138\161\229\153\168\230\151\182\233\151\180\229\190\128\229\155\158\230\148\185\228\186\134\239\188\140\232\175\183\230\157\128\232\191\155\231\168\139\230\136\150\230\184\133\230\149\176\230\141\174\233\135\141\230\157\165")
    end
  end
  GM.UpdateHintModel:ParseLogin(tbLoginResp)
  if GM.UpdateHintModel:NeedRestartGame() and isEnterForeground then
    GM:RestartGame(ERestartType.WithHotfix, EBIProjectType.RestartGameAction.UpdateHint)
    return true
  end
  GM.CDNResourceManager:OnLoginSuccess(tbLoginResp.catalogue, tbLoginResp.catalogue_md5, tbLoginResp.force_download == 1)
  if GM.CDNResourceManager:IsNeedRestartGame() and isEnterForeground then
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.CDN)
    return true
  end
  return false
end

function GameModel:IsCheatByModifiedClientTime()
  if GM:NeedCheckStrongNetwork() and self.m_iServerTimeDelta and math.abs(self.m_iServerTimeDelta + DeviceInfo.GetCpuTime() - GM.LastServerTimeBeforeEnterBackground) > 360 then
    if GM.UIManager and not GM.UIManager:IsViewOpen(UIPrefabConfigName.GeneralMsgWindow) then
      GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, GM.GameTextModel:GetText("load_error_window_title"), GM.GameTextModel:GetText("strong_network_window_desc"), GM.GameTextModel:GetText("clearAll_success_restart_btn"), function()
        GM:RestartGame(nil, EBIProjectType.RestartGameAction.TimeChanged)
      end, nil, false, false)
    end
    return true
  end
  return false
end

function GameModel:GetLastServerTime()
  return self.m_lastServerTime
end

function GameModel:IsGroupStatusValid(arrGroup, groupTag)
  if Table.IsEmpty(arrGroup) then
    return true
  end
  local bInGroup = false
  local groupStatus
  for _, group in ipairs(arrGroup) do
    groupStatus = self.m_mapGroup2Status and self.m_mapGroup2Status[group] or nil
    if groupStatus and (groupStatus == 1 or groupStatus == 2) then
      bInGroup = true
      break
    end
  end
  if groupTag == 2 then
    return not bInGroup
  else
    return bInGroup
  end
end

function GameModel:IsAgeComplying()
  return self.m_asaaManager:IsAgeComplying()
end
