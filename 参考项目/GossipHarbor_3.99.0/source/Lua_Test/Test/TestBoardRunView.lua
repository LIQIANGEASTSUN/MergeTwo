local TestBoardRunActivity = {
  Dig = {
    modelName = "TestMineralDigBoardRunModel"
  },
  Adventure = {
    modelName = "TestAdventureBoardRunModel"
  },
  Multiboards = {
    modelName = "TestMultiboardsBoardRunModel"
  },
  Farm = {
    modelName = "TestFarmBoardRunModel"
  },
  Stickerboard = {
    modelName = "TestStickerboardBoardRunModel"
  },
  MapExplore = {
    modelName = "TestMapExploreBoardRunModel",
    mapRunModelName = "TestMapExploreMapRunModel"
  },
  Pureboard = {
    modelName = "TestPureboardBoardRunModel"
  }
}
TestBoardRunView = {}
TestBoardRunView.__index = TestBoardRunView

function TestBoardRunView:Init()
  local options = CS.System.Collections.Generic.List(CS.System.String)()
  for activity, _ in pairs(TestBoardRunActivity) do
    options:Add(activity)
  end
  options:Sort()
  self.m_activityDropdownOptions = options
  self.m_activityDropdown:AddOptions(options)
  
  function self.m_backgroundEventTrigger.OnLuaPointerDown(eventData)
    self:_OnPointerDown(eventData)
  end
  
  function self.m_backgroundEventTrigger.OnLuaDrag(eventData)
    self:_OnDrag(eventData)
  end
  
  self.m_loopToggle.isOn = false
  self.m_activity = self.m_activityDropdown.captionText.text
  self.m_probability = math.floor(self.m_probabilitySlider.value)
  self.m_collectProbability = 100
  self.m_bCacheFirst = false
  self.m_bLoop = false
  self.m_loopCount = 0
  self:SetCollectProbability(self.m_collectProbability)
  self.m_oriBackgroundPos = self.m_BackgroundRectTrans.localPosition
  self:SetFoldout(false)
  PlayerPrefs.SetInt(EPlayerPrefKey.TestIgnoreTutorial, 1)
  self:_TestFinishTutorials()
  PlayerPrefs.SetInt(EPlayerPrefKey.TestCloseAutoPopup, 1)
  local sequence = DOTween.Sequence()
  sequence:Append(self.m_arrowRectTrans:DOLocalMoveY(5, 0.8))
  sequence:Append(self.m_arrowRectTrans:DOLocalMoveY(0, 0.8))
  sequence:SetLoops(-1)
  
  function self.m_logCallback(message, stackTrace, type)
    self:_LogCallback(message, stackTrace, type)
  end
  
  self.m_mapProbability = 0
  self.m_hasMapRunModel = false
  self.m_mapRunFinished = false
  self.m_bMapExploreHasBoard = true
  self.m_mapOnly = false
  self.m_mapCollectToken = false
  if self.m_mapOnlyToggle then
    self.m_mapOnlyToggle.isOn = self.m_mapOnly
  end
  if self.m_mapCollectTokenToggle then
    self.m_mapCollectTokenToggle.isOn = self.m_mapCollectToken
  end
  self.m_mapDigCycleCount = 10
  if self.m_mapDigCycleCountSlider then
    self.m_mapDigCycleCountSlider.value = self.m_mapDigCycleCount
  end
  self.m_loopSettingIndex = 0
  self.m_loopSettingRunCount = 0
  self.m_showMergeLineLog = false
end

function TestBoardRunView:OnDestroy()
  self:Stop()
  PlayerPrefs.SetInt(EPlayerPrefKey.TestIgnoreTutorial, 0)
  PlayerPrefs.SetInt(EPlayerPrefKey.TestCloseAutoPopup, 0)
end

function TestBoardRunView:OnStartButtonClicked()
  self:StartBoardRun()
end

function TestBoardRunView:Update()
  if GM.UIManager:IsEventLock() or GM.UIManager.isMaskVisible then
    return
  end
  if self.m_coroutine ~= nil then
    if self.m_boardEventCoroutine == nil then
      local boardEventFunc = self.m_boardRunModel:_BoardEvent()
      if boardEventFunc then
        self.m_boardEventCoroutine = coroutine.create(function()
          boardEventFunc()
        end)
      end
    end
    if self.m_boardEventCoroutine ~= nil then
      coroutine.resume(self.m_boardEventCoroutine)
      return
    end
    coroutine.resume(self.m_coroutine)
    return
  end
  if self.m_finish and self.m_bLoop and not self.m_error then
    self.m_finish = false
    self:StartLoopRun()
    return
  end
end

