LuckyStarOrderCreator = {}
local flMargin = 0
local arrGroupedItems = {}

function LuckyStarOrderCreator.CanCreate(orderModel, preOrder)
  local preOrderType = preOrder and preOrder:GetType()
  if preOrderType ~= OrderType.Lane and preOrderType ~= OrderType.Random and preOrderType ~= OrderType.Recall then
    return
  end
  local model = GM.ActivityManager:GetModel(ActivityType.LuckyStar)
  if model and model:CanCreateOrder(preOrder:GetTotalScore(orderModel)) then
    return true, ActivityType.LuckyStar
  end
  return false
end

function LuckyStarOrderCreator.Create(orderModel, preOrder, activityType)
  local id = orderModel:GenerateOrderId()
  local requirements, rewards, totalScore = LuckyStarOrderCreator.Generate(orderModel, preOrder, activityType)
  if not requirements then
    return
  end
  local preOrderScore = preOrder and preOrder:GetTotalScore(orderModel) or 0
  local luckyStarModel = GM.ActivityManager:GetModel(activityType)
  if not luckyStarModel or 0 >= luckyStarModel:GetOrderEndTime(preOrderScore) then
    if GameConfig.IsTestMode() then
      Log.Error("\229\185\184\232\191\144\230\152\159\232\174\162\229\141\149\231\148\159\230\136\144\229\164\177\232\180\165:\232\174\162\229\141\149\229\173\152\229\156\168\230\151\182\233\151\180\228\184\1860S")
    end
    return
  end
  local createTime = GM.GameModel:GetServerTime()
  local endTime = createTime + luckyStarModel:GetOrderEndTime(preOrderScore)
  local order = MainOrder.Create(orderModel:GetBoardModel(), id, requirements, rewards, totalScore, OrderType.LuckyStar, orderModel:GetAvatarId(), createTime, nil, nil, nil, endTime)
  if order and preOrder then
    local index = preOrder:GetSiblingIndex()
    if index then
      order:SetSiblingIndex(index)
    else
      local preOrderCell = MainBoardView.GetInstance():GetOrderArea():GetCell(preOrder)
      if preOrderCell and preOrderCell.transform then
        order:SetSiblingIndex(preOrderCell.transform:GetSiblingIndex())
      end
    end
  end
  return order
end

function LuckyStarOrderCreator.Generate(orderModel, preOrder, activityType)
  local luckyStarModel = GM.ActivityManager:GetModel(activityType)
  if not luckyStarModel then
    return
  end
  local preOrderScore = preOrder:GetTotalScore(orderModel)
  local score
  score, flMargin = luckyStarModel:GetOrderCreateScore(preOrderScore)
  Log.Assert(flMargin and 0 < flMargin, "\229\185\184\232\191\144\230\152\159\232\174\162\229\141\149\239\188\140\229\136\134\230\149\176\229\140\186\233\151\180\229\191\133\233\161\187\229\164\167\228\186\1420")
  local requiredNum = luckyStarModel:GetOrderRequiredItemNum(preOrderScore)
  LuckyStarOrderCreator.GroupItemsByRule(orderModel, preOrder)
  local requirements = LuckyStarOrderCreator.GetRequirementsByScoreRangeRecursive(orderModel, preOrder, score, math.max(0, score - flMargin), requiredNum)
  local createScore = 0
  local reward
  if not Table.IsEmpty(requirements) then
    local requireItemsMap = {}
    for _, itemCode in pairs(requirements) do
      createScore = createScore + (orderModel:GetItemScoreByUnlockGen(itemCode) or 0)
      requireItemsMap[itemCode] = true
    end
    reward = {
      [PROPERTY_TYPE] = luckyStarModel:GetLuckyStarType(),
      [PROPERTY_COUNT] = createScore,
      requireItemsMap = requireItemsMap
    }
  else
    Log.Info("LuckyStarOrder can not find suitable items. preOrderScore:" .. preOrderScore)
  end
  return requirements, {reward}, createScore
end

