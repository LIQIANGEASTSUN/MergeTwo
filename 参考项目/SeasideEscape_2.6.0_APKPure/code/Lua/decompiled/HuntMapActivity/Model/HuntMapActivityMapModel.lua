HuntMapActivityMapModel = {}
HuntMapActivityMapModel.__index = HuntMapActivityMapModel
HuntMapActivityMapModel.ObstcaleType = {
  lock_normal = 1,
  lock_transform = 2,
  lock_cycle = 3
}
HuntMapActivityMapModel.SlotState = {
  isWillLock = 1,
  isLock = 2,
  isFinish = 3,
  Error = 400
}
HuntMapActivityMapModel.DoorPrefabName = "iceMapExplore_prb_door_pre"

function HuntMapActivityMapModel.Create(activityModel, activityType, dbTable)
  local mapModel = setmetatable({}, HuntMapActivityMapModel)
  mapModel:Init(activityModel, activityType, dbTable)
  return mapModel
end

function HuntMapActivityMapModel:Init(activityModel, activityType, dbTable)
  self.m_model = activityModel
  self.m_dbTable = dbTable
  self.m_activityDefinition = HuntMapActivityDefinition[activityType]
  self:LoadDefaultConfig(self.m_activityDefinition.ConfigKeySuffix)
end

function HuntMapActivityMapModel:OnStatedChanged()
  local state = self.m_model:GetState(false)
  if state == ActivityState.Started then
    self:LoadCacheData(self.m_activityDefinition.ConfigKeySuffix)
    self:InitSlotInfo()
    for _, v in pairs(self.m_mapSlotObstacleLogic) do
      if not Table.IsEmpty(v.listObstacle) then
        for _, ob in ipairs(v.listObstacle) do
          ob:CheckCanSkipAppearAnimation()
        end
      end
    end
  end
end

function HuntMapActivityMapModel:LoadDefaultConfig(configSuffix)
  self.m_mapSlotConfig = {}
  local slotObstacleConfig = require("Data.Config.ExploreSlotObstacleRelationConfig_" .. configSuffix)
  for _, slotInfo in ipairs(slotObstacleConfig) do
    if self.m_mapSlotConfig[slotInfo.id] == nil then
      self.m_mapSlotConfig[slotInfo.id] = {}
      self.m_mapSlotConfig[slotInfo.id].slotConfigs = {}
    end
    self.m_mapSlotConfig[slotInfo.id].id = slotInfo.id
    self.m_mapSlotConfig[slotInfo.id].slotConfigs[slotInfo.index] = slotInfo
  end
  self.m_obstacleConfig = {}
  self.m_mainObstacleConfig = {}
  local obstacleTemp = require("Data.Config.ExploreObstacleModelConfig_" .. configSuffix)
  for _, obstacleInfo in pairs(obstacleTemp) do
    if self.m_obstacleConfig[obstacleInfo.type] == nil then
      self.m_obstacleConfig[obstacleInfo.type] = {}
      self.m_obstacleConfig[obstacleInfo.type].type = obstacleInfo.type
      self.m_obstacleConfig[obstacleInfo.type].ListCodeConfig = {}
    end
    table.insert(self.m_obstacleConfig[obstacleInfo.type].ListCodeConfig, obstacleInfo)
  end
  table.sort(self.m_mainObstacleConfig, function(a, b)
    if a.slot == b.slot then
      return a.slotIndex < b.slotIndex
    end
    return a.slot < b.slot
  end)
  for _, obstacleInfo in pairs(self.m_obstacleConfig) do
    if #obstacleInfo.ListCodeConfig > 1 then
      table.sort(obstacleInfo.ListCodeConfig, function(a, b)
        local _, aindex = self:GetObstacleTypeIndexByCode(a.code)
        local _, bindex = self:GetObstacleTypeIndexByCode(b.code)
        return aindex < bindex
      end)
      obstacleInfo.logicType = obstacleInfo.ListCodeConfig[1].logicType
      obstacleInfo.prefabName = obstacleInfo.ListCodeConfig[1].prefabName
    elseif #obstacleInfo.ListCodeConfig == 1 then
      obstacleInfo.logicType = obstacleInfo.ListCodeConfig[1].logicType
      obstacleInfo.prefabName = obstacleInfo.ListCodeConfig[1].prefabName
    end
  end
  local pathConfig = require("Data.Config.ExplorePathConfig_" .. configSuffix)
  self.m_pathConfig = {}
  self.m_slotZMap = {}
  for _, pathInfo in ipairs(pathConfig) do
    self.m_pathConfig[pathInfo.id] = pathInfo
    for i = 1, pathInfo.num do
      self.m_slotZMap[pathInfo.id .. "_" .. i] = -2000 / pathInfo.num * (pathInfo.num + 1 - i)
    end
  end
  self.m_pathUnlockConfig = {}
  local pathUnlockConfig = require("Data.Config.ExplorePathUnlockConfig_" .. configSuffix)
  for _, pathUnlockInfo in ipairs(pathUnlockConfig) do
    self.m_pathUnlockConfig[pathUnlockInfo.id] = pathUnlockInfo.unlockSlot
  end
  self.m_cloudUnlockConfig = {}
  local cloudUnlockConfig = require("Data.Config.ExploreCloudConfig_" .. configSuffix)
  for _, cloudUnlockInfo in ipairs(cloudUnlockConfig) do
    if self.m_cloudUnlockConfig[cloudUnlockInfo.unlockSlot] == nil then
      self.m_cloudUnlockConfig[cloudUnlockInfo.unlockSlot] = {}
    end
    table.insert(self.m_cloudUnlockConfig[cloudUnlockInfo.unlockSlot], cloudUnlockInfo.id)
  end
  if GameConfig.IsTestMode() then
    for slotName, slotInfo in pairs(self.m_mapSlotConfig) do
      local pathName, slotIndex = self:GetSlotPathNameAndIndex(slotName)
      local ObstacleData = self.m_obstacleConfig[slotInfo.slotConfigs[1].obstacle]
      if ObstacleData.logicType ~= HuntMapActivityMapModel.ObstcaleType.lock_cycle and slotIndex == 1 and pathName ~= "m" and self.m_pathUnlockConfig[pathName] == nil then
        Log.Error("\230\178\161\230\156\137\233\133\141\231\189\174\232\183\175\229\190\132\232\167\163\233\148\129\231\154\132\232\138\130\231\130\185" .. pathName)
      end
    end
    for path, pathinfo in pairs(self.m_pathConfig) do
      for i = 1, pathinfo.num do
        if self.m_mapSlotConfig[path .. "_" .. i] == nil then
          Log.Error("\232\183\175\229\190\132" .. path .. "\231\154\132\231\172\172" .. i .. "\228\184\170\231\130\185\230\178\161\230\156\137\233\133\141\231\189\174\233\154\156\231\162\141")
        end
      end
    end
  end
