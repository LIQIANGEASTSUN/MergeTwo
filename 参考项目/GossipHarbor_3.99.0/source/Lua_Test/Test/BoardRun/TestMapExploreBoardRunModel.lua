TestMapExploreBoardRunModel = setmetatable({}, TestBaseBoardRunModel)
TestMapExploreBoardRunModel.__index = TestMapExploreBoardRunModel

function TestMapExploreBoardRunModel:Init(boardRunView, activityModel, activityDefinition, probability)
  TestBaseBoardRunModel.Init(self, boardRunView, activityModel, activityDefinition, probability)
  self.m_itemNum = 0
  return self
end

function TestMapExploreBoardRunModel:_CheckSpecialBoardEvents()
  local boardEventFunc
  local curTopWindow = GM.UIManager:GetOpenedTopView()
  if curTopWindow and curTopWindow.name == "MapExploreActivityUnlockWindow" then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.ChestRewardWindowBase then
    function boardEventFunc()
      Coroutine.Wait(1 + CSTime.timeScale)
      
      curTopWindow:OnWindowMaskClicked()
      Coroutine.Wait(3 + CSTime.timeScale)
      curTopWindow:OnWindowMaskClicked()
      Coroutine.Wait(3 + CSTime.timeScale)
      curTopWindow = GM.UIManager:GetOpenedTopView()
      if curTopWindow and curTopWindow.name == self.m_activityDefinition.SuccessPrefabName then
        curTopWindow:OnWindowMaskClicked()
        Coroutine.Wait(3 + CSTime.timeScale)
      else
        self.m_boardRunView:Error("\229\156\176\229\155\190\228\187\187\229\138\161\229\174\140\230\136\144\230\178\161\230\156\137\229\188\185\229\135\186\230\136\144\229\138\159\229\188\185\231\170\151")
      end
      Log.Info("[BoardRunTest] map task finished")
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == self.m_activityDefinition.MainWindowPrefabName and curTopWindow.m_timelineActive then
    function boardEventFunc()
      local sum = 0
      
      while curTopWindow.m_timelineActive do
        Coroutine.Wait(2)
        curTopWindow.m_timelineLayer:OnClickScreen()
        sum = sum + 2
        if 300 < sum then
          self.m_boardRunView:Error("\229\156\176\229\155\190\230\151\182\233\151\180\231\186\191\230\140\129\231\187\173\230\151\182\233\151\180\232\191\135\233\149\191\239\188\140\229\143\175\232\131\189\229\135\186\231\142\176\228\186\134\233\151\174\233\162\152")
          break
        end
      end
      Coroutine.Wait(2)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == self.m_activityDefinition.ProgressActivityWindowPrefabName then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  
  local function IsSmashRewardWindow(window)
    if not window then
      return false
    end
    return window.name == self.m_activityDefinition.SmashFinialRewardWindowPrefabName or window.name == self.m_activityDefinition.SmashRewardPrefabName
  end
  
  local function ProcessSmashRewardWindow(rewardWin)
    Coroutine.Wait(1)
    if rewardWin.OnClickedNext then
      rewardWin:OnClickedNext()
    end
    Coroutine.Wait(2)
    if rewardWin.OnClickFinish then
      rewardWin:OnClickFinish()
    end
    Coroutine.Wait(1)
  end
  
  if IsSmashRewardWindow(curTopWindow) then
    function boardEventFunc()
      ProcessSmashRewardWindow(curTopWindow)
      
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow.name == self.m_activityDefinition.SmashMainWindowPrefabName then
    function boardEventFunc()
      Coroutine.Wait(2 + CSTime.timeScale)
      
      local newTopWindow = GM.UIManager:GetOpenedTopView()
      if IsSmashRewardWindow(newTopWindow) then
        ProcessSmashRewardWindow(newTopWindow)
      end
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == self.m_activityDefinition.SmashStartWindowPrefabName then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  return boardEventFunc
end

function TestMapExploreBoardRunModel:InitExtendedComponents()
  self.m_cobwebItemNum = 0
end

function TestMapExploreBoardRunModel:CollectExtendedComponents(item)
  local curDigCmp = item:GetComponent(ItemCobweb)
  if curDigCmp then
    self.m_cobwebItemNum = self.m_cobwebItemNum + 1
  end
end

function TestMapExploreBoardRunModel:CheckSpecialEndCondition(allItemCompleted)
  local function checkErrorConditions()
    if not allItemCompleted then
      self.m_boardRunView:Error("\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\230\178\161\230\156\137\229\174\140\230\136\144")
      
      return true
    end
    return false
  end
  
  if self.m_cobwebItemNum <= 0 then
    if checkErrorConditions() then
      return true
    end
    if self.m_boardRunView.m_mapRunFinished then
      self.m_boardRunView:EndLog("\230\163\139\231\155\152\229\146\140\229\156\176\229\155\190\229\157\135\229\183\178\229\174\140\230\136\144\232\191\144\232\161\140")
    else
      self.m_boardRunView.m_boardRunFinished = true
    end
    return true
  end
  if self.m_boardRunView.m_probability == 0 and allItemCompleted then
    if checkErrorConditions() then
      return true
    end
    if self.m_boardRunView.m_mapRunFinished then
      self.m_boardRunView:EndLog("\230\163\139\231\155\152\229\146\140\229\156\176\229\155\190\229\157\135\229\183\178\229\174\140\230\136\144\232\191\144\232\161\140")
    else
      self.m_boardRunView.m_boardRunFinished = true
    end
    return true
  end
  return false
end

function TestMapExploreBoardRunModel:UpdateCurrentText()
  local rewardStr = json.encode(self.m_collectReward)
  local mapRewardStr = json.encode(self.m_boardRunView.m_mapRunModel.m_collectReward)
  local text = StringUtil.Format("\230\182\136\232\128\151\228\189\147\229\138\155\239\188\154%d\239\188\155\230\163\139\231\155\152\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s\239\188\155\229\156\176\229\155\190\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s", self.m_boardRunView.m_mapRunModel.m_usedTokenNum, rewardStr, mapRewardStr)
  TestBaseBoardRunModel.UpdateCurrentText(self, text)
end