function TestBoardRunView:StartBoardRun()
  if self.m_bLoop then
    self.m_loopCount = self.m_loopCount + 1
    self.m_loopCountText.text = "\231\172\172" .. self.m_loopCount .. "\230\172\161"
  end
  local activityModel, definition
  if self.m_activity == "Adventure" then
    activityModel, definition = GM.ActivityManager:GetStartedAdventure()
  elseif self.m_activity == "Multiboards" then
    activityModel, definition = GM.ActivityManager:GetStartedMultiboards()
  elseif self.m_activity == "Farm" then
    activityModel, definition = GM.ActivityManager:GetStartedFarmboardActivity()
  elseif self.m_activity == "Stickerboard" then
    activityModel, definition = GM.ActivityManager:GetStartedStickerboardActivity()
  elseif self.m_activity == "Dig" then
    activityModel, definition = GM.ActivityManager:GetStartedActivityByDefinition(DigActivityDefinition)
  elseif self.m_activity == "MapExplore" then
    activityModel, definition = GM.ActivityManager:GetStartedActivityByDefinition(MapExploreActivityDefinition)
  elseif self.m_activity == "Pureboard" then
    activityModel, definition = GM.ActivityManager:GetStartedActivityByDefinition(PureBoardActivityDefinition)
  else
    activityModel, definition = GM.ActivityManager:GetModel(self.m_activity)
  end
  if not activityModel or activityModel:GetState() ~= ActivityState.Started then
    GM.UIManager:ShowPrompt("\230\180\187\229\138\168\230\156\170\229\188\128\229\144\175")
    return
  end
  self.m_activityModel = activityModel
  self.m_activityDefinition = definition or self.m_activityModel.GetDefinition and self.m_activityModel:GetDefinition() or self.m_activityModel.m_activityDefinition or TestBoardRunActivity[self.m_activity].definition
  self.m_activityType = self.m_activityModel:GetType()
  local boardRunModel = _ENV[TestBoardRunActivity[self.m_activity].modelName]
  if not boardRunModel then
    GM.UIManager:ShowPrompt("\229\189\147\229\137\141\230\180\187\229\138\168\230\178\161\230\156\137\230\148\175\230\140\129\230\163\139\231\155\152\232\135\170\229\138\168\232\183\145")
    return
  end
  self.m_boardRunModel = boardRunModel:Init(self, self.m_activityModel, self.m_activityDefinition, self.m_probability)
  if TestBoardRunActivity[self.m_activity].mapRunModelName then
    local mapRunModel = _ENV[TestBoardRunActivity[self.m_activity].mapRunModelName]
    if not mapRunModel then
      GM.UIManager:ShowPrompt("\229\189\147\229\137\141\230\180\187\229\138\168\230\178\161\230\156\137\230\148\175\230\140\129\229\156\176\229\155\190\232\135\170\229\138\168\232\183\145")
      return
    end
    self.m_hasMapRunModel = true
    self.m_mapRunModel = mapRunModel:Init(self, self.m_activityModel, self.m_activityDefinition)
    local boardModel = self.m_activityModel:GetBoardModel()
    if not boardModel then
      self.m_bMapExploreHasBoard = false
    end
  end
  self:ProcessLoopSettings()
  self:SetButtonInteractable(false)
  self.m_coroutine = coroutine.create(function()
    self:_BoardRun()
  end)
end

function TestBoardRunView:_BoardRun()
  Application.logMessageReceived("+", self.m_logCallback)
  self.m_bPaused = false
  self.m_finish = false
  self.m_error = false
  self:TryOpenActivityWindow()
  self.m_mapRunFinished = false
  self.m_boardRunFinished = false
  self.m_lastScene = self.m_activityDefinition.MainWindowPrefabName
  self.m_lastSceneActionCount = 0
  while not self.m_finish do
    if self.m_hasMapRunModel then
      self:_SwitchToMapOrBoard()
    else
      self.m_boardRunModel:_BoardAction()
    end
  end
  self:Stop()
end

function TestBoardRunView:_SwitchToMapOrBoard()
  local topWindow = GM.UIManager:GetOpenedTopView()
  local shouldGoToMap
  if not self.m_bMapExploreHasBoard then
    shouldGoToMap = true
  elseif self.m_mapOnly then
    shouldGoToMap = true
  elseif self.m_boardRunFinished then
    shouldGoToMap = true
  elseif self.m_lastScene == self.m_activityDefinition.BoardWindowPrefabName and self.m_boardRunModel.m_lastNoActionTimes > 0 then
    shouldGoToMap = true
  elseif self.m_mapRunFinished then
    shouldGoToMap = false
  elseif self.m_lastSceneActionCount < 20 and self.m_lastScene then
    shouldGoToMap = self.m_lastScene == self.m_activityDefinition.MainWindowPrefabName
  else
    shouldGoToMap = math.random(100) < 80
  end
  if shouldGoToMap then
    if topWindow.name == self.m_activityDefinition.BoardWindowPrefabName then
      topWindow:OnCloseBtnClick()
      Coroutine.Wait(2 + CSTime.timeScale)
    end
    self.m_mapRunModel:_MapAction()
  else
    if topWindow.name == self.m_activityDefinition.MainWindowPrefabName then
      topWindow:OnBoardButtonClicked()
      Coroutine.Wait(2 + CSTime.timeScale)
    end
    self.m_boardRunModel:_BoardAction()
  end
  topWindow = GM.UIManager:GetOpenedTopView()
  if topWindow.name ~= self.m_lastScene then
    self.m_lastScene = topWindow.name
    self.m_lastSceneActionCount = 0
  else
    self.m_lastSceneActionCount = self.m_lastSceneActionCount + 1
  end
end

function TestBoardRunView:SetButtonInteractable(interactable)
  self.m_startButton.interactable = interactable
  self.m_activityDropdown.interactable = interactable
  self.m_pauseButton.interactable = not interactable
end

function TestBoardRunView:StartLoopRun()
  local activityType = self.m_activityModel:GetType()
  local config = GM.ConfigModel.m_serverConfigs[activityType]
  SafeCall(function()
    if self.m_activityModel then
      self.m_startButton.interactable = false
      GM.ConfigModel.m_serverConfigs[activityType] = {}
      self.m_activityModel:LoadServerConfig()
      GM.ConfigModel.m_serverConfigs[activityType] = config
      self.m_activityModel:LoadServerConfig()
      Log.Info("[\229\188\186\229\136\182\230\191\128\230\180\187\230\180\187\229\138\168]\230\191\128\230\180\187\230\136\144\229\138\159\239\188\154\230\180\187\229\138\168\229\144\141\231\167\176 = " .. activityType, nil, "#98FB98")
      DelayExecuteFunc(function()
        self:StartBoardRun()
      end, 3 + CSTime.timeScale)
    end
  end, function()
    GM.ConfigModel.m_serverConfigs[activityType] = config
    Log.Error("[\229\188\186\229\136\182\230\191\128\230\180\187\230\180\187\229\138\168]\230\191\128\230\180\187\229\164\177\232\180\165\239\188\154\230\180\187\229\138\168\229\144\141\231\167\176 = " .. activityType)
  end)