end

function HuntMapActivityMapModel:GetSlotZMap()
  return self.m_slotZMap
end

function HuntMapActivityMapModel:LoadCacheData(configSuffix)
  local progressRecordCache = json.decode(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.ProgressRecord, "value") or "") or {}
  self.m_curAvatarSlot = self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.LastSolvedSlot, "value")
  self.m_mapSlotObstacleLogic = {}
  for _, slotInfo in pairs(self.m_mapSlotConfig) do
    local slotId = slotInfo.id
    if progressRecordCache[slotId] ~= nil then
      self.m_mapSlotObstacleLogic[slotId] = {
        index = progressRecordCache[slotId].index,
        listObstacle = self:CreateObstacleLogic(slotInfo, progressRecordCache[slotId])
      }
    else
      self.m_mapSlotObstacleLogic[slotId] = {
        index = 1,
        listObstacle = self:CreateDefaultObstacle(slotId)
      }
    end
  end
  self.m_cloudUnlockCache = json.decode(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.cloudUnlockCache, "value") or "") or {}
  for slot, unlockList in pairs(self.m_cloudUnlockConfig) do
    for _, cloudId in ipairs(unlockList) do
      if self.m_cloudUnlockCache[cloudId] == nil then
        self.m_cloudUnlockCache[cloudId] = false
      end
    end
  end
end

function HuntMapActivityMapModel:SaveCacheData()
  local saveProgressInfo = {}
  for slot, slotObstacleInfo in pairs(self.m_mapSlotObstacleLogic) do
    saveProgressInfo[slot] = {}
    saveProgressInfo[slot].index = slotObstacleInfo.index
    saveProgressInfo[slot].listObstacle = {}
    for _, obst in ipairs(slotObstacleInfo.listObstacle) do
      table.insert(saveProgressInfo[slot].listObstacle, {
        obstacleIndex = obst:GetobstacleIndex(),
        obstacleType = obst:GetType(),
        otherInfo = obst:GetOtherInfo()
      })
    end
  end
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.ProgressRecord, "value", json.encode(saveProgressInfo))
end

local MapObstacleTypeToLuaTable = {
  [HuntMapActivityMapModel.ObstcaleType.lock_normal] = HuntMapNormalObstacle,
  [HuntMapActivityMapModel.ObstcaleType.lock_cycle] = HuntMapCycleObstacle,
  [HuntMapActivityMapModel.ObstcaleType.lock_transform] = HuntMapTransformObstacle
}

function HuntMapActivityMapModel:CreateObstacleLogic(slotInfo, saveSlotCache)
  local slotCurIndx = saveSlotCache.index
  local slotId = slotInfo.id
  local listObtacle = {}
  for _, obstacle in ipairs(saveSlotCache.listObstacle) do
    local obstacleIndex = obstacle.obstacleIndex
    local obstacleType = obstacle.obstacleType
    if obstacleType == nil then
      Log.Error("\232\189\172\229\140\150\228\186\134\233\148\153\232\175\175\231\154\132\233\154\156\231\162\141\239\188\140\229\133\182\231\177\187\229\158\139\228\184\186\231\169\186")
    elseif obstacleType == "ResidualObstacle" then
      local obstabcleLuaTable = setmetatable({}, HuntMapResidualObstacle)
      obstabcleLuaTable:Init(obstacle.otherInfo, self, slotId, obstacleIndex)
      table.insert(listObtacle, obstabcleLuaTable)
    else
      local obstacleTypeConfig = self.m_obstacleConfig[obstacleType]
      local obstabcleLuaTable = setmetatable({}, MapObstacleTypeToLuaTable[obstacleTypeConfig.logicType])
      obstabcleLuaTable:Init(obstacleTypeConfig, self, slotId, obstacleIndex)
      table.insert(listObtacle, obstabcleLuaTable)
    end
  end
  return listObtacle
end

function HuntMapActivityMapModel:CreateDefaultObstacle(slot)
  local slotInfo = self.m_mapSlotConfig[slot]
  if slotInfo == nil then
    Log.Error("\230\178\161\230\156\137\233\133\141\231\189\174\230\167\189\228\189\141" .. slot)
    return {}
  end
  if Table.IsEmpty(slotInfo.slotConfigs[1]) then
    Log.Error("\230\167\189\228\189\141\230\178\161\230\156\137\233\154\156\231\162\141" .. slot)
    return {}
  end
  local obstacleType = slotInfo.slotConfigs[1].obstacle
  local obstacleTypeConfig = self.m_obstacleConfig[obstacleType]
  local obstabcleLuaTable = setmetatable({}, MapObstacleTypeToLuaTable[obstacleTypeConfig.logicType])
  obstabcleLuaTable:Init(obstacleTypeConfig, self, slot, 1)
  return {obstabcleLuaTable}
