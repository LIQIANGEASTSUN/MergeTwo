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
  self.m_bServerCacheMode = false
end

function GameModel:UpdatePerSecond()
  if self.m_iServerTimeDelta ~= nil then
    self.m_iServerTime = DeviceInfo.GetCpuTime() + self.m_iServerTimeDelta
    if self.m_lastServerTime and MINIGAME and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.StrongNetworkEnterForeground) and GM.LastServerTimeBeforeEnterBackground == nil and math.abs(self.m_iServerTime - self.m_lastServerTime) > 10 then
      Log.Info("Change CpuTime without enter background, time delta:" .. tostring(self.m_iServerTime - self.m_lastServerTime))
      self.m_iServerTimeDelta = self.m_lastServerTime + 1 - DeviceInfo.GetCpuTime()
      self.m_iServerTime = self.m_lastServerTime + 1
    end
    self.m_lastServerTime = self.m_iServerTime
  end
  if GM:NeedCheckStrongNetwork() then
    if not self.m_bLog then
      self.m_bLog = true
      Log.Info("GameModel:UpdatePerSecond time stop " .. tostring(GM.LastServerTimeBeforeEnterBackground))
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

function GameModel:GetLastServerTime()
  return self.m_lastServerTime
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

function GameModel:SSO(callbackFunc, isLoading)
  local recordVendorId = GM.UserModel:Get(EUserLocalDataKey.VendorId)
  local recordDeviceId = GM.UserModel:Get(EUserLocalDataKey.DeviceId)
  local vendorIdChanged = not StringUtil.IsNilOrEmpty(recordVendorId) and recordVendorId ~= DeviceInfo.GetVendorID()
  local deviceIdChanged = not StringUtil.IsNilOrEmpty(recordDeviceId) and recordDeviceId ~= DeviceInfo.GetDeviceID()
  
  local function callback(...)
    if callbackFunc then
      callbackFunc(...)
    end
    self:_LogAccountInfo(recordVendorId, recordDeviceId)
  end
  
  if vendorIdChanged or deviceIdChanged then
    if not self.m_deviceInfoUpdated then
      if vendorIdChanged then
        GM.BIManager:LogProject(EBIProjectType.DeviceCopy, "vid: " .. recordVendorId)
      end
      if deviceIdChanged then
        GM.BIManager:LogProject(EBIProjectType.DeviceCopy, "did: " .. recordDeviceId)
      end
      GM.SsoManager:SetToken("")
      self:Register(function(success, msg)
        if success then
          self.m_deviceInfoUpdated = true
          self:_SSOUpdateInstallId(callback)
        else
          callback(false, msg)
        end
      end, isLoading)
    else
      self:_SSOUpdateInstallId(callback, isLoading)
    end
  else
    self:_SSOAfterCheckDeviceInfo(callback)
  end
end

function GameModel:_LogAccountInfo(recordVendorId, recordDeviceId)
  SafeCall(function()
    GM.BIManager:LogProject(EBIProjectType.AccountInfo, {
      cs = {
        v = PlayerPrefs.GetString(ProjectConfig.VendorIdForCSharpKey, ""),
        d = PlayerPrefs.GetString(ProjectConfig.DeviceIdForCSharpKey, ""),
        id = PlayerPrefs.GetInt(ProjectConfig.UserIdForCSharpKey, 0)
      },
      db = {
        rv = recordVendorId,
        rd = recordDeviceId,
        v = GM.UserModel:Get(EUserLocalDataKey.VendorId),
        d = GM.UserModel:Get(EUserLocalDataKey.DeviceId)
      },
      cur = {
        v = DeviceInfo.GetVendorID(),
        d = DeviceInfo.GetDeviceID()
      }
    })
  end)
end

