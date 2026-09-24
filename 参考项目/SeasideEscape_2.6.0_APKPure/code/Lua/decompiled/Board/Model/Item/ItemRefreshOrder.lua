ItemRefreshOrder = setmetatable({}, BaseItemComponent)
ItemRefreshOrder.__index = ItemRefreshOrder

function ItemRefreshOrder.Create()
  local itemRefreshOrder = setmetatable({}, ItemRefreshOrder)
  itemRefreshOrder:Init()
  return itemRefreshOrder
end

function ItemRefreshOrder:Init()
end

function ItemRefreshOrder:OnTap()
  local boardView = MainBoardView.GetInstance()
  local orderArea = boardView and boardView:GetOrderArea()
  GM.UIManager:SetEventLock(true)
  TutorialHelper.SetMainOrderAreaLock(true)
  local canRefresh = orderArea:FocusOnRefreshableOrderCells(function(arrRefreshableOrderCell, cellNums)
    GM.UIManager:SetEventLock(false)
    TutorialHelper.SetMainOrderAreaLock(false)
    GM.UIManager:OpenView(UIPrefabConfigName.ItemRefreshOrderWindow, self.m_itemModel, arrRefreshableOrderCell, cellNums)
  end)
  if not canRefresh then
    GM.UIManager:SetEventLock(false)
    TutorialHelper.SetMainOrderAreaLock(false)
    GM.UIManager:ShowPromptWithKey("change_item_fail")
  end
end
