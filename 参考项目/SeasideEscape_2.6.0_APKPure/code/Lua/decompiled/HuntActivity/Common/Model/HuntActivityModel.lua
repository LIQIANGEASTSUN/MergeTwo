HuntActivityEventType = {StateChanged = 1, UpdateBundle = 2}
HuntActivityModel = setmetatable({
  eModelType = ActivityModelType.Hunt
}, BaseActivityModel)
HuntActivityModel.__index = HuntActivityModel
HuntActivityModel.BookChainName = "HuntItemBookChain"
HuntActivityModel.CurrentMergeLevel = "currentMergeLevel"
HuntActivityModel.CurrentDeuptyMergeLevel = "currentDeputyMergeLevel"
HuntActivityModel.GenerateRoundTotalCountKey = "generateRoundTotalCount"
HuntActivityModel.GenerateRoundValidCountKey = "generateRoundValidCount"
HuntActivityModel.ItemGived = "huntItemGived"
HuntActivityModel.TokenKey = "token"
HuntActivityModel.TokenStageKey = "tksg"
HuntActivityModel.CurrentPhase = "curPhase"
HuntActivityModel.CostEnergyNum = "c_e_n"
HuntActivityModel.CloudState = "cl_s"
HuntActivityModel.ItemDeleteTutorialShowed = "htidts"
HuntActivityModel.ActivityStartTutorialShowed = "htasts"
HuntActivityModel.MineScoreType = "digscore"
HuntActivityModel.MonsterScoreType = "hitscore"
HuntActivityModel.DigScoreKey = "digscorekey"
HuntActivityModel.BoardInitDepth = "boardInitDepth"
HuntActivityModel.StoryShowed = "StoryShowed"
HuntActivityModel.ItemGotted = "huntItemGotted"
HuntActivityModel.SwallowLockState = "htswallowlock"
HuntActivityModel.CloudKeyType = "huntkey"
HuntActivityModel.HuntCloudKeyFirstAppeared = "htckfa"
HuntActivityModel.HuntOrderShowAvatar = "htosa"
HuntActivityModel.SigLevelKey = "sigLv"
HuntActivityModel.SpreadFirstMerge = "spreadFirstMerge"
HuntActivityModel.MonsterSpreadFlag = "monsterSpreadFlag"
HuntActivityModel.ScrollRow = "scrollRows"
HuntActivityModel.MultiEnergyAnimKey = "multiAnim"
HuntActivityModel.HuntCobweb = "huntCobweb"
HuntActivityModel.HuntCloud = "huntCloud"
HuntActivityModel.HuntTransform = "huntTransform"
HuntActivityModel.HuntTutorialInitItem = "huntTutorialItem"
HuntActivityModel.HuntExplain = "HuntExplain"
HuntActivityModel.CachePdCode = "cachePdCode"
HuntActivityModel.ForceSpreadCount = "forceSpreadCount"
HuntActivityModel.LastKey = "lastKey"
HuntActivityModel.LastKeyLv = "lastKeyLv"
HuntActivityModel.MultiEnergyCostKey = "huntCost"
HuntActivityModel.HuntBoardReward = "huntBoardReward"

function HuntActivityModel:LogActivity(scene, action, type)
  GM.BIManager:LogActivity(type or self.m_type, self:GetId(), scene, action)
end

function HuntActivityModel:Init(activityType, activityDataTable, itemDataTable, itemLayerDataTable, itemCacheDataTable, itemTransformDataTable)
  self.m_itemDataTable = itemDataTable
  self.m_itemLayerDataTable = itemLayerDataTable
  self.m_itemCacheDataTable = itemCacheDataTable
  self.m_itemTransformLayerDataTable = itemTransformDataTable
  self.m_activityDefinition = HuntActivityDefinition[activityType]
  if self.m_activityDefinition.TokenType then
    self.m_tokenHelper = ActivityTokenHelper.Create(self, activityDataTable, self.m_activityDefinition.TokenType, EFlyElementLabelStyle.Default, self.GetCustomLabelStyle, {
      specialFloat = false,
      floatFirst = true,
      floatHeight = 100,
      floatDelay = 0.5,
      floatScale = 1.2,
      endScale = 1
    })
  end
  self.m_endWindowPopupHelper = ActivityEndPopupHelper.Create(self, activityDataTable)
  BaseActivityModel.Init(self, activityType, activityDataTable)
  self:CreateEnergyModel()
  EventDispatcher.AddListener(EEventType.ItemSpread, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.ItemRetrieved, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.PopCachedItem, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.ItemReplaced, self, self._TryShowItemDeleteButton)
  EventDispatcher.AddListener(EEventType.OpenView, self, self._OnOpenView)
  EventDispatcher.AddListener(EEventType.HuntBoardScrollFinished, self, self._OnBoardScrollFinished)
end

function HuntActivityModel:Destroy()
  BaseActivityModel.Destroy(self)
  if self.m_boardModel ~= nil then
    self.m_boardModel:Destroy()
  end
  if self.m_tokenHelper then
    self.m_tokenHelper:Destroy()
  end
  self.m_endWindowPopupHelper:Destroy()
end

function HuntActivityModel.GetActiveModel()
  local model
  for activityType, definition in pairs(HuntActivityDefinition) do
    model = GM.ActivityManager:GetModel(activityType)
    if model ~= nil and model:GetState() == ActivityState.Started then
      return model
    end
  end
end

function HuntActivityModel.GenerateLackTriggerToken(activityType)
  local season = string.sub(activityType, 5)
  if season then
    local trigger = "lackHunt" .. season .. "Token"
    if Table.Contain(EBundleTriggerType, trigger) then
      return trigger
    end
  end
end

function HuntActivityModel:GetEndWindowPopupHelper()
  return self.m_endWindowPopupHelper
end

function HuntActivityModel:_LoadOtherServerConfig(config)
  local arrItemConfig = config.treasure_hunt_items
  self.m_config.arrMergeLine = {}
  self.m_config.arrDeputyMergeLine = {}
  self.m_config.arrEnergyCostMap = {}
  self.m_huntAchiPieceItemConfig = {}
  for _, config in pairs(arrItemConfig) do
    if config.deputy ~= 1 then
      table.insert(self.m_config.arrMergeLine, config)
    else
      table.insert(self.m_config.arrDeputyMergeLine, config)
    end
    if config.energyCost ~= nil then
      self.m_config.arrEnergyCostMap[config.item] = config.energyCost
    else
      self.m_config.arrEnergyCostMap[config.item] = nil
    end
    if config.huntAchiPiece == 1 then
      self.m_huntAchiPieceItemConfig[config.item] = true
    end
  end
  table.sort(self.m_config.arrMergeLine, function(a, b)
    return a.index < b.index
  end)
  self.m_pdItemType = self:GetGeneralConfig(HuntActivityModel.CachePdCode)
  Log.Assert(self.m_pdItemType ~= nil, self.m_type .. "\231\188\186\229\176\145\230\175\141\230\163\139\229\173\144\233\133\141\231\189\174", LogTag.ConfigCheck)
  self.m_fixedSpreadCount = tonumber(self:GetGeneralConfig(HuntActivityModel.ForceSpreadCount)) or 0
  self.m_config.mapChain = {}
  local itemDataModel = GM.ItemDataModel
  for _, itemConfig in pairs(self.m_config.arrMergeLine) do
    self.m_config.mapChain[itemDataModel:GetChainId(itemConfig.item)] = true
  end
  self:UpdateDigReward(config.event_rewards)
  self.m_bookConfig = config.dig_book_contents
  self:_LoadPhaseConfig(config)
  if self.m_tokenHelper then
    self.m_tokenHelper:LoadConfig(config.token_general_layout)
  end
  self.m_lastKey = self:GetGeneralConfig(HuntActivityModel.LastKey)
  self.m_lastKeyLv = tonumber(self:GetGeneralConfig(HuntActivityModel.LastKeyLv)) or self:GetMergeLength()
  self.m_mapMultiTypeUnlockNum = {}
  local strInfo = self:GetGeneralConfig(HuntActivityModel.MultiEnergyCostKey)
  if not StringUtil.IsNilOrEmpty(strInfo) then
    for _, v in pairs(StringUtil.Split(strInfo, ";")) do
      local args = StringUtil.SplitToNum(v, "-")
      self.m_mapMultiTypeUnlockNum[args[1]] = args[2]
    end
  end
end

function HuntActivityModel:UpdateDigReward(rewardConfig)
  self.m_digReward = {}
  self.m_digCircleReward = {}
  self.m_digStageReward = {}
  if not Table.IsEmpty(rewardConfig) then
    table.sort(rewardConfig, function(a, b)
      return a.level < b.level
    end)
    for _, cfg in ipairs(rewardConfig) do
      if cfg.stage then
        if not self.m_digStageReward[cfg.level] then
          self.m_digStageReward[cfg.level] = {}
        end
        table.insert(self.m_digStageReward[cfg.level], Table.DeepCopy(cfg, true))
      elseif cfg.circle ~= 1 then
        table.insert(self.m_digReward, Table.DeepCopy(cfg, true))
      else
        table.insert(self.m_digCircleReward, Table.DeepCopy(cfg, true))
      end
    end
    local sumScore = 0
    for _, cfg in ipairs(self.m_digReward) do
      sumScore = sumScore + cfg.score
      cfg.score = sumScore
    end
  end
end

local DeleteSpread = "deletespread"
local ArrDeleteSpreadKey = {
  "Spread_Weight",
  "Spread_ItemMaxNumber",
  "Spread_TransformNumber",
  "Spread_Auto"
}

