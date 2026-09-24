EItemUnlockState = {
  Unknown = 0,
  Locked = 1,
  Unlocked = 2,
  Rewarded = 3
}
ItemDataModel = {}
ItemDataModel.__index = ItemDataModel
local DBStateCloumn = "state"

function ItemDataModel:Init()
  self.m_oldDB = GM.DBTableManager:GetTable(EDBTableConfigs.ItemUnlock)
  self.m_unlockDB = GM.DBTableManager:GetTable(EDBTableConfigs.ItemUnlockNew)
  self.m_cacheState = {}
end

function ItemDataModel:TransferData()
  self:_TransferUnlockData()
  if PlayerPrefs.GetInt(EPlayerPrefKey.PdDiscoveriesRepairKey, 0) == 0 then
    self:_RepairPdUnlockData()
    PlayerPrefs.SetInt(EPlayerPrefKey.PdDiscoveriesRepairKey, 1)
  end
  self.m_bSyncDataFinished = true
end

function ItemDataModel:LoadConfigs()
  local configs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemModel, true)
  local boxConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.BoxItemConfig)
  for _, config in ipairs(boxConfigs) do
    table.insert(configs, {
      Type = config.itemId
    })
  end
  local wheelConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.WheelItemConfig)
  for _, config in ipairs(wheelConfigs) do
    table.insert(configs, {
      Type = config.itemId
    })
  end
  self.m_modelConfigs = {}
  self.m_originItemConfig = {}
  for _, v in ipairs(configs) do
    self.m_modelConfigs[v.Type] = v
    v.series = v.series or ItemUtility.GetChainNumber(v.Type)
    v.chainId = ItemUtility.GetChainIdByCode(v.Type)
    v.level = tonumber(string.sub(v.Type, (StringUtil.rFindChar(v.Type, "_") or 0) + 1))
  end
  local config
  local specialConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemModelSpecial)
  for _, specialConfig in ipairs(specialConfigs) do
    config = self.m_modelConfigs[specialConfig.Type]
    if config then
      for k, v in pairs(specialConfig) do
        config[k] = v
      end
    else
      Log.Error(tostring(specialConfig.Type) .. " not exist in ItemModelConfig!")
    end
  end
  self:_InitModelData()
end