function GameModel:_SSOUpdateInstallId(callbackFunc, isLoading)
  local newUuid = PlatformInterface.GenerateUUID()
  GM.BIManager:LogProject(EBIProjectType.DeviceCopy, "uuid: " .. newUuid)
  self:Register(function(success, msg)
    if success then
      GM.UserModel:SetInstallUuid(newUuid)
      GM.BIManager:ResetInstallUuidCache(newUuid)
      self:_SSOAfterCheckDeviceInfo(callbackFunc, isLoading)
    else
      callbackFunc(false, msg)
    end
  end, isLoading, newUuid)
end

function GameModel:_SSOAfterCheckDeviceInfo(callbackFunc, isLoading)
  GM.UserModel:Set(EUserLocalDataKey.VendorId, DeviceInfo.GetVendorID())
  GM.UserModel:Set(EUserLocalDataKey.DeviceId, DeviceInfo.GetDeviceID())
  if GM.SsoManager:GetToken() == "" then
    self:Register(callbackFunc, isLoading)
  elseif GM.UserModel:GetUserId() == 0 then
    GM.SsoManager:SetToken("")
    self:Register(callbackFunc, isLoading)
  else
    callbackFunc(true)
  end
end

function GameModel:Register(callback, isLoading, installId)
  if GLOBAL_APP or UNITY_EDITOR then
    GM.SsoManager:Register(callback, isLoading, installId)
  else
    GM.SsoManager:ChinaRegister(nil, callback, nil, isLoading)
  end
end

function GameModel:RefreshServerTime(serverTime)
  local clientTime = TimeUtil.GetTimeInSecond()
  local localTime = DeviceInfo.GetCpuTime()
  local oldDelta = self.m_iServerTimeDelta or 0
  local curDelta = serverTime - localTime
  local needRestart = false
  if curDelta < oldDelta - 360 then
    Log.Error("\230\156\141\229\138\161\229\153\168\230\151\182\233\151\180\229\190\128\229\155\158\230\148\185\228\186\134\230\136\150\230\156\172\229\156\176\230\151\182\233\151\180\229\190\128\229\144\142\230\148\185\228\186\134\239\188\140\232\175\183\230\157\128\232\191\155\231\168\139\230\136\150\230\184\133\230\149\176\230\141\174\233\135\141\230\157\165\227\128\130\230\151\182\233\151\180\229\183\174\229\128\188\239\188\154" .. tostring(oldDelta - curDelta))
    GM.BIManager:LogAction(EBIType.TimeDeltaGoBack, {
      llclt = tostring(self.m_lastLocalTime),
      lsevt = tostring(self.m_lastServerTime),
      ldelt = tostring(oldDelta),
      ldeltori = tostring(self.m_iServerTimeDelta),
      clclt = tostring(localTime),
      csevt = tostring(serverTime),
      cdelt = tostring(curDelta)
    })
    needRestart = true
  elseif self.m_maxClientTime and clientTime < self.m_maxClientTime - 360 then
    Log.Error("\230\156\172\229\156\176\230\151\182\233\151\180\229\190\128\229\155\158\230\148\185\228\186\134\239\188\140\232\175\183\230\157\128\232\191\155\231\168\139\230\136\150\230\184\133\230\149\176\230\141\174\233\135\141\230\157\165\227\128\130\230\151\182\233\151\180\229\183\174\229\128\188\239\188\154" .. tostring(self.m_maxClientTime - clientTime))
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
  Log.Info("LocaleTimeDelta: " .. self.m_iLocaleTimeDelta)
end

function GameModel:_UpdateLocaleTimeDelta()
  local currentTime = os.time()
  local localeTimeDelta = currentTime - os.time(os.date("!*t", currentTime))
  PlayerPrefs.SetString(LocaleTimeDelta, tostring(localeTimeDelta))
  self.m_iLocaleTimeDelta = localeTimeDelta
end

