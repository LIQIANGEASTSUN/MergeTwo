SyncModel = {}
SyncModel.__index = SyncModel
ESyncState = {
  Idle = 1,
  Uploading = 2,
  Downloading = 3,
  VersionError = 5
}
local CHECK_UPLOAD_DELAY_NORMAL = 300
local CHECK_UPLOAD_DELAY_OFTEN = 30
local CHECK_UPLOAD_DELAY_OFTEN_STEP = 30

function SyncModel:Init()
  self:RegisterModels()
  
  function self.m_funcAutoCheckUpload()
    self:CheckUpload()
  end
  
  self:ChangeSyncState(ESyncState.Idle)
  self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_OFTEN)
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self.OnLoginFinished)
end

function SyncModel:Destroy()
  self:UnregisterModels()
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
end

function SyncModel:ApplicationDidEnterBackground()
  if MINIGAME then
    self:CheckUpload()
  end
end

function SyncModel:ApplicationWillEnterForeground()
  self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_OFTEN)
end

function SyncModel:SyncDataWhenLoading(callbackFunc)
  if self:ShouldDownload() then
    self:DownloadData(callbackFunc, true)
  elseif self:ShouldUpload() then
    self:UploadData(nil, nil, false)
    callbackFunc(true)
  else
    callbackFunc(true)
  end
end

function SyncModel:OnSceneViewLoaded()
  if self.m_downloadedServerData ~= nil then
    self:_OpenConflictWindow(self.m_downloadedServerData)
    self.m_downloadedServerData = nil
  end
end

function SyncModel:RegisterModel(model, serverFieldName, bCanTriggerUpload)
  Log.Assert(model and serverFieldName, "SyncModel:RegisterModel 1")
  Log.Assert(model.GetData and model.FromSyncData, "SyncModel:RegisterModel 2")
  bCanTriggerUpload = bCanTriggerUpload == nil and true or bCanTriggerUpload
  self.m_mapRegisteredModels[model] = {name = serverFieldName, bCanTriggerUpload = bCanTriggerUpload}
end

function SyncModel:RegisterModels()
  self.m_mapRegisteredModels = {}
  self:RegisterModel(GM.EnergyModel, "energy", false)
  self:RegisterModel(GM.ItemDataModel, "itemUnlockNew")
  self:RegisterModel(GM.ShopModel, "shop")
  self:RegisterModel(GM.TutorialModel, "tutorial")
  self:RegisterModel(GM.MiscModel, "misc")
  self:RegisterModel(GM.AdModel, "ad_status")
  self:RegisterModel(GM.MapDataModel, "slot")
  self:RegisterModel(GM.UserProfileModel, "userProfile")
  self:RegisterModel(GM.TinyGameManager, "tiny_game")
  self:RegisterModel(GM.AttendanceModel, "attendance")
  self:RegisterModel(GM.BalloonRewardModel, "balloon")
end

function SyncModel:UnregisterModels()
  self.m_mapRegisteredModels = {}
end

function SyncModel:ChangeSyncState(eSyncState)
  self.eSyncState = eSyncState
  EventDispatcher.DispatchEvent(EEventType.SyncStateChanged)
end

function SyncModel:_UnScheduleNextUpload()
  if self.m_funcAutoCheckUpload then
    Scheduler.Unschedule(self.m_funcAutoCheckUpload, self)
    Log.Info("SyncModel unschedule next upload")
  end
end

function SyncModel:_ScheduleNextUpload(delay)
  self:_UnScheduleNextUpload()
  self.m_checkUploadDelay = delay
  Scheduler.Schedule(self.m_funcAutoCheckUpload, self, delay, 1)
  Log.Info("SyncModel schedule next upload, delay:" .. delay)
end

