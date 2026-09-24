CurtainCallOrder = setmetatable({}, MainOrder)
CurtainCallOrder.__index = CurtainCallOrder

function CurtainCallOrder.Create(boardModel, id, createTime, endTime, pdChainId)
  local order = setmetatable({}, CurtainCallOrder)
  order:Init(boardModel, id, createTime, endTime, pdChainId)
  return order
end

function CurtainCallOrder:Init(boardModel, id, createTime, endTime, pdChainId)
  MainOrder.Init(self, boardModel, id, {}, {}, nil, OrderType.CurtainCall, nil, createTime, nil, nil, nil, endTime)
  self.m_pdChainId = pdChainId
  self.m_pdNumber = tonumber(self.m_pdChainId:sub(4))
end

function CurtainCallOrder:GetPdChainId()
  return self.m_pdChainId
end

function CurtainCallOrder:GetPdNumber()
  return self.m_pdNumber
end

function CurtainCallOrder:GetCostInfo(items, orderModel)
  if self.m_arrCostInfo then
    return table.concat(self.m_arrCostInfo, ";")
  elseif items and 0 < #items then
    return MainOrder.GetCostInfo(self, items, orderModel)
  else
    return self:GetPdChainId()
  end
end

function CurtainCallOrder:UpdateState()
  self.m_bUseStore = false
end

function CurtainCallOrder:GetRequirementsInCobweb()
  return self.m_mapRequirementsInCobweb or {}
end

function CurtainCallOrder:GetPdRequirements()
  return self.m_mapPdRequirements or {}
end

function CurtainCallOrder:GetToRemoveItems()
  return self.m_arrRemoveItems or {}
end

function CurtainCallOrder:GetToStorePdItems()
  return self.m_arrToStorePdItems or {}
end

function CurtainCallOrder:GetStoredPdItems()
  return self.m_arrStoredPdItems or {}
end

function CurtainCallOrder:_SetState(state)
  if state ~= OrderState.Finished then
    BaseOrder._SetState(self, OrderState.CanDeliver)
  else
    BaseOrder._SetState(self, OrderState.Finished)
  end
end

