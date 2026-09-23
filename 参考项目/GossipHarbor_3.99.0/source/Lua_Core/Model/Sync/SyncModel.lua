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
local arrDiscardSyncKey = {
  "branch_base",
  "branch_item",
  "branch_board",
  "branch_cache_item",
  "branch_order_meta",
  "branch_orders"
}
SyncModel.BuyEnergyMoreUploadCostGemThreshold = 40

function SyncModel:Init()
  self:RegisterModels()
  self.m_bUploadThisFrameLateUpdate = false
  
  function self.m_funcAutoCheckUpload()
    self:CheckUpload()
  end
  
  self.m_nextUploadTime = 0
  self:ChangeSyncState(ESyncState.Idle)
  self:_ScheduleNextUpload(CHECK_UPLOAD_DELAY_OFTEN)
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self.OnLoginFinished)
end

function SyncModel:Destroy()
  self:UnregisterModels()
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
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
  self:RegisterModel(GM.MainTaskModel, "mainTask")
  self:RegisterModel(GM.ItemDataModel, "itemUnlock")
  self:RegisterModel(GM.ShopModel, "shop")
  self:RegisterModel(GM.TutorialModel, "tutorial")
  self:RegisterModel(GM.MiscModel, "misc")
  self:RegisterModel(GM.AdModel, "ad_status")
  self:RegisterModel(GM.MapDataModel, "extra_skin")
  self:RegisterModel(GM.CharacterIntimacyModel, "character_intimacy")
  self:RegisterModel(GM.UserProfileModel, "profile")
  self:RegisterModel(GM.ReturnUserModel, "return_user")
  self:RegisterModel(GM.RedPacketModel, "pakcet_progress")
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
  if GM.GameModel:HasServerTime() then
    self.m_nextUploadTime = GM.GameModel:GetServerTime() + delay
  end
  if GameConfig.IsTestMode() then
    Log.Info("SyncModel schedule next upload, delay:" .. delay .. " seconds" .. " \228\184\139\230\172\161\228\184\138\228\188\160\230\151\182\233\151\180:" .. TimeUtil.ToDate(self.m_nextUploadTime, ETimeFormat.YMDHMS))
  end
end

function SyncModel:_UpdateCheckUploadDelay(bUploadSuccess)
  if not GM then
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

function SyncModel:MarkUploadThisFrame()
  self.m_bUploadThisFrameLateUpdate = true
end

function SyncModel:LateUpdate()
  if self.m_bUploadThisFrameLateUpdate then
    self.m_bUploadThisFrameLateUpdate = false
    Log.Debug("trigger Checkupload on lateupdate")
    self:CheckUpload()
  end
end

function SyncModel:OnLoginFinished(msg)
  if not msg.bSuccess then
    return
  end
  if self:_LastSyncTimeInconsistent(true) then
    CHECK_UPLOAD_DELAY_NORMAL = 60
    self:DownloadData()
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
  if GM.SceneManager:GetGameMode() == EGameMode.Loading and self:_CheckDataCracked() then
    self:DownloadData()
    GM.BIManager:LogAction(EBIType.DataCracked, "cracked on login")
    return
  end
  local localSyncTime = self:GetLastSyncTime()
  if tonumber(serverSyncTime) ~= localSyncTime then
    GM.BIManager:LogAction(EBIType.SyncModel, tostring(EBIType.SyncModelAction.LoginSyncTimeDiffer) .. " local: " .. tostring(localSyncTime) .. " server: " .. tostring(serverSyncTime))
    local serverDeviceId = tbResp.installation_id
    local localDeviceId = GM.UserModel:GetInstallUuid()
    if serverDeviceId ~= localDeviceId then
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