function GameModel:Login(callbackFunc, retryTimes, isLoading, noOper, isEnterForeground)
  if self.isLoginingService then
    Log.Info("GameModel already logining service, skip")
    if callbackFunc ~= nil then
      callbackFunc(false)
    end
    return
  end
  Log.Info("GameModel:Login")
  local startTime = DeviceInfo.GetCpuTime()
  callbackFunc = callbackFunc or function()
  end
  GM.BIManager:LogNet(EBIType.NetworkCheckAction.StartLogin, nil, nil, nil, isLoading)
  local requestId = TimeUtil.GetTimeInSecond()
  
  local function callback(bSuccess, tbLoginResp, reqCtx)
    self.isLoginingService = false
    local timeInterval = DeviceInfo.GetCpuTime() - startTime
    if bSuccess then
      GM.BIManager:LogNet(EBIType.NetworkCheckAction.LoginSuccess, "id=" .. requestId, reqCtx, timeInterval, isLoading)
      Log.Info(" group_status:" .. tbLoginResp.group_status .. "; group_name:" .. tbLoginResp.group_name, "ABTest")
      if GM.TestModel then
        GM.TestModel:SetABTestGroupInfo(tbLoginResp.group_name)
      end
      if not StringUtil.IsNilOrEmpty(tbLoginResp.group_name) then
        GM.BIManager:LogABTest(tbLoginResp.group_name, tbLoginResp.group_status)
      end
      self.m_groupName = tbLoginResp.valid_group_name
      self.m_allGroupName = tbLoginResp.group_name
      GM.SDKHelper:AiHelpUpdateUserInfo()
      local headers = GM.HttpManager:ConvertHeaders(reqCtx.ResponseHeaders)
      self.strRegionCity = headers["microfun-geo"] or ""
      local arrRegionInfo = StringUtil.Split(self.strRegionCity, "-")
      self.strRegion = arrRegionInfo[1] or ""
    else
      GM.BIManager:LogNet(EBIType.NetworkCheckAction.LoginFailed, "id=" .. requestId .. "\n" .. tbLoginResp, reqCtx, timeInterval, isLoading)
    end
    if DeviceInfo.GetCpuTime() - startTime > 300 then
      self:Login(callbackFunc, nil)
      return
    end
    if bSuccess then
      if self:CheckRestart(tbLoginResp, isEnterForeground) then
        return
      end
      if tbLoginResp.force_sso == 1 then
        GM.SsoManager:SetToken("")
        if CHINA_APP or MINIGAME then
          GM.SsoManager:ChinaRegister()
        else
          GM.SsoManager:Register()
        end
      end
      if self:_TryOpenAccountNoticeWindow(tbLoginResp) then
        callbackFunc(false, {hideNetError = true}, reqCtx)
        return
      end
      if GLOBAL_APP then
        local headers = GM.HttpManager:ConvertHeaders(reqCtx.ResponseHeaders)
        self:_UpdateChildProtectionInfo(headers and headers["x-content-policy"] or nil)
      end
      self.m_otherInfo = json.decode(tbLoginResp.other_info) or {}
      if tbLoginResp.total_pay then
        GM.InAppPurchaseModel:SetTotalRecharge(tbLoginResp.total_pay)
      end
      if tbLoginResp.reg_scene then
        GM.InAppPurchaseModel:SetMiniGameRegScene(tbLoginResp.reg_scene)
      end
      GM:LoadServerConfig(tbLoginResp)
      GM.BundleManager:UpdateAfterLoginFinished()
      GM.NoticeModel:UpdateAfterLoginFinished(tbLoginResp)
      if tbLoginResp.session then
        GM.HeartBeatManager:SetSession(tbLoginResp.session)
      end
      GM.HeartBeatManager:SetInterval(tbLoginResp.heart_beat_max_interval)
      if self.m_bInstallPolicyConfirmed then
        self.m_bInstallPolicyConfirmed = false
        GM.BIManager:LogAction(EBIType.ConfirmPolicy)
        GM.PolicyModel:SetInstallRegion(self.strRegion)
        for _, ePolicyType in pairs(EPolicyType) do
          GM.PolicyModel:SaveConfirmTime(ePolicyType)
        end
      elseif StringUtil.IsNilOrEmpty(GM.PolicyModel:GetInstallRegion()) then
        GM.PolicyModel:SetInstallRegion(self.strRegion)
      end
      GM.PolicyModel:TryUploadConfirm()
      if not noOper then
        GM.OperManager:Login(tbLoginResp.valid_group_name)
      end
      if CHINA_APP then
        local monthPay = 0
        if tbLoginResp.today_month_pay then
          monthPay = math.ceil(tbLoginResp.today_month_pay / 100)
        end
        GM.StrictCertModel:UpdateMonthTotal(monthPay)
      end
      self.m_monthPay = tbLoginResp.month_pay
      self:UpdateGameSpeed()
      self:TriggerServer()
      if GameConfig.IsTestMode() and GM and GM.UIManager and PlayerPrefs.GetInt(EPlayerPrefKey.TestLoginPrompt, 0) == 1 then
        GM.UIManager:ShowPrompt("Login\230\136\144\229\138\159\239\188\136\228\187\133\230\181\139\232\175\149\231\142\175\229\162\131\233\163\152\229\173\151\239\188\137")
      end
      if GameConfig.IsTestMode() and GM and GM.TestModel then
        GM.TestModel:UpdatePayInfo(tbLoginResp.today_month_pay, tbLoginResp.month_pay, tbLoginResp.total_pay)
      end
      if isEnterForeground then
        GM.CDNResourceManager:TryDownloadLatestGameText(false)
      end
      BIHelper.LogOnceDay()
      if not isLoading then
        self:CallOncePerDay()
      end
    elseif self:IsCheatByModifiedClientTime() then
      return
    end
    GM:RecoverTimeFlagAndMask()
    EventDispatcher.DispatchEvent(EEventType.LoginFinished, {bSuccess = bSuccess, tbResp = tbLoginResp})
    callbackFunc(bSuccess, tbLoginResp, reqCtx)
  end
  
  self.isLoginingService = true
  ApiMessage.Login(requestId, callback, retryTimes)