function SyncModel:_UpdateCheckUploadDelay(bUploadSuccess)
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ReduceUploadRate) and ProjectConfig.NonUseLocalData() then
    self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_OFTEN)
    return
  end
  if not GM.DBTableManager:HealthCheck() then
    self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_OFTEN)
  elseif bUploadSuccess then
    self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_NORMAL)
    self.m_bUploadSucceed = true
  elseif self.m_checkUploadDelay == CHECK_UPLOAD_DELAY_NORMAL and self.m_bUploadSucceed == true then
    self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_OFTEN)
    self.m_bUploadSucceed = false
  elseif self.m_checkUploadDelay >= CHECK_UPLOAD_DELAY_OFTEN and self.m_checkUploadDelay < CHECK_UPLOAD_DELAY_NORMAL then
    self:_ScheduleNextUpload(self.m_checkUploadDelay + CHECK_UPLOAD_DELAY_OFTEN_STEP)
  else
    self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_NORMAL)
  end
end

function SyncModel:OnLoginFinished(msg)
  if not msg.bSuccess then
    return
  end
  local tbResp = msg.tbResp
  if tbResp and tbResp.force_sync == 1 then
    GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.LoginForceSync)
    self:DownloadData()
    return
  end
  if GM.UIManager:IsViewExisting(UIPrefabConfigName.DataConflictWindow) then
    GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.LoginConflictExist)
    return
  end
  local serverSyncTime = tbResp.last_sync_time or 0
  if serverSyncTime == 0 then
    self:_ClearDataCrackedTag()
    self:SetDataInconsistent(false)
    self:ClearDataUploadRecord()
    self:UploadData()
    return
  end
  local localSyncTime = self:GetLastSyncTime()
  if tonumber(serverSyncTime) ~= localSyncTime then
    GM.BIManager:LogAction(EBIType.SyncModel, tostring(EBIType.SyncModelAction.LoginSyncTimeDiffer) .. " local: " .. tostring(localSyncTime) .. " server: " .. tostring(serverSyncTime))
    self:CheckDataVersion(localSyncTime)
    local serverDeviceId = tbResp.installation_id
    local localDeviceId = GM.UserModel:GetInstallUuid()
    if ProjectConfig.NonUseLocalData() and GM.SceneManager:GetGameMode() == EGameMode.Loading then
      GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.NonUseLocalData)
      self:DownloadData()
    elseif serverDeviceId ~= localDeviceId then
      GM.BIManager:LogAction(EBIType.SyncModel, tostring(EBIType.SyncModelAction.LoginDeviceIdDiffer) .. " local: " .. tostring(localDeviceId) .. " server: " .. tostring(serverDeviceId))
      self:DownloadData()
    else
      if tonumber(localSyncTime) and tonumber(serverSyncTime) and tonumber(localSyncTime) > tonumber(serverSyncTime) then
        self.m_serverSyncTimeError = true
      end
      self:UploadData(nil, tonumber(serverSyncTime) and math.max(tonumber(serverSyncTime), localSyncTime))
    end
  else
    Log.Info("SyncModel OnLoginFinished same syncTime")
    self:SetDataInconsistent(false)
    self:CheckUpload()
  end
end

function SyncModel:CheckDataVersion(localSyncTime)
  if MINIGAME_DOUYIN and self.eSyncState == ESyncState.VersionError and localSyncTime == 0 and GM:IsNewUser() then
    local uuid = PlatformInterface.GenerateUUID()
    GM.UserModel:SetInstallUuid(uuid)
    GM.BIManager:LogProject(EBIProjectType.UserDataUuidError)
  end
end

function SyncModel:_GetUploadDataTableArray(checkingIfShouldUpload)
  local arrDataTable = {
    GM.UserModel:GetData(),
    GM.MainBoardModel:GetItemData(),
    GM.MainBoardModel:GetItemLayerData(),
    GM.MainBoardModel:GetItemCacheData(),
    GM.MainBoardModel:GetItemStoreData(),
    GM.MainBoardModel:GetFixedOrderFinishData(),
    GM.MainBoardModel:GetOrderRecentItemData(),
    GM.MainBoardModel:GetOrderLaneMetaData(),
    GM.MainBoardModel:GetOrderData(),
    GM.ShopModel:GetShopItemDB(),
    GM.ActivityManager:GetGeneralData(),
    GM.ActivityManager:GetEventActivityData(),
    GM.ActivityManager:GetStaticActivityData(),
    GM.BundleManager:GetBundleDataTable(),
    GM.BundleManager:GetBundleMetaDataTable(),
    GM.MapDataModel:GetSkinData(),
    GM.MapDataModel:GetTimeLimitSkinData(),
    GM.ItemDataModel:GetOldItemUnlockData()
  }
  for model, params in pairs(self.m_mapRegisteredModels) do
    if not checkingIfShouldUpload or params.bCanTriggerUpload then
      table.insert(arrDataTable, model:GetData())
    end
  end
  return arrDataTable