function ItemDataModel:GetAllItemTypes()
  local arr = {}
  local exceptedType = {
    [ItemType.Bubble] = true,
    [ItemType.Cobweb] = true,
    [ItemType.PaperBox] = true,
    [ItemType.MapBlocker] = true,
    [ItemType.Sand] = true,
    [ItemType.Rune] = true,
    [ItemType.Gray] = true
  }
  for k, v in pairs(self.m_modelConfigs) do
    if not exceptedType[k] then
      arr[#arr + 1] = k
    end
  end
  return arr
end

function ItemDataModel:_InitModelData()
  self.m_chainIdMaxLevelMap = {}
  self.m_chainIdProtectLevelMap = {}
  self.m_chainIdGeneratorMap = {}
  self.m_inOrderMap = {}
  self.m_itemGeneratorMap = {}
  self.m_itemProductionMap = {}
  self.m_pdItemMap = {}
  self.m_maxLevelItemMap = {}
  self.m_sourceItemList = {}
  self.m_costItemList = {}
  local customChainIdGeneratorMap = {}
  local generatorSet = {}
  local arrDiscoveriesInfo = {}
  local originBubblePriceMap = GM.ConfigModel:GetOriginBubblePriceMap()
  for type, item in pairs(self.m_modelConfigs) do
    local mergedType = item.MergedType
    if mergedType then
      local mergedItem = self.m_modelConfigs[mergedType]
      if mergedItem then
        if mergedItem.MergedFromType then
          Log.Error(tostring(mergedItem.Type) .. " has more than one MergedFromType.")
        end
        mergedItem.MergedFromType = type
      else
        Log.Error(tostring(type) .. "'s MergedType:" .. tostring(mergedType) .. " config does not exist.")
      end
    end
    local chainId = item.chainId
    local level = item.level
    self.m_inOrderMap[type] = item.InOrder == 1
    if item.Book_Tab then
      table.insert(arrDiscoveriesInfo, {
        chain = chainId,
        tab = item.Book_Tab,
        order = item.Book_TabOrder,
        lineNumber = ItemUtility.GetMergeLineNumber(chainId),
        series = tonumber(item.series)
      })
    end
    local maxLevel = self.m_chainIdMaxLevelMap[chainId]
    if maxLevel == nil then
      self.m_chainIdMaxLevelMap[chainId] = level
    else
      self.m_chainIdMaxLevelMap[chainId] = math.max(level, maxLevel)
    end
    if level == 1 then
      self.m_chainIdProtectLevelMap[chainId] = item.ProtectLevel
    end
    if item.Generators ~= nil then
      customChainIdGeneratorMap[chainId] = item.Generators
    end
    if item.Spread_Weight ~= nil then
      if StringUtil.StartWith(chainId, ItemCodePrefix.MainGenerator) then
        generatorSet[chainId] = true
      end
      for _, pair in ipairs(item.Spread_Weight) do
        if self.m_modelConfigs and self.m_modelConfigs[pair.Code] then
          self:_AddItemGeneratorMap(pair.Code, type)
          self:_AddItemProductionMap(type, pair.Code)
        end
      end
      if StringUtil.StartWith(type, "it") then
        local swallowList = item.Swallow_Weight1 or item.CostItem
        for _, pair in ipairs(item.Spread_Weight) do
          if self.m_modelConfigs and self.m_modelConfigs[pair.Code] then
            self:_AddSourceItem(self.m_modelConfigs[pair.Code].chainId, type, true)
            if swallowList then
              for _, swallowItem in pairs(swallowList) do
                self:_AddSourceItem(self.m_modelConfigs[pair.Code].chainId, swallowItem.Code)
              end
            end
          end
        end
      end
    end
    if item.Charge_Stage ~= nil then
      local list = {}
      for index, config in ipairs(item.Charge_Stage) do
        list[index] = ChargeConfig.Create(config)
        if StringUtil.StartWith(chainId, ItemCodePrefix.MainGenerator) then
          generatorSet[chainId] = true
        end
        for _, pair in ipairs(list[index].spread) do
          if self.m_modelConfigs and self.m_modelConfigs[pair.Code] then
            self:_AddItemGeneratorMap(pair.Code, type)
            self:_AddItemProductionMap(type, pair.Code)
          end
        end
      end
      item.Charge_Stage = list
    end
    if item.Transform_Item ~= nil then
      self:_AddItemGeneratorMap(item.Transform_Item, type)
      self:_AddItemProductionMap(type, item.Transform_Item)
    end
    if item.Swallow_Chain ~= nil then
      item.Swallow_Chain = ConfigUtil.SplitNameAndNum(item.Swallow_Chain)
    end
    if StringUtil.StartWith(item.chainId, ItemCodePrefix.MainGenerator) or StringUtil.StartWith(item.chainId, "honeypd_") then
      self.m_pdItemMap[type] = item
    end
    if originBubblePriceMap and originBubblePriceMap[type] then
      item.BubblePrice = originBubblePriceMap[type]
    end
  end
  for chainId, generators in pairs(customChainIdGeneratorMap) do
    self.m_chainIdGeneratorMap[chainId] = generators
  end
  for chainid, level in pairs(self.m_chainIdMaxLevelMap) do
    local item = ItemUtility.GetItemCode(chainid, level)
    self.m_maxLevelItemMap[item] = true
    self.m_chainIdMaxLevelMap[chainid] = {level = level, code = item}
  end
  self.m_arrSortedGeneratorChains = {}
  self.m_mainGeneratorCount = 0
  for chain, _ in pairs(generatorSet) do
    self.m_mainGeneratorCount = self.m_mainGeneratorCount + 1
    self.m_arrSortedGeneratorChains[self.m_mainGeneratorCount] = chain
  end
  local index = ItemCodePrefix.MainGenerator:len() + 1
  table.sort(self.m_arrSortedGeneratorChains, function(a, b)
    local levelA = tonumber(a:sub(index))
    local levelB = tonumber(b:sub(index))
    if levelA and levelB then
      return levelA > levelB
    end
    return b < a
  end)
  self:_InitDiscoveriesMap(arrDiscoveriesInfo)
end

function ItemDataModel:_AddItemGeneratorMap(item, sourceItem)
  if self.m_itemGeneratorMap[item] == nil then
    self.m_itemGeneratorMap[item] = {}
  end
  self.m_itemGeneratorMap[item][sourceItem] = true
end

function ItemDataModel:_AddSourceItem(chain, source, spread)
  if self.m_costItemList[chain] == nil then
    self.m_costItemList[chain] = {}
  end
  local chainId = self.m_modelConfigs[source].chainId
  local level = self.m_modelConfigs[source].level
  if not Table.ListContain(self.m_costItemList[chain], chainId) then
    self.m_costItemList[chain][chainId] = math.max(level, self.m_costItemList[chain][chainId] or 0)
  end
  if spread and self.m_sourceItemList[chain] == nil then
    self.m_sourceItemList[chain] = source
  end
end

function ItemDataModel:_AddItemProductionMap(item, productItem)
  if self.m_itemProductionMap[item] == nil then
    self.m_itemProductionMap[item] = {}
  end
  self.m_itemProductionMap[item][productItem] = true
end

function ItemDataModel:GetModelConfig(type, ignoreWarnning)
  if not ignoreWarnning and not self.m_modelConfigs[type] then
    Log.Error("No item model config for type:" .. tostring(type))
  end
  return self.m_modelConfigs[type]
end

function ItemDataModel:IsItemExist(type)
  return self.m_modelConfigs[type] ~= nil
end

function ItemDataModel:GetSpriteName(type, gameMode, itemModel)
  if type == ItemType.Cobweb or type == ItemType.Rune then
    return nil
  elseif type == ItemType.PaperBox or type == ItemType.MapBlocker then
    if gameMode == EGameMode.Hunt then
      return Table.ListRandomSelectOne(HuntActivityModel.GetPaperBoxSprite(itemModel) or PaperBoxSprite)
    end
    return Table.ListRandomSelectOne(PaperBoxSprite)
  elseif ItemBoxSimilarUtility.IsBoxSimilarItem(type) then
    return ItemBoxSimilarUtility.GetItemIcon(type)
  elseif StringUtil.StartWith(type, ItemCodePrefix.Blind) then
    local prefix = string.sub(type, 1, string.find(type, "_"))
    local suffix = string.sub(type, StringUtil.rFindChar(type, "_") + 1)
    return prefix .. suffix
  elseif StringUtil.StartWith(type, ItemCodePrefix.Hunt) then
    local lv = tonumber(string.sub(type, StringUtil.rFindChar(type, "_") + 1))
    type = "explore_tr_" .. lv
    for activityType, _ in pairs(HuntActivityDefinition) do
      local huntModel = GM.ActivityManager:GetModel(activityType)
      if huntModel:GetState() == ActivityState.Started then
        type = huntModel:GetItemCodeByLevel(lv) or "explore_tr_" .. lv
      end
    end
  elseif string.match(type, "hunt") and string.match(type, "mine") then
    type = string.sub(type, 0, string.len(type) - 2)
  elseif type == ItemType.Bubble and gameMode == EGameMode.Hunt then
    return ImageFileConfigName.hunt_bb
  elseif StringUtil.StartWith(type, ItemCodePrefix.CloudsDash) then
    return type
  end
  for _, def in pairs(LuckyStarDefinition) do
    if type == def.ActivityTokenPropertyType then
      type = def.ActivityTokenImage
      break
    end
  end
  if not ImageFileConfigName.HasConfig(type) and StringUtil.StartWith(type, "hunt") then
    local pre = string.sub(type, 1, string.find(type, "_"))
    local sur = string.sub(type, StringUtil.rFindChar(type, "_"))
    type = pre .. "1" .. sur
  end
  if AlbumModel.IsAlbumPackType(type) then
    return AlbumModel.TryReplaceNormalPackName(type)
  else
    return ItemChangeHelper.GetItemSprite(type)
  end
end

function ItemDataModel:GetSpreadPrompt(item, pd)
  if self.m_modelConfigs[pd].Amazing and Table.ListContain(self.m_modelConfigs[pd].Amazing, item) then
    return EPromptStyle.Amazing, "hint_amazing"
  elseif self.m_modelConfigs[pd].Lucky and Table.ListContain(self.m_modelConfigs[pd].Lucky, item) then
    return EPromptStyle.Lucky, "hint_lucky"
  elseif GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BoxLuckyTip) and Table.ListContain(ItemEnergyBoxType, pd) then
    if item == ItemType.Energy04 then
      return EPromptStyle.Amazing, "hint_amazing"
    elseif item == ItemType.Energy03 then
      return EPromptStyle.Lucky, "hint_lucky"
    end
  end
