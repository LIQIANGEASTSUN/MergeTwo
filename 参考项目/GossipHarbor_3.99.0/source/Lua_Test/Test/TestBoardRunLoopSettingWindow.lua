TestBoardRunLoopSettingWindow = setmetatable({
  sortingOrder = ESpecialViewSortingOrder.TestWindow,
  canClickWindowMask = true
}, BaseWindow)
TestBoardRunLoopSettingWindow.__index = TestBoardRunLoopSettingWindow

function TestBoardRunLoopSettingWindow:Init(defaultProbability, defaultBCacheFirst, defaultCollectProbability, boardRunView)
  self.m_defaultProbabilityInput.text = defaultProbability
  self.m_defaultCacheToggle.isOn = defaultBCacheFirst
  self.m_defaultProbability = defaultProbability
  self.m_defaultBCacheFirst = defaultBCacheFirst
  self.m_defaultCollectProbability = defaultCollectProbability or 100
  self.m_defaultCollectProbInput.text = self.m_defaultCollectProbability
  self.m_boardRunView = boardRunView
  local loopSetting = PlayerPrefs.GetString("TestBoardRunLoopSetting")
  local loopSettingJson = json.decode(loopSetting)
  self:InitSettingCellContent(loopSettingJson)
end

function TestBoardRunLoopSettingWindow:InitSettingCellContent(loopSettingJson)
  if not loopSettingJson then
    return
  end
  local len = #loopSettingJson or 0
  for i = 1, len do
    local setting = loopSettingJson[i]
    if setting then
      local cellObj = GameObject.Instantiate(self.m_settingCellOrigin, self.m_contentRecTransform)
      cellObj:SetActive(true)
      local cellTable = cellObj:GetLuaTable()
      cellTable:Init(setting, i, self)
    end
  end
  self.m_addSettingGo.transform:SetSiblingIndex(self.m_contentRecTransform.childCount - 1)
end

function TestBoardRunLoopSettingWindow:OnAddSettingButtonClicked()
  local setting = {
    count = 10,
    probability = self.m_defaultProbability,
    bCacheFirst = self.m_defaultBCacheFirst,
    collectProbability = self.m_defaultCollectProbability
  }
  local cellObj = GameObject.Instantiate(self.m_settingCellOrigin, self.m_contentRecTransform)
  cellObj:SetActive(true)
  local cellTable = cellObj:GetLuaTable()
  cellTable:Init(setting, self)
  self.m_addSettingGo.transform:SetSiblingIndex(self.m_contentRecTransform.childCount - 1)
end

function TestBoardRunLoopSettingWindow:OnDefaultProbInputChanged()
  local inputValue = tonumber(self.m_defaultProbabilityInput.text) or 0
  if 100 < inputValue then
    inputValue = 100
  end
  self.m_defaultProbability = inputValue
  self.m_defaultProbabilityInput.text = inputValue
end

function TestBoardRunLoopSettingWindow:OnDefaultCollectProbInputChanged()
  local inputValue = tonumber(self.m_defaultCollectProbInput.text) or 0
  if 100 < inputValue then
    inputValue = 100
  end
  self.m_defaultCollectProbability = inputValue
  self.m_defaultCollectProbInput.text = inputValue
end

function TestBoardRunLoopSettingWindow:OnDefaultCacheToggleClicked()
  self.m_defaultBCacheFirst = self.m_defaultCacheToggle.isOn
end

function TestBoardRunLoopSettingWindow:OnSaveButtonClicked()
  local loopSettingJson = {}
  local childrenCount = self.m_contentRecTransform.childCount
  for i = 0, childrenCount - 2 do
    local cellObj = self.m_contentRecTransform:GetChild(i).gameObject
    local cellTable = cellObj:GetLuaTable()
    if cellTable then
      local setting = cellTable:GetSetting()
      if setting then
        if setting.collectProbability == nil then
          setting.collectProbability = self.m_defaultCollectProbability
        end
        table.insert(loopSettingJson, setting)
      end
    end
  end
  PlayerPrefs.SetString("TestBoardRunLoopSetting", json.encode(loopSettingJson))
  self.m_boardRunView:SetProbabilityAndCache(self.m_defaultProbability, self.m_defaultBCacheFirst, self.m_defaultCollectProbability)
  self:Close()
end

function TestBoardRunLoopSettingWindow:OnClearButtonClicked()
  self.m_defaultProbabilityInput.text = 0
  self.m_defaultBCacheFirst = false
  self.m_defaultProbability = 0
  self.m_defaultCacheToggle.isOn = false
  local childrenCount = self.m_contentRecTransform.childCount
  for i = 0, childrenCount - 2 do
    local cellObj = self.m_contentRecTransform:GetChild(i).gameObject
    GameObject.Destroy(cellObj)
  end
end

TestBoardRunLoopSettingCell = {}
TestBoardRunLoopSettingCell.__index = TestBoardRunLoopSettingCell

function TestBoardRunLoopSettingCell:Init(setting, index, parent)
  self.m_setting = setting
  self.m_index = index
  self.m_parent = parent
  if self.m_setting.collectProbability == nil then
    self.m_setting.collectProbability = 100
  end
  self.m_countInput.text = setting.count
  self.m_probInput.text = setting.probability
  self.m_cacheToggle.isOn = setting.bCacheFirst
  self.m_collectProbInput.text = setting.collectProbability
end

function TestBoardRunLoopSettingCell:OnCountInputChanged()
  local inputValue = tonumber(self.m_countInput.text) or 0
  if inputValue <= 0 then
    inputValue = 1
  end
  self.m_setting.count = inputValue
  self.m_countInput.text = inputValue
end

function TestBoardRunLoopSettingCell:OnProbInputChanged()
  local inputValue = tonumber(self.m_probInput.text) or 0
  if 100 < inputValue then
    inputValue = 100
  end
  self.m_setting.probability = inputValue
  self.m_probInput.text = inputValue
end

function TestBoardRunLoopSettingCell:OnCollectProbInputChanged()
  local inputValue = tonumber(self.m_collectProbInput.text) or 0
  if 100 < inputValue then
    inputValue = 100
  end
  self.m_setting.collectProbability = inputValue
  self.m_collectProbInput.text = inputValue
end

function TestBoardRunLoopSettingCell:OnCacheToggleClicked()
  self.m_setting.bCacheFirst = self.m_cacheToggle.isOn
end

function TestBoardRunLoopSettingCell:OnDeleteButtonClicked()
  GameObject.Destroy(self.gameObject)
end

function TestBoardRunLoopSettingCell:GetSetting()
  return self.m_setting
end
