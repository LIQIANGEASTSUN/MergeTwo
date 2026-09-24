DailyOrderHelper = {}

function DailyOrderHelper.CalcReward(orderModel, config, score)
  local mostNeedGold, mostNeedTool = GM.MapDataModel:CalculateMostNeedType()
  return RandomOrderHelper.CalcReward(orderModel, config, score, mostNeedTool, mostNeedGold)
end

RandomOrderHelper = {}

function RandomOrderHelper.GetNextConfig(orderModel, preId)
  local orders = orderModel:GetOrders(OrderType.Random)
  local maxId = tonumber(preId) or 0
  for _, v in pairs(orders) do
    maxId = math.max(maxId, tonumber(v:GetId()))
  end
  return tostring(maxId + 1), orderModel:GetRandomOrderNeedScore(maxId + 1)
end

function RandomOrderHelper.NeedSpecialRewardRandomOrder(orderModel, config, eOrderType)
  local maxNum = config:GetMaxNum()
  if not maxNum then
    return false
  end
  local orders = orderModel:GetOrders(eOrderType)
  if #orders ~= maxNum - 1 then
    return false
  end
  local needToolBox = true
  local rewards
  for _, order in pairs(orders) do
    rewards = order:GetRewards()
    for _, reward in pairs(rewards) do
      if reward[PROPERTY_TYPE] == ItemType.ToolBox01 or reward[PROPERTY_TYPE] == ItemType.ToolBox02 or reward[PROPERTY_TYPE] == ItemType.HugeToolBox01 or reward[PROPERTY_TYPE] == ItemType.HugeToolBox02 then
        needToolBox = false
      end
    end
  end
  if GM.MapDataModel:IsAllSlotBuildFinished() then
    needToolBox = false
  end
  return needToolBox
end

function RandomOrderHelper.CalcReward(orderModel, config, score, needToolBox, needGold)
  if needToolBox and needGold then
    Log.Error("needToolBox \229\146\140 needGold \228\184\141\229\186\148\229\144\140\230\151\182\228\184\186 true")
  end
  if needGold then
    local rewardTb = {
      [PROPERTY_TYPE] = EPropertyType.Gold,
      [PROPERTY_COUNT] = RandomOrderHelper._CalcRewardCount(orderModel, config, score, EPropertyType.Gold)
    }
    return rewardTb
  end
  local reward
  if score > config.rewardRange1[1] and score <= config.rewardRange1[2] then
    reward = Table.ListWeightSelectOne(config.rewardWeight1)
    reward = reward[PROPERTY_TYPE]
  elseif score > config.rewardRange2[1] and score <= config.rewardRange2[2] then
    if needToolBox then
      reward = ItemType.ToolBox01
    else
      reward = Table.ListWeightSelectOne(GM.MapDataModel:IsAllSlotBuildFinished() and config.rewardWeight2MaxLevel or config.rewardWeight2)
      reward = reward[PROPERTY_TYPE]
    end
  elseif score > config.rewardRange3[1] and score <= config.rewardRange3[2] then
    if needToolBox then
      reward = ItemType.ToolBox02
    else
      reward = Table.ListWeightSelectOne(GM.MapDataModel:IsAllSlotBuildFinished() and config.rewardWeight3MaxLevel or config.rewardWeight3)
      reward = reward[PROPERTY_TYPE]
    end
  end
  local rewardTb = {
    [PROPERTY_TYPE] = reward,
    [PROPERTY_COUNT] = RandomOrderHelper._CalcRewardCount(orderModel, config, score, reward)
  }
  return rewardTb
end

