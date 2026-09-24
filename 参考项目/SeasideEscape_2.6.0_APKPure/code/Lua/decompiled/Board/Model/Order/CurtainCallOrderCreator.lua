CurtainCallOrderCreator = {}

function CurtainCallOrderCreator._CanCreate(orderModel, producerMargin, preOrder, ingorePreOrder)
  if not orderModel then
    return
  end
  local recentCurtainCallPdItem = GM.ItemDataModel:GetLastOutRangeGenerator(producerMargin)
  if not recentCurtainCallPdItem then
    return
  end
  local recentCurtainCallPdSeries = tonumber(GM.ItemDataModel:GetModelConfig(recentCurtainCallPdItem).series) or 0
  local recordLastCurtainCallSeries = tonumber(GM.MiscModel:Get(EMiscKey.LastCurtainCallProducerSeries)) or 0
  local mapCurtainPdItems = {}
  local strData = GM.MiscModel:Get(EMiscKey.CurtainCallProducerPopFailed) or ""
  local curtainCallProducerPopFailed = json.decode(StringUtil.Replace(strData, "@", ",")) or {}
  local bChange = false
  if not Table.IsEmpty(curtainCallProducerPopFailed) then
    for pdChain, _ in pairs(curtainCallProducerPopFailed) do
      if orderModel:IsProducerHasCurtainCall(pdChain) then
        curtainCallProducerPopFailed[pdChain] = nil
        bChange = true
      end
    end
  end
  for pdChain, _ in pairs(curtainCallProducerPopFailed) do
    mapCurtainPdItems[pdChain] = true
  end
  if preOrder and not ingorePreOrder then
    local arrRequirements = preOrder:GetRequirements()
    local requirementPdChainId, requirementSeries
    for _, requirement in ipairs(arrRequirements) do
      requirementSeries = tonumber(GM.ItemDataModel:GetModelConfig(requirement).series) or 0
      if recentCurtainCallPdSeries >= requirementSeries then
        requirementPdChainId = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(requirement))
        mapCurtainPdItems[requirementPdChainId] = true
      end
    end
  else
    if recentCurtainCallPdSeries <= recordLastCurtainCallSeries then
      return
    end
    local boardModel = orderModel:GetBoardModel()
    if boardModel then
      local recentPdChainId = GM.ItemDataModel:GetChainId(recentCurtainCallPdItem)
      mapCurtainPdItems[recentPdChainId] = true
      boardModel:FilterItems(function(item)
        local itemCobweb = item:GetComponent(ItemCobweb)
        local itemCode = item:GetCode()
        if itemCobweb then
          itemCode = itemCobweb:GetInnerItemCode()
          if string.match(itemCode, ItemCodePrefix.MainItem) or string.match(itemCode, ItemCodePrefix.MainGenerator) then
            local innerItemSeries = tonumber(GM.ItemDataModel:GetModelConfig(itemCode).series) or 0
            if innerItemSeries and innerItemSeries > recordLastCurtainCallSeries and innerItemSeries < recentCurtainCallPdSeries then
              local producerChainId = GM.ItemDataModel:IsPdItem(itemCode) and GM.ItemDataModel:GetChainId(itemCode) or GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(itemCode))
              mapCurtainPdItems[producerChainId] = true
            end
          end
        elseif GM.ItemDataModel:IsPdItem(itemCode) then
          local itemSeries = tonumber(GM.ItemDataModel:GetModelConfig(itemCode).series) or 0
          if itemSeries > recordLastCurtainCallSeries and itemSeries < recentCurtainCallPdSeries then
            local producerChainId = GM.ItemDataModel:GetChainId(itemCode)
            mapCurtainPdItems[producerChainId] = true
          end
        end
        return
      end)
    end
  end
  if not Table.IsEmpty(mapCurtainPdItems) then
    for pdChain, _ in pairs(mapCurtainPdItems) do
      if not orderModel:HasAllTutorialOrderFinished(pdChain) or orderModel:IsProducerHasCurtainCall(pdChain) then
        mapCurtainPdItems[pdChain] = nil
      end
    end
  end
  if not Table.IsEmpty(mapCurtainPdItems) then
    local arrOrders = orderModel:GetOrders()
    local requirementPdChainId, arrRequirements
    for _, order in pairs(arrOrders) do
      arrRequirements = order:GetRequirements()
      for _, requirement in ipairs(arrRequirements) do
        requirementPdChainId = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(requirement))
        if mapCurtainPdItems[requirementPdChainId] then
          mapCurtainPdItems[requirementPdChainId] = nil
        end
      end
    end
  end
  if not Table.IsEmpty(mapCurtainPdItems) then
    local limiteModel = LimiteOrderActivityModel.GetActiveModel()
    local order = limiteModel and limiteModel:GetOngoingOrder()
    if order then
      local arrRequirements = order:GetRequirements()
      local requirementPdChainId
      for _, requirement in ipairs(arrRequirements) do
        requirementPdChainId = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(requirement))
        if mapCurtainPdItems[requirementPdChainId] then
          mapCurtainPdItems[requirementPdChainId] = nil
        end
      end
    end
  end
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BingoCurtainCall) and not Table.IsEmpty(mapCurtainPdItems) then
    local modelArr = NoCDTrainModel.GetAllBingoCanShowBoardEntryModel()
    for _, model in ipairs(modelArr) do
      for pdChain, _ in pairs(mapCurtainPdItems) do
        if Table.Contain(model:_GetRelatedPDChain(), pdChain) or model:_GetToBeRelatedPDChain()[pdChain] then
          mapCurtainPdItems[pdChain] = nil
          if not curtainCallProducerPopFailed[pdChain] then
            curtainCallProducerPopFailed[pdChain] = 1
            GM.BIManager:LogAction(EBIType.CurtainCallProducerInBingo, "pd:" .. pdChain)
            bChange = true
          end
        end
      end
    end
  end
  if bChange then
    if not Table.IsEmpty(curtainCallProducerPopFailed) then
      strData = json.encode(curtainCallProducerPopFailed)
      strData = StringUtil.Replace(strData, ",", "@")
      GM.MiscModel:Set(EMiscKey.CurtainCallProducerPopFailed, strData)
    else
      GM.MiscModel:Clear(EMiscKey.CurtainCallProducerPopFailed)
    end
  end
  return mapCurtainPdItems, curtainCallProducerPopFailed
