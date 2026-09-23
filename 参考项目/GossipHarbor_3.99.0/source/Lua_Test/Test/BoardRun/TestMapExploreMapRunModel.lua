TestMapExploreMapRunModel = {}
TestMapExploreMapRunModel.__index = TestMapExploreMapRunModel

function TestMapExploreMapRunModel:Init(boardRunView, activityModel, activityDefinition)
  self.m_boardRunView = boardRunView
  self.m_activityModel = activityModel
  self.m_activityDefinition = activityDefinition
  self.m_usedTokenNum = 0
  self.m_collectReward = {}
  self.m_isFinishMapTask = self.m_activityModel:IsFinishMapTask()
  self.m_mapTaskFinishing = false
  self.m_mapLastNoAction = false
  self.m_mapDugCycleCount = 0
  local tokenNum = self.m_activityModel:GetPropertyNum(self.m_activityDefinition.TokenProperty)
  if tokenNum < 20000 then
    self.m_activityModel:AddPropertyNum(self.m_activityDefinition.TokenProperty, 20000 - tokenNum, "free")
  end
  self.m_mapModel = self.m_activityModel:GetMapModel()
  self.m_taskModel = self.m_activityModel:GetTaskModel()
  return self
end

function TestMapExploreMapRunModel:_MapAction()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if not mainWindow then
    self.m_boardRunView:Error("\230\180\187\229\138\168\228\184\187\231\170\151\229\143\163\230\178\161\230\156\137\230\173\163\229\184\184\230\137\147\229\188\128")
    return
  end
  local sceneView = MapExploreSceneView.GetInstance()
  if sceneView.m_showTaskTargetPath or sceneView.m_showMainTargetPath then
    Log.Info("[TestMapExploreMapRunModel] \231\173\137\229\190\133\230\152\190\231\164\186\228\187\187\229\138\161\231\155\174\230\160\135\232\183\175\229\190\132")
    Coroutine.Wait(2 * CSTime.timeScale)
  end
  local mapInput = sceneView.m_mapInput
  if mapInput.m_bUpdateEnable ~= 0 then
    Log.Info("[TestMapExploreMapRunModel] \231\173\137\229\190\133\231\155\184\230\156\186\231\167\187\229\138\168")
    Coroutine.Wait(1 * CSTime.timeScale)
    return
  end
  local selectSlot = self:SelectSlotWithProbability()
  if selectSlot == nil then
    if not self.m_mapLastNoAction then
      self.m_mapLastNoAction = true
      return
    end
    self.m_boardRunView:Error("\229\156\176\229\155\190\230\178\161\230\156\137\229\143\175\230\147\141\228\189\156\231\154\132\229\133\131\231\180\160")
    return
  end
  self.m_mapLastNoAction = false
  local selectUIPos = sceneView:GetSlotUIPos(selectSlot)
  local tim = 0
  if mainWindow ~= nil and not mainWindow:InCentralArea(selectUIPos) then
    local slotPos = sceneView.m_mapSlotObstacleView[selectSlot].slotTrans.position
    tim = sceneView.m_mapInput:MoveCameraToPos(Vector3(slotPos.x, slotPos.y, 0), 2000)
    Coroutine.Wait(tim * CSTime.timeScale)
  end
  local selectObstacle, selectObstacleIndex, slotObstacleIndex
  local listObstacle = self.m_mapModel:GetSlotListObstalce(selectSlot)
  for _, obstacle in ipairs(listObstacle) do
    if obstacle:CanDispose() then
      slotObstacleIndex = self.m_mapModel.m_mapSlotObstacleLogic[selectSlot].index
      selectObstacle = obstacle
      selectObstacleIndex = obstacle:GetobstacleIndex()
      break
    end
  end
  if selectObstacle == nil then
    selectObstacle = listObstacle[1]
    local config = selectObstacle:GetCodeConfig(selectObstacle:GetobstacleIndex())
    local cost = config.cost
    if cost and cost[1][PROPERTY_TYPE] == self.m_activityDefinition.TokenProperty then
      self.m_activityModel:AddPropertyNum(self.m_activityDefinition.TokenProperty, 10000, "free")
      return
    end
    return
  end
  sceneView:ShowBubble(selectSlot)
  mainWindow:CostBubbleClicked()
  self:_WaitUnlockCloud(selectSlot)
  Coroutine.Wait(0.5 * CSTime.timeScale)
  if self:_IsObstacleFinished(selectObstacle, selectObstacleIndex) and selectObstacle:CanDispose() then
    local curSlotObstacleIndex = self.m_mapModel.m_mapSlotObstacleLogic[selectSlot].index
    if slotObstacleIndex == curSlotObstacleIndex then
      self.m_boardRunView:Error("\233\154\156\231\162\141\233\148\128\230\175\129\229\164\177\232\180\165")
      return
    end
  end
  local isCycleObstacle = getmetatable(selectObstacle) == MapExploreCycleObstacle
  if isCycleObstacle then
    self.m_mapDugCycleCount = self.m_mapDugCycleCount + 1
    Log.Info("[TestMapExploreMapRunModel] \230\140\150\230\142\152\230\151\160\233\153\144\231\159\191\239\188\140\229\189\147\229\137\141\229\183\178\230\140\150\230\172\161\230\149\176: " .. self.m_mapDugCycleCount)
  end
  self:_UpdateCollectReward(selectObstacle, selectObstacleIndex)
  local isFinishMapTask = self.m_activityModel:IsFinishMapTask()
  if isFinishMapTask and not self.m_isFinishMapTask then
    self:ZoomToMaxDistance()
    self.m_mapTaskFinishing = true
    self.m_isFinishMapTask = true
  end
  if self:_IsOnlyCycleObstacle() then
    if not self:_IsAllTaskFinished() then
      self.m_boardRunView:Error("\229\189\147\229\137\141\230\167\189\228\189\141\229\143\170\230\156\137\229\190\170\231\142\175\233\154\156\231\162\141\239\188\140\228\189\134\230\152\175\228\187\187\229\138\161\230\178\161\230\156\137\229\133\168\233\131\168\229\174\140\230\136\144")
    end
    if not self.m_isFinishMapTask then
      self.m_boardRunView:Error("\229\189\147\229\137\141\230\167\189\228\189\141\229\143\170\230\156\137\229\190\170\231\142\175\233\154\156\231\162\141\239\188\140\228\189\134\230\152\175\229\156\176\229\155\190\228\184\187\231\186\191\228\187\187\229\138\161\230\178\161\230\156\137\229\174\140\230\136\144")
    end
    if self.m_mapDugCycleCount < self.m_boardRunView.m_mapDigCycleCount then
      return true
    end
    if self.m_boardRunView.m_mapOnly or self.m_boardRunView.m_boardRunFinished or not self.m_boardRunView.m_bMapExploreHasBoard then
      if self.m_boardRunView.m_mapOnly or not self.m_boardRunView.m_bMapExploreHasBoard then
        self.m_boardRunView:EndLog("\228\187\133\229\156\176\229\155\190\230\168\161\229\188\143\239\188\154\229\156\176\229\155\190\229\183\178\229\174\140\230\136\144\232\191\144\232\161\140")
      else
        self.m_boardRunView:EndLog("\230\163\139\231\155\152\229\146\140\229\156\176\229\155\190\229\157\135\229\183\178\229\174\140\230\136\144\232\191\144\232\161\140")
      end
    else
      self.m_boardRunView.m_mapRunFinished = true
    end
    return true
  end
