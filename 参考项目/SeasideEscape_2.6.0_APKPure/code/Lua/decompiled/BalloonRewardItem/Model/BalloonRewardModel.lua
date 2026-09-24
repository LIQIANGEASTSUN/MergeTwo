BalloonRewardModel = {}
BalloonRewardModel.__index = BalloonRewardModel
local minScore = 0.001

function BalloonRewardModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.Balloon)
  self.m_idGenerator = DBIdGenerator.Create()
end

function BalloonRewardModel:LoadFileConfig()
  self.m_rewardItemList = GM.ConfigModel:GetLocalConfig(LocalConfigKey.FireworksItemList)
end

function BalloonRewardModel:OnSyncDataFinished()
  self.m_mapBalloons = self.m_dbTable:GetValues()
end

function BalloonRewardModel:GetData()
  return self.m_dbTable
end

function BalloonRewardModel:FromSyncData(dataArr)
  self.m_dbTable:FromArr(dataArr)
end

function BalloonRewardModel:AcquireBalloon(icon, score, minId, maxId, nearScore)
  local id = self.m_idGenerator:Generate()
  local balloon = {
    icon = icon,
    minId = minId,
    maxId = maxId,
    score = score,
    nearScore = nearScore
  }
  self.m_mapBalloons[id] = balloon
  self.m_dbTable:BatchSet({
    [id] = balloon
  })
end

function BalloonRewardModel:TryPopBalloon()
  local id, balloon = next(self.m_mapBalloons)
  if id == nil then
    return
  end
  local rewards = self:GetBalloonRewardItems(balloon)
  self.m_mapBalloons[id] = nil
  self.m_dbTable:Remove(id)
  return balloon.icon, rewards
end

function BalloonRewardModel:GetTopBalloon()
  local id, balloon = next(self.m_mapBalloons)
  if id == nil then
    return
  end
  return balloon.icon
end

function BalloonRewardModel:GetBalloonRewardItems(balloon)
  local rewards = {}
  local itemState = {}
  if balloon.minId and balloon.maxId then
    while balloon.score >= 0 do
      local code, score = self:GetOneItem(balloon.minId, balloon.maxId, balloon.nearScore, itemState)
      rewards[#rewards + 1] = {
        [PROPERTY_TYPE] = code,
        [PROPERTY_COUNT] = 1
      }
      balloon.score = balloon.score - score
    end
  else
    while balloon.score >= 0 do
      local code, score = ItemRewardAquire.GetRewardItemFromRewardList()
      rewards[#rewards + 1] = {
        [PROPERTY_TYPE] = code,
        [PROPERTY_COUNT] = 1
      }
      balloon.score = balloon.score - score
    end
  end
  return rewards
end

local function normalCompareFunc(a, b)
  return a.score < b.score
end

local function sunCompareFunc(a, b)
  if a.isSun ~= b.isSun then
    return a.isSun == true
  end
  return a.score < b.score
end

function BalloonRewardModel:GetOneItem(minId, maxId, nearScore, itemState, bSunOrderFirst)
  if Table.IsEmpty(itemState) then
    self:_InitOrderItemInfo(itemState)
  end
  if bSunOrderFirst then
    table.sort(itemState, sunCompareFunc)
  else
    table.sort(itemState, normalCompareFunc)
  end
  for i = 1, #itemState do
    if itemState[i].score > minScore then
      local code, score = self:_GetOrderRewardItem(itemState[i].code, itemState[i].score, minId, maxId, nearScore)
      if code and score then
        itemState[i].score = itemState[i].score - score
        return code, score
      end
    end
  end
  return self:_GetBackupItem(minId, maxId, nearScore)
end

local function cboxCompareFunc(a, b)
  return a.score > b.score
end