function CurtainCallOrder:RefreshRequirements(bCalcRemoveItems)
  self.m_requirements = {}
  self.m_mapRequirementsInCobweb = {}
  self.m_mapPdRequirements = {}
  local rewardScore = 0
  local itemScore
  if bCalcRemoveItems then
    self.m_arrRemoveItems = {}
    self.m_arrToStorePdItems = {}
    self.m_arrStoredPdItems = nil
    self.finishScore = 0
    self.m_arrCostInfo = {}
  end
  local clearOrders = self.m_boardModel:GetOrders(OrderType.Clear)
  local mapClearOrderRequirements = {}
  if not Table.IsEmpty(clearOrders) then
    local arrRequirements
    for _, order in pairs(clearOrders) do
      arrRequirements = order:GetRequirements()
      for _, itemType in ipairs(arrRequirements) do
        mapClearOrderRequirements[itemType] = (mapClearOrderRequirements[itemType] or 0) + 1
      end
    end
  end
  local mapSaveChain2Level = {}
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BingoCurtainCall) then
    local bingoRequirements = NoCDTrainModel.GetCurOrderRequirements(self.m_boardModel:GetGameMode()) or {}
    for itemType, _ in pairs(bingoRequirements) do
      mapSaveChain2Level[GM.ItemDataModel:GetChainId(itemType)] = math.max(mapSaveChain2Level[GM.ItemDataModel:GetChainId(itemType)] or 0, GM.ItemDataModel:GetChainLevel(itemType))
    end
  end
  local param = GM.ConfigModel:ParseGeneralConf(EGeneralConfType.CurtainCallOrderRewardFactor)
  local itemScoreFactor = param and tonumber(param) or 0.7
  self.m_boardModel:FilterItems(function(item)
    local itemCobweb = item:GetComponent(ItemCobweb)
    local itemCode
    if itemCobweb then
      itemCode = itemCobweb:GetInnerItemCode()
    else
      itemCode = item:GetCode()
    end
    local itemPick = item:GetComponent(ItemPick)
    local choosedCode = itemPick and itemPick:GetChoosedCode()
    if itemPick and choosedCode ~= nil and GM.ItemDataModel:GetChainId(choosedCode) == self.m_pdChainId then
      itemScore = item:GetComponent(ItemSpread):GetItemRestNumber() * itemPick:GetCurtainCallScore()
      rewardScore = rewardScore + itemScore
      if bCalcRemoveItems then
        table.insert(self.m_arrRemoveItems, item)
        self.finishScore = self.finishScore + itemScore
        table.insert(self.m_arrCostInfo, string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s", itemCode, 0, itemScore, 0, 0, 0))
        if self.m_mapPickBox == nil then
          self.m_mapPickBox = {
            [itemCode] = {}
          }
        elseif self.m_mapPickBox[itemCode] == nil then
          self.m_mapPickBox[itemCode] = {}
        end
        if self.m_mapPickBox[itemCode][choosedCode] == nil then
          self.m_mapPickBox[itemCode][choosedCode] = 1
        else
          self.m_mapPickBox[itemCode][choosedCode] = self.m_mapPickBox[itemCode][choosedCode] + 1
        end
      end
    end
    if not string.match(itemCode, ItemCodePrefix.MainItem) and not string.match(itemCode, ItemCodePrefix.MainGenerator) then
      return false
    end
    local chainId = GM.ItemDataModel:IsItemExist(itemCode) and GM.ItemDataModel:GetChainId(itemCode) or nil
    if chainId == self.m_pdChainId then
      if not itemCobweb then
        self.m_mapPdRequirements[itemCode] = (self.m_mapPdRequirements[itemCode] or 0) + 1
        if bCalcRemoveItems then
          table.insert(self.m_arrToStorePdItems, item)
          table.insert(self.m_arrCostInfo, string.format("id:%s", itemCode))
        end
      end
    elseif GM.ItemDataModel:GetChainGenerator(chainId) == self.m_pdChainId then
      if itemCobweb then
        self.m_mapRequirementsInCobweb[itemCode] = (self.m_mapRequirementsInCobweb[itemCode] or 0) + 1
        itemScore = GM.MainBoardModel:GetItemScoreByUnlockGen(itemCode) or 0
        rewardScore = rewardScore + itemScore * itemScoreFactor
      elseif mapClearOrderRequirements[itemCode] and 0 < mapClearOrderRequirements[itemCode] then
        mapClearOrderRequirements[itemCode] = mapClearOrderRequirements[itemCode] - 1
        return false
      elseif mapSaveChain2Level[chainId] and mapSaveChain2Level[chainId] >= GM.ItemDataModel:GetChainLevel(itemCode) then
        return false
      else
        table.insert(self.m_requirements, itemCode)
        itemScore = item.itemScore or 0
        rewardScore = rewardScore + itemScore * itemScoreFactor
      end
      if bCalcRemoveItems then
        table.insert(self.m_arrRemoveItems, item)
        self.finishScore = self.finishScore + itemScore
        table.insert(self.m_arrCostInfo, string.format("id:%s,e:%s,fs:%s,sg:%s,bg:%s,s:%s", itemCode, item.costEnergy, item.freeScore, item.shopGemCost, item.bubbleGemCost, item.itemScore))
      end
    end
    return false
  end)
  local storePdItems
  if self.m_boardModel.GetAllStoredItemsByChainId then
    storePdItems = self.m_boardModel:GetAllStoredItemsByChainId(self.m_pdChainId)
  end
  if not Table.IsEmpty(storePdItems) then
    for _, item in ipairs(storePdItems) do
      item.stored = true
      self.m_mapPdRequirements[item:GetCode()] = (self.m_mapPdRequirements[item:GetCode()] or 0) + 1
      if bCalcRemoveItems then
        table.insert(self.m_arrCostInfo, string.format("id:%s", item:GetCode()))
      end
    end
    if bCalcRemoveItems then
      self.m_arrStoredPdItems = storePdItems
    end
  end
  self.m_rewards = CurtainCallOrderCreator.CalcReward(self.m_boardModel:GetOrderModel(), rewardScore)
end

function CurtainCallOrder:ClearRequirements()
  self.m_requirements = {}
  self.m_rewards = {}
  self.m_mapRequirementsInCobweb = nil
  self.m_mapPdRequirements = nil
  self.m_mapPdRequirementsInCobweb = nil
  self.m_mapPickBox = {}
  if self.m_arrStoredPdItems then
    for _, item in ipairs(self.m_arrStoredPdItems) do
      item.stored = nil
    end
  end
end

function CurtainCallOrder:GetPickedBoxMap()
  return self.m_mapPickBox
end

function CurtainCallOrder:NeedPlayEnterAnimation()
  return self.m_bNeedPlayEnterAnimation
end

function CurtainCallOrder:SetNeedPlayEnterAnimation(bNeed)
  self.m_bNeedPlayEnterAnimation = bNeed
end

function CurtainCallOrder:SetStorePdSuccess(bSuccess)
  self.m_bStorePdSuccess = bSuccess
end

function CurtainCallOrder:IsStorePdSuccess()
  return self.m_bStorePdSuccess
end
