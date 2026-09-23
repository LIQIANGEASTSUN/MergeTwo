TestMultiboardsBoardRunModel = setmetatable({}, TestBaseBoardRunModel)
TestMultiboardsBoardRunModel.__index = TestMultiboardsBoardRunModel

function TestMultiboardsBoardRunModel:Init(boardRunView, activityModel, probability)
  TestBaseBoardRunModel.Init(self, boardRunView, activityModel, probability)
  self.m_itemNum = 0
  self.m_reachLimitLevel = self.m_activityModel:IsReachLimitLevel()
  self.m_hasReachLimitLevel = self.m_reachLimitLevel
  self.m_boardUpgrade = false
  self.m_mergeLineComplete = false
  self.m_mergeLineCompleteWindowPopped = self.m_activityModel:IsMaxLevel()
  EventDispatcher.AddListener(EEventType.ItemGenByUIEnergy, self, self._OnItemGenByUIEnergy)
  return self
end

function TestMultiboardsBoardRunModel:_OnItemMerged(message)
  TestBaseBoardRunModel._OnItemMerged(self, message)
  if message.New then
    local itemCode = message.New:GetCode()
    local curLevel = self.m_activityModel:GetLevelByItemCode(itemCode)
    local limitLevel = self.m_activityModel:GetCurLimitLevel()
    if curLevel == limitLevel and not self.m_reachLimitLevel and not self.m_hasReachLimitLevel and not self.m_activityModel:IsMaxLevel(true) then
      self.m_reachLimitLevel = true
      self.m_hasReachLimitLevel = true
    end
    local maxLevel = self.m_activityModel:GetMergeLength()
    if curLevel == maxLevel and not self.m_mergeLineCompleteWindowPopped then
      self.m_mergeLineComplete = true
    end
  end
end

function TestMultiboardsBoardRunModel:_OnItemGenByUIEnergy(message)
  if message and message.exponent then
    local energyModel = self.m_activityModel.m_boardModel:GetEnergyModel()
    local costEnergyNum = energyModel:GetCostEnergyNum()
    self.m_itemNum = self.m_itemNum + costEnergyNum
    self:UpdateCurrentText()
  end
end

function TestMultiboardsBoardRunModel:_CheckSpecialBoardEvents()
  local boardEventFunc
  local curTopWindow = GM.UIManager:GetOpenedTopView()
  if curTopWindow and curTopWindow.name == "MultiboardsActivityUnlockWindow" then
    function boardEventFunc()
      Coroutine.Wait(math.max(CSTime.timeScale / 2, 2))
      
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
  if self.m_reachLimitLevel and not boardEventFunc then
    function boardEventFunc()
      Log.Info("[BoardRunTest] reach limit level")
      
      Coroutine.Wait(5 + CSTime.timeScale)
      self.m_reachLimitLevel = false
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  if self.m_boardUpgrade and not boardEventFunc then
    function boardEventFunc()
      Coroutine.Wait(2 + CSTime.timeScale)
      
      local curTopWindow = GM.UIManager:GetOpenedTopView()
      if curTopWindow and curTopWindow.name == self.m_activityDefinition.NextStageConfirmWindowPrefabName then
        local luaTable = curTopWindow.gameObject:GetLuaTable()
        luaTable:_OnNextClicked()
        Coroutine.Wait(5 + CSTime.timeScale)
        Log.Info("[BoardRunTest] board upgrade")
        self.m_hasReachLimitLevel = false
      else
        self.m_boardRunView:Error("\231\130\185\229\135\187\228\188\160\233\128\129\233\151\168\230\163\139\229\173\144\228\185\139\229\144\142\230\178\161\230\156\137\229\188\185\231\170\151")
      end
      self.m_boardUpgrade = false
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  return boardEventFunc
end

function TestMultiboardsBoardRunModel:InitExtendedComponents()
  self.m_cobwebItemNum = 0
  self.m_portalItemCmp = nil
end

