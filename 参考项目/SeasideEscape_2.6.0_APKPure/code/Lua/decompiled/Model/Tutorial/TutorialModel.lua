TutorialModel = {}
TutorialModel.__index = TutorialModel
local DBColumnState = "state"
local DBColumnOngoingDatas = "ongoingDatas"
local DBColumnStartTimes = "startTimes"

function TutorialModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.Tutorial)
  self.m_mapOngoingTutorials = {}
  EventDispatcher.AddListener(EEventType.TutorialSkip, self, self.Skip)
end

function TutorialModel:LateInit()
  self:UpdateTutorialDatas()
  if not GM.MiscModel:GetTutorialCache() and self:IsTutorialFinished(ETutorialId.Map) then
    GM.MiscModel:SetTutorialCache(1)
  end
end

function TutorialModel:OnCheckResourcesFinished()
  self.m_bOnCheckResourcesFinished = true
  self:TryToStartTutorials()
end

function TutorialModel:Destroy()
  EventDispatcher.RemoveTarget(self)
  for _, executer in pairs(self.m_mapOngoingTutorials) do
    executer:OnRemove()
  end
end

function TutorialModel:OnSceneViewLoaded()
  if self.m_mapOngoingTutorials == nil then
    return
  end
  for _, executer in pairs(self.m_mapOngoingTutorials) do
    executer:OnSceneViewLoaded()
  end
end

function TutorialModel:IsNewUser()
  return not self:IsTutorialOnGoing(ETutorialId.Beginning) and not self:IsTutorialFinished(ETutorialId.Beginning)
end

function TutorialModel:UpdateTutorialDatas()
  if self.m_mapOngoingTutorials ~= nil then
    for _, executer in pairs(self.m_mapOngoingTutorials) do
      executer:OnRemove()
    end
  end
  if self.m_mapTutorialListenEventType ~= nil then
    for type, _ in pairs(self.m_mapTutorialListenEventType) do
      EventDispatcher.RemoveListener(type, self)
    end
  end
  local arrTutorialConfigs = require("Data.Tutorial.TutorialConfig")
  self.m_mapTutorialConfigDatas = {}
  self.m_mapOngoingTutorials = {}
  self.m_mapNotStartedTutorials = {}
  self.m_mapTutorialListenEventType = {}
  local state, data, executer, mapEventType
  for i, tbData in ipairs(arrTutorialConfigs) do
    data = TutorialConfigData.Create(tbData)
    local id = data:GetTutorialId()
    self.m_mapTutorialConfigDatas[id] = data
    state = self.m_dbTable:GetValue(id, DBColumnState)
    if state == nil then
      self.m_mapNotStartedTutorials[id] = data
      mapEventType = data:GetMapSpecialEventListeners()
      if mapEventType ~= nil then
        for eventType, _ in pairs(mapEventType) do
          self.m_mapTutorialListenEventType[eventType] = true
        end
      end
    elseif state == ETutorialState.Ongoing then
      self:_StartTutorial(id)
    end
  end
  for eventType, _ in pairs(self.m_mapTutorialListenEventType) do
    local function func()
      self:TryToStartTutorials(eventType)
    end
    
    EventDispatcher.AddListener(eventType, self, func)
  end
end

function TutorialModel:IsSystemTutorialSkipOn()
  if self.m_systemTutorialSkip == nil then
    self.m_systemTutorialSkip = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.SystemTutorialSkip)
  end
  return self.m_systemTutorialSkip
end

function TutorialModel:Skip(message)
  local tutorialId = message.skipTutorialId
  if tutorialId == ETutorialId.Inventory then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
    btn.gameObject:SetActive(true)
  elseif tutorialId == ETutorialId.Map then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.MainBoard)
    btn.gameObject:SetActive(true)
  elseif tutorialId == ETutorialId.Cache then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Map)
    btn.gameObject:SetActive(true)
  elseif tutorialId == ETutorialId.Shop then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Shop)
    btn.gameObject:SetActive(true)
    btn:OnVisibleChange()
  end
  for k, executer in pairs(self.m_mapOngoingTutorials) do
    if tutorialId == executer:GetTutorialId() then
      self:SetTutorialFinished(executer:GetTutorialId())
      executer:OnRemove()
      executer:OnSkip()
      self.m_mapOngoingTutorials[k] = nil
      break
    end
  end
  if TutorialHelper.GetSceneView() then
    TutorialHelper.GetTutorialLayer():HideAll()
  end
  self:ClearTempDatas()
  self:TryToStartTutorials()
