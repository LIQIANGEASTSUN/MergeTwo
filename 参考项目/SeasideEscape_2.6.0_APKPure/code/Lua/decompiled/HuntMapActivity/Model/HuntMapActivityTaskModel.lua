HuntMapActivityTaskModel = {}
HuntMapActivityTaskModel.__index = HuntMapActivityTaskModel
HuntMapActivityTaskModel.TaskType = {
  Tool = "tool",
  obstacle = "obstacle",
  eventBook = "eventBook",
  Transform = "transform"
}
HuntMapActivityTaskModel.MainTaskType = {
  reach = "reach",
  Tool = "tool",
  obstacle = "obstacleType"
}
HuntMapActivityTaskModel.TaskState = {
  Finish = 1,
  Doing = 2,
  Reward = 3
}
HuntMapActivityTaskModel.FinalFreeTaskIndex = 1000
HuntMapActivityTaskModel.FinalVipTaskIndex = 1001
HuntMapActivityTaskModel.MainTaskState = {Finish = 1, Doing = 2}

function HuntMapActivityTaskModel.Create(activityModel, dbTable)
  local ele = setmetatable({}, HuntMapActivityTaskModel)
  ele:Init(activityModel, dbTable)
  return ele
end

function HuntMapActivityTaskModel:Init(model, dbTable)
  self.m_activityModel = model
  self.m_activityDefinition = self.m_activityModel:GetActivityDefinition()
  self.m_dbTable = dbTable
  self.m_taskImgHelper = HuntMapActivityTaskHelper.Create(self)
  self:RegisterBookModel()
  self:LoadDefaultConfig()
  self:LoadCacheData()
end

function HuntMapActivityTaskModel:LoadDefaultConfig()
  self.m_taskObstaclePrbImg = {}
  local obstaclePrbImgConfig = require("Data.Config.ExplorePrefabImageConfig_" .. self.m_activityDefinition.ConfigKeySuffix)
  for _, obstaclePrbImgInfo in pairs(obstaclePrbImgConfig) do
    self.m_taskObstaclePrbImg[obstaclePrbImgInfo.prefabName] = obstaclePrbImgInfo.taskImage
  end
end

function HuntMapActivityTaskModel:LoadCacheData()
  local cacheData = json.decode(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.TaskCacheData, "value") or "") or {}
  local cacheShowData = json.decode(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.TaskShowCacheData, "value") or "") or {}
  self.m_cacheData = {}
  self.m_showCacheData = {}
  for strIndex, info in pairs(cacheData) do
    self.m_cacheData[tonumber(strIndex)] = info
  end
  for strindex, info in pairs(cacheShowData) do
    self.m_showCacheData[tonumber(strindex)] = info
  end
  self.m_mainTaskCache = nil
  local cacheData = json.decode(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.MainTaskCacheData, "value") or "")
  if cacheData ~= nil then
    self.m_mainTaskCache = {}
    self.m_mainTaskCache.stage = cacheData.stage
    self.m_mainTaskCache.listTaskCaches = {}
    for index, cacheInfo in pairs(cacheData.listTaskCaches) do
      self.m_mainTaskCache.listTaskCaches[tonumber(index)] = cacheInfo
    end
  end
end