end

function ItemDataModel:GetChainLevel(type)
  return self:GetModelConfig(type).level
end

function ItemDataModel:GetChainId(type)
  return self:GetModelConfig(type).chainId
end

function ItemDataModel:GetMergedType(type)
  return self:GetModelConfig(type).MergedType
end

function ItemDataModel:GetMergedFromType(type)
  return self:GetModelConfig(type).MergedFromType
end

function ItemDataModel:GetEndConversionType(type)
  return self:GetModelConfig(type).End_Conversion
end

function ItemDataModel:GetChainMaxLevel(chainId)
  Log.Assert(self.m_chainIdMaxLevelMap[chainId], "No chainid maxlevel config for chainId:" .. tostring(chainId))
  return self.m_chainIdMaxLevelMap[chainId].level or 0
end

function ItemDataModel:IsChainExist(chainId)
  return self.m_chainIdMaxLevelMap[chainId] ~= nil
end

function ItemDataModel:IsItemMaxLevel(itemId)
  return self.m_maxLevelItemMap[itemId]
end

function ItemDataModel:GetChainProtectLevel(chainId)
  return self.m_chainIdProtectLevelMap[chainId]
end

function ItemDataModel:GetChainGenerator(chainId)
  return self.m_chainIdGeneratorMap[chainId]
end

function ItemDataModel:GetItemUnlockGenerator(itemType)
  local chainId = self:GetChainId(itemType)
  local generatorChain = self:GetChainGenerator(chainId)
  if generatorChain == nil then
    return
  end
  local level = self:GetChainUnlockedLevel(generatorChain)
  local generator = ItemUtility.GetItemCode(generatorChain, level)
  return generator