end

function TestBoardRunView:ProcessLoopSettings()
  if not self.m_bLoop then
    return
  end
  if self.m_loopSettingIndex == 0 then
    local loopSetting = PlayerPrefs.GetString("TestBoardRunLoopSetting")
    local loopSettingJson = json.decode(loopSetting)
    if loopSettingJson and 0 < #loopSettingJson then
      self.m_loopSettings = loopSettingJson
      self.m_loopSettingIndex = 1
      self.m_loopSettingRunCount = 1
    else
      return
    end
  else
    self.m_loopSettingRunCount = self.m_loopSettingRunCount + 1
  end
  local currentSetting = self.m_loopSettings[self.m_loopSettingIndex]
  if currentSetting and self.m_loopSettingRunCount > tonumber(currentSetting.count) then
    self.m_loopSettingIndex = self.m_loopSettingIndex + 1
    if self.m_loopSettingIndex > #self.m_loopSettings then
      self.m_loopSettingIndex = 1
    end
    self.m_loopSettingRunCount = 1
    currentSetting = self.m_loopSettings[self.m_loopSettingIndex]
  end
  if currentSetting then
    self:SetProbabilityAndCache(tonumber(currentSetting.probability), currentSetting.bCacheFirst, tonumber(currentSetting.collectProbability) or 100)
  end
end

function TestBoardRunView:TryOpenActivityWindow()
  local curTopWindow = GM.UIManager:GetOpenedTopView()
  if curTopWindow.name == self.m_activityDefinition.MainWindowPrefabName then
    return
  end
  local lastWindowName
  while curTopWindow.name ~= "BaseSceneView" and curTopWindow.name ~= self.m_activityDefinition.MainWindowPrefabName and curTopWindow.name ~= lastWindowName do
    curTopWindow:Close()
    Coroutine.Wait(1 + CSTime.timeScale)
    lastWindowName = curTopWindow.name
    curTopWindow = GM.UIManager:GetOpenedTopView()
  end
  if curTopWindow.name == "BaseSceneView" and GM.SceneManager:GetGameMode() == EGameMode.Map then
    local hudButtonKey = self.m_activityModel:GetHudEntryShowConfig().EntryButtonKey
    local sceneView = GM.UIManager:GetOpenedTopViewByType(EViewType.SceneView)
    local hubButton = sceneView:GetHudButton(hudButtonKey)
    if hubButton ~= nil then
      local luaTable = hubButton.gameObject:GetLuaTable()
      if luaTable then
        luaTable:OnClicked()
        Coroutine.Wait(3 * CSTime.timeScale)
      end
    end
  elseif curTopWindow.name == "BaseSceneView" and GM.SceneManager:GetGameMode() == EGameMode.Main then
    local boardView = MainBoardView.GetInstance()
    local orderArea = boardView:GetOrderArea()
    local cell = orderArea:GetActivityBubble(self.m_activityType)
    if cell ~= nil then
      local luaTable = cell.gameObject:GetLuaTable()
      if luaTable then
        luaTable:OnMaskClicked()
        Coroutine.Wait(3 * CSTime.timeScale)
      end
    end
  end
  curTopWindow = GM.UIManager:GetOpenedTopView()
  if curTopWindow.name ~= self.m_activityDefinition.MainWindowPrefabName then
    GM.UIManager:ShowPrompt("\232\175\183\230\137\147\229\188\128\230\180\187\229\138\168\228\184\187\231\149\140\233\157\162")
    self:Error("\232\175\183\230\137\147\229\188\128\230\180\187\229\138\168\228\184\187\231\149\140\233\157\162")
    return
  end
end

function TestBoardRunView:Stop()
  Application.logMessageReceived("-", self.m_logCallback)
  self.m_coroutine = nil
  self.m_boardEventCoroutine = nil
  self:SetButtonInteractable(true)
  EventDispatcher.RemoveTarget(self.m_boardRunModel)
  self.m_boardRunModel = nil
  self.m_mapRunModel = nil
end

function TestBoardRunView:Error(msg)
  local endLog = "Error!!!" .. msg
  Log.Error(endLog)
  self:AddLog(endLog)
  self.m_error = true
  self.m_finish = true
  self:Stop()
end

function TestBoardRunView:Pause()
  if self.m_bPaused then
    if self.m_coroutine then
      self.m_coroutine = nil
    end
  else
    self.m_coroutine = coroutine.create(function()
      self:_BoardRun()
    end)
  end
end

function TestBoardRunView:EndLog(msg)
  self:AddLog(msg)
  self.m_finish = true
end

function TestBoardRunView:_LogCallback(message, stackTrace, type)
  if type == CS.UnityEngine.LogType.Log or type == CS.UnityEngine.LogType.Warning then
    return
  end
  local data = "Stack Trace: \n" .. message .. "\n" .. stackTrace
  self:Error(data)
end

