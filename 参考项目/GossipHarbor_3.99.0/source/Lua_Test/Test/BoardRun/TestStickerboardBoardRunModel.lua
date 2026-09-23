TestStickerboardBoardRunModel = setmetatable({}, TestBaseBoardRunModel)
TestStickerboardBoardRunModel.__index = TestStickerboardBoardRunModel

function TestStickerboardBoardRunModel:Init(boardRunView, activityModel, probability)
  TestBaseBoardRunModel.Init(self, boardRunView, activityModel, probability)
  self.m_toolNum = 0
  if self.m_activityModel:GetTokenNum() < 1000 then
    self.m_activityModel:AddTokenNum(1000 - self.m_activityModel:GetTokenNum())
  end
  self.m_boardUpgrade = false
  self.m_clearObstacle = false
  self.m_progressRound = self.m_activityModel:GetCurProgressRound()
  self.m_stickerboardComplete = self.m_activityModel:HasUnlockAllStickers()
  self.m_hasInfiniteDigItem = false
  self.m_stickerNum = self.m_activityModel:GetStickerNum()
  return self
end

function TestStickerboardBoardRunModel:_CheckSpecialBoardEvents()
  local boardEventFunc
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
  if self.m_clearObstacle and not boardEventFunc then
    function boardEventFunc()
      Coroutine.Wait(3 + CSTime.timeScale)
      
      Log.Info("[BoardRunTest] use clear obstacle tool")
      local hasUnlockAllStickers = self.m_activityModel:HasUnlockAllStickers() and not self.m_stickerboardComplete
      local round = self.m_activityModel:GetCurProgressRound()
      if round > self.m_progressRound or hasUnlockAllStickers then
        local curTopWindow = GM.UIManager:GetOpenedTopView()
        if curTopWindow and curTopWindow.name == self.m_activityDefinition.ChestRewardPrefabName then
          local luaTable = curTopWindow.gameObject:GetLuaTable()
          luaTable:OnWindowMaskClicked()
          Coroutine.Wait(2 + CSTime.timeScale)
          luaTable:OnWindowMaskClicked()
          Coroutine.Wait(2 + CSTime.timeScale)
          Log.Info("[BoardRunTest] chest reward collected")
        else
          self.m_boardRunView:Error("\232\191\155\229\186\166\229\141\135\231\186\167\230\178\161\230\156\137\229\188\185\229\135\186\229\174\157\231\174\177\229\165\150\229\138\177\229\188\185\231\170\151")
        end
        self.m_progressRound = round
      end
      if hasUnlockAllStickers then
        Coroutine.Wait(2 + CSTime.timeScale)
        local curTopWindow = GM.UIManager:GetOpenedTopView()
        if curTopWindow and curTopWindow.name == self.m_activityDefinition.CompleteWindowPrefabName then
          curTopWindow:OnCloseBtnClick()
          Coroutine.Wait(2 + CSTime.timeScale)
          Log.Info("[BoardRunTest] all stickers collected window closed")
          self.m_stickerboardComplete = true
        else
          self.m_boardRunView:Error("\232\180\180\231\186\184\230\148\182\233\155\134\229\174\140\230\175\149\230\178\161\230\156\137\229\188\185\229\135\186\229\188\185\231\170\151")
        end
      end
      self.m_clearObstacle = false
      local curStickerNum = self.m_activityModel:GetStickerNum()
      if curStickerNum > self.m_stickerNum then
        Log.Info("[BoardRunTest] sticker collected")
        self.m_stickerNum = curStickerNum
        self:UpdateCurrentText()
      end
      self.m_boardRunView.m_boardEventCoroutine = nil
    end
  end
  return boardEventFunc
end

function TestStickerboardBoardRunModel:InitExtendedComponents()
  self.m_cobwebItemNum = 0
  self.m_portalItemCmp = nil
  self.m_digItemNum = 0
  self.m_canDigCmps = {}
  self.m_clearToolCmps = {}
end