function HuntMapActivityTaskModel:_LoadOtherServerConfig(config)
  self.m_taskConfig = nil
  self.m_finalRewards = nil
  if config.mapExploreTask ~= nil then
    self.m_taskConfig = Table.DeepCopy(config.mapExploreTask)
    table.sort(self.m_taskConfig, function(a, b)
      return a.index < b.index
    end)
    if not Table.IsEmpty(self.m_taskConfig) then
      for k, v in pairs(self.m_taskConfig) do
        v.rewards = {
          v.rewards
        }
      end
    end
    self.m_finalRewards = self.m_taskConfig[#self.m_taskConfig].final_rewards
    self.m_finalVipRewards = self.m_taskConfig[#self.m_taskConfig].payFinalRewards
  end
  self.m_mainTaskConfig = nil
  if config.mapExploreMainTask ~= nil then
    self.m_mainTaskConfig = {}
    local mainTaskConfig = Table.DeepCopy(config.mapExploreMainTask)
    for _, eleTaskConfig in ipairs(mainTaskConfig) do
      if self.m_mainTaskConfig[eleTaskConfig.stage] == nil then
        self.m_mainTaskConfig[eleTaskConfig.stage] = {}
      end
      eleTaskConfig.content = eleTaskConfig.content and eleTaskConfig.content[1]
      table.insert(self.m_mainTaskConfig[eleTaskConfig.stage], eleTaskConfig)
    end
    for _, eleListTask in pairs(self.m_mainTaskConfig) do
      table.sort(eleListTask, function(a, b)
        return a.index < b.index
      end)
    end
  end
  self.m_mainTargetConfig = Table.DeepCopy(config.event_rewards[1])
end

function HuntMapActivityTaskModel:OnStatedChanged()
  if self.m_activityModel:GetState() == ActivityState.Started and self.m_mainTaskCache == nil and self.m_mainTaskConfig ~= nil then
    self:RestMainTaskCache(1)
  end
end

function HuntMapActivityTaskModel:SaveCacheData()
  local saveData = {}
  for _, taskInfo in ipairs(self.m_taskConfig) do
    if self.m_cacheData[taskInfo.index] ~= nil then
      saveData[tostring(taskInfo.index)] = self.m_cacheData[taskInfo.index]
    end
  end
  local saveShowData = {}
  for _, taskInfo in ipairs(self.m_taskConfig) do
    if self.m_showCacheData[taskInfo.index] ~= nil then
      saveShowData[tostring(taskInfo.index)] = self.m_showCacheData[taskInfo.index]
    end
  end
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.TaskCacheData, "value", json.encode(saveData))
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.TaskShowCacheData, "value", json.encode(saveShowData))
end

function HuntMapActivityTaskModel:SaveMainTaskCacheData()
  if self.m_mainTaskCache == nil then
    return
  end
  local SaveCache = {}
  SaveCache.stage = self.m_mainTaskCache.stage
  SaveCache.listTaskCaches = {}
  for index, taskCache in pairs(self.m_mainTaskCache.listTaskCaches) do
    SaveCache.listTaskCaches[tostring(index)] = taskCache
  end
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.MainTaskCacheData, "value", json.encode(SaveCache))
end

function HuntMapActivityTaskModel:RegisterBookModel(bookModel)
  if bookModel == nil then
    return
  end
  self.m_bookModel = bookModel
  AddHandlerAndRecordMap(self.m_bookModel:GetEvent(), BaseHuntItemBookModel.EventType.AddCacheItem, {
    obj = self,
    method = self.AddBookItem
  })
end

function HuntMapActivityTaskModel:AddBookItem()
  self:UpdateTaskInfo({
    {
      [PROPERTY_TYPE] = "eventBook",
      [PROPERTY_COUNT] = 1
    }
  }, HuntMapActivityTaskModel.TaskType.eventBook)
end

