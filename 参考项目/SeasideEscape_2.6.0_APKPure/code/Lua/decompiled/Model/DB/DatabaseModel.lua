DatabaseModel = {
  LocalFileName = "db.sqlite3",
  TestLocalFileName = "test_db.sqlite3",
  BackupFileName = "backup.sqlite3"
}
DatabaseModel.__index = DatabaseModel

function DatabaseModel:Init()
  if GameConfig.IsTestMode() then
    self.m_db = SQLiteDatabase.Create(DatabaseModel.TestLocalFileName)
  else
    self.m_db = SQLiteDatabase.Create(DatabaseModel.LocalFileName)
  end
  self.m_db:Open()
end

function DatabaseModel:GetFileSize()
  if self.m_db then
    return self.m_db.fileSize
  end
end

function DatabaseModel:CreateColumn(name, type, primary)
  return ColumnInfo(name, type, primary)
end

function DatabaseModel:CheckDatabase()
  return self.m_db:IsOpen()
end

function DatabaseModel:OpenDatabase()
  return self.m_db:Open()
end

function DatabaseModel:CloseDatabase()
  self.m_db:Close()
end

function DatabaseModel:DeleteDatabase()
  self.m_db:Close()
  self.m_db:Delete()
end

function DatabaseModel:CreateDatabaseTable(strName, arrCols)
  return self.m_db:SyncTable(strName, arrCols)
end

function DatabaseModel:CreateDatabaseCommand(sql)
  if not self:CheckDatabase() then
    return
  end
  return self.m_db:CreateCommand(sql)
end

function DatabaseModel:QueueDatabaseCommand(cmd)
  if cmd == nil then
    return
  end
  self.m_db:QueueCommand(cmd)
end

function DatabaseModel:QueueSql(sql)
  self.m_db:QueueSql(sql)
end

function DatabaseModel:DatabaseExecute(strCmd)
  local result = self.m_db:Execute(strCmd)
  return result
end

function DatabaseModel:GetReader(strCmd)
  return self.m_db:GetReader(strCmd)
end

function DatabaseModel:DatabaseQuery(strCmd)
  local query = self.m_db:Query(strCmd)
  return query
end

function DatabaseModel:DatabaseTransaction(bNotWriteAll)
  if not self.m_db:NeedTransaction() then
    return 0
  end
  local result = self.m_db:Transaction(bNotWriteAll or false)
  return result
end

function DatabaseModel:OpenTemporary()
  local result = 0
  if self:CheckDatabase() then
    result = self:DatabaseTransaction()
  end
  if result == 0 then
    self.m_db:OpenTemporary()
  elseif result == 1 then
    Log.Error("Error command in DatabaseTransaction")
  elseif result == 2 then
    Log.Error("Database is busy before OpenTemporary")
  else
    self:DeleteDatabase()
  end
end

function DatabaseModel:Destroy()
  if self.m_db:IsOpen() then
    self.m_db:Close()
  end
end
