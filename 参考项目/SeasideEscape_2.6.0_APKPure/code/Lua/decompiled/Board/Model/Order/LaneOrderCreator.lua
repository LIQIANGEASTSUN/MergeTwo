LaneOrderCreator = {}

function LaneOrderCreator.CanCreate(orderModel, mapConfigs, maxNum)
  if GM.PropItemManager:GetModel(EPropItemType.ExtraOrder):IsOn() then
    maxNum = maxNum + 1
  end
  return maxNum > orderModel:GetOrdersAmountByFilter(MainRandomOrderCreator.TypeFilter)
end

function LaneOrderCreator.CanPushCurLane(orderModel, mapConfigs, maxNum)
  if GM.PropItemManager:GetModel(EPropItemType.ExtraOrder):IsOn() then
    maxNum = maxNum + 1
  end
  return maxNum >= orderModel:GetOrdersAmountByFilter(MainRandomOrderCreator.TypeFilter)
end

function LaneOrderCreator.CalcReward(orderModel, config, score)
  local multi, rewardType
  if config.rewardMulti then
    rewardType = config.rewardType
    multi = config.rewardMulti
  elseif config.rewardType == "balance" then
    local needGold, needTool = GM.MapDataModel:CalculateMostNeedType()
    if needGold == false and needTool == false then
      local reward = Table.ListWeightSelectOne(config.rewardWeight)
      rewardType = reward.Currency
      multi = reward.Ratio
    else
      for _, v in pairs(config.rewardWeight) do
        if v.Currency == EPropertyType.Gold and needGold or v.Currency ~= EPropertyType.Gold and not needGold then
          rewardType = v.Currency
          multi = v.Ratio
          break
        end
      end
    end
  else
    local reward = Table.ListWeightSelectOne(config.rewardWeight)
    rewardType = reward.Currency
    multi = reward.Ratio
  end
  return LaneOrderCreator.CalcRewardNumByScore(rewardType, multi, score, orderModel)
end

function LaneOrderCreator.CalcRewardNumByScore(rewardType, multi, score, orderModel)
  local count = 0
  if rewardType == EPropertyType.Gold then
    count = math.floor(multi * orderModel:GetLevel() * score + 0.5)
    if count < 8 then
      count = 5
    else
      local rate = 1
      while 1000 < count do
        count = count / 10
        rate = rate * 10
      end
      count = math.floor(count + 2.5) // 5 * 5 * rate
    end
  else
    count = math.floor(multi * score + 0.5)
    if count < 1 then
      count = 1
    end
  end
  return {
    [PROPERTY_TYPE] = rewardType,
    [PROPERTY_COUNT] = count
  }
end

function LaneOrderCreator.Generate(orderModel, laneConfig, producerMargin, orderType)
  local genList = GM.ItemDataModel:GetUnlockedMainGenerator(producerMargin)
  local minScore, maxScore = LaneOrderCreator.GetScoreRange(orderModel, laneConfig)
  local requirements, totalScore = LaneOrderCreator.GetRandomRequirements(orderModel, genList, minScore, maxScore, orderType)
  if not requirements then
    return
  end
  LaneOrderCreator.UpdatePolarity(orderModel, totalScore, laneConfig)
  local reward = LaneOrderCreator.CalcReward(orderModel, laneConfig, totalScore)
  return requirements, {reward}, totalScore
end

function LaneOrderCreator.GetScoreRange(orderModel, laneConfig)
  local polarity = orderModel:GetOrderLanePolarity(laneConfig.type)
  local minScore = laneConfig.minScore
  local maxScore = laneConfig.maxScore
  if 2 <= polarity then
    maxScore = laneConfig.avgScore
  elseif polarity <= -2 then
    minScore = laneConfig.avgScore
  end
  return minScore, maxScore
end