function TestBoardRunView:AddLog(log)
  if not self.m_activityType then
    return
  end
  local allLog = PlayerPrefs.GetString("TestBoardRunLog")
  local allLogJson = json.decode(allLog)
  allLogJson = allLogJson or {}
  local localTime = TimeUtil.ToDate(TimeUtil.GetTimeInSecond(), ETimeFormat.YMDHMS)
  local loopStatus = self.m_loopCount > 0 and self.m_loopCount or "\230\156\170\229\190\170\231\142\175"
  local runningLogText = self.m_currentText.text
  if self.m_boardRunModel and self.m_boardRunModel.GetFullLogText then
    runningLogText = self.m_boardRunModel:GetFullLogText()
  end
  log = StringUtil.Format("%s   |   \230\180\187\229\138\168\239\188\154%s\n\229\190\170\231\142\175\230\172\161\230\149\176\239\188\154%s  |  \232\155\155\231\189\145\230\163\139\229\173\144\230\166\130\231\142\135\239\188\154%d%%  |  \229\143\170\230\148\182\233\155\134\233\161\182\231\186\167\230\163\139\229\173\144\230\166\130\231\142\135\239\188\154%d%%  |  \228\188\152\229\133\136\233\135\138\230\148\190\239\188\154%s\n\227\128\144\232\191\144\232\161\140\230\151\165\229\191\151\227\128\145%s\n\227\128\144\231\187\147\230\157\159\230\151\165\229\191\151\227\128\145%s", localTime, self.m_activityType, loopStatus, self.m_probability, self.m_collectProbability, tostring(self.m_bCacheFirst), runningLogText, log)
  local activityLog = allLogJson[self.m_activityType] or {}
  activityLog[#activityLog + 1] = log
  allLogJson[self.m_activityType] = activityLog
  PlayerPrefs.SetString("TestBoardRunLog", json.encode(allLogJson))
end

function TestBoardRunView:_OnPointerDown(eventData)
  self.m_bMoved = false
  self.m_offset = GM.UIManager.camera:ScreenToWorldPoint(Vector3(eventData.position.x, eventData.position.y, GM.UIManager.camera.farClipPlane)) - self.m_BackgroundRectTrans.position
end

function TestBoardRunView:_OnDrag(eventData)
  if not self.m_offset then
    return
  end
  self.m_bMoved = true
  local pos = GM.UIManager.camera:ScreenToWorldPoint(Vector3(eventData.position.x, eventData.position.y, GM.UIManager.camera.farClipPlane)) - self.m_offset
  self.m_BackgroundRectTrans.position = Vector3(self.m_BackgroundRectTrans.position.x, pos.y, self.m_BackgroundRectTrans.position.z)
end

function TestBoardRunView:SetFoldout(foldout, needAni)
  self.m_foldout = foldout
  UIUtil.SetLocalScale(self.m_ButtonRectTrans, 2, foldout and 2 or -2, 2)
  if self.m_foldoutAni then
    self.m_foldoutAni:Kill()
  end
  self.m_foldoutAni = self.m_BackgroundRectTrans:DOLocalMove(foldout and self.m_oriBackgroundPos + Vector3(0, 250, 0) or self.m_oriBackgroundPos, needAni and 0.3 or 0)
end

function TestBoardRunView:SetCurrentText(text)
  self.m_currentText.text = text
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_BackgroundRectTrans)
end

function TestBoardRunView:OnProbabilityChanged()
  self:SetProbabilityAndCache(math.floor(self.m_probabilitySlider.value), self.m_bCacheFirst)
end

function TestBoardRunView:OnMapProbabilityChanged()
  self:SetMapProbability(math.floor(self.m_mapProbabilitySlider.value))
end

function TestBoardRunView:OnCollectProbabilityChanged()
  self:SetCollectProbability(math.floor(self.m_collectProbabilitySlider.value))
end

function TestBoardRunView:OnMapOnlyToggleClick()
  self.m_mapOnly = self.m_mapOnlyToggle.isOn
end

function TestBoardRunView:OnMapCollectTokenToggleClick()
  self.m_mapCollectToken = self.m_mapCollectTokenToggle.isOn
end

function TestBoardRunView:OnMapDigCycleCountChanged()
  if self.m_mapDigCycleCountSlider then
    self.m_mapDigCycleCount = math.floor(self.m_mapDigCycleCountSlider.value)
  end
  if self.m_mapDigCycleCountText then
    self.m_mapDigCycleCountText.text = "\230\140\150\229\156\176\229\155\190\230\151\160\233\153\144\231\159\191\231\154\132\230\172\161\230\149\176\239\188\154" .. self.m_mapDigCycleCount
  end
end

function TestBoardRunView:OnExitButtonClicked()
  self:Stop()
  self.gameObject:RemoveSelf()
end

function TestBoardRunView:OnLoopToggleClick()
  self.m_bLoop = self.m_loopToggle.isOn
end

function TestBoardRunView:OnActivitySelected()
  local chooseActivity = self.m_activityDropdown.captionText.text
  if self.m_activity ~= chooseActivity and chooseActivity == "MapExplore" then
    self.m_mapSettingGo:SetActive(true)
  elseif self.m_activity == "MapExplore" and chooseActivity ~= "MapExplore" then
    self.m_mapSettingGo:SetActive(false)
  end
  self.m_activity = chooseActivity
end

function TestBoardRunView:OnPauseButtonClicked()
  if self.m_bPaused ~= nil then
    self.m_bPaused = not self.m_bPaused
    self:Pause()
    self.m_pauseButtonText.text = self.m_bPaused and "\229\144\175\229\138\168" or "\230\154\130\229\129\156"
  end
end

function TestBoardRunView:OnOldLogButtonClicked()
  local dropdownValue = self.m_activityDropdown.value
  GM.UIManager:OpenView(UIPrefabConfigName.TestBoardRunLogWindow, self.m_activityType)
end

function TestBoardRunView:OnFoldoutClick()
  self:SetFoldout(not self.m_foldout, true)
end

function TestBoardRunView:OnMergeLineLogFoldoutClick()
  if self.m_showMergeLineLog then
    self.m_mergeLineLogFoldoutBtnText.text = "\229\177\149\229\188\128\229\144\136\230\136\144\231\186\191\230\151\165\229\191\151"
  else
    self.m_mergeLineLogFoldoutBtnText.text = "\230\138\152\229\143\160\229\144\136\230\136\144\231\186\191\230\151\165\229\191\151"
  end
  self.m_showMergeLineLog = not self.m_showMergeLineLog
  if self.m_boardRunModel and self.m_boardRunModel.UpdateCurrentText then
    self.m_boardRunModel:UpdateCurrentText()
  end
end

function TestBoardRunView:OnCacheToggleClick()
  self.m_bCacheFirst = self.m_cacheToggle.isOn
end

function TestBoardRunView:OnSkipButtonClicked()
  local msg = "\230\156\172\230\172\161\232\183\179\232\191\135"
  self:EndLog(msg)