function HuntMapActivityTaskModel:AcquireTaskReward(taskId)
  if self.m_cacheData[taskId] == nil then
    return
  end
  if self.m_cacheData[taskId].state == HuntMapActivityTaskModel.TaskState.Finish then
    self.m_cacheData[taskId].state = HuntMapActivityTaskModel.TaskState.Reward
    local rewards = self.m_taskConfig[taskId].rewards
    RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireTaskReward, CacheItemType.Stack, nil, nil, EGameMode.HuntMap)
    local finialRewards
    if not self.m_activityModel:HasVipTask() then
      finialRewards = self.m_finalRewards
    end
    if finialRewards ~= nil then
      for _, taskInfo in ipairs(self.m_taskConfig) do
        if self.m_cacheData[taskInfo.index] == nil or self.m_cacheData[taskInfo.index].state ~= HuntMapActivityTaskModel.TaskState.Reward then
          finialRewards = nil
          break
        end
      end
    end
    if finialRewards then
      RewardApi.AcquireRewardsLogic(finialRewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireTaskReward, CacheItemType.Stack, nil, nil, EGameMode.HuntMap)
    end
    self:SaveCacheData()
    local finishTaskNum = 0
    for _, taskInfo in ipairs(self.m_taskConfig) do
      if self.m_cacheData[taskInfo.index] ~= nil and self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Reward then
        finishTaskNum = finishTaskNum + 1
      end
    end
    self.m_activityModel:LogActivity(EBIType.ActivityRankUp, finishTaskNum, self.m_activityModel:GetType() .. "_vice")
    self.m_activityModel:GetEvent():Call(HuntMapActivityModel.EventKeys.UpdateTaskButtonRedPoint)
    return rewards, finialRewards
  end
end

function HuntMapActivityTaskModel:IsFinishAllMainTask()
  if self.m_mainTaskCache == nil then
    return false
  end
  if self.m_mainTaskConfig == nil then
    return false
  end
  if self.m_mainTaskConfig[self.m_mainTaskCache.stage] == nil then
    return true
  end
  return false
end

function HuntMapActivityTaskModel:RestMainTaskCache(stage)
  self.m_mainTaskCache = {}
  self.m_mainTaskCache.stage = stage
  self.m_mainTaskCache.listTaskCaches = {}
end

function HuntMapActivityTaskModel:CheckMainTaskFinish(index)
  if self.m_mainTaskCache == nil or self.m_mainTaskConfig == nil then
    return false
  end
  local cache = self.m_mainTaskCache.listTaskCaches[index]
  local curTaskConfig = self.m_mainTaskConfig[self.m_mainTaskCache.stage][index]
  local taskType = curTaskConfig.content[PROPERTY_TYPE]
  if cache.content[taskType] < curTaskConfig.content[PROPERTY_COUNT] then
    return false
  end
  return true
end

function HuntMapActivityTaskModel:UpdateMainTaskInfo(TaskContent, taskType, otherInfo)
  if Table.IsEmpty(self.m_mainTaskConfig) then
    return
  end
  if self:IsFinishAllMainTask() then
    return
  end
  local bSet = false
  for _, eleinfo in ipairs(TaskContent) do
    local finishType = eleinfo[PROPERTY_TYPE]
    local finishCount = eleinfo[PROPERTY_COUNT]
    local listCaches = self.m_mainTaskCache.listTaskCaches
    local curStageConfig = self.m_mainTaskConfig[self.m_mainTaskCache.stage]
    for _, stageConfig in pairs(curStageConfig) do
      local bFind = stageConfig.content[PROPERTY_TYPE] == finishType
      if bFind == true then
        bSet = true
        if listCaches[stageConfig.index] == nil then
          listCaches[stageConfig.index] = {}
          listCaches[stageConfig.index].index = stageConfig.index
          listCaches[stageConfig.index].state = HuntMapActivityTaskModel.MainTaskState.Doing
          listCaches[stageConfig.index].content = {}
        end
        if listCaches[stageConfig.index].content[finishType] == nil then
          listCaches[stageConfig.index].content[finishType] = 0
        end
        listCaches[stageConfig.index].content[finishType] = listCaches[stageConfig.index].content[finishType] + finishCount
        if self:CheckMainTaskFinish(stageConfig.index) then
          listCaches[stageConfig.index].state = HuntMapActivityTaskModel.MainTaskState.Finish
        end
      end
    end
  end
  local bFinish = true
  for _, stageConfig in pairs(self.m_mainTaskConfig[self.m_mainTaskCache.stage]) do
    if self.m_mainTaskCache.listTaskCaches[stageConfig.index] == nil then
      bFinish = false
      break
    end
    if self.m_mainTaskCache.listTaskCaches[stageConfig.index].state == HuntMapActivityTaskModel.MainTaskState.Doing then
      bFinish = false
      break
    end
  end
  if bFinish then
    local curStage = self.m_mainTaskCache.stage
    self.m_activityModel:LogActivity(EBIType.ActivityRankUp, curStage)
    self:RestMainTaskCache(self.m_mainTaskCache.stage + 1)
    local finishRewards
    if self:IsFinishAllMainTask() and not self.m_activityModel:HasDashRewards() then
      finishRewards = self.m_mainTargetConfig.rewards
      RewardApi.AcquireRewardsLogic(finishRewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireMainTaskReward, CacheItemType.Stack, nil, nil, EGameMode.HuntMap)
    end
  end
  if bSet then
    self:SaveMainTaskCacheData()
  end
