DBTableManager = {}
DBTableManager.__index = DBTableManager

function DBTableManager:_CreateDBTable(tableConfig)
  local instance = setmetatable({}, DBTable)
  instance:Init(tableConfig)
  return instance
end

function DBTableManager:Init()
  self.m_dbTables = {}
  for _, config in pairs(EDBTableConfigs) do
    self.m_dbTables[config] = self:_CreateDBTable(config)
  end
  self.m_bHealth = self:_LoadTables()
  if not self.m_bHealth then
    self.m_bLogFailedInit = true
  end
end

function DBTableManager:LateInit()
  if self.m_bLogFailedInit then
    self.m_bLogFailedInit = nil
    GM.BIManager:LogProject(EBIProjectType.SQLite, "Failed to load all tables")
  end
end

function DBTableManager:LateUpdate()
  if self:_TrySave() then
    return
  end
  if self:HealthCheck() then
    self.m_bHealth = false
    GM.SyncModel:CheckUpload()
  end
end

function DBTableManager:Destroy()
  if self:TrySaveAll() then
    return
  end
  GM.SyncModel:CheckUpload()
  if GM.DatabaseModel:CheckDatabase() then
    GM.DatabaseModel:DeleteDatabase()
  end
  self:_RebuildDatabase()
end

function DBTableManager:TryRebuildDatabase()
  if ProjectConfig.NonUseLocalData() then
    return
  end
  if GM.DatabaseModel:CheckDatabase() then
    return
  end
  self:_RebuildDatabase()
  if GM.DatabaseModel:CheckDatabase() then
    GM.BIManager:LogProject(EBIProjectType.SQLite, "Rebuild database successfully")
  else
    GM.BIManager:LogProject(EBIProjectType.SQLite, "Failed to rebuild database")
  end
end

function DBTableManager:TrySaveAll()
  self:_FlushTables()
  if ProjectConfig.NonUseLocalData() then
    return true
  end
  if GM.DatabaseModel:CheckDatabase() and self:_WriteToDB() then
    self.m_bHealth = true
    return true
  end
  return false
end

function DBTableManager:_TrySave()
  self:_FlushTables()
  if ProjectConfig.NonUseLocalData() then
    return true
  end
  if GM.DatabaseModel:CheckDatabase() and self:_WriteToDB(true) then
    self.m_bHealth = true
    return true
  end
  return false
end

function DBTableManager:_LoadTables()
  local bNonUseLocalData = ProjectConfig.NonUseLocalData()
  local bCheckDatabase = GM.DatabaseModel:CheckDatabase()
  if bNonUseLocalData then
    return true
  end
  if not bCheckDatabase then
    return false
  end
  if not self:CreateTables() then
    GM.DatabaseModel:DeleteDatabase()
    return false
  end
  for _, dbTable in pairs(self.m_dbTables) do
    if not dbTable:LoadData() then
      self:ClearTables()
      GM.DatabaseModel:DeleteDatabase()
      return false
    end
  end
  return true
end

function DBTableManager:_FlushTables()
  self.m_dbTables = self.m_dbTables or {}
  for _, dbTable in pairs(self.m_dbTables) do
    dbTable:CheckContent()
  end
end

function DBTableManager:_RebuildDatabase()
  if not GM.DatabaseModel:OpenDatabase() then
    return
  end
  if not self:CreateTables() then
    GM.DatabaseModel:DeleteDatabase()
    return
  end
  self.m_dbTables = self.m_dbTables or {}
  for _, dbTable in pairs(self.m_dbTables) do
    dbTable:Rebuild()
  end
  if self:_WriteToDB() then
    return
  end
  if GM.DatabaseModel:CheckDatabase() then
    GM.DatabaseModel:DeleteDatabase()
  end
end

function DBTableManager:_WriteToDB(bNotWriteAll)
  local result = GM.DatabaseModel:DatabaseTransaction(bNotWriteAll)
  if not (result ~= 0 or self.m_bHealth) or result ~= 0 and self.m_bHealth then
    GM.BIManager:LogProject(EBIProjectType.SQLite, "Handle Write DB result: " .. tostring(result))
  end
  if result == 0 then
    return true
  end
  if result == 1 then
    Log.Error("Error command in DatabaseTransaction")
  elseif result == 2 then
    Log.Warning("Database is busy")
  else
    GM.DatabaseModel:DeleteDatabase()
  end
  return false
end

function DBTableManager:GetTable(tableConfig)
  self.m_dbTables = self.m_dbTables or {}
  local dbTable = self.m_dbTables[tableConfig]
  if dbTable == nil then
    Log.Warning("Please create table " .. tableConfig.name .. "with DatabaseModel")
    dbTable = self:_CreateDBTable(tableConfig)
    dbTable:CreateTable()
    dbTable:LoadData()
    self.m_dbTables[tableConfig] = dbTable
  end
  return dbTable
end

function DBTableManager:Clear()
  self.m_dbTables = self.m_dbTables or {}
  for _, dbTable in pairs(self.m_dbTables) do
    dbTable:Clear()
  end
end

function DBTableManager:HealthCheck()
  return self.m_bHealth
end

function DBTableManager:CreateTables()
  for _, dbTable in pairs(self.m_dbTables) do
    if not dbTable:CreateTable() then
      return false
    end
  end
  return true
end

function DBTableManager:ClearTables()
  for _, dbTable in pairs(self.m_dbTables) do
    dbTable:ClearContent()
  end
end
