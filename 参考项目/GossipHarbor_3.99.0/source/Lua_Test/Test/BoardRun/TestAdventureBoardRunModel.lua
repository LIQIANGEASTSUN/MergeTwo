TestAdventureBoardRunModel = setmetatable({}, TestBaseBoardRunModel)
TestAdventureBoardRunModel.__index = TestAdventureBoardRunModel

function TestAdventureBoardRunModel:Init(boardRunView, activityModel, probability)
  TestBaseBoardRunModel.Init(self, boardRunView, activityModel, probability)
  self.m_itemNum = 0
  self.m_boardScroll = false
  self.m_mergeLineComplete = false
  self.m_mergeLineCompleteWindowPopped = self.m_activityModel:IsMaxLevel()
  EventDispatcher.AddListener(EEventType.ItemGenByUIEnergy, self, self._OnItemGenByUIEnergy)
  return self
end

function TestAdventureBoardRunModel:_OnItemMerged(message)
  TestBaseBoardRunModel._OnItemMerged(self, message)
  if message.New then
    local itemCode = message.New:GetCode()
    local curLevel = self.m_activityModel:GetLevelByItemCode(itemCode)
    local maxLevel = self.m_activityModel:GetMergeLength()
    if curLevel == maxLevel and not self.m_mergeLineCompleteWindowPopped then
      self.m_mergeLineComplete = true
    end
  end
end

function TestAdventureBoardRunModel:_OnItemGenByUIEnergy(message)
  if message and message.exponent then
    local energyModel = self.m_activityModel.m_boardModel:GetEnergyModel()
    local costEnergyNum = energyModel:GetCostEnergyNum()
    self.m_itemNum = self.m_itemNum + costEnergyNum
    self:UpdateCurrentText()
  end
end

function TestAdventureBoardRunModel:_CheckSpecialBoardEvents()
  local boardEventFunc
  local curTopWindow = GM.UIManager:GetOpenedTopView()
  if curTopWindow and curTopWindow.name == "AdventureActivityUnlockWindow" then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.DogparkAdventureSwallowWindow then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if curTopWindow and curTopWindow.name == UIPrefabConfigName.WitchAdventureSwallowWindow then
    function boardEventFunc()
      Coroutine.Wait(1)
      
      curTopWindow:Close()
      Coroutine.Wait(1)
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
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

function TestAdventureBoardRunModel:InitExtendedComponents()
  self.m_cobwebItemNum = 0
end

function TestAdventureBoardRunModel:CollectExtendedComponents(item)
  local curDigCmp = item:GetComponent(ItemCobweb)
  if curDigCmp then
    self.m_cobwebItemNum = self.m_cobwebItemNum + 1
  end
end

function TestAdventureBoardRunModel:ExtendActionTable(actionTable)
  if self:GetEmptyPositionNumInBoard() ~= 0 and self.m_activityModel.m_boardModel:IsEnergyModuleOpen() then
    local energy = self.m_activityModel.m_boardModel:GetEnergyModel():GetCurEnergy()
    if 0 < energy then
      table.insert(actionTable, {
        type = "energy",
        value = energy,
        Weight = 10
      })
    end
  end
end

function TestAdventureBoardRunModel:ExecuteAction(action)
  if action.type == "energy" then
    local _, boardView = BoardModelHelper.GetActiveModel()
    local energyView = boardView:GetEnergyViewInfo()
    local energyModel = self.m_activityModel.m_boardModel:GetEnergyModel()
    local switchBtnTrans = energyView:GetSwitchBtnTrans()
    if switchBtnTrans and switchBtnTrans.gameObject.activeInHierarchy then
      local switchCount = math.random(0, 3)
      if 0 < switchCount then
        for i = 1, switchCount do
          energyView:OnSwitchBtn()
          Coroutine.Wait(1)
        end
      end
      local curExponent = energyModel:GetCurExponent()
      Log.Info(StringUtil.Format("[BoardRunTest] randomly switched exponent %d times, switch to %d", switchCount, curExponent + 1))
    end
    local costEnergyNum = energyModel:GetCostEnergyNum()
    local curEnergy = energyModel:GetCurEnergy()
    local maxClickCount = math.floor(curEnergy / costEnergyNum)
    if 0 < maxClickCount then
      local clickCount = math.random(1, maxClickCount)
      local actualCount = 0
      while 0 < clickCount and 0 < self:GetEmptyPositionNumInBoard() do
        if costEnergyNum > energyModel:GetCurEnergy() then
          Log.Info("[BoardRunTest] energy not enough during clicking, stop.")
          break
        end
        energyView:OnClickGenerateButton()
        clickCount = clickCount - 1
        actualCount = actualCount + 1
        Coroutine.Wait(1)
      end
      Log.Info(StringUtil.Format("[BoardRunTest] click generate button finished, actual clicked %d times", actualCount))
    else
      Log.Info(StringUtil.Format("[BoardRunTest] energy not enough to generate. Energy: %d, Cost: %d", curEnergy, costEnergyNum))
    end
    return true
  end
  return false
end

function TestAdventureBoardRunModel:UpdateCurrentText()
  local rewardStr = json.encode(self.m_collectReward)
  local text = StringUtil.Format("\230\182\136\232\128\151\228\189\147\229\138\155\239\188\154%d\239\188\155\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s", self.m_itemNum, rewardStr)
  TestBaseBoardRunModel.UpdateCurrentText(self, text)
end

function TestAdventureBoardRunModel:TryWhenNoAction()
  if self.m_activityModel.m_boardModel:IsEnergyModuleOpen() then
    local energy = self.m_activityModel.m_boardModel:GetEnergyModel():GetCurEnergy()
    if energy < 50 then
      self.m_activityModel.m_boardModel:GetEnergyModel():AddCurEnergy(50)
      local _, boardView = BoardModelHelper.GetActiveModel()
      local energyView = boardView:GetEnergyViewInfo()
      energyView:UpdateEnergy()
    end
  else
    local itemType = GM.ItemDataModel:GetTypeByChainAndLevel(self.m_activityModel.m_activityDefinition.ToolItemChain, 1)
    local cacheItems = {}
    for i = 1, 50 do
      table.insert(cacheItems, itemType)
    end
    self.m_itemNum = self.m_itemNum + 50
    self.m_activityModel.m_boardModel:CacheItems(cacheItems)
  end
  self:UpdateCurrentText()
end

function TestAdventureBoardRunModel:CheckSpecialEndCondition(allItemCompleted)
  if self.m_cobwebItemNum <= 0 then
    if not allItemCompleted then
      self.m_boardRunView:Error("\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\230\178\161\230\156\137\229\174\140\230\136\144")
      return true
    end
    local msg = "\230\178\161\230\156\137\232\155\155\231\189\145\230\163\139\229\173\144\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159"
    self.m_boardRunView:EndLog(msg)
    return true
  end
  if self.m_boardRunView.m_probability == 0 and allItemCompleted then
    local msg = "\230\137\128\230\156\137\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\233\131\189\229\174\140\230\136\144\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159"
    self.m_boardRunView:EndLog(msg)
    return true
  end
end
