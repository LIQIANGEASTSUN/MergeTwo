RemoveBubbleConfirmWindow = setmetatable({}, BaseWindow)
RemoveBubbleConfirmWindow.__index = RemoveBubbleConfirmWindow

function RemoveBubbleConfirmWindow:BeforeOpenCheck(itemModel, itemComponent, confirmCallback)
  return itemModel:GetComponent(itemComponent) ~= nil
end

function RemoveBubbleConfirmWindow:Init(itemModel, itemComponent, confirmCallback)
  local itemBubble = itemModel:GetComponent(itemComponent)
  SpriteUtil.SetImage(self.m_bubbleImage, itemBubble:GetSpriteName())
  local innerSpriteName = GM.ItemDataModel:GetSpriteName(itemBubble:GetInnerItemCode())
  SpriteUtil.SetImage(self.m_itemImage, innerSpriteName)
  self.m_redButtonCallback = confirmCallback
  local cost, bSale, oriCost = itemBubble:GetBreakCost()
  UIUtil.SetActive(self.m_saleGo, bSale)
  self.m_itemComponent = itemComponent
end

function RemoveBubbleConfirmWindow:OnRedClick()
  if self.m_redButtonCallback then
    self.m_redButtonCallback(self.m_itemComponent)
  end
  self:OnCloseBtnClick()
end
