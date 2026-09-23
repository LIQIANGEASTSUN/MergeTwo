ItemModelHelper = {}

function ItemModelHelper.GetSkipInfo(itemModel)
  if itemModel == nil then
    return false, nil
  end
  local itemTransform = itemModel:GetComponent(ItemTransform)
  if itemTransform ~= nil and itemTransform:GetDuration() ~= nil then
    return true, itemTransform:GetSpeedUpCost()
  end
  local itemSpread = itemModel:GetComponent(ItemSpread)
  if itemSpread ~= nil and (itemSpread:GetState() == ItemSpreadState.Initializing or itemSpread:GetState() == ItemSpreadState.Opening or itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() == 0 and not itemSpread:IsDisposable()) then
    return true, itemSpread:GetSpeedUpCost()
  end
  return false, nil
end
