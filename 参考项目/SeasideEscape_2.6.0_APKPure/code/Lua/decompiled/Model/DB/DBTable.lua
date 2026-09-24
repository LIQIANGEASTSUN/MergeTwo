local next = _ENV.next
EDBValueType = {
  Text = "text",
  Integer = "integer",
  Real = "real"
}
setmetatable(EDBValueType, {
  __index = function(_, key)
    Log.Error("EDBValueType try to index a nil key:" .. tostring(key))
    return nil
  end
})
local DEFAULTCOLUMNS = {
  key = EDBValueType.Text,
  value = EDBValueType.Text
}
DB_VALUE_KEY = "value"
local DEFAULTPRIMARYKEY = "key"
local DEFAULTARRORDER = {
  "key",
  DB_VALUE_KEY
}
local MODIFIED_FLAG = 1
local NOT_MODIFIED_FLAG = 0
DBTable = setmetatable({}, BaseDBTable)
DBTable.__index = DBTable

function DBTable:Init(tableConfig)
  self.tableName = tableConfig.name
  self.m_bIgnoreTypeCheck = tableConfig.ignoreTypeCheck
  self.m_bIgnoreValueCommaCheck = tableConfig.ignoreValueCommaCheck
  self.tableConfig = tableConfig
  self.lastSerializationTimestamp = PlayerPrefs.GetInt(self:_GetSerializationKey(), 0)
  self.m_modificationFlag = PlayerPrefs.GetInt(self:_GetModificationKey(), MODIFIED_FLAG)
  self.m_mapCacheValue = {}
  self.m_databaseModel = GM.DatabaseModel
  self._arrOrder = self.tableConfig.arrOrder or DEFAULTARRORDER
  self._columns = self.tableConfig.columns or DEFAULTCOLUMNS
  self._primaryKey = self.tableConfig.primaryKey or DEFAULTPRIMARYKEY
  if IsString(self._primaryKey) and string.find(self._primaryKey, ",") ~= nil then
    Log.Error(self.tableName .. " primary Key has invalid value contains ',' which is not allowed, " .. self._primaryKey)
  end
  self.m_arrColsNoPK = {}
  self.m_arrCols = {
    self._primaryKey
  }
  for k, _ in pairs(self._columns) do
    if k ~= self._primaryKey then
      self.m_arrCols[#self.m_arrCols + 1] = k
      self.m_arrColsNoPK[#self.m_arrColsNoPK + 1] = k
    end
  end
  self.m_strCols = table.concat(self.m_arrCols, ", ")
  self.m_strColsNoPK = table.concat(self.m_arrColsNoPK, ", ")
  self.m_bCachedDataChanged = false
end

function DBTable:CreateTable()
  if ProjectConfig.NonUseLocalData() then
    return true
  end
  local columnTable = {}
  for key, type in pairs(self._columns) do
    columnTable[#columnTable + 1] = GM.DatabaseModel:CreateColumn(key, type, key == self._primaryKey)
  end
  return GM.DatabaseModel:CreateDatabaseTable(self.tableName, columnTable)
end

function DBTable:_GetValueFromReader(reader, i, type)
  if reader:IsDBNull(i) then
    return nil
  end
  if type == EDBValueType.Text then
    return reader:GetString(i)
  elseif type == EDBValueType.Integer then
    return reader:GetInt64(i)
  elseif type == EDBValueType.Real then
    return reader:GetDouble(i)
  end
  return nil
end

function DBTable:LoadData()
  if ProjectConfig.NonUseLocalData() then
    return true
  end
  local query = GM.DatabaseModel:DatabaseQuery("select * from " .. self.tableName)
  if query.Error ~= 0 then
    query:Release()
    return false
  end
  local colName, primaryKey
  for i = 0, query.Rows - 1 do
    local data = {}
    for j = 0, query.Names.Count - 1 do
      colName = query.Names[j]
      if colName == self._primaryKey then
        primaryKey = query:GetData(i, j)
      else
        data[colName] = query:GetData(i, j)
        if self._columns[colName] == EDBValueType.Text and data[colName] == nil then
          data[colName] = ""
        end
      end
    end
    self.m_mapCacheValue[primaryKey] = data
  end
  query:Release()
  return true
end

function DBTable:_GetSerializationKey()
  return EPlayerPrefKey.TableLastSerializationTimePrefix .. self.tableName
end

function DBTable:_GetModificationKey()
  return EPlayerPrefKey.TableModificationPrefix .. self.tableName
end

function DBTable:GetValue(primaryValue, column)
  local map = self.m_mapCacheValue[primaryValue]
  if map ~= nil then
    return map[column]
  end
  if self._columns[column] == EDBValueType.Text and not self.m_bIgnoreTypeCheck then
    return ""
  end
  return nil
end

function DBTable:GetValues()
  return Table.DeepCopy(self.m_mapCacheValue)
end

function DBTable:GetReadOnlyValues()
  return ReadOnly.New(self.m_mapCacheValue)
end

function DBTable:GetPrimaryKeys()
  return Table.GetKeys(self.m_mapCacheValue)
end

function DBTable:HasRow(primaryValue)
  if self.m_mapCacheValue[primaryValue] ~= nil then
    return true
  end
end

function DBTable:HasColumn(primaryValue, columnName, columnValue)
  if self.m_mapCacheValue[primaryValue] ~= nil and (columnName == nil or self.m_mapCacheValue[primaryValue][columnName] ~= nil) then
    return true
  end
end

function DBTable:AddSingleKey(primaryValue)
  if self.m_mapCacheValue[primaryValue] then
    return
  end
  self.m_mapCacheValue[primaryValue] = {}
  self:_QueueInsertCommandSingleKey(primaryValue)
  self.m_bCachedDataChanged = true
end

function DBTable:Set(primaryValue, column, value)
  if GM.destroying and GameConfig.IsTestMode() then
    Log.Error("Set DBTable on destroying!!! table: " .. self.tableName .. ", key: " .. primaryValue)
  end
  if not self.m_bIgnoreValueCommaCheck and IsString(value) and string.find(value, ",") ~= nil then
    Log.Error(self.tableName .. " set invalid value contains ',' which is not allowed, " .. value)
  end
  if value == nil and self._columns[column] == EDBValueType.Text then
    value = ""
  end
  if self.m_mapCacheValue[primaryValue] == nil then
    self.m_mapCacheValue[primaryValue] = {}
    self.m_mapCacheValue[primaryValue][column] = value
    self:_QueueInsertCommandSingleColumn(primaryValue, column)
  elseif self.m_mapCacheValue[primaryValue][column] ~= value then
    if not self.m_bIgnoreTypeCheck and not self.IsValidValueType(self._columns[column], value) then
      Log.Assert(false, self.tableName .. "\232\161\168" .. column .. "\229\136\151\229\128\188\231\177\187\229\158\139\233\148\153\232\175\175,\229\188\130\229\184\184\229\128\188=" .. tostring(value))
    end
    self.m_mapCacheValue[primaryValue][column] = value
    self:_QueueUpdateCommandSingleColumn(primaryValue, column)
  end
  self.m_bCachedDataChanged = true
end

function DBTable.IsValidValueType(type, value)
  if value == nil then
    return true
  end
  if type == EDBValueType.Text then
    return IsString(value)
  elseif type == EDBValueType.Integer then
    return IsNumber(value) and math.floor(value) == value
  elseif type == EDBValueType.Real then
    return IsNumber(value) and value >= math.floor(value)
  else
    Log.Error("\228\184\141\230\148\175\230\140\129\231\154\132\231\177\187\229\158\139\230\163\128\230\159\165, type=" .. type)
    return false
  end
end

local mapColumns = {}

function DBTable:BatchSet(mapContent)
  for primaryValue, columns in pairs(mapContent) do
    for k, _ in pairs(mapColumns) do
      mapColumns[k] = nil
    end
    for k, _ in pairs(columns) do
      mapColumns[k] = true
    end
    if self.m_mapCacheValue[primaryValue] == nil then
      self.m_mapCacheValue[primaryValue] = Table.ShallowCopy(columns)
      for _, column in pairs(self.m_arrColsNoPK) do
        if self.m_mapCacheValue[primaryValue][column] == nil and self._columns[column] == EDBValueType.Text then
          self.m_mapCacheValue[primaryValue][column] = ""
        end
      end
      self:_QueueInsertCommandColumns(primaryValue, mapColumns)
    else
      for column, value in pairs(columns) do
        if value == nil and self._columns[column] == EDBValueType.Text then
          value = ""
        end
        if not self.m_bIgnoreTypeCheck and not self.IsValidValueType(self._columns[column], value) then
          Log.Assert(false, self.tableName .. "\232\161\168" .. column .. "\229\136\151\229\128\188\231\177\187\229\158\139\233\148\153\232\175\175,\229\188\130\229\184\184\229\128\188=" .. tostring(value))
        end
        self.m_mapCacheValue[primaryValue][column] = value
      end
      self:_QueueUpdateCommandColumns(primaryValue, mapColumns)
    end
  end
  self.m_bCachedDataChanged = true
end

function DBTable:Remove(primaryValue, column)
  if not self:_RemoveCacheData(primaryValue, column) then
    return
  end
  if column == nil then
    self:_QueueRemoveRowsCommand(primaryValue)
  else
    self:_QueueUpdateCommandSingleColumn(primaryValue, column)
  end
  self.m_bCachedDataChanged = true
  if self:IsEmpty() then
    self:_UpdateWhenEmpty()
  end
end

function DBTable:BatchRemove(arrPrimaryValues, column)
  if type(arrPrimaryValues) ~= "table" or #arrPrimaryValues == 0 then
    return
  end
  if column == nil then
    local index = 1
    while index <= #arrPrimaryValues do
      if self:_RemoveCacheData(arrPrimaryValues[index], column) then
        index = index + 1
      else
        table.remove(arrPrimaryValues, index)
      end
    end
    self:_QueueRemoveRowsCommand(arrPrimaryValues)
  else
    for _, primaryValue in ipairs(arrPrimaryValues) do
      self:_QueueUpdateCommandSingleColumn(primaryValue, column)
    end
  end
  self.m_bCachedDataChanged = true
end

function DBTable:_RemoveCacheData(primaryValue, column)
  if self.m_mapCacheValue[primaryValue] == nil then
    return false
  end
  if column == nil then
    self.m_mapCacheValue[primaryValue] = nil
  else
    self.m_mapCacheValue[primaryValue][column] = nil
  end
  return true
end

function DBTable:GetAllInTable()
  return self:GetValues()
end

function DBTable:IsEmpty()
  return next(self.m_mapCacheValue) == nil
end

function DBTable:ClearContent()
  self.m_mapCacheValue = {}
end

function DBTable:Clear()
  self.m_mapCacheValue = {}
  self:_QueueRemoveAllCommand()
  self.m_bCachedDataChanged = true
  self:_UpdateWhenEmpty()
end

function DBTable:_UpdateWhenEmpty()
  self:_OnContentUpdated("{}")
  self:_ResetPlayerPrefs()
end

function DBTable:_ResetPlayerPrefs()
  self.lastSerializationTimestamp = 0
  PlayerPrefs.SetInt(self:_GetSerializationKey(), self.lastSerializationTimestamp)
  PlayerPrefs.SetInt(self:_GetHasDataKey(), 0)
end

function DBTable:ToJson()
  if not self.m_strJson then
    local tbContent = self:GetAllInTable()
    self.m_strJson = json.encode(tbContent)
    if self:IsEmpty() and self.lastSerializationTimestamp > 0 then
      local strLog = self.tableName .. " is Empty"
      GM.BIManager:LogErrorInfo(EBIType.DataCracked, strLog)
    end
  end
  return self.m_strJson
end

function DBTable:FromJson(strJson)
  self:Clear()
  strJson = strJson or ""
  local tbContent = json.decode(strJson)
  if strJson ~= "" and tbContent == nil then
    local strLog = self.tableName .. " Server Data Cracked : " .. strJson
    GM.BIManager:LogErrorInfo(EBIType.DataCracked, strLog)
  end
  tbContent = tbContent or {}
  self:BatchSet(tbContent)
  if Table.IsEmpty(tbContent) then
    self:_ResetPlayerPrefs()
  end
end

function DBTable:ToUploadArr()
  local concatTable = {}
  local arrCount = 1
  local arr = {}
  for primaryKey, dataTB in pairs(self.m_mapCacheValue) do
    concatTable[1] = primaryKey
    for i = 2, #self._arrOrder do
      concatTable[i] = dataTB[self._arrOrder[i]] or ""
    end
    arr[arrCount] = table.concat(concatTable, ",")
    arrCount = arrCount + 1
  end
  return arr
end

function DBTable:FromArr(strArr)
  self:Clear()
  local tbContent = {}
  local datas, value, type
  for _, str in ipairs(strArr) do
    datas = StringUtil.Split(str, ",")
    local row = {}
    if #datas > #self._arrOrder then
      if GM and GM.BIManager then
        GM.BIManager:LogErrorInfo(EBIProjectType.DBColumnOverflow, "tableName:" .. self.tableName .. "str:" .. str)
      end
      datas[#self._arrOrder] = table.concat(datas, ",", #self._arrOrder)
      for i = #self._arrOrder + 1, #datas do
        datas[i] = nil
      end
    end
    for i = 2, #datas do
      value = datas[i]
      type = self._columns[self._arrOrder[i]]
      if type == EDBValueType.Integer or type == EDBValueType.Real then
        value = tonumber(value)
      end
      row[self._arrOrder[i]] = value
    end
    type = self._columns[self._primaryKey]
    if type == EDBValueType.Integer or type == EDBValueType.Real then
      tbContent[tonumber(datas[1])] = row
    else
      tbContent[datas[1]] = row
    end
  end
  self:BatchSet(tbContent)
  if Table.IsEmpty(tbContent) then
    self:_ResetPlayerPrefs()
  end
end

function DBTable:CheckContent()
  if self.m_bCachedDataChanged then
    self:_OnContentUpdated()
  end
end

function DBTable:_OnContentUpdated(jsonContent)
  self.m_bCachedDataChanged = false
  self.lastSerializationTimestamp = TimeUtil.GetTimeInSecond()
  self:SetModified()
  if self.m_bUploading then
    self.m_bModifiedDuringUploading = true
  end
  self.m_strJson = jsonContent
  PlayerPrefs.SetInt(self:_GetSerializationKey(), self.lastSerializationTimestamp)
  self:_CheckAndSetHasData()
end

function DBTable:_CheckAndSetHasData()
  PlayerPrefs.SetInt(self:_GetHasDataKey(), self:IsEmpty() and 0 or 1)
end

function DBTable:_GetHasDataKey()
  return EPlayerPrefKey.TableHasDataPrefix .. self.tableName
end

function DBTable:IsCracked()
  if self:IsEmpty() and PlayerPrefs.GetInt(self:_GetHasDataKey(), 0) == 1 then
    GM.BIManager:LogErrorInfo(EBIType.DataCracked, self.tableName .. " is empty now")
    return true
  end
  return false
end

function DBTable:IsModified()
  return self.m_modificationFlag == MODIFIED_FLAG
end

function DBTable:SetModified()
  self.m_modificationFlag = MODIFIED_FLAG
  PlayerPrefs.SetInt(self:_GetModificationKey(), self.m_modificationFlag)
end

function DBTable:SetUploading()
  self.m_bUploading = true
end

function DBTable:OnUploadedFinished(forceSynced)
  if not self.m_bUploading and not forceSynced then
    return
  end
  self.m_bUploading = false
  self.m_modificationFlag = not (not self.m_bModifiedDuringUploading or forceSynced) and MODIFIED_FLAG or NOT_MODIFIED_FLAG
  self.m_bModifiedDuringUploading = false
  PlayerPrefs.SetInt(self:_GetModificationKey(), self.m_modificationFlag)
end

function DBTable:Rebuild()
  if self:IsEmpty() then
    return
  end
  self:_QueueRemoveAllCommand()
  for primaryValue, _ in pairs(self.m_mapCacheValue) do
    self:_QueueInsertCommandColumns(primaryValue, self.m_mapCacheValue[primaryValue])
  end
end

local BracketsFormat = {
  "(",
  "",
  ")"
}
local EqualFormat = {
  "",
  "=",
  ""
}
local InsertSqlFormat = {
  "insert into ",
  "",
  "(",
  "",
  ")",
  " values ",
  ""
}
local ArrInsertColumn = {}
local ArrInsertValue = {}
local ArrInsertPlaceHolder = {}
local ArrInsertClearGroups = {
  ArrInsertColumn,
  ArrInsertValue,
  ArrInsertPlaceHolder
}

function DBTable:_ClearQueueInsertParas()
  for _, arr in ipairs(ArrInsertClearGroups) do
    for k, _ in pairs(arr) do
      arr[k] = nil
    end
  end
end

function DBTable:_QueueInsertCommand()
  if not self.m_databaseModel:CheckDatabase() then
    return
  end
  if ProjectConfig.NonUseLocalData() then
    return
  end
  for i, col in ipairs(ArrInsertColumn) do
    ArrInsertPlaceHolder[i] = ":" .. col
  end
  local strConcatData
  InsertSqlFormat[2] = self.tableName
  InsertSqlFormat[4] = table.concat(ArrInsertColumn, ",")
  strConcatData = table.concat(ArrInsertPlaceHolder, ",")
  BracketsFormat[2] = strConcatData
  InsertSqlFormat[7] = table.concat(BracketsFormat)
  local cmd = self.m_databaseModel:CreateDatabaseCommand(table.concat(InsertSqlFormat))
  for i = 1, #ArrInsertColumn do
    self:_BindCommandParameter(cmd, self._columns[ArrInsertColumn[i]], ArrInsertPlaceHolder[i], ArrInsertValue[i])
  end
  self.m_databaseModel:QueueDatabaseCommand(cmd)
end

function DBTable:_QueueInsertCommandSingleColumn(primaryValue, column)
  if ProjectConfig.NonUseLocalData() then
    return
  end
  self:_ClearQueueInsertParas()
  ArrInsertColumn[1] = self._primaryKey
  ArrInsertColumn[2] = column
  ArrInsertValue[1] = primaryValue
  ArrInsertValue[2] = self.m_mapCacheValue[primaryValue][column]
  self:_QueueInsertCommand()
end

function DBTable:_QueueInsertCommandSingleKey(primaryValue)
  if ProjectConfig.NonUseLocalData() then
    return
  end
  self:_ClearQueueInsertParas()
  ArrInsertColumn[1] = self._primaryKey
  ArrInsertValue[1] = primaryValue
  self:_QueueInsertCommand()
end

function DBTable:_QueueInsertCommandColumns(primaryValue, mapColumnKeys)
  if ProjectConfig.NonUseLocalData() then
    return
  end
  self:_ClearQueueInsertParas()
  ArrInsertColumn[1] = self._primaryKey
  ArrInsertValue[1] = primaryValue
  local i = 1
  for column, _ in pairs(mapColumnKeys) do
    i = i + 1
    ArrInsertColumn[i] = column
    ArrInsertValue[i] = self.m_mapCacheValue[primaryValue][column]
  end
  self:_QueueInsertCommand()
end

local UpdateSqlFormat = {
  "update ",
  "",
  " set ",
  "",
  " where ",
  "",
  "='",
  "",
  "'"
}
local ArrUpdateColumn = {}
local ArrUpdateValue = {}
local ArrUpdatePlaceHolder = {}
local ArrUpdateAssignStr = {}
local ArrUpdateClearGroups = {
  ArrUpdateColumn,
  ArrUpdateValue,
  ArrUpdatePlaceHolder,
  ArrUpdateAssignStr
}

function DBTable:_ClearQueueUpdateParas()
  for _, arr in ipairs(ArrUpdateClearGroups) do
    for k, _ in pairs(arr) do
      arr[k] = nil
    end
  end
end

local UpdateSqlPrimaryValue

function DBTable:_QueueUpdateCommand()
  if ProjectConfig.NonUseLocalData() then
    return
  end
  local str
  for i, col in ipairs(ArrUpdateColumn) do
    str = ":" .. col
    ArrUpdatePlaceHolder[i] = str
    EqualFormat[1] = col
    EqualFormat[3] = str
    ArrUpdateAssignStr[i] = table.concat(EqualFormat)
  end
  UpdateSqlFormat[2] = self.tableName
  UpdateSqlFormat[4] = table.concat(ArrUpdateAssignStr, ",")
  UpdateSqlFormat[6] = self._primaryKey
  UpdateSqlFormat[8] = UpdateSqlPrimaryValue
  local cmd = self.m_databaseModel:CreateDatabaseCommand(table.concat(UpdateSqlFormat))
  if cmd then
    for i = 1, #ArrUpdateColumn do
      self:_BindCommandParameter(cmd, self._columns[ArrUpdateColumn[i]], ArrUpdatePlaceHolder[i], ArrUpdateValue[i])
    end
    self.m_databaseModel:QueueDatabaseCommand(cmd)
  end
end

function DBTable:_QueueUpdateCommandSingleColumn(primaryValue, column, value)
  if ProjectConfig.NonUseLocalData() then
    return
  end
  self:_ClearQueueUpdateParas()
  ArrUpdateColumn[1] = column
  ArrUpdateValue[1] = self.m_mapCacheValue[primaryValue][column]
  UpdateSqlPrimaryValue = primaryValue
  self:_QueueUpdateCommand()
end

function DBTable:_QueueUpdateCommandColumns(primaryValue, mapColumnKeys)
  if ProjectConfig.NonUseLocalData() then
    return
  end
  self:_ClearQueueUpdateParas()
  local i = 0
  for column, _ in pairs(mapColumnKeys) do
    i = i + 1
    ArrUpdateColumn[i] = column
    ArrUpdateValue[i] = self.m_mapCacheValue[primaryValue][column]
  end
  UpdateSqlPrimaryValue = primaryValue
  self:_QueueUpdateCommand()
end

local DeleteRowSqlFormat = {
  "delete from ",
  "",
  " where ",
  "",
  " in ('",
  "",
  "')"
}

function DBTable:_QueueRemoveRowsCommand(primaryValue, columns)
  if ProjectConfig.NonUseLocalData() then
    return
  end
  DeleteRowSqlFormat[2] = self.tableName
  DeleteRowSqlFormat[4] = self._primaryKey
  if type(primaryValue) ~= "table" then
    DeleteRowSqlFormat[6] = primaryValue
  else
    DeleteRowSqlFormat[6] = table.concat(primaryValue, "','")
  end
  self.m_databaseModel:QueueDatabaseCommand(self.m_databaseModel:CreateDatabaseCommand(table.concat(DeleteRowSqlFormat)))
end

function DBTable:_QueueRemoveAllCommand()
  if ProjectConfig.NonUseLocalData() then
    return
  end
  GM.DatabaseModel:QueueDatabaseCommand(GM.DatabaseModel:CreateDatabaseCommand("delete from " .. self.tableName))
end

function DBTable:_BindCommandParameter(cmd, type, k, v)
  if v == nil or type == "null" then
    cmd:BindNullParameter(k)
  elseif type == EDBValueType.Real then
    cmd:BindRealParameter(k, v)
  elseif type == EDBValueType.Integer then
    cmd:BindInt64Parameter(k, v)
  else
    cmd:BindTextParameter(k, v)
  end
end