end

function SyncModel:ShouldUploadData(dbTable)
  if not dbTable then
    Log.Assert(false, "SyncModel:ShouldUploadData")
    return false
  end
  return dbTable:IsModified()
end

function SyncModel:_GetDataToUpload(dbTable)
  if self:ShouldUploadData(dbTable) then
    dbTable:SetUploading()
    return dbTable:ToUploadArr()
  else
    return {}
  end
end

function SyncModel:CheckUpload(canBeSkipped)
  Log.Info("SyncModel checkUpload")
  local shouldUpload = self:ShouldUpload()
  if shouldUpload then
    self:UploadData(nil, nil, canBeSkipped)
  else
    self:_UpdateCheckUploadDelay(true)
  end
  return shouldUpload
end

function SyncModel:ShouldUpload()
  if self.m_uploadSkippedInLoadingLayer then
    return true
  end
  GM:SaveImmediately()
  if GM:IsNewUser() then
    return false
  end
  local arrDataTable = self:_GetUploadDataTableArray(true)
  for i = 1, #arrDataTable do
    if self:ShouldUploadData(arrDataTable[i]) then
      return true
    end
  end
  return false
end

function SyncModel:CanUpload()
  if self:IsDataInconsistent() then
    Log.Info("SyncModel DataInconsistent")
    return false
  end
  if self:_IsDataCracked() then
    Log.Info("SyncModel data cracked")
    return false
  end
  if GM.destroying then
    Log.Info("SyncModel destroying")
    return false
  end
  if self.eSyncState == ESyncState.Uploading then
    Log.Info("SyncModel already uploading")
    return false
  end
  if self.eSyncState == ESyncState.Downloading then
    Log.Info("SyncModel can not upload when downloading")
    return false
  end
  if self.eSyncState == ESyncState.VersionError then
    Log.Info("SyncModel can not upload when version error")
    return false
  end
  if self:ShouldDownload() then
    Log.Info("SyncModel no local data")
    return false
  end
  if GM:IsNewUser() then
    Log.Info("SyncModel can not upload in new-user state")
    return false
  end
  return true
end

