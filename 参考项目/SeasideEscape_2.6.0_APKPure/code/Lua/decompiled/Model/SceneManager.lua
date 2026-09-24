require("Model.Activity.ActivityDefinition")
SceneManager = {}
SceneManager.__index = SceneManager
EGameMode = {
  Loading = "loading",
  Map = "map",
  Main = "main",
  Hunt = "hunt",
  NoCDTrain = "noCDTrain",
  FundMap = "fundMap",
  CloudsDash = "cloudsDash",
  FloatRace = "floatRace",
  Freefall = "freefall",
  HuntMap = "huntMap"
}

function SceneManager:Init()
  self.m_eGameMode = EGameMode.Loading
  self:_StartTick()
end

function SceneManager:OnSyncDataFinished()
  self.m_timeSpending = GM.MiscModel:GetTimeSpendingInNumber()
  self.m_loginDay = GM.MiscModel:GetLoginDayInNumber()
end

function SceneManager:SetLoggingFlag(flag)
  self._enableLoggingWhenLoadingScene = flag and flag ~= "0"
  if self._enableLoggingWhenLoadingScene then
    Log.Info("SceneManager: enable logging with flag " .. tostring(flag))
  end
end

function SceneManager:GoToLoading(callback)
  if GM.UIManager then
    GM.UIManager:OnSceneChange()
  end
  DOTween.KillAll(true)
  local log = "Loading scene " .. SceneConfigName.Loading
  if self._enableLoggingWhenLoadingScene then
    AddressableLoader.EnableLogging()
  end
  local timeStamp = MicrofunProfiler.Instance:AddLaunchTimeStamp("loadingScene")
  GM.ResourceLoader:LoadScene(SceneConfigName.Loading, SceneManagement.LoadSceneMode.Single, function()
    if callback then
      callback()
    end
    MicrofunProfiler.Instance:EndLaunchTimeStamp(timeStamp)
  end)
end

function SceneManager:AdditiveLoadTargetScene(callbackFunc)
  local function callback(scene)
    callbackFunc(true)
  end
  
  local targetSceneName = SceneConfigName.Main
  local log = "Loading scene " .. targetSceneName
  GM.ResourceLoader:LoadScene(targetSceneName, SceneManagement.LoadSceneMode.Additive, callback)
end

function SceneManager:UnloadLoading()
  local log = "Unloading " .. SceneConfigName.Loading
  GM.ResourceLoader:UnloadScene(SceneConfigName.Loading)
  self.m_bFromFeed = false
  local scene
  if MINIGAME_DOUYIN then
    local launchInfo = XyxManager.Instance:GetLaunchInfo() or "{}"
    Log.Info(tostring(launchInfo), "[DY Feed]")
    launchInfo = json.decode(launchInfo)
    scene = launchInfo.Scene
    if not StringUtil.IsNilOrEmpty(scene) then
      self.m_bFromFeed = StringUtil.EndWith(scene, "3041")
    end
  end
  if MINIGAME_WECHAT then
    local directAdStatus = XyxManager.Instance:GetDirectAdStatus() or "{}"
    Log.Info("directAdStatus:" .. tostring(directAdStatus))
  end
  if self.m_bFromFeed then
    self:ChangeGameMode(EGameMode.Main)
    GM.BIManager:LogAction(EBIType.DYFeed, scene)
  else
    self:ChangeGameMode(EGameMode.Map)
    if scene == "103040" or scene == "023040" then
      GM.BIManager:LogAction(EBIType.DYPlatform, scene)
    end
  end
  GameObjectPool.recycleEnabled = true
  AddressableLoader.DisableLogging()
  if ApplicationManager.Instance.loadingDebugMode then
    ApplicationManager.Instance:WaitForStepBreak("BaseSceneView", function()
      GM.UIManager:OpenView(UIPrefabConfigName.BaseSceneView)
      ApplicationManager.Instance:StepBreak("PopupChain")
    end)
  else
    GM.UIManager:OpenView(UIPrefabConfigName.BaseSceneView)
  end
end

function SceneManager:GetGameMode()
  return self.m_eGameMode
end

function SceneManager:IsFromFeed()
  return self.m_bFromFeed
end

function SceneManager:InEventGameMode()
  return IsEventActivityType(self.m_eGameMode)
end

function SceneManager:ChangeGameMode(targetMode)
  self:_EndTickAndLog()
  self:_StartTick()
  local oldMode = self.m_eGameMode
  self.m_eGameMode = targetMode
  if oldMode == EGameMode.Loading then
    GM.ModeViewController:OnEnterScene()
  end
  GM.ModeViewController:UpdateGameView(oldMode == EGameMode.Loading)
  EventDispatcher.DispatchEvent(EEventType.ChangeGameMode, oldMode == EGameMode.Loading)
  DelayExecuteFunc(function()
    AddressableLoader.ClearUnusedAssets(false)
  end)
  if ProjectConfig.NonUseLocalData() then
    GM.SyncModel:CheckUpload()
  end
  ItemChangeHelper.UpDateChangeStateOnEnd()
end

function SceneManager:EnterActivityMode()
  self:_EndTickAndLog()
  self:_StartTick()
end

function SceneManager:QuitActivityMode(gameMode)
  self:_EndTickAndLog(gameMode)
  self:_StartTick()
end

function SceneManager:ApplicationDidEnterBackground()
  self:_EndTickAndLog()
  self.m_bPauseTS = true
end

function SceneManager:ApplicationWillEnterForeground()
  self:_StartTick()
  self.m_bPauseTS = false
end

function SceneManager:_StartTick()
  self.m_tick = 0
end

function SceneManager:UpdatePerSecond()
  if self.m_timeSpending and not self.m_bPauseTS then
    local day = GM.GameModel:GetServerDay()
    if self.m_loginDay ~= day then
      self.m_loginDay = day
      GM.MiscModel:SetLoginDay(day)
      self.m_timeSpending = 0
    end
    self.m_timeSpending = self.m_timeSpending + 1
    if self.m_timeSpending % 60 == 0 then
      GM.MiscModel:SetTimeSpending(self.m_timeSpending)
    end
  end
  if not self.m_tick then
    return
  end
  self.m_tick = self.m_tick + 1
  if self.m_privacyTick then
    self.m_privacyTick = self.m_privacyTick + 1
  end
end

function SceneManager:_EndTickAndLog(mode)
  if not self.m_tick then
    return
  end
  if self.m_privacyTick then
    self.m_privacyDuration = self.m_privacyTick
    self.m_privacyTick = 0
  end
  local action = {
    scene = mode or self.m_eGameMode,
    duration = self.m_tick,
    p_dur = self.m_privacyDuration,
    d_size = self.m_downloadSize
  }
  local actionString = GM.BIManager:TableToString(action)
  GM.BIManager:LogAction(EBIType.SceneDuration, actionString)
  self.m_tick = nil
  self.m_privacyDuration = nil
  self.m_downloadSize = nil
end

function SceneManager:SetDownloadSize(size)
  self.m_downloadSize = size
end

function SceneManager:StartPrivacyTick()
  self.m_privacyTick = 0
end

function SceneManager:EndPrivacyTick()
  self.m_privacyDuration = self.m_privacyTick
  self.m_privacyTick = nil
end

function SceneManager:GetTimeSpending()
  return self.m_timeSpending or 0
end