function SyncModel:_GetUploadDataTableArray(checkingIfShouldUpload)
  local arrDataTable = {
    GM.UserModel:GetData(),
    GM.MainBoardModel:GetItemData(),
    GM.MainBoardModel:GetItemLayerData(),
    GM.MainBoardModel:GetItemCacheData(),
    GM.MainBoardModel:GetItemStoreData(),
    GM.MainBoardModel:GetOrderMetaData(),
    GM.MainBoardModel:GetOrderData(),
    GM.ShopModel:GetShopItemDB(),
    GM.MapDataModel:GetSlotData(),
    GM.ActivityManager:GetGeneralData(),
    GM.ActivityManager:GetEventActivityData(),
    GM.BundleManager:GetBundleDataTable(),
    GM.BundleManager:GetBundleMetaDataTable(),
    GM.BuffManager:GetBuffDataTable(),
    GM.BuffManager:GetBuffMetaDataTable()
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

function SyncModel:CheckUpload(canBeSkipped, ignoreUploading)
  Log.Info("SyncModel checkUpload")
  if self:ShouldUpload() then
    if ignoreUploading and self.m_bIsSendingUploadRequest then
      self.m_needUploadAgain = true
    else
      self:UploadData(nil, nil, canBeSkipped)
    end
  else
    self:_UpdateCheckUploadDelay(true)
  end
end

function SyncModel:ShouldUpload()
  if self.m_uploadSkippedInLoadingLayer then
    return true
  end
  GM.DBTableManager:FlushTables()
  if GM:IsNewUser() then
    return false
  end
  if GM.GameModel:IsServerCacheMode() then
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
  if GM.GameModel:IsServerCacheMode() then
    if callbackFunc then
      callbackFunc(false, "in server cache mode")
    end
    return
  end
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
  GM.DBTableManager:TrySaveAll()
  local tbReq = {
    userId = GM.UserModel:GetUserId(),
    version = GameConfig.GetCurrentVersion(),
    syncTime = syncTime or self:GetLastSyncTime(),
    currentTask = GM.MainTaskModel:GetCurrentDBKey(),
    installation_id = GM.UserModel:GetInstallUuid()
  }
  local syncList = {}
  syncList[#syncList + 1] = "user"
  tbReq.user = {
    {
      gold = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Gold),
      gem = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Gem),
      level = tostring(GM.LevelModel:GetCurrentLevel()),
      exp = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Experience),
      energy = GM.PropertyDataManager:PropertyToSyncData(EPropertyType.Energy)
    }
  }
  local userTable = GM.UserModel:GetData()
  userTable:SetUploading()
  self:_PackReq(syncList, tbReq, "item", GM.MainBoardModel:GetItemData())
  self:_PackReq(syncList, tbReq, "board", GM.MainBoardModel:GetItemLayerData())
  self:_PackReq(syncList, tbReq, "cacheItem", GM.MainBoardModel:GetItemCacheData())
  self:_PackReq(syncList, tbReq, "inventory", GM.MainBoardModel:GetItemStoreData())
  self:_PackReq(syncList, tbReq, "orderMeta", GM.MainBoardModel:GetOrderMetaData())
  self:_PackReq(syncList, tbReq, "orders", GM.MainBoardModel:GetOrderData())
  self:_PackReq(syncList, tbReq, "shopItem", GM.ShopModel:GetShopItemDB())
  self:_PackReq(syncList, tbReq, "slot", GM.MapDataModel:GetSlotData())
  self:_PackReq(syncList, tbReq, "activity_data", GM.ActivityManager:GetGeneralData())
  self:_PackReq(syncList, tbReq, "wedding_day", GM.ActivityManager:GetEventActivityData())
  self:_PackReq(syncList, tbReq, "bundle", GM.BundleManager:GetBundleDataTable())
  self:_PackReq(syncList, tbReq, "bundle_meta", GM.BundleManager:GetBundleMetaDataTable())
  self:_PackReq(syncList, tbReq, "buffproperty", GM.BuffManager:GetBuffDataTable())
  self:_PackReq(syncList, tbReq, "buffproperty_meta", GM.BuffManager:GetBuffMetaDataTable())
  for model, params in pairs(self.m_mapRegisteredModels) do
    self:_PackReq(syncList, tbReq, params.name, model:GetData())
  end
  if not MINIGAME_WECHAT then
    Table.ListRemove(syncList, "pakcet_progress")
  end
  for _, discardKey in ipairs(arrDiscardSyncKey) do
    if self:_NeedResetSyncKey(discardKey) then
      syncList[#syncList + 1] = discardKey
      self:_ClearResetSyncKey(discardKey)
    end
    tbReq[discardKey] = Table.Empty
  end
  tbReq.initSpread = {}
  tbReq.jack_promotion = {}
  tbReq.syncList = syncList
  local bakeOutModel = GM.ActivityManager:GetModel(ActivityType.BakeOut)
  if bakeOutModel ~= nil then
    tbReq.bakeout_status = bakeOutModel:HasAcquiredReward() and 0 or 1
  else
    tbReq.bakeout_status = 1
  end
  tbReq.icon = GM.UserProfileModel:GetIcon()
  tbReq.name = GM.UserProfileModel:GetName()
  tbReq.icon_frame = GM.UserProfileModel:GetAvatarFrame()
  self:_UnScheduleNextUpload()
  self:ChangeSyncState(ESyncState.Uploading)
  local startTime = DeviceInfo.GetCpuTime()
  
  local function callback(result, response, responseCtx)
    if GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.TestPromptUploadUserBranch, 0) == 1 then
      local str = tostring(result)
      if result then
        str = str .. " rcode:" .. tostring(response.rcode)
      end
      local strUrl = NetworkConfig.GetHttpServerUrl("BLUpdUserBranch")
      local reqCtx = CSNetLibManager:CreateApiServerHttpRequest(GM.UserModel:GetUserId(), GM.HttpManager:GetServerTime(), strUrl, 8000, ApiMessage.DEFAULT_RETRY)
      ApiMessage.Serialize(reqCtx, "BLUpdUserBranch", tbReq)
      local noCompressContentLength = reqCtx.ContentLength
      reqCtx:Destroy()
      local totalFormatted, unit = GM.DownloadManager:GetFormattedSize(noCompressContentLength)
      local color = "#aafaaa"
      if 460800 < noCompressContentLength then
        color = "#f65757"
      elseif 153600 < noCompressContentLength then
        color = "#fba925"
      end
      str = "\228\184\138\228\188\160\230\149\176\230\141\174\239\188\154" .. str .. " \230\149\176\230\141\174\229\164\167\229\176\143:" .. StringUtil.MakeColorFormat(tostring(totalFormatted) .. tostring(unit), color)
      GM.UIManager:ShowPrompt(str)
      Log.Info(str)
    end
    local timeInterval = DeviceInfo.GetCpuTime() - startTime
    self:_OnUploadFinished(result, response, responseCtx, callbackFunc, timeInterval)
    self.m_bIsSendingUploadRequest = false
    if self.m_needUploadAgain then
      self.m_needUploadAgain = false
      self:UploadData(callbackFunc, nil, canBeSkipped)
    end
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
    if GM then
      GM.GameModel:OnCheat()
    end
  elseif rcode == 8 then
    callbackFunc(false)
    if GM then
      GM.GameModel:OnCheat("minors")
    end
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
  PlayerPrefs.SetString(EUserLocalDataKey.LastSyncTime, tostring(lastSyncTime))
