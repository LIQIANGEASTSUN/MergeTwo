FreefallActivityModel = setmetatable({}, BaseActivityModel)
FreefallActivityModel.__index = FreefallActivityModel
FreefallActivityModel.TokenConvertEnergyMaxNum = 50
FreefallActivityModel.InitTokenNum = 3
FreefallActivityModel.BossWeakDir = {
  Up = "up",
  Down = "down",
  Left = "left",
  Right = "right",
  All = "all"
}
local DBColumnValue = "value"
local DBKey = {
  DBTokenNumberKey = "tk",
  CurRound = "cr",
  BeateanTargetIndex = "bti",
  TargetBossMaxNum = "tbmn",
  TargetBossIndexSlot = "tbis",
  TargetBossRemainHealthSlot = "tbrhs",
  TargetBossItemSlotId = "tbisi",
  TargetBossChargeRound = "tbcr",
  TargetBossLastRemainHealthSlot = "tblrhs",
  CurRoundBossScore = "curbsc",
  DBKeyBoardStateRecoveryKey = "bsr",
  DBKeyAccumFreefallToken1 = "afftk1",
  DBKeyAccumFreefallToken2 = "afftk2",
  DBKeyAccumFreefallToken3 = "afftk3",
  DBKeyAccumFreefallBossToken = "affbtk",
  BoardInitDepth = "boarddepth",
  DBIsUnlockedByEnergy = "isUnlocked",
  CanShowSecondOpenTutorial = "CanShowSecondOpenTutorial",
  IsLockTutorialShowed = "IsLockTutorialShowed",
  IsFirstItemDropped = "IsFirstItemDropped"
}

function FreefallActivityModel.IsHitTokenType(propertyType)
  return propertyType == EPropertyType.FreefallToken1 or propertyType == EPropertyType.FreefallToken2 or propertyType == EPropertyType.FreefallToken3 or propertyType == EPropertyType.FreefallBossToken
end

function FreefallActivityModel.GetActiveModel()
  for activityType, definition in pairs(FreefallActivityDefinition) do
    local model = GM.ActivityManager:GetModel(activityType)
    if model ~= nil and model:GetState() == ActivityState.Started then
      return model, definition
    end
  end
end

function FreefallActivityModel.GetCobwebSprite()
  for activityType, activityDefinition in pairs(FreefallActivityDefinition) do
    local model = GM.ActivityManager:GetModel(activityType)
    if model:GetState() == ActivityState.Started and activityDefinition.CobwebSprite then
      return activityDefinition.CobwebSprite, activityDefinition.CobwebSpriteOffset
    end
  end
end

function FreefallActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, boardDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_boardDataTable = boardDataTable
  self.m_activityDefinition = FreefallActivityDefinition[activityType]
  self.m_tokenHelper = ActivityTokenHelper.Create(self, activityDataTable, self.m_activityDefinition.ActivityTokenPropertyType, EFlyElementLabelStyle.Default, nil, {
    specialFloat = false,
    floatFirst = true,
    floatHeight = 100,
    floatDelay = 0.5,
    floatScale = 1,
    startScale = Vector3(0.9, 0.9, 1),
    endScale = 0.3
  })
  BaseActivityModel.Init(self, activityType, activityDataTable)
end

function FreefallActivityModel:Destroy()
  self.m_tokenHelper:Destroy()
  BaseActivityModel.Destroy(self)
end

function FreefallActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function FreefallActivityModel:GetDefinition()
  return self.m_activityDefinition
end

function FreefallActivityModel:GetAllStateChangedEvent()
  return {
    self.m_activityDefinition.StateChangedEvent
  }
end

function FreefallActivityModel:_LoadOtherServerConfig(config)
  self.m_arrBossRewardConfigs = {}
  if not Table.IsEmpty(config.event_rewards) then
    for _, cfg in ipairs(config.event_rewards) do
      if cfg.round == 0 then
        self.m_roundRewardConfig = cfg
      else
        if self.m_arrBossRewardConfigs[cfg.round] == nil then
          self.m_arrBossRewardConfigs[cfg.round] = {}
        end
        table.insert(self.m_arrBossRewardConfigs[cfg.round], cfg)
      end
    end
  end
  for _, v in pairs(self.m_arrBossRewardConfigs) do
    table.sort(v, function(a, b)
      return a.level < b.level
    end)
  end
  self.m_mapArrTargetConfigs = {}
  if not Table.IsEmpty(config.freefall_boss) then
    for _, config in ipairs(config.freefall_boss) do
      local targetConfigData = FreefallActivityTargetConfigData.Create(config)
      if self.m_mapArrTargetConfigs[targetConfigData:GetRound()] == nil then
        self.m_mapArrTargetConfigs[targetConfigData:GetRound()] = {}
      end
      table.insert(self.m_mapArrTargetConfigs[targetConfigData:GetRound()], targetConfigData)
    end
  end
  for round, configs in pairs(self.m_mapArrTargetConfigs) do
    table.sort(configs, function(a, b)
      return a:GetIndex() < b:GetIndex()
    end)
  end
  if GameConfig.IsTestMode() then
    for round, _ in ipairs(self.m_arrBossRewardConfigs) do
      if self.m_mapArrTargetConfigs[round] == nil then
        Log.Error("[Freefall]TargetReward\233\135\140Round\231\188\186\229\164\177\239\188\140Round:" .. tostring(round))
      end
    end
  end
  self.m_bookConfig = config.dig_book_contents
  self.m_allTaskDatas = {}
  if not Table.IsEmpty(config.freefall_task) then
    local taskConfig = {}
    for k, v in pairs(config.freefall_task) do
      if taskConfig[v.index] == nil then
        taskConfig[v.index] = {}
      end
      table.insert(taskConfig[v.index], v)
    end
    for index = 1, 3 do
      if taskConfig[index] then
        table.sort(taskConfig[index], function(a, b)
          return a.level < b.level
        end)
        table.insert(self.m_allTaskDatas, FreefallActivityTaskData.Create(index, self, self.m_dbTable, taskConfig[index]))
      end
    end
  end
  if config.token_general_layout then
    self.m_tokenHelper:LoadConfig(config.token_general_layout)
  end
