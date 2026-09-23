TestFarmBoardRunModel = setmetatable({}, TestBaseBoardRunModel)
TestFarmBoardRunModel.__index = TestFarmBoardRunModel

function TestFarmBoardRunModel:Init(boardRunView, activityModel, probability)
  TestBaseBoardRunModel.Init(self, boardRunView, activityModel, probability)
  self.m_toolNum = 0
  if self.m_activityModel:GetTokenNumber() < 1000 then
    self.m_activityModel:AcquireToken(1000 - self.m_activityModel:GetTokenNumber())
  end
  self.m_tokenNum = self.m_activityModel:GetTokenNumber()
  self.m_feedAnimalCount = 0
  self.m_unlockedFog = false
  self.m_mergeLineComplete = false
  self.m_mergeLineCompleteWindowPopped = self.m_activityModel:GetLevel() == self.m_activityModel:GetMaxLevel()
  self.m_boardScroll = false
  EventDispatcher.AddListener(self.m_activityModel.m_activityDefinition.LevelChangedEvent, self, self._OnLevelChanged)
  EventDispatcher.AddListener(self.m_activityModel.m_activityDefinition.AnimalActivatedEvent, self, self._OnAnimalActivated)
  EventDispatcher.AddListener(self.m_activityDefinition.TokenNumberChangedEvent, self, self._OnTokenNumberChanged)
  return self
end

function TestFarmBoardRunModel:_OnTokenNumberChanged()
  local tokenNum = self.m_activityModel:GetTokenNumber()
  if tokenNum < self.m_tokenNum then
    self.m_toolNum = self.m_toolNum + (self.m_tokenNum - tokenNum)
  end
  self.m_tokenNum = tokenNum
end

function TestFarmBoardRunModel:_OnItemMerged(message)
  TestBaseBoardRunModel._OnItemMerged(self, message)
  if message.New then
    local itemCode = message.New:GetCode()
    local targetLevel = -1
    for level, code in ipairs(self.m_activityModel.m_config.Item) do
      if itemCode == code then
        targetLevel = level
        break
      end
    end
    local maxLevel = self.m_activityModel:GetMaxLevel()
    if targetLevel == maxLevel and not self.m_mergeLineCompleteWindowPopped then
      self.m_mergeLineComplete = true
    end
  end
end

function TestFarmBoardRunModel:_OnLevelChanged(message)
  if message.UnlockedFog then
    self.m_unlockedFog = true
  end
end

function TestFarmBoardRunModel:_OnAnimalActivated(message)
  if message.Result == FarmboardActivityActivateAnimalResult.Success then
    self.m_feedAnimalCount = self.m_feedAnimalCount + 1
  end
end

function TestFarmBoardRunModel:_CheckSpecialBoardEvents()
  local boardEventFunc
  if self.m_mergeLineComplete and not boardEventFunc then
    self.m_mergeLineComplete = false
    self.m_mergeLineCompleteWindowPopped = true
    
    function boardEventFunc()
      Coroutine.Wait(3 + CSTime.timeScale)
      local curTopWindow = GM.UIManager:GetOpenedTopView()
      if curTopWindow and curTopWindow.name == self.m_activityDefinition.CompleteWindowPrefabName then
        Coroutine.Wait(2)
        curTopWindow:Close()
        Coroutine.Wait(2)
        self.m_boardRunView:TryOpenActivityWindow()
      else
        self.m_boardRunView:Error("\229\144\136\230\136\144\231\186\191\229\174\140\230\136\144\239\188\140\228\189\134\230\152\175\230\178\161\230\156\137\229\188\185\231\170\151")
      end
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if self.m_unlockedFog and not boardEventFunc then
    function boardEventFunc()
      Log.Info("[BoardRunTest] unlocked fog")
      
      Coroutine.Wait(5 + CSTime.timeScale)
      self.m_unlockedFog = false
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  self:CheckBoardScroll()
  if self.m_boardScroll and not boardEventFunc then
    function boardEventFunc()
      Log.Info("[BoardRunTest] board scroll")
      
      Coroutine.Wait(2 + CSTime.timeScale)
      self.m_boardScroll = false
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  return boardEventFunc
end