function BalloonRewardModel:GetItemsForCbox(choicesConfig)
  local itemState = {}
  self:_InitOrderItemInfo(itemState, true, true, GM.ConfigModel:IsServerControlOpen(EGeneralConfType.IboxEventOrder))
  table.sort(itemState, cboxCompareFunc)
  local backupItems = {}
  local backupChain = {}
  for i, v in ipairs(choicesConfig) do
    for _, state in ipairs(itemState) do
      local chainId = GM.ItemDataModel:GetChainId(state.code)
      if state.score > minScore and not backupChain[chainId] then
        local code, score = self:_GetOrderRewardItem(state.code, state.score, v.Min, v.Max, v.NearScore)
        if code and score then
          backupItems[i] = code
          backupChain[chainId] = true
          break
        end
      end
    end
    if not backupItems[i] then
      local code = self:_GetBackupItem(v.Min, v.Max, v.NearScore, backupChain)
      backupItems[i] = code
      backupChain[GM.ItemDataModel:GetChainId(code)] = true
    end
  end
  return backupItems
end

function BalloonRewardModel:_GetOrderRewardItem(code, score, minId, maxId, nearScore)
  local gen = GM.ItemDataModel:GetItemUnlockGenerator(code)
  local min, max = self:_GetItemRewardLevel(code, minId, maxId, gen)
  if min <= max then
    local rewardCode, rewardScore
    local level = GM.ItemDataModel:GetChainLevel(code)
    if min >= level then
      rewardCode, rewardScore = code, score
    else
      rewardCode, rewardScore = self:_GetItemNearTargetScore(GM.ItemDataModel:GetChainId(code), min, math.min(max, level), nearScore, gen)
    end
    if rewardCode and rewardScore then
      return rewardCode, rewardScore
    end
  else
    Log.Info(code .. "\230\156\128\228\189\142\229\136\134\230\163\139\229\173\144\229\143\150\228\184\141\229\136\176\230\163\139\229\173\144\229\165\150\229\138\177")
  end
end

function BalloonRewardModel:_GetBackupItem(minId, maxId, nearTarget, exceptChains)
  local margin = GM.MainBoardModel:GetOrderModel():GetOrderProducerMargin()
  local genList = GM.ItemDataModel:GetUnlockedMainGenerator(margin)
  local chainMap = {}
  local count = 0
  for _, gen in pairs(genList) do
    local scoreMap = GM.MainBoardModel:GetOrderModel():GetItemScoresByGenerator(gen)
    for item, _ in pairs(scoreMap) do
      local chainId = GM.ItemDataModel:GetChainId(item)
      if not chainMap[chainId] and (Table.IsEmpty(exceptChains) or not exceptChains[chainId]) then
        local min, max = self:_GetItemRewardLevel(item, minId, maxId, gen)
        if min <= max then
          local code, score = self:_GetItemNearTargetScore(chainId, min, max, nearTarget, gen)
          if code and score then
            chainMap[chainId] = code
            count = count + 1
          end
        end
      end
    end
  end
  if count == 0 then
    Log.Info("\229\189\147\229\137\141\230\178\161\230\156\137\232\131\189\229\143\145\230\148\190\231\154\132\230\163\139\229\173\144" .. table.concat(genList, ","))
    return ItemUtility.GetAdaptiveToolType(1), 0.1
  end
  local index = math.random(count)
  for chainId, code in pairs(chainMap) do
    index = index - 1
    if index == 0 then
      return code, GM.MainBoardModel:GetItemScoreByUnlockGen(code) or 0
    end
  end
end

function BalloonRewardModel:_GetItemNearTargetScore(chainId, min, max, targetScore, generator)
  if min == max then
    local code = ItemUtility.GetItemCode(chainId, min)
    return code, GM.MainBoardModel:GetOrderModel():GetItemScore(code, generator)
  end
  local resultCode, resultScore
  local orderModel = GM.MainBoardModel:GetOrderModel()
  if targetScore == nil then
    local level = math.random(min, max)
    resultCode = ItemUtility.GetItemCode(chainId, level)
    resultScore = orderModel:GetItemScore(resultCode, generator)
  else
    for i = min, max do
      local code = ItemUtility.GetItemCode(chainId, i)
      local score = orderModel:GetItemScore(code, generator) or 0
      if math.abs(score - targetScore) <= math.abs((resultScore or 0) - targetScore) then
        resultCode = code
        resultScore = score
      end
    end
  end
  return resultCode, resultScore
end