end

function TutorialModel:IsTutorialFinished(tutorialId)
  return self:_GetState(tutorialId) == ETutorialState.Finished
end

function TutorialModel:IsTutorialOnGoing(tutorialId)
  return self:_GetState(tutorialId) == ETutorialState.Ongoing
end

function TutorialModel:HasAnyStrongTutorialOngoing()
  if self.m_mapOngoingTutorials == nil then
    return false
  end
  for _, executer in pairs(self.m_mapOngoingTutorials) do
    if executer:IsInStrongTutorial() then
      return true
    end
  end
  return false
end

function TutorialModel:GetOngoingDatas(tutorialId)
  if not self:IsTutorialOnGoing(tutorialId) then
    return nil
  end
  return self:_GetOngoingDatas(tutorialId)
end

function TutorialModel:_GetState(tutorialId)
  return self.m_dbTable:GetValue(tutorialId, DBColumnState)
end

function TutorialModel:_GetOngoingDatas(tutorialId)
  return self.m_dbTable:GetValue(tutorialId, DBColumnOngoingDatas)
end

function TutorialModel:_GetStartTimes(tutorialId)
  return self.m_dbTable:GetValue(tutorialId, DBColumnStartTimes)
end

function TutorialModel:UpdateOngoingDatas(tutorialId, strOngoingDatas)
  self.m_dbTable:Set(tutorialId, DBColumnOngoingDatas, strOngoingDatas)
end

function TutorialModel:UpdateStartTimes(tutorialId, startTimes)
  self.m_dbTable:Set(tutorialId, DBColumnStartTimes, startTimes)
end

function TutorialModel:SetTutorialOngoing(tutorialId)
  self.m_dbTable:Set(tutorialId, DBColumnState, ETutorialState.Ongoing)
  self.m_dbTable:Set(tutorialId, DBColumnOngoingDatas, "")
end

function TutorialModel:SetTutorialFinished(tutorialId)
  self.m_dbTable:Set(tutorialId, DBColumnState, ETutorialState.Finished)
  self.m_dbTable:Set(tutorialId, DBColumnOngoingDatas, "")
end

function TutorialModel:GetData()
  return self.m_dbTable
end

function TutorialModel:FromSyncData(dataArr)
  self.m_dbTable:FromArr(dataArr)
end

function TutorialModel:_GetExecuterName(tutorialId)
  return self.m_mapTutorialConfigDatas[tutorialId] and self.m_mapTutorialConfigDatas[tutorialId]:GetExecuterName()
end

function TutorialModel:_GetExecuterTemplatePath(executerName)
  return "Model.Tutorial.Executer.TutorialExecuter" .. executerName
end

local function RequireErrorHandler(msg)
  Log.Error("[xpcall]require failed:" .. (msg or "nil") .. "\n" .. debug.traceback())
end

function TutorialModel:_CreateExecuter(tutorialId)
  local executerName = self:_GetExecuterName(tutorialId)
  if executerName ~= nil then
    local result, creator = xpcall(require, RequireErrorHandler, self:_GetExecuterTemplatePath(executerName))
    if result then
      return creator(tutorialId, self:_GetOngoingDatas(tutorialId), self:_GetStartTimes(tutorialId))
    else
      return nil
    end
  end
  return nil
end

function TutorialModel:TryToStartTutorials(eventType)
  if not self.m_bOnCheckResourcesFinished then
    return
  end
  for tutorialId, configData in pairs(self.m_mapNotStartedTutorials) do
    local mapEventType = configData:GetMapSpecialEventListeners()
    if (not (eventType and mapEventType) or mapEventType[eventType]) and configData:IsSatisfied() then
      self.m_mapNotStartedTutorials[tutorialId] = nil
      self:_StartTutorial(configData:GetTutorialId())
    end
  end
end

function TutorialModel:_StartTutorial(tutorialId)
  local executer = self:_CreateExecuter(tutorialId)
  if executer ~= nil then
    self.m_mapOngoingTutorials[tutorialId] = executer
    if not self:IsTutorialOnGoing(tutorialId) then
      executer:LogTutorial(TutorialExecuter.StepStart)
      self:SetTutorialOngoing(tutorialId)
    end
    executer:OnStart()
    return true
  end
  return false
end