function TestStickerboardBoardRunModel:CollectExtendedComponents(item)
  local curCobwebCmp = item:GetComponent(ItemCobweb)
  if curCobwebCmp then
    self.m_cobwebItemNum = self.m_cobwebItemNum + 1
  end
  local curPortalCmp = item:GetComponent(ItemPortal)
  if curPortalCmp then
    self.m_portalItemCmp = curPortalCmp
  end
  local curDigCmp = item:GetComponent(ItemDig)
  if curDigCmp then
    self.m_digItemNum = self.m_digItemNum + 1
    if curDigCmp:CanDig() then
      if curDigCmp:GetMaxLevel() == 0 then
        self.m_hasInfiniteDigItem = true
      end
      table.insert(self.m_canDigCmps, curDigCmp)
    end
  end
  local itemClearToolCmp = item:GetComponent(ItemClearTool)
  if itemClearToolCmp then
    table.insert(self.m_clearToolCmps, itemClearToolCmp)
  end
end

function TestStickerboardBoardRunModel:ExtendActionTable(actionTable)
  if self.m_portalItemCmp then
    table.insert(actionTable, {
      type = "portal",
      value = self.m_portalItemCmp,
      Weight = 10
    })
  end
  if self:GetEmptyPositionNumInBoard() ~= 0 then
    local digCmp = 0 < #self.m_canDigCmps and Table.ListRandomSelectOne(self.m_canDigCmps)
    if digCmp and (not self.m_hasInfiniteDigItem or self.m_digItemNum ~= 1) then
      table.insert(actionTable, {
        type = "dig",
        value = digCmp,
        Weight = 10
      })
    end
  end
  local clearToolCmp = 0 < #self.m_clearToolCmps and Table.ListRandomSelectOne(self.m_clearToolCmps)
  if clearToolCmp then
    table.insert(actionTable, {
      type = "clearObstacle",
      value = clearToolCmp,
      Weight = 10
    })
  end
end

function TestStickerboardBoardRunModel:ExecuteAction(action)
  if action.type == "portal" then
    local itemModel = action.value:GetItemModel()
    local _, boardView = BoardModelHelper.GetActiveModel()
    local portalView = boardView:GetItemPortalView()
    if portalView then
      local boardPosition = itemModel:GetPosition()
      portalView:OnPointerDown(boardPosition)
      self.m_boardUpgrade = true
      Log.Info(StringUtil.Format("[BoardRunTest] click portal item %s", itemModel:GetType()))
    end
    return true
  end
  if action.type == "dig" then
    local itemModel = action.value:GetItemModel()
    action.value:OnTap()
    self.m_toolNum = self.m_toolNum + 1
    self:UpdateCurrentText()
    Log.Info(StringUtil.Format("[BoardRunTest] click %s item %s", action.type, itemModel:GetType()))
    return true
  end
  if action.type == "clearObstacle" then
    local itemModel = action.value:GetItemModel()
    action.value:OnTap()
    self.m_clearObstacle = true
    Log.Info(StringUtil.Format("[BoardRunTest] click %s item %s", action.type, itemModel:GetType()))
    return true
  end
  return false
end

function TestStickerboardBoardRunModel:UpdateCurrentText()
  local rewardStr = json.encode(self.m_collectReward)
  local text = StringUtil.Format("\230\182\136\232\128\151\229\183\165\229\133\183\239\188\154%d\239\188\155\232\142\183\229\190\151\232\180\180\231\186\184\230\149\176\233\135\143\239\188\154%d\239\188\155\230\148\182\233\155\134\229\165\150\229\138\177\239\188\154%s", self.m_toolNum, self.m_stickerNum, rewardStr)
  TestBaseBoardRunModel.UpdateCurrentText(self, text)
end

function TestStickerboardBoardRunModel:CheckSpecialEndCondition(allItemCompleted)
  local function checkErrorConditions()
    if not allItemCompleted then
      self.m_boardRunView:Error("\230\163\139\229\173\144\229\144\136\230\136\144\231\186\191\230\178\161\230\156\137\229\174\140\230\136\144")
      
      return true
    end
    if self.m_portalItemCmp then
      self.m_boardRunView:Error("\230\163\139\231\155\152\229\183\178\232\190\190\229\136\176\230\156\128\233\171\152\231\186\167\239\188\140\228\189\134\230\152\175\232\191\152\230\156\137\228\188\160\233\128\129\233\151\168\230\163\139\229\173\144")
      return true
    end
    if not self.m_activityModel:HasUnlockAllStickers() then
      self.m_boardRunView:Error("\230\163\139\231\155\152\229\183\178\232\190\190\229\136\176\230\156\128\233\171\152\231\186\167\239\188\140\228\189\134\230\152\175\232\180\180\231\186\184\230\156\170\230\148\182\233\155\134\229\133\168")
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