end

function ItemDataModel:GetItemGenerators(itemType)
  local chainId = self:GetChainId(itemType)
  local chainLevel = self:GetChainLevel(itemType) or 0
  local result, iType, mapGenerators
  for i = 1, chainLevel do
    iType = ItemUtility.GetItemCode(chainId, i)
    mapGenerators = self.m_itemGeneratorMap[iType]
    if mapGenerators ~= nil then
      for tp, _ in pairs(mapGenerators) do
        if result == nil then
          result = {}
        end
        if not Table.Contain(result, tp) then
          result[#result + 1] = tp
        end
      end
    end
  end
  if not Table.IsEmpty(result) then
    local function sortFunc(a, b)
      if self:GetChainId(a) ~= self:GetChainId(b) then
        return self:GetChainId(a) < self:GetChainId(b)
      end
      return self:GetChainLevel(a) < self:GetChainLevel(b)
    end
    
    table.sort(result, sortFunc)
  end
  return result
end

function ItemDataModel:IsFreeItem(itemType)
  local chainId = self:GetChainId(itemType)
  if StringUtil.StartWith(itemType, "it") then
    chainId = self.m_chainIdGeneratorMap[chainId]
  else
    return false
  end
  local chainLevel = self:GetChainMaxLevel(chainId)
  local pdItem = ItemUtility.GetItemCode(chainId, chainLevel)
  local itemConfig = self:GetModelConfig(pdItem)
  if itemConfig ~= nil and itemConfig.CostEnergy ~= nil then
    return itemConfig.CostEnergy == 0
  end
  return false
end

function ItemDataModel:IsFreeGenerator(code)
  return self:GetModelConfig(code).CostEnergy == 0
end

function ItemDataModel:IsChargeableItem(code)
  return self:GetModelConfig(code).Charge_Stage ~= nil
end

function ItemDataModel:GetItemSourceMap(itemType, bIncludeMergedFromType)
  local map = self.m_itemGeneratorMap[itemType] or {}
  map = Table.ShallowCopy(map)
  if bIncludeMergedFromType then
    local itemConfig = self:GetModelConfig(itemType)
    local prev = itemConfig.MergedFromType
    if self:IsItemExist(prev) then
      map[prev] = true
    end
  end
  return map
end

function ItemDataModel:GetItemProductionMap(itemType, bIncludeMergeType)
  local map = self.m_itemProductionMap[itemType] or {}
  map = Table.ShallowCopy(map)
  if bIncludeMergeType then
    local itemConfig = self:GetModelConfig(itemType)
    local next = itemConfig.MergedType
    if self:IsItemExist(next) then
      map[next] = true
    end
  end
  return map
end

function ItemDataModel:IsProduction(generator, itemCode)
  return self.m_itemProductionMap[generator][itemCode] == true
end

function ItemDataModel:GetChain(chainId)
  local chain = {}
  local maxLevel = self:GetChainMaxLevel(chainId)
  for level = 1, maxLevel do
    table.insert(chain, ItemUtility.GetItemCode(chainId, level))
  end
  return chain
end

function ItemDataModel:_InitDiscoveriesMap(arrDiscoveriesInfo)
  self.m_discoveriesMap = {}
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.DiscoveriesSplit) then
    for _, info in ipairs(arrDiscoveriesInfo) do
      if not self.m_discoveriesMap[info.tab] then
        self.m_discoveriesMap[info.tab] = {}
      end
      table.insert(self.m_discoveriesMap[info.tab], info)
    end
    
    local function sortByOrder(a, b)
      return a.order < b.order
    end
    
    for _, list in pairs(self.m_discoveriesMap) do
      table.sort(list, sortByOrder)
    end
    return self.m_discoveriesMap
  end
  
  local function sortFunc(a, b)
    if a.series == b.series then
      return a.lineNumber < b.lineNumber
    end
    return a.series < b.series
  end
  
  table.sort(arrDiscoveriesInfo, sortFunc)
  local minSeries = 0
  local seriesCount = 9
  local tab = 1
  for _, info in ipairs(arrDiscoveriesInfo) do
    if minSeries < info.series then
      minSeries = info.series
      seriesCount = seriesCount + 1
      if seriesCount == 10 then
        tab = tab + 1
        seriesCount = 0
      end
    end
    if not self.m_discoveriesMap[tab] then
      self.m_discoveriesMap[tab] = {}
    end
    table.insert(self.m_discoveriesMap[tab], info)
  end
  self.m_discoveriesTabIcon = {}
  local list = require("Data.Config.DiscoveriesTabIcon")
  for _, v in pairs(list) do
    self.m_discoveriesTabIcon[v.Tab] = self:GetSpriteName(v.Icon)
  end
  self.m_maxChainNumInTab = 0
  for i = 1, tab do
    self.m_maxChainNumInTab = math.max(self.m_maxChainNumInTab, #self.m_discoveriesMap[tab])
    if not self.m_discoveriesTabIcon[i] then
      local chainId = self.m_discoveriesMap[i][1].chain
      local code
      if self.m_chainIdMaxLevelMap[chainId].level > 5 then
        code = ItemUtility.GetItemCode(chainId, 5)
      else
        code = self.m_chainIdMaxLevelMap[chainId].code
      end
      self.m_discoveriesTabIcon[i] = self:GetSpriteName(code)
    end
  end
end

function ItemDataModel:GetDiscoveriesTabIcon()
  return self.m_discoveriesTabIcon
end

function ItemDataModel:GetChainMaxNumInDiscoveriesTab()
  return self.m_maxChainNumInTab
end

function ItemDataModel:GetDiscoveriesChain(tab)
  return tab and self.m_discoveriesMap[tab] or self.m_discoveriesMap
end

function ItemDataModel:GetCanRewardChain(Tab)
  for tab, list in pairs(self.m_discoveriesMap) do
    if not Tab or tab == Tab then
      for _, data in ipairs(list) do
        if self:HasUnlockRewardInChain(data.chain) then
          return data.chain, tab
        end
      end
    end
  end
end

function ItemDataModel:GetMaxUnlockChainInTab(Tab)
  for tab, list in pairs(self.m_discoveriesMap) do
    if not Tab or tab == Tab then
      for i = #list, 1, -1 do
        if self:GetChainUnlockedLevel(list[i].chain) > 0 then
          return list[i].chain, tab
        end
      end
    end
  end
end

function ItemDataModel:HasUnlockRewardInChain(chain)
  local maxLevel = self:GetChainMaxLevel(chain)
  for level = 1, maxLevel do
    local item = ItemUtility.GetItemCode(chain, level)
    if self:GetUnlockState(item) == EItemUnlockState.Unlocked then
      return true
    end
  end
end

function ItemDataModel:TestGetAllDiscoveries()
  local hasReward = false
  for _, item in pairs(self.m_modelConfigs) do
    if item.Book_Reward and self:GetUnlockState(item.Type) == EItemUnlockState.Unlocked then
      self:GetUnlockedReward(item.Type)
      hasReward = true
    end
  end
  return hasReward
end

function ItemDataModel:IsUnlocked(type)
  return self:GetUnlockState(type) > EItemUnlockState.Locked
end

function ItemDataModel:SetUnlocked(type)
  if self:IsUnlocked(type) then
    return
  end
  self:_SetUnlockState(type, EItemUnlockState.Unlocked)
  GM.BIManager:LogAction(EBIType.ItemUnlock, type)
  EventDispatcher.DispatchEvent(EEventType.ItemUnlocked, type)
  EventDispatcher.DispatchEvent(EEventType.DiscoveriesUpdate)
  if GM.MainBoardModel:IsToolBoxCollect() and GM.MiscModel:GetToolTransFlagInNumber() ~= 1 and (ToolCodeToLevel[type] or type == ItemType.ToolBox01 or type == ItemType.ToolBox02 or type == ItemType.HugeToolBox01 or type == ItemType.HugeToolBox02) then
    DelayExecuteFunc(function()
      ToolCollectHintWindow.TryPopup()
    end, 0.75)
  end
  return true
end

function ItemDataModel:SetLocked(type)
  if self:IsUnlocked(type) then
    return
  end
  self:_SetUnlockState(type, EItemUnlockState.Locked)
end

function ItemDataModel:ResetUnlockState(type)
  if type == nil or not self:IsUnlocked(type) then
    return
  end
  self:_SetUnlockState(type, EItemUnlockState.Unknown)
end

function ItemDataModel:GetUnlockState(type)
  Log.Assert(self.m_bSyncDataFinished == true, "DB\229\136\157\229\167\139\229\140\150\229\174\140\230\175\149\229\137\141\228\184\141\229\186\148\232\175\165\232\175\187\229\143\150\230\163\139\229\173\144\232\167\163\233\148\129\231\138\182\230\128\129")
  local chainId = self:GetChainId(type)
  local level = self:GetChainLevel(type)
  local value = self.m_cacheState[chainId]
  if not value then
    value = self:_GetChainUnlockInfoInNumber(chainId) or EItemUnlockState.Unknown
    self.m_cacheState[chainId] = value
  end
  return value // self:_GetUnlockBitNumber(level) % 10
end

function ItemDataModel:_GetChainUnlockInfoInNumber(chainId)
  return tonumber(self.m_unlockDB:GetValue(chainId, DB_VALUE_KEY))
end

function ItemDataModel:IsChainLocked(chainId)
  local value = self:_GetChainUnlockInfoInNumber(chainId)
  return value == nil or value == EItemUnlockState.Unknown
end

function ItemDataModel:GetUnlockedReward(type)
  self:_SetUnlockState(type, EItemUnlockState.Rewarded)
  local config = self:GetModelConfig(type)
  local reward = config.Book_Reward
  RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, EBIType.ItemUnlock)
  return reward