end

function TestBoardRunView:OnLoopSettingButtonClicked()
  local defaultProbability = self.m_probability
  local defaultBCacheFirst = self.m_bCacheFirst
  local defaultCollectProbability = self.m_collectProbability
  GM.UIManager:OpenView(UIPrefabConfigName.TestBoardRunLoopSettingWindow, defaultProbability, defaultBCacheFirst, defaultCollectProbability, self)
end

function TestBoardRunView:SetProbabilityAndCache(probability, bCacheFirst, collectProbability)
  self.m_probability = probability
  self.m_bCacheFirst = bCacheFirst
  self.m_collectProbability = collectProbability or self.m_collectProbability or 100
  self.m_probabilitySlider.value = self.m_probability
  self.m_probabilityText.text = "\232\155\155\231\189\145\230\163\139\229\173\144\230\166\130\231\142\135\239\188\154" .. self.m_probability .. "%"
  self.m_cacheToggle.isOn = self.m_bCacheFirst
  self:SetCollectProbability(self.m_collectProbability)
end

function TestBoardRunView:SetMapProbability(probability)
  self.m_mapProbability = probability
  self.m_mapProbabilitySlider.value = self.m_mapProbability
  self.m_mapProbabilityText.text = "\229\156\176\229\155\190\228\184\187\231\186\191\230\166\130\231\142\135\239\188\154" .. self.m_mapProbability .. "%"
end

function TestBoardRunView:SetCollectProbability(probability)
  self.m_collectProbability = probability
  self.m_collectProbabilitySlider.value = self.m_collectProbability
  self.m_collectProbabilityText.text = "\229\143\170\230\148\182\233\155\134\233\161\182\231\186\167\230\163\139\229\173\144\230\166\130\231\142\135\239\188\154" .. self.m_collectProbability .. "%"
end

function TestBoardRunView:_TestFinishTutorials()
  local arrTutorialConfigs = require("Data.Tutorial.TutorialConfig")
  local tutorialModel = GM.TutorialModel
  local tutorialId
  for i, config in ipairs(arrTutorialConfigs) do
    tutorialId = config.id
    tutorialModel:TestFinishTutorial(tutorialId)
  end
  if TutorialHelper.GetSceneView() then
    TutorialHelper.GetTutorialLayer():HideAll()
  end
  GM.TutorialModel:ClearTempDatas()
end

TestBaseBoardRunModel = {}
TestBaseBoardRunModel.__index = TestBaseBoardRunModel

function TestBaseBoardRunModel:Init(boardRunView, activityModel, activityDefinition, probability)
  self.m_boardRunView = boardRunView
  self.m_activityModel = activityModel
  self.m_activityDefinition = activityDefinition
  self.m_collectReward = {}
  self.m_lastNoActionTimes = 0
  self.m_swallowCmps = {}
  self.m_mergeCount = 0
  self.m_currentLog = "\230\182\136\232\128\151\231\167\175\229\136\134\239\188\1540\239\188\155\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154{}"
  self.m_mainMergeLineChanId = nil
  self.m_deputyMergeLineChanId = nil
  self.m_mainMergeLineLevel = nil
  self.m_deputyMergeLineLevel = nil
  self.m_mainMergeLineLog = nil
  self.m_deputyMergeLineLog = nil
  local boardModel = self.m_activityModel:GetBoardModel()
  if not boardModel then
    return
  end
  local itemBookModel = boardModel:GetItemIllustratedBook()
  local configs = itemBookModel and itemBookModel.m_configs
  if configs then
    for _, config in pairs(configs) do
      if config.index == 1 then
        local chainId = config.chainID[1]
        self.m_mainMergeLineChanId = chainId
        local itemCode = GM.ItemDataModel:GetTypeByChainAndLevel(chainId, 1)
        self.m_mainMergeLineLevel = itemBookModel:GetChainProgress(itemCode)
      elseif config.index == 2 then
        local chainId = config.chainID[1]
        self.m_deputyMergeLineChanId = chainId
        local itemCode = GM.ItemDataModel:GetTypeByChainAndLevel(chainId, 1)
        self.m_deputyMergeLineLevel = itemBookModel:GetChainProgress(itemCode)
      end
    end
  end
  EventDispatcher.AddListener(EEventType.ItemMerged, self, self._OnItemMerged)
  EventDispatcher.AddListener(EEventType.ItemSpread, self, self._OnItemSpread)
  EventDispatcher.AddListener(EEventType.PaperboxDisappear, self, self._OnPaperboxDisappear)
  return self
end

function TestBaseBoardRunModel:_OnItemMerged(message)
  self:_OnUpdateContent(message)
end

function TestBaseBoardRunModel:_OnItemSpread(message)
  self:_OnUpdateContent(message)
end

function TestBaseBoardRunModel:_OnUpdateContent(message)
  if message.New then
    local itemType = message.New:GetType()
    local itemChainId = GM.ItemDataModel:GetChainId(itemType)
    local curLevel = GM.ItemDataModel:GetChainLevel(itemType)
    if itemChainId == self.m_mainMergeLineChanId then
      if curLevel > self.m_mainMergeLineLevel then
        self.m_mainMergeLineLevel = curLevel
        local logStr = StringUtil.Format("%s : %s", itemType, self.m_currentLog)
        self.m_mainMergeLineLog = StringUtil.Format([[
%s
%s]], self.m_mainMergeLineLog or "", logStr)
        self:UpdateCurrentText()
      end
    elseif itemChainId == self.m_deputyMergeLineChanId and curLevel > self.m_deputyMergeLineLevel then
      self.m_deputyMergeLineLevel = curLevel
      local logStr = StringUtil.Format("\229\137\175\231\186\191 %s : %s", itemType, self.m_currentLog)
      self.m_deputyMergeLineLog = StringUtil.Format([[
%s
%s]], self.m_deputyMergeLineLog or "", logStr)
      self:UpdateCurrentText()
    end
  end
