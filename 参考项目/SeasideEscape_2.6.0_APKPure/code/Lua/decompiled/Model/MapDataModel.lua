MapDataModel = {}
MapDataModel.__index = MapDataModel
local DBColumnFinished = "finished"
local SkinColumn = "value"
local CheckMark = 1
ESkinState = {
  Locked = 0,
  Unlock = 1,
  Using = 2
}
ESlotUpgrade = {
  None = 0,
  Unlock = 1,
  LevelUp = 2,
  Upgrade = 3,
  Finished = 4
}

function MapDataModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.Slot)
  self.m_skinTable = GM.DBTableManager:GetTable(EDBTableConfigs.Skin)
  self.m_timeLimitSkinTable = GM.DBTableManager:GetTable(EDBTableConfigs.TimeLimitSkin)
  self.m_unlockTime = {}
  self.m_percentage = 0
  self:UpdateTestUnlockAllTask()
  EventDispatcher.AddListener(EEventType.BuildingPercentUpGrade, self, self._UpgradeBuildingPercent)
end

function MapDataModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function MapDataModel:OnSyncDataFinished()
  self.m_slots = self.m_dbTable:GetValues()
  self.m_maxUnlock = self:CalcMaxUnlock()
  self:_InitLookupMaps()
  self:_CalcIsAllSlotBuildFinished()
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self._OnLoginFinished)
  self:UpdateAddNeedPercentage()
  self:UpdateSeverPercentage()
end

function MapDataModel:LateInit()
  local originConfig
  for id, info in pairs(self.m_slots) do
    if info.finished == nil then
      info.finished = self:IsSlotBuildFinished(id, info.level, info.stage, info.subStage) and 1 or 0
      self.m_dbTable:Set(id, DBColumnFinished, info.finished)
    end
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BuildingCostModifyDelay) and info.finished == 0 then
      if not StringUtil.IsNilOrEmpty(info.cost) then
        local config = self:GetConfig(id, info.level, info.stage, info.subStage)
        if config.subStage == info.subStage then
          config.need = self:FromSerializationCost(info.cost)
        end
        if config.addNeed then
          config.addNeed = {}
        end
        config.usedSeverExBuild = true
      elseif not StringUtil.IsNilOrEmpty(GM.ConfigModel:GetFileSuffix("BuildingTask")) then
        originConfig = originConfig or formerRequire("Data.Config.BuildingTask")
        local config = self:GetConfig(id, info.level, info.stage, info.subStage)
        if config.subStage == nil then
          for _, v in pairs(originConfig) do
            if v.id == id and v.level == info.level and v.stage == info.stage then
              config.need = v.need
              self.m_dbTable:Set(id, "cost", self:ToSerializationCost(v.need))
            end
          end
        end
      end
    end
  end
end

function MapDataModel:CheckErrorData()
  if GM.UserModel:GetInNumber(EUserSyncDataKey.ErrorDataCheck) == CheckMark then
    return
  end
  GM.UserModel:Set(EUserSyncDataKey.ErrorDataCheck, CheckMark)
  local exp = 0
  for id, info in pairs(self.m_slots) do
    local maxLevel = self:GetSlotMaxLevel(id)
    if info.finished == 1 or maxLevel <= info.level then
      self:SetSlot(id, maxLevel, 1, 1)
    elseif not self.m_buildingConfig[id][info.level][info.stage] then
      self:SetSlot(id, info.level + 1, 1, 1)
    end
    exp = exp + self:_CalcBuildingExp(id)
  end
  GM.LevelModel:ResetLevelByExp(exp)
end

function MapDataModel:LoadFileConfig()
  self.m_buildingConfig = {}
  local config = GM.ConfigModel:GetLocalConfig(LocalConfigKey.Building, true)
  self:_CheckFileConfig(config)
  for _, v in pairs(config) do
    if v.meta_type then
      if v.totalExp then
        self.m_totalExp = v.totalExp
      end
    else
      if not self.m_buildingConfig[v.id] then
        self.m_buildingConfig[v.id] = {}
      end
      if not self.m_buildingConfig[v.id][v.level] then
        self.m_buildingConfig[v.id][v.level] = {}
      end
      v.stage = v.stage or 1
      self.m_buildingConfig[v.id][v.level][v.stage] = v
    end
  end
  self.m_ids = {}
  local count = 1
  for k, _ in pairs(self.m_buildingConfig) do
    self.m_ids[count] = k
    count = count + 1
  end
  table.sort(self.m_ids, function(a, b)
    return tonumber(string.sub(a, 4)) < tonumber(string.sub(b, 4))
  end)
  self.m_skinConfig = {}
  self.m_exSlot = {}
  for k, v in pairs(require("Data.Config.SkinConfig")) do
    self.m_skinConfig[v.id] = v
    v.icon = "skin_" .. v.id
    if not self.m_exSlot[v.slot] then
      self.m_exSlot[v.slot] = {}
    end
    table.insert(self.m_exSlot[v.slot], v.id)
  end
  self.m_remoteHillConfig = require("Map.RemoteHillConfig")
end

function MapDataModel:GetSkinConfig(id)
  return self.m_skinConfig[id]
end

function MapDataModel:GetCurrentBuildingExp()
  local id = self:CalcMaxUnlock()
  if not self.m_buildingExp then
    local config = require("Data.Config.BuildingTask")
    for _, v in pairs(config) do
      if v.mapBuildExp and v.meta_type and v.totalExp then
        self.m_buildingExp = v
        break
      end
    end
  end
  local exp = self.m_buildingExp.mapBuildExp["hs_" .. id]
  exp = exp or self.m_buildingExp.totalExp
  return exp
end

function MapDataModel:GetAllSkinIdByArea(area)
  local result = {}
  for skinId, config in pairs(self.m_skinConfig) do
    if config.area == area then
      table.insert(result, skinId)
    end
  end
  return result
end

function MapDataModel:GetTotalExp()
  if not self.m_totalExp then
    local config = require("Data.Config.BuildingTask")
    for _, v in pairs(config) do
      if v.meta_type and v.totalExp then
        self.m_totalExp = v.totalExp
        break
      end
    end
  end
  Log.Assert(self.m_totalExp or 0 < 0, "BuildingTask\231\137\136\230\156\172\228\184\141\229\175\185\239\188\140\231\188\186\229\176\145totalExp\233\133\141\231\189\174")
  return self.m_totalExp
end

function MapDataModel:GetRemoteHillConfig()
  return self.m_remoteHillConfig
end

function MapDataModel:LoadServerConfig()
  local md5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.StoryUpdate)
  if md5 ~= self.m_strStoryMd5 then
    self.m_strStoryMd5 = md5
    local arrConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.StoryUpdate)
    if arrConfig then
      self.m_unlockTime = {}
      for _, v in pairs(arrConfig) do
        local slot = tonumber(string.sub(v.totalTask, 4))
        self.m_unlockTime[v.id] = {
          slot = slot,
          openTime = v.openDay,
          nextTime = v.preDay
        }
      end
    end
  end