function TestMultiboardsBoardRunModel:CollectExtendedComponents(item)
  local curCobwebCmp = item:GetComponent(ItemCobweb)
  if curCobwebCmp then
    self.m_cobwebItemNum = self.m_cobwebItemNum + 1
  end
  local curPortalCmp = item:GetComponent(ItemPortal)
  if curPortalCmp then
    self.m_portalItemCmp = curPortalCmp
  end
end

function TestMultiboardsBoardRunModel:ExtendActionTable(actionTable)
  local isReachLimitLevel = self.m_activityModel:IsReachLimitLevel()
  if isReachLimitLevel and self.m_portalItemCmp then
    table.insert(actionTable, {
      type = "portal",
      value = self.m_portalItemCmp,
      Weight = 10
    })
  end
  if not isReachLimitLevel and self:GetEmptyPositionNumInBoard() ~= 0 and self.m_activityModel.m_boardModel:IsEnergyModuleOpen() then
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

function TestMultiboardsBoardRunModel:ExecuteAction(action)
  if action.type == "portal" then
    local itemModel = action.value:GetItemModel()
    local _, boardView = BoardModelHelper.GetActiveModel()
    local portalView = boardView:GetItemPortalView()
    local boardPosition = itemModel:GetPosition()
    portalView:OnPointerDown(boardPosition)
    self.m_boardUpgrade = true
    Log.Info(StringUtil.Format("[BoardRunTest] click portal item %s", itemModel:GetType()))
    return true
  end
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

function TestMultiboardsBoardRunModel:UpdateCurrentText()
  local rewardStr = json.encode(self.m_collectReward)
  local text = StringUtil.Format("\230\182\136\232\128\151\228\189\147\229\138\155\239\188\154%d\239\188\155\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s", self.m_itemNum, rewardStr)
  TestBaseBoardRunModel.UpdateCurrentText(self, text)
end

function TestMultiboardsBoardRunModel:TryWhenNoAction()
  if self.m_activityModel.m_boardModel:IsEnergyModuleOpen() then
    local energy = self.m_activityModel.m_boardModel:GetEnergyModel():GetCurEnergy()
    if energy < 50 then
      self.m_activityModel.m_boardModel:GetEnergyModel():AddCurEnergy(50)
      local _, boardView = BoardModelHelper.GetActiveModel()
      local energyView = boardView:GetEnergyViewInfo()
      energyView:UpdateEnergy()
    end
  else
    local itemType = GM.ItemDataModel:GetTypeByChainAndLevel(self.m_activityModel.m_activityDefinition.ItemChain, 1)
    local cacheItems = {}
    for i = 1, 50 do
      table.insert(cacheItems, itemType)
    end
    self.m_itemNum = self.m_itemNum + 50
    self.m_activityModel.m_boardModel:CacheItems(cacheItems)
  end
  self:UpdateCurrentText()
end

function TestMultiboardsBoardRunModel:CheckSpecialEndCondition(allItemCompleted)
  local function checkErrorConditions()
    if not allItemCompleted then
      self.m_boardRunView:Error("\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\230\178\161\230\156\137\229\174\140\230\136\144")
      
      return true
    end
    if self.m_portalItemCmp then
      self.m_boardRunView:Error("\230\163\139\231\155\152\229\183\178\232\190\190\229\136\176\230\156\128\233\171\152\231\186\167\239\188\140\228\189\134\230\152\175\232\191\152\230\156\137\228\188\160\233\128\129\233\151\168\230\163\139\229\173\144")
      return true
    end
    return false
  end
  
  if self.m_cobwebItemNum <= 0 then
    if checkErrorConditions() then
      return true
    end
    self.m_boardRunView:EndLog("\230\178\161\230\156\137\232\155\155\231\189\145\230\163\139\229\173\144\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159")
    return true
  end
  if self.m_boardRunView.m_probability == 0 and allItemCompleted then
    if checkErrorConditions() then
      return true
    end
    self.m_boardRunView:EndLog("\230\137\128\230\156\137\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\233\131\189\229\174\140\230\136\144\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159")
    return true
  end
  return false
end