end

function FreefallActivityModel:_DropData()
  self:_ClearBeatenTargetIndex()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  self.m_endRewards = nil
  if self.m_boardModel ~= nil then
    self.m_boardModel:GetItemCacheModel():ResetData()
    self.m_boardModel:Destroy()
    self.m_boardModel = nil
  end
end

function FreefallActivityModel:_OnStateChanged()
  BaseActivityModel._OnStateChanged(self)
  local state = self:GetState(false)
  if state == ActivityState.Started and self.m_dbTable:GetValue(DBKey.DBTokenNumberKey, "value") == nil and (self:GetEnergyLockCount() <= 0 or self:GetCostEnertyCount() >= self:GetEnergyLockCount()) then
    self.m_dbTable:Set(DBKey.DBIsUnlockedByEnergy, "value", 1)
    self:_ChangeTokenNumber(FreefallActivityModel.InitTokenNum)
    GM.BIManager:LogAcquire(self.m_activityDefinition.ActivityTokenPropertyType, FreefallActivityModel.InitTokenNum, self.m_activityDefinition.BIAddTokenFree, true)
    if 0 < #self.m_arrBossRewardConfigs then
      self:_StartNewRound()
    end
  end
  if self:GetState() == ActivityState.Started and not self:_HasActivityStarted() then
    self:LogActivity(EBIType.ActivityStart)
    self:_SetActivityStarted()
    if not GM.TutorialModel:IsTutorialFinished(ETutorialId.FreefallFirstOpen) then
      self.m_dbTable:Set(DBKey.CanShowSecondOpenTutorial, "value", 0)
    else
      self.m_dbTable:Set(DBKey.CanShowSecondOpenTutorial, "value", 1)
    end
  end
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil then
      self:_LoadActivityBoardModel()
    end
  else
    self.m_boardModel = nil
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
end

function FreefallActivityModel:_LoadActivityBoardModel()
  local curRound = self:GetCurRound()
  local initCodeMap = require("Data.Config." .. self.m_activityDefinition.BoardModelConfigName)[curRound]
  local bossConfig = self.m_mapArrTargetConfigs and self.m_mapArrTargetConfigs[curRound]
  if not Table.IsEmpty(bossConfig) then
    for k, v in pairs(bossConfig) do
      if v:OnBoard() then
        local x, y = v:GetInitPos()
        Log.Assert(y < #initCodeMap, "freefall boss pos overflow y")
        Log.Assert(x < #initCodeMap[1], "freefall boss pos overflow y")
        local bossPosX, bossPosY
        if initCodeMap[y][x] ~= ItemType.FreeFallBoss and initCodeMap[y + 1][x] ~= ItemType.FreeFallBoss and initCodeMap[y][x + 1] ~= ItemType.FreeFallBoss and initCodeMap[y + 1][x + 1] ~= ItemType.FreeFallBoss then
          bossPosX = x
          bossPosY = y
        else
          local randomPosMap = {}
          for y1 = 2, #initCodeMap - 1 do
            for x1 = 1, #initCodeMap[y1] - 1 do
              if initCodeMap[y1][x1] ~= ItemType.FreeFallBoss and initCodeMap[y1 + 1][x1] ~= ItemType.FreeFallBoss and initCodeMap[y1][x1 + 1] ~= ItemType.FreeFallBoss and initCodeMap[y1 + 1][x1 + 1] ~= ItemType.FreeFallBoss then
                table.insert(randomPosMap, {x1, y1})
              end
            end
          end
          Log.Assert(not Table.IsEmpty(randomPosMap), "freefall no valid new pos")
          local bossPos = Table.ListRandomSelectOne(randomPosMap)
          bossPosX = bossPos[1]
          bossPosY = bossPos[2]
        end
        initCodeMap[bossPosY][bossPosX] = ItemType.FreeFallBoss
        initCodeMap[bossPosY][bossPosX + 1] = ItemType.FreeFallBoss
        initCodeMap[bossPosY + 1][bossPosX] = ItemType.FreeFallBoss
        initCodeMap[bossPosY + 1][bossPosX + 1] = ItemType.FreeFallBoss
      end
    end
  end
  local args = {
    itemDataTable = self.m_itemDataTable,
    itemLayerDataTable = self.m_itemLayerDataTable,
    itemCacheDataTable = self.m_itemCacheDataTable,
    boardDataTable = self.m_boardDataTable,
    initCodeMap = initCodeMap,
    activityDBTable = self.m_dbTable,
    activityType = self:GetType(),
    boardSpawnFileName = self.m_activityDefinition.BoardSpawnConfigName
  }
  local verticalTiles = not Table.IsEmpty(initCodeMap) and #initCodeMap or FreefallActivityBoardModel.VerticalTiles
  self.m_maxDepth = not Table.IsEmpty(initCodeMap) and #initCodeMap or verticalTiles
  self.m_boardModel = FreefallActivityBoardModel.Create(args)
  local depth = self:GetBoardInitDepth()
  if depth == 0 then
    self.m_boardModel:LoadFile(1, 1)
    self:SetBoardInitDepth(verticalTiles + 1)
  end
  if GameConfig.IsTestMode() then
    local checkMap = require("Data.Config." .. self.m_activityDefinition.BoardModelConfigName)[1]
    local src, tar = FreefallActivityModel.GetToturialMergeItemPos()
    local code1 = checkMap and checkMap[src[2]] and checkMap[src[2]][src[1]]
    local code2 = checkMap and checkMap[tar[2]] and checkMap[tar[2]][tar[1]]
    local innerCode1, innerPrefix1 = ItemUtility.GetInnerCodeAndPrefixByCode(code1)
    local innerCode2, innerPrefix2 = ItemUtility.GetInnerCodeAndPrefixByCode(code2)
    Log.Assert(innerCode1 == innerCode2 and innerPrefix1 == nil, "freefall \229\188\149\229\175\188\229\144\136\229\185\182\231\154\132\228\184\164\228\184\170\228\189\141\231\189\174\230\163\139\229\173\144code\228\184\141\231\155\184\229\144\140")
  end
end

function FreefallActivityModel.GetToturialMergeItemPos()
  return {2, 1}, {1, 1}
end

function FreefallActivityModel:GetMapEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.Freefall,
    entryPrefabName = self.m_activityDefinition.MapEntryPrefabName,
    hudKey = self.m_activityDefinition.EntryButtonKey,
    checkFun = function()
      return self:CanShowEntry()
    end
  }
end

function FreefallActivityModel:GetBoardEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.Freefall,
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    checkFun = function()
      return self:CanShowEntry()
    end
  }