function TutorialModel:FinishTutorial(tutorialId)
  local executer = self.m_mapOngoingTutorials and self.m_mapOngoingTutorials[tutorialId]
  if executer == nil then
    executer = self.m_mapNotStartedTutorials and self.m_mapNotStartedTutorials[tutorialId]
    self.m_mapNotStartedTutorials[tutorialId] = nil
  else
    executer:OnRemove()
    self.m_mapOngoingTutorials[tutorialId] = nil
  end
  if executer then
    self:SetTutorialFinished(tutorialId)
    self:TryToStartTutorials()
    EventDispatcher.DispatchEvent(EEventType.TutorialFinished, {id = tutorialId})
  end
  if tutorialId == "tutorial_6" then
    if MINIGAME then
      CSPlatform:Attr_TrackEvent(AttrEventEnum.TutorialFinish)
    end
    CSPlatform:SDK_TrackEvent("tutorial_complete", "")
  end
end

function TutorialModel:ClearTempDatas()
  self:SetForceSourceBoardPosition()
  self:SetForceTargetBoardPosition()
  self:SetForceSpreadItemCode()
  self:SetForceSkipCost()
  self:SetForceUnlockBubbleCost()
end

function TutorialModel:SetForceSourceBoardPosition(boardPos)
  self.m_sourceBoardPos = boardPos
end

function TutorialModel:GetForceSourceBoardPosition()
  return self.m_sourceBoardPos
end

function TutorialModel:SetForceTargetBoardPosition(boardPos)
  self.m_targetBoardPos = boardPos
end

function TutorialModel:GetForceTargetBoardPosition()
  return self.m_targetBoardPos
end

function TutorialModel:SetForceSpreadItemCode(code)
  self.m_spreadItemCode = code
end

function TutorialModel:GetForceSpreadItemCode()
  return self.m_spreadItemCode
end

function TutorialModel:SetForceSkipCost(cost)
  self.m_skipCost = cost
end

function TutorialModel:GetForceSkipCost()
  return self.m_skipCost
end

function TutorialModel:SetForceUnlockBubbleCost(cost)
  self.m_bubbleUnlockCost = cost
end

function TutorialModel:GetForceUnlockBubbleCost()
  return self.m_bubbleUnlockCost
end

function TutorialModel:GetShopForceOpenTab()
  return self.m_shopTab
end

function TutorialModel:SetShopForceOpenTab(tab)
  self.m_shopTab = tab
end

function TutorialModel:TestFinishTutorial(tutorialId)
  if not GameConfig.IsTestMode() then
    return false
  end
  if tutorialId == ETutorialId.Inventory then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
    btn.gameObject:SetActive(true)
  elseif tutorialId == ETutorialId.Map then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.MainBoard)
    btn.gameObject:SetActive(true)
    GM.MapLayer:SetInputEnable(true, true)
  elseif tutorialId == ETutorialId.Cache then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Map)
    btn.gameObject:SetActive(true)
  elseif tutorialId == ETutorialId.Shop then
    local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Shop)
    btn.gameObject:SetActive(true)
    btn:OnVisibleChange()
  end
  for k, data in pairs(self.m_mapNotStartedTutorials) do
    if tutorialId == data:GetTutorialId() then
      self:SetTutorialFinished(data:GetTutorialId())
      self.m_mapNotStartedTutorials[k] = nil
      return true
    end
  end
  for k, executer in pairs(self.m_mapOngoingTutorials) do
    if tutorialId == executer:GetTutorialId() then
      self:SetTutorialFinished(executer:GetTutorialId())
      executer:OnRemove()
      self.m_mapOngoingTutorials[k] = nil
      return true
    end
  end
  return false
end

function TutorialModel:TestFinishAllTutorials()
  if not GameConfig.IsTestMode() then
    return false
  end
  local arrTutorialConfigs = require("Data.Tutorial.TutorialConfig")
  for _, config in ipairs(arrTutorialConfigs) do
    self:SetTutorialFinished(config.id)
  end
  self.m_mapNotStartedTutorials = {}
  self.m_mapOngoingTutorials = {}
end

function TutorialModel:SetMainTutorialFinished()
  local arrTutorialConfigs = require("Data.Tutorial.TutorialConfig")
  for _, config in ipairs(arrTutorialConfigs) do
    local id = config.id
    if id == ETutorialId.CG or id == ETutorialId.StartInMap or id == ETutorialId.UpgradeBuilding or tonumber(string.sub(id, 10)) ~= nil then
      self:SetTutorialFinished(id)
    end
  end
end
