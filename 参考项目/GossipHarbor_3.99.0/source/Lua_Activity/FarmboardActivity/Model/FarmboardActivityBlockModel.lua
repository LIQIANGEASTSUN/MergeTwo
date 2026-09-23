FarmboardActivityBlockModel = {}
FarmboardActivityBlockModel.__index = FarmboardActivityBlockModel
FarmboardActivityBlockModel.BlockUnlockedCountKey = "BlockUnlockedCount"
FarmboardActivityBlockModel.BlockRoundRestClickNumberKey = "BlockRoundRestClickNumber%d-%d"
FarmboardActivityBlockModel.BlockRoundRestSpreadNumberKey = "BlockRoundRestSpreadNumber%d-%d"

function FarmboardActivityBlockModel.Create(virtualDBTable, config)
  local model = setmetatable({}, FarmboardActivityBlockModel)
  model:Init(virtualDBTable, config)
  return model
end

function FarmboardActivityBlockModel:Init(virtualDBTable, config)
  self.m_dbTable = virtualDBTable
  self.m_config = config
end

function FarmboardActivityBlockModel:GetUnlockedCount()
  return self.m_dbTable:GetValue(FarmboardActivityBlockModel.BlockUnlockedCountKey, "value") or 1
end

function FarmboardActivityBlockModel:Unlock()
  local unlockedBlockCount = self:GetUnlockedCount()
  self.m_dbTable:Set(FarmboardActivityBlockModel.BlockUnlockedCountKey, "value", unlockedBlockCount + 1)
end

function FarmboardActivityBlockModel:Produce(rate)
  local rewards = {}
  local unlockedBlockCount = self:GetUnlockedCount()
  for _, data in ipairs(self.m_config) do
    local reward = self:_TryProduceItem(data, rate)
    if reward ~= nil then
      reward[PROPERTY_COUNT] = reward[PROPERTY_COUNT] * unlockedBlockCount
      table.insert(rewards, reward)
    end
  end
  return rewards
end

function FarmboardActivityBlockModel:_TryProduceItem(data, rate)
  local roundRestClickNumberKey = string.format(FarmboardActivityBlockModel.BlockRoundRestClickNumberKey, data.Index, rate)
  local roundRestSpreadNumberKey = string.format(FarmboardActivityBlockModel.BlockRoundRestSpreadNumberKey, data.Index, rate)
  local roundRestClickNumber = self.m_dbTable:GetValue(roundRestClickNumberKey, "value")
  local roundRestSpreadNumber = self.m_dbTable:GetValue(roundRestSpreadNumberKey, "value")
  if roundRestClickNumber == nil or roundRestClickNumber == 0 then
    roundRestClickNumber = data.RoundClickNumber
    roundRestSpreadNumber = data.RoundSpreadNumber
  end
  local canSpread = self:_RandomResult(roundRestClickNumber, roundRestSpreadNumber)
  roundRestClickNumber = roundRestClickNumber - 1
  if canSpread then
    roundRestSpreadNumber = roundRestSpreadNumber - 1
  end
  self.m_dbTable:Set(roundRestClickNumberKey, "value", roundRestClickNumber)
  self.m_dbTable:Set(roundRestSpreadNumberKey, "value", roundRestSpreadNumber)
  self.m_testRoundRestClickNumber = roundRestClickNumber
  self.m_testRoundRestSpreadNumber = roundRestSpreadNumber
  if not canSpread then
    return nil
  end
  local code = Table.ListWeightSelectOne(data.SpreadWeight).Code
  local itemDataModel = GM.ItemDataModel
  for i = 1, rate do
    code = itemDataModel:GetModelConfig(code).MergedType or code
  end
  return {
    [PROPERTY_TYPE] = code,
    [PROPERTY_COUNT] = 1
  }
end

function FarmboardActivityBlockModel:_RandomResult(clickNumber, spreadNumber)
  if spreadNumber == 0 then
    return false
  end
  if clickNumber == spreadNumber then
    return true
  end
  local resultWeight = {
    {Result = true, Weight = spreadNumber},
    {
      Result = false,
      Weight = clickNumber - spreadNumber
    }
  }
  return Table.ListWeightSelectOne(resultWeight).Result
end