end

function MapDataModel:UpdatePerSecond()
  if self.m_maxUnlock then
    local new = self:CalcMaxUnlock()
    if self.m_maxUnlock ~= new then
      self.m_maxUnlock = new
      self:_CalcIsAllSlotBuildFinished()
      EventDispatcher.DispatchEvent(EEventType.BuildingTaskUpdate)
    end
  end
end

function MapDataModel:CalcMaxUnlock()
  local slot = -1
  if self.m_testUnlockAllTask then
    return math.maxinteger
  end
  local serverTime = GM.GameModel:GetServerTime()
  for k, v in pairs(self.m_unlockTime) do
    if serverTime > v.openTime and slot < v.slot then
      slot = v.slot
      self.m_maxUnlockConfig = v
    end
  end
  if slot == -1 then
    return math.maxinteger
  end
  return slot
end

function MapDataModel:GetMaxUnlockConfig()
  return self.m_maxUnlockConfig or {}
end

function MapDataModel:GetMaxUnlock()
  return self.m_maxUnlock
end

function MapDataModel:IsSlotUnlock(slot)
  if StringUtil.StartWith(slot, "de_") or StringUtil.StartWith(slot, "deExtra_") then
    return true
  end
  local idInt = tonumber(tonumber(string.sub(slot, 4)))
  return idInt <= self.m_maxUnlock
end

function MapDataModel:HasAcquiredSlotReward(id, level, stage)
  local slot = self:GetSlot(id)
  if not Table.IsEmpty(slot) then
    return level < slot.level or stage < slot.stage
  end
end

function MapDataModel:GetSlotsIds()
  return self.m_ids
end

function MapDataModel:GetConfig(slot, level, stage, subStage)
  if not (self.m_buildingConfig[slot] and self.m_buildingConfig[slot][level]) or not self.m_buildingConfig[slot][level][stage] then
    return nil
  end
  if subStage == nil then
    subStage = 1
  end
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ServerBuildStageSplit) then
    return self.m_buildingConfig[slot][level][stage].origin or self.m_buildingConfig[slot][level][stage]
  end
  local exconfig = GM.ConfigModel:GetBuildingExConfig(slot)
  if not exconfig or exconfig.stage == 0 then
    return self.m_buildingConfig[slot][level][stage].origin or self.m_buildingConfig[slot][level][stage]
  end
  if level == 1 or #self.m_buildingConfig[slot][level] >= 5 then
    self.m_buildingConfig[slot][level][stage].subStage = 1
    return self.m_buildingConfig[slot][level][stage]
  end
  if self.m_buildingConfig[slot][level][stage][1] then
    return self.m_buildingConfig[slot][level][stage][subStage]
  end
  local config = self.m_buildingConfig[slot][level][stage]
  self.m_buildingConfig[slot][level][stage] = {origin = config}
  if config.need and #config.need == 1 and config.need[1][PROPERTY_TYPE] == EPropertyType.Gold and config.reward and #config.reward == 1 and config.reward[1][PROPERTY_TYPE] == EPropertyType.Experience then
    local config1 = Table.DeepCopy(config)
    local gold = config.need[1][PROPERTY_COUNT]
    config1.need[1][PROPERTY_COUNT] = math.ceil(gold * 0.6)
    config1.reward[1][PROPERTY_COUNT] = math.ceil(config.reward[1][PROPERTY_COUNT] / 2)
    local config2 = Table.ShallowCopy(config1)
    config2.need = {
      {
        [PROPERTY_TYPE] = EPropertyType.Gold,
        [PROPERTY_COUNT] = math.ceil(gold * 0.4)
      }
    }
    config1.storyId = nil
    config1.subStage = 1
    config2.subStage = 2
    self.m_buildingConfig[slot][level][stage][1] = config1
    self.m_buildingConfig[slot][level][stage][2] = config2
    config2.exReward = nil
  else
    config.subStage = 1
    self.m_buildingConfig[slot][level][stage][1] = config
  end
  return self.m_buildingConfig[slot][level][stage][subStage]
end

function MapDataModel:IsSlotLevelMaxStage(id, level, stage, subStage)
  if level == 1 then
    return true
  end
  if stage < #self.m_buildingConfig[id][level] then
    return false
  end
  if subStage == 2 or subStage == nil then
    return true
  end
  local config = self:GetConfig(id, level, stage, 2)
  return config == nil or config.subStage ~= 2
end

function MapDataModel:GetSlotMaxLevel(slot)
  return #self.m_buildingConfig[slot]
end

function MapDataModel:GetSlotLevelMaxStage(slot, level, bIgnoreSplit)
  local realStage = #self.m_buildingConfig[slot][level]
  if bIgnoreSplit or 5 <= realStage or not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ServerBuildStageSplit) then
    return realStage
  end
  local exconfig = GM.ConfigModel:GetBuildingExConfig(slot)
  if not exconfig or exconfig.stage ~= 1 then
    return realStage
  end
  local stage = 0
  for i = 1, realStage do
    if self.m_buildingConfig[slot][level][i][1] == nil then
      local config = self:GetConfig(slot, level, i, 2)
      if config and config.subStage == 2 then
        realStage = realStage + 1
      end
    else
      realStage = realStage + (self.m_buildingConfig[slot][level][i][2] ~= nil and 1 or 0)
    end
  end
  return realStage
end

function MapDataModel:GetDisplayStage(slot, level, stage, subStage)
  if #self.m_buildingConfig[slot][level] >= 5 or not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ServerBuildStageSplit) then
    return stage
  end
  local exconfig = GM.ConfigModel:GetBuildingExConfig(slot)
  if not exconfig or exconfig.stage ~= 1 then
    return stage
  end
  local displayStage = stage + subStage - 1
  for i = 1, stage - 1 do
    if self.m_buildingConfig[slot][level][i][1] == nil then
      displayStage = displayStage + (self:GetConfig(slot, level, i, 2) ~= nil and 1 or 0)
    else
      displayStage = displayStage + (self.m_buildingConfig[slot][level][i][2] ~= nil and 1 or 0)
    end
  end
  return displayStage
end

function MapDataModel:GetData()
  return self.m_dbTable
end

function MapDataModel:FromSyncData(dataArr)
  self.m_dbTable:FromArr(dataArr)
end