end

function SyncModel:_LastSyncTimeInconsistent(log)
  local localSyncTime = self:GetLastSyncTime()
  local syncTimeInPlayerPrefs = tonumber(PlayerPrefs.GetString(EUserLocalDataKey.LastSyncTime, "0")) or 0
  if localSyncTime ~= syncTimeInPlayerPrefs and localSyncTime ~= 0 and syncTimeInPlayerPrefs ~= 0 then
    if log then
      GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.SyncTimeInconsistent .. " " .. localSyncTime .. "," .. syncTimeInPlayerPrefs)
    end
    return true
  end
  return false
end

function SyncModel:UpdateProgressLastModifiedTime()
  GM.UserModel:Set(EUserLocalDataKey.ProgressLastModifiedTime, tostring(GM.GameModel:HasServerTime() and GM.GameModel:GetServerTime() or TimeUtil.GetTimeInSecond()))
end

function SyncModel:GetProgressLastModifiedTime()
  return GM.UserModel:GetInNumber(EUserLocalDataKey.ProgressLastModifiedTime)
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
  if GameConfig.IsTestMode() then
    Log.Info("SyncModel DownloadData " .. debug.traceback())
    if GM and GM.UIManager then
      GM.UIManager:ShowPrompt("\228\184\139\232\189\189\230\149\176\230\141\174")
    end
  end
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
  end
  
  self:ChangeSyncState(ESyncState.Downloading)
  ApiMessage.DownloadData(callback)
end

