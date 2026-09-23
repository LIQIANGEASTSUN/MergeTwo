InventoryRow = {}
InventoryRow.__index = InventoryRow

function InventoryRow:Init()
  self.m_items = {}
  local h = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.InventoryMoreSlot, true) and 250 or 300
  self.gameObject.transform.sizeDelta = Vector2(820, h)
end

function InventoryRow:SetItem(column, itemCode, index)
  local itemObject
  if itemCode == InventoryWindow.ItemCodeEmpty then
    itemObject = Object.Instantiate(self.m_emptyCellPrefab, self.m_content)
  elseif itemCode == InventoryWindow.ItemCodeNewSlot then
    itemObject = Object.Instantiate(self.m_newSlotCellPrefab, self.m_content)
    itemObject:GetLuaTable():Init(index)
  else
    itemObject = Object.Instantiate(self.m_cellPrefab, self.m_content)
    itemObject:GetLuaTable():Init(itemCode, index)
  end
  if itemObject ~= nil then
    local localPosition = itemObject.transform.localPosition
    itemObject.transform.anchoredPosition = Vector2(205 * (column - 1), 0)
  end
  if self.m_items[column] ~= nil then
    self.m_items[column]:RemoveSelf()
  end
  self.m_items[column] = itemObject
  if not self.m_itemCodes then
    self.m_itemCodes = {}
  end
  self.m_itemCodes[column] = itemCode
end

function InventoryRow:GetItemByCode(code)
  if Table.IsEmpty(self.m_itemCodes) then
    return
  end
  for column, itemCode in pairs(self.m_itemCodes) do
    if code == itemCode then
      return self.m_items[column]
    end
  end
end

function InventoryRow:GetCellGameObject(columnIndex)
  return self.m_items and self.m_items[columnIndex]
end