function MapDataModel:_InitLookupMaps()
  self.m_unlockedSlots = {}
  self.m_buildMap = {}
  self.m_inProgressSlots = {}
  for slotId, slot in pairs(self.m_slots) do
    if slot.level ~= -1 then
      self.m_unlockedSlots[slotId] = slot
      if not self:IsSlotBuildFinished(slotId, slot.level, slot.stage, slot.subStage) then
        self.m_inProgressSlots[slotId] = slot
      end
      if slot.level > 1 then
        self.m_buildMap[slotId] = true
      end
    end
  end
end

function MapDataModel:UpgradeSlot(id)
  local state = self:GetSlot(id)
  local config = self:GetConfig(id, state.level, state.stage, state.subStage)
  if Table.IsEmpty(config) or Table.IsEmpty(config.need) then
    return
  end
  if not self:CanUpgrade(config) then
    return
  end
  local exconfig = GM.ConfigModel:GetBuildingExConfig(id)
  local rewards = Table.DeepCopy(config.reward)
  if exconfig then
    for _, v in pairs(rewards) do
      if v[PROPERTY_TYPE] == EPropertyType.Experience then
        v[PROPERTY_COUNT] = math.ceil(v[PROPERTY_COUNT] * exconfig.expfactor - 0.5)
      end
    end
  end
  if not Table.IsEmpty(config.exReward) then
    Table.ListAppend(rewards, config.exReward)
  end
  local totalNeed = self:GetBuildingNeedAfterAddNeed(config)
  for _, v in pairs(totalNeed) do
    GM.PropertyDataManager:Consume(v[PROPERTY_TYPE], v[PROPERTY_COUNT], EBIType.BuildingUpgrade, id .. "_" .. state.level .. "_" .. state.stage .. "_" .. state.subStage)
  end
  RewardApi.AcquireRewards(rewards, EPropertySource.Give, EBIType.BuildingUpgrade, {eventLock = true, noDelayTime = true}, GM.ConfigModel:GetCacheItemType())
  local biCost = {}
  for _, cost in pairs(totalNeed) do
    local costKey = tostring(cost[PROPERTY_TYPE])
    biCost[costKey] = cost[PROPERTY_COUNT]
  end
  local biRewards = {}
  for _, reward in pairs(rewards) do
    local rewardKey = tostring(reward[PROPERTY_TYPE])
    biRewards[rewardKey] = reward[PROPERTY_COUNT]
  end
  local taskId = state.level .. "_" .. state.stage .. "_" .. state.subStage
  local next = self:GetNextConfig(id, state.level, state.stage, state.subStage)
  if next == nil or next.level ~= state.level or next.stage ~= state.stage then
    taskId = taskId .. "_final"
  end
  GM.BIManager:LogTask(EBIType.BuildingUpgrade, id, taskId, biCost, biRewards)
  return true
end

function MapDataModel:SetSlot(id, level, stage, subStage, addNeedPercent, notLevelUp, severNeedPercent)
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ServerBuildStageSplit) then
    subStage = nil
  end
  if not self.m_slots[id] then
    self.m_slots[id] = {
      level = level,
      stage = stage,
      subStage = subStage,
      addNeedPercent = addNeedPercent,
      severNeedPercent = severNeedPercent
    }
  else
    self.m_slots[id].level = level
    self.m_slots[id].stage = stage
    self.m_slots[id].subStage = subStage
    self.m_slots[id].addNeedPercent = addNeedPercent or self.m_slots[id].addNeedPercent
    self.m_slots[id].severNeedPercent = severNeedPercent or self.m_slots[id].severNeedPercent
  end
  local bFinished = self:IsSlotBuildFinished(id, level, stage, subStage)
  if level ~= -1 then
    self.m_unlockedSlots[id] = self.m_slots[id]
    if bFinished then
      self.m_inProgressSlots[id] = nil
    else
      self.m_inProgressSlots[id] = self.m_slots[id]
    end
    if 1 < level then
      self.m_buildMap[id] = true
    end
  else
    self.m_unlockedSlots[id] = nil
    self.m_inProgressSlots[id] = nil
  end
  local strCost
  if not bFinished and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BuildingCostModifyDelay) then
    strCost = self:ToSerializationCost(self:GetBuildingNeedAfterAddNeed(self:GetConfig(id, level, stage, subStage)))
  end
  self.m_dbTable:BatchSet({
    [id] = {
      level = level,
      stage = stage,
      subStage = subStage,
      finished = bFinished and 1 or 0,
      cost = strCost,
      addNeedPercent = addNeedPercent,
      severNeedPercent = severNeedPercent
    }
  })
  if strCost == nil then
    self.m_dbTable:Remove(id, "cost")
  else
    local config = self:GetConfig(id, level, stage, subStage)
    config.need = self:FromSerializationCost(strCost)
    if config.addNeed then
      config.addNeed = {}
    end
    config.usedSeverExBuild = true
  end
  if not notLevelUp then
    self:_CalcIsAllSlotBuildFinished()
    EventDispatcher.DispatchEvent(EEventType.SlotLevelUp, id)
  end
end

function MapDataModel:ToSerializationCost(cost)
  local str = ""
  local len = #cost
  for i = 1, len - 1 do
    str = str .. cost[i][PROPERTY_TYPE] .. "-" .. cost[i][PROPERTY_COUNT] .. ";"
  end
  str = str .. cost[len][PROPERTY_TYPE] .. "-" .. cost[len][PROPERTY_COUNT]
  return str
end

function MapDataModel:FromSerializationCost(strCost)
  local arrCost = StringUtil.Split(strCost, ";")
  for i = 1, #arrCost do
    arrCost[i] = ConfigUtil.GetCurrencyFromStr(arrCost[i])
  end
  return arrCost
end

local lockedSlot = {
  level = -1,
  stage = 1,
  subStage = 1
}

function MapDataModel:GetSlot(id)
  if not self.m_slots[id] then
    return lockedSlot
  end
  local slot = self.m_slots[id]
  if slot.subStage == nil then
    slot.subStage = 1
  end
  return slot
end

function MapDataModel:IsSlotBuildFinished(id, level, stage, subStage)
  local config = self:GetConfig(id, level, stage, subStage)
  if config == nil and subStage == 2 then
    GM.BIManager:LogProject("bd_err", string.format("id:%s,lv:%s_%s_%s", id, level, stage, subStage))
    self:SetSlot(id, level, stage, 1)
    return true
  end
  return not config.need
end