function SyncModel:UploadData(callbackFunc, syncTime, canBeSkipped)
  canBeSkipped = canBeSkipped ~= false
  if GM.SceneManager:GetGameMode() == EGameMode.Loading and canBeSkipped then
    if not self:ShouldDownload() then
      self.m_uploadSkippedInLoadingLayer = true
      self.m_syncTimeWhenSkipUpload = syncTime
    end
    self:_UpdateCheckUploadDelay(false)
    return
  end
  if self.m_uploadSkippedInLoadingLayer then
    if syncTime == nil then
      syncTime = self.m_syncTimeWhenSkipUpload
    end
    self.m_uploadSkippedInLoadingLayer = false
    self.m_syncTimeWhenSkipUpload = nil
  end
  callbackFunc = callbackFunc or function()
  end
  if not syncTime and not self:CanUpload() then
    callbackFunc(false)
    self:_UpdateCheckUploadDelay(false)
    return
  end
  GM:SaveImmediately()
  local tbReq = {
    userId = GM.UserModel:GetUserId(),
    version = GameConfig.GetCurrentVersion(),
    syncTime = syncTime or self:GetLastSyncTime(),
    installation_id = GM.UserModel:GetInstallUuid(),
    correct_data_mark = GM.UserModel:GetInNumber(EUserSyncDataKey.ErrorDataCheck),
    test = {""}
  }
  local syncList = {}
  syncList[#syncList + 1] = "user"
  tbReq.user = {
    {
      gold = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Gold),
      gem = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Gem),
      level = tostring(GM.LevelModel:GetCurrentLevel()),
      exp = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Experience),
      energy = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Energy),
      tool = {
        GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Tool1),
        GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Tool2),
        GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Tool3),
        GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Tool4)
      }
    }
  }
  local userTable = GM.UserModel:GetData()
  userTable:SetUploading()
  self:_PackReq(syncList, tbReq, "itemUnlock", GM.ItemDataModel:GetOldItemUnlockData())
  self:_PackReq(syncList, tbReq, "item", GM.MainBoardModel:GetItemData())
  self:_PackReq(syncList, tbReq, "board", GM.MainBoardModel:GetItemLayerData())
  self:_PackReq(syncList, tbReq, "cacheItem", GM.MainBoardModel:GetItemCacheData())
  self:_PackReq(syncList, tbReq, "inventory", GM.MainBoardModel:GetItemStoreData())
  self:_PackReq(syncList, tbReq, "fixedOrderFinished", GM.MainBoardModel:GetFixedOrderFinishData())
  self:_PackReq(syncList, tbReq, "orderRecentItem", GM.MainBoardModel:GetOrderRecentItemData())
  self:_PackReq(syncList, tbReq, "orderLaneMeta", GM.MainBoardModel:GetOrderLaneMetaData())
  self:_PackReq(syncList, tbReq, "orders", GM.MainBoardModel:GetOrderData())
  self:_PackReq(syncList, tbReq, "shopItem", GM.ShopModel:GetShopItemDB())
  self:_PackReq(syncList, tbReq, "activity_data", GM.ActivityManager:GetGeneralData())
  self:_PackReq(syncList, tbReq, "event_data", GM.ActivityManager:GetEventActivityData())
  self:_PackReq(syncList, tbReq, "staticActivityData", GM.ActivityManager:GetStaticActivityData())
  self:_PackReq(syncList, tbReq, "bundle", GM.BundleManager:GetBundleDataTable())
  self:_PackReq(syncList, tbReq, "bundle_meta", GM.BundleManager:GetBundleMetaDataTable())
  self:_PackReq(syncList, tbReq, "skin", GM.MapDataModel:GetSkinData())
  self:_PackReq(syncList, tbReq, "tmskin", GM.MapDataModel:GetTimeLimitSkinData())
  for model, params in pairs(self.m_mapRegisteredModels) do
    self:_PackReq(syncList, tbReq, params.name, model:GetData())
  end
  if MINIGAME or CHINA_APP then
    local status, result = SafeCall(SyncModel._UpdateBackupData, self, tbReq, GM.MainBoardModel:GetItemCacheData():ToUploadArr(), GM.EnergyModel:GetData():ToUploadArr())
    if status and result then
      syncList[#syncList + 1] = "test"
    end
  end
  tbReq.initSpread = {}
  tbReq.event_branch = {}
  tbReq.daily_task = {}
  tbReq.syncList = syncList
  tbReq.activity_end_notice_status = GM.ActivityManager:GetEndNoticeStatus()
  tbReq.icon = GM.UserProfileModel:GetIcon()
  tbReq.name = GM.UserProfileModel:GetName()
  tbReq.icon_frame = GM.UserProfileModel:GetFrame()
  self:_UnScheduleNextUpload()
  self:ChangeSyncState(ESyncState.Uploading)
  local startTime = DeviceInfo.GetCpuTime()
  
  local function callback(result, response, responseCtx)
    local timeInterval = DeviceInfo.GetCpuTime() - startTime
    self:_OnUploadFinished(result, response, responseCtx, callbackFunc, timeInterval)
    self.m_bIsSendingUploadRequest = false
  end
  
  GM.BIManager:LogNet(EBIType.NetworkCheckAction.StartSyncUploadData)
  self.m_bIsSendingUploadRequest = true
  ApiMessage.UploadData(tbReq, callback)
end

function SyncModel:IsSendingUploadRequest()
  return self.m_bIsSendingUploadRequest
end

function SyncModel:_PackReq(syncList, tbReq, name, data)
  if self:ShouldUploadData(data) then
    syncList[#syncList + 1] = name
  end
  tbReq[name] = self:_GetDataToUpload(data)
end

function SyncModel:_OnUploadFinished(result, response, responseCtx, callbackFunc, timeInterval)
  self:ChangeSyncState(ESyncState.Idle)
  if not result then
    GM.BIManager:LogNet(EBIType.NetworkCheckAction.SyncUploadDataFailed, response, responseCtx, timeInterval)
    callbackFunc(false)
    self:_UpdateCheckUploadDelay(false)
    return
  end
  GM.BIManager:LogNet(EBIType.NetworkCheckAction.SyncUploadDataSuccess, nil, responseCtx, timeInterval)
  local rcode = response.rcode
  if self.m_serverSyncTimeError then
    GM.BIManager:LogProject(EBIProjectType.ServerSyncTimeError, rcode)
  end
  self.m_serverSyncTimeError = nil
  Log.Info("SyncModel _OnUploadFinished " .. rcode or -1)
  if rcode == 0 then
    self:SetLastSyncTime(response.newSyncTime)
    self:SetDataInconsistent(false)
    self:_MarkUploaded()
    self:_UpdateCheckUploadDelay(true)
    callbackFunc(true)
  elseif rcode == 1 then
    self:ChangeSyncState(ESyncState.VersionError)
    callbackFunc(false)
  elseif rcode == 2 then
    self:_UpdateCheckUploadDelay(false)
    callbackFunc(false)
  elseif rcode == 3 then
    self:_UpdateCheckUploadDelay(true)
    self:DownloadData(callbackFunc)
  elseif rcode == 4 then
    GM.HeartBeatManager:HandleConflictSession()
    callbackFunc(false)
  elseif rcode == 5 then
    self:SetDataInconsistent(true)
    callbackFunc(false)
  elseif rcode == 6 then
    self:_UpdateCheckUploadDelay(false)
    callbackFunc(false)
  elseif rcode == 7 then
    callbackFunc(false)
    GM.GameModel:OnCheat()
  elseif rcode == 8 then
    callbackFunc(false)
    GM.GameModel:OnCheat("minors")
  else
    GM.BIManager:LogAction(EBIType.SyncUploadError, rcode or -1)
    self:_UpdateCheckUploadDelay(false)
    callbackFunc(false)
  end
end

function SyncModel:ShouldDownload()
  if self.m_downloadSkippedInLoadingLayer then
    self.m_downloadSkippedInLoadingLayer = false
    return true
  end
  if self.eSyncState == ESyncState.Downloading or self.eSyncState == ESyncState.VersionError then
    return false
  end
  return GM:IsNewUser()
end

function SyncModel:ClearDataUploadRecord()
  local dataTables = self:_GetUploadDataTableArray()
  for _, dataTable in ipairs(dataTables) do
    dataTable:SetModified()
  end
end

function SyncModel:_MarkUploaded(forceSynced)
  local dataTables = self:_GetUploadDataTableArray()
  for _, dataTable in ipairs(dataTables) do
    dataTable:OnUploadedFinished(forceSynced)
  end
end

function SyncModel:GetLastSyncTime()
  return GM.UserModel:GetInNumber(EUserLocalDataKey.LastSyncTime)
end

function SyncModel:SetLastSyncTime(lastSyncTime)
  GM.BIManager:LogAction(EBIType.SyncModel, tostring(lastSyncTime))
  GM.UserModel:Set(EUserLocalDataKey.LastSyncTime, tostring(lastSyncTime))
end

function SyncModel:SetDataInconsistent(bIsInconsistent)
  local preValue = self:IsDataInconsistent()
  if preValue ~= bIsInconsistent then
    local action = bIsInconsistent and EBIType.SyncModelAction.TurnInconsistent or EBIType.SyncModelAction.TurnConsistent
    GM.BIManager:LogAction(EBIType.SyncModel, action)
  end
  local value = bIsInconsistent and "true" or "false"
  GM.UserModel:Set(EUserLocalDataKey.DataInconsistent, value)
end

function SyncModel:IsDataInconsistent()
  return GM.UserModel:Get(EUserLocalDataKey.DataInconsistent) == "true"
end

function SyncModel:_SetDataCracked()
  self.m_bDataCracked = true
end

function SyncModel:_ClearDataCrackedTag()
  self.m_bDataCracked = nil
end

function SyncModel:_IsDataCracked()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.DataAutoSelect) and GM.LevelModel:GetCurrentLevel() > 1 then
    return GM.MapDataModel:GetData():IsEmpty()
  end
  return self.m_bDataCracked or false
end

function SyncModel:_CheckDataCracked()
  if self:_IsDataCracked() then
    return true
  end
  local arrDataTable = self:_GetUploadDataTableArray()
  for i = 1, #arrDataTable do
    if arrDataTable[i]:IsCracked() then
      self:_SetDataCracked()
      return true
    end
  end
end

function SyncModel:StoreDataCracked(cracked)
  PlayerPrefs.SetInt(EPlayerPrefKey.UserDataCracked, cracked and 1 or 0)
end

function SyncModel:DownloadData(callbackFunc, isLoading)
  if GM.SceneManager:GetGameMode() == EGameMode.Loading and not callbackFunc then
    self.m_downloadSkippedInLoadingLayer = true
    return
  end
  callbackFunc = callbackFunc or function()
  end
  GM.BIManager:LogNet(EBIType.NetworkCheckAction.StartSyncDownloadData, nil, nil, nil, isLoading)
  local startTime = DeviceInfo.GetCpuTime()
  
  local function callback(result, response, responseCtx)
    local timeInterval = DeviceInfo.GetCpuTime() - startTime
    self:ChangeSyncState(ESyncState.Idle)
    if not result then
      GM.BIManager:LogNet(EBIType.NetworkCheckAction.SyncDownloadDataFailed, response, responseCtx, timeInterval, isLoading)
      GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.DownloadFail)
      callbackFunc(false, response)
      return
    end
    GM.BIManager:LogNet(EBIType.NetworkCheckAction.SyncDownloadDataSuccess, nil, responseCtx, timeInterval, isLoading)
    local rcode = response.rcode
    if rcode == 0 then
      self:OnDownloadDataSuccess(response)
    elseif rcode == 1 then
    elseif rcode == 2 then
      self:ChangeSyncState(ESyncState.VersionError)
    elseif rcode == 3 then
      callbackFunc(false, {hideNetError = true})
      GM.GameModel:OnCheat()
      return
    elseif rcode == 4 then
      callbackFunc(false, {hideNetError = true})
      GM.GameModel:OnCheat("minors")
      return
    else
      GM.BIManager:LogAction(EBIType.SyncDownloadError, rcode)
      callbackFunc(false)
      return
    end
    callbackFunc(true)
    if isLoading then
      EventDispatcher.DispatchEvent(EEventType.DownloadDataSuccessedWhenLoading)
    end
  end
  
  self:ChangeSyncState(ESyncState.Downloading)
  ApiMessage.DownloadData(callback, isLoading)
