local SwallowPairs = {
  it37_2_6 = "it37_4_4",
  it41_2_5 = "it41_1_9",
  it50_2_7 = "it50_3_4",
  it79_1_9 = "it79_2_6",
  it88_1_9 = "it88_2_6",
  it105_1_9 = "it105_2_6",
  it113_2_6 = "it113_1_8",
  it128_1_8 = "it128_2_5",
  it135_2_6 = "it135_1_8",
  it144_1_8 = "it144_2_5",
  it158_2_6 = "it158_1_8"
}
EOrderItemWeightValue = {
  OverlapNormal = 5,
  OverlapHigh = 4,
  BalanceBrother = 3,
  ReduceStock = 2,
  Normal = 1,
  Backup = 0,
  BreakCDDelta = 10
}
MainOrderCreator = {}

function MainOrderCreator.Generate(orderModel, laneConfig, producerMargin)
  local minScore, maxScore = LaneOrderCreator.GetScoreRange(orderModel, laneConfig)
  local config = orderModel:GetOrderItemConfig(laneConfig.car)
  local requirements, totalScore, weightList = MainOrderCreator.GetRandomRequirements(orderModel, producerMargin, minScore, maxScore, config)
  if not requirements then
    return
  end
  LaneOrderCreator.UpdatePolarity(orderModel, totalScore, laneConfig)
  local reward = LaneOrderCreator.CalcReward(orderModel, laneConfig, totalScore)
  return requirements, {reward}, totalScore, weightList
end