end

function HuntMapActivityTaskModel:UpdateTaskInfo(TaskContent, taskType, otherInfo)
  if Table.IsEmpty(self.m_taskConfig) then
    return
  end
  local bSet = false
  local listSetIndex = {}
  for _, eleInfo in ipairs(TaskContent) do
    for _, taskInfo in ipairs(self.m_taskConfig) do
      if taskInfo.task_type == taskType then
        if self.m_cacheData[taskInfo.index] == nil and self.m_cacheData[taskInfo.index] == nil then
          self.m_cacheData[taskInfo.index] = {}
          self.m_cacheData[taskInfo.index].state = HuntMapActivityTaskModel.TaskState.Doing
          self.m_cacheData[taskInfo.index].content = {}
          self.m_cacheData[taskInfo.index].index = taskInfo.index
          for _, toolInfo in ipairs(taskInfo.content) do
            self.m_cacheData[taskInfo.index].content[toolInfo[PROPERTY_TYPE]] = 0
          end
        end
        if self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Doing then
          local isSetIndex = false
          for _, toolInfo in ipairs(taskInfo.content) do
            if string.find(eleInfo[PROPERTY_TYPE], toolInfo[PROPERTY_TYPE], 1, true) and self.m_cacheData[taskInfo.index].content[toolInfo[PROPERTY_TYPE]] < toolInfo[PROPERTY_COUNT] then
              bSet = true
              isSetIndex = true
              local finishType = toolInfo[PROPERTY_TYPE]
              local maxNum = toolInfo[PROPERTY_COUNT]
              local curCount = self.m_cacheData[taskInfo.index].content[finishType]
              local increaseNum = math.min(maxNum - curCount, eleInfo[PROPERTY_COUNT])
              self.m_cacheData[taskInfo.index].content[finishType] = math.min(curCount + eleInfo[PROPERTY_COUNT], maxNum)
              self.m_activityModel:GetEvent():Call(HuntMapActivityModel.EventKeys.TaskProgressIncrease, {
                taskId = taskInfo.index,
                taskType = taskType,
                taskPropertyName = finishType,
                increaseNum = increaseNum,
                otherInfo = otherInfo,
                taskInfo = taskInfo,
                cacheInfo = Table.DeepCopy(self.m_cacheData[taskInfo.index])
              })
              break
            end
          end
          if isSetIndex then
            table.insert(listSetIndex, taskInfo.index)
          end
        end
      end
    end
  end
  for _, taskId in ipairs(listSetIndex) do
    local taskInfo = self.m_taskConfig[taskId]
    local isFinish = true
    for _, toolInfo in ipairs(taskInfo.content) do
      if self.m_cacheData[taskId].content[toolInfo[PROPERTY_TYPE]] < toolInfo[PROPERTY_COUNT] then
        isFinish = false
        break
      end
    end
    if isFinish == true then
      self.m_cacheData[taskId].state = HuntMapActivityTaskModel.TaskState.Finish
      self.m_activityModel:GetEvent():Call(HuntMapActivityModel.EventKeys.TaskFinish, taskId)
      local biRewards = {}
      if not Table.IsEmpty(taskInfo.rewards) then
        for _, reward in pairs(taskInfo.rewards) do
          local rewardKey = tostring(reward[PROPERTY_TYPE])
          biRewards[rewardKey] = reward[PROPERTY_COUNT]
        end
      end
      GM.BIManager:LogTask(self.m_activityModel:GetType(), "branch", taskId, "", biRewards)
      if self.m_activityModel:HasVipTask() then
        local finishTaskNum = 0
        for _, taskInfo in ipairs(self.m_taskConfig) do
          if self.m_cacheData[taskInfo.index] ~= nil and (self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Reward or self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Finish) then
            finishTaskNum = finishTaskNum + 1
          end
        end
        self.m_activityModel:LogActivity(EBIType.ActivityRankUp, finishTaskNum, self.m_activityModel:GetType() .. "_streak")
      end
    end
  end
  if bSet == true then
    self:SaveCacheData()
  end
