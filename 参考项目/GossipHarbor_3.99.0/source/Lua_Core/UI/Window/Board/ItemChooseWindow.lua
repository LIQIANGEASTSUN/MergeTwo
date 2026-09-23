ItemChooseWindow = setmetatable({}, BaseWindow)
ItemChooseWindow.__index = ItemChooseWindow

function ItemChooseWindow:Init(item)
  self.m_item = item
  local spriteName = GM.ItemDataModel:GetSpriteName(item:GetType())
  SpriteUtil.SetImage(self.m_iconImage, spriteName, true)
  self.m_cells = {}
  local itemChoose = item:GetComponent(ItemChoose)
  local choice = itemChoose:GetChoices()
  for index = 1, ItemChooseCell.RewardNumber do
    local cellObject = Object.Instantiate(self.m_cellPrefab, self.m_chooseArea)
    local cell = cellObject:GetLuaTable()
    cell:Init(self, index, choice[index])
    table.insert(self.m_cells, cell)
  end
end

function ItemChooseWindow:OnCellClicked(index)
  self.m_selectedIndex = index
  for i, cell in ipairs(self.m_cells) do
    cell:SetSelected(i == index)
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  self.m_selectGo:SetActive(true)
end

function ItemChooseWindow:OnSelectButtonClicked()
  self.m_selectGo:SetActive(false)
  self:Close()
  GM.MainBoardModel:ChooseItem(self.m_item, self.m_selectedIndex)
end
