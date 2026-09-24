ItemChainHelper = {}
local canBrotherChainItemIndex = {
  [51] = true,
  [52] = true,
  [61] = true,
  [62] = true,
  [63] = true,
  [201] = true,
  [202] = true,
  [221] = true,
  [122] = true,
  [222] = true,
  [231] = true,
  [132] = true,
  [241] = true,
  [242] = true,
  [225] = true,
  [226] = true,
  [151] = true,
  [251] = true,
  [263] = true,
  [262] = true,
  [261] = true,
  [264] = true
}

function ItemChainHelper.CanBalanceBrotherItem(itemCode)
  local itemIndex = GM.ItemDataModel:GetItemRewardIndex(itemCode) or 0
  return canBrotherChainItemIndex[itemIndex] == true
end

function ItemChainHelper.GetBrotherChainItems(itemCode, producer, orderModel)
  local itemIndex = GM.ItemDataModel:GetItemRewardIndex(itemCode) or 0
  if canBrotherChainItemIndex[itemIndex] ~= true then
    return {}
  end
  local itemsArray = {}
  local otherItemIndex
  for item, score in pairs(orderModel:GetItemScoresByGenerator(producer)) do
    otherItemIndex = GM.ItemDataModel:GetItemRewardIndex(item) or 0
    if otherItemIndex ~= itemIndex and canBrotherChainItemIndex[otherItemIndex] == true then
      itemsArray[#itemsArray + 1] = {code = item, score = score}
    end
  end
  return itemsArray
end
