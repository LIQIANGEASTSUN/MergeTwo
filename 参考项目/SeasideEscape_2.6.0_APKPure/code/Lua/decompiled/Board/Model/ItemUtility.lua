ItemUtility = {}

function ItemUtility.GetItemCode(chain, level)
  return chain .. "_" .. level
end

function ItemUtility.GetItemTypeByCode(code)
  if not code or StringUtil.IsNilOrEmpty(code) then
    return nil
  end
  if StringUtil.StartWith(code, ItemCodePrefix.PaperBox) then
    return ItemType.PaperBox
  elseif StringUtil.StartWith(code, ItemCodePrefix.Cobweb) then
    return ItemType.Cobweb
  elseif StringUtil.StartWith(code, ItemCodePrefix.Bubble) then
    return ItemType.Bubble
  elseif StringUtil.StartWith(code, ItemCodePrefix.Ice) or StringUtil.StartWith(code, ItemCodePrefix.Temp) then
    return ItemType.Ice
  elseif StringUtil.StartWith(code, ItemCodePrefix.Portal) then
    return ItemType.Portal
  elseif StringUtil.StartWith(code, ItemCodePrefix.ScissorsSp) then
    return ItemType.ScissorsSp
  elseif StringUtil.StartWith(code, ItemCodePrefix.Gray) then
    return ItemType.Gray
  else
    local mbCode = string.match(code, ItemCodePrefix.MapBlocker)
    if mbCode and StringUtil.StartWith(code, mbCode) then
      return ItemType.MapBlocker, mbCode
    end
    local sandCode = string.match(code, ItemCodePrefix.Sand)
    if sandCode and StringUtil.StartWith(code, sandCode) then
      return ItemType.Sand, sandCode
    end
    local runeCode = string.match(code, ItemCodePrefix.Rune)
    if runeCode and StringUtil.StartWith(code, runeCode) then
      return ItemType.Rune, runeCode
    end
  end
  return code
end

function ItemUtility.GetModeByCode(code, forcedGameMode)
  local itemType = ItemUtility.GetItemTypeByCode(code, false)
  local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
  local modeConfig = itemConfig.Mode
  if modeConfig == EItemMode.Current then
    modeConfig = forcedGameMode and forcedGameMode or GM.SceneManager:GetGameMode()
  else
    if HuntMapActivityModel.IsActivityItem(code) then
      return EGameMode.HuntMap
    end
    if HuntActivityModel.GetActivityTypeByItemType(itemType) ~= nil then
      return EGameMode.Hunt
    end
    for type, _ in pairs(HuntActivityDefinition) do
      local model = GM.ActivityManager:GetModel(type)
      if model and (model:IsHuntActivityItem(itemType) or StringUtil.StartWith(code, type .. "_") or StringUtil.StartWith(code, ItemCodePrefix.Portal)) then
        return EGameMode.Hunt
      end
    end
    if StringUtil.StartWith(code, ItemCodePrefix.CloudsDash) then
      return EGameMode.CloudsDash
    end
  end
  if modeConfig and modeConfig ~= EGameMode.Loading then
    return modeConfig
  else
    return EGameMode.Main
  end
end

function ItemUtility.CodeWeightPairsToString(codeWeightPairs)
  local data = ""
  for index, item in ipairs(codeWeightPairs) do
    data = data .. item.Code .. "-" .. item.Weight
    if index ~= #codeWeightPairs then
      data = data .. ";"
    end
  end
  return data
end

function ItemUtility.StringToCodeWeightPairs(data)
  local array = StringUtil.Split(data, ";")
  return ItemModelFactory.GetCodeAndWeightPairs(array)
end

function ItemUtility.GetSpeedUpCost(start, duration)
  local leftTime = GM.GameModel:GetServerTime() - start
  leftTime = duration - leftTime
  leftTime = math.max(leftTime, 1)
  if leftTime <= 720 then
    return math.ceil(leftTime / 240)
  elseif leftTime <= 3600 then
    return math.ceil(leftTime / 360) + 1
  elseif leftTime <= 7200 then
    return math.ceil((leftTime - 3600) * 7 / 3600) + 11
  elseif leftTime <= 14400 then
    return math.ceil((leftTime - 7200) / 600) + 18
  else
    return math.ceil((leftTime - 14400) / 720) + 30
  end
