LevelModel = {}
LevelModel.__index = LevelModel

function LevelModel:Init()
  self.m_curLevel = GM.UserModel:GetInNumber(EUserSyncDataKey.UserLevel)
  if self.m_curLevel <= 0 then
    self.m_curLevel = 1
    self.m_bNewUser = true
    GM.UserModel:Set(EUserSyncDataKey.UserLevel, self.m_curLevel)
  end
  self:SyncCSLevel()
  EventDispatcher.AddListener(EEventType.PropertyAcquired, self, self.OnPropertyAcquired)
  EventDispatcher.AddListener(EEventType.ChangeGameMode, self, self._OnGameModeChanged)
  CSFirebaseManager:CrashlyticsSetKeyValue("level", self:GetCurrentLevel())
end

function LevelModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function LevelModel:LateInit()
  if self.m_arrLevelChangeRewards == nil then
    self:GetLevelBalanceReward()
  end
end

function LevelModel:LoadFileConfig()
  self.m_levelConfig = require("Data.Config.LevelConfig", true)
  self.m_maxFixedLevel = #self.m_levelConfig
end

function LevelModel:OnPropertyAcquired(message)
  if self:CanLevelUp() then
    self:DoLevelUp()
  end
end

function LevelModel:IsNewUser()
  return self.m_bNewUser
end

function LevelModel:GetCurrentLevel()
  return self.m_curLevel
end

function LevelModel:SyncLevel(level)
  self.m_curLevel = level
  if not self.m_curLevel or self.m_curLevel <= 0 then
    self.m_curLevel = 1
  end
  Log.Info("LevelModel sync level to " .. tostring(self.m_curLevel))
  self:SyncCSLevel()
  GM.UserModel:Set(EUserSyncDataKey.UserLevel, self.m_curLevel)
end

function LevelModel:IfReachMaxLevel(curLevel)
  return false
end

function LevelModel:CanLevelUp()
  return GM.PropertyDataManager:GetPropertyNum(EPropertyType.Experience) >= self:GetLevelUpCost()
end

function LevelModel:GetLevelUpCost(uCurLevel)
  if not self.m_levelConfig then
    return -1
  end
  uCurLevel = uCurLevel or self:GetCurrentLevel()
  local config = self:GetLevelConfig(uCurLevel)
  return config.cost
end

function LevelModel:GetLevelConfig(level)
  local diff = level - self.m_maxFixedLevel
  if diff <= 0 then
    return self.m_levelConfig[level]
  end
  local cycle = diff % 2
  local config = Table.ShallowCopy(self.m_levelConfig[self.m_maxFixedLevel - cycle])
  config.level = level
  config.totalCost = config.totalCost + config.cost * (diff + cycle)
  return config
end

function LevelModel:GetLevelUpRewards(uCurLevel)
  uCurLevel = uCurLevel or self:GetCurrentLevel()
  if uCurLevel < 1 then
    return nil
  end
  local config = self:GetLevelConfig(uCurLevel)
  local ans = ConfigUtil.GetCurrencyFromArrStr(config.rewards)
  for i, reward in ipairs(ans) do
    if GM.ScoreItemManager:IsScoreItem(reward[PROPERTY_TYPE]) and not GM.ScoreItemManager:HasUnqiueId(reward[PROPERTY_TYPE]) then
      ans[i] = GM.ScoreItemManager:AppendUniqueId(reward, "level" .. uCurLevel)
    end
  end
  return ConfigUtil.GetArrFromCurrency(ans)
end

function LevelModel:DoLevelUp()
  Log.Assert(self:CanLevelUp(), "LevelModel:DoLevelUp")
  while self:CanLevelUp() and GM.PropertyDataManager:Consume(EPropertyType.Experience, self:GetLevelUpCost(), EBIType.LevelUp, self.m_curLevel) do
    local arrRewards = self:GetLevelUpRewards()
    self.m_curLevel = self.m_curLevel + 1
    self:SyncCSLevel()
    GM.UserModel:Set(EUserSyncDataKey.UserLevel, self.m_curLevel)
    CSFirebaseManager:LogLevelUpEvent(self.m_curLevel)
    GM.OperBIManager:TrackLevelUpEvent(self.m_curLevel)
    RewardApi.AcquireRewardsLogic(ConfigUtil.GetCurrencyFromArrStr(arrRewards), EPropertySource.Give, EBIType.LevelUp, GM.ConfigModel:GetCacheItemType())
    GM.BIManager:LogAction(EBIType.LevelUp, self.m_curLevel)
    EventDispatcher.DispatchEvent(EEventType.LevelUp, self.m_curLevel)
  end
  EventDispatcher.DispatchEvent(EEventType.RefreshSettingStrongTip)
end

