TestMineralDigBoardRunModel = setmetatable({}, TestBaseBoardRunModel)
TestMineralDigBoardRunModel.__index = TestMineralDigBoardRunModel

function TestMineralDigBoardRunModel:Init(boardRunView, activityModel, probability)
  TestBaseBoardRunModel.Init(self, boardRunView, activityModel, probability)
  self.m_toolNum = 0
  self.m_mineralDigNum = 0
  if self.m_activityModel:GetDigPropNum() < 1000 then
    self.m_activityModel:AddDigPropNum(1000 - self.m_activityModel:GetDigPropNum())
  end
  self.m_boardScroll = false
  self.m_hasInfiniteDigItem = false
  EventDispatcher.AddListener(EEventType.DigOreCollapse, self, self._OnDigOreCollapsed)
  return self
end

function TestMineralDigBoardRunModel:_OnDigOreCollapsed()
  self.m_mineralDigNum = self.m_mineralDigNum + 1
end

function TestMineralDigBoardRunModel:_CheckSpecialBoardEvents()
  local boardEventFunc
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

function TestMineralDigBoardRunModel:InitExtendedComponents()
  self.digItemNum = 0
  self.canDigCmps = {}
end

function TestMineralDigBoardRunModel:CollectExtendedComponents(item)
  local curDigCmp = item:GetComponent(ItemDig)
  if curDigCmp then
    self.digItemNum = self.digItemNum + 1
    if curDigCmp:CanDig() then
      if curDigCmp:GetMaxLevel() == 0 then
        self.m_hasInfiniteDigItem = true
      end
      table.insert(self.canDigCmps, curDigCmp)
    end
  end
end

function TestMineralDigBoardRunModel:ExtendActionTable(actionTable)
  if self:GetEmptyPositionNumInBoard() ~= 0 then
    local digCmp = 0 < #self.canDigCmps and Table.ListRandomSelectOne(self.canDigCmps)
    if digCmp and (not self.m_hasInfiniteDigItem or self.digItemNum ~= 1) then
      table.insert(actionTable, {
        type = "dig",
        value = digCmp,
        Weight = 10
      })
    end
  end
end

function TestMineralDigBoardRunModel:ExecuteAction(action)
  if action.type == "dig" then
    local itemModel = action.value:GetItemModel()
    action.value:OnTap()
    self.m_toolNum = self.m_toolNum + 1
    self:UpdateCurrentText()
    Log.Info(StringUtil.Format("[BoardRunTest] click %s item %s", action.type, itemModel:GetType()))
    return true
  end
  return false
end

function TestMineralDigBoardRunModel:CheckSpecialEndCondition()
  if self.m_hasInfiniteDigItem and self.digItemNum <= 1 then
    local msg = "\229\143\170\229\137\169\230\151\160\233\153\144\231\159\191\239\188\140\230\156\172\230\172\161\231\187\147\230\157\159"
    self.m_boardRunView:EndLog(msg)
    return true
  else
    self.m_boardRunView:Error("\230\178\161\230\156\137\230\151\160\233\153\144\231\159\191")
  end
end

function TestMineralDigBoardRunModel:UpdateCurrentText()
  local rewardStr = json.encode(self.m_collectReward)
  local text = StringUtil.Format("\230\182\136\232\128\151\229\183\165\229\133\183\239\188\154%d\239\188\155\230\140\150\231\159\191\230\149\176\239\188\154%d\239\188\155\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s", self.m_toolNum, self.m_mineralDigNum, rewardStr)
  TestBaseBoardRunModel.UpdateCurrentText(self, text)
end
