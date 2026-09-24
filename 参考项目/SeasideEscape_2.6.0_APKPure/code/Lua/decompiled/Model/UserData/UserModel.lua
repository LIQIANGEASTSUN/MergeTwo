UserModel = {}
UserModel.__index = UserModel
local EReturnUserParamType = {
  ReturnLostDay = "return_lost_day",
  ReturnConfigId = "return_config_id",
  ReturnLockExpration = "return_lock_expration"
}

function UserModel:Init()
  if MINIGAME_DOUYIN then
    self:CheckUserid()
  end
  self.m_localDBTable = GM.DBTableManager:GetTable(EDBTableConfigs.Local)
  local uuid = self:GetInstallUuid()
  if uuid == nil or uuid == "nil" then
    uuid = PlatformInterface.GenerateUUID()
    self:SetInstallUuid(uuid)
  elseif StringUtil.IsNilOrEmpty(PlayerPrefs.GetString(EPlayerPrefKey.UUIDForCSharp)) then
    PlayerPrefs.SetString(EPlayerPrefKey.UUIDForCSharp, uuid)
  end
  self.m_syncDBTable = GM.DBTableManager:GetTable(EDBTableConfigs.User)
  local userId = self:GetUserId()
  if userId ~= 0 then
    self:_SyncUserId2NeedModel(userId)
    ApplicationManager.Instance:SetUserId(userId, false)
  else
    self.newRegisterUser = true
  end
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self._OnLoginFinished)
end

function UserModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function UserModel:CheckUserid()
  local dbTbale = GM.DBTableManager:GetTable(EDBTableConfigs.Local)
  local userId = tonumber(dbTbale:GetValue(EUserLocalDataKey.UserId, "value")) or 0
  if userId ~= 0 and ApplicationManager.Instance.userId ~= userId then
    local recordVendorId = dbTbale:GetValue(EUserLocalDataKey.VendorId, DB_VALUE_KEY)
    local recordDeviceId = dbTbale:GetValue(EUserLocalDataKey.DeviceId, DB_VALUE_KEY)
    DelayExecuteFunc(function()
      GM.BIManager:LogProject(EBIProjectType.CheckUserid, "VendorId = " .. recordVendorId .. " DeviceId = " .. recordDeviceId)
      GM.BIManager:LogProject(EBIProjectType.UseridDiffer, "C# userid:" .. ApplicationManager.Instance.userId .. " lua userid:" .. userId)
    end, 0)
    VirtualDBTable.CleanAll()
    GM.DBTableManager:Clear()
    GM.SimplePrefs:Clear()
  end
end

function UserModel:CreateNewUser()
  GM.PropertyDataManager:CreateNewUser()
end

function UserModel:GetData()
  return self.m_syncDBTable
end

function UserModel:Get(userDataKey)
  Log.Assert(userDataKey ~= EUserLocalDataKey.InstallUuid, "\229\191\133\233\161\187\228\189\191\231\148\168UserModel.GetInstallUuid\232\174\191\233\151\174uuid")
  Log.Assert(userDataKey ~= EUserLocalDataKey.UserId, "\229\191\133\233\161\187\228\189\191\231\148\168UserModel.GetUserId\232\174\191\233\151\174userid")
  return self:_GetDBTableByUserDataKey(userDataKey):GetValue(userDataKey, "value")
end

function UserModel:GetInNumber(userDataKey)
  return tonumber(self:Get(userDataKey)) or 0
end

function UserModel:Set(userDataKey, value)
  Log.Assert(userDataKey ~= EUserLocalDataKey.InstallUuid, "\229\191\133\233\161\187\228\189\191\231\148\168UserModel.SetInstallUuid\232\174\191\233\151\174uuid")
  Log.Assert(userDataKey ~= EUserLocalDataKey.UserId, "\229\191\133\233\161\187\228\189\191\231\148\168UserModel.GetUserId\232\174\190\231\189\174userid")
  self:_GetDBTableByUserDataKey(userDataKey):Set(userDataKey, "value", tostring(value))
end