end

function HuntMapActivityMapModel:GetSlotObstacleMap()
  return self.m_mapSlotObstacleLogic
end

function HuntMapActivityMapModel:GetCloudMap()
  return self.m_cloudUnlockCache
end

function HuntMapActivityMapModel:GetSlotUnlockClouds(slot)
  if self.m_cloudUnlockConfig[slot] ~= nil then
    return self.m_cloudUnlockConfig[slot]
  end
  return Table.Empty
end

function HuntMapActivityMapModel:InitSlotInfo()
  self.m_mapStateSlotInfo = {}
  self.m_listCycleObstacleSlot = {}
  for _, state in pairs(HuntMapActivityMapModel.SlotState) do
    self.m_mapStateSlotInfo[state] = {}
  end
  for slot, obstacleInfo in pairs(self.m_mapSlotObstacleLogic) do
    local pathName = self:GetSlotPathNameAndIndex(slot)
    if self.m_pathUnlockConfig[pathName] ~= nil or Table.IsEmpty(obstacleInfo.listObstacle) or obstacleInfo.listObstacle[1]:GetCodeConifg() == nil or obstacleInfo.listObstacle[1]:GetCodeConifg().logicType ~= HuntMapActivityMapModel.ObstcaleType.lock_cycle then
      local lockState = self:GetSlotState(slot)
      table.insert(self.m_mapStateSlotInfo[lockState], slot)
    else
      table.insert(self.m_listCycleObstacleSlot, slot)
    end
  end
  for _, slot in ipairs(self.m_listCycleObstacleSlot) do
    local lockState = self:GetSlotState(slot)
    table.insert(self.m_mapStateSlotInfo[lockState], slot)
  end
end

function HuntMapActivityMapModel:GetCharacterSlot()
  return self.m_curAvatarSlot
end

function HuntMapActivityMapModel:AcquireObstacleRewards(rewards, obstacle)
  self.m_curAvatarSlot = obstacle:GetSlot()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.LastSolvedSlot, "value", self.m_curAvatarSlot)
  if rewards ~= nil then
    local newRewards = {}
    for _, reward in ipairs(rewards) do
      if self.m_model:IsActivityProperty(reward[PROPERTY_TYPE]) then
        self.m_model:AddPropertyNum(reward[PROPERTY_TYPE], reward[PROPERTY_COUNT], self.m_activityDefinition.BIAcquireObstacleReward)
      else
        table.insert(newRewards, reward)
      end
    end
    RewardApi.AcquireRewardsLogic(newRewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireObstacleReward, CacheItemType.Queue, nil, nil, EGameMode.HuntMap)
    GM.BIManager:LogAction(self.m_activityDefinition.BIAcquireObstacleReward, {
      id = obstacle:GetSlot(),
      stage = obstacle:GetobstacleIndex(),
      rewards = rewards
    })
    self.m_model:GetTaskModel():UpdateTaskInfo(rewards, HuntMapActivityTaskModel.TaskType.Tool, {
      slot = obstacle:GetSlot(),
      characterAni = obstacle:GetCharacterAniName()
    })
    self.m_model:GetTaskModel():UpdateMainTaskInfo(rewards, HuntMapActivityTaskModel.TaskType.Tool, {
      slot = obstacle:GetSlot()
    })
  end
  local characterAnim = obstacle:GetCharacterAniName()
  EventDispatcher.DispatchEvent(self.m_activityDefinition.SlotProcessEvent, characterAnim)
  return characterAnim
end

function HuntMapActivityMapModel:DeleteObstacleLogic(obstacle)
  local slot = obstacle:GetSlot()
  if self.m_mapSlotObstacleLogic[slot] == nil then
    Log.Error("\232\189\172\229\140\150\228\186\134\233\148\153\232\175\175\231\154\132\233\154\156\231\162\141\239\188\140\229\133\182\230\167\189\228\189\141\228\184\186\231\169\186")
    return
  end
  local listNewObstacle = {}
  for _, obst in ipairs(self.m_mapSlotObstacleLogic[slot].listObstacle) do
    if obst ~= obstacle then
      table.insert(listNewObstacle, obst)
    end
  end
  self.m_model:GetTaskModel():UpdateTaskInfo({
    {
      [PROPERTY_TYPE] = obstacle:GetAniPrefabName(),
      [PROPERTY_COUNT] = 1
    }
  }, HuntMapActivityTaskModel.TaskType.obstacle, {
    slot = obstacle:GetSlot(),
    characterAni = obstacle:GetCharacterAniName()
  })
  self.m_model:GetTaskModel():UpdateMainTaskInfo({
    {
      [PROPERTY_TYPE] = obstacle:GetType(),
      [PROPERTY_COUNT] = 1
    }
  }, HuntMapActivityTaskModel.MainTaskType.obstacle, {
    slot = obstacle:GetSlot()
  })
  return listNewObstacle
end

function HuntMapActivityMapModel:RemoveObstacle(obstacle)
  local slot = obstacle:GetSlot()
  local listNewObstacle = self:DeleteObstacleLogic(obstacle)
  self.m_mapSlotObstacleLogic[slot].listObstacle = listNewObstacle
  self.m_mapSlotObstacleLogic[slot].index = self.m_mapSlotObstacleLogic[slot].index + 1
  self:SaveCacheData()
  self:TryCreateNextObstacle(slot)
end

