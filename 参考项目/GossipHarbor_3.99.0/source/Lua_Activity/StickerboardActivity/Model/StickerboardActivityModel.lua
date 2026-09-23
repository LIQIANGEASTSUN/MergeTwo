StickerboardActivityModel = setmetatable({}, BaseActivityModel)
StickerboardActivityModel.__index = StickerboardActivityModel
local DBKeys = {
  PopEndWindow = "PopEndWindow",
  EverFulledKey = "EverFulled",
  CurrentBoardIndex = "CurrentBoardIndex",
  TokenNum = "TokenNum",
  UnlockedSticker = "UnlockedSticker%d",
  StickerNum = "StickerNum",
  TokenConvertReward = "TokenConvertReward",
  BoardConvertReward = "BoardConvertReward",
  PopCompleteWindow = "PopCompleteWindow",
  PopReadyWindow = "PopReadyWindow"
}
local EAcquireTokenScene = {
  Order = "order",
  Buy = "buy",
  Free = "free"
}

function StickerboardActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityDefinition = StickerboardActivityDefinition[activityType]
  self:_LoadLocalConfig()
  BaseActivityModel.Init(self, activityType, activityDataTable)
end

function StickerboardActivityModel:LateInit()
  BaseActivityModel.LateInit(self)
  self.m_lateInit = true
end

function StickerboardActivityModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function StickerboardActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function StickerboardActivityModel:_LoadLocalConfig()
  local configFileName = self.m_activityDefinition.StickerConfigFileName
  local config = require("Data.Config." .. configFileName)
  self.m_stikcerConfig = config
  for _, stickerConfig in ipairs(config) do
    local rewardStr = StringUtil.Split(stickerConfig.reward, "-")
    stickerConfig.reward = {
      [PROPERTY_TYPE] = rewardStr[1],
      [PROPERTY_COUNT] = tonumber(rewardStr[2])
    }
  end
  table.sort(self.m_stikcerConfig, function(a, b)
    return a.stickerType < b.stickerType
  end)
end

function StickerboardActivityModel:_LoadOtherServerConfig(config)
  self.m_eventOrderScore = config.eventOrderScore
  self.m_itemBookConifg = config.eventBookContents
  self.m_progressRewardConfig = Table.DeepCopy(config.stickerboardRewardConfig)
  table.sort(self.m_progressRewardConfig, function(a, b)
    return a.round < b.round
  end)
  local sum = 0
  for _, rewardConfig in ipairs(self.m_progressRewardConfig) do
    sum = sum + rewardConfig.num
    rewardConfig.num = sum
  end
  self.m_totalStage = config.stickerboardStageConfig[1].stage
end

function StickerboardActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  if self.m_boardModel ~= nil then
    self.m_boardModel:DropData(self.m_lateInit)
    self.m_boardModel = nil
  else
    self.m_itemDataTable:Drop()
    self.m_itemLayerDataTable:Drop()
    self.m_itemCacheDataTable:Drop()
    self.m_boardDataTable:Drop()
  end
  self.m_bAcquiringProgressReward = nil
  self:ClearCacheProgressRewardsAndUpdateView()
end

function StickerboardActivityModel:_OnStateChanged()
  local state = self:GetState(false)
  local state = self:GetState(false)
  if state == ActivityState.Started and self.m_eventOrderScore ~= nil then
    self:RegisterEventOrderScoreModule()
  end
  if state == ActivityState.Started or state == ActivityState.Ended then
    self:UpdateBoardModel()
  else
    self.m_boardModel = nil
  end
  if state == ActivityState.Started and self.m_dbTable:GetValue(DBKeys.TokenNum, "value") == nil then
    self:AddTokenNum(3, EAcquireTokenScene.Free)
    GM.BIManager:LogAcquire(self.m_activityDefinition.ActivityTokenIconName, 3, self:GetType(), true, EBoardType.Stickerboard)
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  if self.m_lateInit then
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
end