end

function SyncModel:OnDownloadDataSuccess(response)
  GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.DownloadSuccess)
  PlayerPrefs.DeleteKey(EPlayerPrefKey.SSOUserState)
  if response.force_sync == 1 or self:_IsDataCracked() or GM:IsNewUser() or not self:ShouldUpload() then
    self:_UseServerData(response)
  elseif GM.SceneManager:GetGameMode() == EGameMode.Loading then
    self.m_downloadedServerData = response
  else
    self:_OpenConflictWindow(response)
  end
end

function SyncModel:_OpenConflictWindow(response)
  local function selectLocalCallback()
    GM.BIManager:LogAction(EBIType.SceneDataConflict, EBIType.SceneDataConflictAction.SameAccountUseLocal)
    
    self:_UseLocalData(response)
  end
  
  local function selectNewCallback()
    GM.BIManager:LogAction(EBIType.SceneDataConflict, EBIType.SceneDataConflictAction.SameAccountUseServer)
    self:_UseServerData(response)
  end
  
  local gems = GM.PropertyDataManager:GetPropertyNumFromSyncData(response.user[1].gem)
  local coins = GM.PropertyDataManager:GetPropertyNumFromSyncData(response.user[1].gold)
  local level = tonumber(response.user[1].level)
  local exp = GM.PropertyDataManager:GetPropertyNumFromSyncData(response.user[1].exp)
  local energy = tonumber(StringUtil.Split(response.energy[1], ",")[2])
  local displayData = DataConflictWindow.CreateDisplayData(gems, coins, level, exp, energy)
  GM.UIManager:OpenView(UIPrefabConfigName.DataConflictWindow, "progress_cloud_conflict_desc", displayData, selectLocalCallback, selectNewCallback)