end

function GameModel:CheckRestart(tbLoginResp, isEnterForeground)
  local restart = GM.ConfigModel:UpdateServerConfigs(tbLoginResp.config)
  if restart then
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.FileReplaceChanged)
    return true
  end
  self.m_bServerCacheMode = tbLoginResp.server_cache == 1
  local serverTime = math.floor(tbLoginResp.server_time / 1000)
  GM:RecoverTimeFlagAndMask()
  restart = self:RefreshServerTime(serverTime)
  if restart and not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.DisableRestartByTime) and MINIGAME then
    GM.EnergyModel:ReCulculateEnergy(serverTime)
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.TimeChanged)
    return true
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
  if isEnterForeground and GM.MapDataModel:CheckNewBorderUnlock() then
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.UnlockBorder)
    return true
  end
  return false
end

function GameModel:IsCheatByModifiedClientTime()
  if GM:NeedCheckStrongNetwork() and self.m_iServerTimeDelta and math.abs(self.m_iServerTimeDelta + DeviceInfo.GetCpuTime() - GM.LastServerTimeBeforeEnterBackground) > 360 then
    if GM.UIManager and GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.SystemGeneralMsgWindow) == nil then
      GM.UIManager:OpenView(UIPrefabConfigName.SystemGeneralMsgWindow, GM.GameTextModel:GetText("load_error_window_title"), GM.GameTextModel:GetText("strong_network_window_desc"), GM.GameTextModel:GetText("clearAll_success_restart_btn"), function()
        GM:RestartGame(nil, EBIProjectType.RestartGameAction.TimeChanged)
      end, nil, nil, nil, true)
    end
    return true
  end
  return false
end

function GameModel:UpdateGameSpeed()
  local speed = self:GetGameSpeed()
  self:SetGameSpeed(speed)
end

function GameModel:SetGameSpeed(speed)
  if GameConfig.IsTestMode() then
    Log.Info("[\230\184\184\230\136\143\233\128\159\229\186\166]\232\174\190\231\189\174\230\184\184\230\136\143\233\128\159\229\186\166\239\188\154x" .. tostring(speed))
  end
  CSTime.timeScale = speed