function BalloonRewardModel:_GetItemRewardLevel(item, minId, maxId, gen)
  gen = gen or GM.ItemDataModel:GetItemUnlockGenerator(item)
  local tplId = GM.ItemDataModel:GetModelConfig(gen).LinkTpl or GM.ItemDataModel:GetChainId(gen)
  local minLv = 100
  local maxLv = 1
  local rewardIndex = GM.ItemDataModel:GetItemRewardIndex(item)
  for _, config in pairs(self.m_rewardItemList[tplId][rewardIndex] or {}) do
    if minId <= config.rewardId and maxId >= config.rewardId then
      minLv = math.min(minLv, config.level)
      maxLv = math.max(maxLv, config.level)
    end
  end
  return minLv, maxLv
end

function BalloonRewardModel:_InitOrderItemInfo(itemState, bIncludeRandom, bAllMainOrder, bIncludeAct)
  local orderList
  if bAllMainOrder then
    orderList = GM.MainBoardModel:GetOrders()
  else
    orderList = GM.MainBoardModel:GetOrders(OrderType.Lane)
    if bIncludeRandom then
      Table.ListAppend(orderList, GM.MainBoardModel:GetOrders(OrderType.Random))
    end
  end
  if bIncludeAct then
    local actOrders = GM.ActivityManager:GetOngoingOrders()
    if not Table.IsEmpty(actOrders) then
      local count = #actOrders
      for _, v in pairs(orderList) do
        count = count + 1
        actOrders[count] = v
      end
      orderList = actOrders
    end
  end
  local itemManager = GM.MainBoardModel:GetItemManager()
  local itemScoreMap = {}
  local sunOrderItemMap = {}
  local sunModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  local isSunOrder
  for _, order in pairs(orderList) do
    isSunOrder = sunModel:IsSunshineOrder(order:GetId())
    for index, state in pairs(order:GetRequirementFillStates()) do
      if state ~= true then
        local code = order:GetRequirements()[index]
        if isSunOrder then
          sunOrderItemMap[code] = true
        end
        itemScoreMap[code] = GM.MainBoardModel:GetItemScoreByUnlockGen(code) or 0
        local chainId = GM.ItemDataModel:GetChainId(code)
        local itemLevel = GM.ItemDataModel:GetChainLevel(code)
        for _, item in pairs(itemManager:GetAllItems()) do
          local itemType = item:GetType()
          if GM.ItemDataModel:GetChainId(itemType) == chainId and itemLevel >= GM.ItemDataModel:GetChainLevel(itemType) then
            itemScoreMap[code] = math.max(0, itemScoreMap[code] - (GM.MainBoardModel:GetItemScoreByUnlockGen(itemType) or 0))
          end
        end
      end
    end
  end
  for code, score in pairs(itemScoreMap) do
    itemState[#itemState + 1] = {
      code = code,
      score = score,
      isSun = sunOrderItemMap[code]
    }
  end
end

function BalloonRewardModel:CalculateItemsFromBalloon(balloonId)
  local balloonItem = GM.PropertyDataManager:GetPropItem(balloonId)
  Log.Assert(balloonItem.value[PROPERTY_TYPE] == EPropertyType.BalloonBox, "\229\165\150\229\138\177\231\177\187\229\158\139\233\133\141\231\189\174\228\184\141\230\152\175\230\176\148\231\144\131\229\174\157\231\174\177" .. balloonId)
  local score = balloonItem.value[PROPERTY_COUNT]
  local args = StringUtil.Split(balloonItem.exInfo, "-")
  local minId, maxId, nearScore = tonumber(args[2]), tonumber(args[3]), tonumber(args[4])
  local balloonConfig = {
    minId = minId,
    maxId = maxId,
    nearScore = nearScore,
    score = score
  }
  return self:GetBalloonRewardItems(balloonConfig), score
end