function HuntMapActivityMapModel:TransformEmptyObstacle(obstacle, prefabName)
  local slot = obstacle:GetSlot()
  local listNewObstacle = self:DeleteObstacleLogic(obstacle)
  local newObstacel = setmetatable({}, HuntMapResidualObstacle)
  newObstacel:Init({prefabName = prefabName}, self, slot, 1)
  table.insert(listNewObstacle, newObstacel)
  self.m_model:GetTaskModel():UpdateTaskInfo({
    {
      [PROPERTY_TYPE] = prefabName,
      [PROPERTY_COUNT] = 1
    }
  }, HuntMapActivityTaskModel.TaskType.Transform, {
    slot = obstacle:GetSlot(),
    characterAni = obstacle:GetCharacterAniName()
  })
  self.m_mapSlotObstacleLogic[slot].listObstacle = listNewObstacle
  self.m_mapSlotObstacleLogic[slot].index = self.m_mapSlotObstacleLogic[slot].index + 1
  self:SaveCacheData()
  self:TryCreateNextObstacle(slot)
end

function HuntMapActivityMapModel:TryCreateNextObstacle(slot)
  local curIndex = self.m_mapSlotObstacleLogic[slot].index
  local slotInfo = self.m_mapSlotConfig[slot]
  local slotConfig = slotInfo.slotConfigs[curIndex]
  if slotConfig == nil then
    self:FinishSlot(slot)
  else
    self:CreateNextObstacleBySlot(slot)
  end
  self:SaveCacheData()
end

function HuntMapActivityMapModel:FinishSlot(slot)
  self.m_mapSlotObstacleLogic[slot].index = -1
  local nextWilllockSLots = self:GetSlotNextSlots(slot)
  table.insert(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isFinish], slot)
  Table.ListRemove(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock], slot)
  Table.ListAppend(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock], nextWilllockSLots)
  for _, eleslot in ipairs(nextWilllockSLots) do
    Table.ListRemove(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isLock], eleslot)
  end
  for _, eleslot in ipairs(self.m_listCycleObstacleSlot) do
    if Table.Contain(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isLock], eleslot) then
      local state = self:GetSlotState(eleslot)
      if state == HuntMapActivityMapModel.SlotState.isWillLock then
        Table.ListRemove(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isLock], eleslot)
        table.insert(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock], eleslot)
      end
    end
  end
  self:TryUnlockCloud(slot)
  local taskInfo = {}
  for _, slot in ipairs(nextWilllockSLots) do
    table.insert(taskInfo, {
      [PROPERTY_TYPE] = slot,
      [PROPERTY_COUNT] = 1
    })
  end
  self.m_model:GetTaskModel():UpdateMainTaskInfo(taskInfo, HuntMapActivityTaskModel.MainTaskType.reach)
end

function HuntMapActivityMapModel:TryUnlockCloud(slot)
  if self.m_cloudUnlockConfig[slot] ~= nil then
    for _, cloudId in ipairs(self.m_cloudUnlockConfig[slot]) do
      self.m_cloudUnlockCache[cloudId] = true
    end
  end
  self:SaveCloudCacheData()
end

function HuntMapActivityMapModel:SaveCloudCacheData()
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.cloudUnlockCache, "value", json.encode(self.m_cloudUnlockCache))
end

function HuntMapActivityMapModel:CreateNextObstacleBySlot(slot)
  local curIndex = self.m_mapSlotObstacleLogic[slot].index
  local slotInfo = self.m_mapSlotConfig[slot]
  local obstacleType = slotInfo.slotConfigs[curIndex].obstacle
  local obstacleTypeConfig = self.m_obstacleConfig[obstacleType]
  if obstacleTypeConfig == nil then
    Log.Error("\230\178\161\230\156\137\232\191\153\228\184\170\233\154\156\231\162\141" .. obstacleType .. "\230\167\189\228\189\141" .. slot)
  end
  local obstabcleLuaTable = setmetatable({}, MapObstacleTypeToLuaTable[obstacleTypeConfig.logicType])
  obstabcleLuaTable:Init(obstacleTypeConfig, self, slot, 1)
  table.insert(self.m_mapSlotObstacleLogic[slot].listObstacle, obstabcleLuaTable)
end

function HuntMapActivityMapModel:GetObstacleTypeIndexByCode(code)
  local find = StringUtil.rFindChar(code, "_")
  if find == nil then
    return nil
  end
  local index = tonumber(string.sub(code, find + 1))
  local type = string.sub(code, 1, find - 1)
  return type, index
end

function HuntMapActivityMapModel:GetSlotPathNameAndIndex(slot)
  local find = StringUtil.rFindChar(slot, "_")
  if find == nil then
    return nil
  end
  local index = tonumber(string.sub(slot, find + 1))
  local name = string.sub(slot, 1, find - 1)
  return name, index
end

function HuntMapActivityMapModel:HasProperty(listProperty)
  if listProperty == nil then
    return true
  end
  for _, property in ipairs(listProperty) do
    local haveNum = self.m_model:GetPropertyNum(property[PROPERTY_TYPE])
    if haveNum < property[PROPERTY_COUNT] then
      return false
    end
  end
  return true
end

function HuntMapActivityMapModel:IsNotEnergyCost(listProperty)
  if listProperty == nil then
    return true
  end
  for _, property in ipairs(listProperty) do
    if property[PROPERTY_TYPE] == self.m_activityDefinition.ActivityTokenPropertyType then
      return false
    end
  end
  return true
end

function HuntMapActivityMapModel:GetPreSlot(slot)
  local pathName, slotIndex = self:GetSlotPathNameAndIndex(slot)
  local preIndex = slotIndex - 1
  local preSlot = pathName .. "_" .. preIndex
  if preIndex == 0 then
    preSlot = self.m_pathUnlockConfig[pathName]
    if preSlot == nil then
      if Table.Contain(self.m_listCycleObstacleSlot, slot) then
        return "m_1"
      else
        Log.Error("\233\148\153\232\175\175\231\154\132\229\137\141\231\189\174slot" .. tostring(slot))
      end
    end
  end
  return preSlot