end

function GameModel:GetGameSpeed()
  local speed = 1
  if PlayerPrefs.GetInt(EPlayerPrefKey.GameSpeed, 1) == 1 then
    speed = GM.ConfigModel:GetGameSpeed()
  end
  if GameConfig.IsTestMode() then
    if TestAutoTimelineView.GameSpeed ~= nil then
      speed = TestAutoTimelineView.GameSpeed
    else
      speed = speed * GM.TestModel:GetTestTimeScaleRatio()
    end
  end
  return speed
end

function GameModel:TriggerServer()
  if not GLOBAL_APP and not MINIGAME_WECHAT then
    return
  end
  if self.m_bTriggeringServer then
    return
  end
  self.m_bTriggeringServer = true
  if self.m_bTriggerCallback == nil then
    function self.m_bTriggerCallback(bSuccess, tbResp, reqCtx)
      self.m_bTriggeringServer = false
      
      EventDispatcher.DispatchEvent(EEventType.TriggerServerFinished, {
        bSuccess = bSuccess and tbResp.rcode == 0,
        tbResp = tbResp
      })
    end
  end
  TestLogInfo("TriggerServer send")
  ApiMessage.GetTriggerData(self.m_bTriggerCallback)
end

function GameModel:CheckPolicy(callback)
  self:GetCloudConfig()
  
  local function showPolicyWindow()
    GM.SceneManager:StartPrivacyTick()
    GM.PolicyModel:OpenInstallConfirmWindow(function()
      GM.SceneManager:EndPrivacyTick()
      GM.PolicyModel:SetInstallConfirmed()
      PlatformInterface.RequestATTPermission(function(status)
        Log.Info("iOS idfa permission : " .. tostring(status))
        self.m_bInstallPolicyConfirmed = true
        callback(true)
      end)
      CSPlatform:BDA_StartSendingEvents()
      GM.BIManager:LogAction(EBIType.PrivacyAgree, DeviceInfo.GetDeviceID())
    end)
  end
  
  if GM.PolicyModel:IsInstallConfirmed() then
    callback(true)
  elseif GM.UserModel:GetUserId() ~= 0 then
    GM.PolicyModel:SetInstallConfirmed()
    callback(true)
    CSPlatform:BDA_StartSendingEvents()
  else
    showPolicyWindow()
  end
end

function GameModel:GetCloudConfig()
  local requestURL = NetworkConfig.GetCloudConfigUrl()
  local reqCtx = CSNetLibManager:CreateGeneralHttpRequest(requestURL, "GET", 8000, 0)
  reqCtx:SetHeader(NetworkConfig.ContentTypeKey, "application/octet-stream")
  reqCtx:SetCallback(function()
    if GM ~= nil and reqCtx.Rcode == ResultCode.Succeeded then
      local rawData = reqCtx:GetResponseString()
      local tbData = json.decode(rawData)
      if tbData ~= nil then
        for _, data in ipairs(tbData) do
          if data.name == "compress" then
            NetworkConfig.UpdateCompressMethod(data.value)
          end
        end
      elseif GM.BIManager ~= nil then
        GM.BIManager:LogErrorInfo(EBIType.CloudJsonDecodeError, rawData)
      end
    end
  end)
  reqCtx:Send()
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
  self:CallOncePerDay()
end

function GameModel:CallOncePerDay()
  local lastDay = PlayerPrefs.GetInt(EPlayerPrefKey.CallOncePerDay, 0)
  local curDay = GM.GameModel:GetServerTime() // 86400
  if curDay == lastDay then
    return
  end
  PlayerPrefs.SetInt(EPlayerPrefKey.CallOncePerDay, curDay)
  local diffLevel = GM.MiscModel:GetActivityDiffLvInNumber()
  self:SendUserData(ESendUserDataType.DiffLevelEvent, tostring(diffLevel))
  GM.BIManager:LogAction(EBIType.DiffLvFirstLogin, diffLevel)