function LuckyStarOrderCreator.GetRequirementsByScoreRangeRecursive(orderModel, preOrder, maxScore, minScore, requiredNum)
  if maxScore <= 0 then
    return
  end
  local requirements = LuckyStarOrderCreator.GetRequirementsByNumRecursive(orderModel, preOrder, maxScore, minScore, requiredNum)
  if not Table.IsEmpty(requirements) then
    return requirements
  end
  maxScore = minScore
  minScore = math.max(minScore - flMargin, 0)
  return LuckyStarOrderCreator.GetRequirementsByScoreRangeRecursive(orderModel, preOrder, maxScore, minScore, requiredNum)
end

function LuckyStarOrderCreator.GetRequirementsByNumRecursive(orderModel, preOrder, maxScore, minScore, num)
  if num < 1 then
    return
  end
  local requirements = LuckyStarOrderCreator.GetRequirementsByRule(orderModel, preOrder, maxScore, minScore, num)
  if not Table.IsEmpty(requirements) then
    return requirements
  end
  return LuckyStarOrderCreator.GetRequirementsByNumRecursive(orderModel, preOrder, maxScore, minScore, num - 1)
end

function LuckyStarOrderCreator.GetRequirementsByRule(orderModel, preOrder, maxScore, minScore, num)
  local selectableItems = {}
  for _, v in ipairs(arrGroupedItems) do
    if not Table.IsEmpty(v) then
      Table.ListAppend(selectableItems, v)
      local requirements = LuckyStarOrderCreator.SelectItemsInRange(selectableItems, maxScore, minScore, num)
      if not Table.IsEmpty(requirements) then
        return requirements
      end
    end
  end
end

function LuckyStarOrderCreator.SelectItemsInRange(selectableItems, maxScore, minScore, num)
  if Table.IsEmpty(selectableItems) or num > #selectableItems then
    return
  end
  if num == 3 then
    for i = 1, #selectableItems do
      for j = 1, #selectableItems do
        for k = 1, #selectableItems do
          if i ~= j and j ~= k and i ~= k then
            local score = selectableItems[i].score + selectableItems[j].score + selectableItems[k].score
            if minScore < score and maxScore >= score then
              return {
                selectableItems[i].item:GetCode(),
                selectableItems[j].item:GetCode(),
                selectableItems[k].item:GetCode()
              }
            end
          end
        end
      end
    end
  elseif num == 2 then
    for i = 1, #selectableItems do
      for j = 1, #selectableItems do
        if i ~= j then
          local score = selectableItems[i].score + selectableItems[j].score
          if minScore < score and maxScore >= score then
            return {
              selectableItems[i].item:GetCode(),
              selectableItems[j].item:GetCode()
            }
          end
        end
      end
    end
  elseif num == 1 then
    for i = 1, #selectableItems do
      local score = selectableItems[i].score
      if minScore < score and maxScore >= score then
        return {
          selectableItems[i].item:GetCode()
        }
      end
    end
  else
    Log.Error("\229\185\184\232\191\144\230\152\159\232\174\162\229\141\149 \230\163\139\229\173\144\233\156\128\230\177\130\230\149\176\233\135\143\233\148\153\232\175\175")
  end
end