end

function ItemDataModel:_SetUnlockState(type, state)
  local chainId = self:GetChainId(type)
  local level = self:GetChainLevel(type)
  local value = self.m_cacheState[chainId] or self:_GetChainUnlockInfoInNumber(chainId)
  value = self:_GetNewStateUnlockValue(value, level, state)
  self.m_cacheState[chainId] = value
  self.m_unlockDB:Set(chainId, DB_VALUE_KEY, tostring(value))
end

function ItemDataModel:IsUnlockedRewardConfigured(type)
  local config = self:GetModelConfig(type)
  return config and config.Book_Reward ~= nil
end

function ItemDataModel:GetHuntUnlockedReward(type)
  local config = self:GetModelConfig(type)
  local reward = config.Book_Reward or {Currency = "energy", Amount = 1}
  return reward
end

function ItemDataModel:GetData()
  return self.m_unlockDB
end

function ItemDataModel:GetOldItemUnlockData()
  return self.m_oldDB
end

function ItemDataModel:SyncOldItemUnlockData(dataArr)
  self.m_oldDB:FromArr(dataArr)
end

function ItemDataModel:FromSyncData(dataArr)
  self.m_unlockDB:FromArr(dataArr)
end

function ItemDataModel:GetUnlockedMainGenerator(range)
  local orderModel = GM.MainBoardModel:GetOrderModel()
  local newRule = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.PDNewRange)
  local count = 0
  local list = {}
  for i = 1, #self.m_arrSortedGeneratorChains do
    local chainId = self.m_arrSortedGeneratorChains[i]
    if self:IsUnlocked(ItemUtility.GetItemCode(chainId, 1)) and (not newRule or self:IsUnlocked(ItemUtility.GetItemCode(chainId, 5)) or orderModel:HasAllTutorialOrderFinished(chainId)) then
      local code = ItemUtility.GetItemCode(chainId, self:GetChainUnlockedLevel(chainId))
      if self.m_itemProductionMap[code] then
        count = count + 1
        list[count] = code
        if count == range then
          break
        end
      end
    end
  end
  return list
