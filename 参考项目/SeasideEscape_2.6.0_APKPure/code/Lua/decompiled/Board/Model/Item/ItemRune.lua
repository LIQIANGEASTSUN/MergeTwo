ItemRune = setmetatable({canMove = false}, BaseItemComponent)
ItemRune.__index = ItemRune

function ItemRune.Create(innerItemCode, runeCode)
  local itemRune = setmetatable({}, ItemRune)
  itemRune:Init(innerItemCode, runeCode)
  return itemRune
end

function ItemRune:Init(innerItemCode, runeCode)
  self.m_innerItemCode = innerItemCode
  self.m_runeCode = runeCode
end

function ItemRune:GetRuneCode()
  return self.m_runeCode
end

function ItemRune:OnShock()
  self.m_bUnlocked = true
  self:_Disappear()
end

function ItemRune:OnTap()
  if not self.m_bUnlocked then
    GM.UIManager:ShowPromptWithKey("rune_unlock_tip")
  end
end

function ItemRune:_Disappear()
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode)
  boardModel.event:Call(BoardEventType.DissolveItem, {
    Source = self.m_itemModel,
    New = newItem
  })
end