end

function HuntMapActivityMapModel:GetPreUnlockSlot(slot)
  while true do
    local state, isCycle = self:GetSlotState(slot)
    if state ~= HuntMapActivityMapModel.SlotState.isLock then
      return slot
    end
    if isCycle then
      return slot, isCycle
    end
    if GameConfig.IsTestMode() then
      local preSlot = self:GetPreSlot(slot)
      if preSlot == slot then
        Log.Error("\230\178\161\230\156\137\229\137\141\231\189\174\230\167\189\228\189\141\228\186\134" .. slot)
        return slot
      end
    end
    slot = self:GetPreSlot(slot)
  end
end

function HuntMapActivityMapModel:HasCostEnergyObstacle()
  if self.m_noHaveCostEnergy ~= nil then
    return false
  end
  
  local function checkSlotHaveCostEnegy(slot)
    local listObstacle = self.m_mapSlotObstacleLogic[slot].listObstacle
    for _, obst in ipairs(listObstacle) do
      if obst:GetCost() ~= nil then
        for _, cost in ipairs(obst:GetCost()) do
          if cost[PROPERTY_TYPE] == self.m_activityDefinition.ActivityTokenPropertyType then
            return true
          end
        end
      end
    end
    local curIndex = self.m_mapSlotObstacleLogic[slot].index
    if curIndex == -1 then
      return false
    end
    for i = curIndex + 1, #self.m_mapSlotConfig[slot].slotConfigs do
      local config = self.m_mapSlotConfig[slot].slotConfigs[i]
      local obstacleType = config.obstacle
      local obstcaleConfig = self.m_obstacleConfig[obstacleType]
      for _, eleOneObstacle in ipairs(obstcaleConfig.ListCodeConfig) do
        for _, eleCost in ipairs(eleOneObstacle.cost) do
          if eleCost[PROPERTY_TYPE] == self.m_activityDefinition.ActivityTokenPropertyType then
            return true
          end
        end
      end
    end
    return false
  end
  
  for _, slot in ipairs(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock]) do
    if checkSlotHaveCostEnegy(slot) and not Table.Contain(self.m_listCycleObstacleSlot, slot) then
      return true, slot
    end
  end
  for _, slot in ipairs(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isLock]) do
    if checkSlotHaveCostEnegy(slot) and not Table.Contain(self.m_listCycleObstacleSlot, slot) then
      return true, slot
    end
  end
  self.m_noHaveCostEnergy = true
  return false
end

function HuntMapActivityMapModel:GetSlotState(slot)
  if self.m_mapSlotObstacleLogic[slot] == nil then
    return HuntMapActivityMapModel.SlotState.Error
  end
  local slotInfo = self.m_mapSlotObstacleLogic[slot]
  if slotInfo.index == -1 then
    return HuntMapActivityMapModel.SlotState.isFinish
  end
  if slot == "m_1" then
    return HuntMapActivityMapModel.SlotState.isWillLock
  end
  if self.m_obstacleConfig[slotInfo.listObstacle[1]:GetType()].logicType == HuntMapActivityMapModel.ObstcaleType.lock_cycle then
    local pathName = self:GetSlotPathNameAndIndex(slot)
    if self.m_pathUnlockConfig[pathName] == nil then
      if self:HasCostEnergyObstacle() then
        return HuntMapActivityMapModel.SlotState.isLock, true
      else
        return HuntMapActivityMapModel.SlotState.isWillLock, true
      end
    end
  end
  local preSlot = self:GetPreSlot(slot)
  if self.m_mapSlotObstacleLogic[preSlot] == nil then
    Log.Error("\229\189\147\229\137\141\230\167\189\228\189\141\231\154\132\228\184\138\228\184\128\228\184\170\230\167\189\228\189\141\228\184\141\229\173\152\229\156\168" .. preSlot)
    return HuntMapActivityMapModel.SlotState.Error
  elseif self.m_mapSlotObstacleLogic[preSlot].index == -1 then
    return HuntMapActivityMapModel.SlotState.isWillLock
  end
  return HuntMapActivityMapModel.SlotState.isLock
end

function HuntMapActivityMapModel:GetSlotNextSlots(slot)
  local priorityNextSlot
  local targetSlots = {}
  local pathName, slotIndex = self:GetSlotPathNameAndIndex(slot)
  local nextIndex = slotIndex + 1
  if nextIndex <= self.m_pathConfig[pathName].num then
    table.insert(targetSlots, pathName .. "_" .. nextIndex)
    priorityNextSlot = pathName .. "_" .. nextIndex
  end
  local priorityPath
  for slotPathName, unlockSlot in pairs(self.m_pathUnlockConfig) do
    if unlockSlot == slot then
      table.insert(targetSlots, slotPathName .. "_1")
      local curPriority = 0
      local elePriority = 0
      if priorityPath == nil then
        curPriority = math.maxinteger
      else
        curPriority = self:GetPathConfig(priorityPath).priority or math.maxinteger
        elePriority = self:GetPathConfig(slotPathName).priority or math.maxinteger
      end
      if curPriority > elePriority then
        priorityPath = slotPathName
      end
    end
  end
  if priorityNextSlot == nil and priorityPath ~= nil then
    priorityNextSlot = priorityPath .. "_1"
  end
  if GameConfig.IsTestMode() then
    local testMap = {}
    for _, slot in ipairs(targetSlots) do
      if testMap[slot] ~= nil then
        Log.Error("\233\135\141\229\164\141\231\154\132slot\230\163\128\230\159\165\232\183\175\229\190\132\232\167\163\233\148\129\233\133\141\231\189\174" .. slot)
      end
      testMap[slot] = true
    end
  end
  return targetSlots, priorityNextSlot
