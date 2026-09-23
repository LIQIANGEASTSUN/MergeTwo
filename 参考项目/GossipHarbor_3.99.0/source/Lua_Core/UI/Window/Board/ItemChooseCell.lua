ItemChooseCell = {}
ItemChooseCell.__index = ItemChooseCell
ItemChooseCell.RewardNumber = 3

function ItemChooseCell:Init(chooseWindow, index, choiceItemType)
  self.m_chooseWindow = chooseWindow
  self.m_index = index
  local spriteName = GM.ItemDataModel:GetSpriteName(choiceItemType)
  SpriteUtil.SetImage(self.m_iconImage, spriteName, true)
end

function ItemChooseCell:OnClicked()
  self.m_chooseWindow:OnCellClicked(self.m_index)
end

function ItemChooseCell:SetSelected(selected)
  self.m_selectedBackgroundGo:SetActive(selected)
  self.m_unselectedBackgroundGo:SetActive(not selected)
  self.m_selectedGo:SetActive(selected)
end
