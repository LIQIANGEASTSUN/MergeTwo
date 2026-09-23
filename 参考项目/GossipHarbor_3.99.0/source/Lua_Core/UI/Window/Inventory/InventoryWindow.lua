InventoryWindow = setmetatable({}, BaseWindow)
InventoryWindow.__index = InventoryWindow
InventoryWindow.SlotsPerRow = 4
InventoryWindow.ItemCodeEmpty = 0
InventoryWindow.ItemCodeNewSlot = 1

function InventoryWindow:Init(initFunc)
  local slotConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.InventorySlot)
  if GM.ConfigModel:CanInventoryShowMoreSlot() then
    self.m_contentVLayoutGroup.spacing = -55
    self.m_contentVLayoutGroup.padding.top = -40
  end
  self.m_rows = {}
  for i = 1, slotConfig.MaxNumber // InventoryWindow.SlotsPerRow do
    local gameObject = Object.Instantiate(self.m_rowPrefab, self.m_scrollViewContent)
    local row = gameObject:GetLuaTable()
    row:Init()
    table.insert(self.m_rows, row)
  end
  self.m_rowHeight = self.m_rowPrefab.transform.rect.height
  self:UpdateContent()
  if initFunc then
    initFunc(self)
  end
  self.m_bFactoryOpen = GM.MainBoardModel:IsGeneratorFactoryOpen()
  if self.m_bFactoryOpen then
    self.m_tabViewLuaTable:Init(function(tabKey)
      self:_OnTabSelected(tabKey)
      GM.BIManager:LogAction(EBIType.GeneratorFactoryTapTabButton, tabKey)
    end, InventoryWindowTabType.Inventory)
    self.m_genFactoryContentLua = self.m_genFactoryContentGo:GetLuaTable()
    self.m_genFactoryContentLua:Init()
    self:_UpdateGeneratorFactoryTabRedTip()
  else
    self:_OnTabSelected(InventoryWindowTabType.Inventory)
  end
  UIUtil.SetActive(self.m_tabViewLuaTable.transform.gameObject, self.m_bFactoryOpen)
  UIUtil.SetActive(self.m_6_1Go, self.m_bFactoryOpen)
  UIUtil.SetActive(self.m_6Go, not self.m_bFactoryOpen)
  UIUtil.SetActive(self.m_7_1Go, self.m_bFactoryOpen)
  UIUtil.SetActive(self.m_7_btGo, not self.m_bFactoryOpen)
  UIUtil.SetActive(self.m_8_1Go, self.m_bFactoryOpen)
  UIUtil.SetActive(self.m_8Go, not self.m_bFactoryOpen)
  self:LogWindowAction(EBIType.UIActionType.Open, {
    EBIReferType.UserClick
  })
end

function InventoryWindow:AddEventListener()
  EventDispatcher.AddListener(EEventType.InventoryNewSlot, self, self._OnNewSlotOpen)
  EventDispatcher.AddListener(EEventType.InventoryItemUpdate, self, self.UpdateContent)
  EventDispatcher.AddListener(EEventType.GeneratorFactoryTabButtonRedUpdate, self, self._UpdateGeneratorFactoryTabRedTip)
  EventDispatcher.AddListener(EEventType.GeneratorFactoryStateChanged, self, self._UpdateGeneratorFactoryState)
  EventDispatcher.AddListener(EEventType.CardItemStateChanged, self, self.Close)
end

function InventoryWindow:RemoveEventListener()
  EventDispatcher.RemoveTarget(self)
end

function InventoryWindow:_OnTabSelected(tabKey)
  self.m_currentTabKey = tabKey
  UIUtil.SetActive(self.m_inventoryContentGo, self.m_currentTabKey == InventoryWindowTabType.Inventory)
  UIUtil.SetActive(self.m_genFactoryContentGo, self.m_currentTabKey == InventoryWindowTabType.GeneratorFactory)
  local titleKey = self.m_currentTabKey == InventoryWindowTabType.Inventory and "inventory_title" or "generator_factory_title"
  self.m_titleText.text = GM.GameTextModel:GetText(titleKey)
  if self.m_currentTabKey == InventoryWindowTabType.Inventory then
    self.m_inventoryContentCanvasGroup.alpha = 0
    self.m_inventoryContentCanvasGroup:DOFade(1, 0.3):SetDelay(0.1)
  else
    self.m_genFactoryContentCanvasGroup.alpha = 0
    self.m_genFactoryContentCanvasGroup:DOFade(1, 0.3):SetDelay(0.1)
  end
  if self.m_genFactoryContentLua then
    if self.m_currentTabKey == InventoryWindowTabType.GeneratorFactory then
      self.m_genFactoryContentLua:RestartPrompt()
      EventDispatcher.DispatchEvent(EEventType.GeneratorFactoryTabGenButton)
    else
      self.m_genFactoryContentLua:CancelPrompt()
    end
  end