function UserModel:BatchSet(mapContent)
  if mapContent == nil then
    return
  end
  local mapLocalContent = {}
  local mapSyncContent = {}
  for k, v in pairs(mapContent) do
    if self:_GetDBTableByUserDataKey(k) == self.m_localDBTable then
      mapLocalContent[k] = v
    else
      mapSyncContent[k] = v
    end
  end
  self.m_localDBTable:BatchSet(mapLocalContent)
  self.m_syncDBTable:BatchSet(mapSyncContent)
end

function UserModel:ChangeNumber(key, delta)
  if delta == 0 then
    return true
  end
  local curNum = self:GetInNumber(key)
  local newNum = curNum + delta
  if newNum < 0 then
    Log.Error("user property " .. tostring(key) .. " change to less than zero:" .. tostring(newNum))
    return false
  end
  self:Set(key, newNum)
  return true
end

function UserModel:_GetDBTableByUserDataKey(userDataKey)
  if self.m_mapUserLocalDataKey == nil then
    self.m_mapUserLocalDataKey = {}
    for _, v in pairs(EUserLocalDataKey) do
      self.m_mapUserLocalDataKey[v] = true
    end
  end
  return self.m_mapUserLocalDataKey[userDataKey] and self.m_localDBTable or self.m_syncDBTable
end

function UserModel:UpdateAfterLoginFinished(tbLoginResp)
  self:_UpdateReturnUserInfo(tbLoginResp)
  if GM.SceneManager:GetGameMode() ~= EGameMode.Loading then
    self:_TryProcessReturnData()
  end
end

function UserModel:OnSceneViewLoaded()
  self:_TryGiveRewardsLogic()
  if GM.MainBoardModel:IsToolBoxCollect() then
    ToolCollectHintWindow.TryPopup()
  end
end

function UserModel:_OnLoginFinished()
  if GM.SceneManager:GetGameMode() ~= EGameMode.Loading then
    self:_TryGiveRewardsLogic()
  end
end

function UserModel:OnSyncDataFinished()
  self:_TryProcessReturnData()
end

function UserModel:LoadServerConfig()
  local returnUserConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.ReturnUserRewards)
  self.m_mapId2ReturnUserConfig = {}
  if not Table.IsEmpty(returnUserConfig) then
    for _, config in pairs(returnUserConfig) do
      self.m_mapId2ReturnUserConfig[config.id] = config
      if GameConfig.IsTestMode() then
        Log.Assert(config.rewards_1 == nil and config.rewards_2 == nil and config.rewards_3 == nil or config.rewards == nil, "[\229\144\142\229\143\176\233\133\141\231\189\174][returnUser_rewards]rewards\229\146\140rewards_1/2/3\228\184\141\232\131\189\229\144\140\230\151\182\233\133\141\231\189\174!!!")
      end
    end
  end
end

function UserModel:GetVendorId()
  return self.m_localDBTable:GetValue(EUserLocalDataKey.VendorId, DB_VALUE_KEY)
end

function UserModel:SetVendorId(vid)
  self.m_localDBTable:Set(EUserLocalDataKey.VendorId, DB_VALUE_KEY, vid)
end

function UserModel:GetDeviceId()
  return self.m_localDBTable:GetValue(EUserLocalDataKey.DeviceId, DB_VALUE_KEY)
end

function UserModel:SetDeviceId(did)
  self.m_localDBTable:Set(EUserLocalDataKey.DeviceId, DB_VALUE_KEY, did)
end

function UserModel:GetUserId()
  return tonumber(self.m_localDBTable:GetValue(EUserLocalDataKey.UserId, "value")) or 0
end

function UserModel:SetUserId(userId)
  self.m_localDBTable:Set(EUserLocalDataKey.UserId, "value", tostring(userId))
  self:_SyncUserId2NeedModel(userId)
  Log.Info("UserModel UserId changed to " .. userId)
end

function UserModel:_SyncUserId2NeedModel(userId)
  CSFirebaseManager:SetUserId(tostring(userId))
  CSAppsFlyerManager:SetCuid(tostring(userId))
  PlayerPrefs.SetInt(EPlayerPrefKey.UserIdForCSharp, userId)
  CSBIManager.userId = userId