end

function HuntMapActivityMapModel:GetNextPrimeSlot()
  for _, mainObstacleInfo in ipairs(self.m_mainObstacleConfig) do
    local slotName = "m_" .. mainObstacleInfo.slot
    if self:GetSlotState(slotName) == HuntMapActivityMapModel.SlotState.isLock then
      return slotName
    elseif self:GetSlotState(slotName) == HuntMapActivityMapModel.SlotState.isWillLock then
      local curIndex = self.m_mapSlotObstacleLogic[slotName].index
      if curIndex < mainObstacleInfo.slotIndex then
        return slotName
      elseif curIndex == mainObstacleInfo.slotIndex then
        local _, index = self:GetObstacleTypeIndexByCode(mainObstacleInfo.code)
        local curObstacleIndex = self.m_mapSlotObstacleLogic[slotName].listObstacle[1]:GetobstacleIndex()
        if index >= curObstacleIndex then
          return slotName
        end
      end
    end
  end
  return nil
end

function HuntMapActivityMapModel:GetNextMainSlot()
  local pathName = "m"
  local pathIndex = self.m_pathConfig[pathName].num
  for index = 1, pathIndex do
    local slot = pathName .. "_" .. index
    if self:GetSlotState(slot) == HuntMapActivityMapModel.SlotState.isLock or self:GetSlotState(slot) == HuntMapActivityMapModel.SlotState.isWillLock then
      return slot
    end
  end
  return nil
end

function HuntMapActivityMapModel:GetPrefaceSlots(slot)
  local targetSlots = {}
  if self.m_mapSlotObstacleLogic[slot].index == -1 then
    return targetSlots
  end
  
  local function DFSFindUnWillSlot(slot)
    local pathName, slotIndex = self:GetSlotPathNameAndIndex(slot)
    for index = slotIndex - 1, 1, -1 do
      local slot = pathName .. "_" .. index
      table.insert(targetSlots, slot)
      if self:GetSlotState(slot) == HuntMapActivityMapModel.SlotState.isWillLock then
        return
      end
    end
    local unLockSlot = self.m_pathUnlockConfig[pathName]
    DFSFindUnWillSlot(unLockSlot)
  end
  
  DFSFindUnWillSlot(slot)
  return targetSlots
end

function HuntMapActivityMapModel:GetSlotToTargetCostPropertyDistance(slot, findName)
  local target = {}
  local bfsQueue = {}
  table.insert(bfsQueue, {slot = slot, depth = 1})
  while not Table.IsEmpty(bfsQueue) do
    local curInfo = table.remove(bfsQueue, 1)
    local curSlot = curInfo.slot
    local curDepth = curInfo.depth
    local obstacleInfo = self.m_mapSlotObstacleLogic[curSlot]
    local index = self.m_mapSlotObstacleLogic[curSlot].index
    for _, eleObstacle in ipairs(obstacleInfo.listObstacle) do
      local listcost = eleObstacle:GetCost()
      if listcost ~= nil then
        for _, cost in ipairs(listcost) do
          if cost[PROPERTY_TYPE] == findName then
            return curSlot, curDepth
          end
        end
      end
    end
    local slotConfigs = self.m_mapSlotConfig[curSlot].slotConfigs
    for index = index + 1, #slotConfigs do
      local slotConfig = slotConfigs[index]
      local obstacleTypeConfig = self.m_obstacleConfig[slotConfig.obstacle]
      for _, obstacleConfig in ipairs(obstacleTypeConfig.ListCodeConfig) do
        if obstacleConfig.cost ~= nil then
          for _, cost in ipairs(obstacleConfig.cost) do
            if cost[PROPERTY_TYPE] == findName then
              return curSlot, curDepth
            end
          end
        end
      end
    end
    local nextSlots = self:GetSlotNextSlots(curSlot)
    for _, nextSlot in ipairs(nextSlots) do
      table.insert(bfsQueue, {
        slot = nextSlot,
        depth = curDepth + 1
      })
    end
  end
end

function HuntMapActivityMapModel:GetSlotToTargetObstaclePrefabDistance(slot, findName, taskType)
  local target = {}
  local bfsQueue = {}
  table.insert(bfsQueue, {slot = slot, depth = 1})
  while not Table.IsEmpty(bfsQueue) do
    local curInfo = table.remove(bfsQueue, 1)
    local curSlot = curInfo.slot
    local curDepth = curInfo.depth
    local obstacleInfo = self.m_mapSlotObstacleLogic[curSlot]
    local index = self.m_mapSlotObstacleLogic[curSlot].index
    for _, eleObstacle in ipairs(obstacleInfo.listObstacle) do
      if taskType == HuntMapActivityTaskModel.TaskType.Transform then
        if eleObstacle.GetTransformPrefab and string.find(eleObstacle:GetTransformPrefab(), findName, 1, true) then
          return curSlot, curDepth
        end
      elseif taskType == HuntMapActivityTaskModel.TaskType.Tool then
        if eleObstacle:HasUnClaimedReward(findName) then
          return curSlot, curDepth
        end
      elseif string.find(eleObstacle:GetAniPrefabName(), findName, 1, true) then
        return curSlot, curDepth
      end
    end
    local slotConfigs = self.m_mapSlotConfig[curSlot].slotConfigs
    for index = index + 1, #slotConfigs do
      local slotConfig = slotConfigs[index]
      local obstacleTypeConfig = self.m_obstacleConfig[slotConfig.obstacle]
      if obstacleTypeConfig == nil then
        Log.Error("\233\148\153\232\175\175\231\154\132\230\167\189\228\189\141\233\154\156\231\162\141\233\133\141\231\189\174" .. curSlot .. tostring(slotConfig.obstacle))
      end
      if taskType == HuntMapActivityTaskModel.TaskType.Transform then
        for _, obstacleConfig in ipairs(obstacleTypeConfig.ListCodeConfig) do
          if obstacleConfig.transformPrefab ~= nil and string.find(obstacleConfig.transformPrefab, findName, 1, true) then
            return curSlot, curDepth
          end
        end
      elseif taskType == HuntMapActivityTaskModel.TaskType.Tool then
        for _, obstacleConfig in ipairs(obstacleTypeConfig.ListCodeConfig) do
          local produce = self:GetProduceRewards(obstacleConfig)
          if produce ~= nil then
            for _, reward in ipairs(produce) do
              if reward[PROPERTY_TYPE] == findName then
                return curSlot, curDepth
              end
            end
          end
        end
      elseif string.find(obstacleTypeConfig.prefabName, findName, 1, true) then
        return curSlot, curDepth
      end
    end
    local nextSlots = self:GetSlotNextSlots(curSlot)
    for _, nextSlot in ipairs(nextSlots) do
      table.insert(bfsQueue, {
        slot = nextSlot,
        depth = curDepth + 1
      })
    end
  end