end

function ItemDataModel:GetLastOutRangeGenerator(range)
  local orderModel = GM.MainBoardModel:GetOrderModel()
  range = range + 1
  local count = 0
  local newRule = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.PDNewRange)
  for i = 1, #self.m_arrSortedGeneratorChains do
    local chainId = self.m_arrSortedGeneratorChains[i]
    if self:IsUnlocked(ItemUtility.GetItemCode(chainId, 1)) and (not newRule or self:IsUnlocked(ItemUtility.GetItemCode(chainId, 5)) or orderModel:HasAllTutorialOrderFinished(chainId)) then
      local code = ItemUtility.GetItemCode(chainId, self:GetChainUnlockedLevel(chainId))
      if self.m_itemProductionMap[code] then
        count = count + 1
        if count == range then
          return code
        end
      end
    end
  end
end

function ItemDataModel:GetChainUnlockedLevel(chain)
  local level = 0
  for i = self:GetChainMaxLevel(chain), 1, -1 do
    if self:IsUnlocked(ItemUtility.GetItemCode(chain, i)) then
      level = i
      break
    end
  end
  return level
end

function ItemDataModel:IsInOrder(item)
  return self.m_inOrderMap[item]
end

function ItemDataModel:GetProducerItemInfo()
  return self.m_pdItemMap
end

function ItemDataModel:GetGeneratorLevels()
  local mapLevels = {}
  if self.m_arrSortedGeneratorChains then
    for _, chain in pairs(self.m_arrSortedGeneratorChains) do
      if self:IsUnlocked(ItemUtility.GetItemCode(chain, 1)) then
        mapLevels[chain] = self:GetChainUnlockedLevel(chain)
      end
    end
  else
    for chain, value in pairs(self.m_unlockDB:GetValues()) do
      if StringUtil.StartWith(chain, ItemCodePrefix.MainGenerator) then
        local info = tonumber(value[DB_VALUE_KEY])
        self.m_cacheState[chain] = info
        local bitNumber = 1
        local level = 1
        local maxLevel = 0
        while info >= bitNumber do
          if info // bitNumber % 10 >= EItemUnlockState.Unlocked then
            maxLevel = level
          end
          level = level + 1
          bitNumber = bitNumber * 10
        end
        mapLevels[chain] = maxLevel
      end
    end
  end
  return mapLevels
end

function ItemDataModel:HasItemGuide(itemType)
  local config = self:GetModelConfig(itemType)
  return config and config.Item_guide == 1
end

