BreakModel = setmetatable({}, BaseActivityModel)
BreakModel.__index = BreakModel
BreakModel.EverFull = "everFull"
BreakModel.PopEndWindow = "PopEndWindow"
BreakModel.TokenNum = "tokenNum"
BreakModel.Score = "score"

function BreakModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityType = activityType
  self.m_activityDefinition = BreakDefinition[activityType]
  BaseActivityModel.Init(self, activityType, activityDataTable)
  EventDispatcher.AddListener(EEventType.BoardCollect, self, self._OnBoardCollect)
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
end

function BreakModel:_OnBoardCollect(message)
  if self:GetState() ~= ActivityState.Started then
    return
  end
  local bTopItem = false
  for _, reward in ipairs(message.Rewards) do
    if reward[PROPERTY_TYPE] == self.m_activityDefinition.ScoreType then
      bTopItem = true
      break
    end
  end
  if bTopItem then
    local rewards = self:AddScore(1)
    local viewController = self:GetNewViewController()
    local boardView = GM.ModeViewController:GetBreakBoardView()
    local itemPos = boardView:GetItemPos(message.item)
    viewController:State0(itemPos, message.Source, rewards)
  end
end

function BreakModel:_OnOrderFinished(msg)
  local rewards = msg.order.m_cacheRewards
  local orderReward
  for _, reward in pairs(rewards) do
    if reward[PROPERTY_TYPE] == self.m_activityDefinition.TokenProperty then
      orderReward = reward
      break
    end
  end
  if orderReward ~= nil then
    local message = {
      Source = msg.order,
      Img = EPropertySprite[orderReward[PROPERTY_TYPE]],
      Count = orderReward[PROPERTY_COUNT],
      ActivityType = self.m_activityType,
      ItemFlyType = ItemFlyView.EFLYTYPE.BreakActivity
    }
    GM.MainBoardModel.event:Call(BoardEventType.AddOrderFinishItem, message)
  end
end

function BreakModel:AddTokenNum(num, BIfrom)
  self.m_dbTable:Set(BreakModel.TokenNum, "value", self:GetTokenNum() + num)
  if 0 < num then
    GM.BIManager:LogAcquire(self.m_activityDefinition.TokenProperty, num, BIfrom, BIfrom == "free")
  else
    GM.BIManager:LogAction(self.m_activityDefinition.UsePropBIType, {
      num = -num,
      itemType = BIfrom
    })
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.TokenNumChangedEvent)
end

function BreakModel:GetTokenNum()
  return self.m_dbTable:GetValue(BreakModel.TokenNum, "value") or 0
end

function BreakModel:AddScore(num)
  if self:GetScore() == self.m_breakConfig.target then
    return
  end
  local score = math.min(self:GetScore() + num, self.m_breakConfig.target)
  self.m_dbTable:Set(BreakModel.Score, "value", score)
  self:LogActivity(EBIType.ActivityAddScore, 1)
  self:LogActivity(EBIType.ActivityRankUp, score)
  if score == self.m_breakConfig.target then
    RewardApi.AcquireRewardsLogic({
      self.m_breakConfig.reward
    }, EPropertySource.Give, self.m_activityDefinition.FinalRewardBIType, EGameMode.Main, CacheItemType.Type2)
    self:LogActivity(EBIType.ActivityRankUp, 0)
    return self.m_breakConfig.reward
  end
end

function BreakModel:GetScore()
  return self.m_dbTable:GetValue(BreakModel.Score, "value") or 0
end

function BreakModel:GetRewardInfo()
  return self:GetScore(), self.m_breakConfig.target, self.m_breakConfig.reward
end

function BreakModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function BreakModel:_LoadOtherServerConfig(config)
  self.m_eventOrderScore = config.eventOrderScore
  self.m_breakConfig = config.breakConfig[1]
  self.m_itemBookConifg = config.eventBookContents
end

function BreakModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  self.m_boardDataTable:Drop()
  self.m_boardModel = nil
end

