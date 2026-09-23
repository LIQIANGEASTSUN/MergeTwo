UIBoardDeleteItemConfirmWindow = setmetatable({}, BaseWindow)
UIBoardDeleteItemConfirmWindow.__index = UIBoardDeleteItemConfirmWindow

function UIBoardDeleteItemConfirmWindow:Init(activityType, itemModel, okCallback, cancelCallback)
  self.m_titleText.text = GM.GameTextModel:GetText("sell_confirm_title")
  self.m_descText.text = GM.GameTextModel:GetText("item_delete_desc")
  self.m_redText.text = GM.GameTextModel:GetText("btn_remove")
  self.m_greenText.text = GM.GameTextModel:GetText("common_button_cancel")
  local spriteName = GM.ItemDataModel:GetSpriteName(itemModel:GetType())
  SpriteUtil.SetImage(self.m_itemImg, spriteName)
  self.m_redButtonCallback = okCallback
  self.m_greenButtonCallback = cancelCallback
  local ext = {
    activityType = activityType,
    itemType = itemModel:GetType()
  }
  self:LogWindowAction(EBIType.UIActionType.Open, {
    EBIReferType.UserClick
  }, ext)
end

function UIBoardDeleteItemConfirmWindow:OnRedClick()
  if self.m_redButtonCallback then
    self.m_redButtonCallback()
    self.m_greenButtonCallback = Function.Void
  end
  self:Close()
end

function UIBoardDeleteItemConfirmWindow:OnGreenClick()
  self:Close()
end

function UIBoardDeleteItemConfirmWindow:OnCloseFinish()
  self.m_greenButtonCallback()
  BaseWindow.OnCloseFinish(self)
end