function BalloonRewardModel:GetOneItemFromHardOrder(minId, maxId, nearScore)
  local orderList = GM.MainBoardModel:GetOrders(OrderType.Lane)
  Table.ListAppend(orderList, GM.MainBoardModel:GetOrders(OrderType.Random))
  local orderModel = GM.MainBoardModel:GetOrderModel()
  local itemManager = GM.MainBoardModel:GetItemManager()
  local arrItemInfo = {}
  for _, order in pairs(orderList) do
    for index, state in pairs(order:GetRequirementFillStates()) do
      if state ~= true then
        local code = order:GetRequirements()[index]
        local score = GM.MainBoardModel:GetItemScoreByUnlockGen(code) or 0
        local chainId = GM.ItemDataModel:GetChainId(code)
        local itemLevel = GM.ItemDataModel:GetChainLevel(code)
        for _, item in pairs(itemManager:GetAllItems()) do
          local itemType = item:GetType()
          if GM.ItemDataModel:GetChainId(itemType) == chainId and itemLevel >= GM.ItemDataModel:GetChainLevel(itemType) then
            score = math.max(0, score - (GM.MainBoardModel:GetItemScoreByUnlockGen(itemType) or 0))
          end
        end
        if score > minScore then
          arrItemInfo[#arrItemInfo + 1] = {
            orderScore = order:GetTotalScore(orderModel),
            code = code,
            score = score
          }
        end
      end
    end
  end
  table.sort(arrItemInfo, function(a, b)
    if a.orderScore == b.orderScore then
      return a.score > b.score
    end
    return a.orderScore > b.orderScore
  end)
  if #arrItemInfo ~= 0 then
    local code, score
    for _, itemInfo in ipairs(arrItemInfo) do
      code, score = self:_GetOrderRewardItemSunShine(itemInfo.code, itemInfo.score, minId, maxId, nearScore)
      if code and score then
        return code, score
      end
    end
  end
  return self:GetOneItemSunShine(minId, maxId, nearScore, {})
end