function LevelModel:ResetLevelByExp(exp)
  local level = 1
  local tempExp = exp
  local cost = self:GetLevelUpCost(level)
  while tempExp >= cost do
    level = level + 1
    tempExp = tempExp - cost
    cost = self:GetLevelUpCost(level)
  end
  if level >= self.m_curLevel then
    for i = self.m_curLevel, level - 1 do
      RewardApi.AcquireRewardsLogic(ConfigUtil.GetCurrencyFromArrStr(self:GetLevelUpRewards(i)), EPropertySource.Give, EBIType.CorrectErrorData, CacheItemType.Queue)
    end
  else
    self.m_arrLevelChangeRewards = self:_GetLevelBalanceReward(level)
    if self.m_arrLevelChangeRewards ~= nil then
      local arrStr = ConfigUtil.GetArrFromCurrency(self.m_arrLevelChangeRewards)
      GM.MiscModel:Set(EMiscKey.LevelBalanceReward, table.concat(arrStr, ";"))
    end
  end
  self.m_oldLevel = self.m_curLevel
  self.m_curLevel = level
  self:SyncCSLevel()
  tempExp = tempExp - GM.PropertyDataManager:GetPropertyNum(EPropertyType.Experience)
  if self.m_oldLevel == self.m_curLevel and tempExp == 0 then
    self.m_oldLevel = nil
    return
  end
  GM.UserModel:Set(EUserSyncDataKey.UserLevel, self.m_curLevel)
  GM.TutorialModel:SetMainTutorialFinished()
  RewardApi.AcquireRewardsLogic({
    [PROPERTY_TYPE] = EPropertyType.Experience,
    [PROPERTY_COUNT] = tempExp
  }, EPropertySource.Give, EBIType.CorrectErrorData, CacheItemType.Stack)
  GM.BIManager:LogAction(EBIType.LevelUp, self.m_curLevel)
  EventDispatcher.DispatchEvent(EEventType.LevelUp, self.m_curLevel)
end

function LevelModel:_OnGameModeChanged(bFromLoading)
  if bFromLoading and self.m_oldLevel and self.m_oldLevel ~= self.m_curLevel then
    GM.GameModel:Login()
  end
end

function LevelModel:GetCorrectChangeData()
  local oldLevel = self.m_oldLevel
  self.m_oldLevel = nil
  return oldLevel, self.m_arrLevelChangeRewards
end

function LevelModel:GetLevelBalanceReward()
  if self.m_arrLevelChangeRewards ~= nil then
    RewardApi.AcquireRewardsLogic(self.m_arrLevelChangeRewards, EPropertySource.Give, EBIType.CorrectErrorData, CacheItemType.Queue)
    self.m_arrLevelChangeRewards = nil
  else
    local str = GM.MiscModel:Get(EMiscKey.LevelBalanceReward)
    if not StringUtil.IsNilOrEmpty(str) then
      local arrStr = StringUtil.Split(str, ";")
      local arrRewards = {}
      for i, v in ipairs(arrStr) do
        arrRewards[i] = ConfigUtil.GetCurrencyFromStr(v)
      end
      RewardApi.AcquireRewardsLogic(arrRewards, EPropertySource.Give, EBIType.CorrectErrorData, CacheItemType.Queue)
    end
  end
  GM.MiscModel:Set(EMiscKey.LevelBalanceReward, nil)
end

function LevelModel:_GetLevelBalanceReward(level)
  local delta = self.m_curLevel - level
  if delta == 0 then
    return nil
  end
  local config = GM.ConfigModel:GetLocalConfig(LocalConfigKey.SyncValue)
  local arrRewards = config.CircleLevel
  local len = #arrRewards
  local rem = 0
  local round = delta // len
  if round > config.MaxCircleNum then
    round = config.MaxCircleNum
  else
    rem = delta % len
  end
  local arrRewards = ConfigUtil.GetCurrencyFromArrStr(arrRewards)
  for i, v in ipairs(arrRewards) do
    v[PROPERTY_COUNT] = v[PROPERTY_COUNT] * (i <= rem and round + 1 or round)
  end
  for i = #arrRewards, 1, -1 do
    if arrRewards[i][PROPERTY_COUNT] == 0 then
      arrRewards[i] = nil
    elseif arrRewards[i][PROPERTY_TYPE] == EPropertyType.Gold then
      arrRewards[i][PROPERTY_COUNT] = arrRewards[i][PROPERTY_COUNT] * level
    end
  end
  return arrRewards
end

function LevelModel:IsTopLevelUser(needPro)
  if not self.m_levelConfig then
    self:LoadFileConfig()
  end
  local val = tonumber(GM.ConfigModel:ParseGeneralConf(EGeneralConfType.UserTopLevel) or 0)
  if needPro and val ~= 0 then
    local config = self:GetLevelConfig(self.m_curLevel + val)
    return config.totalCost >= GM.MapDataModel:GetCurrentBuildingExp()
  else
    local config = self:GetLevelConfig(self.m_curLevel + 10)
    return config.totalCost >= GM.MapDataModel:GetTotalExp()
  end
end

function LevelModel:SyncCSLevel()
  if self.m_curLevel ~= nil then
    Log.Verbose("[LevelModel:SyncCSLevel] \229\144\140\230\173\165CSharp\231\173\137\231\186\167: " .. self.m_curLevel)
    PlayerPrefs.SetInt(EPlayerPrefKey.LevelForCSharp, self.m_curLevel)
  end
end

function LevelModel:GetReachableMaxLevel()
  local maxExp = GM.MapDataModel:GetCurrentBuildingExp()
  if not self.m_levelConfig then
    self:LoadFileConfig()
  end
  if Table.IsEmpty(self.m_levelConfig) then
    Log.Error("LevelModel.GetReachableMaxLevel  levelConfig is nil")
    return 200
  end
  local count = self.m_maxFixedLevel
  local maxFixedConfig = self.m_levelConfig[count]
  local rest = maxExp - maxFixedConfig.totalCost
  if 0 < rest then
    return count + math.floor(rest / maxFixedConfig.cost)
  end
  local left, right, result = 1, count
  while left <= right do
    local mid = math.floor((left + right) / 2)
    if maxExp >= self.m_levelConfig[mid].totalCost then
      result = mid
      left = mid + 1
    else
      right = mid - 1
    end
  end
  return result or 200
end
