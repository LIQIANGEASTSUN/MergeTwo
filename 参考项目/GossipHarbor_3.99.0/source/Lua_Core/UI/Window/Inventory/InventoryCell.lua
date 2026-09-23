InventoryCell = {}
InventoryCell.__index = InventoryCell

function InventoryCell:Init(itemCode, index)
  self.m_index = index
  local spriteName = GM.ItemDataModel:GetSpriteName(itemCode)
  SpriteUtil.SetImage(self.m_itemImage, spriteName, true)
end

function InventoryCell:OnItemClicked()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  if GM.MainBoardModel:RetrieveStoredItem(self.m_index) then
    EventDispatcher.DispatchEvent(EEventType.InventoryItemUpdate)
  else
    local targetPosition = self.m_itemImage.transform.position + Vector3(0, 100, 0)
    local screenPosition = PositionUtil.UICameraWorld2Screen(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_board_full", screenPosition)
  end
  EventDispatcher.DispatchEvent(EEventType.InventoryItemClicked)
end

function InventoryCell:PlayTapAnimation(range)
  if not self.m_itemImage or self.m_itemImage:IsNull() then
    return
  end
  local transform = self.m_itemImage.transform
  local sequence = DOTween.Sequence()
  sequence:Append(transform:DOScale(1 - range, 0.1))
  sequence:Append(transform:DOScale(1 + range, 0.2))
  sequence:Append(transform:DOScale(1, 0.2))
  sequence:Append(transform:DOScale(1 + range / 2, 0.2))
  sequence:Append(transform:DOScale(1, 0.2))
end
