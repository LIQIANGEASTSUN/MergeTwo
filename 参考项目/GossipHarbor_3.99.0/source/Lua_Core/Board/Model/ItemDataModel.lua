ItemDataModel = {}
ItemDataModel.__index = ItemDataModel

function ItemDataModel:Init()
  self:_InitUnlockData()
end

function ItemDataModel:LoadFileConfig()
  self.m_mapModelConfigs = {}
  self.m_mapItemChainLevelTypeMap = {}
  local modelConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemModel)
  for _, config in ipairs(modelConfigs) do
    local type = config.Type
    if config.StateCollectionType == nil then
      config.ChainId, config.ChainLevel = self:_ParseChainIdAndLevel(type)
    end
    if config.MergeRewards ~= nil then
      config.FormattedMergeRewards = ConfigUtil.GetCurrencyFromArrStr(config.MergeRewards)
    end
    self.m_mapModelConfigs[type] = config
    if self.m_mapItemChainLevelTypeMap[config.ChainId] == nil then
      self.m_mapItemChainLevelTypeMap[config.ChainId] = {}
    end
    self.m_mapItemChainLevelTypeMap[config.ChainId][config.ChainLevel] = type
  end
  self.m_mapViewConigs = {}
  local viewConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemView)
  for _, config in ipairs(viewConfigs) do
    self.m_mapViewConigs[config.Type] = config
  end
  self:_InitModelData()
end

function ItemDataModel:_InitModelData()
  self.m_chainIdMaxLevelMap = {}
  self.m_chainIdMaxLevelItemTypeMap = {}
  self.m_mapMaxLevelItemTypes = {}
  self.m_chainIdProtectLevelMap = {}
  self.m_itemStateCollectionMap = {}
  self.m_itemTemplates = {}
  self.m_chainIdFirstLevelGeneratorMap = {}
  local chainIdFirstLevelGeneratorChainIdMap = {}
  local chainIdSecondLevelGeneratorChainIdMap = {}
  for type, item in pairs(self.m_mapModelConfigs) do
    if item.StateCollectionType ~= nil then
      if self.m_itemStateCollectionMap[item.StateCollectionType] == nil then
        self.m_itemStateCollectionMap[item.StateCollectionType] = {}
      end
      self.m_itemStateCollectionMap[item.StateCollectionType][item.StateCollectionIndex] = type
    else
      local chainId = self:GetChainId(item.Type)
      local level = self:GetChainLevel(item.Type)
      local maxLevel = self.m_chainIdMaxLevelMap[chainId]
      if maxLevel == nil or level > maxLevel then
        self.m_chainIdMaxLevelMap[chainId] = level
        self.m_chainIdMaxLevelItemTypeMap[chainId] = item.Type
      end
      if level == 1 then
        self.m_chainIdProtectLevelMap[chainId] = item.ProtectLevel
      end
      if item.FirstLevelGeneratorChain ~= nil then
        chainIdFirstLevelGeneratorChainIdMap[chainId] = item.FirstLevelGeneratorChain
      end
      if item.SecondLevelGeneratorChain ~= nil then
        chainIdSecondLevelGeneratorChainIdMap[chainId] = item.SecondLevelGeneratorChain
      end
    end
    if item.IsTemplate == 1 then
      table.insert(self.m_itemTemplates, type)
    end
    if item.Spread_Weight ~= nil then
      item.Spread_Weight = ItemModelFactory.GetCodeAndWeightPairs(item.Spread_Weight)
      item.Spread_Weight_Str = ItemUtility.CodeWeightPairsToString(item.Spread_Weight)
      if item.Spread_ItemRecoveryDuration ~= nil or item.StateCollectionType ~= nil then
        for _, pair in ipairs(item.Spread_Weight) do
          if ItemModelFactory.GetCodePrefixTargetType(pair.Code) == nil then
            local generatedChainId = self:GetChainId(pair.Code)
            if generatedChainId ~= nil then
              if self.m_chainIdFirstLevelGeneratorMap[generatedChainId] == nil then
                self.m_chainIdFirstLevelGeneratorMap[generatedChainId] = {}
              end
              local generatorType = item.StateCollectionType or item.Type
              if not Table.ListContain(self.m_chainIdFirstLevelGeneratorMap[generatedChainId], generatorType) then
                table.insert(self.m_chainIdFirstLevelGeneratorMap[generatedChainId], generatorType)
              end
            end
          end
        end
      end
    end
    if item.Swallow_Weight1 ~= nil then
      item.Swallow_Weight1 = ItemModelFactory.GetCodeAndWeightPairs(item.Swallow_Weight1)
    end
    if item.Swallow_Weight2 ~= nil then
      item.Swallow_Weight2 = ItemModelFactory.GetCodeAndWeightPairs(item.Swallow_Weight2)
    end
    if item.Transform_Weight ~= nil then
      item.Transform_Weight = ItemModelFactory.GetCodeAndWeightPairs(item.Transform_Weight)
    end
  end
  for _, itemType in pairs(self.m_chainIdMaxLevelItemTypeMap) do
    self.m_mapMaxLevelItemTypes[itemType] = true
  end
  local customFirstLevelGeneratorMap = self:_CalculateChainIdGeneratorMap(chainIdFirstLevelGeneratorChainIdMap)
  for chainId, generators in pairs(customFirstLevelGeneratorMap) do
    self.m_chainIdFirstLevelGeneratorMap[chainId] = generators
  end
  self.m_chainIdSecondLevelGeneratorMap = self:_CalculateChainIdGeneratorMap(chainIdSecondLevelGeneratorChainIdMap)
