ReturningOrderCreator = {}

function ReturningOrderCreator.Generate(orderModel, laneConfig, scoreMap, countMap)
  local minScore = laneConfig.minScore
  local maxScore = laneConfig.maxScore
  local item1List = {}
  for code, score in pairs(scoreMap) do
    if score <= maxScore then
      for i = 1, countMap[code] do
        item1List[#item1List + 1] = code
      end
    end
  end
  local item1, item2, totalScore
  local count = #item1List
  while 0 < count do
    local index = Table.ListRandomSelectIndex(item1List)
    item1 = item1List[index]
    item1List[index] = item1List[count]
    item1List[count] = nil
    count = count - 1
    local item1Score = scoreMap[item1]
    if minScore <= item1Score then
      totalScore = scoreMap[item1]
      break
    end
    local item2List = {}
    for _, code in pairs(item1List) do
      local item2Score = scoreMap[code]
      if minScore <= item1Score + item2Score and maxScore >= item1Score + item2Score then
        item2List[#item2List + 1] = code
      end
    end
    if 0 < #item2List then
      item2 = Table.ListRandomSelectOne(item2List)
      local item2Score = scoreMap[item2]
      totalScore = item1Score + item2Score
      if item1Score < item2Score then
        item1, item2 = item2, item1
      end
      break
    end
  end
  if totalScore then
    if item2 then
      ReturningOrderCreator.RemoveOneItemFromInfoMap(scoreMap, countMap, item2)
    end
    ReturningOrderCreator.RemoveOneItemFromInfoMap(scoreMap, countMap, item1)
    local rewards = LaneOrderCreator.CalcReward(orderModel, laneConfig, totalScore)
    return {item1, item2}, {rewards}, totalScore
  elseif laneConfig.car >= 5 and laneConfig.maxScore ~= math.maxinteger then
    local config = Table.ShallowCopy(laneConfig)
    config.maxScore = math.maxinteger
    return ReturningOrderCreator.Generate(orderModel, config, scoreMap, countMap)
  end
end

function ReturningOrderCreator.RemoveOneItemFromInfoMap(scoreMap, countMap, item)
  countMap[item] = countMap[item] - 1
  if countMap[item] == 0 then
    countMap[item] = nil
    scoreMap[item] = nil
  end
end

function ReturningOrderCreator.Create(orderModel, config, scoreMap, countMap, pdMargin)
  local id = orderModel:GenerateOrderId()
  local requirements, rewards, totalScore = ReturningOrderCreator.Generate(orderModel, config, scoreMap, countMap)
  if Table.IsEmpty(requirements) then
    local order = LaneOrderCreator.Create(orderModel, config, pdMargin, OrderType.Lane)
    return order, "recall:fail_to_create"
  end
  for _, v in pairs(requirements) do
    GM.ItemDataModel:SetLocked(v)
  end
  local order = MainOrder.Create(orderModel:GetBoardModel(), id, requirements, rewards, totalScore, OrderType.Lane, orderModel:GetAvatarId(), GM.GameModel:GetServerTime(), config.type, config.id, config.car, nil, config.difficulty)
  return order, totalScore > config.maxScore and "recall:outofrange" or nil
end
