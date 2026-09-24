MiscModel = {}
MiscModel.__index = MiscModel

function MiscModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.Misc)
  ModelHelper.DefineProperties(MiscModel, EMiscKey)
end

function MiscModel:GetData()
  return self.m_dbTable
end

function MiscModel:FromSyncData(dataArr)
  self.m_dbTable:FromArr(dataArr)
end

function MiscModel:Get(key)
  return self.m_dbTable:GetValue(key, "value")
end

function MiscModel:Set(key, value)
  if self:Get(key) ~= value then
    self.m_dbTable:Set(key, "value", value)
    EventDispatcher.DispatchEvent(EEventType.MiscChange, key)
  end
end

function MiscModel:Clear(key)
  if self.m_dbTable:HasRow(key) then
    self.m_dbTable:Remove(key)
    EventDispatcher.DispatchEvent(EEventType.MiscChange, key)
  end
end