end

function HuntMapActivityTaskModel:OnTestFinishNextMainTask()
  self:RestMainTaskCache(self.m_mainTaskCache.stage + 1)
  self:SaveMainTaskCacheData()
end

function HuntMapActivityTaskModel:OnTestFinishAllMainTask()
  self:RestMainTaskCache(#self.m_mainTaskConfig)
  self:SaveMainTaskCacheData()
end

function HuntMapActivityTaskModel:OnTestFinishNextTask()
  for _, taskInfo in ipairs(self.m_taskConfig) do
    if self.m_cacheData[taskInfo.index] == nil or self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Doing then
      self.m_cacheData[taskInfo.index] = {}
      self.m_cacheData[taskInfo.index].state = HuntMapActivityTaskModel.TaskState.Finish
      self.m_cacheData[taskInfo.index].content = {}
      self.m_cacheData[taskInfo.index].index = taskInfo.index
      for _, toolInfo in ipairs(taskInfo.content) do
        self.m_cacheData[taskInfo.index].content[toolInfo[PROPERTY_TYPE]] = toolInfo[PROPERTY_COUNT]
      end
      self.m_activityModel:GetEvent():Call(HuntMapActivityModel.EventKeys.TaskFinish, taskInfo.index)
      self:SaveCacheData()
      break
    end
  end
end

function HuntMapActivityTaskModel:GetEndRecoverRewards()
  local Maptarget = {}
  local oFinalRewards = self.m_finalRewards
  local bHasVipTask = self.m_activityModel:HasVipTask()
  local bIsVipUser = bHasVipTask and self.m_activityModel:HasTicket()
  for _, taskInfo in ipairs(self.m_taskConfig) do
    if self.m_cacheData[taskInfo.index] ~= nil and self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Finish then
      for _, toolInfo in ipairs(taskInfo.rewards) do
        if Maptarget[toolInfo[PROPERTY_TYPE]] == nil then
          Maptarget[toolInfo[PROPERTY_TYPE]] = 0
        end
        Maptarget[toolInfo[PROPERTY_TYPE]] = Maptarget[toolInfo[PROPERTY_TYPE]] + toolInfo[PROPERTY_COUNT]
      end
      if bIsVipUser and not self:IsVipRewardClaimed(taskInfo.index) then
        for _, toolInfo in ipairs(taskInfo.payRewards) do
          if Maptarget[toolInfo[PROPERTY_TYPE]] == nil then
            Maptarget[toolInfo[PROPERTY_TYPE]] = 0
          end
          Maptarget[toolInfo[PROPERTY_TYPE]] = Maptarget[toolInfo[PROPERTY_TYPE]] + toolInfo[PROPERTY_COUNT]
        end
      end
    elseif self.m_cacheData[taskInfo.index] ~= nil and self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Reward then
      if bIsVipUser and not self:IsVipRewardClaimed(taskInfo.index) then
        for _, toolInfo in ipairs(taskInfo.payRewards) do
          if Maptarget[toolInfo[PROPERTY_TYPE]] == nil then
            Maptarget[toolInfo[PROPERTY_TYPE]] = 0
          end
          Maptarget[toolInfo[PROPERTY_TYPE]] = Maptarget[toolInfo[PROPERTY_TYPE]] + toolInfo[PROPERTY_COUNT]
        end
      end
    elseif self.m_cacheData[taskInfo.index] == nil or self.m_cacheData[taskInfo.index].state == HuntMapActivityTaskModel.TaskState.Doing then
      oFinalRewards = nil
    end
  end
  if not bHasVipTask and Table.IsEmpty(Maptarget) then
    return {}
  end
  if oFinalRewards ~= nil then
    if not bHasVipTask then
      for _, reward in ipairs(oFinalRewards) do
        if Maptarget[reward[PROPERTY_TYPE]] == nil then
          Maptarget[reward[PROPERTY_TYPE]] = 0
        end
        Maptarget[reward[PROPERTY_TYPE]] = Maptarget[reward[PROPERTY_TYPE]] + reward[PROPERTY_COUNT]
      end
    else
      if not self:IsFinalFreeRewardClaimed() then
        for _, reward in ipairs(oFinalRewards) do
          if Maptarget[reward[PROPERTY_TYPE]] == nil then
            Maptarget[reward[PROPERTY_TYPE]] = 0
          end
          Maptarget[reward[PROPERTY_TYPE]] = Maptarget[reward[PROPERTY_TYPE]] + reward[PROPERTY_COUNT]
        end
      end
      if bIsVipUser and not self:IsFinalVipRewardClaimed() then
        for _, reward in ipairs(self.m_finalVipRewards) do
          if Maptarget[reward[PROPERTY_TYPE]] == nil then
            Maptarget[reward[PROPERTY_TYPE]] = 0
          end
          Maptarget[reward[PROPERTY_TYPE]] = Maptarget[reward[PROPERTY_TYPE]] + reward[PROPERTY_COUNT]
        end
      end
    end
  end
  local listRewrads = {}
  if not Table.IsEmpty(Maptarget) then
    for key, value in pairs(Maptarget) do
      table.insert(listRewrads, {
        [PROPERTY_TYPE] = key,
        [PROPERTY_COUNT] = value
      })
    end
  end
  return listRewrads
end

function HuntMapActivityTaskModel:GetUnClaimedRewardNum()
  local rewardNum = 0
  local finishNum = 0
  for taskId, cacheData in pairs(self.m_cacheData) do
    if cacheData.state == HuntMapActivityTaskModel.TaskState.Finish then
      if self.m_activityModel:HasVipTask() then
        finishNum = finishNum + 1
      end
      rewardNum = rewardNum + 1
    elseif cacheData.state == HuntMapActivityTaskModel.TaskState.Reward then
      finishNum = finishNum + 1
    end
  end
  if self.m_activityModel:HasVipTask() then
    if finishNum >= #self.m_taskConfig and not self:IsFinalFreeRewardClaimed() then
      rewardNum = rewardNum + 1
    end
    if self.m_activityModel:HasTicket() then
      if finishNum >= #self.m_taskConfig and not self:IsFinalVipRewardClaimed() then
        rewardNum = rewardNum + 1
      end
      for taskId, cacheData in pairs(self.m_cacheData) do
        if (cacheData.state == HuntMapActivityTaskModel.TaskState.Finish or cacheData.state == HuntMapActivityTaskModel.TaskState.Reward) and not self:IsVipRewardClaimed(cacheData.index) then
          rewardNum = rewardNum + 1
        end
      end
    end
  end
  return rewardNum
end

function HuntMapActivityTaskModel:IsAllBranchTaskFinished()
  for _, cacheData in pairs(self.m_cacheData) do
    if cacheData.state ~= HuntMapActivityTaskModel.TaskState.Finish and cacheData.state ~= HuntMapActivityTaskModel.TaskState.Reward then
      return false
    end
  end
  return true
end

function HuntMapActivityTaskModel:GetMainTaskSlotImage(mainTaskConfig)
  local mapmodel = self.m_activityModel:GetMapModel()
  local targetSlot, imageName
  local taskContentType = mainTaskConfig.content[PROPERTY_TYPE]
  if mainTaskConfig.task_type == HuntMapActivityTaskModel.MainTaskType.reach then
    targetSlot = taskContentType
    local listTaskConfig = mapmodel:GetSlotObstacleConfig(targetSlot)
    imageName = listTaskConfig[1].prefabName
  elseif mainTaskConfig.task_type == HuntMapActivityTaskModel.MainTaskType.Tool then
    targetSlot = mapmodel:GetCurrentToTargetObstaclePrefabDistance(taskContentType, HuntMapActivityTaskModel.TaskType.Tool)
    imageName = taskContentType
  else
    targetSlot = mapmodel:GetSlotIdByObstacletype(taskContentType)
    local listTaskConfig = mapmodel:GetSlotObstacleConfig(targetSlot)
    imageName = listTaskConfig[1].prefabName
  end
  if mainTaskConfig.image_name ~= nil then
    imageName = mainTaskConfig.image_name
  end
  return targetSlot, imageName
end

function HuntMapActivityTaskModel:SetTaskImage(imageObj, prefabName, isNative)
  self.m_taskImgHelper:SetTaskImage(imageObj, prefabName, isNative)
end

function HuntMapActivityTaskModel:ClearAllTaskCache()
  self.m_cacheData = {}
  self.m_showCacheData = {}
  self:RestMainTaskCache(1)
  self:SaveCacheData()
end

function HuntMapActivityTaskModel:SyncShowCacheData()
  self.m_showCacheData = Table.DeepCopy(self.m_cacheData)
  self:SaveCacheData()
end

function HuntMapActivityTaskModel:GetTaskConfigAndFinialRewards()
  return self.m_taskConfig, self.m_finalRewards, self.m_finalVipRewards
end

function HuntMapActivityTaskModel:GetTaskConfig(index)
  return self.m_taskConfig[index]
end

function HuntMapActivityTaskModel:GetTaskCacheData()
  return self.m_cacheData
end

function HuntMapActivityTaskModel:GetTaskCache(taskId)
  return self.m_cacheData[taskId]
end

function HuntMapActivityTaskModel:GetShowTaskCacheData()
  return self.m_showCacheData
end

function HuntMapActivityTaskModel:GetShowTaskCache(taskId)
  return self.m_showCacheData[taskId]
end

function HuntMapActivityTaskModel:GetTaskImage(prefabName)
  return self.m_taskObstaclePrbImg[prefabName]
end

function HuntMapActivityTaskModel:GetActivityDefinition()
  return self.m_activityDefinition
end

function HuntMapActivityTaskModel:GetMainTaskConfig()
  return self.m_mainTaskConfig
end

function HuntMapActivityTaskModel:GetMainTargetConfig()
  return self.m_mainTargetConfig
end

function HuntMapActivityTaskModel:GetMainTaskCache()
  return self.m_mainTaskCache
end

function HuntMapActivityTaskModel:GetFinishTaskNumAndMaxNum()
  local curStage = self.m_mainTaskCache.stage
  local curNum = 0
  local maxNum = 0
  for i = 1, curStage - 1 do
    curNum = curNum + #self.m_mainTaskConfig[i]
  end
  for _, eleCache in pairs(self.m_mainTaskCache.listTaskCaches) do
    if eleCache.state == HuntMapActivityTaskModel.MainTaskState.Finish then
      curNum = curNum + 1
    end
  end
  for _, eleConfig in pairs(self.m_mainTaskConfig) do
    maxNum = maxNum + #eleConfig
  end
  return curNum, maxNum
end

function HuntMapActivityTaskModel:GetDeepCopyTaskCacheInfo()
  local cacheInfo = {}
  cacheInfo.subTaskCache = Table.DeepCopy(self.m_cacheData)
  if self.m_mainTaskCache ~= nil then
    cacheInfo.mainTaskCache = Table.DeepCopy(self.m_mainTaskCache)
  end
  return cacheInfo
end

function HuntMapActivityTaskModel:IsVipRewardClaimed(index)
  if index == HuntMapActivityTaskModel.FinalFreeTaskIndex then
    return self:IsFinalVipRewardClaimed()
  end
  return tonumber(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.PayTaskClaimed .. index, "value")) == 1