end

function UserModel:EncryptUserId(iUserId)
  local strEncrypted = CS.Base32.Encode(iUserId)
  return strEncrypted
end

function UserModel:DecryptUserId(strUserId)
  local iDecrypted = CS.Base32.Decode(strUserId)
  return iDecrypted
end

function UserModel:GetEncryptedUserId()
  local iUserId = self:GetUserId()
  return self:EncryptUserId(iUserId)
end

local ProjectPrefix = "CBC"

function UserModel:GetDisplayUserId()
  local encrypted = self:GetEncryptedUserId()
  if GLOBAL_APP then
    return encrypted
  else
    return ProjectPrefix .. "_" .. encrypted
  end
end

function UserModel:GetInstallUuid()
  local uuid = GM.SimplePrefs:Get(EPlayerPrefKey.InstallUuid)
  if GameConfig.IsTestMode() then
    Log.Info("[Uuid] prefs uuid = " .. tostring(uuid))
    local dbID = self.m_localDBTable:GetValue(EUserLocalDataKey.InstallUuid, "value")
    Log.Info("[Uuid] db uuid = " .. tostring(dbID))
  end
  if StringUtil.IsNilOrEmpty(uuid) then
    uuid = self.m_localDBTable:GetValue(EUserLocalDataKey.InstallUuid, "value")
    if not StringUtil.IsNilOrEmpty(uuid) then
      self:SetInstallUuid(uuid)
    else
      return nil
    end
  end
  return uuid
end

function UserModel:SetInstallUuid(uuid)
  GM.SimplePrefs:Set(EPlayerPrefKey.InstallUuid, uuid)
  if GameConfig.IsTestMode() then
    if uuid then
      Log.Info("[Uuid] set uuid = " .. uuid .. "\n" .. debug.traceback())
    else
      Log.Info("[Uuid] set uuid = " .. "nil" .. "\n" .. debug.traceback())
    end
  end
end

function UserModel:IsReturnUser(needPro)
  local bReturn
  if needPro then
    bReturn = self.m_bInvalidRecall
  else
    bReturn = self.m_bInvalidReturnUser
  end
  return self.m_returnLockExpration ~= nil and self.m_returnLockExpration > GM.GameModel:GetServerTime() and not GM.LevelModel:IsTopLevelUser(needPro) and not bReturn
end

function UserModel:GetReturnLockExpration()
  return self.m_returnLockExpration
end

function UserModel:_UpdateReturnUserInfo(tbLoginResp)
  if Table.IsEmpty(tbLoginResp) then
    return
  end
  self.m_returnLostDay = tbLoginResp[EReturnUserParamType.ReturnLostDay]
  self.m_returnConfigId = tbLoginResp[EReturnUserParamType.ReturnConfigId]
  self.m_returnLockExpration = tbLoginResp[EReturnUserParamType.ReturnLockExpration]
  if self.m_returnLostDay == nil or self.m_returnConfigId == nil or self.m_returnLockExpration == nil then
    Log.Error("[UserModel] \231\188\186\229\164\177\229\155\158\229\189\146\231\148\168\230\136\183\231\154\132\228\191\161\230\129\175\239\188\140\232\175\183\230\163\128\230\159\165\239\188\129")
  end
end

function UserModel:_TryProcessReturnData()
  local invalidLockExpration = GM.MiscModel:Get(EMiscKey.ReturnInValidLockExpration) or -1
  self.m_bInvalidReturnUser = false
  self.m_bInvalidRecall = false
  if self.m_returnLockExpration == tonumber(invalidLockExpration) then
    self.m_bInvalidReturnUser = true
    self.m_bInvalidRecall = true
  elseif self.m_returnLockExpration > 0 then
    if GM.LevelModel:IsTopLevelUser() then
      self.m_bInvalidReturnUser = true
      GM.MiscModel:Set(EMiscKey.ReturnInValidLockExpration, self.m_returnLockExpration)
    end
    if GM.LevelModel:IsTopLevelUser(true) then
      self.m_bInvalidRecall = true
    end
  end
end