end

function HuntMapActivityMapModel:GetCurrentToTargetObstaclePrefabDistance(findName, TaskType)
  local listTarget = {}
  local listIsWillLockSlot = self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock]
  for _, slot in ipairs(listIsWillLockSlot) do
    local curSlot, curDepth = self:GetSlotToTargetObstaclePrefabDistance(slot, findName, TaskType)
    if curSlot ~= nil then
      table.insert(listTarget, {slot = curSlot, depth = curDepth})
    end
  end
  table.sort(listTarget, function(a, b)
    return a.depth < b.depth
  end)
  if Table.IsEmpty(listTarget) then
    return nil
  end
  return listTarget[1].slot, listTarget[1].depth
end

function HuntMapActivityMapModel:GetCurrentToCostPropertyDistance(rewardType)
  local listTarget = {}
  local listIsWillLockSlot = self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock]
  for _, slot in ipairs(listIsWillLockSlot) do
    local curSlot, curDepth = self:GetSlotToTargetCostPropertyDistance(slot, rewardType)
    if curSlot ~= nil then
      table.insert(listTarget, {slot = curSlot, depth = curDepth})
    end
  end
  table.sort(listTarget, function(a, b)
    return a.depth < b.depth
  end)
  if Table.IsEmpty(listTarget) then
    return nil
  end
  return listTarget[1].slot, listTarget[1].depth
end

function HuntMapActivityMapModel:GetSlotsByState(state)
  return self.m_mapStateSlotInfo[state]
end

function HuntMapActivityMapModel:GetPathConfig(pathName)
  return self.m_pathConfig[pathName]
end

function HuntMapActivityMapModel:GetSlotIdByObstacletype(obstalceType)
  for slot, slotInfo in pairs(self.m_mapSlotConfig) do
    for _, eleObstacleInfo in ipairs(slotInfo.slotConfigs) do
      if eleObstacleInfo.obstacle == obstalceType then
        return slot
      end
    end
  end
  return nil
end

function HuntMapActivityMapModel:CalcDis(slotA, slotB, bIgnoreMainPathDis)
  local pathNameA, slotIndexA = self:GetSlotPathNameAndIndex(slotA)
  local pathNameB, slotIndexB = self:GetSlotPathNameAndIndex(slotB)
  if pathNameA == pathNameB then
    return math.abs(slotIndexA - slotIndexB)
  end
  local preRecord = {}
  local disA, disB = 0, 0
  preRecord[pathNameA] = {dis = 0, index = slotIndexA}
  while pathNameA ~= "m" do
    local preSlotA = self.m_pathUnlockConfig[pathNameA]
    disA = disA + slotIndexA
    pathNameA, slotIndexA = self:GetSlotPathNameAndIndex(preSlotA)
    preRecord[pathNameA] = {dis = disA, index = slotIndexA}
  end
  if pathNameB == "m" and bIgnoreMainPathDis then
    return disA + 2
  end
  if preRecord[pathNameB] ~= nil then
    return preRecord[pathNameB].dis + math.abs(preRecord[pathNameB].index - slotIndexB)
  end
  while pathNameB ~= "m" do
    local preSlotB = self.m_pathUnlockConfig[pathNameB]
    disB = disB + slotIndexB
    pathNameB, slotIndexB = self:GetSlotPathNameAndIndex(preSlotB)
    if preRecord[pathNameB] ~= nil then
      return disB + preRecord[pathNameB].dis + math.abs(preRecord[pathNameB].index - slotIndexB)
    end
  end
  return disA + disB + math.abs(slotIndexA - slotIndexB)
end

function HuntMapActivityMapModel:CanShowRedPoint()
  return self:IsEnoughTokenCurSlot()
end

function HuntMapActivityMapModel:IsEnoughTokenCurSlot()
  local curSlot = self:GetAnchorSlot()
  if curSlot ~= nil then
    for _, obstacle in ipairs(self.m_mapSlotObstacleLogic[curSlot].listObstacle) do
      if obstacle:CanDispose() or obstacle:IsNotEnergyCost() then
        return true
      end
    end
  end
  return false
end