end

function SyncModel:_UseLocalData(response)
  self:ClearDataUploadRecord()
  GM.UIManager:ShowMask()
  
  local function callback(result)
    GM.UIManager:HideMask()
    if result then
      return
    end
    if self.eSyncState == ESyncState.VersionError then
      local title = GM.GameTextModel:GetText("sync_ver_error_title")
      local description = GM.GameTextModel:GetText(MINIGAME and "sync_ver_error_desc1" or "sync_ver_error_desc")
      local buttonText = GM.GameTextModel:GetText("sync_yes_button")
      GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, title, description, buttonText, nil, nil, false)
      return
    end
    local title = GM.GameTextModel:GetText("sync_error_title")
    local description = GM.GameTextModel:GetText("sync_error_desc")
    local buttonText = GM.GameTextModel:GetText("sync_yes_button")
    GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, title, description, buttonText, nil, nil, false)
  end
  
  self:UploadData(callback, response.syncTime)
end

function SyncModel:_UseServerData(response)
  GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.UseServerData)
  if not ProjectConfig.NonUseLocalData() and GM.SceneManager:GetGameMode() == EGameMode.Loading then
    GM.DatabaseModel:OpenTemporary()
  end
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Gold, response.user[1].gold)
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Gem, response.user[1].gem)
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Experience, response.user[1].exp)
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Tool1, response.user[1].tool[1])
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Tool2, response.user[1].tool[2])
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Tool3, response.user[1].tool[3])
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Tool4, response.user[1].tool[4])
  GM.LevelModel:SyncLevel(tonumber(response.user[1].level))
  GM.UserModel:Set(EUserSyncDataKey.ErrorDataCheck, response.correct_data_mark)
  GM.UserProfileModel:SyncNameIconData(response.name, response.icon, response.icon_frame)
  GM.MainBoardModel:SyncItemData(response.item)
  GM.MainBoardModel:SyncItemLayerData(response.board)
  GM.MainBoardModel:SyncItemCacheData(response.cacheItem)
  GM.MainBoardModel:SyncItemStoreData(response.inventory)
  GM.MainBoardModel:SyncOrderRecentItemData(response.orderRecentItem)
  GM.MainBoardModel:SyncOrderLaneMetaData(response.orderLaneMeta)
  GM.MainBoardModel:SyncFixedOrderFinishData(response.fixedOrderFinished)
  GM.MainBoardModel:SyncOrderData(response.orders)
  GM.ShopModel:SyncShopItem(response.shopItem)
  GM.ActivityManager:SyncGeneralData(response.activity_data)
  GM.ActivityManager:SyncEventActivityData(response.event_data)
  GM.ActivityManager:SyncStaticActivityData(response.staticActivityData)
  GM.BundleManager:SyncBundleDataTable(response.bundle)
  GM.BundleManager:SyncBundleMetaDataTable(response.bundle_meta)
  GM.MapDataModel:SyncSkinData(response.skin)
  GM.MapDataModel:SyncTimeLimitSkinData(response.tmskin)
  GM.ItemDataModel:SyncOldItemUnlockData(response.itemUnlock)
  for model, params in pairs(self.m_mapRegisteredModels) do
    model:FromSyncData(response[params.name])
  end
  if MINIGAME or CHINA_APP then
    SafeCall(SyncModel._ValidateServerData, self, response)
  end
  self:SetDataInconsistent(false)
  self:SetLastSyncTime(response.syncTime)
  self:_ClearDataCrackedTag()
  GM:SaveImmediately()
  self:_MarkUploaded(true)
  GM.SimplePrefs:Set(EPlayerPrefKey.CamPosSlot, "")
  if GM.SceneManager:GetGameMode() ~= EGameMode.Loading then
    GM.AccountManager:MarkLastLoginFlag()
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.UseServerData)
  end