function StickerboardActivityModel:RegisterEventOrderScoreModule()
  local function addNumFunc(num, scene)
    local biKey = ""
    
    if scene == EBIType.FinishOrder then
      biKey = EAcquireTokenScene.Order
    else
      biKey = EAcquireTokenScene.Buy
    end
    self:AddTokenNum(num, biKey)
  end
  
  local function conditionFunc()
    return self:GetState() == ActivityState.Started
  end
  
  local function getRewardFlyButtonFunc()
    local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if mainWindow ~= nil then
      return mainWindow:GetTokenBtn()
    end
  end
  
  GM.ActivityModuleManager:AddRegister(ActivityModuleManager.ModuleType.EventScoreConfigAcquireProperty, self, self.m_eventOrderScore, self.m_activityDefinition.ActivityTokenPropertyType, addNumFunc, conditionFunc, getRewardFlyButtonFunc)
end

function StickerboardActivityModel:UpdateBoardModel(bForceCreate)
  local curBoardIndex = self:GetCurrentBoardIndex()
  local initBoardFileName = self.m_activityDefinition.BoardModelConfigNamePrefix .. tostring(curBoardIndex)
  if bForceCreate then
    self.m_boardModel:ChangeBoard(initBoardFileName)
  elseif self.m_boardModel == nil then
    local args = {
      activityType = self:GetType(),
      itemDataTable = self.m_itemDataTable,
      itemLayerDataTable = self.m_itemLayerDataTable,
      itemCacheDataTable = self.m_itemCacheDataTable,
      boardDataTable = self.m_boardDataTable,
      boardInitFileName = initBoardFileName,
      activityDBTable = self.m_dbTable,
      itemIllustrated = self.m_itemBookConifg
    }
    self.m_boardModel = StickerboardActivityBoardModel.Create(args)
  end
end

function StickerboardActivityModel:CacheItems(cachedItemCodes)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes)
end

function StickerboardActivityModel:CacheItemsFromBoard(items)
  if Table.IsEmpty(items) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItemsFromBoard(items)
end

function StickerboardActivityModel:BoardUpgrade()
  local portalItem = {}
  local bringItems = {}
  for position in self.m_boardModel:GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      if (item:GetComponent(ItemCobweb) or item:GetComponent(ItemPaperBox)) and not item:GetComponent(ItemDig) then
        local innerCode = ItemModelFactory.GetInnerTypeRecursive(item:GetCode())
        local newItem = self.m_boardModel:ReplaceItem(item, innerCode, false)
        local itemSpread = newItem:GetComponent(ItemSpread)
        if itemSpread ~= nil and itemSpread:IsAutoSpread() then
          itemSpread:EmptySpreadCount()
        end
        self.m_boardModel.event:Call(BoardEventType.TransformItem, {
          Source = item,
          New = newItem,
          CostEnergy = false
        })
        item = newItem
      end
      if item:GetComponent(ItemPortal) then
        portalItem = {
          item = item,
          pos = item:GetLocalPositionVector2()
        }
        self.m_boardModel:RemoveItem(item)
      elseif not item:GetComponent(ItemDig) then
        table.insert(bringItems, {
          item = item,
          pos = item:GetLocalPositionVector2()
        })
      end
    end
  end
  local sortedIndex = {}
  for idx, _ in ipairs(bringItems) do
    sortedIndex[idx] = idx
  end
  table.sort(sortedIndex, function(a, b)
    local orderA = 0
    local orderB = 0
    for i, prefix in ipairs(self.m_activityDefinition.ItemCollectPrefix) do
      if StringUtil.StartWith(bringItems[a].item:GetType(), prefix) then
        orderA = i
      end
      if StringUtil.StartWith(bringItems[b].item:GetType(), prefix) then
        orderB = i
      end
    end
    if orderA ~= orderB then
      return orderA < orderB
    end
    return GM.ItemDataModel:GetChainLevel(bringItems[a].item:GetType()) < GM.ItemDataModel:GetChainLevel(bringItems[b].item:GetType())
  end)
  local cacheItems = {}
  local biItems = {}
  local arrBiItems = {}
  for i, idx in ipairs(sortedIndex) do
    cacheItems[i] = bringItems[idx].item
    local code = cacheItems[i]:GetCode()
    biItems[code] = (biItems[code] or 0) + 1
  end
  for k, v in pairs(biItems) do
    arrBiItems[#arrBiItems + 1] = {type = k, count = v}
  end
  local items = self.m_boardModel:GetAllCacheItems()
  local arrItems = {}
  for k, v in pairs(items) do
    arrItems[#arrItems + 1] = {
      type = k,
      count = v.Count
    }
  end
  GM.BIManager:LogAction(self.m_activityDefinition.ItemByLevelUpBIType, {board = arrBiItems, cache = arrItems})
  self:CacheItemsFromBoard(cacheItems)
  local nextBoardIndex = self:GetCurrentBoardIndex() + 1
  if nextBoardIndex > self:GetTotalStage() then
    Log.Error("StickerboardActivityModel:BoardLevelUp out of range, nextLevel = " .. tostring(nextBoardIndex))
    return
  end
  self:SetCurrentBoardIndex(nextBoardIndex)
  self:UpdateBoardModel(true)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.UpgradeBoardEvent, {
    portalItem = portalItem,
    bringItems = bringItems,
    hasPropertyCollected = false
  })