end

function ItemUtility.GetChainIdByCode(code)
  return string.sub(code, 1, (StringUtil.rFindChar(code, "_") or 0) - 1)
end

function ItemUtility.GetChainLevelByCode(code)
  return string.sub(code, (StringUtil.rFindChar(code, "_") or 0) + 1, #code)
end

function ItemUtility.CheckData(code, state)
  local changedCode = ItemChangeHelper.ChangeItemCode(code)
  if changedCode ~= nil then
    local innerCode, _ = ItemUtility.GetInnerCodeAndPrefixByCode(changedCode)
    if state == EItemUnlockState.Locked then
      GM.ItemDataModel:SetLocked(innerCode)
    elseif state == EItemUnlockState.Unlocked then
      GM.ItemDataModel:SetUnlocked(innerCode)
    end
    GM.BIManager:LogTransform(code, changedCode, 1, 1, nil, "auto:1")
    return changedCode
  end
  if GM.ItemDataModel:IsItemExist(code) then
    return nil
  end
  local innerCode, prefix = ItemUtility.GetInnerCodeAndPrefixByCode(code)
  if GM.ItemDataModel:IsItemExist(innerCode) then
    return nil
  else
    local chainId = ItemUtility.GetChainIdByCode(innerCode)
    if not GM.ItemDataModel:IsChainExist(innerCode) then
      GM.BIManager:LogErrorInfo(EBIProjectType.RemoveErrorItem, code)
      return ItemType.Coin01
    elseif prefix then
      return prefix .. ItemUtility.GetMaxLevelCodeByItemCode(innerCode)
    else
      return ItemUtility.GetMaxLevelCodeByItemCode(innerCode)
    end
  end
end

function ItemUtility.GetInnerCodeAndPrefixByCode(code)
  local index = StringUtil.rFindChar(code, "#")
  if index then
    return string.sub(code, index + 1), string.sub(code, 1, index)
  else
    return code
  end
end

function ItemUtility.GetMaxLevelCodeByItemCode(code)
  local chain = ItemUtility.GetChainIdByCode(code)
  local level = GM.ItemDataModel:GetChainMaxLevel(chain)
  return ItemUtility.GetItemCode(chain, level)
end

function ItemUtility.GetChainNumber(code)
  local char1 = code:byte(1)
  local char2 = code:byte(2)
  if char1 == 112 and char2 == 100 then
    local number = code:sub(4)
    local endIndex = number:find("_")
    if endIndex == nil then
      return number
    end
    number = number:sub(1, endIndex - 1)
    return number
  elseif char1 == 105 and char2 == 116 then
    local number = code:sub(3, code:find("_") - 1)
    return number
  end
  return 0
end

local MergeLineNumber = {
  gem = 1,
  gold = 2,
  energy = 3,
  pbox = 4,
  tl1 = 5,
  tl2 = 6,
  tl3 = 7,
  tl4 = 8
}

function ItemUtility.GetMergeLineNumber(chainId)
  if MergeLineNumber[chainId] then
    return MergeLineNumber[chainId]
  end
  if chainId:find(ItemCodePrefix.MainGenerator) then
    return 0
  end
  local index = chainId:find("_")
  if index == nil then
    Log.Error("\233\162\132\230\156\159\229\164\150\231\154\132\229\155\190\233\137\180\233\133\141\231\189\174\239\188\140\229\144\136\230\136\144\231\186\191\239\188\154" .. chainId)
    return -1
  end
  local number = tonumber(chainId:sub(index + 1))
  if number == nil then
    Log.Error("\233\162\132\230\156\159\229\164\150\231\154\132\229\155\190\233\137\180\233\133\141\231\189\174\239\188\140\229\144\136\230\136\144\231\186\191\239\188\154" .. chainId)
    return -1
  end
  return number
end

function ItemUtility.GetBoardToolNumMap()
  local boardModel = GM.MainBoardModel
  local items = boardModel:GetItemsCount(ItemSpread.ToolItemFilter)
  local chains = {
    tl1 = 0,
    tl2 = 0,
    tl3 = 0,
    tl4 = 0
  }
  for code, num in pairs(items) do
    ItemUtility.UpdateToolNumMap(code, num, chains)
  end
  return chains
end

function ItemUtility.UpdateToolNumMap(code, num, chains)
  local chainId = GM.ItemDataModel:GetChainId(code)
  local level = GM.ItemDataModel:GetChainLevel(code)
  chains[chainId] = chains[chainId] + 2 ^ (level - 1) * num
  chains[chainId] = chains[chainId] % 16
end

function ItemUtility.GetAdaptiveToolType(toolLevel, chains)
  chains = chains or ItemUtility.GetBoardToolNumMap()
  local randomList = {}
  local count = 0
  local chain
  for id, num in pairs(chains) do
    if 0 < num then
      count = count + 1
      randomList[count] = ItemUtility.GetItemCode(id, toolLevel)
      chain = id
    end
  end
  if 1 <= count then
    return Table.ListRandomSelectOne(randomList)
  end
  local insufficientNeeds = GM.MapDataModel:GetInsufficientNeedTools()
  local candidateChains = {}
  if 0 < #insufficientNeeds and (count == 0 or count == 1 and not Table.ListContain(insufficientNeeds, chain)) then
    count = 0
    randomList = {}
    candidateChains = insufficientNeeds
  else
    for chainId, num in pairs(chains) do
      if num == 0 then
        candidateChains[#candidateChains + 1] = chainId
      end
    end
  end
  for _, chainId in ipairs(candidateChains) do
    count = count + 1
    randomList[count] = ItemUtility.GetItemCode(chainId, toolLevel)
  end
  if 0 < #randomList then
    return Table.ListRandomSelectOne(randomList)
  end
  Log.Error("ItemUtility GetAdaptive Type failed")
  return ItemUtility.GetItemCode("tl1", toolLevel)
end

function ItemUtility.IsItemRewardBoxType(itemType)
  if Table.ListContain(ItemRewardBoxType, itemType) then
    return true
  end
  if ItemBoxSimilarUtility.IsBoxSimilarItem(itemType) then
    return true
  end
  if StringUtil.StartWith(itemType, ItemCodePrefix.Blind) then
    return true
  end
  if StringUtil.StartWith(itemType, ItemCodePrefix.Turnbox) then
    return true
  end
  return false
end

function ItemUtility.IsStoreProducerTypeReward(itemType)
  if type(itemType) == "string" and StringUtil.StartWith(itemType, "customInventory") then
    return true
  end
  return false
end

ToolCodeToLevel = {
  tl1_1 = 1,
  tl1_2 = 2,
  tl1_3 = 3,
  tl1_4 = 4,
  tl1_5 = 5,
  tl2_1 = 1,
  tl2_2 = 2,
  tl2_3 = 3,
  tl2_4 = 4,
  tl2_5 = 5,
  tl3_1 = 1,
  tl3_2 = 2,
  tl3_3 = 3,
  tl3_4 = 4,
  tl3_5 = 5,
  tl4_1 = 1,
  tl4_2 = 2,
  tl4_3 = 3,
  tl4_4 = 4,
  tl4_5 = 5
}

function ItemUtility.IsToolItem(code)
  return ToolCodeToLevel[code] ~= nil
end

function ItemUtility.IsItemMatch(itemModel, itemType, pickedCode)
  local itemModelType = itemModel:GetType()
  if itemModelType == itemType then
    if (itemType == ItemType.ItemPickBox1 or itemType == ItemType.ItemPickBox2) and itemModel:GetComponent(ItemPick):GetChoosedCode() ~= pickedCode then
      return false
    end
    return true
  elseif (itemType == ItemType.ItemBoxSunshine or itemType == ItemType.SunshineBoost) and (itemModelType == ItemType.ItemBoxSunshine or itemModelType == ItemType.SunshineBoost) then
    return true
  elseif (itemType == ItemType.ItemBoxSunshinePro or itemType == ItemType.SunshineBoostPro) and (itemModelType == ItemType.ItemBoxSunshinePro or itemModelType == ItemType.SunshineBoostPro) then
    return true
  end
  return false
end