end

function ItemDataModel:_CalculateChainIdGeneratorMap(chainIdGeneratorChainIdMap)
  local chainIdGeneratorMap = {}
  for chainId, generatorChainId in pairs(chainIdGeneratorChainIdMap) do
    chainIdGeneratorMap[chainId] = {}
    local generatorChain = self:GetChain(generatorChainId)
    for _, generatorType in ipairs(generatorChain) do
      local config = self:GetModelConfig(generatorType)
      if config.Spread_WeightType ~= nil then
        table.insert(chainIdGeneratorMap[chainId], generatorType)
      end
    end
  end
  return chainIdGeneratorMap
end

function ItemDataModel:_InitUnlockData()
  self.m_unlockDB = GM.DBTableManager:GetTable(EDBTableConfigs.ItemUnlockStr)
  local oldUnlockDB = GM.DBTableManager:GetTable(EDBTableConfigs.ItemUnlock)
  local curData = self.m_unlockDB:GetReadOnlyValues()
  local oldData = oldUnlockDB:GetReadOnlyValues()
  if next(curData) == nil and next(oldData) ~= nil then
    self:_UpdateUnlockInfo()
    local arrPrimaryValues = {}
    for type, _ in pairs(oldData) do
      self:SetUnlocked(tostring(type))
      arrPrimaryValues[#arrPrimaryValues + 1] = type
    end
    oldUnlockDB:BatchRemove(arrPrimaryValues)
  end
  self:_UpdateUnlockInfo()
end

function ItemDataModel:_UpdateUnlockInfo()
  local cachedData = self.m_unlockDB:GetReadOnlyValues()
  self.m_itemUnlockMap = {}
  for type, _ in pairs(cachedData) do
    self.m_itemUnlockMap[type] = true
  end
end

function ItemDataModel:GetModelConfig(type, canBeNil)
  local config = self.m_mapModelConfigs[type]
  if config == nil then
    config = self:CreateConfigByTemplate(type)
  end
  if not canBeNil then
    Log.Assert(config ~= nil, "No item model config for type:" .. tostring(type))
  end
  return config
end

function ItemDataModel:CreateConfigByTemplate(type)
  local config
  for _, templateType in ipairs(self.m_itemTemplates) do
    if StringUtil.EndWith(type, templateType) then
      config = Table.ShallowCopy(self.m_mapModelConfigs[templateType])
      config.Type = type
      config.ChainId, config.ChainLevel = self:_ParseChainIdAndLevel(type)
      self.m_chainIdMaxLevelMap[config.ChainId] = 1
      self.m_mapModelConfigs[type] = config
      if self.m_mapItemChainLevelTypeMap[config.ChainId] == nil then
        self.m_mapItemChainLevelTypeMap[config.ChainId] = {}
      end
      self.m_mapItemChainLevelTypeMap[config.ChainId][1] = type
      break
    end
  end
  return config
end

function ItemDataModel:GetViewConfig(type)
  return self.m_mapViewConigs[type]
end

function ItemDataModel:GetSpriteName(type)
  type = self:GetStateCollectionStateType(type, 1) or type
  local viewConfig = self.m_mapViewConigs[type]
  if viewConfig ~= nil and viewConfig.Image ~= nil then
    return Table.ListRandomSelectOne(viewConfig.Image)
  end
  return type
end

function ItemDataModel:GetStateCollectionStateType(type, index)
  if self.m_itemStateCollectionMap[type] == nil then
    return nil
  end
  return self.m_itemStateCollectionMap[type][index]
end

function ItemDataModel:GetChainLevel(type)
  local modelConfig = self:GetModelConfig(type, true)
  if modelConfig == nil then
    if tonumber(type) ~= nil and tonumber(type) > ItemCodeOffset.PaperBox then
      return tonumber(type) % 100
    elseif tonumber(type) ~= nil then
      Log.Error("modelConfig is Nil" .. type)
      return tonumber(type) % 100
    else
      return 0
    end
  end
  return modelConfig.ChainLevel
end

function ItemDataModel:GetChainId(type)
  local modelConfig = self:GetModelConfig(type, true)
  if modelConfig == nil then
    if tonumber(type) ~= nil and tonumber(type) > ItemCodeOffset.PaperBox then
      return tostring(tonumber(type) // 100)
    else
      Log.Error("modelConfig is Nil" .. type)
      return nil
    end
  end
  return modelConfig.ChainId
end

function ItemDataModel:GetTypeByChainAndLevel(chainId, nLevel)
  if self.m_mapItemChainLevelTypeMap[chainId] ~= nil and self.m_mapItemChainLevelTypeMap[chainId][nLevel] == -1 then
    Log.Error("\230\163\139\229\173\144\228\191\161\230\129\175\228\184\141\229\173\152\229\156\168" .. tostring(chainId) .. " " .. tostring(nLevel))
    return nil
  end
  if self.m_mapItemChainLevelTypeMap[chainId] == nil or self.m_mapItemChainLevelTypeMap[chainId][nLevel] == nil then
    local chainIdNum = tonumber(chainId)
    local itemType
    if chainIdNum ~= nil then
      itemType = tostring(chainIdNum * 100 + nLevel)
    else
      itemType = chainId .. "_" .. nLevel
    end
    if self.m_mapItemChainLevelTypeMap[chainId] == nil then
      self.m_mapItemChainLevelTypeMap[chainId] = {}
    end
    local modelConfig = self:GetModelConfig(itemType)
    if self.m_mapItemChainLevelTypeMap[chainId][nLevel] == nil then
      self.m_mapItemChainLevelTypeMap[chainId][nLevel] = -1
      Log.Error("\230\163\139\229\173\144\228\191\161\230\129\175\228\184\141\229\173\152\229\156\168" .. tostring(chainId) .. " " .. tostring(nLevel))
      return nil
    end
  end
  return self.m_mapItemChainLevelTypeMap[chainId][nLevel]
end

function ItemDataModel:GetEquivalentLevelOneItemCount(type)
  local level = self:GetChainLevel(type)
  return MathUtil.IntPow(2, level - 1)
end

function ItemDataModel:GetChainMaxLevel(chainId)
  return self.m_chainIdMaxLevelMap[chainId]
end

function ItemDataModel:GetChainMaxLevelItemType(chainId)
  return self.m_chainIdMaxLevelItemTypeMap[chainId]
end

function ItemDataModel:IsMaxLevelItemType(type)
  return self.m_mapMaxLevelItemTypes[type]
end

function ItemDataModel:GetChainProtectLevel(chainId)
  return self.m_chainIdProtectLevelMap[chainId]
end

function ItemDataModel:GetChainGenerators(chainId, level)
  if level == 1 then
    return self.m_chainIdFirstLevelGeneratorMap[chainId]
  elseif level == 2 then
    return self.m_chainIdSecondLevelGeneratorMap[chainId]
  else
    return self.m_chainIdSecondLevelGeneratorMap[chainId] or self.m_chainIdFirstLevelGeneratorMap[chainId]
  end
end

function ItemDataModel:CheckGeneratorUnlockedByItemType(itemType)
  local chainId = self:GetChainId(itemType)
  return self:CheckGeneratorUnlockedByChainId(chainId)
end

function ItemDataModel:CheckGeneratorUnlockedByChainId(chainId)
  if not chainId then
    Log.Error(chainId .. "ItemDataModel:CheckGeneratorUnlockedByChainId chainId is nil")
    return false
  end
  if self.m_chainGeneratorUnlockMap == nil then
    self.m_chainGeneratorUnlockMap = {}
  end
  if self.m_chainGeneratorUnlockMap[chainId] then
    return true
  end
  local generaters = self:GetChainGenerators(chainId)
  if Table.IsEmpty(generaters) then
    Log.Error(chainId .. " has not generator")
    return false
  end
  for _, generator in ipairs(generaters) do
    if self:IsUnlocked(generator) then
      self.m_chainGeneratorUnlockMap[chainId] = true
      return true
    end
  end
  return false
end

function ItemDataModel:GetChain(chainId)
  return self.m_mapItemChainLevelTypeMap[chainId] or {}
end

function ItemDataModel:IsUnlocked(type)
  return self.m_itemUnlockMap[type]
end

function ItemDataModel:SetUnlocked(type)
  if self.m_itemUnlockMap[type] then
    return
  end
  EventDispatcher.DispatchEvent(EEventType.ItemUnlocked, {type = type})
  self.m_unlockDB:Set(type, "state", 1)
  self.m_itemUnlockMap[type] = true
end

function ItemDataModel:GetData()
  return self.m_unlockDB
end

function ItemDataModel:FromSyncData(dataArr)
  self.m_unlockDB:FromArr(dataArr)
  self:_UpdateUnlockInfo()
end

function ItemDataModel:_ParseChainIdAndLevel(type)
  local chainId, chainLevel
  if tonumber(type) ~= nil then
    chainId = tostring(tonumber(type) // 100)
    chainLevel = tonumber(type) % 100
  else
    local index = StringUtil.rFindChar(type, "_")
    Log.Assert(index ~= nil, "item config error (\232\167\163\230\158\144index\228\184\186\231\169\186): " .. type)
    chainId = string.sub(type, 1, index - 1)
    chainLevel = tonumber(string.sub(type, index + 1))
    Log.Assert(chainLevel ~= nil, "item config error (ChainLevel\228\184\186\231\169\186): " .. type)
  end
  return chainId, chainLevel
end

function ItemDataModel:CanShowCollectTip(type)
  if not self.m_itemCollectTipMap then
    self.m_itemCollectTipMap = {}
    local collectTipStr = GM.MiscModel:GetMaxResourceCollectHint() or ""
    local collectArr = StringUtil.Split(collectTipStr, "-")
    for _, itemType in pairs(collectArr) do
      if not StringUtil.IsNilOrEmpty(itemType) then
        self.m_itemCollectTipMap[itemType] = true
      end
    end
  end
  if type == ItemType.Coin05 or type == ItemType.Gem04 or type == ItemType.Energy05 then
    return true, self.m_itemCollectTipMap[type]
  end
  return false
end

function ItemDataModel:OnTapCollectable(type)
  local chainId = self:GetChainId(type)
  local maxLevel = self:GetChainMaxLevel(chainId)
  local maxType = self:GetTypeByChainAndLevel(chainId, maxLevel)
  local canTypeShow, hasShowedTip = self:CanShowCollectTip(maxType)
  if canTypeShow and not hasShowedTip then
    self.m_itemCollectTipMap[maxType] = true
    local collectTipStr = GM.MiscModel:GetMaxResourceCollectHint() or ""
    GM.MiscModel:SetMaxResourceCollectHint(collectTipStr .. maxType .. "-")
  end
end

function ItemDataModel:ReloadFileConfig(generatorBoostConfig)
  local function reloadFun(config)
    if config.ChainId == nil then
      config.ChainId, config.ChainLevel = self:_ParseChainIdAndLevel(config.Type)
      
      if config.Spread_Weight ~= nil then
        config.Spread_Weight = ItemModelFactory.GetCodeAndWeightPairs(config.Spread_Weight)
        config.Spread_Weight_Str = ItemUtility.CodeWeightPairsToString(config.Spread_Weight)
      end
    end
    self.m_mapModelConfigs[config.Type] = config
  end
  
  local generatorBoost = GM.ActivityManager:GetModel(ActivityType.GeneratorBoost)
  if generatorBoost ~= nil then
    local changedItemTypes = generatorBoost:GetConfigChangedItemType()
    if generatorBoostConfig == nil then
      local modelConfigs = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemModel)
      for _, config in ipairs(modelConfigs) do
        if changedItemTypes == nil or changedItemTypes[config.Type] then
          reloadFun(config)
        end
      end
    else
      for _, config in ipairs(generatorBoostConfig) do
        reloadFun(config)
      end
    end
  end
end

function ItemDataModel:IsGeneratorItem(type)
  local config = self:GetModelConfig(type, true)
  if config == nil then
    return false
  end
  if type == ItemType.RawFish05 then
    return true
  end
  if type == ItemType.sp4_2_4 then
    return true
  end
  if config.Spread_ItemRecoveryDuration ~= nil and config.Spread_StorageRecoveryDuration ~= nil then
    return true
  end
  return false
end

function ItemDataModel:GetItemDescTextKey(itemType)
  local gameTextModel = GM.GameTextModel
  local specialKey = "item_" .. itemType .. "_desc"
  local cardModel = GM.ActivityManager:GetModel(ActivityType.CardItem)
  if gameTextModel:HasText(specialKey) then
    if cardModel:IsCardItemAndMaxLevel(itemType) then
      local cardItemConfig = GM.ItemDataModel:GetModelConfig(itemType)
      local reward = ConfigUtil.GetCurrencyFromArrStr(cardItemConfig.CollectRewards)
      local rewardType = reward[1][PROPERTY_TYPE]
      local cardGenerateName = ""
      if RewardApi.GetRewardCategoryType(rewardType) == ERewardCategoryType.Item then
        cardGenerateName = GM.GameTextModel:GetText(ItemNameDefinition.GetName(rewardType))
        return specialKey, {cardGenerateName}
      elseif RewardApi.GetRewardCategoryType(rewardType) == ERewardCategoryType.Property then
        return specialKey, {
          tostring(reward[1][PROPERTY_COUNT])
        }
      else
        return specialKey, {}
      end
    else
      return specialKey, {}
    end
  end
end
