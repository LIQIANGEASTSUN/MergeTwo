InventoryWindowTabType = {Inventory = "1", GeneratorFactory = "2"}
InventoryTabButton = setmetatable({}, TabButton)
InventoryTabButton.__index = InventoryTabButton

function InventoryTabButton:Init(tabView, initKey)
  TabButton.Init(self, tabView, initKey)
  self:SetHighlightActive(self.m_strKey == initKey)
end

function InventoryTabButton:SetHighlightActive(active)
  local aniName = active and "tabButton_show" or "tabButton_hide"
  self.m_tabAnim:Play(aniName, 0, 0)
end

function InventoryTabButton:UpdateTabRedTip(strKey, bShow)
  if self.m_strKey == strKey then
    UIUtil.SetActive(self.m_exclamationGo, bShow)
  end
end

InventoryTabView = setmetatable({}, TabView)
InventoryTabView.__index = InventoryTabView

function InventoryTabView:UpdateTabRedTip(strKey, bShow)
  for _, button in ipairs(self.m_arrTabButtons) do
    button:UpdateTabRedTip(strKey, bShow)
  end
end