end

function SyncModel:ClearAllData()
  GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.Clear)
  GM.SsoManager:ThrowPendingRequests()
  GM.HttpManager:ThrowSavedRequests()
  local uuid = GM.UserModel:GetInstallUuid()
  VirtualDBTable.CleanAll()
  GM.DBTableManager:Clear()
  local selectedValue = NetworkConfig.GetSelectedServer()
  local installReferrerFlag = PlayerPrefs.GetInt(EPlayerPrefKey.GetInstallReferrer, 0)
  local useRemoteCodeFlag, favoriteItems
  local schema = PlayerPrefs.GetString(EPlayerPrefKey.TestSchema)
  local testPrefsMap = {}
  if GameConfig.IsTestMode() then
    for _, v in pairs(GM.TestModel:GetSwitchTestPlayerPrefs()) do
      testPrefsMap[v[1]] = PlayerPrefs.GetInt(v[1])
    end
    useRemoteCodeFlag = PlayerPrefs.GetInt("use_remote_code", 0)
    favoriteItems = PlayerPrefs.GetString(EPlayerPrefKey.TestFavoriteItemContent, "")
  end
  PlayerPrefs.DeleteAll()
  GM.SimplePrefs:Clear()
  GM.UserModel:SetInstallUuid(uuid)
  if not StringUtil.IsNilOrEmpty(schema) then
    PlayerPrefs.SetString(EPlayerPrefKey.TestSchema, schema)
  end
  NetworkConfig.SetSelectedServer(selectedValue)
  PlayerPrefs.SetInt(EPlayerPrefKey.GetInstallReferrer, installReferrerFlag)
  if GameConfig.IsTestMode() then
    PlayerPrefs.SetInt("use_remote_code", useRemoteCodeFlag)
    for k, v in pairs(testPrefsMap) do
      PlayerPrefs.SetInt(k, v)
    end
    PlayerPrefs.SetString(EPlayerPrefKey.TestFavoriteItemContent, favoriteItems)
  end
  local language = LocalizationModel:GetCurLanguageInString()
  LocalizationModel:ChangeLanguageWithString(language)