function RandomOrderHelper._CalcRewardCount(orderModel, config, score, rewardType)
  if rewardType == ItemType.ToolBox01 then
    return math.floor(config.smallBoxConstant * score)
  elseif rewardType == ItemType.ToolBox02 then
    return math.floor(config.bigBoxConstant * score)
  elseif rewardType == EPropertyType.Gold then
    local coinConstant = GM.MapDataModel:IsAllSlotBuildFinished() and config.coinMaxLevelConstant or config.coinConstant
    local gold = math.floor(coinConstant * orderModel:GetLevel() * score // 5 * 5)
    if gold == 0 then
      gold = 5
    end
    return gold
  end
  Log.Error("Unexpected random reward type:" .. tostring(rewardType))
  return 0
end

function RandomOrderHelper.GetRandomItemList(orderModel, generators, minScore, maxScore, bIgnoreChainCD, bIgnoreFreeCD, filter, extraCD)
  local itemDataModel = GM.ItemDataModel
  local items = {}
  local orders = orderModel:GetOrders()
  local requirementsMap = {}
  local chainMap = {}
  for k, order in pairs(orders) do
    if filter and filter(order) then
      for _, item in pairs(order:GetAllRequireItems()) do
        requirementsMap[item] = true
        chainMap[itemDataModel:GetChainId(item)] = true
      end
    else
      for _, item in pairs(order:GetAllRequireItems()) do
        requirementsMap[item] = true
      end
    end
  end
  local targetScore
  if minScore ~= nil and maxScore ~= nil then
    targetScore = (minScore + maxScore) / 2
  else
    targetScore = (minScore or 0) + (maxScore or 0)
  end
  local bFreeCdOpen = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.FreeItemCD)
  local backup = {
    score = math.maxinteger
  }
  for _, gen in pairs(generators) do
    for item, score in pairs(orderModel:GetItemScoresByGenerator(gen)) do
      local chainId = itemDataModel:GetChainId(item)
      if orderModel:GetItemCd(item) == 0 and (not bFreeCdOpen or orderModel:GetFreeItemCd(item) == 0) and (bIgnoreChainCD or orderModel:GetItemCd(chainId) == 0) and (not bFreeCdOpen or bIgnoreFreeCD or orderModel:GetFreeItemCd(chainId) == 0) and (not (bFreeCdOpen and not bIgnoreFreeCD and GM.ItemDataModel:IsFreeItem(item)) or orderModel:CanGenerateFreeOrder()) and not requirementsMap[item] and not chainMap[chainId] and not RandomOrderHelper.ItemDisabledByDoubleEnergy(item) and (extraCD == nil or extraCD(item, chainId) == 0) then
        if (maxScore == nil or maxScore >= score) and (minScore == nil or minScore <= score) then
          items[#items + 1] = {code = item, score = score}
        elseif math.abs(score - targetScore) < math.abs(backup.score - targetScore) then
          backup.code = item
          backup.score = score
        end
      end
    end
  end
  return items, backup
end

function RandomOrderHelper.GetItemOnBoard(targetScore)
  local itemPool = {}
  local itemNum = {}
  local score, itemCode
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local item = GM.MainBoardModel:GetItem(position)
    if item ~= nil then
      itemCode = item:GetCode()
      if StringUtil.StartWith(itemCode, "it") then
        score = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCode)
        if score then
          itemPool[#itemPool + 1] = {code = itemCode, score = score}
          itemNum[itemCode] = (itemNum[itemCode] or 0) + 1
        end
      end
    end
  end
  local itemRequireList = {}
  local orders = GM.MainBoardModel:GetOrders()
  for _, order in pairs(orders) do
    local requirements = order:GetRequirements()
    for _, itemCode in ipairs(requirements) do
      itemRequireList[GM.ItemDataModel:GetChainId(itemCode)] = 1
    end
  end
  local chainId
  local index = 1
  while index <= #itemPool do
    chainId = GM.ItemDataModel:GetChainId(itemPool[index].code)
    if itemRequireList[chainId] then
      table.remove(itemPool, index)
    else
      index = index + 1
    end
  end
  table.sort(itemPool, function(a, b)
    return a.score < b.score
  end)
  local rdmOdr
  if #itemPool == 1 then
    rdmOdr = itemPool[1]
  else
    for i = 1, #itemPool - 1 do
      if targetScore >= itemPool[i].score and targetScore < itemPool[i + 1].score then
        rdmOdr = itemPool[i]
        break
      elseif targetScore < itemPool[i].score then
        rdmOdr = itemPool[i]
        break
      elseif i == #itemPool - 1 then
        rdmOdr = itemPool[i + 1]
        break
      end
    end
  end
  return rdmOdr
end

function RandomOrderHelper.ItemDisabledByDoubleEnergy(itemCode)
  local level = GM.ItemDataModel:GetChainLevel(itemCode)
  if 1 < level then
    return false
  end
  local gens = GM.ItemDataModel:GetItemGenerators(itemCode)
  if gens == nil or next(gens) == nil then
    GM.BIManager:LogProject(EBIProjectType.OrderItemError, itemCode)
    return false
  end
  local doubleEnergyModel
  for strActivityType, _ in pairs(DoubleEnergyDefinition) do
    doubleEnergyModel = GM.ActivityManager:GetModel(strActivityType)
    if doubleEnergyModel ~= nil and doubleEnergyModel:IsActivityOpen() then
      for _, gen in ipairs(gens) do
        if DoubleEnergyModel.IsDoubleEnergyItemByCode(gen) then
          return true
        end
      end
    end
  end
  return false
end

function RandomOrderHelper.RandomSelect(itemsA, initItems, minScore, maxScore, backup, restNum)
  local index = Table.ListRandomSelectIndex(itemsA)
  local itemA = itemsA[index]
  if minScore <= itemA.score and maxScore >= itemA.score then
    return {
      itemA.code
    }, itemA.score
  else
    local ascore = itemA.score
    local bmin = minScore - ascore
    local bmax = maxScore - ascore
    local secondList = {}
    local hasSecondChain = false
    local secondBackup = {}
    local target = (minScore + maxScore) / 2
    local chainId = GM.ItemDataModel:GetChainId(itemA.code)
    for _, v in pairs(initItems) do
      if GM.ItemDataModel:GetChainId(v.code) ~= chainId then
        hasSecondChain = true
        if bmin <= v.score and bmax >= v.score then
          secondList[#secondList + 1] = v
        elseif math.abs(backup.score - target) >= math.abs(ascore + v.score - target) then
          backup.score = ascore + v.score
          backup.codes = {
            itemA.code,
            v.code
          }
        end
      end
    end
    if not hasSecondChain then
      local randA = {}
      local aMax = {score = 0}
      for _, v in pairs(initItems) do
        if v.score > aMax.score and minScore > v.score then
          aMax.code = v.code
          aMax.score = v.score
        elseif minScore <= v.score and maxScore >= v.score then
          randA[#randA + 1] = v
        end
      end
      if 0 < #randA then
        itemA = Table.ListRandomSelectOne(randA)
        return {
          itemA.code
        }, itemA.score
      elseif math.abs(backup.score - target) >= math.abs(aMax.score - target) then
        return {
          aMax.code
        }, aMax.score
      else
        return backup.codes, backup.score
      end
    end
    if 0 < #secondList then
      local itemB = Table.ListRandomSelectOne(secondList)
      return {
        itemA.code,
        itemB.code
      }, ascore + itemB.score
    end
    table.remove(itemsA, index)
    restNum = restNum - 1
    if restNum == 0 then
      return backup.codes, backup.score
    end
    return RandomOrderHelper.RandomSelect(itemsA, initItems, minScore, maxScore, backup, restNum)
  end
end

MainRandomOrderCreator = {}

function MainRandomOrderCreator.TypeFilter(order)
  local type = order:GetType()
  return type ~= OrderType.Fixed and type ~= OrderType.Clear and type ~= OrderType.LuckyStar and not order:IsExtraLane() and type ~= OrderType.CurtainCall
end

function MainRandomOrderCreator.CanCreate(orderModel, level, config)
  if level < config.unlockLevel then
    return false
  end
  local maxNum = config:GetMaxNum()
  if GM.PropItemManager:GetModel(EPropItemType.ExtraOrder):IsOn() then
    maxNum = maxNum + 1
  end
  if maxNum <= orderModel:GetOrdersAmountByFilter(MainRandomOrderCreator.TypeFilter) then
    return false
  end
  return true
end

function MainRandomOrderCreator.Generate(orderModel, config, baseScore, eOrderType, extraCD)
  local minScore = baseScore - config.scoreMargin
  local maxScore = baseScore + config.scoreMargin
  local genList = GM.ItemDataModel:GetUnlockedMainGenerator(config.producerMargin)
  local initItems, oneBackup = RandomOrderHelper.GetRandomItemList(orderModel, genList, nil, maxScore, false, false, function(order)
    return order:GetType() == eOrderType
  end, extraCD)
  local needToolBox = RandomOrderHelper.NeedSpecialRewardRandomOrder(orderModel, config, eOrderType)
  local needGold = false
  if #initItems == 0 then
    if oneBackup.code then
      return {
        oneBackup.code
      }, {
        RandomOrderHelper.CalcReward(orderModel, config, oneBackup.score, needToolBox, needGold)
      }, oneBackup.score
    else
      initItems, oneBackup = RandomOrderHelper.GetRandomItemList(orderModel, genList, nil, maxScore, true, false)
      if 0 < #initItems then
        GM.BIManager:LogProject(EBIProjectType.RandomOrderRepeatLine)
      elseif oneBackup.code then
        GM.BIManager:LogProject(EBIProjectType.RandomOrderRepeatLine)
        return {
          oneBackup.code
        }, {
          RandomOrderHelper.CalcReward(orderModel, config, oneBackup.score, needToolBox, needGold)
        }, oneBackup.score
      elseif GM.ConfigModel:IsServerControlOpen(EGeneralConfType.FreeItemCD) then
        initItems, oneBackup = RandomOrderHelper.GetRandomItemList(orderModel, genList, nil, maxScore, true, true)
        if 0 < #initItems then
          GM.BIManager:LogProject(EBIProjectType.RandomOrderRepeatLine)
        elseif oneBackup.code then
          GM.BIManager:LogProject(EBIProjectType.RandomOrderRepeatLine)
          return {
            oneBackup.code
          }, {
            RandomOrderHelper.CalcReward(orderModel, config, oneBackup.score, needToolBox, needGold)
          }, oneBackup.score
        else
          return
        end
      else
        return
      end
    end
  end
  local backup = {
    score = oneBackup.score,
    codes = {
      oneBackup.code
    }
  }
  local requirements, totalScore = RandomOrderHelper.RandomSelect(Table.DeepCopy(initItems), initItems, minScore, maxScore, backup, #initItems)
  local rewards = RandomOrderHelper.CalcReward(orderModel, config, totalScore, needToolBox, needGold)
  return requirements, {rewards}, totalScore
end

function MainRandomOrderCreator.Create(orderModel, config, preId)
  local id, baseScore = RandomOrderHelper.GetNextConfig(orderModel, preId)
  local requirements, rewards, totalScore = MainRandomOrderCreator.Generate(orderModel, config, baseScore, OrderType.Random)
  if not requirements then
    GM.BIManager:LogProject(EBIProjectType.RandomOrderCreateFailed)
    return
  end
  for _, v in pairs(requirements) do
    GM.ItemDataModel:SetLocked(v)
  end
  local order = MainOrder.Create(orderModel:GetBoardModel(), id, requirements, rewards, totalScore, OrderType.Random, orderModel:GetAvatarId(), GM.GameModel:GetServerTime())
  return order
end