end

function GameModel:SendUserData(type, data)
  if type == ESendUserDataType.DiffLevelEvent and data == "0" then
    return
  end
  TestLogInfo("DiffLevelEvent: start upload", data)
  ApiMessage.SendUserData(type, data, function(bSuccess)
    if bSuccess then
      TestLogInfo("DiffLevelEvent: upload success", data)
    else
      TestLogInfo("DiffLevelEvent: upload failed", data)
    end
  end)
end

function GameModel:IsServerCacheMode()
  return GM.LevelModel:GetCurrentLevel() <= 3 and self.m_bServerCacheMode and MINIGAME
end

function GameModel:GetGroupName()
  return self.m_groupName
end

function GameModel:GetAllGroupName()
  return self.m_allGroupName
end

function GameModel:GetOtherInfo()
  return self.m_otherInfo
end

function GameModel:GetMonthPay()
  return self.m_monthPay
end

ServerGrantSocialType = {Facebook = "fb"}

function GameModel:GrantSocialInfo(socialType, callback)
  if socialType == ServerGrantSocialType.Facebook then
    GM.UIManager:ShowMask()
    GM.BIManager:LogAction(EBIType.GrantFaceBookGetIdStart)
    if GLOBAL_APP then
      CSFacebookManager:GetUserInfo(function(rcode, info)
        if GM == nil then
          return
        end
        if rcode == 0 then
          local jsonData = json.decode(info)
          local socialId = jsonData.id
          if StringUtil.IsNilOrEmpty(socialId) then
            GM.BIManager:LogAction(EBIType.GrantFaceBookGetIdFailed, "missing socialId:" .. tostring(info))
            GM.UIManager:HideMask()
            callback(false)
            return
          end
          GM.BIManager:LogAction(EBIType.GrantFaceBookGetIdSuccess, "socialId:" .. tostring(socialId))
          ApiMessage.GrantSocialInfo(socialType, tostring(socialId), function(success, data, reqCtx)
            GM.UIManager:HideMask()
            if success and data.rcode == 0 then
              self:MarkSocialInfoGranted(socialType)
              GM.BIManager:LogAction(EBIType.GrantFaceBookRequestSuccess, {
                socialId = tostring(socialId),
                userId = GM.UserModel:GetUserId()
              })
              callback(true)
            else
              GM.BIManager:LogAction(EBIType.GrantFaceBookRequestFailed, {
                success = success,
                rcode = reqCtx and reqCtx.Status,
                msg = data
              })
              callback(false)
            end
          end)
        else
          GM.BIManager:LogAction(EBIType.GrantFaceBookGetIdFailed, "rcode:" .. rcode .. ";msg:" .. tostring(info))
          GM.UIManager:HideMask()
          callback(false)
        end
      end)
    else
      Log.Error("\229\155\189\229\134\133\228\184\141\229\186\148\232\175\165\232\176\131\231\148\168GrantSocialInfo \230\142\165\229\143\163")
    end
  else
    callback(false)
  end
end

function GameModel:HasSocialInfoGranted(socialType)
  return self:_GetSocialInfoPlayerPrefsKey(socialType) ~= nil and PlayerPrefs.GetInt(self:_GetSocialInfoPlayerPrefsKey(socialType), 0) == 1
end

function GameModel:MarkSocialInfoGranted(socialType)
  if self:_GetSocialInfoPlayerPrefsKey(socialType) == nil then
    return
  end
  PlayerPrefs.SetInt(self:_GetSocialInfoPlayerPrefsKey(socialType), 1)
end

function GameModel:_GetSocialInfoPlayerPrefsKey(socialType)
  if self.m_grantSocialInfoPlayerPrefsKey == nil then
    self.m_grantSocialInfoPlayerPrefsKey = {
      [ServerGrantSocialType.Facebook] = EPlayerPrefKey.GrantSocialTypeFaceBook
    }
  end
  if (socialType == nil or self.m_grantSocialInfoPlayerPrefsKey[socialType] == nil) and GameConfig.IsTestMode() then
    Log.Error("[GameModel]missing Granted SocialType Playerprefs" .. tostring(socialType))
    return nil
  end
  return self.m_grantSocialInfoPlayerPrefsKey[socialType]