end

function HuntMapActivityTaskModel:IsFinalFreeRewardClaimed()
  return tonumber(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.PayTaskClaimed .. HuntMapActivityTaskModel.FinalFreeTaskIndex, "value")) == 1
end

function HuntMapActivityTaskModel:IsFinalVipRewardClaimed()
  return tonumber(self.m_dbTable:GetValue(HuntMapActivityModel.DBKeys.PayTaskClaimed .. HuntMapActivityTaskModel.FinalVipTaskIndex, "value")) == 1
end

function HuntMapActivityTaskModel:ClaimVipRewards(index)
  if self:IsVipRewardClaimed(index) then
    return
  end
  local taskInfo = self:GetTaskCache(index)
  if not taskInfo or taskInfo.state == HuntMapActivityTaskModel.TaskState.Doing then
    return
  end
  self.m_dbTable:Set(HuntMapActivityModel.DBKeys.PayTaskClaimed .. index, "value", 1)
  local vipRewards = self:GetTaskConfig(index).payRewards
  RewardApi.AcquireRewardsLogic(vipRewards, EPropertySource.Buy, self.m_activityDefinition.BIAcquireVipReward, CacheItemType.Stack)
  self.m_activityModel:GetEvent():Call(HuntMapActivityModel.EventKeys.UpdateTaskButtonRedPoint)