function HuntMapActivityMapModel:GetUnlockPrioritySlot(slot)
  local targetPath, priorityNextSlot
  local listwillLockSlots = self:GetSlotsByState(HuntMapActivityMapModel.SlotState.isWillLock)
  for _, slotName in ipairs(listwillLockSlots) do
    local path = self:GetSlotPathNameAndIndex(slotName)
    local curProity = 0
    local eleProity = 0
    if targetPath == nil then
      curProity = math.maxinteger
    else
      curProity = self:GetPathConfig(targetPath).priority or math.maxinteger
      eleProity = self:GetPathConfig(path).priority or math.maxinteger
    end
    if curProity > eleProity then
      targetPath = path
      priorityNextSlot = slotName
    elseif curProity == eleProity then
      local dis1 = self:CalcDis(slot, priorityNextSlot, true)
      local dis2 = self:CalcDis(slot, slotName, true)
      if dis1 > dis2 then
        targetPath = path
        priorityNextSlot = slotName
      end
    end
  end
  return priorityNextSlot
end

function HuntMapActivityMapModel:GetNearSlotInDistance(slot, distance)
  local result = {}
  local listwillLockSlots = self:GetSlotsByState(HuntMapActivityMapModel.SlotState.isWillLock)
  for _, slotName in ipairs(listwillLockSlots) do
    local dis1 = self:CalcDis(slot, slotName, true)
    if slot ~= slotName and distance >= dis1 then
      table.insert(result, slotName)
    end
  end
  return result
end

function HuntMapActivityMapModel:HaveWillUnlockSlot()
  for _, willLockSlot in ipairs(self.m_mapStateSlotInfo[HuntMapActivityMapModel.SlotState.isWillLock]) do
    for _, obstacle in ipairs(self.m_mapSlotObstacleLogic[willLockSlot].listObstacle) do
      if obstacle:CanDispose() then
        return true
      end
    end
  end
  return false
end

function HuntMapActivityMapModel:HasObstacleBySlot(slot, obstacle)
  local listObstacle = self.m_mapSlotObstacleLogic[slot].listObstacle
  if listObstacle == nil then
    return false
  end
  for _, eleObstacle in ipairs(listObstacle) do
    if eleObstacle == obstacle then
      return true
    end
  end
  return false
end

function HuntMapActivityMapModel:GetSlotStateByCache(slot)
  for state, listSlot in pairs(self.m_mapStateSlotInfo) do
    if Table.Contain(listSlot, slot) then
      return state
    end
  end
  Log.Error("\233\148\153\232\175\175 \231\138\182\230\128\129\228\184\141\229\173\152\229\156\168")
end

function HuntMapActivityMapModel:CostProperty(reward)
  if reward == nil then
    return true
  end
  return self.m_model:CostProperty(reward)
end

function HuntMapActivityMapModel:GetAnchorSlot()
  if self.m_curAvatarSlot == nil then
    return "m_1"
  end
  if self:GetSlotState(self.m_curAvatarSlot) == HuntMapActivityMapModel.SlotState.isFinish then
    local _, priorityNextSlot = self:GetSlotNextSlots(self.m_curAvatarSlot)
    if priorityNextSlot ~= nil then
      return priorityNextSlot
    end
    local nextMainSlot = self:GetNextMainSlot()
    if nextMainSlot ~= nil then
      return nextMainSlot
    else
      return self:GetUnlockPrioritySlot(self.m_curAvatarSlot) or self.m_curAvatarSlot
    end
  else
    return self.m_curAvatarSlot
  end
end

function HuntMapActivityMapModel:GetSlotObstacleConfig(slot)
  local listObstacleConfigs = {}
  local slotInfo = self.m_mapSlotConfig[slot]
  for _, slotConfig in ipairs(slotInfo.slotConfigs) do
    local obstacleType = slotConfig.obstacle
    local obstacleTypeConfig = self.m_obstacleConfig[obstacleType]
    table.insert(listObstacleConfigs, obstacleTypeConfig)
  end
  return listObstacleConfigs
end

function HuntMapActivityMapModel:ClearMapData()
  self.m_mapSlotObstacleLogic = {}
  self.m_cloudUnlockCache = {}
  self.m_dbTable:Remove(HuntMapActivityModel.DBKeys.LastSolvedSlot)
  self.m_noHaveCostEnergy = nil
  self:SaveCacheData()
  self:SaveCloudCacheData()
  self:LoadCacheData()
  self:InitSlotInfo()
end

function HuntMapActivityMapModel:IsActivityProperty(property)
  return self.m_model:IsActivityProperty(property)
end

function HuntMapActivityMapModel:GetActivityDefinition()
  return self.m_activityDefinition
end

function HuntMapActivityMapModel:GetSlotListObstalce(slot)
  return self.m_mapSlotObstacleLogic[slot].listObstacle
end

function HuntMapActivityMapModel:GetTimelineModel()
  return self.m_model:GetTimelineModel()
end

function HuntMapActivityMapModel:HasAppearAnimation(slotId)
  return self.m_model:GetTimelineModel():HasAppearAnimation(slotId)
end

function HuntMapActivityMapModel:GetTaskModel()
  return self.m_model:GetTaskModel()
end

function HuntMapActivityMapModel:GetActivityModel()
  return self.m_model
end

function HuntMapActivityMapModel:GetListCycleObstacleSlot()
  return self.m_listCycleObstacleSlot
end

function HuntMapActivityMapModel:GetProduceRewards(config)
  if config == nil or config.produce == nil then
    return nil
  end
  local rewards = {}
  local bHasDashRewards = self.m_model:HasDashRewards()
  for _, rwd in ipairs(config.produce) do
    if HuntMapActivityModel.IsActivityItem(rwd[PROPERTY_TYPE]) and bHasDashRewards then
    elseif rwd[PROPERTY_TYPE] == EPropertyType.HuntMapDashToken and not bHasDashRewards then
    else
      table.insert(rewards, rwd)
    end
  end
  return rewards
end