function MainOrderCreator.GetRandomRequirements(orderModel, producerMargin, minScore, maxScore, config)
  local usingItemMap, usingChainMap = MainOrderCreator.GetCurOrderUsingItemAndChain(orderModel)
  local producerList = GM.ItemDataModel:GetUnlockedMainGenerator(producerMargin)
  local itemStateMap, backups = MainOrderCreator.GetItemStateMap(orderModel, maxScore, producerList, usingItemMap, usingChainMap)
  local arrCandidates = {}
  local item2WeightMap = {}
  local canBalanceBrother = config.brotherWeight ~= nil and config.brotherWeight > 0 and math.random(config.defaultWeight + config.brotherWeight) <= config.brotherWeight
  local balanceBrotherCandidates = {}
  if canBalanceBrother then
    local candidatesArray = MainOrderCreator.GetBalanceBrotherCandidatesArray(usingItemMap, config, producerList, orderModel, maxScore)
    for _, candidates in ipairs(candidatesArray) do
      table.insert(arrCandidates, candidates)
      Table.ListAppend(balanceBrotherCandidates, candidates)
    end
    MainOrderCreator.CandidateItem2Weight(item2WeightMap, balanceBrotherCandidates, EOrderItemWeightValue.BalanceBrother)
  else
    Log.Info("\232\174\162\229\141\149\230\163\139\229\173\144\230\177\160\228\188\152\229\133\136\231\186\167\239\188\154\228\184\141\229\157\135\232\161\161\229\133\132\229\188\159")
  end
  local canReduceStock = config.hardItemWeight ~= nil and 0 < config.hardItemWeight and math.random(config.defaultWeight + config.hardItemWeight) <= config.hardItemWeight
  local reduceStockCandidates = {}
  if canReduceStock then
    reduceStockCandidates = MainOrderCreator.GetReduceStockCandidates(itemStateMap, producerList, config, usingChainMap, orderModel, maxScore)
    local brotherWeight = config.brotherWeight or 0
    if brotherWeight < config.hardItemWeight then
      table.insert(arrCandidates, 1, reduceStockCandidates)
      Log.Info("\232\174\162\229\141\149\230\163\139\229\173\144\230\177\160\228\188\152\229\133\136\231\186\167\239\188\154\229\142\187\229\186\147\229\173\152\228\188\152\229\133\136\231\186\167\233\171\152")
    elseif config.hardItemWeight == brotherWeight and 0 < #arrCandidates then
      Table.ListAppend(arrCandidates[#arrCandidates], reduceStockCandidates)
      Log.Info("\232\174\162\229\141\149\230\163\139\229\173\144\230\177\160\228\188\152\229\133\136\231\186\167\239\188\154\229\142\187\229\186\147\229\173\152\228\184\142\229\157\135\232\161\161\229\133\132\229\188\159\229\144\140\228\188\152\229\133\136\231\186\167")
    else
      table.insert(arrCandidates, reduceStockCandidates)
      Log.Info("\232\174\162\229\141\149\230\163\139\229\173\144\230\177\160\228\188\152\229\133\136\231\186\167\239\188\154\229\157\135\232\161\161\229\133\132\229\188\159\228\188\152\229\133\136\231\186\167\233\171\152\230\136\150\228\188\152\229\133\136\231\186\167\231\155\184\229\144\140\228\189\134\230\152\175\233\154\143\230\156\186\229\136\176\228\184\141\229\157\135\232\161\161\229\133\132\229\188\159")
    end
    MainOrderCreator.CandidateItem2Weight(item2WeightMap, reduceStockCandidates, EOrderItemWeightValue.ReduceStock, EOrderItemWeightValue.OverlapNormal)
  else
    Log.Info("\232\174\162\229\141\149\230\163\139\229\173\144\230\177\160\228\188\152\229\133\136\231\186\167\239\188\154\228\184\141\229\142\187\229\186\147\229\173\152")
  end
  if canBalanceBrother and canReduceStock then
    local overlapCandidates = MainOrderCreator.GetOverlapCandidates(balanceBrotherCandidates, reduceStockCandidates, orderModel)
    table.insert(arrCandidates, 1, overlapCandidates)
    MainOrderCreator.CandidateItem2Weight(item2WeightMap, overlapCandidates, EOrderItemWeightValue.OverlapHigh, EOrderItemWeightValue.OverlapHigh)
    Log.Info("\232\174\162\229\141\149\230\163\139\229\173\144\230\177\160\228\188\152\229\133\136\231\186\167\239\188\154\229\157\135\232\161\161\229\133\132\229\188\159\228\184\148\229\142\187\229\186\147\229\173\152\233\135\141\229\143\160\233\131\168\229\136\134\228\188\152\229\133\136\231\186\167\230\156\128\233\171\152")
  end
  local normalCandidates, backup = MainOrderCreator.GetNormalCandidatesAndBackup(itemStateMap, backups)
  table.insert(arrCandidates, normalCandidates)
  MainOrderCreator.CandidateItem2Weight(item2WeightMap, normalCandidates, EOrderItemWeightValue.Normal)
  local requirements, totalScore = MainOrderCreator.RandomRequirementsFromCandidates(arrCandidates, minScore, maxScore, backup)
  if totalScore == nil or requirements == nil or #requirements == 0 then
    return
  end
  local weightList = MainOrderCreator.GetOrderWeightList(requirements, item2WeightMap, orderModel)
  return requirements, totalScore, weightList
end

function MainOrderCreator.RandomRequirementsFromCandidates(arrCandidates, minScore, maxScore, backup)
  local count = #arrCandidates
  for i = count, 1, -1 do
    if #arrCandidates[i] == 0 then
      table.remove(arrCandidates, i)
    end
  end
  if #arrCandidates == 0 then
    return backup.codes, backup.score
  end
  local backupRequirements, backupTotalScore = backup.codes, backup.score
  local targetScore = (minScore + maxScore) / 2
  local firstCandidate, secondCandidate, requirements, totalScore
  for i = 1, #arrCandidates do
    firstCandidate = arrCandidates[i]
    for j = i, #arrCandidates do
      secondCandidate = arrCandidates[j]
      requirements, totalScore = RandomOrderHelper.RandomSelect(Table.ShallowCopy(firstCandidate), secondCandidate, minScore, maxScore, backup, #firstCandidate)
      if totalScore and minScore <= totalScore and maxScore >= totalScore then
        return requirements, totalScore
      end
      if totalScore and math.abs(targetScore - totalScore) < math.abs(targetScore - backupTotalScore) then
        backupRequirements = requirements
        backupTotalScore = totalScore
      end
    end
  end
  return backupRequirements, backupTotalScore
end

function MainOrderCreator.GetCurOrderUsingItemAndChain(orderModel)
  local itemDataModel = GM.ItemDataModel
  local usingItemMap = {}
  local usingChainMap = {}
  local useBugLogic = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OpenItemCD)
  local orderType
  for _, order in pairs(orderModel:GetOrders()) do
    orderType = order:GetType()
    for _, item in pairs(order:GetAllRequireItems()) do
      usingItemMap[item] = true
      if useBugLogic then
        usingChainMap[itemDataModel:GetChainId(item)] = orderType == OrderType.Lane
      elseif orderType == OrderType.Lane then
        usingChainMap[itemDataModel:GetChainId(item)] = true
      end
    end
  end
  local actModel = LimiteOrderActivityModel.GetActiveModel()
  if actModel and actModel:HasOngoingOrder() then
    for _, item in pairs(actModel:GetOngoingOrder():GetRequirements()) do
      usingItemMap[item] = true
      usingChainMap[itemDataModel:GetChainId(item)] = true
    end
  end
  return usingItemMap, usingChainMap
end

function MainOrderCreator.GetItemStateMap(orderModel, maxScore, producerList, usingItemMap, usingChainMap)
  local itemDataModel = GM.ItemDataModel
  local itemStateMap = {}
  local canGenerateFree = orderModel:CanGenerateFreeOrder()
  local backup = {
    {
      score = math.maxinteger
    },
    {
      score = math.maxinteger
    },
    {
      score = math.maxinteger
    }
  }
  local chainId, bFree, itemCd, freeItemCd, chainCanUse, freeChainCanUse
  for _, producer in pairs(producerList) do
    for item, score in pairs(orderModel:GetItemScoresByGenerator(producer)) do
      if not usingItemMap[item] and not RandomOrderHelper.ItemDisabledByDoubleEnergy(item) then
        chainId = itemDataModel:GetChainId(item)
        bFree = GM.ItemDataModel:IsFreeItem(item)
        itemCd = orderModel:GetItemCd(item)
        freeItemCd = orderModel:GetFreeItemCd(item)
        chainCanUse = orderModel:GetItemCd(chainId) == 0 and not usingChainMap[chainId]
        freeChainCanUse = orderModel:GetFreeItemCd(chainId) == 0 and not usingChainMap[chainId] and (not bFree or canGenerateFree)
        if maxScore >= score then
          itemStateMap[item] = {
            score = score,
            bFree = bFree,
            itemCd = itemCd,
            freeItemCd = freeItemCd,
            chainCanUse = chainCanUse,
            freeChainCanUse = freeChainCanUse,
            chainNotUsing = not usingChainMap[chainId]
          }
        elseif itemCd == 0 and freeItemCd == 0 then
          local isChainCd = not chainCanUse
          local isFreeChainCd = bFree and not freeChainCanUse
          local index = isFreeChainCd and 3 or isChainCd and 2 or 1
          if math.abs(score - maxScore) < math.abs(backup[index].score - maxScore) then
            backup[index].score = score
            backup[index].code = item
          end
        end
      end
    end
  end
  for i = 1, 3 do
    if backup[i].code == nil then
      backup[i] = nil
    end
  end
  return itemStateMap, backup
end

function MainOrderCreator.GetNormalCandidatesAndBackup(itemStateMap, backups)
  local backup = backups[1]
  local normalCandidates = MainOrderCreator.GetNormalCandidates(itemStateMap)
  if Table.IsEmpty(normalCandidates) and backup == nil then
    GM.BIManager:LogProject(EBIProjectType.LaneOrderRepeatLine)
    normalCandidates = MainOrderCreator.GetNormalCandidates(itemStateMap, true)
    backup = backups[2]
    if Table.IsEmpty(normalCandidates) and backup == nil then
      GM.BIManager:LogProject(EBIProjectType.LaneOrderFreeLine)
      normalCandidates = MainOrderCreator.GetNormalCandidates(itemStateMap, true, true)
      backup = backups[3]
    end
  end
  if backup == nil then
    backup = {
      codes = {},
      score = math.maxinteger
    }
  else
    backup.codes = {
      backup.code
    }
    backup.code = nil
  end
  return normalCandidates, backup
end

function MainOrderCreator.GetNormalCandidates(itemStateMap, ignoreChainCd, ignoreFreeChainCd)
  local candidates = {}
  for itemCode, info in pairs(itemStateMap) do
    if info.itemCd == 0 and info.freeItemCd == 0 and (ignoreChainCd or info.chainCanUse) and (ignoreFreeChainCd or info.freeChainCanUse) then
      candidates[#candidates + 1] = {
        code = itemCode,
        score = info.score
      }
    end
  end
  return candidates
end

function MainOrderCreator.CandidateItem2Weight(item2WeightMap, candidates, weight, overwriteValue)
  local itemCode
  for _, value in ipairs(candidates) do
    itemCode = value.code
    if item2WeightMap[itemCode] ~= nil and overwriteValue ~= nil then
      item2WeightMap[itemCode] = overwriteValue
    elseif item2WeightMap[itemCode] == nil then
      item2WeightMap[itemCode] = weight
    end
  end
end

function MainOrderCreator.GetOrderWeightList(requirements, item2WeightMap, orderModel)
  local usingItemMap, usingChainMap = MainOrderCreator.GetCurOrderUsingItemAndChain(orderModel)
  local weightList = {}
  for i, code in ipairs(requirements) do
    weightList[i] = item2WeightMap[code] or EOrderItemWeightValue.Backup
    weightList[i] = weightList[i] + MainOrderCreator.GetBreakCDDelta(code, orderModel, usingItemMap, usingChainMap)
  end
  return weightList
end

function MainOrderCreator.GetBreakCDDelta(itemCode, orderModel, usingItemMap, usingChainMap)
  if GM.ItemDataModel:IsFreeItem(itemCode) and not orderModel:CanGenerateFreeOrder() then
    return EOrderItemWeightValue.BreakCDDelta * 5
  end
  if usingItemMap[itemCode] == true then
    return EOrderItemWeightValue.BreakCDDelta * 4
  end
  if orderModel:GetItemCd(itemCode) > 0 or 0 < orderModel:GetFreeItemCd(itemCode) then
    return EOrderItemWeightValue.BreakCDDelta * 3
  end
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  if usingChainMap[chainId] == true then
    return EOrderItemWeightValue.BreakCDDelta * 2
  end
  if orderModel:GetItemCd(chainId) > 0 or 0 < orderModel:GetFreeItemCd(chainId) then
    return EOrderItemWeightValue.BreakCDDelta
  end
  return 0
end

function MainOrderCreator.GetReduceStockCandidates(itemStateMap, producerList, config, usingChainMap, orderModel, carMaxScore)
  local normalItems = MainOrderCreator.GetReduceStockNormalCandidates(itemStateMap, config, orderModel)
  local swallowItems = MainOrderCreator.GetReduceStockSwallowCandidates(producerList, config, usingChainMap, orderModel, carMaxScore)
  Table.ListAppend(normalItems, swallowItems)
  return normalItems
end

function MainOrderCreator.GetReduceStockNormalCandidates(itemStateMap, config, orderModel)
  local itemsCount = orderModel:GetBoardModel():GetItemsCount(function(itemModel)
    local swallow = itemModel:GetComponent(ItemSwallow)
    return not swallow or swallow:IsSwallowOver()
  end)
  local itemScoreMap = {}
  for itemCode, _ in pairs(itemsCount) do
    if itemStateMap[itemCode] and itemStateMap[itemCode].score >= config.hardScore then
      local chainId = GM.ItemDataModel:GetChainId(itemCode)
      itemScoreMap[chainId] = math.min(itemScoreMap[chainId] or math.maxinteger, itemStateMap[itemCode].score)
    end
  end
  local candidates = {}
  for itemCode, info in pairs(itemStateMap) do
    if info.chainNotUsing and MainOrderCreator.CanReduceStock(orderModel, itemCode, info, config, itemsCount, itemScoreMap) then
      candidates[#candidates + 1] = {
        code = itemCode,
        score = info.score
      }
    end
  end
  return candidates
end

function MainOrderCreator.CanReduceStock(orderModel, itemCode, info, config, itemsCount, itemScoreMap)
  if info.score >= config.hardScore and not info.bFree and info.score >= (itemScoreMap[GM.ItemDataModel:GetChainId(itemCode)] or math.maxinteger) then
    return info.itemCd <= config.hardItemCD
  end
  if MainOrderCreator.IsMultiLevelItem(itemCode) then
    local code, score = MainOrderCreator.GetItemMaxProducer(itemCode, orderModel)
    if 0 < score and info.score >= score * config.secPieceTimes and (itemsCount[code] or 0) >= config.secProducerNum then
      return info.itemCd <= config.hardItemCD
    end
  end
  return false
end

function MainOrderCreator.IsMultiLevelItem(code)
  local itemOrderType = GM.ItemDataModel:GetItemRewardIndex(code)
  return 200 < itemOrderType or itemOrderType < 100 and 74 < itemOrderType
end

function MainOrderCreator.GetItemMaxProducer(itemCode, orderModel)
  local generators = GM.ItemDataModel:GetItemGenerators(itemCode)
  local score = 0
  local code
  for _, v in pairs(generators) do
    local itemScore = orderModel:GetNotInOrderScore(v) or 0
    if score <= itemScore then
      code = v
      score = itemScore
    end
  end
  return code, score
end

function MainOrderCreator.GetReduceStockSwallowCandidates(producerList, config, usingChainMap, orderModel, carMaxScore)
  local itemsCount = GM.MainBoardModel:GetItemsCount(function(itemModel)
    local swallow = itemModel:GetComponent(ItemSwallow)
    return not swallow or not swallow:IsSwallowOver()
  end)
  local swallowCandidates = {}
  for code1, code2 in pairs(SwallowPairs) do
    local targetCode
    if (itemsCount[code1] or 0) - (itemsCount[code2] or 0) >= config.pairedItemsDiff then
      targetCode = code1
    elseif (itemsCount[code2] or 0) - (itemsCount[code1] or 0) >= config.pairedItemsDiff then
      targetCode = code2
    end
    if targetCode and not usingChainMap[GM.ItemDataModel:GetChainId(targetCode)] then
      local score, producer = orderModel:GetNotInOrderScore(targetCode)
      if score and carMaxScore >= score and Table.ListContain(producerList, producer) and orderModel:GetItemCd(targetCode) <= config.hardItemCD then
        swallowCandidates[#swallowCandidates + 1] = {code = targetCode, score = score}
      end
    end
  end
  return swallowCandidates
end

function MainOrderCreator.GetBalanceBrotherCandidatesArray(usingItemMap, config, producerList, orderModel, carMaxScore)
  local sunOrderItems = {}
  local normalOrderItems = {}
  local sunshineOrderBoostModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  local orderType, isSunOrder
  for _, order in pairs(orderModel:GetOrders()) do
    orderType = order:GetType()
    isSunOrder = sunshineOrderBoostModel:IsSunshineOrder(order:GetId())
    if orderType == OrderType.Lane or orderType == OrderType.Random then
      for _, item in pairs(order:GetAllRequireItems()) do
        if isSunOrder then
          sunOrderItems[item] = true
        else
          normalOrderItems[item] = true
        end
      end
    end
  end
  local results = {}
  local candidates = MainOrderCreator.GetBalanceBrotherCandidatesWithReferItems(sunOrderItems, usingItemMap, config, producerList, orderModel, carMaxScore)
  table.insert(results, candidates)
  candidates = MainOrderCreator.GetBalanceBrotherCandidatesWithReferItems(normalOrderItems, usingItemMap, config, producerList, orderModel, carMaxScore)
  table.insert(results, candidates)
  return results
end

function MainOrderCreator.GetBalanceBrotherCandidatesWithReferItems(referItems, usingItemMap, config, producerList, orderModel, carMaxScore)
  local candidates = {}
  local candidatesDedup = {}
  local hardScore = config.brotherHardScore or config.hardScore
  local score, scoreDelta, producer, itemsArray, removedChainArray, minScore, maxScore, addedItems, logInfo
  for itemCode, _ in pairs(referItems) do
    score, producer = orderModel:GetNotInOrderScore(itemCode)
    scoreDelta = MainOrderCreator.ScoreDeltaToMerge(itemCode, orderModel)
    if score and hardScore <= score and hardScore <= scoreDelta and Table.ListContain(producerList, producer) and ItemChainHelper.CanBalanceBrotherItem(itemCode) and not GM.ItemDataModel:IsFreeItem(itemCode) then
      itemsArray = ItemChainHelper.GetBrotherChainItems(itemCode, producer, orderModel)
      MainOrderCreator.RemoveEasyItems(itemsArray, config)
      removedChainArray = MainOrderCreator.RemoveInCDBrothers(itemsArray, orderModel, config, usingItemMap)
      if 0 < #itemsArray then
        minScore = (config.brotherScoreTimesMin or 0) * score
        maxScore = math.min(carMaxScore, (config.brotherScoreTimesMax or 0) * score)
        addedItems = {}
        for _, candidate in ipairs(itemsArray) do
          if minScore <= candidate.score and maxScore >= candidate.score and not candidatesDedup[candidate.code] then
            candidates[#candidates + 1] = candidate
            candidatesDedup[candidate.code] = true
            table.insert(addedItems, candidate.code)
          end
        end
        logInfo = "\229\157\135\232\161\161\229\133\132\229\188\159\239\188\154" .. itemCode .. " \231\154\132\229\133\132\229\188\159\231\186\191\231\154\132\231\173\155\233\128\137\229\136\134\232\140\131\229\155\180\228\184\186 " .. string.format("%.2f-%.2f", minScore, maxScore) .. "(\232\189\166\233\129\147\230\156\128\233\171\152\229\136\134" .. carMaxScore .. ")"
        if 0 < #removedChainArray then
          logInfo = logInfo .. "\239\188\140\231\167\187\233\153\164\229\141\160\231\148\168\230\136\150CD\229\133\132\229\188\159\231\186\191 " .. table.concat(removedChainArray, ",")
        end
        if 0 < #addedItems then
          Log.Info(logInfo .. "\239\188\140\229\128\153\233\128\137\230\163\139\229\173\144\230\177\160\229\138\160\229\133\165 " .. table.concat(addedItems, ","))
        else
          Log.Info(logInfo .. "\239\188\140\230\151\160\232\140\131\229\155\180\229\134\133\230\163\139\229\173\144\230\136\150\232\140\131\229\155\180\229\134\133\230\163\139\229\173\144\229\183\178\229\133\165\230\177\160")
        end
      else
        Log.Info("\229\157\135\232\161\161\229\133\132\229\188\159\239\188\154" .. itemCode .. " \231\154\132\229\133\132\229\188\159\231\186\191\231\154\132\233\171\152\229\136\134\230\163\139\229\173\144\229\189\147\229\137\141\232\174\162\229\141\149\229\141\160\231\148\168\230\136\150CD\228\184\173 " .. table.concat(removedChainArray, ","))
      end
    elseif GameConfig.IsTestMode() then
      logInfo = string.format("score %.2f, mergeScoreDelta %.2f, producer %s, canBalance %s, free %s", score or 0, scoreDelta, tostring(Table.ListContain(producerList, producer)), tostring(ItemChainHelper.CanBalanceBrotherItem(itemCode)), tostring(GM.ItemDataModel:IsFreeItem(itemCode)))
      Log.Info("\229\157\135\232\161\161\229\133\132\229\188\159\239\188\154" .. itemCode .. " \232\162\171\229\137\148\233\153\164 " .. logInfo)
    end
  end
  return candidates
end

function MainOrderCreator.RemoveEasyItems(itemsArray, config)
  local hardScore = config.brotherHardScore or config.hardScore
  for i = #itemsArray, 1, -1 do
    if hardScore > itemsArray[i].score or RandomOrderHelper.ItemDisabledByDoubleEnergy(itemsArray[i].code) then
      table.remove(itemsArray, i)
    end
  end
end

function MainOrderCreator.RemoveInCDBrothers(itemsArray, orderModel, config, usingItemMap)
  local itemDataModel = GM.ItemDataModel
  local shouldRemoveChain = {}
  local itemCode, chainId
  for i = #itemsArray, 1, -1 do
    itemCode = itemsArray[i].code
    chainId = itemDataModel:GetChainId(itemCode)
    if orderModel:GetItemCd(itemCode) > config.hardItemCD then
      shouldRemoveChain[chainId] = true
    elseif usingItemMap[itemCode] == true then
      shouldRemoveChain[chainId] = true
    end
  end
  for i = #itemsArray, 1, -1 do
    itemCode = itemsArray[i].code
    chainId = itemDataModel:GetChainId(itemCode)
    if shouldRemoveChain[chainId] then
      table.remove(itemsArray, i)
    end
  end
  local removedChainArray = {}
  for toRemoveChain, _ in pairs(shouldRemoveChain) do
    table.insert(removedChainArray, toRemoveChain)
  end
  return removedChainArray
end

function MainOrderCreator.ScoreDeltaToMerge(itemCode, orderModel)
  local itemDataModel = GM.ItemDataModel
  local chainId = itemDataModel:GetChainId(itemCode)
  local chainLevel = itemDataModel:GetChainLevel(itemCode)
  local targetScore = orderModel:GetItemScoreByUnlockGen(itemCode)
  if not targetScore then
    return 0
  end
  local items = orderModel:GetBoardModel():GetItemsCount(function(itemModel)
    local code = itemModel:GetType()
    return itemDataModel:GetChainId(code) == chainId and itemDataModel:GetChainLevel(code) <= chainLevel
  end)
  local sumScore = 0
  local score
  for item, num in pairs(items) do
    score = orderModel:GetItemScoreByUnlockGen(item)
    sumScore = sumScore + (score or 0) * num
  end
  return targetScore - sumScore
end

function MainOrderCreator.GetOverlapCandidates(balanceBrotherCandidates, reduceStockCandidates, orderModel)
  local balanceBrotherCodes = MainOrderCreator.CandidateItemArray2CodeScoreMap(balanceBrotherCandidates)
  local reduceStockCodes = MainOrderCreator.CandidateItemArray2CodeScoreMap(reduceStockCandidates)
  local balanceBrotherChains = MainOrderCreator.CodeScoreMap2ChainMap(balanceBrotherCodes)
  local reduceStockChains = MainOrderCreator.CodeScoreMap2ChainMap(reduceStockCodes)
  Log.Info("\229\157\135\232\161\161\229\133\132\229\188\159\228\184\148\229\142\187\229\186\147\229\173\152\239\188\154\229\133\132\229\188\159\231\186\191 " .. table.concat(Table.GetKeys(balanceBrotherChains), ",") .. ",\229\186\147\229\173\152\231\186\191 " .. table.concat(Table.GetKeys(reduceStockChains), ","))
  local itemsCount = orderModel:GetBoardModel():GetItemsCount(function(itemModel)
    local swallow = itemModel:GetComponent(ItemSwallow)
    return not swallow or swallow:IsSwallowOver()
  end)
  local chainMaxLevel = {}
  local chainId, chainLevel
  for itemCode, _ in pairs(itemsCount) do
    chainId = GM.ItemDataModel:GetChainId(itemCode)
    if reduceStockChains[chainId] and balanceBrotherChains[chainId] then
      chainLevel = GM.ItemDataModel:GetChainLevel(itemCode)
      chainMaxLevel[chainId] = math.max(chainLevel, chainMaxLevel[chainId] or 0)
    end
  end
  local result = {}
  local maxLevel, itemCode
  for chainId, level in pairs(chainMaxLevel) do
    maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
    local addItems = {}
    for i = level + 1, maxLevel do
      itemCode = ItemUtility.GetItemCode(chainId, i)
      if reduceStockCodes[itemCode] then
        result[#result + 1] = {
          code = itemCode,
          score = reduceStockCodes[itemCode]
        }
        table.insert(addItems, itemCode)
      end
    end
    Log.Info("\229\157\135\232\161\161\229\133\132\229\188\159\228\184\148\229\142\187\229\186\147\229\173\152\239\188\154" .. chainId .. " \229\186\147\229\173\152\230\156\128\233\171\152\231\173\137\231\186\167 " .. level .. ",\229\133\165\230\177\160\230\163\139\229\173\144 " .. table.concat(addItems, ","))
  end
  return result
end

function MainOrderCreator.CodeScoreMap2ChainMap(codeMap)
  local result = {}
  for code, _ in pairs(codeMap) do
    result[GM.ItemDataModel:GetChainId(code)] = true
  end
  return result
end

function MainOrderCreator.GetRequirementsWeightInControl(requirements, producerMargin)
  local weightList = {}
  local orderModel = GM.MainBoardModel:GetOrderModel()
  local usingItemMap, usingChainMap = MainOrderCreator.GetCurOrderUsingItemAndChain(orderModel)
  local balanceBrotherCandidates = MainOrderCreator.GetBalanceBrotherCandidatesInControl(usingItemMap, orderModel, producerMargin)
  local reduceStockCandidates = MainOrderCreator.GetReduceStockCandidatesInControl(usingItemMap, usingChainMap, orderModel, producerMargin)
  local overlapCandidates = MainOrderCreator.GetOverlapCandidates(balanceBrotherCandidates, reduceStockCandidates, orderModel)
  balanceBrotherCandidates = MainOrderCreator.CandidateItemArray2CodeScoreMap(balanceBrotherCandidates)
  reduceStockCandidates = MainOrderCreator.CandidateItemArray2CodeScoreMap(reduceStockCandidates)
  overlapCandidates = MainOrderCreator.CandidateItemArray2CodeScoreMap(overlapCandidates)
  for i, code in pairs(requirements) do
    if overlapCandidates[code] ~= nil then
      weightList[i] = EOrderItemWeightValue.OverlapHigh
    elseif balanceBrotherCandidates[code] ~= nil then
      weightList[i] = EOrderItemWeightValue.BalanceBrother
    elseif reduceStockCandidates[code] ~= nil then
      weightList[i] = EOrderItemWeightValue.ReduceStock
    else
      weightList[i] = EOrderItemWeightValue.Normal
    end
    weightList[i] = weightList[i] + MainOrderCreator.GetBreakCDDelta(code, orderModel, usingItemMap, usingChainMap)
  end
  return weightList
end

function MainOrderCreator.GetReduceStockCandidatesInControl(usingItemMap, usingChainMap, orderModel, producerMargin)
  local producerList = GM.ItemDataModel:GetUnlockedMainGenerator(producerMargin)
  local itemStateMap, backups = MainOrderCreator.GetItemStateMap(orderModel, math.maxinteger, producerList, usingItemMap, usingChainMap)
  local config = {
    hardScore = 1.03,
    hardItemCD = 4,
    secProducerNum = 3,
    secPieceTimes = 1.01,
    pairedItemsDiff = 3
  }
  local reduceStockCandidates = MainOrderCreator.GetReduceStockCandidates(itemStateMap, producerList, config, usingChainMap, orderModel, math.maxinteger)
  return reduceStockCandidates
end

function MainOrderCreator.GetBalanceBrotherCandidatesInControl(usingItemMap, orderModel, producerMargin)
  local producerList = GM.ItemDataModel:GetUnlockedMainGenerator(producerMargin)
  local carMaxScore = math.maxinteger
  local config = {
    hardScore = 1.03,
    hardItemCD = 4,
    brotherScoreTimesMin = 0.3,
    brotherScoreTimesMax = 2.3
  }
  local candidatesArray = MainOrderCreator.GetBalanceBrotherCandidatesArray(usingItemMap, config, producerList, orderModel, carMaxScore)
  local balanceBrotherCandidates = {}
  for _, candidates in ipairs(candidatesArray) do
    Table.ListAppend(balanceBrotherCandidates, candidates)
  end
  return balanceBrotherCandidates
end

function MainOrderCreator.CandidateItemArray2CodeScoreMap(candidates)
  local result = {}
  for _, item in ipairs(candidates) do
    result[item.code] = item.score
  end
  return result
end