function MapDataModel:_CalcIsAllSlotBuildFinished()
  local oldMemoryValue = self.m_bAllSlotBuildFinished
  self.m_bAllSlotBuildFinished = true
  local state
  for _, v in ipairs(self.m_ids) do
    if self:IsSlotUnlock(v) then
      state = self:GetSlot(v)
      if state.level == -1 then
        self.m_bAllSlotBuildFinished = false
        break
      end
      if not self:IsSlotBuildFinished(v, state.level, state.stage, state.subStage) then
        self.m_bAllSlotBuildFinished = false
        break
      end
    end
  end
  local oldCacheValue = PlayerPrefs.GetInt(EPlayerPrefKey.IsAllSlotBuildFinished, 0)
  if self.m_bAllSlotBuildFinished then
    if oldMemoryValue == nil and oldCacheValue == 0 then
      self.m_bCannotUseLaneOrder = true
    elseif oldMemoryValue == false then
      self.m_bCannotUseLaneOrder = true
      GM.GameModel:Login()
    end
  elseif self.m_bCannotUseLaneOrder then
    self.m_bCannotUseLaneOrder = nil
  end
  PlayerPrefs.SetInt(EPlayerPrefKey.IsAllSlotBuildFinished, self.m_bAllSlotBuildFinished and 1 or 0)
end

function MapDataModel:CanUseLaneOrder()
  return self.m_bCannotUseLaneOrder ~= true
end

function MapDataModel:_OnLoginFinished()
  if self.m_bCannotUseLaneOrder then
    self.m_bCannotUseLaneOrder = nil
  end
  if self.m_buildingConfig then
    self:UpdateAddNeedPercentage()
    self:UpdateSeverPercentage()
  end
end

function MapDataModel:IsAllSlotBuildFinished(fromLogin)
  if self.m_bAllSlotBuildFinished ~= nil then
    return self.m_bAllSlotBuildFinished
  end
  if not fromLogin then
    Log.Error("MapDataModel:IsAllSlotBuildFinished is not calculated")
  end
  local value = PlayerPrefs.GetInt(EPlayerPrefKey.IsAllSlotBuildFinished, 0) == 1
  return value
end

function MapDataModel:GetNextConfig(id, level, stage, subStage)
  if self:IsSlotLevelMaxStage(id, level, stage, subStage) then
    return self.m_buildingConfig[id][level + 1] and self:GetConfig(id, level + 1, 1, 1)
  else
    if subStage == 2 then
      return self:GetConfig(id, level, stage + 1, 1)
    end
    local config = self:GetConfig(id, level, stage, 2)
    if config and config.subStage == 2 then
      return config
    else
      return self:GetConfig(id, level, stage + 1, 1) or self:GetConfig(id, level + 1, 1, 1)
    end
  end
end

function MapDataModel:GetPreLevel(id, level, stage, subStage)
  local preconfig = self:GetConfig(id, 1, 1, 1)
  local config = self:GetNextConfig(id, 1, 1, 1)
  while config.level ~= level or config.stage ~= stage or config.subStage and config.subStage ~= subStage do
    preconfig = config
    config = self:GetNextConfig(id, config.level, config.stage, config.subStage)
  end
  return preconfig
end

function MapDataModel:HasPreStory(id, level, stage, subStage)
  local config = self:GetConfig(id, 1, 1, 1)
  if config.storyId ~= nil then
    return true
  end
  config = self:GetNextConfig(id, 1, 1, 1)
  while config.level ~= level or config.stage ~= stage or config.subStage and config.subStage ~= subStage do
    if config.storyId ~= nil then
      return true
    end
    config = self:GetNextConfig(id, config.level, config.stage, config.subStage)
  end
  return false
end

function MapDataModel:CanUpgrade(task)
  if not task or not task.need then
    return false
  end
  local enough = true
  local needs = self:GetBuildingNeedAfterAddNeed(task)
  for _, v in pairs(needs) do
    if GM.PropertyDataManager:GetPropertyNum(v[PROPERTY_TYPE]) < v[PROPERTY_COUNT] then
      enough = false
      break
    end
  end
  return enough
end

function MapDataModel:GetSlotUpgrade(slotId)
  local slot = self.m_unlockedSlots[slotId]
  if slot and slot.level ~= -1 then
    if self:IsSlotBuildFinished(slotId, slot.level, slot.stage, slot.subStage) then
      return ESlotUpgrade.Finished
    end
    local config = self:GetConfig(slotId, slot.level, slot.stage, slot.subStage)
    if self:CanUpgrade(config) then
      if slot.level == 1 and slot.stage == 1 then
        return ESlotUpgrade.Unlock
      elseif self:IsSlotLevelMaxStage(slotId, slot.level, slot.stage, slot.subStage) then
        return ESlotUpgrade.LevelUp
      else
        return ESlotUpgrade.Upgrade
      end
    end
  end
  return ESlotUpgrade.None
end

function MapDataModel:_GetTaskNeedTypes(task)
  if not task or not task.need then
    return false
  end
  local needGold = false
  local needTool = false
  local isGold
  local needs = self:GetBuildingNeedAfterAddNeed(task)
  for _, need in pairs(needs) do
    if GM.PropertyDataManager:GetPropertyNum(need[PROPERTY_TYPE]) < need[PROPERTY_COUNT] then
      isGold = need[PROPERTY_TYPE] == EPropertyType.Gold
      if not needGold and isGold then
        needGold = true
      elseif not needTool and not isGold then
        needTool = true
      end
    end
    if needGold and needTool then
      break
    end
  end
  return needGold, needTool
end

function MapDataModel:CalculateMostNeedType()
  local mostNeedGold = false
  local task, needGold, needTool, state
  for _, v in ipairs(self.m_ids) do
    state = self:GetSlot(v)
    if state.level ~= -1 and not self:IsSlotBuildFinished(v, state.level, state.stage, state.subStage) then
      task = self:GetConfig(v, state.level, state.stage, state.subStage)
      needGold, needTool = self:_GetTaskNeedTypes(task)
      if needGold and needTool then
        mostNeedGold = true
      elseif needGold or needTool then
        return needGold, needTool
      end
    end
  end
  return mostNeedGold, false
end