end

function TestBaseBoardRunModel:_OnPaperboxDisappear(message)
  if message.Source then
    local itemModel = message.Source
    local itemType = itemModel:GetType()
    local pos = itemModel:GetPosition()
    local boardModel = BoardModelHelper.GetActiveModel()
    if boardModel then
      local reward = boardModel:GetPaperBoxExtraReward(pos)
      if reward then
        self.m_collectPaperBoxExtraReward = true
      end
    end
  end
end

function TestBaseBoardRunModel:UpdateCurrentText(text)
  if text ~= nil then
    self.m_currentLog = text
  end
  local finalText = self.m_currentLog or ""
  if self.m_boardRunView and self.m_boardRunView.m_showMergeLineLog then
    finalText = self:GetFullLogText()
  end
  self.m_boardRunView:SetCurrentText(finalText)
end

function TestBaseBoardRunModel:GetFullLogText()
  local currentLog = self.m_currentLog or ""
  local mergeLineLog = self:_GetMergeLineLogText()
  return currentLog .. mergeLineLog
end

function TestBaseBoardRunModel:_GetMergeLineLogText()
  local mainLogStr = ""
  if self.m_mainMergeLineLog and self.m_mainMergeLineLog ~= "" then
    mainLogStr = StringUtil.Format("<size=30><color=#FFA500>%s</color></size>", self.m_mainMergeLineLog)
  end
  local deputyLogStr = ""
  if self.m_deputyMergeLineLog and self.m_deputyMergeLineLog ~= "" then
    deputyLogStr = StringUtil.Format("<size=30><color=#00C0C0>%s</color></size>", self.m_deputyMergeLineLog)
  end
  return mainLogStr .. deputyLogStr
end

