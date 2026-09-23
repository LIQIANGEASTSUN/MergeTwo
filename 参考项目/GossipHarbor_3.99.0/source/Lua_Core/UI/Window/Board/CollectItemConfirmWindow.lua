CollectItemConfirmWindow = setmetatable({}, BaseWindow)
CollectItemConfirmWindow.__index = CollectItemConfirmWindow

function CollectItemConfirmWindow:BeforeOpenCheck(itemModel, callback)
  return itemModel ~= nil and itemModel:GetComponent(ItemCollectable) ~= nil and itemModel:GetSpecialType() == ItemSpecialType.TipCollectable
end

function CollectItemConfirmWindow:Init(itemModel, callback)
  self.m_callback = callback
  self.m_itemModel = itemModel
  local itemType = itemModel:GetType()
  self.m_titleText.text = GM.GameTextModel:GetText("item_" .. itemType .. "_collect_name")
  self.m_descText.text = GM.GameTextModel:GetText("item_" .. itemType .. "_collect_desc")
  SpriteUtil.SetImage(self.m_itemImg, GM.ItemDataModel:GetSpriteName(itemType))
end

function CollectItemConfirmWindow:OnConfirmBtnClicked()
  self.m_bConfirmed = true
  self:Close()
end

function CollectItemConfirmWindow:OnCloseFinish()
  BaseWindow.OnCloseFinish(self)
  if self.m_callback then
    self.m_callback(self.m_bConfirmed)
  end
end