function MapDataModel:GetInsufficientNeedTools()
  local result = {}
  local state, needs
  for _, v in ipairs(self.m_ids) do
    state = self:GetSlot(v)
    if state.level ~= -1 and not self:IsSlotBuildFinished(v, state.level, state.stage, state.subStage) then
      needs = self:GetBuildingNeedAfterAddNeed(self:GetConfig(v, state.level, state.stage, state.subStage))
      for _, need in pairs(needs) do
        if GM.PropertyDataManager:GetPropertyNum(need[PROPERTY_TYPE]) < need[PROPERTY_COUNT] then
          result[need[PROPERTY_TYPE]] = true
        end
      end
    end
  end
  local returnResult = {}
  for k, _ in pairs(result) do
    if StringUtil.StartWith(k, "tl") then
      returnResult[#returnResult + 1] = k
    end
  end
  return returnResult
end

function MapDataModel:GoldInsufficientToUpgrade()
  local goldInsufficient = false
  local state, needs
  for _, v in ipairs(self.m_ids) do
    state = self:GetSlot(v)
    if state.level ~= -1 and not self:IsSlotBuildFinished(v, state.level, state.stage, state.subStage) then
      if self:CanUpgrade(self:GetConfig(v, state.level, state.stage, state.subStage)) then
        return false
      end
      needs = self:GetBuildingNeedAfterAddNeed(self:GetConfig(v, state.level, state.stage, state.subStage))
      for _, need in pairs(needs) do
        if need[PROPERTY_TYPE] == EPropertyType.Gold and GM.PropertyDataManager:GetPropertyNum(need[PROPERTY_TYPE]) < need[PROPERTY_COUNT] then
          goldInsufficient = true
        end
      end
    end
  end
  return goldInsufficient
end

function MapDataModel:GetSlotSkins(id)
  return self.m_exSlot[id] or Table.Empty
end

function MapDataModel:HasUnlockSkins()
  for slot, list in pairs(self.m_exSlot) do
    if not self:IsTimeLimitSlot(slot) then
      for _, id in ipairs(list) do
        if self:IsSkinUnlock(id) then
          return true
        end
      end
    end
  end
  return false
end

function MapDataModel:SlotHasUnlockSkin(id)
  local list = self.m_exSlot[id]
  if not list then
    return false
  end
  for _, id in ipairs(list) do
    if self:IsSkinUnlock(id) then
      return true
    end
  end
  return false
end

function MapDataModel:GetUnlockSkins(id)
  local list = self.m_exSlot[id]
  if not list then
    return Table.Empty
  end
  local result = {}
  for _, id in ipairs(list) do
    if self:IsSkinUnlock(id) then
      table.insert(result, id)
    end
  end
  return result
end

function MapDataModel:IsSkinUnlock(skinId)
  local skinTable = self:IsTimeLimitSkin(skinId) and self.m_timeLimitSkinTable or self.m_skinTable
  return (skinTable:GetValue(skinId, SkinColumn) or ESkinState.Locked) >= ESkinState.Unlock
end

function MapDataModel:IsSkinUsing(skinId)
  local skinTable = self:IsTimeLimitSkin(skinId) and self.m_timeLimitSkinTable or self.m_skinTable
  return skinTable:GetValue(skinId, SkinColumn) == ESkinState.Using
end

function MapDataModel:AcquireSkin(skinId)
  local skinTable = self:IsTimeLimitSkin(skinId) and self.m_timeLimitSkinTable or self.m_skinTable
  skinTable:Set(skinId, SkinColumn, ESkinState.Unlock)
  EventDispatcher.DispatchEvent(EEventType.AcquireSkin)
end

function MapDataModel:AcquireSkinLogic(skinId)
  self:AcquireSkin(skinId)
  if not GM.MapLayer then
    return
  end
  local slot = GM.MapLayer:GetSlot(self.m_skinConfig[skinId].slot)
  if slot then
    slot:InitEditBubble()
  end
end

function MapDataModel:UseSkin(slot, skinId)
  local before = self:GetUsingSkin(slot)
  local skinTable = self:IsTimeLimitSlot(slot) and self.m_timeLimitSkinTable or self.m_skinTable
  if before then
    skinTable:Set(before, SkinColumn, ESkinState.Unlock)
  end
  if skinId then
    skinTable:Set(skinId, SkinColumn, ESkinState.Using)
  end
end

function MapDataModel:GetUsingSkin(slotId)
  local arrSkins = self:GetSlotSkins(slotId)
  for _, skin in pairs(arrSkins) do
    if self:IsSkinUsing(skin) then
      return skin
    end
  end
  return nil
end

function MapDataModel:GetSkinData()
  return self.m_skinTable
end

function MapDataModel:GetTimeLimitSkinData()
  return self.m_timeLimitSkinTable
end

function MapDataModel:SyncSkinData(arrData)
  self.m_skinTable:FromArr(arrData)
end

function MapDataModel:SyncTimeLimitSkinData(arrData)
  self.m_timeLimitSkinTable:FromArr(arrData)
end

function MapDataModel:_CalcBuildingExp(id)
  local info = self:GetSlot(id)
  local exp = 0
  for level, arrStages in ipairs(self.m_buildingConfig[id]) do
    if level > info.level then
      return exp
    end
    for stage, config in ipairs(arrStages) do
      if level == info.level and stage >= info.stage then
        return exp
      end
      exp = exp + ConfigUtil.ExtractCurrency(config.reward, EPropertyType.Experience)
    end
  end
  return exp
end

function MapDataModel:GetGeneratorTargetLevel(chainId)
  local id = "hs_" .. string.sub(chainId, ItemInnerCodeStartIndex.MainGenerator)
  local info = self:GetSlot(id)
  local itemDataModel = GM.ItemDataModel
  local targetLevel = 1 << itemDataModel:GetChainMaxLevel(chainId) - 1
  local level = math.max(info.level, 1)
  if self:IsSlotBuildFinished(id, level, info.stage, info.subStage) then
    return targetLevel
  end
  local nextConfig = self:GetConfig(id, level, info.stage, info.subStage)
  repeat
    for _, v in pairs(nextConfig.reward) do
      local itemType = v[PROPERTY_TYPE]
      if StringUtil.StartWith(itemType, chainId) then
        targetLevel = (targetLevel - (1 << itemDataModel:GetChainLevel(itemType) - 1)) * v[PROPERTY_COUNT]
      end
    end
    nextConfig = self:GetNextConfig(id, nextConfig.level, nextConfig.stage, nextConfig.subStage)
  until self:IsSlotBuildFinished(id, nextConfig.level, nextConfig.stage, nextConfig.subStage)
  return targetLevel
end

function MapDataModel:GetSlotArea(id)
  local intId = tonumber(string.sub(id, 4))
  Log.Assert(intId, "Slot " .. id .. "Area\232\167\163\230\158\144\229\164\177\232\180\165")
  intId = math.max(intId or 1, 1)
  return "Area" .. math.ceil(intId / 5)
end

function MapDataModel:GetCurResLabels()
  local allVals = {
    self.m_skinTable:GetValues(),
    self.m_timeLimitSkinTable:GetValues()
  }
  local mapLabels = {}
  for _, values in pairs(allVals) do
    for skinId, info in pairs(values) do
      if self.m_skinConfig[skinId] and info.value >= ESkinState.Unlock then
        mapLabels[self.m_skinConfig[skinId].area] = true
      end
    end
  end
  if self:GetUsingSkin("de_0") then
    mapLabels[AddressableLabel.EventDecorationCommon] = true
  end
  return mapLabels
end

function MapDataModel:IsTimeLimitSlot(slot)
  return slot and (StringUtil.StartWith(slot, "de_") or StringUtil.StartWith(slot, "deExtra_"))
end

function MapDataModel:IsTimeLimitSkin(skinId)
  local slotId = self.m_skinConfig[skinId].slot
  return self:IsTimeLimitSlot(slotId)
end

function MapDataModel:ResetTimeLimitSkin(isDeExtraSeries)
  local allVals = self.m_timeLimitSkinTable:GetValues()
  for key, val in pairs(allVals) do
    if StringUtil.StartWith(key, isDeExtraSeries and "deExtra" or "deNew") then
      self.m_timeLimitSkinTable:Remove(key)
    end
  end
  if not isDeExtraSeries then
    self.m_timeLimitSkinTable:Remove("DeExtraLandUnlockState")
  end
end

function MapDataModel:IsDecorationExtraLandUnlock()
  return (self.m_timeLimitSkinTable:GetValue("DeExtraLandUnlockState", SkinColumn) or 0) == 1
end

function MapDataModel:SetDecorationExtraLandUnlock()
  self.m_timeLimitSkinTable:Set("DeExtraLandUnlockState", SkinColumn, 1)
end

function MapDataModel:SetDecorationDefaultSkinUnlock(skinIds, isDeExtraSeries, hasExtraLand)
  self:ResetTimeLimitSkin(isDeExtraSeries)
  if not isDeExtraSeries and hasExtraLand then
    self:ResetTimeLimitSkin(true)
  end
  for _, skinId in pairs(skinIds) do
    self:AcquireSkin(skinId)
    self:UseSkin(self.m_skinConfig[skinId].slot, skinId)
  end
  if GM.MapLayer then
    if isDeExtraSeries then
      GM.MapLayer:ReLoadAndInitDeExtraSlots()
    else
      GM.MapLayer:ReLoadAndInitDeNewSlots()
      if hasExtraLand then
        GM.MapLayer:ReLoadAndInitDeExtraSlots()
      end
    end
  end
end

function MapDataModel:GetDeNewSlotRootPrefabName()
  local mapSkinDatas = self.m_timeLimitSkinTable and self.m_timeLimitSkinTable:GetAllInTable()
  if Table.IsEmpty(mapSkinDatas) then
    return
  end
  local rootName
  for k, v in pairs(mapSkinDatas) do
    if v[SkinColumn] == ESkinState.Using and StringUtil.StartWith(k, "deNew") then
      local rn = k
      local pos = string.find(k, "_")
      if pos then
        rn = string.sub(k, 1, pos - 1) .. "Root"
      end
      if rootName and rootName ~= rn then
        Log.Error("\233\153\144\230\151\182\232\163\133\233\165\176\231\137\169 \230\140\130\232\189\189\229\156\168\228\184\141\229\144\140\232\138\130\231\130\185\228\184\138: root1, r2skin :" .. rootName .. ", " .. k)
      end
      rootName = rn
    end
  end
  return rootName
end

function MapDataModel:GetDeExtraSlotRootPrefabName()
  local mapSkinDatas = self.m_timeLimitSkinTable and self.m_timeLimitSkinTable:GetAllInTable()
  if Table.IsEmpty(mapSkinDatas) then
    return
  end
  local rootName
  for k, v in pairs(mapSkinDatas) do
    if v[SkinColumn] == ESkinState.Using and StringUtil.StartWith(k, "deExtra") then
      local rn = k
      local pos = string.find(k, "_")
      if pos then
        rn = string.sub(k, 1, pos - 1) .. "Root"
      end
      if rootName and rootName ~= rn then
        Log.Error("\233\153\144\230\151\182\232\163\133\233\165\176\231\137\169 \230\140\130\232\189\189\229\156\168\228\184\141\229\144\140\232\138\130\231\130\185\228\184\138: root1, r2skin :" .. rootName .. ", " .. k)
      end
      rootName = rn
    end
  end
  return rootName
end

function MapDataModel:GetTargetBuildingProgress(config)
  if Table.IsEmpty(config) or Table.IsEmpty(config.need) then
    return 0
  end
  local total = 0
  local cur = 0
  local needs = self:GetBuildingNeedAfterAddNeed(config)
  for _, v in pairs(needs) do
    local num = GM.PropertyDataManager:GetPropertyNum(v[PROPERTY_TYPE])
    total = total + v[PROPERTY_COUNT]
    cur = cur + math.min(num, v[PROPERTY_COUNT])
  end
  return cur / total
end

local SortOrder = {
  Unlock = 1,
  LevelUp = 2,
  Upgrade = 3
}

function MapDataModel:GetMaxProgressBuildingConfig()
  local function getOrder(slotId, slot)
    if slot.level == 1 and slot.stage == 1 then
      return SortOrder.Unlock
    elseif self:IsSlotLevelMaxStage(slotId, slot.level, slot.stage, slot.subStage) then
      return SortOrder.LevelUp
    else
      return SortOrder.Upgrade
    end
  end
  
  local maxProgress = -1
  local targetOrder = 100
  local slot, buildingConfig, progress, targetConfig, targetSlotId, order
  for slotId, slot in pairs(self.m_inProgressSlots) do
    buildingConfig = self:GetConfig(slotId, slot.level, slot.stage, slot.subStage)
    progress = math.modf(self:GetTargetBuildingProgress(buildingConfig) * 100)
    order = getOrder(slotId, slot)
    if maxProgress < progress or progress == maxProgress and targetOrder > order then
      maxProgress = progress
      targetConfig = buildingConfig
      targetSlotId = slotId
      targetOrder = order
    end
  end
  return targetConfig, targetSlotId
end

function MapDataModel:GetInProgressSlots()
  return self.m_inProgressSlots
end

function MapDataModel:GetUnlockedSlots()
  return self.m_unlockedSlots
end

function MapDataModel:GetBuildSlotsCount()
  return Table.MapSize(self.m_buildMap)
end

function MapDataModel:GetBuildingNeedAfterAddNeed(config)
  local slot = config.id
  if self:IsSeverExBuildOpen() then
    local need = self:GetSeverBuildingNeed(config)
    if not Table.IsEmpty(need) then
      return need
    end
  end
  if not Table.IsEmpty(config.addNeed) and self.m_percentage ~= 0 then
    local currentPercentageNum = self.m_slots[slot].addNeedPercent or 0
    if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BuildingCostModifyDelay) and currentPercentageNum == 0 then
      local addNeedMaxNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingAddNeedPercentMaxNum))
      GM.MiscModel:Set(EMiscKey.BuildingAddNeedPercentMaxNum, tostring(addNeedMaxNum + 1))
      self:SetSlot(slot, config.level, config.stage, config.subStage, addNeedMaxNum + 1, true)
      currentPercentageNum = addNeedMaxNum
    end
    local currentPercentage = math.min(100, currentPercentageNum * self.m_percentage)
    local totalNeed = Table.DeepCopy(config.need)
    for _, addneedValue in pairs(config.addNeed) do
      local hasCurNeed = false
      for _, needValue in pairs(totalNeed) do
        if addneedValue[PROPERTY_TYPE] == needValue[PROPERTY_TYPE] then
          needValue[PROPERTY_COUNT] = needValue[PROPERTY_COUNT] + math.ceil(currentPercentage * addneedValue[PROPERTY_COUNT] / 100)
          hasCurNeed = true
          break
        end
      end
      if not hasCurNeed then
        Table.ListAppend(totalNeed, {
          {
            Currency = addneedValue[PROPERTY_TYPE],
            Amount = math.ceil(currentPercentage * addneedValue[PROPERTY_COUNT] / 100)
          }
        })
      end
    end
    return totalNeed
  end
  return config.need