function BalloonRewardModel:GetOneItemFromHardCarLane(minId, maxId, nearScore)
  local orderList = GM.MainBoardModel:GetOrders(OrderType.Lane)
  local itemManager = GM.MainBoardModel:GetItemManager()
  local arrItemInfo = {}
  for _, order in pairs(orderList) do
    for index, state in pairs(order:GetRequirementFillStates()) do
      if state ~= true then
        local code = order:GetRequirements()[index]
        local score = GM.MainBoardModel:GetItemScoreByUnlockGen(code) or 0
        local chainId = GM.ItemDataModel:GetChainId(code)
        local itemLevel = GM.ItemDataModel:GetChainLevel(code)
        for _, item in pairs(itemManager:GetAllItems()) do
          local itemType = item:GetType()
          if GM.ItemDataModel:GetChainId(itemType) == chainId and itemLevel >= GM.ItemDataModel:GetChainLevel(itemType) then
            score = math.max(0, score - (GM.MainBoardModel:GetItemScoreByUnlockGen(itemType) or 0))
          end
        end
        if score > minScore then
          arrItemInfo[#arrItemInfo + 1] = {
            car = order:GetCar(),
            code = code,
            score = score
          }
        end
      end
    end
  end
  table.sort(arrItemInfo, function(a, b)
    if a.car == b.car then
      return a.score > b.score
    end
    return a.car > b.car
  end)
  if 0 < #arrItemInfo then
    if 1 < #arrItemInfo then
      local num = math.random(1, 2)
      local itemInfo = table.remove(arrItemInfo, num)
      arrItemInfo[#arrItemInfo + 1] = itemInfo
    end
    local code, score
    for _, itemInfo in ipairs(arrItemInfo) do
      code, score = self:_GetOrderRewardItemSunShine(itemInfo.code, itemInfo.score, minId, maxId, nearScore)
      if code and score then
        return code, score
      end
    end
  end
  return self:GetOneItemSunShine(minId, maxId, nearScore, {})
end

function BalloonRewardModel:GetOneItemFromHardItem(minId, maxId, nearScore)
  local orderList = GM.MainBoardModel:GetOrders(OrderType.Lane)
  Table.ListAppend(orderList, GM.MainBoardModel:GetOrders(OrderType.Random))
  local itemManager = GM.MainBoardModel:GetItemManager()
  local arrItemInfo = {}
  for _, order in pairs(orderList) do
    for index, state in pairs(order:GetRequirementFillStates()) do
      if state ~= true then
        local code = order:GetRequirements()[index]
        local score = GM.MainBoardModel:GetItemScoreByUnlockGen(code) or 0
        local chainId = GM.ItemDataModel:GetChainId(code)
        local itemLevel = GM.ItemDataModel:GetChainLevel(code)
        for _, item in pairs(itemManager:GetAllItems()) do
          local itemType = item:GetType()
          if GM.ItemDataModel:GetChainId(itemType) == chainId and itemLevel >= GM.ItemDataModel:GetChainLevel(itemType) then
            score = math.max(0, score - (GM.MainBoardModel:GetItemScoreByUnlockGen(itemType) or 0))
          end
        end
        if score > minScore then
          arrItemInfo[#arrItemInfo + 1] = {code = code, score = score}
        end
      end
    end
  end
  table.sort(arrItemInfo, function(a, b)
    return a.score > b.score
  end)
  if 0 < #arrItemInfo then
    if 1 < #arrItemInfo then
      local num = math.random(1, 2)
      local itemInfo = table.remove(arrItemInfo, num)
      arrItemInfo[#arrItemInfo + 1] = itemInfo
    end
    local code, score
    for _, itemInfo in ipairs(arrItemInfo) do
      code, score = self:_GetOrderRewardItemSunShine(itemInfo.code, itemInfo.score, minId, maxId, nearScore)
      if code and score then
        return code, score
      end
    end
  end
  return self:GetOneItemSunShine(minId, maxId, nearScore, {})
end

function BalloonRewardModel:_GetItemRewardLevelSunShine(item, minId, maxId, gen)
  gen = gen or GM.ItemDataModel:GetItemUnlockGenerator(item)
  local tplId = GM.ItemDataModel:GetModelConfig(gen).LinkTpl or GM.ItemDataModel:GetChainId(gen)
  local minLv = 100
  local maxLv = 1
  local hasLower
  local rewardIndex = GM.ItemDataModel:GetItemRewardIndex(item)
  for _, config in pairs(self.m_rewardItemList[tplId][rewardIndex] or {}) do
    if minId <= config.rewardId and maxId >= config.rewardId then
      minLv = math.min(minLv, config.level)
      maxLv = math.max(maxLv, config.level)
    elseif minId > config.rewardId then
      hasLower = true
    end
  end
  return minLv, maxLv, hasLower
end

function BalloonRewardModel:_GetOrderRewardItemSunShine(code, score, minId, maxId, nearScore)
  local gen = GM.ItemDataModel:GetItemUnlockGenerator(code)
  local min, max, hasLower = self:_GetItemRewardLevelSunShine(code, minId, maxId, gen)
  if min <= max then
    local rewardCode, rewardScore
    local itemLevel = GM.ItemDataModel:GetChainLevel(code)
    if min >= itemLevel then
      rewardCode, rewardScore = code, score
    else
      rewardCode, rewardScore = self:_GetItemNearTargetScore(GM.ItemDataModel:GetChainId(code), min, math.min(itemLevel, max), nearScore, gen)
    end
    if rewardCode and rewardScore then
      return rewardCode, rewardScore
    end
  elseif hasLower then
    return code, score
  else
    Log.Info(code .. "\229\136\134\230\149\176\229\129\143\233\171\152\232\142\183\229\143\150\228\184\141\229\136\176\229\165\150\229\138\177")
  end
end

function BalloonRewardModel:GetOneItemSunShine(minId, maxId, nearScore, itemState)
  if Table.IsEmpty(itemState) then
    self:_InitOrderItemInfo(itemState, true)
  end
  table.sort(itemState, function(a, b)
    return a.score < b.score
  end)
  for i = 1, #itemState do
    if itemState[i].score > minScore then
      local code, score = self:_GetOrderRewardItemSunShine(itemState[i].code, itemState[i].score, minId, maxId, nearScore)
      if code and score then
        itemState[i].score = itemState[i].score - score
        return code, score
      end
    end
  end
  return self:_GetBackupItem(minId, maxId, nearScore)
end