end

function FreefallActivityModel:CanShowEntry()
  return self:GetState() == ActivityState.Started and (self:GetCurRound() ~= nil and self:GetCurRound() <= #self.m_arrBossRewardConfigs or not self:IsActivityUnlockedByEnergyCost())
end

function FreefallActivityModel:IsActivityOpen()
  return self:GetState() == ActivityState.Started and self:GetCurRound() ~= nil and self:GetCurRound() <= #self.m_arrBossRewardConfigs
end

function FreefallActivityModel:_ChangeTokenNumber(num, scene)
  self.m_dbTable:Set(DBKey.DBTokenNumberKey, DBColumnValue, self:GetTokenNumber() + num)
end

function FreefallActivityModel:CanAddScore()
  return self:IsActivityOpen()
end

function FreefallActivityModel:AcquireActivityToken(num)
  self:_ChangeTokenNumber(num)
end

function FreefallActivityModel:GetTokenNumber()
  return self.m_dbTable:GetValue(DBKey.DBTokenNumberKey, DBColumnValue) or 0
end

function FreefallActivityModel:ConsumeToken()
  if self:GetTokenNumber() > 0 then
    self:_ChangeTokenNumber(-1)
    local message = {
      property = {
        [PROPERTY_TYPE] = self.m_activityDefinition.ActivityTokenPropertyType,
        [PROPERTY_COUNT] = 1
      }
    }
    EventDispatcher.DispatchEvent(EEventType.PropertyConsumed, message)
    return true
  end
  return false
end

function FreefallActivityModel:GetRemainTokenConvertReward()
  local remainTokenNum = self:GetTokenNumber()
  return {
    [PROPERTY_TYPE] = EPropertyType.Energy,
    [PROPERTY_COUNT] = math.min(remainTokenNum, FreefallActivityModel.TokenConvertEnergyMaxNum)
  }
end

function FreefallActivityModel:GetCurRound()
  return self.m_dbTable:GetValue(DBKey.CurRound, DBColumnValue)
end

function FreefallActivityModel:SetCurRound(round)
  self.m_dbTable:Set(DBKey.CurRound, DBColumnValue, round)
end

function FreefallActivityModel:GetMaxRound()
  return self.m_arrBossRewardConfigs and #self.m_arrBossRewardConfigs or 0
end

function FreefallActivityModel:GetBossRewardConfig(round)
  local rd = round or self:GetCurRound()
  return self.m_arrBossRewardConfigs and self.m_arrBossRewardConfigs[rd]
end

function FreefallActivityModel:GetRoundRewardConfig()
  return self.m_roundRewardConfig
end

function FreefallActivityModel:GetTargetConfigBySlotId(slot)
  local targetIndex = self.m_dbTable:GetValue(DBKey.TargetBossIndexSlot .. slot, DBColumnValue)
  local targetConfigsInCurRound = self:GetCurRound() and self.m_mapArrTargetConfigs[self:GetCurRound()]
  if targetIndex ~= nil and targetConfigsInCurRound ~= nil then
    return targetConfigsInCurRound[targetIndex]
  end
end

function FreefallActivityModel:GetTargetLastRemainHealthBySlotId(slot)
  return self.m_dbTable:GetValue(DBKey.TargetBossLastRemainHealthSlot .. slot, DBColumnValue) or 0
end

function FreefallActivityModel:SetTargetLastRemainHealthBySlotId(slot, hp)
  self.m_dbTable:Set(DBKey.TargetBossLastRemainHealthSlot .. slot, DBColumnValue, hp)
end

function FreefallActivityModel:GetTargetRemainHealthBySlotId(slot)
  return self.m_dbTable:GetValue(DBKey.TargetBossRemainHealthSlot .. slot, DBColumnValue) or 0
end

function FreefallActivityModel:_ConsumeTargetRemainHealthBySlotId(slot, count)
  local actualConsumeCount = math.min(count, self:GetTargetRemainHealthBySlotId(slot))
  self.m_dbTable:Set(DBKey.TargetBossRemainHealthSlot .. slot, DBColumnValue, self:GetTargetRemainHealthBySlotId(slot) - actualConsumeCount)
  return actualConsumeCount
end

function FreefallActivityModel:IsTargetBeaten(targetIndex)
  self:_Try2InitMapBeatenTargetIndex()
  return self.m_mapBeatenTargetIndex[targetIndex] ~= nil
end

function FreefallActivityModel:AcquireHitTokens(arrRewardInfos)
  local needRecordHitTargetInfo
  for _, rewardInfo in ipairs(arrRewardInfos) do
    if rewardInfo[PROPERTY_TYPE] == EPropertyType.FreefallBossToken then
      local selectSlot
      for slot = 1, self:GetTargetBossMaxNum() do
        local config = self:GetTargetConfigBySlotId(slot)
        if config ~= nil and not self:IsTargetBeaten(config:GetIndex()) then
          selectSlot = slot
          if self:GetTargetRemainHealthBySlotId(slot) > 0 then
            break
          end
        end
      end
      if selectSlot ~= nil then
        local count = self:_ConsumeTargetRemainHealthBySlotId(selectSlot, rewardInfo[PROPERTY_COUNT])
        if needRecordHitTargetInfo == nil then
          needRecordHitTargetInfo = GM.UIManager:IsViewExisting(self:GetDefinition().MainWindowPrefabName)
        end
        if needRecordHitTargetInfo then
          if self.m_cacheHitTargetInfos == nil then
            self.m_cacheHitTargetInfos = {}
          end
          self.m_cacheHitTargetInfos[#self.m_cacheHitTargetInfos + 1] = {originReward = rewardInfo, slot = selectSlot}
        end
        local config = self:GetTargetConfigBySlotId(selectSlot)
        GM.BIManager:LogAction(self.m_activityDefinition.BIHitTarget, {
          r = self:GetCurRound(),
          i = config:GetIndex(),
          ac = count,
          rh = self:GetTargetRemainHealthBySlotId(selectSlot),
          rt = rewardInfo[PROPERTY_TYPE],
          rc = rewardInfo[PROPERTY_COUNT]
        })
      end
    else
      for k, v in pairs(self.m_allTaskDatas) do
        if rewardInfo[PROPERTY_TYPE] == v:GetScorePropertyType() then
          v:AcquireScore(rewardInfo[PROPERTY_COUNT])
          if needRecordHitTargetInfo then
            if self.m_cacheHitTargetInfos == nil then
              self.m_cacheHitTargetInfos = {}
            end
            self.m_cacheHitTargetInfos[#self.m_cacheHitTargetInfos + 1] = {
              originReward = rewardInfo,
              slot = v:GetIndex()
            }
          end
        end
      end
    end
    if GameConfig.IsTestMode() then
      self:_AddAccumHitTokenCount(rewardInfo)
    end
  end
end

function FreefallActivityModel:GetTaskData(index)
  return self.m_allTaskDatas and self.m_allTaskDatas[index]
end

function FreefallActivityModel:MatchHitTargetInfos(reward)
  if self.m_cacheHitTargetInfos == nil then
    return nil
  end
  for i = 1, #self.m_cacheHitTargetInfos do
    local targetInfo = self.m_cacheHitTargetInfos[i]
    if targetInfo.originReward[PROPERTY_TYPE] == reward[PROPERTY_TYPE] and targetInfo.originReward[PROPERTY_COUNT] == reward[PROPERTY_COUNT] then
      table.remove(self.m_cacheHitTargetInfos, i)
      return targetInfo
    end
  end
end

function FreefallActivityModel:ClearCacheHitTargetInfos()
  self.m_cacheHitTargetInfos = nil
end

function FreefallActivityModel:HasTargetWithHitTokenPropertyType(hitTokenType)
  if hitTokenType == EPropertyType.FreefallBossToken then
    local items = self.m_boardModel:FilterItems(function(itemModel)
      return itemModel and itemModel:GetComponent(ItemFreefallBoss) and itemModel:GetComponent(ItemFreefallBoss):IsMainItem()
    end)
    return not Table.IsEmpty(items)
  end
  return false
end

function FreefallActivityModel:_SetTargetBeaten(targetIndex)
  if not self:IsTargetBeaten(targetIndex) then
    self.m_mapBeatenTargetIndex[targetIndex] = true
    local arrBeatenIndex = {}
    for targetIndex, _ in pairs(self.m_mapBeatenTargetIndex) do
      arrBeatenIndex[#arrBeatenIndex + 1] = targetIndex
    end
    self.m_dbTable:Set(DBKey.BeateanTargetIndex, DBColumnValue, table.concat(arrBeatenIndex, ","))
  end
end

function FreefallActivityModel:_AllTargetBeatenThisRound()
  local curRound = self:GetCurRound()
  if curRound == nil then
    return nil
  end
  for i = 1, #self.m_mapArrTargetConfigs[curRound] do
    if not self:IsTargetBeaten(i) then
      return false
    end
  end
  return true
end

function FreefallActivityModel:GetCurRoundBossScore()
  return self.m_dbTable:GetValue(DBKey.CurRoundBossScore, DBColumnValue) or 0
end

function FreefallActivityModel:AcquireBossScore(reward)
  local curScore = self:GetCurRoundBossScore()
  self.m_dbTable:Set(DBKey.CurRoundBossScore, DBColumnValue, curScore + reward[PROPERTY_COUNT])
  local roundRewardConfig = self:GetBossRewardConfig()
  for i = curScore + 1, curScore + reward[PROPERTY_COUNT] do
    local rewards = roundRewardConfig[i].rewards
    RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireTargetBeatenReward, CacheItemType.Stack)
  end
end

function FreefallActivityModel:AcquireRoundScore(reward)
  if self:GetCurRound() >= self:GetMaxRound() then
    local roundRewards = self:GetRoundRewardConfig().rewards
    RewardApi.AcquireRewardsLogic(roundRewards, EPropertySource.Give, self.m_activityDefinition.BIAcquireRoundReward, CacheItemType.Stack)
  end
end

function FreefallActivityModel:_ClearBeatenTargetIndex()
  self.m_dbTable:Remove(DBKey.BeateanTargetIndex, DBColumnValue)
  self.m_dbTable:Remove(DBKey.CurRoundBossScore, DBColumnValue)
  self.m_mapBeatenTargetIndex = nil
  for i = 1, self:GetTargetBossMaxNum() do
    self.m_dbTable:Remove(DBKey.TargetBossIndexSlot .. i, DBColumnValue)
    self.m_dbTable:Remove(DBKey.TargetBossRemainHealthSlot .. i, DBColumnValue)
    self.m_dbTable:Remove(DBKey.TargetBossItemSlotId .. i, DBColumnValue)
    self.m_dbTable:Remove(DBKey.TargetBossChargeRound .. i, DBColumnValue)
    self.m_dbTable:Remove(DBKey.TargetBossLastRemainHealthSlot .. i, DBColumnValue)
  end
  self.m_dbTable:Remove(DBKey.TargetBossMaxNum, DBColumnValue)
end

function FreefallActivityModel:_Try2InitMapBeatenTargetIndex()
  if self.m_mapBeatenTargetIndex == nil then
    self.m_mapBeatenTargetIndex = {}
    local beatStr = self.m_dbTable:GetValue(DBKey.BeateanTargetIndex, DBColumnValue)
    if not StringUtil.IsNilOrEmpty(beatStr) then
      local arr = StringUtil.Split(beatStr, ",")
      for _, str in ipairs(arr) do
        local index = tonumber(str)
        if index ~= nil then
          self.m_mapBeatenTargetIndex[index] = true
        end
      end
    end
  end
end

function FreefallActivityModel:_Try2RaiseNewTarget(slot)
  local curRound = self:GetCurRound()
  if curRound == nil then
    return false
  end
  local arrTargetConfigs = self.m_mapArrTargetConfigs[curRound]
  if arrTargetConfigs == nil or #arrTargetConfigs == 0 then
    return false
  end
  local selectedTargetIndex
  local mapRaisedTargetIndexInOtherSlots = {}
  for i = 1, self:GetTargetBossMaxNum() do
    local targetConfig = self:GetTargetConfigBySlotId(i)
    if targetConfig then
      mapRaisedTargetIndexInOtherSlots[targetConfig:GetIndex()] = true
    end
  end
  for i = 1, #arrTargetConfigs do
    if arrTargetConfigs[i] and not self:IsTargetBeaten(i) and not mapRaisedTargetIndexInOtherSlots[i] then
      selectedTargetIndex = i
      break
    end
  end
  if selectedTargetIndex ~= nil then
    self.m_dbTable:Set(DBKey.TargetBossIndexSlot .. slot, DBColumnValue, selectedTargetIndex)
    self.m_dbTable:Set(DBKey.TargetBossRemainHealthSlot .. slot, DBColumnValue, arrTargetConfigs[selectedTargetIndex]:GetMaxHealth())
    self:SetTargetLastRemainHealthBySlotId(slot, arrTargetConfigs[selectedTargetIndex]:GetMaxHealth())
    return true
  end
  return false
end

function FreefallActivityModel:OnSettlement()
  local curRound = self:GetCurRound()
  if curRound == nil then
    return
  end
  local settlementInfo = {}
  for slot = 1, self:GetTargetBossMaxNum() do
    if self:GetTargetRemainHealthBySlotId(slot) == 0 then
      local targetConfig = self:GetTargetConfigBySlotId(slot)
      if not self:IsTargetBeaten(targetConfig:GetIndex()) then
        self:_SetTargetBeaten(targetConfig:GetIndex())
        local reward = {
          [PROPERTY_TYPE] = EPropertyType.FreefallBossRewardToken,
          [PROPERTY_COUNT] = 1
        }
        RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, self.m_activityDefinition.BIAcquireTargetBeatenScore, EGameMode.Main, CacheItemType.Stack)
        local raiseSuccess = self:_Try2RaiseNewTarget(slot)
        local oldBossItmes = self.m_boardModel:FilterItems(function(itemModel)
          return itemModel:GetComponent(ItemFreefallBoss) ~= nil and itemModel:GetComponent(ItemFreefallBoss):GetSlotId() == slot
        end)
        local oldBossPos, oldBossSlotId
        if not Table.IsEmpty(oldBossItmes) then
          for _, item in pairs(oldBossItmes) do
            if item:GetComponent(ItemFreefallBoss):IsMainItem() then
              oldBossPos = {
                item:GetPosition():GetX(),
                item:GetPosition():GetY()
              }
              oldBossSlotId = item:GetComponent(ItemFreefallBoss):GetSlotId()
            end
            self.m_boardModel:RemoveItem(item)
            self.m_boardModel.event:Call(BoardEventType.BatchRemoveItems, {
              Removed = {item}
            })
          end
        end
        if raiseSuccess then
          local posOffset = {
            {0, 0},
            {0, 1},
            {1, 0},
            {1, 1}
          }
          local newBossConfig = self:GetTargetConfigBySlotId(slot)
          local x, y = newBossConfig:GetInitPos()
          local isValidPos = x < FreefallActivityBoardModel.HorizontalTiles and y < FreefallActivityBoardModel.VerticalTiles
          if isValidPos then
            for i = 1, #posOffset do
              local item = self.m_boardModel:GetItem(FreefallActivityBoardModel.CreatePosition(x + posOffset[i][1], y + posOffset[i][2]))
              if item and item:GetComponent(ItemFreefallBoss) ~= nil then
                isValidPos = false
                break
              end
            end
          end
          local newBossPos
          if isValidPos then
            newBossPos = {x, y}
          else
            newBossPos = self:_GetBossRandomPos()
          end
          for i = 1, #posOffset do
            self.m_boardModel:MoveItem({
              newBossPos[1] + posOffset[i][1],
              newBossPos[2] + posOffset[i][2]
            }, {
              oldBossPos[1] + posOffset[#posOffset + 1 - i][1],
              oldBossPos[2] + posOffset[#posOffset + 1 - i][2]
            })
          end
          self.m_boardModel:CreateNewBossItem(newBossPos, oldBossSlotId)
          local boardview = GM.ModeViewController:GetFreefallActivityBoardView()
          if boardview then
            boardview:CreateBossItem(newBossPos)
          end
        end
        if settlementInfo.BeatenSlots == nil then
          settlementInfo.BeatenSlots = {}
        end
        settlementInfo.BeatenSlots[#settlementInfo.BeatenSlots + 1] = {
          Slot = slot,
          Reward = reward,
          RaiseNew = raiseSuccess
        }
        local boardview = GM.ModeViewController:GetFreefallActivityBoardView()
        if boardview then
          boardview:UpdateHitPointTip()
        end
        EventDispatcher.DispatchEvent(EEventType.FreefallActivityBeatTarget, settlementInfo.BeatenSlots[#settlementInfo.BeatenSlots])
        local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
        if window then
          window:_SetEventLock(true)
        end
        if not self:_AllTargetBeatenThisRound() then
          self.m_boardModel:SetBoardState(BoardState.Falling)
        end
        return
      end
    end
  end
  if self:_AllTargetBeatenThisRound() then
    self:LogActivity(EBIType.ActivityRankUp, self:GetCurRound())
    self:_StartNewRound()
    local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if self:IsActivityOpen() then
      if window then
        window:PlayStartNewRoundAnimation()
      end
    else
      if window then
        window:Close()
      end
      EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
      GM.UIManager:OpenView(self.m_activityDefinition.CompleteWindowPrefabName, self:GetType(), true)
    end
    return nil, true
  end
  for slot = 1, self:GetTargetBossMaxNum() do
    if self:GetTargetRemainHealthBySlotId(slot) > 0 then
      local bossConfig = self:GetTargetConfigBySlotId(slot)
      local arrMoveHp = bossConfig:GetMoveHp()
      local maxHp = bossConfig:GetMaxHealth()
      local curHp = self:GetTargetRemainHealthBySlotId(slot)
      local lastHp = self:GetTargetLastRemainHealthBySlotId(slot)
      self:SetTargetLastRemainHealthBySlotId(slot, curHp)
      if not Table.IsEmpty(arrMoveHp) then
        for k, v in pairs(arrMoveHp) do
          local lineHp = v * maxHp / 100
          if lastHp >= lineHp and curHp < lineHp then
            self:_TryMoveBossItem(slot)
            GM.UIManager:SetEventLock(true)
            DelayExecuteFunc(function()
              GM.UIManager:SetEventLock(false)
              self.m_boardModel:SetBoardState(BoardState.Falling)
            end, 3)
            return
          end
        end
      end
    end
  end
  local bossItems = self.m_boardModel:FilterItems(function(itemModel)
    return itemModel and itemModel:GetComponent(ItemFreefallBoss) and itemModel:GetComponent(ItemFreefallBoss):IsMainItem()
  end)
  if not Table.IsEmpty(bossItems) then
    for _, v in pairs(bossItems) do
      local comp = v:GetComponent(ItemFreefallBoss)
      local targetConfig = self:GetTargetConfigBySlotId(comp:GetSlotId())
      if targetConfig and not self:IsTargetBeaten(targetConfig:GetIndex()) and comp:CanCastBossSkill() then
        comp:CastBossSkill()
        GM.UIManager:SetEventLock(true)
        DelayExecuteFunc(function()
          GM.UIManager:SetEventLock(false)
          self.m_boardModel:SetBoardState(BoardState.Settlement)
        end, 3)
        return
      end
    end
  end
  EventDispatcher.DispatchEvent(self.m_activityDefinition.OnSettlementEvent, settlementInfo)
  return true
end

function FreefallActivityModel:_TryMoveBossItem(slot)
  local function filter(itemModel)
    return itemModel:GetComponent(ItemFreefallBoss) ~= nil and itemModel:GetComponent(ItemFreefallBoss):IsMainItem() and itemModel:GetComponent(ItemFreefallBoss):GetSlotId() == slot
  end
  
  local res = self.m_boardModel:FilterItems(filter)
  local targetItem = res and res[1]
  Log.Assert(targetItem ~= nil, "FreefallActivityModel:_TryMoveBossItem  can not find move item")
  local bossMap = {}
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    local val = 0
    if item and item:GetComponent(ItemFreefallBoss) or position:GetY() == 1 then
      val = 1
    end
    if bossMap[position:GetY()] == nil then
      bossMap[position:GetY()] = {}
    end
    bossMap[position:GetY()][position:GetX()] = val
  end
  local randomPosMap = {}
  for y = 1, #bossMap - 1 do
    for x = 1, #bossMap[y] - 1 do
      if bossMap[y][x] == 0 and bossMap[y + 1][x + 1] == 0 and bossMap[y + 1][x] == 0 and bossMap[y][x + 1] == 0 then
        table.insert(randomPosMap, {x, y})
      end
    end
  end
  Log.Assert(not Table.IsEmpty(randomPosMap), "freefall no valid new pos")
  local originPos = targetItem:GetPosition()
  local targetPos = Table.ListRandomSelectOne(randomPosMap)
  local boardView = GM.ModeViewController:GetFreefallActivityBoardView()
  local itemView = boardView:GetItemView(targetItem)
  local itemFreefallBossView = itemView:GetComponent(ItemFreefallBossView)
  itemFreefallBossView:PlayBossMoveAnimation(true)
  for _, v in pairs({
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  }) do
    local fromPos = FreefallActivityBoardModel.CreatePosition(originPos:GetX() + v[1], originPos:GetY() + v[2])
    local toPos = FreefallActivityBoardModel.CreatePosition(targetPos[1] + v[1], targetPos[2] + v[2])
    local item1 = self.m_boardModel:GetItem(fromPos)
    local item2 = self.m_boardModel:GetItem(toPos)
    self.m_boardModel:_SetItem(fromPos, item2, false)
    self.m_boardModel:_SetItem(toPos, item1, false)
    DelayExecuteFunc(function()
      if item1 then
        item1:SetPosition(toPos)
      end
      if item2 then
        item2:SetPosition(fromPos)
      end
      itemFreefallBossView:PlayBossMoveAnimation(false)
    end, 2.2)
  end
  EventDispatcher.DispatchEvent(EEventType.FreefallActivityBossMove, {
    bInverse = targetPos[1] < originPos:GetX()
  })
  DelayExecuteFunc(function()
    local boardview = GM.ModeViewController:GetFreefallActivityBoardView()
    if boardview then
      boardview:UpdateHitPointTip()
    end
  end, 2.3)
end

function FreefallActivityModel:_GetBossRandomPos()
  local bossMap = {}
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    local val = 0
    if item and item:GetComponent(ItemFreefallBoss) or position:GetY() == 1 then
      val = 1
    end
    if bossMap[position:GetY()] == nil then
      bossMap[position:GetY()] = {}
    end
    bossMap[position:GetY()][position:GetX()] = val
  end
  local randomPosMap = {}
  for y = 1, #bossMap - 1 do
    for x = 1, #bossMap[y] - 1 do
      if bossMap[y][x] == 0 and bossMap[y + 1][x + 1] == 0 and bossMap[y + 1][x] == 0 and bossMap[y][x + 1] == 0 then
        table.insert(randomPosMap, {x, y})
      end
    end
  end
  Log.Assert(not Table.IsEmpty(randomPosMap), "freefall no valid new pos")
  return Table.ListRandomSelectOne(randomPosMap)
end

function FreefallActivityModel:_StartNewRound()
  if self.m_arrBossRewardConfigs == nil or #self.m_arrBossRewardConfigs == 0 then
    return
  end
  local nextRound = self:GetCurRound()
  if nextRound == nil then
    nextRound = 1
    self:LogActivity(EBIType.ActivityRankUp, 0)
  else
    nextRound = nextRound + 1
  end
  self:_ClearCurrentRoundTargetDatas()
  self:SetCurRound(nextRound)
  if self.m_boardModel ~= nil then
    self.m_boardModel:Destroy()
    self.m_boardModel = nil
  end
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  local boardView = GM.ModeViewController and GM.ModeViewController:GetFreefallActivityBoardView()
  if boardView ~= nil then
    boardView:SetPromptLock(true)
  end
  self:SetBoardInitDepth(0)
  self:_LoadActivityBoardModel()
  for slot = 1, self:GetTargetBossMaxNum() do
    self:_Try2RaiseNewTarget(slot)
  end
end

function FreefallActivityModel:_ClearCurrentRoundTargetDatas()
  self:_ClearBeatenTargetIndex()
end

function FreefallActivityModel:GetBoardModel()
  return self.m_boardModel
end

function FreefallActivityModel:SetBoardStateRecoveryState(str)
  if str == nil then
    self.m_dbTable:Remove(DBKey.DBKeyBoardStateRecoveryKey)
  else
    self.m_dbTable:Set(DBKey.DBKeyBoardStateRecoveryKey, DBColumnValue, str)
  end
end

function FreefallActivityModel:GetBoardStateRecoveryState()
  return self.m_dbTable:GetValue(DBKey.DBKeyBoardStateRecoveryKey, DBColumnValue)
end

function FreefallActivityModel:GetEndRewards()
  if not Table.IsEmpty(self.m_endRewards) then
    return self.m_endRewards
  end
  local rewards = {}
  if self.m_boardModel == nil then
    return rewards
  end
  
  local function _MergeRewards(to, from)
    if not Table.IsEmpty(from) then
      for _, v in pairs(from) do
        if not FreefallActivityModel.IsHitTokenType(v[PROPERTY_TYPE]) and v[PROPERTY_TYPE] ~= EPropertyType.FreefallBossRewardToken and v[PROPERTY_TYPE] ~= EPropertyType.FreefallRoundRewardToken then
          RewardApi.MergeRewards(to, {v})
        end
      end
    end
  end
  
  local bossScore = 0
  for slot = 1, self:GetTargetBossMaxNum() do
    if self:GetTargetRemainHealthBySlotId(slot) == 0 then
      local targetConfig = self:GetTargetConfigBySlotId(slot)
      if targetConfig and not self:IsTargetBeaten(targetConfig:GetIndex()) then
        self:_SetTargetBeaten(targetConfig:GetIndex())
        bossScore = bossScore + 1
      end
    end
  end
  local curScore = self:GetCurRoundBossScore()
  self.m_dbTable:Set(DBKey.CurRoundBossScore, DBColumnValue, curScore + bossScore)
  local bossRewardConfig = self:GetBossRewardConfig()
  for i = curScore + 1, curScore + bossScore do
    _MergeRewards(rewards, bossRewardConfig[i].rewards)
  end
  if 0 < bossScore and self:_AllTargetBeatenThisRound() and self:GetCurRound() >= self:GetMaxRound() then
    local roundRewardConfig = self:GetRoundRewardConfig()
    local roundRewards = roundRewardConfig and roundRewardConfig.rewards
    _MergeRewards(rewards, roundRewards)
  end
  self.m_endRewards = rewards
  return rewards
end

function FreefallActivityModel:_GetAccumHitTokenDBKey(hitTokenType)
  if self.m_mapHitToken2DBKey == nil then
    self.m_mapHitToken2DBKey = {
      [EPropertyType.FreefallToken1] = DBKey.DBKeyAccumFreefallToken1,
      [EPropertyType.FreefallToken2] = DBKey.DBKeyAccumFreefallToken2,
      [EPropertyType.FreefallToken3] = DBKey.DBKeyAccumFreefallToken3,
      [EPropertyType.FreefallBossToken] = DBKey.DBKeyAccumFreefallBossToken
    }
  end
  return self.m_mapHitToken2DBKey[hitTokenType]
end

function FreefallActivityModel:GetAccumHitTokenCount(hitTokenType)
  return self.m_dbTable:GetValue(self:_GetAccumHitTokenDBKey(hitTokenType), DBColumnValue) or 0
end

function FreefallActivityModel:_AddAccumHitTokenCount(rewardInfo)
  self.m_dbTable:Set(self:_GetAccumHitTokenDBKey(rewardInfo[PROPERTY_TYPE]), DBColumnValue, self:GetAccumHitTokenCount(rewardInfo[PROPERTY_TYPE]) + rewardInfo[PROPERTY_COUNT])
end

function FreefallActivityModel:GetHuntBookConfig()
  return self.m_bookConfig
end

function FreefallActivityModel:GetBoardInitDepth()
  return self.m_dbTable:GetValue(DBKey.BoardInitDepth, "value") or 0
end

function FreefallActivityModel:SetBoardInitDepth(y)
  self.m_dbTable:Set(DBKey.BoardInitDepth, "value", y)
end

function FreefallActivityModel:IsTaskRewardClaimed(id)
  return self.m_dbTable:GetValue("task_reward_" .. id, "value") == 1
end

function FreefallActivityModel:SetTaskRewardClaimed(id)
  return self.m_dbTable:Set("task_reward_" .. id, "value", 1)
end

function FreefallActivityModel:GetTaskItemAccNum(type)
  return self.m_dbTable:GetValue("task_acc_" .. type, "value") or 0
end

function FreefallActivityModel:AddTaskItemAccNum(type, num)
  local curNum = self:GetTaskItemAccNum(type)
  curNum = curNum + num
  self.m_dbTable:Set("task_acc_" .. type, "value", curNum)
  EventDispatcher.DispatchEvent(EEventType.FreefallActivityTaskUpdate)
end

function FreefallActivityModel:SetTargetBossMaxNum(num)
  self.m_dbTable:Set(DBKey.TargetBossMaxNum, "value", num)
end

function FreefallActivityModel:GetTargetBossMaxNum()
  return self.m_dbTable:GetValue(DBKey.TargetBossMaxNum, "value") or 0
end

function FreefallActivityModel:SetTargetBossItemSlotId(slotId, itemId)
  self.m_dbTable:Set(DBKey.TargetBossItemSlotId .. itemId, "value", slotId)
end

function FreefallActivityModel:GetTargetBossItemSlotId(itemId)
  return self.m_dbTable:GetValue(DBKey.TargetBossItemSlotId .. itemId, "value")
end

function FreefallActivityModel:GetBossSkillChargeRound(slotId)
  return self.m_dbTable:GetValue(DBKey.TargetBossChargeRound .. slotId, "value") or 0
end

function FreefallActivityModel:SetBossSkillChargeRound(slotId, num)
  self.m_dbTable:Set(DBKey.TargetBossChargeRound .. slotId, "value", num)
end

function FreefallActivityModel:ChargeForBossSkill(slotId)
  local curChr = self:GetBossSkillChargeRound(slotId)
  self:SetBossSkillChargeRound(slotId, curChr + 1)
end

function FreefallActivityModel:CanCastBossSkill(slotId)
  local config = self:GetTargetConfigBySlotId(slotId)
  if config and config:GetChargeRound() and self:GetBossSkillChargeRound(slotId) >= config:GetChargeRound() then
    local num1, num2 = self:GetBossSkillConvertItemNum(slotId)
    local itemPool = self.m_boardModel:GetCanConvertedItemPool()
    if num1 + num2 <= #itemPool then
      return true
    end
  end
end

function FreefallActivityModel:GetBossSkillConvertItemNum(slotId)
  local config = self:GetTargetConfigBySlotId(slotId)
  if config then
    return config:GetBossSkillConvertNum()
  end
end

function FreefallActivityModel:CastBossSkill(slotId)
  local num1, num2 = self:GetBossSkillConvertItemNum(slotId)
  self.m_boardModel:ConvertItemToBlock(num1, num2)
end

function FreefallActivityModel:IsActivityUnlockedByEnergyCost()
  return (self.m_dbTable:GetValue(DBKey.DBIsUnlockedByEnergy, "value") or 0) == 1
end

function FreefallActivityModel:GetEnergyLockCount()
  return tonumber(self:GetGeneralConfig("energyLock") or "0") or 0
end

function FreefallActivityModel:_OnConsumeEnergy(msg)
  BaseActivityModel._OnConsumeEnergy(self, msg)
  if self:GetState() == ActivityState.Started and not self:IsActivityUnlockedByEnergyCost() and self.m_dbTable:GetValue(DBKey.DBTokenNumberKey, "value") == nil and (self:GetEnergyLockCount() <= 0 or self:GetCostEnertyCount() >= self:GetEnergyLockCount()) then
    self.m_dbTable:Set(DBKey.DBIsUnlockedByEnergy, "value", 1)
    self:_ChangeTokenNumber(FreefallActivityModel.InitTokenNum)
    GM.BIManager:LogAcquire(self.m_activityDefinition.ActivityTokenPropertyType, FreefallActivityModel.InitTokenNum, self.m_activityDefinition.BIAddTokenFree, true)
    if 0 < #self.m_arrBossRewardConfigs then
      self:_StartNewRound()
    end
    self:ResetWindowOpened()
    EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
    EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  end
  EventDispatcher.DispatchEvent(EEventType.FreefallActivityUpdateBoardEntry)
end

function FreefallActivityModel:CanShowSecondOpenTutorial()
  return self.m_dbTable:GetValue(DBKey.CanShowSecondOpenTutorial, "value") == 1
end

function FreefallActivityModel:SetSecondOpenTutorialShowed()
  self.m_dbTable:Set(DBKey.CanShowSecondOpenTutorial, "value", 0)
end

function FreefallActivityModel:GetEnergyLockTutorialShowed()
  return self.m_dbTable:GetValue(DBKey.IsLockTutorialShowed, "value") == 1
end

function FreefallActivityModel:SetEnergyLockTutorialShowed()
  self.m_dbTable:Set(DBKey.IsLockTutorialShowed, "value", 1)
end

function FreefallActivityModel:OnLackStepToken()
  if self:IsActivityOpen() then
    local trigger = self:GetLackTokenTrigger()
    if trigger then
      return GM.BundleManager:TryTriggerActivityBundle(trigger)
    end
  end
  return false
end

function FreefallActivityModel:GetLackTokenTrigger()
  return self:GetType() .. "LackToken"
end

function FreefallActivityModel:IsFirstItemDropped()
  return self.m_dbTable:GetValue(DBKey.IsFirstItemDropped, "value") == 1
end

function FreefallActivityModel:SetFirstItemDropped()
  self.m_dbTable:Set(DBKey.IsFirstItemDropped, "value", 1)
end