end

function MapDataModel:_UpgradeBuildingPercent(msg)
  local slot = self:GetSlot(msg.id)
  if self:IsSeverExBuildOpen() and self:IsSeverBuildContain(msg.id) then
    local addNeedMaxNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingSeverPercentCount))
    if addNeedMaxNum then
      GM.MiscModel:Set(EMiscKey.BuildingSeverPercentCount, tostring(addNeedMaxNum + 1))
      self:SetSlot(msg.id, slot.level, slot.stage, slot.subStage, nil, true, addNeedMaxNum + 1)
    end
    return
  end
  if self:GetConfig(msg.id, msg.level, msg.stage, msg.subStage).addNeed then
    local addNeedMaxNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingAddNeedPercentMaxNum))
    if addNeedMaxNum then
      GM.MiscModel:Set(EMiscKey.BuildingAddNeedPercentMaxNum, tostring(addNeedMaxNum + 1))
      self:SetSlot(msg.id, slot.level, slot.stage, slot.subStage, addNeedMaxNum + 1, true)
    end
  end
end

function MapDataModel:OnBuildingUnlock(slot)
  if self:IsSeverExBuildOpen() and self:IsSeverBuildContain(slot) then
    local addNeedMaxNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingSeverPercentCount))
    GM.MiscModel:Set(EMiscKey.BuildingSeverPercentCount, tostring(addNeedMaxNum + 1))
    self:SetSlot(slot, 1, 1, 1, nil, nil, addNeedMaxNum + 1)
    return
  end
  if self:GetConfig(slot, 1, 1).addNeed and self.m_percentage ~= 0 and GM.MiscModel:Get(EMiscKey.BuildingAddNeedPercentMaxNum) then
    local addNeedMaxNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingAddNeedPercentMaxNum))
    GM.MiscModel:Set(EMiscKey.BuildingAddNeedPercentMaxNum, tostring(addNeedMaxNum + 1))
    self:SetSlot(slot, 1, 1, 1, addNeedMaxNum + 1)
    return
  end
  self:SetSlot(slot, 1, 1, 1)