function LuckyStarOrderCreator.GroupItemsByRule(orderModel, preOrder)
  arrGroupedItems = {}
  for i = 1, 8 do
    arrGroupedItems[i] = {}
  end
  local itemDataModel = GM.ItemDataModel
  local boardModel = orderModel:GetBoardModel()
  local requiredChainMap = {}
  local orders = orderModel:GetOrders()
  LuckyStarOrderCreator.UpdateRequiredChainMap(requiredChainMap, orders)
  local arrValidItems = boardModel:FilterItems(function(itemModel)
    return itemDataModel:IsInOrder(itemModel:GetCode()) and not requiredChainMap[itemDataModel:GetChainId(itemModel:GetCode())] and not requiredChainMap[itemModel:GetCode()]
  end)
  local preOrderPDChainMap = {}
  for _, itemCode in pairs(preOrder:GetAllRequireItems()) do
    preOrderPDChainMap[LuckyStarOrderCreator.GetGeneratedPDChain(itemCode)] = true
  end
  for _, item in pairs(arrValidItems) do
    local index = 1
    local itemCode = item:GetCode()
    local pdChainId = LuckyStarOrderCreator.GetGeneratedPDChain(itemCode)
    if not preOrderPDChainMap[pdChainId] then
      index = index + 4
    end
    if LuckyStarOrderCreator.IsRareItem(itemCode) then
      index = index + 2
    end
    local sameItems = boardModel:GetItemsCount(function(itemModel)
      return itemModel:GetCode() == itemCode
    end)
    if not Table.IsEmpty(sameItems) and 1 < #sameItems then
      index = index + 1
    end
    arrGroupedItems[index][#arrGroupedItems[index] + 1] = {
      item = item,
      score = orderModel:GetItemScoreByUnlockGen(item:GetCode()) or 0
    }
  end
end

function LuckyStarOrderCreator.GetRelatedChainRecursive(chainMap, itemCode)
  if chainMap[GM.ItemDataModel:GetChainId(itemCode)] == true then
    return
  end
  chainMap[GM.ItemDataModel:GetChainId(itemCode)] = true
  local generators = GM.ItemDataModel:GetItemGenerators(itemCode)
  if not Table.IsEmpty(generators) then
    for _, v in pairs(generators) do
      if not StringUtil.StartWith(v, ItemCodePrefix.MainGenerator) then
        return LuckyStarOrderCreator.GetRelatedChainRecursive(chainMap, v)
      end
    end
  end
end

function LuckyStarOrderCreator.GetGeneratedPDChain(itemCode)
  if not itemCode or not StringUtil.StartWith(itemCode, ItemCodePrefix.MainGenerator) and not string.match(itemCode, ItemCodePrefix.MainItem) then
    return
  end
  local generators = GM.ItemDataModel:GetItemGenerators(itemCode)
  if not Table.IsEmpty(generators) then
    for _, v in pairs(generators) do
      if StringUtil.StartWith(v, ItemCodePrefix.MainGenerator) then
        return GM.ItemDataModel:GetChainId(v)
      end
    end
    for _, v in pairs(generators) do
      if not StringUtil.StartWith(v, ItemCodePrefix.MainGenerator) then
        return LuckyStarOrderCreator.GetGeneratedPDChain(v)
      end
    end
  end
end

function LuckyStarOrderCreator.IsRareItem(itemCode)
  return GM.ItemDataModel:IsRareItem(itemCode)
end

function LuckyStarOrderCreator.UpdateRequiredChainMap(requiredChainMap, orders)
  for actType, _ in pairs(LimiteOrderActivityDefinition) do
    local order = GM.ActivityManager:GetModel(actType):GetOngoingOrder()
    if order then
      LuckyStarOrderCreator.UpdateRequiredChainMapByOrder(order, requiredChainMap)
    end
  end
  local actOrders = GM.ActivityManager:GetModel(ActivityType.ExtraCustomer):GetOngoingOrders()
  for _, order in pairs(actOrders) do
    LuckyStarOrderCreator.UpdateRequiredChainMapByOrder(order, requiredChainMap)
  end
  for _, order in pairs(orders) do
    local orderType = order:GetType()
    if orderType == OrderType.Random or orderType == OrderType.Lane or orderType == OrderType.Recall or orderType == OrderType.LuckyStar or orderType == OrderType.Insure or orderType == OrderType.Fixed then
      LuckyStarOrderCreator.UpdateRequiredChainMapByOrder(order, requiredChainMap)
    end
  end
end

function LuckyStarOrderCreator.UpdateRequiredChainMapByOrder(order, requiredChainMap)
  local requiremenst = order:GetAllRequireItems()
  for i, state in pairs(order:GetRequirementFillStates()) do
    if not state then
      LuckyStarOrderCreator.GetRelatedChainRecursive(requiredChainMap, requiremenst[i])
    else
      requiredChainMap[requiremenst[i]] = true
    end
  end
end