function LaneOrderCreator.GetRandomRequirements(orderModel, genList, minScore, maxScore, orderType)
  local initItems, oneBackup = RandomOrderHelper.GetRandomItemList(orderModel, genList, nil, maxScore, false, false, function(order)
    return order:GetType() == orderType
  end)
  if Table.IsEmpty(initItems) then
    if oneBackup.code then
      return {
        oneBackup.code
      }, oneBackup.score
    else
      initItems, oneBackup = RandomOrderHelper.GetRandomItemList(orderModel, genList, nil, maxScore, true, false)
      if not Table.IsEmpty(initItems) then
        GM.BIManager:LogProject(EBIProjectType.LaneOrderRepeatLine)
      elseif oneBackup.code then
        GM.BIManager:LogProject(EBIProjectType.LaneOrderRepeatLine)
        return {
          oneBackup.code
        }, oneBackup.score
      elseif GM.ConfigModel:IsServerControlOpen(EGeneralConfType.FreeItemCD) then
        initItems, oneBackup = RandomOrderHelper.GetRandomItemList(orderModel, genList, nil, maxScore, true, true)
        if not Table.IsEmpty(initItems) then
          GM.BIManager:LogProject(EBIProjectType.LaneOrderRepeatLine)
          GM.BIManager:LogProject(EBIProjectType.LaneOrderFreeLine)
        elseif oneBackup.code then
          GM.BIManager:LogProject(EBIProjectType.LaneOrderRepeatLine)
          GM.BIManager:LogProject(EBIProjectType.LaneOrderFreeLine)
          return {
            oneBackup.code
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
  return requirements, totalScore
end

function LaneOrderCreator.UpdatePolarity(orderModel, totalScore, laneConfig)
  local polarity = orderModel:GetOrderLanePolarity(laneConfig.name)
  if totalScore >= laneConfig.avgScore then
    if polarity < 0 then
      orderModel:SetOrderLanePolarity(laneConfig.type, 1)
    else
      orderModel:SetOrderLanePolarity(laneConfig.type, polarity + 1)
    end
  elseif 0 < polarity then
    orderModel:SetOrderLanePolarity(laneConfig.type, -1)
  else
    orderModel:SetOrderLanePolarity(laneConfig.type, polarity - 1)
  end
end

function LaneOrderCreator.Create(orderModel, laneConfig, producerMargin, orderType)
  orderType = orderType or OrderType.Lane
  local id = orderModel:GenerateOrderId()
  local requirements, rewards, totalScore, weightList
  local newRule = orderModel:IsNewRuleOpen()
  local chestModel = GM.ActivityManager:GetModel(ActivityType.ChestCustomer)
  local isChest = false
  local orderConfig = laneConfig
  local car = laneConfig.car
  if chestModel and chestModel:CanCreateOrder(car) then
    orderConfig = chestModel:GetOrderConfig(car)
    isChest = true
  end
  if newRule and (laneConfig.car or 0) ~= 0 then
    requirements, rewards, totalScore, weightList = MainOrderCreator.Generate(orderModel, orderConfig, producerMargin)
  else
    requirements, rewards, totalScore = LaneOrderCreator.Generate(orderModel, orderConfig, producerMargin, orderType)
    if requirements then
      weightList = MainOrderCreator.GetRequirementsWeightInControl(requirements, producerMargin)
    end
  end
  if not requirements then
    if laneConfig and laneConfig.difficulty then
      EventDispatcher.DispatchEvent(EEventType.LaneOrderCreateFail, {
        Difficulty = laneConfig.difficulty
      })
    end
    GM.BIManager:LogProject(EBIProjectType.LaneOrderCreateFailed)
    return
  end
  for _, v in pairs(requirements) do
    GM.ItemDataModel:SetLocked(v)
  end
  local order = MainOrder.Create(orderModel:GetBoardModel(), id, requirements, rewards, totalScore, orderType, orderModel:GetAvatarId(), GM.GameModel:GetServerTime(), laneConfig.type, laneConfig.id, car, nil, laneConfig.difficulty)
  if isChest then
    if totalScore >= orderConfig.minScore then
      chestModel:SetOrderId(car, id)
    else
      chestModel:SetHitFlag(car)
    end
  end
  order.weightList = weightList
  return order
end