function BreakModel:GetBoardEntryShowConfig()
  return {
    statusChangeName = self.m_activityDefinition.StateChangedEvent,
    bubbleName = "m_" .. self.m_type .. "Bubble",
    bubbleNodeName = "m_BreakBubbleNode",
    entryPrefabName = self.m_activityDefinition.BoardBubblePrefabName,
    bubbleCountName = "m_BreakBubbleCount",
    activityType = self.m_type,
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function BreakModel:GetHudEntryShowConfig()
  return {
    Type = "Break",
    ArrCheckShowEvent = {
      self.m_activityDefinition.StateChangedEvent
    },
    EntryPrefabConfigName = UIPrefabConfigName.HudActivityEntry,
    CheckFunc = function()
      return self:GetState() == ActivityState.Preparing or self:GetState() == ActivityState.Started
    end,
    HudSideBarType = EHudSideBarType.Left,
    EntryButtonKey = self.m_activityDefinition.EntryButtonKey,
    EntryIconName = self.m_activityDefinition.EntryImageName,
    OnClickedFunc = function()
      if self:GetState() == ActivityState.Preparing then
        GM.UIManager:OpenView(self.m_activityDefinition.NoticeWindowPrefabName, self.m_activityType, false)
      else
        GM.UIManager:OpenView(self.m_activityDefinition.MainWindowPrefabName, self.m_activityType, false)
      end
    end,
    RedPointType = EntryRedPointType.Num,
    GetRedPointNumFunc = function()
      return self:GetTokenNum()
    end,
    ArrUpdateEntryContentEvent = {
      self.m_activityDefinition.TokenNumChangedEvent
    }
  }
end

function BreakModel:_OnStateChanged()
  local state = self:GetState(false)
  if state == ActivityState.Started and self.m_eventOrderScore ~= nil then
    GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.EventScoreConfigAcquireProperty, self, self.m_eventOrderScore, self.m_activityDefinition.TokenProperty, function(num, scene)
      local biKey = ""
      if scene == EBIType.FinishOrder then
        biKey = "order"
      else
        biKey = "buy"
      end
      self:AddTokenNum(num, biKey)
    end, function()
      return self:GetState() == ActivityState.Started
    end, function()
      local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
      if mainWindow ~= nil then
        return mainWindow:GetTokenBtn()
      end
    end)
  end
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil then
      local args = {
        itemDataTable = self.m_itemDataTable,
        itemLayerDataTable = self.m_itemLayerDataTable,
        itemCacheDataTable = self.m_itemCacheDataTable,
        boardDataTable = self.m_boardDataTable,
        boardInitFileName = self.m_activityDefinition.BoardModelConfigName,
        activityType = self:GetType(),
        activityDBTable = self.m_dbTable,
        itemIllustrated = self.m_itemBookConifg
      }
      self.m_boardModel = BreakBoardModel.Create(args)
    end
  else
    self.m_boardModel = nil
  end
  if state == ActivityState.Started and self.m_dbTable:GetValue(BreakModel.TokenNum, "value") == nil then
    self:AddTokenNum(3, "free")
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  if self.m_lateInit then
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
end

function BreakModel:LateInit()
  BaseActivityModel.LateInit(self)
  self.m_lateInit = true
end

function BreakModel:GetRewardChest(stage)
  return self.m_rewardConfig[stage].win_reward
end

function BreakModel:GetNewViewController()
  self.m_conCnt = (self.m_conCnt or 0) + 1
  local viewController = BreakViewController.Create(self.m_type, self.m_conCnt)
  self.m_conArr = self.m_conArr or {}
  self.m_conArr[self.m_conCnt] = viewController
  return viewController
end

function BreakModel:ViewControllerFinished(id)
  self.m_conArr[id] = nil
end

function BreakModel:HasViewController()
  return not Table.IsEmpty(self.m_conArr)
end

function BreakModel:GetCurViewController()
  return self.m_conArr[self.m_conCnt]
end

function BreakModel:GetBoardModel()
  return self.m_boardModel
end

function BreakModel:GetDefinition()
  return self.m_activityDefinition
end

function BreakModel:_CacheItems(cachedItemCodes, scene, isFree)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes)
end

function BreakModel:FindMoneyItem()
  return self.m_boardModel:FindMoneyItem()
end

function BreakModel:FindMachineItem()
  return self.m_boardModel:FindMachineItem()
end

function BreakModel:FindShoppingItem()
  return self.m_boardModel:FindShoppingItem()
end

function BreakModel:SwallowAnim(itemPos)
  self.m_swallowViewController = self:GetNewViewController()
  self.m_swallowViewController:StateSwallow0(itemPos)
  DelayExecuteFunc(function()
    self.m_swallowViewController:Close()
  end, 2)
end

function BreakModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function BreakModel:GetEndRewards()
  local rewards = self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
  local result = {}
  for i, rew in ipairs(rewards) do
    if rew[PROPERTY_TYPE] ~= self.m_activityDefinition.ScoreType and rew[PROPERTY_COUNT] ~= 0 then
      table.insert(result, rew)
    end
  end
  return result
end

function BreakModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(BreakModel.EverFull, "value") == "1"
end

function BreakModel:SetBoardFulled()
  self.m_dbTable:Set(BreakModel.EverFull, "value", "1")
  GM.BIManager:LogAction(self.m_activityDefinition.BoardFullBIType)
end

function BreakModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function BreakModel:SetPopEndWindow()
  self.m_dbTable:Set(BreakModel.PopEndWindow, "value", "1")
end

function BreakModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(BreakModel.PopEndWindow, "value") ~= "1"
end