end

function HuntMapActivityTaskModel:ClaimFinalTaskReward(bVip)
  if bVip then
    if not self:IsFinalVipRewardClaimed() then
      RewardApi.AcquireRewardsLogic(self.m_finalVipRewards, EPropertySource.Buy, self.m_activityDefinition.BIAcquireVipReward, CacheItemType.Stack, nil, nil, EGameMode.HuntMap)
      self.m_dbTable:Set(HuntMapActivityModel.DBKeys.PayTaskClaimed .. HuntMapActivityTaskModel.FinalVipTaskIndex, "value", 1)
    end
  elseif not self:IsFinalFreeRewardClaimed() then
    RewardApi.AcquireRewardsLogic(self.m_finalRewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireTaskReward, CacheItemType.Stack, nil, nil, EGameMode.HuntMap)
    self.m_dbTable:Set(HuntMapActivityModel.DBKeys.PayTaskClaimed .. HuntMapActivityTaskModel.FinalFreeTaskIndex, "value", 1)
  end
  self.m_activityModel:GetEvent():Call(HuntMapActivityModel.EventKeys.UpdateTaskButtonRedPoint)
end

function HuntMapActivityTaskModel:CanClaimTaskReward(task)
  if task == nil then
    return false
  end
  return task.state == HuntMapActivityTaskModel.TaskState.Finish or (task.state == HuntMapActivityTaskModel.TaskState.Finish or task.state == HuntMapActivityTaskModel.TaskState.Reward) and self.m_activityModel:HasTicket() and not self:IsVipRewardClaimed(task.index)
end

function HuntMapActivityTaskModel:IsAllTaskIncludeVipClaimed()
  for _, taskInfo in ipairs(self.m_taskConfig) do
    if self.m_cacheData[taskInfo.index] == nil or self.m_cacheData[taskInfo.index].state ~= HuntMapActivityTaskModel.TaskState.Reward then
      return false
    end
    if not self:IsVipRewardClaimed(taskInfo.index) then
      return false
    end
  end
  return true
end