end

function SyncModel:_ValidateServerData(response)
  local cracks = Crack.ValidateServerData(response)
  local userId = GM.UserModel:GetUserId()
  if cracks and 0 < #cracks then
    local id, timestamp = self:_GetCrackInfo()
    if id == nil or id ~= userId or timestamp > response.syncTime then
      self:_SetCrackInfo(userId, response.syncTime)
    end
  end
end

function SyncModel:_UpdateBackupData(tbReq, cacheItem, energy)
  local userId, timestamp = self:_GetCrackInfo()
  local cracked = userId ~= nil
  if cracked and (userId ~= tbReq.userId or tbReq.syncTime - timestamp > 86400) then
    cracked = false
    self:_ClearCrackInfo()
  end
  if not cracked then
    tbReq.test[1] = Crack.UpdateBackupData(tbReq.user[1], cacheItem, energy[1])
    return true
  end
end

function SyncModel:_GetCrackInfo()
  local inf = PlayerPrefs.GetString(EPlayerPrefKey.TestSyncTime, "")
  if inf ~= "" then
    local index = string.find(inf, " ")
    if 0 < index then
      return tonumber(string.sub(inf, 1, index - 1)), tonumber(string.sub(inf, index + 1))
    end
  end
end

function SyncModel:_ClearCrackInfo()
  PlayerPrefs.DeleteKey(EPlayerPrefKey.TestSyncTime)
end

function SyncModel:_SetCrackInfo(userId, timestamp)
  PlayerPrefs.SetString(EPlayerPrefKey.TestSyncTime, tostring(userId) .. " " .. tostring(timestamp))
end
