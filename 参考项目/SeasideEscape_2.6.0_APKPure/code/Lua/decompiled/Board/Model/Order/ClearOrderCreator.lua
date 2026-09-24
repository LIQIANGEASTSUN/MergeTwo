ClearOrderHelper = {}

function ClearOrderHelper.CalcReward(orderModel, config, score)
  local coinConstant = GM.MapDataModel:IsAllSlotBuildFinished() and config.coinMaxLevelConstant or config.coinConstant
  return {
    [PROPERTY_TYPE] = EPropertyType.Gold,
    [PROPERTY_COUNT] = math.floor(coinConstant * orderModel:GetLevel() * score // 5 * 5)
  }
end

local honeyChains = {
  [ItemChain.Honey1] = true,
  [ItemChain.Honey2] = true,
  [ItemChain.Honey3] = true,
  [ItemChain.Honey4] = true,
  [ItemChain.Honey5] = true
}

function ClearOrderHelper.Filter(item)
  local type = item:GetType()
  return GM.ItemDataModel:IsInOrder(type) and GM.ItemDataModel:IsItemMaxLevel(type) and not honeyChains[GM.ItemDataModel:GetChainId(type)]
end

MainClearOrderCreator = {}

function MainClearOrderCreator.Create(orderModel, config, item, num)
  local score = orderModel:GetItemScoreByUnlockGen(item)
  if not score then
    return
  end
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.SunshineNewbie) then
    if item == "it1_1_12" then
      if not orderModel:IsFixedOrderFinished("newbie_50_1_8") then
        return nil
      end
    elseif item == "it2_1_13" then
      if not orderModel:IsFixedOrderFinished("newbie_70_1_8") then
        return nil
      end
    elseif item == "it3_2_9" and not orderModel:IsFixedOrderFinished("newbie_60_1_8") then
      return nil
    end
  end
  local requireNum
  if score >= config.minScore1 and num >= config.itemNum1 then
    requireNum = config.itemNum1
  elseif score * config.itemNum2 > config.minScore2 and num >= config.itemNum2 then
    requireNum = config.itemNum2
  elseif score > config.minScore3 and num >= config.itemNum3 then
    requireNum = config.itemNum3
  else
    return nil
  end
  local items = {}
  for i = 1, requireNum do
    items[i] = item
  end
  local totalScore = score * requireNum
  return MainOrder.Create(orderModel:GetBoardModel(), "clo_" .. item, items, {
    ClearOrderHelper.CalcReward(orderModel, config, totalScore)
  }, totalScore, OrderType.Clear, orderModel:GetAvatarId(), GM.GameModel:GetServerTime())
end
