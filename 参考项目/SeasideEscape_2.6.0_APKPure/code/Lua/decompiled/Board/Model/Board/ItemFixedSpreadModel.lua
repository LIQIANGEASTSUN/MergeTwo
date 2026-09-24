ItemFixedSpreadModel = {}
ItemFixedSpreadModel.__index = ItemFixedSpreadModel

function ItemFixedSpreadModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.FixedSpread)
end

function ItemFixedSpreadModel:GenerateItemCode(type)
  local config = GM.ItemDataModel:GetModelConfig(type)
  local spreadWeight = config.Spread_Weight or config.Hunt_Spread
  if #spreadWeight == 1 then
    return spreadWeight[1].Code
  end
  local cacheKey = type
  local sequence = self:_GetOrRegenerateSequence(self.m_dbTable, cacheKey, spreadWeight)
  local code, newSequence = ItemSpreadHelper.GetFirstCodeFromWeightSequence(spreadWeight, sequence)
  self.m_dbTable:Set(cacheKey, "sequence", newSequence)
  return code
end

function ItemFixedSpreadModel:FindNextGenerateItemCode(type)
  local config = GM.ItemDataModel:GetModelConfig(type)
  local cacheKey = type
  local sequence = self:_GetOrRegenerateSequence(self.m_dbTable, cacheKey, config.Spread_Weight)
  local code, _ = ItemSpreadHelper.GetFirstCodeFromWeightSequence(config.Spread_Weight, sequence)
  return code
end

function ItemFixedSpreadModel:GenerateItemCodeWithCfgKey(type, cfgKey, dbTable)
  dbTable = dbTable or self.m_dbTable
  local config = GM.ItemDataModel:GetModelConfig(type)
  local spreadWeight = config[cfgKey]
  if #spreadWeight == 1 then
    return spreadWeight[1].Code
  end
  local cacheKey = type .. cfgKey
  local sequence = self:_GetOrRegenerateSequence(dbTable, cacheKey, spreadWeight)
  local code, newSequence = ItemSpreadHelper.GetFirstCodeFromWeightSequence(spreadWeight, sequence)
  dbTable:Set(cacheKey, "sequence", newSequence)
  return code
end

function ItemFixedSpreadModel:_GetOrRegenerateSequence(dbTable, cacheKey, spreadWeight)
  local sequence = dbTable:GetValue(cacheKey, "sequence")
  local codeWeightPairsString = ItemUtility.CodeWeightPairsToString(spreadWeight)
  if StringUtil.IsNilOrEmpty(sequence) or codeWeightPairsString ~= dbTable:GetValue(cacheKey, "pairs") then
    sequence = ItemSpreadHelper.GenerateWeightSequence(spreadWeight)
    dbTable:Set(cacheKey, "pairs", codeWeightPairsString)
    dbTable:Set(cacheKey, "sequence", sequence)
  end
  return sequence
end

function ItemFixedSpreadModel:GetRemainSequence(cacheKey)
  return self.m_dbTable:GetValue(cacheKey, "sequence")
end

function ItemFixedSpreadModel:HasItemSequence(id)
  return self.m_dbTable:HasRow(id)
end

function ItemFixedSpreadModel:GetEboxItemSequence(id)
  return tonumber(self.m_dbTable:GetValue(id, "pairs")) or 0
end

function ItemFixedSpreadModel:ClearEboxSequence(id)
  self.m_dbTable:Remove(id)
end

function ItemFixedSpreadModel:FindNextGenerateItemCodeById(id, type)
  local config = GM.ItemDataModel:GetModelConfig(type).Lucky_Spread
  local index = tonumber(self.m_dbTable:GetValue(id, "pairs")) or 0
  local sequence = self.m_dbTable:GetValue(id, "sequence")
  if StringUtil.IsNilOrEmpty(sequence) or index <= 0 or index > #config then
    index = self:_GetRandomIndex(type, #config)
    self.m_dbTable:Set(id, "pairs", tostring(index))
    sequence = ItemSpreadHelper.GenerateWeightSequence(config[index])
  end
  local spreadWeight = config[index]
  local code, sequence = ItemSpreadHelper.GetFirstCodeFromWeightSequence(spreadWeight, sequence)
  if sequence == nil then
    self.m_dbTable:Remove(id)
  else
    self.m_dbTable:Set(id, "sequence", sequence)
  end
  return code
end

function ItemFixedSpreadModel:_GetRandomIndex(type, maxIndex)
  local configIndex = tonumber(self.m_dbTable:GetValue(type, "pairs")) or 0
  local sequence
  if configIndex == 0 or configIndex ~= maxIndex then
    self.m_dbTable:Set(type, "pairs", tostring(maxIndex))
    local array = ItemSpreadHelper.Format1ToNArray(maxIndex)
    ItemSpreadHelper.RandomShuffleNumberArray(array)
    sequence = table.concat(array, ",")
  else
    sequence = self.m_dbTable:GetValue(type, "sequence")
  end
  local index
  local startIndex, endIndex = string.find(sequence, ",", 1, true)
  if startIndex == nil then
    index = tonumber(sequence)
    sequence = nil
    self.m_dbTable:Remove(type)
  else
    index = tonumber(string.sub(sequence, 1, startIndex - 1))
    sequence = string.sub(sequence, endIndex + 1)
    self.m_dbTable:Set(type, "sequence", sequence)
  end
  return index
end

local CACHE_CODE_KEY = "pairs"
local CACHE_NUM_KEY = "sequence"
local CACHE_KEY_PREFIX = "cache_"

function ItemFixedSpreadModel:GetCacheItemInfo(itemType)
  local cacheKey = CACHE_KEY_PREFIX .. itemType
  return self.m_dbTable:GetValue(cacheKey, CACHE_CODE_KEY), tonumber(self.m_dbTable:GetValue(cacheKey, CACHE_NUM_KEY)) or 0
end

function ItemFixedSpreadModel:UpdateItemCache(itemType, cacheCode, num)
  local cacheKey = CACHE_KEY_PREFIX .. itemType
  if 0 < num then
    self.m_dbTable:BatchSet({
      [cacheKey] = {
        [CACHE_CODE_KEY] = cacheCode,
        [CACHE_NUM_KEY] = tostring(num)
      }
    })
  else
    self.m_dbTable:Remove(cacheKey)
  end
end