end

function InventoryWindow:CancelPrompt()
  self.m_genFactoryContentLua:CancelPrompt()
end

function InventoryWindow:UpdateContent()
  self:_ResetItems()
  local inventoryCap = GM.MainBoardModel:GetStoreSlotCount()
  self:_SetItem(inventoryCap + 1, InventoryWindow.ItemCodeNewSlot)
  EventDispatcher.DispatchEvent(EEventType.InventoryWindowUpdate)
end

function InventoryWindow:_SetItem(index, itemCode)
  local row = self:GetRowIndex(index)
  local column = (index - 1) % InventoryWindow.SlotsPerRow + 1
  if self.m_rows[row] ~= nil then
    self.m_rows[row]:SetItem(column, itemCode, index)
  end
end

function InventoryWindow:_OnNewSlotOpen()
  local slotCount = GM.MainBoardModel:GetStoreSlotCount()
  self:_SetItem(slotCount, InventoryWindow.ItemCodeEmpty)
  self:_SetItem(slotCount + 1, InventoryWindow.ItemCodeNewSlot)
end

function InventoryWindow:_ResetItems()
  local slotCount = GM.MainBoardModel:GetStoreSlotCount()
  for i = 1, slotCount do
    local item = GM.MainBoardModel:GetStoredItem(i)
    if item ~= nil then
      self:_SetItem(i, item:GetCode())
    else
      self:_SetItem(i, InventoryWindow.ItemCodeEmpty)
    end
  end
end

function InventoryWindow:GetItemCellByCode(code)
  for _, row in ipairs(self.m_rows) do
    local itemGo = row:GetItemByCode(code)
    if itemGo ~= nil then
      return itemGo
    end
  end
end

function InventoryWindow:SetScrollActive(enable)
  self.m_scrollView.enabled = enable
end

function InventoryWindow:GetRowIndex(index)
  return (index - 1) // InventoryWindow.SlotsPerRow + 1
end

function InventoryWindow:GetColumnIndex(index)
  return (index - 1) % InventoryWindow.SlotsPerRow + 1
end

function InventoryWindow:TryLocateRow(rowIndex)
  if not rowIndex or rowIndex <= 4 then
    return
  end
  self.m_scrollViewContent.transform.anchoredPosition = Vector2(0, (rowIndex - 4) * self.m_rowHeight)
end

function InventoryWindow:TryPlayCellScaleAnimation(cellIndexList)
  if Table.IsEmpty(cellIndexList) or self.gameObject:IsNull() then
    return
  end
  for _, cellIndex in ipairs(cellIndexList) do
    local rowIndex = self:GetRowIndex(cellIndex)
    if self.m_rows and self.m_rows[rowIndex] then
      local columnIndex = self:GetColumnIndex(cellIndex)
      local cellGo = self.m_rows[rowIndex]:GetCellGameObject(columnIndex)
      if cellGo then
        local inventoryCell = cellGo:GetLuaTable()
        if inventoryCell and inventoryCell.PlayTapAnimation then
          inventoryCell:PlayTapAnimation(0.2)
        end
      end
    end
  end
end

function InventoryWindow:_UpdateGeneratorFactoryTabRedTip()
  if self.m_tabViewLuaTable == nil then
    return
  end
  local genFactoryLua = self.m_genFactoryContentGo:GetLuaTable()
  local bRedTip = genFactoryLua:IsRedPointTip()
  self.m_tabViewLuaTable:UpdateTabRedTip(InventoryWindowTabType.GeneratorFactory, bRedTip)
  local sceneView = GM.UIManager:GetOpenedTopViewByType(EViewType.SceneView)
  local inventoryBtn = sceneView:GetHudButton(ESceneViewHudButtonKey.Inventory)
  inventoryBtn:UpdateRedPoint(bRedTip)
end

function InventoryWindow:_UpdateGeneratorFactoryState()
  local bOpen = GM.MainBoardModel:IsGeneratorFactoryOpen()
  if self.m_bFactoryOpen ~= bOpen then
    self:Close()
  end
end

function InventoryWindow:AddDisplayRewards(rewards)
  self.m_rewards = self.m_rewards or {}
  self.m_rewards = RewardApi.MergeRewards(self.m_rewards, rewards)
end

function InventoryWindow:OnCloseFinish()
  BaseWindow.OnCloseFinish(self)
  if not Table.IsEmpty(self.m_rewards) then
    GM.UIManager:OpenView(UIPrefabConfigName.RewardWindow, {
      arrRewards = self.m_rewards
    })
  end
end

function InventoryWindow:GetGenFactoryTabButtonTransf()
  return self.m_genFactoryRectTrans
end

function InventoryWindow:GetGenFactoryDetailPageTransf()
  return self.m_genFactoryDetailPageRectTrans
end