end

function TestMapExploreMapRunModel:SelectSlotWithProbability(slot)
  local listIsWillLockSlot = self.m_mapModel:GetSlotsByState(MapExploreActivityMapModel.SlotState.isWillLock)
  local curSlot = self.m_mapModel:GetAnchorSlot()
  if curSlot == "m_1" and Table.IsEmpty(listIsWillLockSlot) then
    return "m_1"
  end
  local mSlots = {}
  local otherSlots = {}
  local mapTokenSlots = {}
  for _, slot in ipairs(listIsWillLockSlot) do
    local canTry, isOnlyToken = self:_CanTrySlot(slot)
    if canTry then
      if not self.m_boardRunView.m_mapCollectToken and isOnlyToken then
        table.insert(mapTokenSlots, slot)
      else
        local pathName, index = self.m_mapModel:GetSlotPathNameAndIndex(slot)
        if pathName == "m" then
          table.insert(mSlots, slot)
        else
          table.insert(otherSlots, slot)
        end
      end
    end
  end
  local selectedSlot
  if #mSlots == 0 and #otherSlots == 0 then
    if 0 < #mapTokenSlots and self.m_mapLastNoAction then
      local randomIndex = math.random(1, #mapTokenSlots)
      selectedSlot = mapTokenSlots[randomIndex]
      return selectedSlot
    end
    return nil
  end
  local randomValue = math.random(100)
  if randomValue < self.m_boardRunView.m_mapProbability then
    if 0 < #mSlots then
      local randomIndex = math.random(1, #mSlots)
      selectedSlot = mSlots[randomIndex]
    elseif 0 < #otherSlots then
      local randomIndex = math.random(1, #otherSlots)
      selectedSlot = otherSlots[randomIndex]
    end
  elseif 0 < #otherSlots then
    local randomIndex = math.random(1, #otherSlots)
    selectedSlot = otherSlots[randomIndex]
  elseif 0 < #mSlots then
    local randomIndex = math.random(1, #mSlots)
    selectedSlot = mSlots[randomIndex]
  end
  return selectedSlot
end

function TestMapExploreMapRunModel:_CanTrySlot(slot)
  local listObstacle = self.m_mapModel:GetSlotListObstalce(slot)
  if Table.IsEmpty(listObstacle) then
    return false, false
  end
  local hasNormal = false
  local hasToken = false
  for _, obstacle in ipairs(listObstacle) do
    if obstacle:CanDispose() then
      if self:_IsStaminaRewardObstacle(obstacle, obstacle:GetobstacleIndex()) then
        hasToken = true
      else
        hasNormal = true
      end
    end
  end
  if hasNormal then
    return true, false
  elseif hasToken then
    return true, true
  end
  local obstacle = listObstacle[1]
  local config = obstacle and obstacle:GetCodeConfig(obstacle:GetobstacleIndex())
  local cost = config and config.cost
  if cost and cost[1] and cost[1][PROPERTY_TYPE] == self.m_activityDefinition.TokenProperty then
    return true, false
  end
  return false, false
end

function TestMapExploreMapRunModel:_IsOnlyCycleObstacle()
  local listIsWillLockSlot = self.m_mapModel:GetSlotsByState(MapExploreActivityMapModel.SlotState.isWillLock)
  local listLockedSlot = self.m_mapModel:GetSlotsByState(MapExploreActivityMapModel.SlotState.isLock)
  if 0 < #listLockedSlot then
    return false
  end
  local hasCycle = false
  for _, slotName in ipairs(listIsWillLockSlot) do
    local listObstacle = self.m_mapModel:GetSlotListObstalce(slotName)
    if not Table.IsEmpty(listObstacle) then
      for _, obstacle in ipairs(listObstacle) do
        if obstacle:CanDispose() then
          local baseLuaTable = getmetatable(obstacle)
          if baseLuaTable == MapExploreCycleObstacle then
            hasCycle = true
          else
            local isToken = self:_IsStaminaRewardObstacle(obstacle, obstacle:GetobstacleIndex())
            if self.m_boardRunView.m_mapCollectToken or not isToken then
              return false
            end
          end
        end
      end
    end
  end
  return hasCycle
end

function TestMapExploreMapRunModel:_IsAllTaskFinished()
  local allCacheData = self.m_taskModel:GetTaskCacheData()
  for _, cacheData in pairs(allCacheData) do
    local taskInfo = self.m_taskModel:GetTaskConfig(cacheData.index)
    if taskInfo.taskType == MapExploreActivityTaskModel.TaskType.eventBook then
      if self.m_boardRunView.m_boardRunFinished and cacheData.state == MapExploreActivityTaskModel.TaskState.Doing then
        return false
      end
    elseif cacheData.state == MapExploreActivityTaskModel.TaskState.Doing then
      return false
    end
  end
  return true
end

function TestMapExploreMapRunModel:ZoomToMaxDistance()
  local mapInput = MapExploreSceneView.GetInstance().m_mapInput
  if mapInput:BlockInput() then
    return
  end
  if mapInput.m_camera.orthographicSize == mapInput.m_maxOrthographicSize then
    return
  end
  mapInput.m_camera.orthographicSize = mapInput.m_maxOrthographicSize
  mapInput:UpdateScreen()
  mapInput:_SetCameraTo(mapInput.m_camTrans.position, false)
end

function TestMapExploreMapRunModel:_UpdateCollectReward(selectObstacle, selectObstacleIndex)
  local config = selectObstacle:GetCodeConfig(selectObstacleIndex)
  local cost = config.cost
  local rewards = config.produce
  if cost and cost[1][PROPERTY_TYPE] == self.m_activityDefinition.TokenProperty then
    self.m_usedTokenNum = self.m_usedTokenNum + cost[1][PROPERTY_COUNT]
  end
  if rewards then
    for _, reward in ipairs(rewards) do
      local rewardType = reward[PROPERTY_TYPE]
      local rewardCount = reward[PROPERTY_COUNT]
      if not self.m_collectReward[rewardType] then
        self.m_collectReward[rewardType] = rewardCount
      else
        self.m_collectReward[rewardType] = self.m_collectReward[rewardType] + rewardCount
      end
    end
  end
  self.m_boardRunView.m_boardRunModel:UpdateCurrentText()
end

function TestMapExploreMapRunModel:_IsObstacleFinished(obstacle, obstacleIndex)
  local baseLuaTable = getmetatable(obstacle)
  if baseLuaTable == MapExploreCycleObstacle then
    return false
  end
  local config = obstacle:GetCodeConfig(obstacleIndex + 1)
  return config == nil
end

function TestMapExploreMapRunModel:_WaitUnlockCloud(slot)
  local listUnlockCloud = self.m_mapModel:GetSlotUnlockClouds(slot)
  if not Table.IsEmpty(listUnlockCloud) then
    Coroutine.Wait(0.5 * CSTime.timeScale)
  end
end

function TestMapExploreMapRunModel:_IsStaminaRewardObstacle(obstacle, obstacleIndex)
  local config = obstacle:GetCodeConfig(obstacleIndex)
  if not config or not config.produce then
    return false
  end
  for _, reward in ipairs(config.produce) do
    if reward[PROPERTY_TYPE] == self.m_activityDefinition.TokenProperty then
      return true
    end
  end
  return false
end