function ItemDataModel:_TransferUnlockData()
  if self.m_oldDB:IsEmpty() then
    return
  end
  local values = {}
  for itemCode, state in pairs(self.m_oldDB:GetValues()) do
    if self:IsItemExist(itemCode) then
      local chainId = self:GetChainId(itemCode)
      local level = self:GetChainLevel(itemCode)
      values[chainId] = self:_GetNewStateUnlockValue(values[chainId] or 0, level, state[DBStateCloumn])
    end
  end
  for chainId, value in pairs(values) do
    values[chainId] = {
      [DB_VALUE_KEY] = tostring(value)
    }
  end
  self.m_unlockDB:BatchSet(values)
  self.m_oldDB:Clear()
end

function ItemDataModel:_GetNewStateUnlockValue(value, level, state)
  local bitNumber = self:_GetUnlockBitNumber(level)
  local r = value // bitNumber % 10
  return value + (state - r) * bitNumber
end

function ItemDataModel:_GetUnlockBitNumber(level)
  return math.ceil(10 ^ (level - 1))
end

function ItemDataModel:IsRalatedItem(item1, item2)
  if self.m_modelConfigs[item1] == nil or self.m_modelConfigs[item2] == nil then
    Log.Error("Item Model Config Nil " .. item1 .. " " .. item2)
    return false
  end
  if self.m_modelConfigs[item1].chainId == self.m_modelConfigs[item2].chainId then
    return true
  elseif self.m_modelConfigs[item1].series ~= self.m_modelConfigs[item2].series then
    return false
  else
    local chainId = self.m_modelConfigs[item2].chainId
    local maxLevelItem = self.m_chainIdMaxLevelMap[chainId]
    local productions = self.m_itemProductionMap[maxLevelItem.code]
    if productions == nil or next(productions) == nil then
      return false
    end
    for code, _ in pairs(productions) do
      if self.m_modelConfigs[item1].chainId == self.m_modelConfigs[code].chainId then
        return true
      end
    end
  end
  return false
end

function ItemDataModel:GetSourceItem(chainId)
  return self.m_sourceItemList[chainId]
end

function ItemDataModel:GetAllSourceItem(chainId)
  return self.m_costItemList[chainId]
end

local rareItemChainIdMap = {}