function TestBaseBoardRunModel:_BoardAction()
  local boardModel, boardView = BoardModelHelper.GetActiveModel()
  local mergePair, spreadCmp, topCollectCmp, normalCollectCmp, swallowPair
  local commandCmps = {}
  self:InitExtendedComponents()
  local mergePair = self:FindMergePair()
  local emptyPositionNum = 0
  for position in boardModel:GetValidPositionIterator() do
    if boardModel:IsPositionInteractable(position) then
      local item = boardModel:GetItem(position)
      if item ~= nil then
        local curSpreadCmp = item:GetComponent(ItemSpread)
        if curSpreadCmp ~= nil and self:canSpread(curSpreadCmp) and (spreadCmp == nil or spreadCmp:GetItemModel():GetMergedType() ~= nil and item:GetMergedType() == nil) then
          spreadCmp = curSpreadCmp
        end
        local curCollectCmp = item:GetComponent(ItemCollectable)
        if curCollectCmp ~= nil then
          if item:GetMergedType() == nil then
            if topCollectCmp == nil then
              topCollectCmp = curCollectCmp
            end
          elseif normalCollectCmp == nil then
            normalCollectCmp = curCollectCmp
          end
        end
        local curSwallowCmp = item:GetComponent(ItemSwallow)
        if curSwallowCmp ~= nil and curSwallowCmp:AllowTap() and not Table.ListContain(self.m_swallowCmps, curSwallowCmp) then
          table.insert(self.m_swallowCmps, curSwallowCmp)
        end
        if 0 < #self.m_swallowCmps then
          for _, swallowCmp in ipairs(self.m_swallowCmps) do
            if swallowCmp:CanSwallow(item) and swallowPair == nil then
              swallowPair = {swallowCmp = swallowCmp, targetItem = item}
            end
          end
        end
        local curCommandCmp = item:GetComponent(ItemCommand)
        if curCommandCmp then
          local commandType = curCommandCmp:GetCommand()
          if commandType ~= ItemCommandOperation.FarmboardActivateAnimal or not self.m_activityModel:CanAnimalProduce() then
            table.insert(commandCmps, curCommandCmp)
          end
        end
        self:CollectExtendedComponents(item)
      else
        emptyPositionNum = emptyPositionNum + 1
      end
    end
  end
  local actionTable = {
    {
      type = "merge",
      value = mergePair,
      Weight = 30
    },
    {
      type = "swallow",
      value = swallowPair,
      Weight = 10
    },
    {
      type = "command",
      value = Table.ListRandomSelectOne(commandCmps),
      Weight = 10
    }
  }
  if emptyPositionNum ~= 0 then
    local cacheCount = boardModel:GetCachedItemCount()
    if 0 < cacheCount then
      local weight = self.m_boardRunView.m_bCacheFirst and 1000 or 10
      table.insert(actionTable, {
        type = "cache",
        value = cacheCount,
        Weight = weight
      })
    end
    table.insert(actionTable, {
      type = "spread",
      value = spreadCmp,
      Weight = 10
    })
  end
  local collectCmp = topCollectCmp
  if collectCmp == nil and normalCollectCmp ~= nil then
    local strictTopCollect = math.random(100) <= self.m_boardRunView.m_collectProbability
    if not strictTopCollect or 0 < self.m_lastNoActionTimes then
      collectCmp = normalCollectCmp
    end
  end
  table.insert(actionTable, {
    type = "collect",
    value = collectCmp,
    Weight = 10
  })
  self:ExtendActionTable(actionTable)
  local vaildActions = {}
  for _, action in pairs(actionTable) do
    if action.value ~= nil then
      table.insert(vaildActions, action)
    end
  end
  if 0 < #vaildActions then
    self.m_lastNoActionTimes = 0
    local action = Table.ListWeightSelectOne(vaildActions)
    if action.type == "merge" then
      local actualCount = 0
      local mergeCount = math.random(10)
      while mergePair and 0 < mergeCount do
        if not self:_IsItemViewValid(mergePair[1]) or not self:_IsItemViewValid(mergePair[2]) then
          Log.Info(StringUtil.Format("[BoardRunTest] merge pair invalid, %s, %s, skip merge", mergePair[1]:GetType(), mergePair[2]:GetType()))
          break
        end
        boardModel:DragItem(mergePair[1], mergePair[2]:GetPosition())
        self.m_mergeCount = self.m_mergeCount + 1
        Log.Info(StringUtil.Format("[BoardRunTest] merge %s", mergePair[1]:GetType()))
        Coroutine.Wait(1)
        mergePair = self:FindMergePair()
        mergeCount = mergeCount - 1
        actualCount = actualCount + 1
      end
      Log.Info(StringUtil.Format("[BoardRunTest] merge %d times", actualCount))
    elseif action.type == "cache" then
      local actualCount = 0
      local clickCount = math.random(action.value)
      while 0 < clickCount and 0 < self:GetEmptyPositionNumInBoard() do
        boardModel:PopCachedItem()
        clickCount = clickCount - 1
        actualCount = actualCount + 1
        Coroutine.Wait(1)
      end
      Log.Info(StringUtil.Format("[BoardRunTest] click cache %d times", actualCount))
    elseif action.type == "swallow" then
      local swallowCmp = action.value.swallowCmp
      local item = action.value.targetItem
      local targetItemModel = swallowCmp:GetItemModel()
      if self:_IsItemViewValid(targetItemModel) and self:_IsItemViewValid(item) then
        swallowCmp:Swallow(item)
        Log.Info(StringUtil.Format("[BoardRunTest] %s swallow %s", swallowCmp:GetItemModel():GetType(), item:GetType()))
      end
      Table.ListRemove(self.m_swallowCmps, swallowCmp)
    elseif action.type == "spread" then
      local itemModel = action.value:GetItemModel()
      local actualCount = 0
      local clickCount = math.random(action.value:GetItemRestNumber())
      while 0 < clickCount and 0 < self:GetEmptyPositionNumInBoard() do
        if not self:_IsItemViewValid(itemModel) then
          Log.Info(StringUtil.Format("[BoardRunTest] spread item %s invalid, skip spread", itemModel:GetType()))
          break
        end
        action.value:OnTap()
        clickCount = clickCount - 1
        actualCount = actualCount + 1
        Coroutine.Wait(1)
      end
      Log.Info(StringUtil.Format("[BoardRunTest] click %s item %s, %d times", action.type, itemModel:GetType(), actualCount))
    elseif action.type == "collect" then
      local itemModel = action.value:GetItemModel()
      if not self:_IsItemViewValid(itemModel) then
        Log.Info(StringUtil.Format("[BoardRunTest] collect item %s invalid, skip collect", itemModel:GetType()))
        return
      end
      local rewards = action.value:GetRewards()
      action.value:OnTap()
      local itemType = itemModel:GetType()
      Log.Info(StringUtil.Format("[BoardRunTest] click %s item %s", action.type, itemType))
      for _, reward in ipairs(rewards) do
        local rewardType = reward[PROPERTY_TYPE]
        local rewardCount = reward[PROPERTY_COUNT]
        if not self.m_collectReward[rewardType] then
          self.m_collectReward[rewardType] = rewardCount
        else
          self.m_collectReward[rewardType] = self.m_collectReward[rewardType] + rewardCount
        end
      end
      self:UpdateCurrentText()
    elseif action.type == "command" then
      local itemModel = action.value:GetItemModel()
      local commandType = action.value:GetCommand()
      if not self:_IsItemViewValid(itemModel) then
        Log.Info(StringUtil.Format("[BoardRunTest] command item %s invalid, skip command", itemModel:GetType()))
        return
      end
      local beforeUnlockedBlockCount = self.m_activityModel.GetUnlockedBlockCount and self.m_activityModel:GetUnlockedBlockCount()
      action.value:OnTap()
      Coroutine.Wait(2)
      if commandType == ItemCommandOperation.FarmboardUnlockBlock then
        local afterUnlockedBlockCount = self.m_activityModel:GetUnlockedBlockCount()
        if afterUnlockedBlockCount ~= beforeUnlockedBlockCount + 1 then
          self.m_boardRunView:Error("\230\182\136\232\128\151\228\186\134\230\163\139\229\173\144\239\188\140\228\189\134\230\152\175\230\178\161\230\156\137\232\167\163\233\148\129\229\156\176\229\157\151")
        end
      elseif commandType == ItemCommandOperation.FarmboardActivateAnimal and not self.m_activityModel:CanAnimalProduce() then
        self.m_boardRunView:Error("\230\182\136\232\128\151\228\186\134\230\163\139\229\173\144\239\188\140\228\189\134\230\152\175\230\178\161\230\156\137\230\191\128\230\180\187\229\138\168\231\137\169")
      end
      Log.Info(StringUtil.Format("[BoardRunTest] click command item %s", itemModel:GetType()))
    elseif not self:ExecuteAction(action) then
      self.m_boardRunView:Error("\230\156\170\231\159\165\231\154\132\229\138\168\228\189\156\231\177\187\229\158\139\239\188\154" .. action.type)
    end
    Coroutine.Wait(1)
  else
    self:CheckEndCondition()
  end
end

function TestBaseBoardRunModel:_BoardEvent()
  local commonFunc = self:_CheckCommonBoardEvents()
  if commonFunc then
    return commonFunc
  end
  return self:_CheckSpecialBoardEvents()
end

function TestBaseBoardRunModel:_CheckCommonBoardEvents()
  local boardEventFunc
  local curTopWindow = GM.UIManager:GetOpenedTopView()
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.CollectItemConfirmWindow then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:OnConfirmBtnClicked()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.RewardWindow then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.RandomRewardWindow then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if self.m_collectPaperBoxExtraReward then
    function boardEventFunc()
      Coroutine.Wait(2)
      
      self.m_collectPaperBoxExtraReward = false
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.OneRewardWindow then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:OnWindowMaskClicked()
      Coroutine.Wait(3)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  return boardEventFunc