function SyncModel:OnDownloadDataSuccess(response)
  GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.DownloadSuccess)
  if not (response.force_sync ~= 1 and not self:_IsDataCracked() and not GM:IsNewUser() and self:ShouldUpload()) or self:_LastSyncTimeInconsistent() then
    self:_UseServerData(response)
  elseif self:IsAutoSelectConflictData(response) then
  elseif GM.SceneManager:GetGameMode() == EGameMode.Loading then
    self.m_downloadedServerData = response
  else
    self:_OpenConflictWindow(response)
  end
end

function SyncModel:IsAutoSelectConflictData(response)
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoSelectConflictData) then
    local localData = DataConflictWindow.GetLocalDisplayData()
    local serverData = DataConflictWindow.GetServerDisplayData(response)
    if self:_IsSelectFirstData(localData, serverData) then
      DataConflictWindow.LogAction(true, localData, serverData, true, true)
      self:_UseLocalData(response)
      if GameConfig.IsTestMode() and GM and GM.UIManager then
        GM.UIManager:ShowPrompt("\232\135\170\229\138\168\233\128\137\230\139\169\230\156\172\229\156\176\230\149\176\230\141\174")
      end
      return true
    elseif self:_IsSelectFirstData(serverData, localData) then
      DataConflictWindow.LogAction(true, localData, serverData, false, true)
      self:_UseServerData(response)
      if GameConfig.IsTestMode() and GM and GM.UIManager then
        GM.UIManager:ShowPrompt("\232\135\170\229\138\168\233\128\137\230\139\169\230\156\141\229\138\161\229\153\168\230\149\176\230\141\174")
      end
      if GM and GM.SceneManager:GetGameMode() == EGameMode.Loading then
        GM:RestartGame(nil, EBIProjectType.RestartGameAction.UseServerData)
      end
      return true
    end
  end
  return false
end

function SyncModel:_OpenConflictWindow(response)
  local displayData = DataConflictWindow.GetServerDisplayData(response)
  
  local function selectLocalCallback()
    GM.BIManager:LogAction(EBIType.SceneDataConflict, EBIType.SceneDataConflictAction.SameAccountUseLocal)
    DataConflictWindow.LogAction(true, nil, displayData, true)
    self:_UseLocalData(response)
  end
  
  local function selectNewCallback()
    GM.BIManager:LogAction(EBIType.SceneDataConflict, EBIType.SceneDataConflictAction.SameAccountUseServer)
    DataConflictWindow.LogAction(true, nil, displayData, false)
    self:_UseServerData(response)
  end
  
  GM.UIManager:OpenView(UIPrefabConfigName.DataConflictWindow, "progress_cloud_conflict_desc", displayData, selectLocalCallback, selectNewCallback, nil, true)
end

function SyncModel:_IsSelectFirstData(data1, data2)
  local ok, result = SafeCall(function()
    local day1, id1 = DataConflictRegion.ParseCurrentTask(data1.CurrentTask)
    local day2, id2 = DataConflictRegion.ParseCurrentTask(data2.CurrentTask)
    if GM.MainTaskModel:GetTaskSubNum(day1, id1, day2, id2) >= 2 or data1.Gems >= data2.Gems and data1.Coins >= data2.Coins and data1.Level >= data2.Level and (day1 > day2 or day1 == day2 and not MainTaskData.IsLessId(id1, id2)) and data1.Timestamp > 0 and data2.Timestamp > 0 and data1.Timestamp <= data2.Timestamp then
      return true
    end
    return false
  end)
  return ok and result
end

function SyncModel:_UseLocalData(response)
  self:ClearDataUploadRecord()
  if GM.SceneManager:GetGameMode() ~= EGameMode.Loading then
    GM.UIManager:ShowMask()
  end
  
  local function callback(result)
    GM.UIManager:HideMask()
    if result then
      local loginCallback
      
      function loginCallback(bSuccess, tbLoginResp, reqCtx)
        GM.UIManager:HideMask()
        if not bSuccess then
          GM.UIManager:OpenView(UIPrefabConfigName.NetworkErrorWindow, function()
            GM.UIManager:ShowMask()
            GM.GameModel:Login(loginCallback)
          end)
        end
      end
      
      GM.UIManager:ShowMask()
      GM.GameModel:Login(loginCallback)
      return
    end
    if self.eSyncState == ESyncState.VersionError then
      local title = GM.GameTextModel:GetText("sync_ver_error_title")
      local description = GM.GameTextModel:GetText("sync_ver_error_desc")
      local buttonText = GM.GameTextModel:GetText("sync_yes_button")
      GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, title, description, buttonText, nil, nil, false)
      return
    end
    local title = GM.GameTextModel:GetText("sync_error_title")
    local description = GM.GameTextModel:GetText("sync_error_desc")
    local buttonText = GM.GameTextModel:GetText("sync_yes_button")
    GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, title, description, buttonText, function()
      self:_UseLocalData(response)
    end, nil, false)
  end
  
  self:UploadData(callback, response.syncTime)