function HuntActivityModel:_ParseServerItemConfig(config)
  if Table.IsEmpty(config) or Table.IsEmpty(config.item_config) then
    return
  end
  for _, cfg in pairs(config.item_config) do
    local code = cfg.type
    local changedValue = {}
    if cfg.Monster_Weigt and cfg.Monster_ItemMaxNumber then
      changedValue.Monster_Weigt = cfg.Monster_Weigt
      changedValue.Monster_ItemMaxNumber = cfg.Monster_ItemMaxNumber
      self:UpdateItemConfig(code, changedValue)
    else
      local bDeleteSpread = false
      if cfg.Spread_Weight then
        for _, spreadConfig in ipairs(cfg.Spread_Weight) do
          if spreadConfig.Code == DeleteSpread then
            bDeleteSpread = true
            break
          end
        end
        if bDeleteSpread and #cfg.Spread_Weight > 1 then
          Log.Assert(false, "item_config Error!!! type is " .. code)
        end
        if GameConfig.IsTestMode() then
          local spreadCalNum = 0
          for _, spreadConfig in ipairs(cfg.Spread_Weight) do
            spreadCalNum = spreadCalNum + spreadConfig.Weight
          end
          if spreadCalNum ~= cfg.Spread_ItemMaxNumber then
            Log.Assert(false, "item_config Error!!! \229\165\150\229\138\177\232\174\161\231\174\151\231\187\147\230\158\156\228\184\142\233\133\141\231\189\174\231\187\147\230\158\156\228\184\141\231\155\184\231\173\137! type is " .. code)
          end
        end
      end
      if bDeleteSpread then
        self:UpdateItemConfig(code, changedValue, ArrDeleteSpreadKey)
      else
        for key, val in pairs(cfg) do
          if key ~= "type" then
            changedValue[key] = val
          end
        end
        self:UpdateItemConfig(code, changedValue)
      end
    end
  end
end

function HuntActivityModel:_LoadPhaseConfig(config)
  self.m_maxPhaseNum = 1
  self.m_mapPhase2Config = {}
  local arrPhase = config.treasure_hunt_phase
  if not Table.IsEmpty(arrPhase) then
    for _, config in ipairs(arrPhase) do
      self.m_mapPhase2Config[config.phase] = config
      self.m_maxPhaseNum = math.max(self.m_maxPhaseNum, config.phase)
    end
    if GameConfig.IsTestMode() then
      for i = 1, self.m_maxPhaseNum do
        if self.m_mapPhase2Config[i] == nil then
          Log.Error("\229\176\143\230\163\139\231\155\152\229\164\154\233\152\182\230\174\181\231\188\186\229\176\145\231\172\172" .. i .. "\228\184\170\233\152\182\230\174\181\231\154\132\233\133\141\231\189\174\239\188\140\232\175\183\230\163\128\230\159\165\239\188\129")
        end
      end
    end
  end
end

function HuntActivityModel:_DropData()
  BaseActivityModel._DropData(self)
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  self.m_itemCacheDataTable:Drop()
  if self.m_itemTransformLayerDataTable then
    self.m_itemTransformLayerDataTable:Drop()
  end
  self.m_endRewards = nil
  self.m_bHasBookFinalRewards = nil
  if self.m_boardModel ~= nil then
    self.m_boardModel:GetItemCacheModel():ResetData()
    self.m_boardModel:Destroy()
    self.m_boardModel = nil
  end
end

function HuntActivityModel.AddDependencyGraph(graph)
  local serverConfig
  local arrConfig = {}
  for activityType, _ in pairs(HuntActivityDefinition) do
    serverConfig = GM.ConfigModel:GetServerConfig(activityType)
    if not Table.IsEmpty(serverConfig) then
      table.insert(arrConfig, {
        type = activityType,
        sTime = serverConfig.sTime,
        id = serverConfig.id
      })
    end
  end
  if #arrConfig < 2 then
    return
  end
  table.sort(arrConfig, function(a, b)
    if a.sTime == b.sTime then
      return a.id < b.id
    else
      return a.sTime < b.sTime
    end
  end)
  local config, nextConfig
  for i = 1, #arrConfig - 1 do
    config = arrConfig[i]
    nextConfig = arrConfig[i + 1]
    if graph[config.type] == nil then
      graph[config.type] = {}
    end
    table.insert(graph[config.type], nextConfig.type)
  end
end

function HuntActivityModel:CanStartHuntActivity()
  if not GM.CheckResourcesStageFinished then
    return false
  end
  local bCanStart = true
  local model
  for actType, activityDefinition in pairs(HuntActivityDefinition) do
    model = GM.ActivityManager:GetModel(actType)
    if model ~= nil and self.m_type ~= model:GetType() and model:GetState() ~= ActivityState.Released then
      bCanStart = false
      break
    end
  end
  return bCanStart
end

function HuntActivityModel:_CalculateState()
  if not (self.m_config ~= nil and self:_CanStartActivity()) or not self:CanStartHuntActivity() then
    return ActivityState.Released, -1
  end
  local canPopEndWindow = self:CanPopEndWindow()
  local serverTime = GM.GameModel:GetServerTime()
  if serverTime < self.m_config.sTime then
    return ActivityState.Preparing, self.m_config.sTime
  elseif serverTime < self.m_config.eTime then
    return ActivityState.Started, self.m_config.eTime
  elseif self.m_config.rTime and serverTime < self.m_config.rTime and canPopEndWindow then
    return ActivityState.Ended, self.m_config.rTime
  else
    return ActivityState.Released, -1
  end
end

function HuntActivityModel:UpdatePerSecond()
  BaseActivityModel.UpdatePerSecond(self)
  self.m_endWindowPopupHelper:UpdateHasStarted()
end

function HuntActivityModel:NeedCheckResource()
  return BaseActivityModel._CalculateState(self) ~= ActivityState.Released
end

function HuntActivityModel:GetBoardEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = (self.m_activityDefinition.IsDigType or self.m_activityDefinition.IsUseNewBoardIcon) and EEntryRootKey.HuntDig or EEntryRootKey.HuntActivity,
    entryPrefabName = self.m_activityDefinition.BoardEntryPrefabName,
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function HuntActivityModel:GetMapEntryShowConfig()
  return {
    statusChangeEvent = self.m_activityDefinition.StateChangedEvent,
    eEntryRootKey = EEntryRootKey.HuntActivity,
    entryPrefabName = self.m_activityDefinition.EntryPrefabName,
    hudKey = self.m_activityDefinition.EntryButtonKey,
    checkFun = function()
      return self:GetState() == ActivityState.Started
    end
  }
end

function HuntActivityModel:GetAllStateChangedEvent()
  return {
    self.m_activityDefinition.StateChangedEvent
  }
end

function HuntActivityModel:IsActivityOpen()
  return self:GetState() == ActivityState.Preparing or self:GetState() == ActivityState.Started
end

function HuntActivityModel:CheckActTaskValid(taskType, num)
  if taskType == ETaskType.GetActItem or taskType == ETaskType.GetActToken or taskType == ETaskType.MergeActItem then
    return self:IsActivityOpen()
  end
  return false
end

function HuntActivityModel:_OnStateChanged()
  local state = self:GetState()
  if state == ActivityState.Started or state == ActivityState.Ended then
    if self.m_boardModel == nil then
      self:_LoadActivityBoardModel()
    end
    local bItemGived = self.m_dbTable:GetValue(HuntActivityModel.ItemGived, "value") or 0
    if bItemGived == 0 then
      self:TutorialCacheItems()
      self:LogActivity(EBIType.ActivityRankUp, 0)
      if not Table.IsEmpty(self:GetDigRewardConfig()) then
        self:LogActivity(EBIType.ActivityRankUp, 0, self.m_type .. "_progress")
      end
      if self.m_config and not Table.IsEmpty(self.m_config.arrDeputyMergeLine) then
        self:LogActivity(EBIType.ActivityRankUp, 0, self.m_type .. "_vice")
      end
    end
    if self:TryUpdateMonsterSpreadFlag() and not GM.UIManager:IsViewOpen(self.m_activityDefinition.MainWindowPrefabName) then
      local pdItems = self.m_boardModel:GetExtraPdItems()
      local monsterPdItem = pdItems and pdItems[2]
      if monsterPdItem then
        local monsterItemType = monsterPdItem:GetType()
        local monsterItemConfig = GM.ItemDataModel:GetModelConfig(monsterItemType)
        local code
        for _ = 1, monsterItemConfig.Monster_ItemMaxNumber do
          code = GM.ItemFixedSpreadModel:GenerateItemCodeWithCfgKey(monsterItemType, "Monster_Weigt")
          self.m_boardModel:CacheItems({code}, CacheItemType.Stack)
          GM.BIManager:LogSpread("unpop", code, nil, EGameMode.Hunt)
        end
      end
    end
  else
    if self.m_boardModel ~= nil then
      self.m_boardModel:Destroy()
    end
    self.m_boardModel = nil
  end
  self.m_endWindowPopupHelper:UpdateHasStarted()
  self.m_endRewards = nil
  self.m_bHasBookFinalRewards = nil
  self.event:Call(HuntActivityEventType.StateChanged)
  EventDispatcher.DispatchEvent(EEventType.OrderStatusChanged)
  EventDispatcher.DispatchEvent(self.m_activityDefinition.StateChangedEvent)
end

