InventoryNewSlotCell = {}
InventoryNewSlotCell.__index = InventoryNewSlotCell

function InventoryNewSlotCell:Init(index)
  if GM.ConfigModel:CanInventoryShowMoreSlot() then
    self.m_frameRectTrans.sizeDelta = Vector2(205, 164)
    self.m_frameRectTrans:SetAnchoredPosY(-125.6)
    self.m_textRectTrans:SetAnchoredPosY(2)
  end
  local slotConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot)
  self.m_countText.text = slotConfig.UnlockCost[index]
end

function InventoryNewSlotCell:OnButtonClicked()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.InventoryConfirm, true) then
    local slotConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot)
    local cost = slotConfig.UnlockCost[GM.MainBoardModel:GetStoreSlotCount() + 1]
    GM.UIManager:OpenView(UIPrefabConfigName.GeneralGemConfirmWindow, ImageFileConfigName.icon_inventory_open, nil, "inventory_confirm_title", "inventory_confirm_desc", cost, function()
      self:_BuyNewSlot()
    end)
  else
    self:_BuyNewSlot()
  end
end

function InventoryNewSlotCell:_BuyNewSlot()
  if GM.MainBoardModel:BuyStoreSlot() then
    return
  end
  local slotConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot)
  local cost = slotConfig.UnlockCost[GM.MainBoardModel:GetStoreSlotCount() + 1]
  local gems = GM.PropertyDataManager:GetPropertyNum(EPropertyType.Gem)
  UIHelper.OnLackGem(cost - gems, EGemCostScene.Inventory)
end