end

function SyncModel:_UseServerData(response)
  if not GLOBAL_APP then
    GM.DBTableManager:ResetFile()
  end
  GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.UseServerData)
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Gold, response.user[1].gold)
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Gem, response.user[1].gem)
  GM.PropertyDataManager:PropertyFromSyncData(EPropertyType.Experience, response.user[1].exp)
  GM.LevelModel:SyncLevel(tonumber(response.user[1].level))
  GM.UserProfileModel:FromAvatarAndName(response.name, response.icon)
  GM.UserProfileModel:FromAvatarFrame(response.icon_frame)
  GM.MainBoardModel:SyncItemData(response.item)
  GM.MainBoardModel:SyncItemLayerData(response.board)
  GM.MainBoardModel:SyncItemCacheData(response.cacheItem)
  GM.MainBoardModel:SyncItemStoreData(response.inventory)
  GM.MainBoardModel:SyncOrderMetaData(response.orderMeta)
  GM.MainBoardModel:SyncOrderData(response.orders)
  GM.ShopModel:SyncShopItem(response.shopItem)
  GM.MapDataModel:SyncSlotData(response.slot)
  GM.ActivityManager:SyncGeneralData(response.activity_data)
  GM.ActivityManager:SyncEventActivityData(response.wedding_day)
  GM.BundleManager:SyncBundleDataTable(response.bundle)
  GM.BundleManager:SyncBundleMetaDataTable(response.bundle_meta)
  GM.BuffManager:SyncBuffDataTable(response.buffproperty)
  GM.BuffManager:SyncBuffMetaDataTable(response.buffproperty_meta)
  for _, discardSyncKey in ipairs(arrDiscardSyncKey) do
    if not Table.IsEmpty(response[discardSyncKey]) then
      self:_SetSyncKey(discardSyncKey)
    end
  end
  for model, params in pairs(self.m_mapRegisteredModels) do
    model:FromSyncData(response[params.name])
  end
  self:SetDataInconsistent(false)
  self:SetLastSyncTime(response.syncTime)
  self:_ClearDataCrackedTag()
  GM.DBTableManager:TrySaveAll()
  self:_MarkUploaded(true)
  if GM.SceneManager:GetGameMode() ~= EGameMode.Loading then
    GM:RestartGame(nil, EBIProjectType.RestartGameAction.UseServerData)
  end
end

