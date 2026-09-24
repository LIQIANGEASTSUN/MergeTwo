ItemBoxSimilarUtility = {}

function ItemBoxSimilarUtility.IsBoxSimilarItem(type)
  return GM.BoxItemModel:IsBoxItem(type) or GM.WheelItemModel:IsWheelItem(type)
end

function ItemBoxSimilarUtility.GetItemIcon(type)
  if GM.BoxItemModel:IsBoxItem(type) then
    return GM.BoxItemModel:GetBoxItemIcon(type)
  elseif GM.WheelItemModel:IsWheelItem(type) then
    return GM.WheelItemModel:GetWheelItemIcon(type)
  end
end

function ItemBoxSimilarUtility.AcquireItemRewards(type, startPos)
  if GM.BoxItemModel:IsBoxItem(type) then
    GM.BoxItemModel:AcquireBoxItemRewards(type, startPos)
  elseif GM.WheelItemModel:IsWheelItem(type) then
    GM.WheelItemModel:AcquireWheelItemRewards(type)
  end
end

function ItemBoxSimilarUtility.GetItemDetailWindow(type)
  if GM.BoxItemModel:IsBoxItem(type) then
    return GM.BoxItemModel:GetBoxItemDetailWindow(type)
  elseif GM.WheelItemModel:IsWheelItem(type) then
    return GM.WheelItemModel:GetWheelItemDetailWindow(type)
  end
end