end

function StickerboardActivityModel:GetTotalStage()
  return self.m_totalStage
end

function StickerboardActivityModel:AcquireSticker(obstacleModel)
  local oldRound = self:GetCurProgressRound()
  local needNum = self:GetCurrentTotalStickerNeed()
  local oldNum = self:GetStickerNum()
  self:AddStickerNum()
  if oldNum + 1 == needNum then
    local roundReward = self:GetRoundReward(oldRound)
    if not Table.IsEmpty(roundReward) then
      self.m_cacheProgressReward = roundReward
      RewardApi.AcquireRewardsLogic(roundReward, EPropertySource.Give, self.m_activityDefinition.GetProgressRewardBIType, EGameMode.Main, CacheItemType.Type2)
      self:SetAcquiringProgressReward(true)
      self:LogActivity(EBIType.ActivityRankUp, oldRound)
    end
  end
  local stickerType = obstacleModel:GetStickerType()
  if self:HasStickerUnlocked(stickerType) then
    local reward = self.m_stikcerConfig[stickerType].reward
    obstacleModel:GetStickerReward()
    RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, self.m_activityDefinition.GetStickerRewardBIType, EGameMode.Main, CacheItemType.Type2)
  else
    self:SetStickerUnlocked(stickerType)
  end
end

function StickerboardActivityModel:ClearCacheProgressRewards()
  self.m_cacheProgressReward = {}
end

function StickerboardActivityModel:ClearCacheProgressRewardsAndUpdateView()
  if not Table.IsEmpty(self.m_cacheProgressReward) then
    RewardApi.AcquireRewardsInView(self.m_cacheProgressReward, {simpleCollect = true})
    self:ClearCacheProgressRewards()
  end
end

function StickerboardActivityModel:GetStickerImageByType(type)
  return self.m_stikcerConfig[type].stickerImage
end

function StickerboardActivityModel:GetStickerRewardByType(type)
  return self.m_stikcerConfig[type].reward
end

function StickerboardActivityModel:GetBoardModel()
  return self.m_boardModel
end

function StickerboardActivityModel:GetDefinition()
  return self.m_activityDefinition
end

function StickerboardActivityModel:GetDBTable()
  return self.m_dbTable
end

function StickerboardActivityModel:GetProgressMaxRound()
  return #self.m_progressRewardConfig
end

function StickerboardActivityModel:GetCurProgressRound()
  local stickerNum = self:GetStickerNum()
  return self:GetProgressRoundByStickerNum(stickerNum)
end