function SyncModel:ClearAllData()
  GM.BIManager:LogAction(EBIType.SyncModel, EBIType.SyncModelAction.Clear)
  GM.SsoManager:ThrowPendingRequests()
  GM.HttpManager:ThrowSavedRequests()
  local uuid = GM.UserModel:GetInstallUuid()
  GM.DBTableManager:Clear()
  local selectedValue = NetworkConfig.GetSelectedServer()
  local selectedSchema = PlayerPrefs.GetString(EPlayerPrefKey.TestServer4Schema, "")
  local installReferrerFlag = PlayerPrefs.GetInt(EPlayerPrefKey.GetInstallReferrer, 0)
  local useRemoteCodeFlag = PlayerPrefs.GetInt("use_remote_code", 0)
  local realName = PlayerPrefs.GetInt(EPlayerPrefKey.TestRealName, 0)
  local testMonthTotal = PlayerPrefs.GetInt(EPlayerPrefKey.TestMonthTotal)
  local testCertModel = PlayerPrefs.GetInt(EPlayerPrefKey.TestStrictCertMode, 0)
  local testDebugAddress = PlayerPrefs.GetString(EPlayerPrefKey.TestDebugAddress, "localhost")
  PlayerPrefs.DeleteAll()
  GM.SimplePrefs:Clear()
  GM.UserModel:SetInstallUuid(uuid)
  NetworkConfig.SetSelectedServer(selectedValue)
  PlayerPrefs.SetString(EPlayerPrefKey.TestServer4Schema, selectedSchema)
  PlayerPrefs.SetInt(EPlayerPrefKey.GetInstallReferrer, installReferrerFlag)
  PlayerPrefs.SetInt("use_remote_code", useRemoteCodeFlag)
  PlayerPrefs.SetInt(EPlayerPrefKey.TestRealName, realName)
  if testMonthTotal then
    PlayerPrefs.SetInt(EPlayerPrefKey.TestMonthTotal, testMonthTotal)
  end
  PlayerPrefs.SetInt(EPlayerPrefKey.TestStrictCertMode, testCertModel)
  PlayerPrefs.SetString(EPlayerPrefKey.TestDebugAddress, testDebugAddress)
  PlayerPrefs.Save()
  GM.LevelModel:ResetLevel()
  local language = LocalizationModel:GetCurLanguageInString()
  LocalizationModel:ChangeLanguageWithString(language)
  GM.DBTableManager:TrySaveAll()
end

function SyncModel:_NeedResetSyncKey(syncKey)
  return PlayerPrefs.GetInt(self:_GetResetSyncKeyPlayerPrefsKey(syncKey), 0) == 1
end

function SyncModel:_SetSyncKey(syncKey)
  PlayerPrefs.SetInt(self:_GetResetSyncKeyPlayerPrefsKey(syncKey), 1)
end

function SyncModel:_ClearResetSyncKey(syncKey)
  PlayerPrefs.DeleteKey(self:_GetResetSyncKeyPlayerPrefsKey(syncKey))
end

function SyncModel:_GetResetSyncKeyPlayerPrefsKey(syncKey)
  return "ResetSyncKey" .. tostring(syncKey)
end

function SyncModel:LoadServerConfig()
  CHECK_UPLOAD_DELAY_NORMAL = MathUtil.Clamp(GM.ConfigModel:GetGeneralConfByType(EGeneralConfType.UploadGap, ConfigModel.EGeneralConfigParam.Int, 300), 300, 60)
end

function SyncModel:GetUploadDelayNormal()
  return CHECK_UPLOAD_DELAY_NORMAL
end

function SyncModel:CheckMoreUpload(itemType, isTopTempItem, orderRequirements)
  local configPara = GM.ConfigModel:GetGeneralConfByType(EGeneralConfType.DataUploadNew, ConfigModel.EGeneralConfigParam.Int, 0)
  if configPara ~= 1 and configPara ~= 2 and configPara ~= 3 then
    return
  end
  if not itemType and not isTopTempItem and not orderRequirements then
    self:CheckUpload()
    return
  end
  if isTopTempItem and configPara == 3 then
    self:CheckUpload()
    return
  end
  if self.m_moreUploadItemType == nil then
    self.m_moreUploadItemType = {
      [ItemType.Flour10] = true,
      [ItemType.Flour11] = true,
      [ItemType.Flour12] = true,
      [ItemType.Flour13] = true,
      [ItemType.Flour14] = true,
      [ItemType.Flour15] = true,
      [ItemType.Coffee10] = true,
      [ItemType.Coffee11] = true,
      [ItemType.Coffee12] = true,
      [ItemType.Coffee13] = true,
      [ItemType.Coffee14] = true,
      [ItemType.Seafood09] = true,
      [ItemType.Seafood10] = true,
      [ItemType.SwimmingRing10] = true,
      [ItemType.SwimmingRing11] = true,
      [ItemType.Seashell10] = true,
      [ItemType.Seashell11] = true,
      [ItemType.Seashell12] = true
    }
  end
  if itemType and (self.m_moreUploadItemType[itemType] or configPara == 2 and itemType == ItemType.Orange07) then
    self:CheckUpload()
    return
  end
  if orderRequirements then
    for _, orderItem in ipairs(orderRequirements) do
      if self.m_moreUploadItemType[orderItem] or configPara == 2 and orderItem == ItemType.Orange07 then
        self:CheckUpload()
        return
      end
    end
  end
end