function UserModel:CanGiveRewards(bContainMulti)
  local needPro = tonumber(GM.ConfigModel:ParseGeneralConf(EGeneralConfType.UserTopLevel) or 0)
  if not self:IsReturnUser(needPro ~= 0) or self.m_returnConfigId == nil then
    return false
  end
  local localExprationRecord = GM.MiscModel:Get(EMiscKey.ReturnLockExpration) or 0
  local configIdRecord = GM.MiscModel:Get(EMiscKey.ReturnConfigId) or -1
  if self.m_returnLockExpration ~= tonumber(localExprationRecord) or self.m_returnConfigId ~= tonumber(configIdRecord) then
    GM.MiscModel:Clear(EMiscKey.ReturnAcquireLastIndex)
    GM.MiscModel:Clear(EMiscKey.ReturnAcquireRewardDay)
    return true
  elseif bContainMulti and self:_CanGiveMultiReturnRewards() then
    return true
  end
  return false
end

function UserModel:_CanGiveMultiReturnRewards()
  if self.m_returnConfigId and self.m_mapId2ReturnUserConfig[self.m_returnConfigId] then
    local config = self.m_mapId2ReturnUserConfig[self.m_returnConfigId]
    if config.rewards == nil then
      local lastDay = tonumber(GM.MiscModel:Get(EMiscKey.ReturnAcquireRewardDay)) or 0
      local lastIndex = tonumber(GM.MiscModel:Get(EMiscKey.ReturnAcquireLastIndex)) or 0
      if lastDay ~= GM.GameModel:GetServerDay() and config["rewards_" .. tostring(lastIndex + 1)] ~= nil then
        return true
      end
    end
  end
  return false
end

function UserModel:CanRestartGame()
  local config = self.m_mapId2ReturnUserConfig[self.m_returnConfigId]
  return self:CanGiveRewards() and config ~= nil and (not Table.IsEmpty(config.rewards) or not Table.IsEmpty(config.rewards_1))
end

function UserModel:_TryGiveRewardsLogic()
  if self:CanGiveRewards(true) then
    local config = self.m_mapId2ReturnUserConfig[self.m_returnConfigId]
    local rewardIndex
    if config then
      if config.rewards then
        self.m_reward = config.rewards
      else
        local lastIndex = tonumber(GM.MiscModel:Get(EMiscKey.ReturnAcquireLastIndex)) or 0
        rewardIndex = lastIndex + 1
        self.m_reward = config["rewards_" .. tostring(rewardIndex)]
        self.m_isMultiReward = true
        GM.MiscModel:Set(EMiscKey.ReturnAcquireRewardDay, GM.GameModel:GetServerDay())
        GM.MiscModel:Set(EMiscKey.ReturnAcquireLastIndex, rewardIndex)
      end
    end
    if not Table.IsEmpty(self.m_reward) then
      RewardApi.AcquireRewardsLogic(self.m_reward, EPropertySource.Give, EBIType.ReturnUserReward, CacheItemType.Stack, nil, nil, nil, nil, nil, rewardIndex and "day:" .. rewardIndex or nil)
    end
    GM.MiscModel:Set(EMiscKey.ReturnLockExpration, self.m_returnLockExpration)
    GM.MiscModel:Set(EMiscKey.ReturnConfigId, self.m_returnConfigId)
  end
end

function UserModel:TryGiveRewardsView()
  local reward = self.m_reward
  local bIsMulti = self.m_isMultiReward
  self.m_reward = nil
  self.m_isMultiReward = nil
  return reward, bIsMulti
end

function UserModel:GetReturnRewardConfig()
  if self.m_returnConfigId and self.m_mapId2ReturnUserConfig and self.m_mapId2ReturnUserConfig[self.m_returnConfigId] then
    return self.m_mapId2ReturnUserConfig[self.m_returnConfigId]
  end
end

function UserModel:GetTestInfo()
  if self.m_returnLockExpration == nil or self.m_returnLockExpration == 0 then
    return 0
  end
  return "UTC:" .. TimeUtil.ToDate(self.m_returnLockExpration, ETimeFormat.UTCYMDHMS)
end