function StickerboardActivityModel:GetProgressRoundByStickerNum(stickerNum)
  for i = #self.m_progressRewardConfig, 1, -1 do
    if stickerNum >= self.m_progressRewardConfig[i].num then
      return math.min(#self.m_progressRewardConfig, i + 1)
    end
  end
  return 1
end

function StickerboardActivityModel:GetRoundConfig(round)
  if round < 1 or round > #self.m_progressRewardConfig then
    return nil
  end
  return self.m_progressRewardConfig[round]
end

function StickerboardActivityModel:GetRoundReward(round)
  return self.m_progressRewardConfig[round].rewards
end

function StickerboardActivityModel:GetRoundRewardIcon(round)
  return self.m_progressRewardConfig[round].reward_icon
end

function StickerboardActivityModel:GetCurrentTotalStickerNeed()
  local curRound = self:GetCurProgressRound()
  return self.m_progressRewardConfig[curRound].num
end

function StickerboardActivityModel:IsProgressFinished()
  return self:GetStickerNum() >= self.m_progressRewardConfig[#self.m_progressRewardConfig].num
end

function StickerboardActivityModel:HasUnlockAllStickers()
  for _, stickerConfig in ipairs(self.m_stikcerConfig) do
    if not self:HasStickerUnlocked(stickerConfig.stickerType) then
      return false
    end
  end
  return true
end

function StickerboardActivityModel:IsProgressFinishedByStickerNum(stickerNum)
  return stickerNum >= self.m_progressRewardConfig[#self.m_progressRewardConfig].num
end

function StickerboardActivityModel:GetCurrentTotalRoundScore()
  local curRound = self:GetCurProgressRound()
  local startNum = 0
  if 1 < curRound then
    startNum = self.m_progressRewardConfig[curRound - 1].num
  end
  return self.m_progressRewardConfig[curRound].num - startNum
end

function StickerboardActivityModel:GetCurrentRoundScore()
  local curRound = self:GetCurProgressRound()
  local startNum = 0
  if 1 < curRound then
    startNum = self.m_progressRewardConfig[curRound - 1].num
  end
  return self:GetStickerNum() - startNum
end

function StickerboardActivityModel:GetEndRewards()
  return self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
end

function StickerboardActivityModel:GetUnlockedStickerCount()
end

function StickerboardActivityModel:HasRemovedAllObstacle()
  return self.m_boardModel:GetObstacleMapModel():HaveNoObstacle()
end

function StickerboardActivityModel:CanStartNextStage()
  local hasPortal = false
  local hasSwallow = false
  local bReached = false
  for position in self.m_boardModel:GetValidPositionIterator() do
    local itemModel = self.m_boardModel:GetItem(position)
    if itemModel then
      if itemModel:GetCode() == self.m_activityDefinition.ItemSwallowPortalCode then
        local itemSwallow = itemModel:GetComponent(ItemSwallow)
        if itemSwallow ~= nil then
          bReached = false
          for _, info in ipairs(itemSwallow:GetSwallowInfo()) do
            local unreachCount = info.Count - info.Swallowed
            if unreachCount ~= 0 then
              local function filter(itemModel)
                return itemModel:GetCode() == info.Code
              end
              
              local sourceItems = self.m_boardModel:FilterItems(filter)
              if unreachCount <= #sourceItems then
                bReached = true
              end
            end
          end
        end
      elseif itemModel:GetComponent(ItemPortal) ~= nil then
        hasPortal = true
      end
    end
  end
  return self:HasRemovedAllObstacle() and self:GetCurrentBoardIndex() < self:GetTotalStage() and (hasSwallow and bReached or not hasSwallow and hasPortal)
end

function StickerboardActivityModel:NotAcquiringProgressReward()
  return self.m_bAcquiringProgressReward ~= true
end

function StickerboardActivityModel:SetAcquiringProgressReward(bAcquiring)
  self.m_bAcquiringProgressReward = bAcquiring
end

function StickerboardActivityModel:AddTokenNum(num, BIfrom)
  self.m_dbTable:Set(DBKeys.TokenNum, "value", self:GetTokenNum() + num)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.TokenNumChangedEvent, num)
  if num < 0 then
    GM.BIManager:LogAction(self.m_activityDefinition.UseTokenBIType, {num = 1, type = BIfrom})
    GM.BIManager:LogUseItem(self.m_activityDefinition.ActivityTokenPropertyType, 1, self:GetType())
    EventDispatcher.DispatchEvent(EEventType.StickerUseToken, -num)
  end
end

function StickerboardActivityModel:GetTokenNum()
  return self.m_dbTable:GetValue(DBKeys.TokenNum, "value") or 0
end

function StickerboardActivityModel:SetStickerUnlocked(stickerType)
  local key = string.format(DBKeys.UnlockedSticker, stickerType)
  self.m_dbTable:Set(key, "value", "1")
end

function StickerboardActivityModel:HasStickerUnlocked(stickerType)
  local key = string.format(DBKeys.UnlockedSticker, stickerType)
  return self.m_dbTable:GetValue(key, "value") == "1"
end

function StickerboardActivityModel:AddStickerNum()
  self.m_dbTable:Set(DBKeys.StickerNum, "value", self:GetStickerNum() + 1)
  self:LogActivity(EBIType.ActivityAddScore, 1)
end

function StickerboardActivityModel:GetStickerNum()
  return self.m_dbTable:GetValue(DBKeys.StickerNum, "value") or 0
end

function StickerboardActivityModel:HasBoardEverFulled()
  return self.m_dbTable:GetValue(DBKeys.EverFulledKey, "value") == "1"
end

function StickerboardActivityModel:SetBoardFulled()
  self.m_dbTable:Set(DBKeys.EverFulledKey, "value", "1")
end

function StickerboardActivityModel:GetCurrentBoardIndex()
  return self.m_dbTable:GetValue(DBKeys.CurrentBoardIndex, "value") or 1
end

function StickerboardActivityModel:SetCurrentBoardIndex(index)
  self.m_dbTable:Set(DBKeys.CurrentBoardIndex, "value", index)
end

function StickerboardActivityModel:SetPopEndWindow()
  self.m_dbTable:Set(DBKeys.PopEndWindow, "value", "1")
end

function StickerboardActivityModel:CanPopEndWindow()
  return self.m_dbTable:GetValue(DBKeys.PopEndWindow, "value") ~= "1"
end

function StickerboardActivityModel:SetPopReadyWindow()
  self.m_dbTable:Set(DBKeys.PopReadyWindow, "value", "1")
end

function StickerboardActivityModel:CanPopReadyWindow()
  return self.m_dbTable:GetValue(DBKeys.PopReadyWindow, "value") ~= "1"
end

function StickerboardActivityModel:SetPopCompleteWindow()
  self.m_dbTable:Set(DBKeys.PopCompleteWindow, "value", "1")
end

function StickerboardActivityModel:CanPopCompleteWindow()
  if self.m_state == ActivityState.Started or self.m_state == ActivityState.Ended then
    return self.m_dbTable:GetValue(DBKeys.PopCompleteWindow, "value") ~= "1" and self:HasUnlockAllStickers()
  end
end

function StickerboardActivityModel:GetRemainTokenConvertReward()
  local remainTokenNum = self:GetTokenNum()
  return {
    [PROPERTY_TYPE] = EPropertyType.Energy,
    [PROPERTY_COUNT] = math.min(remainTokenNum * 5, 50)
  }
end

function StickerboardActivityModel:GetEndRewards()
  local rewards = self.m_boardModel:CollectCacheAndBoardPropertyRewardsWithoutConvert()
  return rewards
end

function StickerboardActivityModel:SetEndRewardsAcquired()
  self.m_dbTable:Set(DBKeys.BoardConvertReward, "value", 1)
end

function StickerboardActivityModel:IsEndRewardsAcquired()
  return self.m_dbTable:GetValue(DBKeys.BoardConvertReward, "value") == 1
end

function StickerboardActivityModel:IsRemainTokenRewardAcquired()
  return self.m_dbTable:GetValue(DBKeys.TokenConvertReward, "value") == 1
end

function StickerboardActivityModel:SetRemainTokenRewardAcquired()
  self.m_dbTable:Set(DBKeys.TokenConvertReward, "value", 1)
end

function StickerboardActivityModel:GetHudEntryShowConfig()
  return {
    Type = "StickerboardActivity",
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
        GM.UIManager:OpenView(self.m_activityDefinition.NoticeWindowPrefabName, self:GetType())
      else
        GM.UIManager:OpenView(self.m_activityDefinition.MainWindowPrefabName, self:GetType())
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

function StickerboardActivityModel:GetBoardEntryShowConfig()
  return {
    statusChangeName = self.m_activityDefinition.StateChangedEvent,
    bubbleName = "m_" .. self.m_type .. "Bubble",
    bubbleNodeName = "m_StickerboardctivityBubbleNode",
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    bubbleCountName = "m_StickerboardctivityBubbleCount",
    scrollToFunName = "ScrollToStickerboardctivity",
    activityType = self:GetType(),
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function StickerboardActivityModel:GetTestPopupWindowConfig()
  return {
    CheckFunc = function()
      return self:GetState() == ActivityState.Preparing or self:GetState() == ActivityState.Started
    end,
    config = {
      GroupName = "\232\180\180\231\186\184\229\176\143\230\163\139\231\155\152(Stickerboard)",
      WindowList = {
        {
          BtnName = "\233\162\132\229\145\138",
          BtnClickFunc = function()
            GM.UIManager:OpenView(self.m_activityDefinition.NoticeWindowPrefabName, self.m_type, false)
          end
        },
        {
          BtnName = "\229\188\128\229\167\139",
          BtnClickFunc = function()
            GM.UIManager:OpenView(self.m_activityDefinition.ReadyWindowPrefabName, self.m_type)
          end
        },
        {
          BtnName = "\231\187\147\230\157\159",
          BtnClickFunc = function()
            GM.UIManager:OpenView(self.m_activityDefinition.EndWindowPrefabName, self.m_type)
          end
        },
        {
          BtnName = "\233\128\154\229\133\179",
          BtnClickFunc = function()
            GM.UIManager:OpenView(self.m_activityDefinition.CompleteWindowPrefabName, self.m_type)
          end
        },
        {
          BtnName = "\228\184\139\228\184\128\233\152\182\230\174\181",
          BtnClickFunc = function()
            GM.UIManager:OpenView(self.m_activityDefinition.NextStageConfirmWindowPrefabName, self.m_type)
          end
        },
        {
          BtnName = "\232\191\155\229\186\166\233\162\134\229\165\150",
          BtnClickFunc = function()
            local args = {}
            args.chestIconName = self.m_progressRewardConfig[1].reward_icon
            args.rewards = self.m_progressRewardConfig[1].rewards
            GM.UIManager:OpenView(self.m_activityDefinition.ChestRewardPrefabName, args)
          end
        }
      }
    }
  }
end

function StickerboardActivityModel:TestAcquireSticker(stickerType)
  local oldRound = self:GetCurProgressRound()
  local needNum = self:GetCurrentTotalStickerNeed()
  local oldNum = self:GetStickerNum()
  self:AddStickerNum()
  if oldNum + 1 == needNum then
    local roundReward = self:GetRoundReward(oldRound)
    RewardApi.AcquireRewardsLogic(roundReward, EPropertySource.Give, self.m_activityDefinition.GetProgressRewardBIType, EGameMode.Main, CacheItemType.Type2)
    self:SetAcquiringProgressReward(true)
    self:LogActivity(EBIType.ActivityRankUp, oldRound)
  end
  if self:HasStickerUnlocked(stickerType) then
    local reward = self.m_stikcerConfig[stickerType].reward
    RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, self.m_activityDefinition.GetStickerRewardBIType, EGameMode.Main, CacheItemType.Type2)
  else
    self:SetStickerUnlocked(stickerType)
  end
end

function StickerboardActivityModel:TestBoardUpgrade(stickerType)
  local nextBoardIndex = self:GetCurrentBoardIndex() + 1
  if nextBoardIndex > self:GetTotalStage() then
    Log.Error("StickerboardActivityModel:BoardLevelUp out of range, nextLevel = " .. tostring(nextBoardIndex))
    return
  end
  self:SetCurrentBoardIndex(nextBoardIndex)
  self:UpdateBoardModel(true)
end