end

EChildProtectionState = {TexasUsers = 1}

function GameModel:_UpdateChildProtectionInfo(dataStr)
  self.m_childProtectionAge = nil
  self.m_childProtectionState = nil
  if not StringUtil.IsNilOrEmpty(dataStr) then
    local datas = StringUtil.Split(dataStr, ",")
    self.m_childProtectionState = tonumber(datas[1] or "")
    self.m_childProtectionAge = tonumber(datas[2] or "")
    if self.m_childProtectionState == nil or self.m_childProtectionAge == nil then
      self.m_childProtectionState = nil
      self.m_childProtectionAge = nil
    end
  end
  if not self.m_bLogChildProtectionInfo then
    self.m_bLogChildProtectionInfo = true
    GM.BIManager:LogAction(EBIType.ChildProtectionInfo, tostring(self.m_childProtectionState) .. "," .. tostring(self.m_childProtectionAge))
  end
end

function GameModel:NeedChildProtection()
  return self.m_childProtectionState ~= nil
end

function GameModel:GetChildProtectionAge()
  return self.m_childProtectionAge or 0
end

function GameModel:GetChildProtectionState()
  for k, v in pairs(EChildProtectionState) do
    if v == self.m_childProtectionState then
      return k
    end
  end
  return ""
end

local lastServerTime, curDt

function GameModel:GetTestInfo()
  local cpuTimeStr = "CpuTime:" .. tostring(DeviceInfo.GetCpuTime())
  local netStr = "\231\189\145\231\187\156: " .. tostring(ApplicationManager.Instance.networkStatus) .. (ApplicationManager.Instance.isNetworkConnected and ", \230\156\137\231\189\145\231\187\156" or ", \230\151\160\231\189\145\231\187\156")
  local serverTimeDeltaStr = "iServerTimeDelta:" .. tostring(self.m_iServerTimeDelta)
  if self:HasServerTime() then
    local serverTime = self:GetServerTime()
    local utcWeek = TimeUtil.ToDayofWeek(serverTime)
    local utcDate = TimeUtil.ToDate(serverTime, ETimeFormat.UTCYMDHMS) .. "[" .. utcWeek .. "]"
    local bjWeek = TimeUtil.ToDayofWeek(serverTime + 28800)
    local bjDate = TimeUtil.ToDate(serverTime, ETimeFormat.YMDHMS) .. "[" .. bjWeek .. "]"
    local localeTime = self:GetLocaleTime()
    local localeWeek = TimeUtil.ToDayofWeek(localeTime)
    local localeDate = TimeUtil.ToDate(localeTime, ETimeFormat.UTCYMDHMS) .. "[" .. localeWeek .. "]"
    if lastServerTime == nil or lastServerTime ~= serverTime then
      lastServerTime = self:GetServerTime()
      curDt = 0
    else
      curDt = curDt + CSTime.unscaledDeltaTime
    end
    return [[

UTC: ]] .. utcDate .. "\n\229\140\151\228\186\172: " .. bjDate .. "\n\230\151\182\229\140\186: " .. localeDate .. "\n\230\175\171\231\167\146\230\149\176\239\188\154" .. tostring(math.floor(curDt * 1000)) .. "\n" .. netStr .. "\n\228\184\138\228\188\160\230\149\176\230\141\174\239\188\154" .. GM.SyncModel.m_nextUploadTime - serverTime .. "\231\167\146\229\144\142" .. "\n" .. cpuTimeStr .. "\n" .. serverTimeDeltaStr
  else
    return "No Server Time" .. "\n" .. cpuTimeStr .. "\n" .. netStr .. "\n" .. serverTimeDeltaStr
  end
end
