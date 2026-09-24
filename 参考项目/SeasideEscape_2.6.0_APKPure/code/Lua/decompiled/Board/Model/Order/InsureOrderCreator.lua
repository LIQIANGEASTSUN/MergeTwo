InsureOrderCreator = {}

function InsureOrderCreator.CanCreate(orderModel, maxNum)
  local nextRefreshTime = orderModel:GetInsureNextRefreshTime()
  local curTime = GM.GameModel:GetServerTime()
  local num = orderModel:GetOrdersAmountByFilter(function(order)
    return order:GetType() == OrderType.Insure
  end)
  return GM.UserModel:IsReturnUser() and nextRefreshTime < curTime and maxNum > num
end

function InsureOrderCreator.CalcReward(orderModel, config, score, needToolBox, needGold)
  if needToolBox and needGold then
    Log.Error("needToolBox \229\146\140 needGold \228\184\141\229\186\148\229\144\140\230\151\182\228\184\186 true")
  end
  local rewardType
  if needGold then
    rewardType = EPropertyType.Gold
  elseif score > config.rewardRange1[1] and score <= config.rewardRange1[2] then
    rewardType = Table.ListWeightSelectOne(config.rewardWeight1)
    rewardType = rewardType[PROPERTY_TYPE]
  elseif score > config.rewardRange2[1] and score <= config.rewardRange2[2] then
    if needToolBox then
      rewardType = ItemType.ToolBox01
    else
      rewardType = Table.ListWeightSelectOne(config.rewardWeight2)
      rewardType = rewardType[PROPERTY_TYPE]
    end
  elseif score > config.rewardRange3[1] and score <= config.rewardRange3[2] then
    if needToolBox then
      rewardType = ItemType.ToolBox02
    else
      rewardType = Table.ListWeightSelectOne(config.rewardWeight3)
      rewardType = rewardType[PROPERTY_TYPE]
    end
  end
  local multi
  if rewardType == ItemType.ToolBox01 then
    multi = config.smallBoxConstant
  elseif rewardType == ItemType.ToolBox02 then
    multi = config.bigBoxConstant
  elseif rewardType == EPropertyType.Gold then
    multi = config.coinConstant
  end
  if rewardType == nil or multi == nil then
    Log.Error("[InsureOrderCreator] rewardType or multi == nil")
  end
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

function InsureOrderCreator.Generate(orderModel, config)
  local arrItemScoreRange = orderModel:GetItemScoreRange()
  Log.Assert(#arrItemScoreRange == 2, "[InsureOrder] \230\156\172\229\156\176\230\163\139\229\173\144\229\190\151\229\136\134\229\140\186\233\151\180\233\133\141\231\189\174\230\156\137\232\175\175\239\188\140\232\175\183\230\163\128\230\159\165")
  local requirementsMap = {}
  local chainMap = {}
  local orders = orderModel:GetOrders()
  local chainId
  for _, order in pairs(orders) do
    for _, item in pairs(order:GetRequirements()) do
      requirementsMap[item] = true
      chainId = GM.ItemDataModel:GetChainId(item)
      chainMap[chainId] = chainMap[chainId] or 0
      chainMap[chainId] = math.max(chainMap[chainId], GM.ItemDataModel:GetChainLevel(item))
    end
  end
  
  local function filterFunc(itemModel, index)
    chainId = GM.ItemDataModel:GetChainId(itemModel:GetType())
    local bOccupy = chainMap[chainId] ~= nil and chainMap[chainId] >= GM.ItemDataModel:GetChainLevel(itemModel:GetType())
    local range = arrItemScoreRange[index]
    local itemScore = orderModel:GetItemScoreByUnlockGen(itemModel:GetCode())
    local bInScoreRange = itemScore ~= nil and itemScore >= range[1] and itemScore <= range[2]
    return not bOccupy and bInScoreRange
  end
  
  local arrBackupItems = {}
  local inventoryItem
  for i = 1, 2 do
    arrBackupItems[i] = GM.MainBoardModel:FilterItems(function(itemModel)
      return filterFunc(itemModel, i)
    end) or {}
    for j = 1, GM.MainBoardModel:GetStoredItemCount() do
      inventoryItem = GM.MainBoardModel:GetStoredItemByIndex(j)
      if inventoryItem ~= nil and filterFunc(inventoryItem, i) then
        table.insert(arrBackupItems[i], inventoryItem)
      end
    end
  end
  local requirements = {}
  for i = 1, 2 do
    if #arrBackupItems[i] == 1 then
      requirements[#requirements + 1] = arrBackupItems[i][1]
      break
    end
  end
  local randomItem
  for i = 1, 2 do
    for _, requireItem in ipairs(requirements) do
      Table.ListRemove(arrBackupItems[i], requireItem)
    end
    randomItem = Table.ListRandomSelectOne(arrBackupItems[i])
    if randomItem ~= nil then
      requirements[#requirements + 1] = randomItem
    end
  end
  if Table.IsEmpty(requirements) then
    return requirements, nil, 0
  end
  local totalScore = 0
  for i = 1, #requirements do
    totalScore = totalScore + orderModel:GetItemScoreByUnlockGen(requirements[i]:GetCode())
    requirements[i] = requirements[i]:GetType()
  end
  local mostNeedGold, mostNeedTool = GM.MapDataModel:CalculateMostNeedType()
  local rewards = InsureOrderCreator.CalcReward(orderModel, config, totalScore, mostNeedTool, mostNeedGold)
  return requirements, {rewards}, totalScore
end

function InsureOrderCreator.Create(orderModel, config, orderType)
  orderType = orderType or OrderType.Insure
  local id = orderModel:GenerateOrderId()
  local requirements, rewards, totalScore = InsureOrderCreator.Generate(orderModel, config)
  if Table.IsEmpty(requirements) then
    return
  end
  for _, v in pairs(requirements) do
    GM.ItemDataModel:SetLocked(v)
  end
  local order = MainOrder.Create(orderModel:GetBoardModel(), id, requirements, rewards, totalScore, orderType, orderModel:GetAvatarId(), GM.GameModel:GetServerTime())
  return order
end