end

function MapDataModel:UpdateBuildingAddNeedPercent()
  for id, info in pairs(self.m_slots) do
    self:SetSlot(id, info.level, info.stage, info.subStage or 1, 0, true)
  end
  GM.MiscModel:Set(EMiscKey.BuildingAddNeedPercentMaxNum, "0")
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BuildingCostModifyDelay) then
    EventDispatcher.DispatchEvent(EEventType.BuildingBubbleRefresh)
  end
end

function MapDataModel:UpdateAddNeedPercentage()
  local percentageConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.BuildingTaskAddNeed)
  local lastConfigId = tonumber(GM.MiscModel:Get(EMiscKey.BuildingAddNeedPercentId) or "-1")
  local tempId = -1
  local percent = 0
  if not Table.IsEmpty(percentageConfig) then
    for _, config in pairs(percentageConfig) do
      percent = tempId > config.id and percent or config.percentage
      tempId = tempId > config.id and tempId or config.id
    end
  end
  self.m_percentage = percent
  if lastConfigId ~= tempId then
    self:UpdateBuildingAddNeedPercent()
    GM.MiscModel:Set(EMiscKey.BuildingAddNeedPercentId, tostring(tempId))
  end
end

function MapDataModel:IsSeverExBuildOpen()
  local param = GM.ConfigModel:ParseGeneralConf(EGeneralConfType.SeverBuildGoldAddPercent)
  if param == nil then
    return false
  end
  local percentageConfigNum = tonumber(param)
  return percentageConfigNum ~= nil and 0 < percentageConfigNum
end

function MapDataModel:IsSeverBuildContain(slot)
  return GM.ConfigModel:GetBuildingExConfig(slot) ~= nil
end

function MapDataModel:GetSeverBuildingNeed(config)
  local server = GM.ConfigModel:GetBuildingExConfig(config.id)
  if server == nil then
    return nil
  end
  local slot = config.id
  local arrCost = Table.DeepCopy(config.need)
  local currentPercentageNum = self.m_slots[slot].severNeedPercent or 0
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BuildingCostModifyDelay) and currentPercentageNum == 0 then
    local addNeedMaxNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingSeverPercentCount)) or 0
    GM.MiscModel:Set(EMiscKey.BuildingSeverPercentCount, tostring(addNeedMaxNum + 1))
    self:SetSlot(slot, config.level, config.stage, config.subStage, nil, true, addNeedMaxNum + 1)
    currentPercentageNum = addNeedMaxNum
  end
  local percentage = tonumber(GM.MiscModel:Get(EMiscKey.BuildingSeverPercentNum)) or 0
  local currentPercentage = math.min(100, currentPercentageNum * percentage)
  if not config.usedSeverExBuild then
    local tlNum, typeNum = 0, 0
    for key, cost in ipairs(config.need) do
      local type = cost[PROPERTY_TYPE]
      if type == EPropertyType.Gold then
        local num = cost[PROPERTY_COUNT]
        arrCost[key][PROPERTY_COUNT] = math.ceil(num + num * (server.goldfactor - 1) * currentPercentage / 100 - 0.5)
      end
      if type == "tl1" or type == "tl2" or type == "tl3" or type == "tl4" then
        tlNum = tlNum + cost[PROPERTY_COUNT]
        typeNum = typeNum + 1
      end
    end
    if 0 < typeNum then
      tlNum = math.ceil(tlNum * (server.toolfactor - 1) * currentPercentage / 100 - 0.5)
      local integer = tlNum // typeNum
      local remainder = tlNum - integer * typeNum
      local appendRemainder = 0
      for i = 1, #arrCost do
        local type = arrCost[i][PROPERTY_TYPE]
        if type == "tl1" or type == "tl2" or type == "tl3" or type == "tl4" then
          appendRemainder = appendRemainder + 1
          arrCost[i][PROPERTY_COUNT] = arrCost[i][PROPERTY_COUNT] + integer + (remainder >= appendRemainder and 1 or 0)
        end
      end
    end
    config.need = arrCost
    config.usedSeverExBuild = true
  end
  return arrCost
end