function ItemDataModel:IsRareItem(itemCode)
  local chainId = self:GetChainId(itemCode)
  if rareItemChainIdMap[chainId] ~= nil then
    return rareItemChainIdMap[chainId] == 1
  end
  local pdChainId = self.m_chainIdGeneratorMap[chainId]
  local relatedChainIds = {}
  for k, v in pairs(self.m_chainIdGeneratorMap) do
    if v == pdChainId then
      relatedChainIds[#relatedChainIds + 1] = k
    end
  end
  if Table.IsEmpty(relatedChainIds) then
    Log.Error("relatedChainIds\228\184\186\231\169\186")
    return false
  end
  table.sort(relatedChainIds, function(a, b)
    local itemCodeA = ItemUtility.GetItemCode(a, 1)
    local itemCodeB = ItemUtility.GetItemCode(b, 1)
    local scoreA = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCodeA) or 0
    local scoreB = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCodeB) or 0
    return scoreA > scoreB
  end)
  local midNum = math.ceil(#relatedChainIds / 2)
  for i = 1, #relatedChainIds do
    if i <= midNum then
      rareItemChainIdMap[relatedChainIds[i]] = 1
    else
      rareItemChainIdMap[relatedChainIds[i]] = 0
    end
  end
  return rareItemChainIdMap[chainId] == 1
end

function ItemDataModel:UpdateItemConfig(itemCode, changedVal, removedVal)
  if self.m_modelConfigs[itemCode] == nil then
    Log.Error("ItemDataModel:UpdateItemConfig error, code not exist:" .. itemCode)
    return
  end
  if self.m_originItemConfig[itemCode] == nil then
    self.m_originItemConfig[itemCode] = Table.DeepCopy(self.m_modelConfigs[itemCode])
  end
  if not Table.IsEmpty(changedVal) then
    for key, value in pairs(changedVal) do
      self.m_modelConfigs[itemCode][key] = value
    end
  end
  if not Table.IsEmpty(removedVal) then
    for _, key in pairs(removedVal) do
      self.m_modelConfigs[itemCode][key] = nil
    end
  end
end

function ItemDataModel:ResetItemConfig(itemCode)
  if itemCode and self.m_originItemConfig[itemCode] ~= nil then
    self.m_modelConfigs[itemCode] = self.m_originItemConfig[itemCode]
    self.m_originItemConfig[itemCode] = nil
  end
end

function ItemDataModel:IsProducedOnlyByPdItem(itemType)
  local mapSourceItems = self:GetItemSourceMap(itemType, false)
  if Table.IsEmpty(mapSourceItems) then
    return false
  end
  for producer, _ in pairs(mapSourceItems) do
    if self.m_pdItemMap[producer] == nil then
      return false
    end
  end
  return true
end

function ItemDataModel:GetItemRewardIndex(itemCode)
  if self.m_modelConfigs[itemCode] == nil then
    Log.Error("ItemDataModel error, itemCode not exist:" .. itemCode)
    return
  end
  return self.m_modelConfigs[itemCode].itemIndex
end

function ItemDataModel:IsPdItem(itemType)
  if self.m_pdItemMap[itemType] ~= nil then
    return true
  end
  return false
end

function ItemDataModel:UpdateItemUnlock(curVersion, originVersion)
  local originLevelMap = GM.ConfigModel:GetOriginLevelMap()
  if Table.IsEmpty(originLevelMap) then
    return
  end
  local valuesMap = {}
  
  local function _GetNewState(originState, originLevel, newLevel, state)
    for i = originLevel + 1, newLevel do
      originState = self:_GetNewStateUnlockValue(originState, i, state)
    end
    return originState
  end
  
  for chainId, level in pairs(originLevelMap) do
    if self.m_chainIdMaxLevelMap[chainId] then
      local nowMaxLevel = self.m_chainIdMaxLevelMap[chainId].level
      local chainNumber = ItemUtility.GetChainNumber(chainId)
      if level <= nowMaxLevel and curVersion[chainNumber] ~= originVersion[chainNumber] then
        local rewardState = 0
        for i = 1, level do
          local bitNumber = self:_GetUnlockBitNumber(i)
          rewardState = rewardState + bitNumber * EItemUnlockState.Rewarded
        end
        local realState = self:_GetChainUnlockInfoInNumber(chainId) or 0
        if realState == rewardState then
          local value = _GetNewState(realState, level, nowMaxLevel, EItemUnlockState.Rewarded)
          self.m_cacheState[chainId] = value
          valuesMap[chainId] = {
            [DB_VALUE_KEY] = tostring(value)
          }
        elseif self:IsAllChainUnlocked(realState, level) then
          local value = _GetNewState(realState, level, nowMaxLevel, EItemUnlockState.Unlocked)
          self.m_cacheState[chainId] = value
          valuesMap[chainId] = {
            [DB_VALUE_KEY] = tostring(value)
          }
        end
      end
    end
  end
  if not Table.IsEmpty(valuesMap) then
    self.m_unlockDB:BatchSet(valuesMap)
  end
end

function ItemDataModel:IsAllChainUnlocked(state, level)
  for i = 1, level do
    local bit = state % 10
    if bit < EItemUnlockState.Unlocked then
      return false
    end
    state = state // 10
  end
  return true
end

function ItemDataModel:GetItemOriginalGenerators(itemType)
  local genList = self:GetItemGenerators(itemType)
  local chainId, genCode
  while not StringUtil.StartWith(genList[1], ItemCodePrefix.MainGenerator) do
    chainId = self:GetChainId(genList[1])
    genList = self:GetItemGenerators(genList[1])
    for i = #genList, 1, -1 do
      genCode = genList[i]
      if self:GetChainId(genCode) == chainId then
        table.remove(genList, i)
      end
    end
  end
  return genList
end

function ItemDataModel:CanGenerateItem(itemType)
  local genType = self:GetItemUnlockGenerator(itemType)
  local genList = self:GetItemOriginalGenerators(itemType) or {}
  for _, gen in ipairs(genList) do
    if gen == genType then
      return true
    end
  end
  return false
end

function ItemDataModel:IsAnyToolUnlocked()
  local toolChains = {
    EPropertyType.Tool1,
    EPropertyType.Tool2,
    EPropertyType.Tool3,
    EPropertyType.Tool4,
    "tbox1",
    "tbox2",
    "htbox1",
    "htbox2"
  }
  for _, chainId in pairs(toolChains) do
    local value = self:_GetChainUnlockInfoInNumber(chainId) or EItemUnlockState.Unknown
    if value > EItemUnlockState.Unknown then
      return true
    end
  end
  return false
end

function ItemDataModel:_RepairPdUnlockData()
  local arrPdItems = GM.MainBoardModel:GetItemManager():GetAllPdItemsFromDB()
  local mapChainLevel = {}
  for _, item in ipairs(arrPdItems) do
    local chainId = self:GetChainId(item)
    local chainLevel = self:GetChainLevel(item)
    mapChainLevel[chainId] = math.max(mapChainLevel[chainId] or 0, chainLevel)
  end
  for chainId, level in pairs(mapChainLevel) do
    local originValue = self:_GetChainUnlockInfoInNumber(chainId) or EItemUnlockState.Unknown
    local value = originValue
    for i = 1, level do
      local bitNumber = self:_GetUnlockBitNumber(i)
      local state = value // bitNumber % 10
      if state == 0 then
        value = value + EItemUnlockState.Rewarded * bitNumber
      end
    end
    if value ~= originValue then
      self.m_unlockDB:Set(chainId, DB_VALUE_KEY, tostring(value))
      Log.Debug("origin" .. originValue .. " new:" .. value, "\228\191\174\229\164\141\230\163\139\229\173\144\229\155\190\233\137\180")
    end
  end
end
