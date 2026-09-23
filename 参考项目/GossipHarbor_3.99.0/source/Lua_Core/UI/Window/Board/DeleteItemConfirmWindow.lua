DeleteItemConfirmWindow = setmetatable({}, BaseWindow)
DeleteItemConfirmWindow.__index = DeleteItemConfirmWindow

function DeleteItemConfirmWindow:Init(itemModel, okCallback)
  self.m_titleText.text = GM.GameTextModel:GetText("sell_confirm_title")
  local price = itemModel:GetSellingPrice()
  if 0 < price then
    self.m_descText.text = GM.GameTextModel:GetText("sell_confirm_desc_sell")
    self.m_redText.text = GM.GameTextModel:GetText("btn_sell")
  else
    self.m_descText.text = GM.GameTextModel:GetText("sell_confirm_desc_remove")
    self.m_redText.text = GM.GameTextModel:GetText("btn_remove")
  end
  self.m_greenText.text = GM.GameTextModel:GetText("common_button_cancel")
  local spriteName = GM.ItemDataModel:GetSpriteName(itemModel:GetType())
  SpriteUtil.SetImage(self.m_itemImg, spriteName)
  self.m_redButtonCallback = okCallback
  self:LogWindowAction(EBIType.UIActionType.Open, {
    EBIReferType.UserClick
  }, itemModel:GetType())
end

function DeleteItemConfirmWindow:OnRedClick()
  if self.m_redButtonCallback then
    self.m_redButtonCallback()
  end
  self:Close()
end

function DeleteItemConfirmWindow:OnGreenClick()
  self:Close()
end