end

function CurtainCallOrderCreator.Create(orderModel, producerMargin, preOrder, ingorePreOrder)
  if not orderModel then
    return
  end
  producerMargin = producerMargin or 5
  local mapCurtainPdItems, lastProducerPopFailed = CurtainCallOrderCreator._CanCreate(orderModel, producerMargin, preOrder, ingorePreOrder)
  if Table.IsEmpty(mapCurtainPdItems) then
    return
  end
  local orders = {}
  local extInfos = {}
  local createTime = GM.GameModel:GetServerTime()
  local orderDuration = GM.ConfigModel:ParseGeneralConf(EGeneralConfType.CurtainCallDuration)
  orderDuration = math.floor((tonumber(orderDuration) or 24) * 3600)
  local endTime = createTime + orderDuration
  for pdChainId, _ in pairs(mapCurtainPdItems) do
    orders[#orders + 1] = CurtainCallOrder.Create(orderModel:GetBoardModel(), pdChainId, createTime, endTime, pdChainId)
    extInfos[#orders] = lastProducerPopFailed[pdChainId] == 1 and "delayUI:1" or nil
  end
  return orders, extInfos
end

function CurtainCallOrderCreator.CalcReward(orderModel, rewardScore)
  local arrRewards = {}
  if orderModel and 0 < rewardScore then
    local randomOrderConfig
    if orderModel.GetRandomOrderConfig then
      randomOrderConfig = orderModel:GetRandomOrderConfig()
    else
      randomOrderConfig = RandomOrderConfig.Create(GM.ConfigModel:GetLocalConfig(LocalConfigKey.RandomOrderConfig))
    end
    local halfScore = rewardScore / 2
    local boxReward = RandomOrderHelper.CalcReward(orderModel, randomOrderConfig, halfScore, true, false)
    table.insert(arrRewards, boxReward)
    local goldReward = RandomOrderHelper.CalcReward(orderModel, randomOrderConfig, rewardScore - halfScore, false, true)
    table.insert(arrRewards, goldReward)
  end
  if 1 < #arrRewards then
    arrRewards = RewardApi.MergeRewardsByHash(arrRewards)
  end
  table.insert(arrRewards, {
    [PROPERTY_TYPE] = "gold_5",
    [PROPERTY_COUNT] = 1
  })
  return arrRewards
end