function HuntActivityModel:_LoadActivityBoardModel()
  local horizontalTiles, verticalTiles, initCodeMap, cloud, transformLayerConfig, openMapConfig = self:GetInitBoardInfo()
  self.m_maxDepth = not Table.IsEmpty(initCodeMap) and #initCodeMap or verticalTiles
  self.m_boardModel = HuntActivityBoardModel.Create(self.m_itemDataTable, self.m_itemLayerDataTable, self.m_itemCacheDataTable, initCodeMap, self:GetType(), horizontalTiles, verticalTiles, cloud, self.m_itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  self:InitUpdateLevel()
  local depth = self:GetBoardInitDepth()
  if depth == 0 then
    self.m_boardModel:LoadFile(1, 1, not self.m_activityDefinition.IsDigType)
    self:SetBoardInitDepth(verticalTiles + 1)
  end
  if self.m_activityDefinition.IsDigType then
    self.m_boardModel:CheckMineState()
  else
    self:CheckBoardEmptyState()
  end
end

function HuntActivityModel:GetBoardModel()
  return self.m_boardModel
end

function HuntActivityModel:GetInitCodeMap(horizontalTiles, verticalTiles, boardName)
  local cloud = self:GetGeneralConfig(HuntActivityModel.HuntCloud)
  local boardName = boardName or self:GetGeneralConfig(HuntActivityModel.HuntCobweb)
  local openMapReward = self:GetGeneralConfig(HuntActivityModel.HuntBoardReward)
  local transformLayer = self:GetGeneralConfig(HuntActivityModel.HuntTransform)
  local skipBoard = StringUtil.IsNilOrEmpty(boardName)
  local skipCloud = StringUtil.IsNilOrEmpty(cloud)
  local skipTransform = StringUtil.IsNilOrEmpty(transformLayer)
  local skipOpenMapReward = StringUtil.IsNilOrEmpty(openMapReward)
  if skipBoard and skipCloud and skipTransform and skipOpenMapReward then
    return
  end
  local fileConfig = require("Data.Config.HuntActivityBoardConfig")
  local cloudCfg = not skipCloud and fileConfig.cloud[cloud] or nil
  local transformLayerConfig = not skipTransform and fileConfig.transform[transformLayer] or nil
  if not skipOpenMapReward and (not fileConfig.boardReward or not fileConfig.boardReward[openMapReward]) then
    Log.Error("\229\176\143\230\163\139\231\155\152\229\140\133\229\134\133\230\156\170\233\133\141\231\189\174\229\175\185\229\186\148\231\154\132\229\188\128\229\155\190\229\165\150\229\138\177: " .. self.m_type)
  end
  local openMapRewardCfg = not skipOpenMapReward and fileConfig.boardReward and fileConfig.boardReward[openMapReward] or nil
  if skipBoard then
    return nil, cloudCfg, transformLayerConfig, openMapRewardCfg
  end
  horizontalTiles = horizontalTiles or self.m_activityDefinition.HorizontalTiles or HuntActivityBoardModel.HorizontalTiles
  verticalTiles = verticalTiles or self.m_activityDefinition.VerticalTiles or HuntActivityBoardModel.VerticalTiles
  local defaultCfgName = "default" .. horizontalTiles .. "_" .. verticalTiles
  local codeMap = fileConfig[boardName] or fileConfig[self:GetType()] or fileConfig[defaultCfgName]
  if Table.IsEmpty(codeMap) then
    Log.Error("\229\176\143\230\163\139\231\155\152\230\180\187\229\138\168" .. self:GetType() .. "\231\188\186\229\176\145\230\163\139\231\155\152\233\133\141\231\189\174")
    return nil, cloudCfg, transformLayerConfig, openMapRewardCfg
  end
  local isConfigValid = true
  if isConfigValid then
    for _, v in pairs(codeMap) do
      if Table.IsEmpty(v) or #v ~= horizontalTiles then
        isConfigValid = false
        break
      end
    end
  end
  if not isConfigValid then
    Log.Error("\229\176\143\230\163\139\231\155\152" .. self:GetType() .. "\229\136\157\229\167\139\233\133\141\231\189\174" .. boardName .. "\232\161\140\229\136\151\230\149\176\233\148\153\232\175\175")
    codeMap = nil
  end
  codeMap = Table.DeepCopy(codeMap)
  for y, line in pairs(codeMap) do
    for x, code in pairs(line) do
      codeMap[y][x] = StringUtil.Replace(code, ItemCodePrefix.HuntX, self:GetType() .. "_")
    end
  end
  return codeMap, cloudCfg, transformLayerConfig, openMapRewardCfg
end

function HuntActivityModel:GetInitBoardInfo()
  local horizontalTiles = self.m_activityDefinition.HorizontalTiles or HuntActivityBoardModel.HorizontalTiles
  local verticalTiles = self.m_activityDefinition.VerticalTiles or HuntActivityBoardModel.VerticalTiles
  if self:IsPhaseServerControlOpen() then
    local phaseConfig = self:GetCurrentPhaseConfig()
    horizontalTiles = phaseConfig.horizontal or horizontalTiles
    verticalTiles = phaseConfig.vertical or verticalTiles
    return horizontalTiles, verticalTiles, self:GetInitCodeMap(horizontalTiles, verticalTiles, phaseConfig.boardName)
  else
    return horizontalTiles, verticalTiles, self:GetInitCodeMap()
  end
end

function HuntActivityModel:IsBoardConfigServerOpen()
  return self:GetGeneralConfig(HuntActivityModel.HuntCobweb) ~= nil
end

function HuntActivityModel:CacheItems(cachedItemCodes, type, isTutorialItem)
  if Table.IsEmpty(cachedItemCodes) or self.m_boardModel == nil then
    return
  end
  self.m_boardModel:CacheItems(cachedItemCodes, type, nil, nil, nil, isTutorialItem)
  EventDispatcher.DispatchEvent(EEventType.PopupChainActivityTokenTrigger, {
    activityType = self:GetType()
  })
end

function HuntActivityModel:TutorialCacheItems()
  local bItemGived = self.m_dbTable:GetValue(HuntActivityModel.ItemGived, "value") or 0
  if bItemGived ~= 1 then
    return self:GetTutorialToken(5)
  end
end

function HuntActivityModel:GetTutorialToken(count)
  self:AcquireActivityToken(count)
  self.m_dbTable:Set(HuntActivityModel.ItemGived, "value", 1)
  GM.BIManager:LogAcquire(self.m_activityDefinition.TokenType, count, "tutorial", true, EGameMode.Map)
end

function HuntActivityModel:GetEntryRedCount()
  return self:GetActivityTokenNumber() + self:GetCacheCount()
end

function HuntActivityModel:HasBookRedPoint()
  if self.m_boardModel == nil or self.m_boardModel:GetItemIllustratedBook() == nil then
    return false
  end
  return self.m_boardModel:GetItemIllustratedBook():CanShowRedPoint()
end

function HuntActivityModel:GetCacheCount()
  if self.m_boardModel == nil then
    return 0
  end
  return self.m_boardModel:GetCachedItemCount()
end

function HuntActivityModel:GetMergeLength()
  return self.m_config and self.m_config.arrMergeLine and #self.m_config.arrMergeLine or 0
end

function HuntActivityModel:GetItemTypeByIndex(index)
  return self.m_config.arrMergeLine[index].item
end

function HuntActivityModel:SetLevel(level)
  local isHuntAchiOpen, huntAchiType = self:CanGetHuntAchiPiece()
  if isHuntAchiOpen then
    local curLevel = math.max(self:GetLevel(), 1)
    local trophyPieceNum = 0
    for i = curLevel + 1, level do
      local itemCode = self:GetItemCodeByLevel(i)
      if self:IsHuntAchiPieceItem(itemCode) then
        trophyPieceNum = trophyPieceNum + 1
      end
    end
    if 0 < trophyPieceNum then
      RewardApi.AcquireRewardsLogic({
        {
          [PROPERTY_TYPE] = HuntAchiDefinition[huntAchiType].ActivityTokenPropertyType,
          [PROPERTY_COUNT] = trophyPieceNum
        }
      }, EPropertySource.Give, EBIType.HuntAchiGetPiece, CacheItemType.Stack)
    end
  end
  self.m_dbTable:Set(HuntActivityModel.CurrentMergeLevel, "value", level)
  self:LogActivity(EBIType.ActivityRankUp, level)
  EventDispatcher.DispatchEvent(EEventType.HuntActivityItemUnlocked)
  self:SetSubscriptionConcluded(4 <= level)
  self:_TryUnlockMultipleEnergyByToken(self:GetActivityTokenNumber())
end

function HuntActivityModel:GetLevel()
  return self.m_dbTable:GetValue(HuntActivityModel.CurrentMergeLevel, "value") or 0
end

function HuntActivityModel:GetCloudState()
  local value = self.m_dbTable:GetValue(HuntActivityModel.CloudState, DB_VALUE_KEY)
  local ids = StringUtil.SplitToNum(value or "", ";")
  local map = {}
  for _, id in pairs(ids) do
    map[id] = true
  end
  return map
end

function HuntActivityModel:UpdateCloudState(map)
  local ids = Table.GetKeys(map)
  self.m_dbTable:Set(HuntActivityModel.CloudState, DB_VALUE_KEY, table.concat(ids, ";"))
end

function HuntActivityModel:GetCloudSwallowLockState()
  local value = self.m_dbTable:GetValue(HuntActivityModel.SwallowLockState, DB_VALUE_KEY)
  local strs = StringUtil.Split(value or "", ";")
  local map = {}
  for _, str in pairs(strs) do
    local ids = StringUtil.SplitToNum(str or "", ";")
    for k, v in pairs(ids) do
      map[k] = v
    end
  end
  return map
end

function HuntActivityModel:UpdateCloudSwallowLockState(map)
  local val = ""
  if not Table.IsEmpty(map) then
    local tmp = {}
    for k, v in pairs(map) do
      tmp[#tmp + 1] = k .. "-" .. v
    end
    val = table.concat(tmp, ";")
  end
  self.m_dbTable:Set(HuntActivityModel.SwallowLockState, DB_VALUE_KEY, val)
end

function HuntActivityModel:UpdateLevel(itemCode)
  local lvl = self:GetLevelByItemCode(itemCode)
  local curLvl = self:GetLevel()
  self:UpdateDeputyLevel(itemCode)
  if lvl > curLvl then
    self:SetLevel(lvl)
    return true
  end
  return false
end

function HuntActivityModel:InitUpdateLevel()
  if self.m_boardModel == nil then
    return
  end
  local curLvl = self:GetLevel()
  local lvl = 0
  local curDeputyLevel = self:GetDeputyLevel()
  local deputyLevel = 0
  local tempLvl
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      local code = item:GetCode()
      tempLvl = self:GetLevelByItemCode(code)
      if lvl < tempLvl then
        lvl = tempLvl
      end
      tempLvl = self:GetDeputyLevelByItemCode(code)
      if deputyLevel < tempLvl then
        deputyLevel = tempLvl
      end
    end
  end
  if curLvl < lvl then
    self:SetLevel(lvl)
  end
  if curDeputyLevel < deputyLevel then
    self:SetDeputyLevel(deputyLevel)
  end
end

function HuntActivityModel:GetEndRewards()
  if not Table.IsEmpty(self.m_endRewards) then
    return self.m_endRewards, self.m_bHasBookFinalRewards
  end
  local rewards = {}
  if self.m_boardModel == nil then
    return rewards
  end
  
  local function _MergeRewards(to, from)
    if not Table.IsEmpty(from) then
      for _, v in pairs(from) do
        if v[PROPERTY_TYPE] ~= HuntActivityModel.MineScoreType and not StringUtil.StartWith(v[PROPERTY_TYPE], "hunt") then
          RewardApi.MergeRewards(to, {v})
        end
      end
    end
  end
  
  for position in self.m_boardModel.GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      local tempLvl = self:GetLevelByItemCode(item:GetCode())
      if tempLvl == 0 then
        local collectTb = item:GetComponent(ItemCollectable)
        if collectTb then
          _MergeRewards(rewards, collectTb:GetRewards())
        end
        local bubbleTb = item:GetComponent(ItemBubble)
        if bubbleTb then
          _MergeRewards(rewards, {
            {
              [PROPERTY_TYPE] = bubbleTb:GetInnerItemCode(),
              [PROPERTY_COUNT] = 1
            }
          })
        end
        local itemSpread = item:GetComponent(ItemSpread)
        if itemSpread then
          local arrRwds = itemSpread:GetNotSpreadRewards()
          _MergeRewards(rewards, arrRwds)
        end
      elseif 0 < tempLvl then
        local itemSpread = item:GetComponent(ItemSpread)
        if itemSpread then
          local arrRwds = itemSpread:GetNotSpreadRewards()
          _MergeRewards(rewards, arrRwds)
        end
      end
      local itemExtraSpread = item:GetComponent(ItemExtraSpread)
      if itemExtraSpread then
        local arrRwds = itemExtraSpread:GetNotSpreadRewards()
        _MergeRewards(rewards, arrRwds)
      end
      if item:GetComponent(ItemWheel) then
        _MergeRewards(rewards, {
          {
            [PROPERTY_TYPE] = EPropertyType.Energy,
            [PROPERTY_COUNT] = 20
          }
        })
      end
    end
  end
  local cachedItemCount = self.m_boardModel:GetCachedItemCount()
  for i = 1, cachedItemCount do
    local itemType = self.m_boardModel:GetCachedItem(i)
    if StringUtil.StartWith(itemType, ItemCodePrefix.Bubble) then
      local code = string.sub(itemType, 3)
      if not Table.IsEmpty(GM.ItemDataModel:GetModelConfig(code)) then
        _MergeRewards(rewards, {
          {
            [PROPERTY_TYPE] = code,
            [PROPERTY_COUNT] = 1
          }
        })
      end
    elseif StringUtil.StartWith(itemType, ItemCodePrefix.Cobweb) or StringUtil.StartWith(itemType, ItemCodePrefix.PaperBox) then
    else
      local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
      local arrRwds = itemConfig.CollectRewards
      if not Table.IsEmpty(arrRwds) then
        _MergeRewards(rewards, arrRwds)
      end
      if GM.WheelItemModel:IsWheelItem(itemConfig.Mode) then
        _MergeRewards(rewards, {
          {
            [PROPERTY_TYPE] = EPropertyType.Energy,
            [PROPERTY_COUNT] = 20
          }
        })
      end
    end
  end
  if self.m_boardModel ~= nil and self.m_boardModel.GetBookEndRewards then
    local bookEndRewards, bookRecoverStruct = self.m_boardModel:GetBookEndRewards()
    if not Table.IsEmpty(bookEndRewards) then
      _MergeRewards(rewards, bookEndRewards)
      self.m_bookRecoverStruct = bookRecoverStruct
    end
  end
  self.m_endRewards = rewards
  return rewards, self.m_bookRecoverStruct
end

function HuntActivityModel:GetLevelByItemCode(itemCode)
  if not self.m_config or Table.IsEmpty(self.m_config.arrMergeLine) then
    return 0
  end
  for i, v in ipairs(self.m_config.arrMergeLine) do
    if v.item == itemCode then
      return i
    end
  end
  return 0
end

function HuntActivityModel:GetItemCodeByLevel(lvl)
  if not self.m_config.arrMergeLine[lvl] then
    return
  end
  return self.m_config.arrMergeLine[lvl].item
end

function HuntActivityModel:IsMaxLevel()
  return self:GetLevel() == self:GetMergeLength()
end

function HuntActivityModel:IsMainChain(chainId)
  if not self.m_config or Table.IsEmpty(self.m_config.arrMergeLine) then
    return false
  end
  local mainChain = GM.ItemDataModel:GetChainId(self.m_config.arrDeputyMergeLine[1].item)
  return chainId == mainChain
end

function HuntActivityModel:UpdateDeputyLevel(itemCode)
  local lvl = self:GetDeputyLevelByItemCode(itemCode)
  local curLvl = self:GetDeputyLevel()
  if lvl > curLvl then
    self:SetDeputyLevel(lvl)
    return true
  end
  return false
end

function HuntActivityModel:SetDeputyLevel(level)
  self.m_dbTable:Set(HuntActivityModel.CurrentDeuptyMergeLevel, "value", level)
  self:LogActivity(EBIType.ActivityRankUp, level, self.m_type .. "_vice")
end

function HuntActivityModel:GetDeputyLevel()
  return self.m_dbTable:GetValue(HuntActivityModel.CurrentDeuptyMergeLevel, "value") or 0
end

function HuntActivityModel:GetDeputyLevelByItemCode(itemCode)
  if not self.m_config or Table.IsEmpty(self.m_config.arrDeputyMergeLine) then
    return 0
  end
  for i, v in ipairs(self.m_config.arrDeputyMergeLine) do
    if v.item == itemCode then
      return i
    end
  end
  return 0
end

function HuntActivityModel:GetDeputyItemCodeByLevel(lvl)
  if not self.m_config.arrDeputyMergeLine[lvl] then
    return
  end
  return self.m_config.arrDeputyMergeLine[lvl].item
end

function HuntActivityModel:IsDeputyMaxLevel()
  local deputyMergeLineLength = self.m_config and self.m_config.arrDeputyMergeLine and #self.m_config.arrDeputyMergeLine or 0
  return deputyMergeLineLength <= self:GetDeputyLevel()
end

function HuntActivityModel:IsDeputyChain(chainId)
  if not self.m_config or Table.IsEmpty(self.m_config.arrDeputyMergeLine) then
    return false
  end
  local deputyChain = GM.ItemDataModel:GetChainId(self.m_config.arrDeputyMergeLine[1].item)
  return chainId == deputyChain
end

function HuntActivityModel:CanAddScore()
  return self:GetState() == ActivityState.Started
end

function HuntActivityModel:CanAddScoreByOrder()
  return self.m_tokenHelper and self.m_tokenHelper:IsAcquireTypeValid(EActTokenAcquireType.FinishOrder)
end

function HuntActivityModel:CanAcquireItemBySpread()
  return self.m_tokenHelper and self.m_tokenHelper:IsAcquireTypeValid(EActTokenAcquireType.CostEnergy)
end

function HuntActivityModel:GetActivityTokenNumber()
  return math.tointeger(self.m_dbTable:GetValue(HuntActivityModel.TokenKey, "value") or 0)
end

function HuntActivityModel:AcquireActivityToken(token)
  if token == 0 then
    return
  end
  local newNum = self:GetActivityTokenNumber() + token
  self.m_dbTable:Set(HuntActivityModel.TokenKey, DB_VALUE_KEY, newNum)
  self:_TryUnlockMultipleEnergyByToken(newNum)
  EventDispatcher.DispatchEvent(EEventType.AcquireActivityToken, {
    num = token,
    activityType = self.m_type
  })
  EventDispatcher.DispatchEvent(EEventType.PopupChainActivityTokenTrigger, {
    activityType = self:GetType()
  })
end

function HuntActivityModel:ConsumeActivityToken(cost, consumer)
  local num = self:GetActivityTokenNumber()
  if cost > num then
    return false
  end
  self.m_dbTable:Set(HuntActivityModel.TokenKey, DB_VALUE_KEY, num - cost)
  GM.PropertyDataManager:DispatchConsumeEvent(self.m_activityDefinition.TokenType, cost, EBIType.HuntCostToken, consumer, EGameMode.Hunt)
end

function HuntActivityModel:HasCachePd()
  return self.m_pdItemType ~= nil
end

function HuntActivityModel:GetCachePdSpreadCode(levelSpan, itemLayerModel)
  local count = self.m_dbTable:GetValue(HuntActivityModel.GenerateRoundValidCountKey, DB_VALUE_KEY) or 0
  local originCode, itemConfig
  local realLevelSpan = 0
  if count < self.m_fixedSpreadCount then
    count = count + 1
    self.m_dbTable:Set(HuntActivityModel.GenerateRoundValidCountKey, DB_VALUE_KEY, count)
    originCode = self:GetItemCodeByLevel(1)
  else
    originCode = GM.ItemFixedSpreadModel:GenerateItemCode(self.m_pdItemType)
  end
  local code = originCode
  for i = 1, levelSpan do
    if itemLayerModel:IsCobwebNeed(code) then
      break
    end
    itemConfig = GM.ItemDataModel:IsItemExist(code) and GM.ItemDataModel:GetModelConfig(code)
    if not (itemConfig and itemConfig.MergedType) then
      break
    end
    code = itemConfig.MergedType
    realLevelSpan = i
  end
  self:ConsumeActivityToken(2 ^ realLevelSpan, self.m_pdItemType)
  return code, originCode, realLevelSpan
end

function HuntActivityModel:GetMultiAnimNeedPlay()
  return self.m_dbTable:GetValue(self.MultiEnergyAnimKey, DB_VALUE_KEY) or 0
end

function HuntActivityModel:SetMultiAnimPlayed()
  self.m_dbTable:Remove(self.MultiEnergyAnimKey)
end

function HuntActivityModel:GetResourceLabels()
  return self.m_activityDefinition.ResourceLabels
end

function HuntActivityModel.IsMainMergeLineItem(type)
  for activityType, _ in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started and (huntModel:GetLevelByItemCode(type) ~= 0 or StringUtil.StartWith(type, ItemCodePrefix.Hunt)) then
      return true, activityType
    end
  end
end

function HuntActivityModel.GetActivityTypeByItemType(type)
  local isMainLineItem, actType = HuntActivityModel.IsMainMergeLineItem(type)
  if isMainLineItem then
    return actType
  end
  for activityType, _ in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started and (StringUtil.StartWith(type, activityType .. "_") or StringUtil.StartWith(type, ItemCodePrefix.Hunt)) then
      return activityType
    end
    if huntModel:GetState() == ActivityState.Started and (StringUtil.StartWith(type, "huntscore_") or StringUtil.StartWith(type, "huntwheel") or StringUtil.StartWith(type, "huntalbum")) then
      return activityType
    end
  end
end

function HuntActivityModel.IsHuntTokenType(tokenType)
  return HuntTokenMap[tokenType] == true
end

function HuntActivityModel:IsHuntActivityItem(code)
  return self.m_config and self.m_config.mapChain[GM.ItemDataModel:GetChainId(code)]
end

function HuntActivityModel:SetItemDeleteTutorialShowed(bShowed)
  return self.m_dbTable:Set(HuntActivityModel.ItemDeleteTutorialShowed, "value", bShowed and 1 or 0)
end

function HuntActivityModel:IsItemDeleteTutorialShowed()
  return self.m_dbTable:GetValue(HuntActivityModel.ItemDeleteTutorialShowed, "value") == 1
end

function HuntActivityModel:SetActivityStartTutorialShowed(bShowed)
  return self.m_dbTable:Set(HuntActivityModel.ActivityStartTutorialShowed, "value", bShowed and 1 or 0)
end

function HuntActivityModel:IsActivityStartTutorialShowed()
  return self.m_dbTable:GetValue(HuntActivityModel.ActivityStartTutorialShowed, "value") == 1
end

function HuntActivityModel.GetPaperBoxSprite(itemModel)
  for activityType, activityDefinition in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started then
      if activityDefinition.PaperBoxSprite then
        return activityDefinition.PaperBoxSprite
      elseif activityDefinition.PaperBoxSpriteByLine and itemModel ~= nil then
        local idx = (huntModel:GetBoardInitDepth() - itemModel:GetPosition():GetY() - 1) % #activityDefinition.PaperBoxSpriteByLine + 1
        if activityDefinition.PaperBoxSpriteByLine[idx] then
          return {
            activityDefinition.PaperBoxSpriteByLine[idx]
          }
        end
      end
    end
  end
end

function HuntActivityModel.GetCobwebSprite(itemModel)
  for activityType, activityDefinition in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started then
      if activityDefinition.CobwebSprite then
        return activityDefinition.CobwebSprite, activityDefinition.CobwebSpriteOffset
      elseif activityDefinition.CobwebSpriteByLine then
        local idx = (huntModel:GetBoardInitDepth() - itemModel:GetPosition():GetY() - 1) % #activityDefinition.CobwebSpriteByLine + 1
        return activityDefinition.CobwebSpriteByLine[idx], activityDefinition.CobwebSpriteOffsetByLine and activityDefinition.CobwebSpriteOffsetByLine[idx] or nil
      end
    end
  end
end

function HuntActivityModel.GetRuneSprite()
  for activityType, activityDefinition in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started then
      return activityDefinition.RuneSprite
    end
  end
end

function HuntActivityModel.GetSandSprite()
  for activityType, activityDefinition in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started then
      return activityDefinition.SandSprite
    end
  end
end

function HuntActivityModel.GetSandIndicatorItemCode()
  for activityType, activityDefinition in pairs(HuntActivityDefinition) do
    local huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel:GetState() == ActivityState.Started then
      return activityDefinition.SandIndicatorItemCode
    end
  end
end

function HuntActivityModel:CanItemMerge(itemType)
  if self:IsPhaseServerControlOpen() and HuntActivityModel.IsMainMergeLineItem(itemType) then
    local maxLevel = self:GetCurrentPhaseMaxLevel()
    local chainLevel = GM.ItemDataModel:GetChainLevel(itemType)
    if maxLevel ~= nil and maxLevel <= chainLevel then
      return false
    end
  end
  return true
end

function HuntActivityModel:CanItemSell(itemModel)
  local code = ItemUtility.GetInnerCodeAndPrefixByCode(itemModel:GetCode())
  if self:IsPhaseServerControlOpen() and HuntActivityModel.IsMainMergeLineItem(code) then
    local maxLevel = self:GetCurrentPhaseMaxLevel()
    if maxLevel ~= nil and GM.ItemDataModel:GetChainLevel(code) == maxLevel then
      return false
    end
  end
  return true
end

function HuntActivityModel:IsPhaseServerControlOpen()
  return not Table.IsEmpty(self.m_mapPhase2Config)
end

function HuntActivityModel:GetCurrentPhase()
  return self.m_dbTable:GetValue(HuntActivityModel.CurrentPhase, "value") or 1
end

function HuntActivityModel:SetCurrentPhase(index)
  self.m_dbTable:Set(HuntActivityModel.CurrentPhase, "value", index)
end

function HuntActivityModel:HasReachedMaxPhase()
  return self:GetCurrentPhase() == self.m_maxPhaseNum
end

function HuntActivityModel:HasFinishedCurrentPhase()
  if not self:IsPhaseServerControlOpen() or self:HasReachedMaxPhase() then
    return false
  end
  local maxLevel = self:GetCurrentPhaseMaxLevel()
  if maxLevel ~= nil and maxLevel <= self:GetLevel() then
    return true
  end
  return false
end

function HuntActivityModel:GetCurrentPhaseConfig()
  return self.m_mapPhase2Config and self.m_mapPhase2Config[self:GetCurrentPhase()] or {}
end

function HuntActivityModel:GetCurrentPhaseMaxLevel()
  local curConfig = self:GetCurrentPhaseConfig()
  return curConfig and curConfig.maxLevel
end

function HuntActivityModel:EnterNextPhase()
  local acquiredItem = self:CollectAllValidItems()
  if self.m_boardModel ~= nil then
    self.m_boardModel:Destroy()
  end
  self.m_itemDataTable:Drop()
  self.m_itemLayerDataTable:Drop()
  if self.m_itemTransformLayerDataTable then
    self.m_itemTransformLayerDataTable:Drop()
  end
  local lastPhaseConfig = self:GetCurrentPhaseConfig()
  if lastPhaseConfig ~= nil and lastPhaseConfig.maxLevel ~= nil then
    local maxItemCode = ItemCodePrefix.Hunt .. lastPhaseConfig.maxLevel
    local minItemCode = ItemCodePrefix.Hunt .. 1
    self:CacheItems({minItemCode, maxItemCode}, CacheItemType.Stack2)
    GM.BIManager:LogAcquire(minItemCode, 1, EBIType.HuntAcquirePhaseItem, true, EGameMode.Hunt)
    GM.BIManager:LogAcquire(maxItemCode, 1, EBIType.HuntAcquirePhaseItem, true, EGameMode.Hunt)
  end
  local portalItem = self:GetOnePortalItem()
  local maxLevelItem = self:GetOneMaxPhaseLevelItem()
  self:SetCurrentPhase(self:GetCurrentPhase() + 1)
  local boardView = GM.ModeViewController:GetHuntActivityBoardView()
  if boardView ~= nil then
    boardView:SetPromptLock(true)
  end
  self:SetBoardInitDepth(0)
  self:_LoadActivityBoardModel()
  EventDispatcher.DispatchEvent(EEventType.HuntActivityEnterNextPhase, {
    portalItem = portalItem,
    maxLevelItem = maxLevelItem,
    acquiredItem = acquiredItem
  })
end

function HuntActivityModel:CollectAllValidItems()
  local arrAcquiredItems = self.m_boardModel:FilterItems(function(itemModel)
    return itemModel:GetComponent(ItemCollectable) ~= nil or itemModel:GetComponent(ItemBubble) ~= nil or itemModel:GetComponent(ItemSpread) ~= nil
  end)
  local boardView = GM.ModeViewController:GetHuntActivityBoardView()
  local arrRemovedItem = {}
  local arrRewards = {}
  local arrWorldPos = {}
  local targetWorldPos, itemCode
  local bAcquired = false
  local spreadRewards = {}
  for _, item in ipairs(arrAcquiredItems) do
    itemCode = ItemUtility.GetInnerCodeAndPrefixByCode(item:GetCode())
    if item:GetComponent(ItemCollectable) ~= nil then
      item:GetComponent(ItemCollectable):OnTap()
      bAcquired = true
    elseif item:GetComponent(ItemSpread) ~= nil then
      local itemSpread = item:GetComponent(ItemSpread)
      local arrCw = itemSpread:GetCodeWeightPairs()
      for _, v in ipairs(arrCw) do
        if v.Weight > 0 then
          if StringUtil.StartWith(v.Code, ItemCodePrefix.Bubble) then
            local code = string.sub(v.Code, 3)
            if not Table.IsEmpty(GM.ItemDataModel:GetModelConfig(code)) then
              RewardApi.MergeRewards(spreadRewards, {
                {
                  [PROPERTY_TYPE] = code,
                  [PROPERTY_COUNT] = 1
                }
              })
            end
          else
            local itemConfig = GM.ItemDataModel:GetModelConfig(v.Code)
            local arrRwds = itemConfig.CollectRewards
            if not Table.IsEmpty(arrRwds) then
              for _, v1 in ipairs(arrRwds) do
                v1[PROPERTY_COUNT] = v1[PROPERTY_COUNT] * v.Weight
              end
              RewardApi.MergeRewards(spreadRewards, arrRwds)
            end
          end
        end
      end
    else
      self.m_boardModel:RemoveItem(item)
      table.insert(arrRemovedItem, item)
      table.insert(arrRewards, {
        [PROPERTY_TYPE] = itemCode,
        [PROPERTY_COUNT] = 1
      })
      targetWorldPos = boardView and boardView:GetItemView(item) and boardView:GetItemView(item).transform.position
      if targetWorldPos ~= nil then
        table.insert(arrWorldPos, PositionUtil.UICameraScreen2World(boardView:ConvertWorldPositionToScreenPosition(targetWorldPos)))
      else
        table.insert(arrWorldPos, V3Zero)
      end
    end
  end
  if not Table.IsEmpty(arrRemovedItem) then
    bAcquired = true
    self.m_boardModel.event:Call(BoardEventType.BatchRemoveItems, {Removed = arrRemovedItem})
    RewardApi.AcquireRewards(arrRewards, EPropertySource.Give, EBIType.ActivityGetRewards, {arrWorldPos = arrWorldPos}, CacheItemType.Stack)
  end
  if not Table.IsEmpty(spreadRewards) then
    RewardApi.AcquireRewardsLogic(spreadRewards, EPropertySource.Give, EBIType.ActivityGetRewards, CacheItemType.Stack)
  end
  return bAcquired
end

function HuntActivityModel.GetPortalViewPrefab()
  local huntModel
  for activityType, definition in pairs(HuntActivityDefinition) do
    huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel ~= nil and huntModel:GetState() == ActivityState.Started and definition.PortalViewPrefabName ~= nil then
      return definition.PortalViewPrefabName
    end
  end
end

function HuntActivityModel.GetPortalKeySprite()
  local huntModel
  for activityType, definition in pairs(HuntActivityDefinition) do
    huntModel = GM.ActivityManager:GetModel(activityType)
    if huntModel ~= nil and huntModel:GetState() == ActivityState.Started and definition.PortalKeyImgName ~= nil then
      return definition.PortalKeyImgName
    end
  end
end

function HuntActivityModel:TryOpenNextPhaseWindow()
  if not (self:GetState() == ActivityState.Started and self:IsPhaseServerControlOpen()) or self.m_activityDefinition.TwoButtonWindowPrefabName == nil then
    return
  end
  
  local function nextPhaseFunc(window)
    window:LogWindowAction(EBIType.UIActionType.Click, {
      EBIReferType.UserClick
    })
    window:Close()
    self:EnterNextPhase()
  end
  
  GM.UIManager:OpenView(self.m_activityDefinition.TwoButtonWindowPrefabName, self.m_type, nextPhaseFunc)
end

function HuntActivityModel:GetOnePortalItem()
  local arrPortalItems = self.m_boardModel:FilterItems(function(itemModel)
    return itemModel:GetComponent(ItemPortal) ~= nil
  end)
  if not Table.IsEmpty(arrPortalItems) then
    return arrPortalItems[1]
  end
end

function HuntActivityModel:GetOneMaxPhaseLevelItem()
  local curConfig = self:GetCurrentPhaseConfig()
  local maxLevel = curConfig and curConfig.maxLevel
  if maxLevel == nil then
    return
  end
  local arrItems = self.m_boardModel:FilterItems(function(itemModel)
    local innerCode = ItemUtility.GetInnerCodeAndPrefixByCode(itemModel:GetCode())
    if HuntActivityModel.IsMainMergeLineItem(innerCode) and GM.ItemDataModel:GetChainLevel(innerCode) == maxLevel and itemModel:GetComponent(ItemCobweb) == nil then
      return true
    end
    return false
  end)
  if not Table.IsEmpty(arrItems) then
    return arrItems[1]
  end
end

function HuntActivityModel:GetCurrentPhaseKeyImgKey()
  local item = self:GetOnePortalItem()
  local itemPortal = item and item:GetComponent(ItemPortal)
  if itemPortal ~= nil then
    return itemPortal:GetPortalKey()
  end
end

function HuntActivityModel:CanPopEndWindow()
  return self:HasWindowOpenedOnce(ActivityState.Started) and not self:HasWindowOpenedOnce(ActivityState.Ended)
end

function HuntActivityModel:IsSwallowCode(code)
  return self.m_activityDefinition.SwallowCode == code or self.m_activityDefinition.SwallowCode2 == code
end

function HuntActivityModel:AddDigScore(score)
  local curScore = self:GetDigScore()
  local progressReward = {}
  local oldLevel, bIsOldFinish = self:GetProgressLevelByScore(curScore)
  local oldScore = curScore
  curScore = curScore + score
  local newLevel, bIsFinish = self:GetProgressLevelByScore(curScore)
  if bIsOldFinish == false and bIsFinish == true then
  else
    newLevel = newLevel - 1
  end
  local bLock = false
  if oldLevel <= newLevel then
    for i = oldLevel, newLevel do
      local config = self:GetProgressConfigByLevel(i)
      if config ~= nil then
        bLock = true
        if config.rewardLock ~= 1 then
          table.insert(progressReward, {
            level = i,
            reward = config.rewards
          })
        end
      end
      if not Table.IsEmpty(self:GetDigRewardConfig()) then
        self:LogActivity(EBIType.ActivityRankUp, i, self.m_type .. "_progress")
      end
    end
  end
  local stageRewardConfig = self:GetStageDigRewardConfig()
  if stageRewardConfig[oldLevel] then
    local config = self:GetProgressConfigByLevel(oldLevel - 1)
    for _, stage in ipairs(stageRewardConfig[oldLevel]) do
      local score = stage.score + (config and config.score or 0)
      if oldScore < score and curScore >= score then
        EventDispatcher.DispatchEvent(EEventType.HuntAcquireStageReward, stage)
        for _, itemData in ipairs(stage.rewards) do
          GM.BIManager:LogAcquire(itemData[PROPERTY_TYPE], itemData[PROPERTY_COUNT], EBIType.HuntMonsterStageReward, true, EGameMode.Hunt)
        end
      end
    end
  end
  self.m_dbTable:Set(HuntActivityModel.DigScoreKey, "value", self:GetDigScore() + score)
  if self:IsMonsterHunt() then
    GM.BIManager:LogAcquire(HuntActivityModel.MonsterScoreType, score, EBIType.HuntMonsterAddScore, true, EGameMode.Hunt)
  end
  if not Table.IsEmpty(progressReward) then
    for _, data in ipairs(progressReward) do
      RewardApi.AcquireRewardsLogic(data.reward, EPropertySource.Give, self.m_activityDefinition.BIProgressReward, CacheItemType.Stack, nil, nil, EGameMode.Hunt)
    end
  end
  if bLock then
    local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if window then
      window:_SetEventLock(true)
      self.m_digRewardAniState = true
    end
  end
  return progressReward
end

function HuntActivityModel:GetDigScore()
  return self.m_dbTable:GetValue(HuntActivityModel.DigScoreKey, "value") or 0
end

function HuntActivityModel:GetProgressLevelByScore(score)
  for _, digReward in ipairs(self.m_digReward) do
    if score < digReward.score then
      return digReward.level, false
    end
  end
  if not self:HasCircleDigRewards() then
    return self.m_digReward[#self.m_digReward].level, true
  else
    local maxLevel = self:GetDigNormalRewardNum()
    local totalCircleScore = 0
    for _, circleReward in ipairs(self.m_digCircleReward) do
      totalCircleScore = totalCircleScore + circleReward.score
    end
    if totalCircleScore == 0 then
      return maxLevel, true
    end
    local lastNormalRewardConfig = self.m_digReward[maxLevel]
    local remainingScore = score - lastNormalRewardConfig.score
    local completeCycles = math.floor(remainingScore / totalCircleScore)
    local currentCycleRemaining = remainingScore % totalCircleScore
    local currentCycleLevel = 0
    local accumulatedScore = 0
    for i, circleReward in ipairs(self.m_digCircleReward) do
      accumulatedScore = accumulatedScore + circleReward.score
      if currentCycleRemaining < accumulatedScore then
        currentCycleLevel = i
        break
      end
    end
    local totalLevel = maxLevel + completeCycles * #self.m_digCircleReward + currentCycleLevel
    return totalLevel, false
  end
end

function HuntActivityModel:GetProgressConfigByLevel(level)
  for _, digReward in ipairs(self.m_digReward) do
    if digReward.level == level then
      return digReward
    end
  end
  if self:HasCircleDigRewards() then
    local maxNormalLevel = self:GetDigNormalRewardNum()
    if level <= maxNormalLevel then
      return nil
    end
    local circleRewards = self.m_digCircleReward
    local circleCount = #circleRewards
    local levelOffset = level - maxNormalLevel
    local circleIndex1 = (levelOffset - 1) % circleCount + 1
    local circleIndex2 = levelOffset % circleCount
    local scoreSum = self:GetNormalDigRewardConfig()[maxNormalLevel].score
    local circleTotalScore = 0
    local circleOffsetScore = 0
    for i, cfg in ipairs(circleRewards) do
      circleTotalScore = circleTotalScore + cfg.score
      if i <= circleIndex2 then
        circleOffsetScore = circleOffsetScore + cfg.score
      end
    end
    local circleNum = math.floor(levelOffset / circleCount)
    circleTotalScore = circleTotalScore * circleNum
    scoreSum = scoreSum + circleTotalScore + circleOffsetScore
    if 1 <= circleIndex1 and circleCount >= circleIndex1 then
      local config = Table.DeepCopy(circleRewards[circleIndex1], true)
      config.level = level
      config.score = scoreSum
      return config
    end
  end
  return nil
end

function HuntActivityModel:GetDigRewardConfig()
  if not self:HasCircleDigRewards() then
    return self.m_digReward
  else
    local level = self:GetProgressLevelByScore(self:GetDigScore())
    if level <= self:GetDigNormalRewardNum() then
      return self.m_digReward
    end
    local digReward = Table.DeepCopy(self.m_digReward or {})
    local curScore = self:GetDigScore()
    local curLevel = self:GetProgressLevelByScore(curScore)
    local remainingLevel = curLevel - self:GetDigNormalRewardNum()
    local circleNum = self.m_digCircleReward and #self.m_digCircleReward or 0
    local scoreSum = self.m_digReward[#self.m_digReward].score
    for i = 1, remainingLevel + #self.m_digCircleReward do
      local index = (i - 1) % circleNum + 1
      local config = Table.DeepCopy(self.m_digCircleReward[index])
      config.level = self:GetDigNormalRewardNum() + i
      config.score = scoreSum + config.score
      scoreSum = config.score
      table.insert(digReward, config)
    end
    return digReward
  end
end

function HuntActivityModel:GetNormalDigRewardConfig()
  return self.m_digReward
end

function HuntActivityModel:GetCircleDigRewardConfig()
  return self.m_digCircleReward
end

function HuntActivityModel:GetStageDigRewardConfig()
  return self.m_digStageReward
end

function HuntActivityModel:GetDigNormalRewardNum()
  return self.m_digReward and #self.m_digReward or 0
end

function HuntActivityModel:HasCircleDigRewards()
  return not Table.IsEmpty(self.m_digCircleReward)
end

function HuntActivityModel:HasFinishAllNormalDigRewards()
  return self:GetProgressLevelByScore(self:GetDigScore()) > self:GetDigNormalRewardNum()
end

function HuntActivityModel:IsCurLevelcircleRewardLevel(level)
  if not level then
    return false
  end
  if not self:HasCircleDigRewards() then
    return false
  end
  return level > self:GetDigNormalRewardNum()
end

function HuntActivityModel.GetCustomLabelStyle(type, num)
  if type == EActTokenAcquireType.CostEnergy then
    if num == 1 then
      return EFlyElementLabelStyle.Single
    elseif num == 2 then
      return EFlyElementLabelStyle.Double
    elseif num == 4 then
      return EFlyElementLabelStyle.Quadruple
    else
      return EFlyElementLabelStyle.EightFold
    end
  end
end

function HuntActivityModel:CheckTiles(rows)
  if self.m_tileInversed == nil then
    self.m_tileInversed = 1
  end
  if rows % 2 == 1 then
    local boardview = GM.ModeViewController:GetHuntActivityBoardView()
    boardview:InverseTiles()
    self.m_tileInversed = self.m_tileInversed * -1
  end
end

function HuntActivityModel:CheckBoardScroll()
  local moveRows = self.m_boardModel:CanMoveRows(self:GetBoardInitDepth())
  if 0 < moveRows then
    return moveRows
  end
end

function HuntActivityModel:BoardScroll(rows, flyItemRoot)
  local depth = self:GetBoardInitDepth()
  local totalRow = rows + self:GetScrollTotalRow()
  self:SetScrollTotalRow(totalRow)
  if self.m_activityDefinition.IsDigType then
    self.m_boardModel:ScrollUp(rows, depth)
  else
    self.m_boardModel:ScrollDown(rows, depth)
  end
  self:SetBoardInitDepth(depth + rows)
  local boardview = GM.ModeViewController:GetHuntActivityBoardView()
  if self.m_activityDefinition.IsDigType then
    boardview:ScrollUp(rows, self.m_boardModel, flyItemRoot)
  elseif self.m_activityDefinition.UseEfficientScroll then
    boardview:EfficientScrollDown(rows, self.m_boardModel, flyItemRoot)
  else
    boardview:ScrollDown(rows, self.m_boardModel, flyItemRoot)
  end
end

function HuntActivityModel:GetBoardInitDepth()
  return self.m_dbTable:GetValue(HuntActivityModel.BoardInitDepth, "value") or 0
end

function HuntActivityModel:SetBoardInitDepth(y)
  self.m_dbTable:Set(HuntActivityModel.BoardInitDepth, "value", y)
end

function HuntActivityModel:CanShowStartStory()
  if self.m_activityDefinition.StoryId == nil then
    return false
  end
  local bStoryShowed = self.m_dbTable:GetValue(HuntActivityModel.StoryShowed, "value") or 0
  return bStoryShowed ~= 1
end

function HuntActivityModel:SetStartStoryShowed()
  self.m_dbTable:Set(HuntActivityModel.StoryShowed, "value", 1)
end

function HuntActivityModel:OnLackHuntDigToken()
  if self:IsActivityOpen() then
    if GM.BundleManager:TryTriggerActivityBundle(EBundleTriggerType.LackHuntToken) then
      return true
    end
    local trigger = HuntActivityModel.GenerateLackTriggerToken(self.m_type)
    if trigger then
      return GM.BundleManager:TryTriggerActivityBundle(trigger)
    end
  end
  return false
end

function HuntActivityModel:TryOnLackHuntFarmToken()
  if self:IsActivityOpen() then
    if GM.BundleManager:TryTriggerActivityBundle(EBundleTriggerType.LackHuntToken) then
      return true
    end
    local trigger = HuntActivityModel.GenerateLackTriggerToken(self.m_type)
    if trigger then
      return GM.BundleManager:TryTriggerActivityBundle(trigger)
    end
  end
  return false
end

function HuntActivityModel:SetItemGotted()
  if self.m_dbTable:GetValue(HuntActivityModel.ItemGotted, "value") ~= 1 then
    self.m_dbTable:Set(HuntActivityModel.ItemGotted, "value", 1)
  end
end

function HuntActivityModel:OnHuntCacheClear()
  local bItemGotted = self.m_dbTable:GetValue(HuntActivityModel.ItemGotted, "value") or 0
  if bItemGotted ~= 1 then
    return
  end
  if not self:IsActivityOpen() then
    return
  end
  if GM.BundleManager:TryTriggerActivityBundle(EBundleTriggerType.HuntCacheClear) then
    return true
  end
  if Table.Contain(EBundleTriggerType, self:GetType() .. "CacheClear") then
    return GM.BundleManager:TryTriggerActivityBundle(self:GetType() .. "CacheClear")
  end
end

function HuntActivityModel:IsCowRoot(itemType)
  local config = self.m_boardModel and self.m_boardModel:GetCloudInfo()
  if config and config.lock then
    for _, v in pairs(config.lock) do
      if v.unlock == itemType and v.pd_up and v.pd_up.index == 2 then
        return true
      end
    end
  end
end

function HuntActivityModel:GetMineMoveRowConfig()
  return tonumber(self:GetGeneralConfig("MineExistRow")) or 7, tonumber(self:GetGeneralConfig("MineMoveToRow")) or 5
end

function HuntActivityModel:CanExtraPDSpreadItem()
  local extraPdItems = self.m_boardModel and self.m_boardModel:GetExtraPdItems()
  if extraPdItems and extraPdItems[2] then
    local itemSpread = extraPdItems[2]:GetComponent(ItemSpread)
    if itemSpread and itemSpread:GetItemRestNumber() > 0 and not itemSpread:IsLockedBySwallow() and not itemSpread:IsSpreadTapLock() then
      return true
    end
  end
  return false
end

function HuntActivityModel:CheckBoardEmptyState()
  if not self.m_boardModel then
    return
  end
  if self:GetBoardInitDepth() <= self.m_boardModel.VerticalTiles + 1 then
    return
  end
  if self:GetProtectedEmptySquare() <= 0 or 0 >= self:GetProtectedUnlockRow() then
    return
  end
  self.m_boardModel:CheckBoardEmptyState(self:GetProtectedEmptySquare(), self:GetProtectedUnlockRow())
end

function HuntActivityModel:GetProtectedEmptySquare()
  return tonumber(self:GetGeneralConfig("EmptySquare")) or 10
end

function HuntActivityModel:GetProtectedUnlockRow()
  return tonumber(self:GetGeneralConfig("UnlockRow")) or 3
end

function HuntActivityModel:GetMaxDepth()
  return self.m_maxDepth or 0
end

function HuntActivityModel:GetItemCountOnBoard(itemType)
  local cacheModel = self.m_boardModel:GetItemCacheModel()
  return self.m_boardModel:GetItemLayerCount(itemType) + cacheModel:GetItemCountByCode(itemType)
end

function HuntActivityModel:ShowCacheHandEffect()
  local boardView = GM.ModeViewController:GetHuntActivityBoardView()
  if boardView then
    boardView:GetCacheRoot():ShowCacheHandEffect()
  end
end

function HuntActivityModel:IsHuntExplainConfigServerOpen()
  return self:GetGeneralConfig(HuntActivityModel.HuntExplain) ~= nil
end

function HuntActivityModel:GetCloudKeyFirstAppeared()
  local val = self.m_dbTable:GetValue(HuntActivityModel.HuntCloudKeyFirstAppeared, "value") or 0
  return val == 1
end

function HuntActivityModel:SetCloudKeyFirstAppeared(bAppeared)
  self.m_dbTable:Set(HuntActivityModel.HuntCloudKeyFirstAppeared, "value", bAppeared and 1 or 0)
end

function HuntActivityModel:_OnOpenView(msg)
  local name = msg and msg.name
  if name ~= self.m_activityDefinition.MainWindowPrefabName then
    return
  end
  self:_TryShowItemDeleteButton()
end

function HuntActivityModel:_OnBoardScrollFinished(msg)
  if msg and msg.actType == self:GetType() then
    self:_TryShowItemDeleteButton()
  end
end

function HuntActivityModel:_TryShowItemDeleteButton()
  if self:IsItemDeleteTutorialShowed() then
    return
  end
  local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if window ~= nil and not GM.UIManager:IsEventLock() and not GM.TutorialModel:HasAnyStrongTutorialOngoing() and self:GetBoardModel():IsBoardFull() and not self:_CheckCanMergeItem() and self:_GetItemToSell() ~= nil then
    self:SetItemDeleteTutorialShowed(true)
    EventDispatcher.DispatchEvent(EEventType.HuntStartItemDeleteTutorial, {
      activityType = self:GetType()
    })
  end
end

function HuntActivityModel:_CheckCanMergeItem()
  local prompt = BoardPromptHuntMergeItems.Create()
  return prompt:GetPromptItemModels(self:GetBoardModel()) ~= nil
end

function HuntActivityModel:_GetItemToSell()
  local boardItems = self:GetBoardModel():FilterItems(function(itemModel)
    return not self:GetBoardModel():CanItemSell(itemModel) or StringUtil.StartWith(itemModel:GetCode(), "hunt") or StringUtil.StartWith(itemModel:GetCode(), "cw#hunt")
  end)
  if Table.IsEmpty(boardItems) then
    return
  end
  local minLevelItem, level, itemType
  local minLevel = 10000
  for _, itemModel in ipairs(boardItems) do
    itemType = itemModel:GetType()
    if itemType == ItemType.Cobweb then
      itemType = itemModel:GetComponent(ItemCobweb):GetInnerItemCode()
    end
    level = GM.ItemDataModel:GetChainLevel(itemType)
    if minLevel > level then
      minLevelItem = itemModel
      minLevel = level
    end
  end
  return minLevelItem
end

function HuntActivityModel:GetOrderShowAvatar()
  local data = self.m_dbTable:GetValue(HuntActivityModel.HuntOrderShowAvatar, "value")
  if StringUtil.IsNilOrEmpty(data) then
    if data == nil then
      data = "Mia"
    else
      data = Table.ListRandomSelectOne(self.m_activityDefinition.OrderShowAvatar)
    end
    self.m_dbTable:Set(HuntActivityModel.HuntOrderShowAvatar, "value", data)
  end
  return data
end

function HuntActivityModel:ClearOrderShowAvatar()
  self.m_dbTable:Set(HuntActivityModel.HuntOrderShowAvatar, "value", "")
end

function HuntActivityModel:_GetPopupRuleTokenNum()
  return self:GetEntryRedCount()
end

function HuntActivityModel:GetHuntBookConfig()
  return self.m_bookConfig
end

function HuntActivityModel:GetActivityDataTable()
  return self.m_dbTable
end

function HuntActivityModel:GetItemBookModel()
  if self.m_boardModel == nil or self.m_boardModel:GetItemIllustratedBook() == nil then
    return nil
  end
  return self.m_boardModel:GetItemIllustratedBook()
end

function HuntActivityModel:TrySpreadLastKey(sourceCode)
  if not self.m_lastKey or tonumber(self.m_dbTable:GetValue(HuntActivityModel.LastKey, DB_VALUE_KEY)) == 1 then
    return
  end
  local code = self:GetItemCodeByLevel(self.m_lastKeyLv)
  if sourceCode == code then
    self.m_dbTable:Set(HuntActivityModel.LastKey, DB_VALUE_KEY, 1)
    return self.m_lastKey
  end
end

function HuntActivityModel:SetSigLevel(level)
  self.m_dbTable:Set(HuntActivityModel.SigLevelKey, DB_VALUE_KEY, level)
end

function HuntActivityModel:GetSigLevel()
  return self.m_dbTable:GetValue(HuntActivityModel.SigLevelKey, DB_VALUE_KEY) or 0
end

function HuntActivityModel:SetScrollTotalRow(row)
  self.m_dbTable:Set(HuntActivityModel.ScrollRow, DB_VALUE_KEY, row)
end

function HuntActivityModel:GetScrollTotalRow()
  return tonumber(self.m_dbTable:GetValue(HuntActivityModel.ScrollRow, DB_VALUE_KEY) or 0)
end

function HuntActivityModel:CanSpreadFirstMerge(itemType)
  local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
  if not itemConfig.SpreadFirstMergeNumber or not itemConfig.SpreadFirstMerge then
    return
  end
  if not self.m_firstSpread then
    self.m_firstSpread = json.decode(self.m_dbTable:GetValue(HuntActivityModel.SpreadFirstMerge, DB_VALUE_KEY) or "") or {}
  end
  if not self.m_firstSpread[itemType] then
    self.m_firstSpread[itemType] = 0
  end
  if self.m_firstSpread[itemType] < itemConfig.SpreadFirstMergeNumber then
    return true
  end
end

function HuntActivityModel:TrySpreadFirstMerge(itemType)
  local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
  if not itemConfig.SpreadFirstMergeNumber or not itemConfig.SpreadFirstMerge then
    return
  end
  if not self.m_firstSpread then
    self.m_firstSpread = json.decode(self.m_dbTable:GetValue(HuntActivityModel.SpreadFirstMerge, DB_VALUE_KEY) or "") or {}
  end
  if not self.m_firstSpread[itemType] then
    self.m_firstSpread[itemType] = 0
  end
  local code
  if self.m_firstSpread[itemType] < itemConfig.SpreadFirstMergeNumber then
    code = GM.ItemFixedSpreadModel:GenerateItemCodeWithCfgKey(itemType, "SpreadFirstMerge", self.m_dbTable)
    self.m_firstSpread[itemType] = self.m_firstSpread[itemType] + 1
    self.m_dbTable:Set(HuntActivityModel.SpreadFirstMerge, DB_VALUE_KEY, json.encode(self.m_firstSpread))
    if self.m_firstSpread[itemType] == itemConfig.SpreadFirstMergeNumber then
      EventDispatcher.DispatchEvent(EEventType.RefreshSpreadView)
    end
  end
  return code
end

function HuntActivityModel:CanShowEnergyBtn()
  return self.m_doubleEnergyModel and self.m_doubleEnergyModel:GetMaxInPeriodEnergyMultiple() > 0
end

function HuntActivityModel:CreateEnergyModel()
  self.m_doubleEnergyModel = HuntDoubleEnergyModel.Create(self.m_type, self:GetActivityDataTable())
end

function HuntActivityModel:GetDoubleEnergyModel()
  return self.m_doubleEnergyModel
end

function HuntActivityModel:TryUnlockMultipleEnergy(energyCost, triggerType)
  if not self.m_doubleEnergyModel then
    return
  end
  local energyType = self:GetEnergyTypeBycost(energyCost)
  if not energyType then
    Log.Error("TryUnlockMultipleEnergy \229\176\143\230\163\139\231\155\152\228\186\145\229\177\130\232\167\163\233\148\129\233\133\141\231\189\174\231\154\132\229\164\154\229\128\141\228\189\147\229\138\155\230\149\176\228\184\141\230\152\175 2 4 8")
    return
  end
  self.m_doubleEnergyModel:TriggerMultipleEnergy(energyType, triggerType)
end

function HuntActivityModel:_TryUnlockMultipleEnergyByToken(tokenNum)
  if self:GetLevel() < 4 then
    return
  end
  local maxUnlockCost = 0
  for cost, needNum in pairs(self.m_mapMultiTypeUnlockNum) do
    if needNum <= tokenNum then
      local maxUnlock = self.m_doubleEnergyModel:GetMaxUnlockEnergyMultiple() or 0
      if cost > 2 ^ maxUnlock then
        self:TryUnlockMultipleEnergy(cost, HuntDoubleEnergyUnclockType.TokenNum)
        maxUnlockCost = math.max(maxUnlockCost, cost)
      end
    end
  end
  if 0 < maxUnlockCost then
    self.m_dbTable:Set(self.MultiEnergyAnimKey, DB_VALUE_KEY, maxUnlockCost)
    EventDispatcher.DispatchEvent(EEventType.HuntDoubleEnergyTokenUnlock, maxUnlockCost)
  end
end

function HuntActivityModel:GetEnergyIcon(cost)
  local energyType = self:GetEnergyTypeBycost(cost)
  if not energyType then
    return
  end
  return HuntDoubleEnergyMultipleConfig[energyType].ButtonImageName
end

function HuntActivityModel:GetEnergyTypeBycost(cost)
  local map2MultipleType = {
    [2] = HuntDoubleEnergyMultipleDefinition.Double,
    [4] = HuntDoubleEnergyMultipleDefinition.Quadruple,
    [8] = HuntDoubleEnergyMultipleDefinition.Eightfold
  }
  return map2MultipleType[cost]
end

function HuntActivityModel:GetSpreadBtnImage()
  if not self.m_doubleEnergyModel then
    return
  end
  return self.m_doubleEnergyModel:GetSpreadBtnImage()
end

function HuntActivityModel:UpdateDoubleEnergyPeriodState()
  if not self.m_doubleEnergyModel or not Table.IsEmpty(self.m_mapMultiTypeUnlockNum) then
    return
  end
  self.m_doubleEnergyModel:UpdateEnergyPeriodState()
end

function HuntActivityModel:GetDoubleEnergyCostByItem(itemCode)
  if not itemCode then
    return false, 0
  end
  if Table.IsEmpty(self.m_config.arrEnergyCostMap) then
    return false, 0
  end
  if self.m_config.arrEnergyCostMap[itemCode] then
    return true, self.m_config.arrEnergyCostMap[itemCode]
  end
  return false, 0
end

function HuntActivityModel:CanPlayTutorialWhenOpenWindow()
  local doubleEnergyModel = self:GetDoubleEnergyModel()
  if not doubleEnergyModel or doubleEnergyModel:GetMaxUnlockEnergyMultiple() < 1 then
    return false
  end
  if self:CheckBoardScroll() ~= nil then
    return false
  end
  return not GM.TutorialModel:IsTutorialFinished(ETutorialId.HuntDoubleEnergy)
end

function HuntActivityModel:IsMonsterHunt()
  return self.m_activityDefinition.MonsterHunt
end

function HuntActivityModel:IsDigRewardAniState()
  return self.m_digRewardAniState
end

function HuntActivityModel:SetDigRewardAniState(bState)
  self.m_digRewardAniState = bState
end

function HuntActivityModel:GetLevelTextColor()
  return self.m_activityDefinition.NormalLevelTextColor, self.m_activityDefinition.CircleLevelTextColor
end

function HuntActivityModel:TryUpdateMonsterSpreadFlag()
  if Table.IsEmpty(self.m_digReward) or not self:IsMonsterHunt() then
    return false
  end
  local oldLevel = self.m_dbTable:GetValue(HuntActivityModel.MonsterSpreadFlag, DB_VALUE_KEY) or 0
  local curLevel, isFinish = self:GetProgressLevelByScore(self:GetDigScore())
  local digLevel = curLevel + (isFinish and 0 or -1)
  if oldLevel ~= digLevel then
    self.m_dbTable:Set(HuntActivityModel.MonsterSpreadFlag, DB_VALUE_KEY, digLevel)
    return true
  end
end

function HuntActivityModel:CanGetHuntAchiPiece()
  if Table.IsEmpty(self.m_huntAchiPieceItemConfig) then
    return false
  end
  for k, v in pairs(HuntAchiDefinition) do
    local model = GM.ActivityManager:GetModel(k)
    if model and model:IsActivityOpen() then
      return true, k
    end
  end
end

function HuntActivityModel:HasAchiPieceTutorialRealFinished()
  if Table.IsEmpty(self.m_huntAchiPieceItemConfig) then
    return false
  end
  for k, v in pairs(HuntAchiDefinition) do
    local model = GM.ActivityManager:GetModel(k)
    if model and model:IsActivityOpen() then
      return model:HasAchiPieceTutorialRealFinished()
    end
  end
  return false
end

function HuntActivityModel:IsHuntAchiPieceItem(itemType)
  return self.m_huntAchiPieceItemConfig and self.m_huntAchiPieceItemConfig[itemType]
end

function HuntActivityModel:CheckHuntAchiPieceNum(huntAchiType)
  local lv = self:GetLevel()
  local trophyPieceNum = 0
  for i = 1, lv do
    local itemCode = self:GetItemCodeByLevel(i)
    if self:IsHuntAchiPieceItem(itemCode) then
      trophyPieceNum = trophyPieceNum + 1
    end
  end
  if 0 < trophyPieceNum then
    RewardApi.AcquireRewardsLogic({
      {
        [PROPERTY_TYPE] = HuntAchiDefinition[huntAchiType].ActivityTokenPropertyType,
        [PROPERTY_COUNT] = trophyPieceNum
      }
    }, EPropertySource.Give, EBIType.HuntAchiGetPiece, CacheItemType.Stack)
  end
end
