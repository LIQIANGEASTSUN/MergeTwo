PropItemAccelerator = setmetatable({}, PropItemBase)
PropItemAccelerator.__index = PropItemAccelerator

function PropItemAccelerator:Init()
  self.m_mapAccInfo = {}
  self.m_mapAccDurationInfo = {}
  self.m_mapAccStoreInfo = {}
end

function PropItemAccelerator:LateInit()
  local durationInfo = GM.MiscModel:Get(EMiscKey.MainBoardAccDurationInfo)
  if not StringUtil.IsNilOrEmpty(durationInfo) then
    local accDurationInfo = json.decode(StringUtil.Replace(durationInfo, "@", ","))
    self.m_mapAccDurationInfo = accDurationInfo
  end
  local info = GM.MiscModel:Get(EMiscKey.MainBoardAccInfo)
  if not StringUtil.IsNilOrEmpty(info) then
    local accInfo = json.decode(StringUtil.Replace(info, "@", ","))
    self.m_mapAccInfo = accInfo
  end
  local storeInfo = GM.MiscModel:Get(EMiscKey.MainBoardAccStoreInfo)
  if not StringUtil.IsNilOrEmpty(storeInfo) then
    local accInfo = json.decode(StringUtil.Replace(storeInfo, "@", ","))
    self.m_mapAccStoreInfo = accInfo
    self.m_storeChange = true
  end
end

function PropItemAccelerator:UpdatePerSecond()
  if self.m_storeChange and GM.SceneManager:GetGameMode() == EGameMode.Main then
    WindowPopupHelper.AddWindowToPopupChainWithoutRepeat(UIPrefabConfigName.AcceleratorAnimWindow, self)
    self.m_storeChange = false
  end
  if Table.IsEmpty(self.m_mapAccInfo) then
    return
  end
  local change = false
  for type, v in pairs(self.m_mapAccInfo) do
    if v < GM.GameModel:GetServerTime() then
      self.m_mapAccInfo[type] = nil
      change = true
    end
  end
  if change then
    GM.MiscModel:Set(EMiscKey.MainBoardAccInfo, json.encode(self.m_mapAccInfo))
  end
end

function PropItemAccelerator:OnAcquired(time, type)
  if GM.ConfigModel:IsCDPropShowOpen() and not self.m_mapAccInfo[type] then
    self:StoreItem(time, type)
  else
    self:UseItem(time, type)
  end
end

function PropItemAccelerator:UseItem(time, type)
  self:UpdatePerSecond()
  local serverTime = GM.GameModel:GetServerTime()
  local currentExpireTime = self.m_mapAccInfo[type] or -1
  local newDuration = time
  if serverTime < currentExpireTime then
    local currentDuration = self.m_mapAccDurationInfo[type] or currentExpireTime - serverTime
    newDuration = newDuration + currentDuration
  end
  if self.m_mapAccInfo[type] then
    self.m_mapAccInfo[type] = self.m_mapAccInfo[type] + time
  else
    self.m_mapAccInfo[type] = serverTime + time
  end
  self.m_mapAccDurationInfo[type] = newDuration
  GM.MiscModel:Set(EMiscKey.MainBoardAccDurationInfo, json.encode(self.m_mapAccDurationInfo))
  GM.MiscModel:Set(EMiscKey.MainBoardAccInfo, json.encode(self.m_mapAccInfo))
  self:_RestoreStorage(type)
end

function PropItemAccelerator:UseStoredItem()
  for type, time in pairs(self.m_mapAccStoreInfo) do
    self:UseItem(time, type)
    EventDispatcher.DispatchEvent(EEventType.PropItemAcquired, EPropItemType.Accelerator)
  end
  self.m_mapAccStoreInfo = {}
  GM.MiscModel:Clear(EMiscKey.MainBoardAccStoreInfo)
end

function PropItemAccelerator:StoreItem(time, type)
  self.m_mapAccStoreInfo[type] = (self.m_mapAccStoreInfo[type] or 0) + time
  GM.MiscModel:Set(EMiscKey.MainBoardAccStoreInfo, json.encode(self.m_mapAccStoreInfo))
  self.m_storeChange = true
end

function PropItemAccelerator:UpdateStoreChange()
  self.m_storeChange = not Table.IsEmpty(self.m_mapAccStoreInfo)
end

function PropItemAccelerator:_RestoreStorage(type)
  GM.MainBoardModel:RestoreAccStorage(type)
end

function PropItemAccelerator:IsOn(itemModel)
  for type, time in pairs(self.m_mapAccInfo) do
    if StringUtil.StartWith(itemModel:GetType(), type) and time >= GM.GameModel:GetServerTime() then
      return true
    end
  end
  return false
end

function PropItemAccelerator:CanPopWindow()
  return not self:HasWindowPopped()
end

function PropItemAccelerator:HasWindowPopped()
  return GM.MiscModel:Get(EMiscKey.AccEffectPlayed) == "0"
end

function PropItemAccelerator:SetWindowPopped(bool)
  GM.MiscModel:Set(EMiscKey.AccEffectPlayed, bool and "0" or "1")
end

function PropItemAccelerator:GetDuration()
  local expireTime = 0
  local duration
  for type, time in pairs(self.m_mapAccInfo) do
    if time > expireTime then
      expireTime = time
      duration = self.m_mapAccDurationInfo[type]
    end
  end
  if not duration then
    duration = expireTime - GM.GameModel:GetServerTime()
    if duration < 0 then
      duration = 0
    end
  end
  return duration
end

function PropItemAccelerator:GetEndTime()
  local expireTime = 0
  for type, time in pairs(self.m_mapAccInfo) do
    if time > expireTime then
      expireTime = time
    end
  end
  return expireTime
end

function PropItemAccelerator:IsAccelerableItem(itemModel)
  local itemConfig = GM.ItemDataModel:GetModelConfig(itemModel:GetType())
  if itemConfig.Spread_Auto and itemConfig.Spread_Auto ~= 0 then
    return false
  end
  return true
end

function PropItemAccelerator:IsInAccelerating(itemModel)
  if not self:IsAccelerableItem(itemModel) then
    return false
  end
  return self:IsOn(itemModel)
end
