TestBoardRunLogWindow = setmetatable({
  sortingOrder = ESpecialViewSortingOrder.TestWindow,
  canClickWindowMask = true
}, BaseWindow)
TestBoardRunLogWindow.__index = TestBoardRunLogWindow

function TestBoardRunLogWindow:Init(activityType)
  local oldLog = PlayerPrefs.GetString("TestBoardRunLog")
  local oldLogJson = json.decode(oldLog)
  if not oldLogJson then
    return
  end
  local value = 0
  local options = CS.System.Collections.Generic.List(CS.System.String)()
  for activity, _ in pairs(oldLogJson) do
    options:Add(activity)
    if activityType and activity == activityType then
      value = options.Count - 1
    end
  end
  self.m_activityDropdownOptions = options
  self.m_activityDropdown:AddOptions(options)
  self.m_activityDropdown.value = value
  self:ShowActivityLog()
end

function TestBoardRunLogWindow:ShowActivityLog()
  local oldLog = PlayerPrefs.GetString("TestBoardRunLog")
  local oldLogJson = json.decode(oldLog)
  self.m_activity = self.m_activityDropdown.captionText.text
  self:UpdateLog(oldLogJson[self.m_activity] or {})
end

function TestBoardRunLogWindow:OnActivitySelected()
  self.m_activity = self.m_activityDropdown.captionText.text
  self:ShowActivityLog()
end

function TestBoardRunLogWindow:OnCopyButtonClicked()
  local oldLog = PlayerPrefs.GetString("TestBoardRunLog")
  local oldLogJson = json.decode(oldLog)
  self.m_activity = self.m_activityDropdown.captionText.text
  local rawText = table.concat(oldLogJson[self.m_activity] or {}, [[


]])
  local cleanText = string.gsub(rawText, "<[^>]+>", "")
  CS.UnityEditor.EditorGUIUtility.systemCopyBuffer = cleanText
end

function TestBoardRunLogWindow:OnClearButtonClicked()
  local oldLog = PlayerPrefs.GetString("TestBoardRunLog")
  local oldLogJson = json.decode(oldLog)
  oldLogJson[self.m_activity] = nil
  PlayerPrefs.SetString("TestBoardRunLog", json.encode(oldLogJson))
  self:UpdateLog({})
end

function TestBoardRunLogWindow:UpdateLog(activityLog)
  local childCount = self.m_contentRecTransform.childCount
  for i = childCount - 1, 0, -1 do
    local child = self.m_contentRecTransform:GetChild(i)
    Object.Destroy(child.gameObject)
  end
  for i = #activityLog, 1, -1 do
    local log = activityLog[i]
    local cellObj = GameObject.Instantiate(self.m_logCellOrigin, self.m_contentRecTransform)
    cellObj:SetActive(true)
    local cellTable = cellObj:GetLuaTable()
    cellTable:Init(log)
  end
end

TestBoardRunLogCell = {}
TestBoardRunLogCell.__index = TestBoardRunLogCell

function TestBoardRunLogCell:Init(text)
  self.m_log.text = text
end