function MapDataModel:UpdateBuildingSeverPercent()
  Log.Debug("[MapDataModel:UpdateBuildingSeverPercent] \233\135\141\231\189\174\229\144\142\229\143\176\229\157\161\229\186\166\232\174\161\230\149\176")
  for id, info in pairs(self.m_slots) do
    Log.Debug(string.format("[MapDataModel:UpdateBuildingSeverPercent] \233\135\141\231\189\174\229\187\186\231\173\145\229\157\161\229\186\166\232\174\161\230\149\176: %s, %d/%d", id, info.level, info.stage))
    self:SetSlot(id, info.level, info.stage, info.subStage, nil, true, 0)
  end
  GM.MiscModel:Set(EMiscKey.BuildingSeverPercentCount, "0")
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BuildingCostModifyDelay) then
    EventDispatcher.DispatchEvent(EEventType.BuildingBubbleRefresh)
  end
end

function MapDataModel:UpdateSeverPercentage()
  local isSeverExBuildOpen = self:IsSeverExBuildOpen()
  if not isSeverExBuildOpen then
    if PlayerPrefs.GetInt(EPlayerPrefKey.NotSeverExBuildOpen, 0) ~= 1 then
      GM.MiscModel:Set(EMiscKey.BuildingSeverPercentNum, "0")
      self:UpdateBuildingSeverPercent()
      PlayerPrefs.SetInt(EPlayerPrefKey.NotSeverExBuildOpen, 1)
    end
    return
  end
  if PlayerPrefs.GetInt(EPlayerPrefKey.NotSeverExBuildOpen, 0) == 1 then
    PlayerPrefs.SetInt(EPlayerPrefKey.NotSeverExBuildOpen, 0)
  end
  local percentageConfigNum = tonumber(GM.ConfigModel:ParseGeneralConf(EGeneralConfType.SeverBuildGoldAddPercent))
  local lastConfigNum = tonumber(GM.MiscModel:Get(EMiscKey.BuildingSeverPercentNum) or "-1")
  if percentageConfigNum ~= lastConfigNum then
    GM.MiscModel:Set(EMiscKey.BuildingSeverPercentNum, tostring(percentageConfigNum))
    self:UpdateBuildingSeverPercent()
  end
end

function MapDataModel:UpdateTestUnlockAllTask()
  self.m_testUnlockAllTask = PlayerPrefs.GetInt(EPlayerPrefKey.TestUnlockAllTask, 0) == 1
end

function MapDataModel:_CheckFileConfig(config)
  if GameConfig.IsTestMode() and not StringUtil.IsNilOrEmpty(GM.ConfigModel:GetFileSuffix("BuildingTask")) then
    local path = "Data.Config.BuildingTask"
    local origin = formerRequire(path)
    local suffix = GM.ConfigModel:GetFileSuffix("BuildingTask")
    package.loaded[path] = nil
    local buildingMap = {}
    for _, v in pairs(origin) do
      if v.id then
        buildingMap[v.id] = true
      end
    end
    for _, v in pairs(config) do
      if v.id then
        buildingMap[v.id] = nil
      end
    end
    if next(buildingMap) ~= nil then
      Log.Error("BuildingTask" .. suffix .. "\233\133\141\231\189\174\231\188\186\229\164\177" .. table.concat(Table.GetKeys(buildingMap)), LogTag.ConfigCheck)
    end
    for _, v in pairs(config) do
      if v.id then
        buildingMap[v.id] = true
      end
    end
    for _, v in pairs(origin) do
      if v.id then
        buildingMap[v.id] = nil
      end
    end
    if next(buildingMap) ~= nil then
      Log.Error("BuildingTask" .. suffix .. "\229\187\186\231\173\145\233\133\141\231\189\174\230\186\162\229\135\186" .. table.concat(Table.GetKeys(buildingMap)), LogTag.ConfigCheck)
    end
  end
end

function MapDataModel:_IsKaonaFirstBuildingUnlock()
  local slotId = "hs_" .. KryphosMaxBuildingNum + 1
  local slot = self:GetSlot(slotId)
  if slot == nil then
    return false
  end
  if slot and slot.level ~= -1 then
    return true
  end
  local config = self:GetConfig(slotId, 1, 1)
  if config and GM.LevelModel:GetCurrentLevel() >= config.unlock and self:IsSlotUnlock(slotId) then
    return true
  end
  return false
end

function MapDataModel:_IsKryphosAllBuildingFinish()
  for i = KryphosMaxBuildingNum, KryphosMaxBuildingNum - 4, -1 do
    local id = "hs_" .. i
    local slot = self:GetSlot(id)
    if slot.level ~= -1 and self:IsSlotBuildFinished(id, slot.level, slot.stage, slot.subStage) then
    else
      return false
    end
  end
  return true
end

function MapDataModel:IsKaonaMapUnlock()
  return self:_IsKaonaFirstBuildingUnlock() and self:_IsKryphosAllBuildingFinish()
end

function MapDataModel:TestUpgradeBuilding(slotId)
  if not GameConfig.IsTestMode() then
    return
  end
  local slot = self:GetSlot(slotId)
  local curLevel = math.max(slot.level or 1, 1)
  local curStage = slot.stage or 0
  local curSubStage = slot.subStage or 0
  local maxLevel = curLevel
  local maxStage = curStage
  local rewards = {}
  local buildingConfig = self.m_buildingConfig[slotId]
  if not Table.IsEmpty(buildingConfig) then
    for level, levelConfig in pairs(buildingConfig) do
      if level >= curLevel then
        if level >= maxLevel then
          maxLevel = level
          maxStage = #levelConfig
        end
        if not Table.IsEmpty(levelConfig) then
          for stage, stageConfig in pairs(levelConfig) do
            if level > curLevel or level == curLevel and stage >= curStage then
              if stageConfig[1] then
                for subStage, subStageConfig in pairs(stageConfig) do
                  if IsNumber(subStage) and (level > curLevel or level == curLevel and stage > curStage or level == curLevel and stage == curStage and subStage >= curSubStage) and not Table.IsEmpty(subStageConfig.reward) then
                    RewardApi.MergeRewards(rewards, subStageConfig.reward)
                  end
                end
              elseif not Table.IsEmpty(stageConfig.reward) then
                RewardApi.MergeRewards(rewards, stageConfig.reward)
              end
            end
          end
        end
      end
    end
  end
  self.m_slots[slotId] = {
    level = maxLevel,
    stage = maxStage,
    subStage = 2
  }
  self.m_unlockedSlots[slotId] = self.m_slots[slotId]
  self.m_inProgressSlots[slotId] = nil
  self.m_buildMap[slotId] = true
  self.m_dbTable:BatchSet({
    [slotId] = {
      level = maxLevel,
      stage = maxStage,
      subStage = 2,
      finished = 1
    }
  })
  return rewards
end