end

function TestBaseBoardRunModel:_CheckSpecialBoardEvents()
  return nil
end

function TestBaseBoardRunModel:InitExtendedComponents()
end

function TestBaseBoardRunModel:CollectExtendedComponents(item)
end

function TestBaseBoardRunModel:ExtendActionTable(actionTable)
end

function TestBaseBoardRunModel:ExecuteAction(action)
  return false
end

function TestBaseBoardRunModel:CheckSpecialEndCondition(allItemCompleted)
  return false
end

function TestBaseBoardRunModel:TryWhenNoAction()
end

function TestBaseBoardRunModel:CheckEndCondition()
  if self:CheckBoardDepth() and not self:HasFog() then
    local itemBookModel = self.m_activityModel:GetBoardModel():GetItemIllustratedBook()
    local curProg, maxProg, unLockProgress = itemBookModel:GetProgress()
    local allItemCompleted = unLockProgress == maxProg
    if self:CheckSpecialEndCondition(allItemCompleted) then
      return
    end
  end
  if self.m_lastNoActionTimes < 5 then
    self:TryWhenNoAction()
    self.m_lastNoActionTimes = self.m_lastNoActionTimes + 1
    return
  end
  self.m_boardRunView:Error("\230\178\161\230\156\137\229\143\175\230\147\141\228\189\156\231\154\132\229\133\131\231\180\160")
end

function TestBaseBoardRunModel:CheckBoardScroll()
  local boardModel = BoardModelHelper.GetActiveModel()
  if not boardModel or boardModel ~= self.m_activityModel.m_boardModel then
    return
  end
  local moveRows = self.m_activityModel.m_boardModel:GetScrollRows()
  if 0 < moveRows then
    self.m_boardScroll = true
  end
end

function TestBaseBoardRunModel:CheckBoardDepth()
  local curDepth = self.m_activityModel.m_boardModel:GetCurDepth()
  local result = curDepth == self.m_activityModel.m_boardModel.m_maxDepth
  if self.m_activityModel.GetCurrentBoardIndex then
    local curBoardIndex = self.m_activityModel:GetCurrentBoardIndex()
    result = result and curBoardIndex >= self.m_activityModel:GetTotalStage()
  end
  return result
end

function TestBaseBoardRunModel:canSpread(spreadCmp)
  local state = spreadCmp:GetState()
  local itemRestNumber = spreadCmp:GetItemRestNumber()
  if state == ItemSpreadState.Closed then
    return false
  end
  if state == ItemSpreadState.Opening then
    return false
  end
  if state == ItemSpreadState.Initializing or itemRestNumber == 0 then
    return false
  end
  return true
end

function TestBaseBoardRunModel:FindMergePair(ignoredItems, ignoredItemsWithCounts)
  ignoredItems = ignoredItems or {}
  ignoredItemsWithCounts = ignoredItemsWithCounts or {}
  local boardModel = BoardModelHelper.GetActiveModel()
  local mapGroups = {}
  for position in boardModel:GetValidPositionIterator() do
    boardModel:_FillMergePairGroup(mapGroups, position, ignoredItems, ignoredItemsWithCounts)
  end
  local arrayWithCobweb = {}
  local arrayWithTemp = {}
  local arrayNormal = {}
  for type, group in pairs(mapGroups) do
    if #group.Normal > 0 then
      if 0 < #group.Cobweb and (math.random(100) < self.m_boardRunView.m_probability or 0 < self.m_lastNoActionTimes) then
        table.insert(arrayWithCobweb, {
          Table.ListRandomSelectOne(group.Normal),
          Table.ListRandomSelectOne(group.Cobweb)
        })
      elseif 0 < #group.Temp then
        table.insert(arrayWithTemp, {
          Table.ListRandomSelectOne(group.Normal),
          Table.ListRandomSelectOne(group.Temp)
        })
      elseif #group.Normal >= 2 then
        table.insert(arrayNormal, Table.ListRandomSelectN(group.Normal, 2))
      end
    end
  end
  if 0 < #arrayWithCobweb then
    return Table.ListRandomSelectOne(arrayWithCobweb)
  end
  local allTypeTable = {}
  if 0 < #arrayWithTemp then
    local pair = Table.ListRandomSelectOne(arrayWithTemp)
    table.insert(allTypeTable, {pair = pair, Weight = 100})
  end
  if 0 < #arrayNormal then
    local pair = Table.ListRandomSelectOne(arrayNormal)
    table.insert(allTypeTable, {pair = pair, Weight = 100})
  end
  if #allTypeTable == 0 then
    return nil
  end
  return Table.ListWeightSelectOne(allTypeTable).pair
end

function TestBaseBoardRunModel:GetEmptyPositionNumInBoard()
  local num = 0
  local boardModel = BoardModelHelper.GetActiveModel()
  for position in boardModel:GetValidPositionIterator() do
    local item = boardModel:GetItem(position)
    if item == nil then
      num = num + 1
    end
  end
  return num
end

function TestBaseBoardRunModel:_IsItemViewValid(itemModel)
  if itemModel == nil then
    return false
  end
  local boardModel = itemModel:GetBoardModel()
  if boardModel == nil then
    return false
  end
  local position = itemModel:GetPosition()
  if position == nil then
    return false
  end
  if boardModel:GetItem(position) ~= itemModel then
    return false
  end
  local _, boardView = BoardModelHelper.GetActiveModel()
  local view = boardView and boardView:GetItemView(itemModel)
  return view ~= nil and not view.toBeRemoved
end

function TestBaseBoardRunModel:HasFog()
  local boardModel = BoardModelHelper.GetActiveModel()
  local fogModel = boardModel:GetFogModel()
  if fogModel == nil then
    return false
  end
  local fogId = fogModel:GetMinLevelFogId()
  if fogId == nil then
    return false
  end
  return true
end
