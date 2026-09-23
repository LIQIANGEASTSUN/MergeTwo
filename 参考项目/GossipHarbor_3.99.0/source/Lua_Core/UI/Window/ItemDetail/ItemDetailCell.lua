ItemDetailCell = {}
ItemDetailCell.__index = ItemDetailCell

function ItemDetailCell:Init(itemType, isProduceCell, hasArrow, forceShow, hasTipButton, spreadWeight, isWeightUp, tipBubbleLua, window)
  self.m_arrowImg.gameObject:SetActive(hasArrow)
  self.m_itemClickButton.enabled = isWeightUp ~= nil
  self.m_tipBubbleLua = tipBubbleLua
  if isWeightUp ~= nil then
    self.m_tipTextKey = isWeightUp and "generator_info_higher_hint" or "generator_info_new_hint"
    self.m_upgradeGo:SetActive(isWeightUp)
    self.m_newItemGo:SetActive(not isWeightUp)
  end
  if itemType and (GM.ItemDataModel:IsUnlocked(itemType) or forceShow) then
    self.m_bDisplay = true
    local spriteName = GM.ItemDataModel:GetSpriteName(itemType)
    SpriteUtil.SetImage(self.m_itemImg, spriteName, true)
    self.m_bgImg.sprite = isProduceCell and self.m_produceBgSprite or self.m_enableBgSprite
    self.m_arrowImg.sprite = self.m_enableArrowSprite
    self.m_itemTipButton.gameObject:SetActive(hasTipButton)
    self.m_itemTipButton:UpdateItemType(itemType, ItemDetailWindowMode.Normal)
  else
    self.m_itemTipButton.gameObject:SetActive(false)
  end
  self.m_window = window
  if window and window.GetCanShowItemCount then
    local num = window:GetCanShowItemCount(itemType)
    if 0 < num then
      UIUtil.SetActive(self.m_numGo, true)
      self.m_numText.text = num
    else
      UIUtil.SetActive(self.m_numGo, false)
    end
  else
    UIUtil.SetActive(self.m_numGo, false)
  end
  self.m_weightText.gameObject:SetActive(spreadWeight ~= nil)
  if spreadWeight ~= nil then
    self.m_weightText.text = spreadWeight
  end
  self.m_itemType = itemType
end

function ItemDetailCell:IsDisplayed()
  return self.m_bDisplay
end

function ItemDetailCell:InitAnonymous()
  self.m_arrowImg.gameObject:SetActive(false)
  self.m_itemTipButton.gameObject:SetActive(false)
  self.m_weightText.gameObject:SetActive(false)
end

function ItemDetailCell:_OnClick()
  if not self.m_tipBubbleLua or self.m_tipTextKey == nil then
    return
  end
  self.m_tipBubbleLua:Show(self.m_tipTextKey, self.gameObject.transform, -100, false, true)
end

function ItemDetailCell:OnTestAddClicked()
  if not GameConfig.IsTestMode() then
    return
  end
  if not self.m_itemType then
    GM.UIManager:ShowPrompt("itemType\228\184\186\231\169\186\239\188\140\230\151\160\230\179\149\230\183\187\229\138\160\230\163\139\229\173\144")
    return
  end
  GM.MainBoardModel:CacheItems({
    self.m_itemType
  }, CacheItemType.Type2)
  GM.UIManager:ShowPrompt("\230\183\187\229\138\160\230\163\139\229\173\144[" .. self.m_itemType .. "]\229\136\176\231\188\147\229\173\152\233\152\159\229\136\151\230\136\144\229\138\159")
end

function ItemDetailCell:OnNumButtonClicked()
  GM.BIManager:LogUI("ItemDetailCellClickNum", EBIType.UIActionType.Open, {
    EBIReferType.UserClick
  }, {
    it = self.m_itemType
  })
  if self.m_window then
    self.m_window:Close()
  end
  local itemMapBoard = GM.MainBoardModel:GetCodeCountMap(true, false, false)
  if itemMapBoard[self.m_itemType] and itemMapBoard[self.m_itemType] > 0 then
    local itemModels = TutorialHelper.GetItems(self.m_itemType)
    local boardView = MainBoardView.GetInstance()
    BaseBoardView.TryPlayTapAnimation(boardView, itemModels)
    return
  end
  local slotCount = GM.MainBoardModel:GetStoreSlotCount()
  local allItemIndex = {}
  for i = 1, slotCount do
    local item = GM.MainBoardModel:GetStoredItem(i)
    if item and item:GetCode() == self.m_itemType then
      table.insert(allItemIndex, i)
    end
  end
  if not Table.IsEmpty(allItemIndex) then
    GM.UIManager:OpenView(UIPrefabConfigName.InventoryWindow, function(inventoryWindow)
      local rowIndex = inventoryWindow:GetRowIndex(allItemIndex[1])
      inventoryWindow:TryLocateRow(rowIndex)
      GM.UIManager:SetEventLock(true, self)
      DelayExecuteFunc(function()
        GM.UIManager:SetEventLock(false, self)
        inventoryWindow:TryPlayCellScaleAnimation(allItemIndex)
      end, 0.7)
    end)
  end
end