function TestFarmBoardRunModel:InitExtendedComponents()
  self.m_cobwebItemNum = 0
end

function TestFarmBoardRunModel:CollectExtendedComponents(item)
  local curCobwebCmp = item:GetComponent(ItemCobweb)
  if curCobwebCmp then
    self.m_cobwebItemNum = self.m_cobwebItemNum + 1
  end
end

function TestFarmBoardRunModel:ExtendActionTable(actionTable)
end

function TestFarmBoardRunModel:ExecuteAction(action)
  return false
end

function TestFarmBoardRunModel:UpdateCurrentText()
  local rewardStr = json.encode(self.m_collectReward)
  local text = StringUtil.Format("\230\182\136\232\128\151\229\183\165\229\133\183\239\188\154%d\239\188\155\230\138\149\229\150\130\229\138\168\231\137\169\239\188\154%d\230\172\161\239\188\155\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s", self.m_toolNum, self.m_feedAnimalCount, rewardStr)
  TestBaseBoardRunModel.UpdateCurrentText(self, text)
end

function TestFarmBoardRunModel:TryWhenNoAction()
  local outsideAction = {"block"}
  if self.m_activityModel:GetTokenNumber() <= 0 then
    self.m_activityModel:AcquireToken(100)
  end
  local activityMainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if self.m_activityModel:CanAnimalProduce() then
    table.insert(outsideAction, "animal")
  end
  local action = Table.ListRandomSelectOne(outsideAction)
  local clickCount = 0
  if action == "block" then
    while self.m_activityModel:GetTokenNumber() > 0 and self:GetEmptyPositionNumInBoard() ~= 0 do
      activityMainWindow:OnBlockProduceClick()
      clickCount = clickCount + 1
      Coroutine.Wait(2)
    end
    Log.Info(StringUtil.Format("[BoardRunTest] block produce %d times", clickCount))
  elseif action == "animal" then
    while self.m_activityModel:CanAnimalProduce() and self:GetEmptyPositionNumInBoard() ~= 0 do
      activityMainWindow:_OnAnimalClick()
      clickCount = clickCount + 1
      Coroutine.Wait(2)
    end
    Log.Info(StringUtil.Format("[BoardRunTest] animal produce %d times", clickCount))
  end
end

function TestFarmBoardRunModel:CheckSpecialEndCondition(allItemCompleted)
  local function checkErrorConditions()
    if self.m_activityModel:GetMinFogLevel() ~= -1 then
      self.m_boardRunView:Error("\230\163\139\231\155\152\229\183\178\232\190\190\229\136\176\230\156\128\233\171\152\231\186\167\239\188\140\228\189\134\230\152\175\232\191\152\230\156\137\230\156\170\232\167\163\233\148\129\231\154\132\233\155\190")
      
      return true
    end
    return false
  end
  
  if self.m_cobwebItemNum <= 0 and allItemCompleted then
    if checkErrorConditions() then
      return true
    end
    self.m_boardRunView:EndLog("\230\178\161\230\156\137\232\155\155\231\189\145\230\163\139\229\173\144\239\188\140\228\184\148\230\137\128\230\156\137\229\144\136\230\136\144\231\186\191\229\183\178\229\174\140\230\136\144\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159")
    return true
  end
  if self.m_boardRunView.m_probability == 0 and allItemCompleted then
    if checkErrorConditions() then
      return true
    end
    self.m_boardRunView:EndLog("\232\155\155\231\189\145\229\144\136\230\136\144\230\166\130\231\142\135\228\184\1860\239\188\140\228\184\148\230\137\128\230\156\137\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\233\131\189\229\174\140\230\136\144\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159")
    return true
  end
  return false
end
