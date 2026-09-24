ItemLuckySpreadModel = {}
ItemLuckySpreadModel.__index = ItemLuckySpreadModel
local PoolType = {
  Normal = 1,
  Common_Up = 2,
  Rare_Up = 3
}

function ItemLuckySpreadModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.LuckySpread)
end

function ItemLuckySpreadModel:GenerateItemCode(type)
  Log.Verbose("[ItemLuckySpreadModel:GenerateItemCode] \228\189\191\231\148\168\230\172\161\231\186\167\230\175\141\230\163\139\229\173\144\229\185\184\232\191\144\229\150\183\229\143\145")
  local config = GM.ItemDataModel:GetModelConfig(type)
  local codeWeightPairsString = self:_AllWeightToString(config)
  local pool = self.m_dbTable:GetValue(type, "pool")
  local poolWeight = {
    {
      Code = PoolType.Normal,
      Weight = config.Lucky_Config.Normal_Num
    },
    {
      Code = PoolType.Common_Up,
      Weight = config.Lucky_Config.Common_Up_Num
    },
    {
      Code = PoolType.Rare_Up,
      Weight = config.Lucky_Config.Rare_Up_Num
    }
  }
  if StringUtil.IsNilOrEmpty(pool) or codeWeightPairsString ~= self.m_dbTable:GetValue(type, "pairs") then
    pool = ItemSpreadHelper.GenerateWeightSequence(poolWeight)
    self.m_dbTable:Set(type, "pairs", codeWeightPairsString)
    self.m_dbTable:Set(type, "pool", pool)
    self.m_dbTable:Set(type, "sequence", "")
  end
  local poolId, newPool = ItemSpreadHelper.GetFirstCodeFromWeightSequence(poolWeight, pool)
  local spreadWeight
  if poolId == PoolType.Normal then
    spreadWeight = config.Spread_Weight or config.Hunt_Spread
  elseif poolId == PoolType.Common_Up then
    spreadWeight = config.Lucky_Config.Common_Up
  elseif poolId == PoolType.Rare_Up then
    spreadWeight = config.Lucky_Config.Rare_Up
  else
    assert(false)
    spreadWeight = config.Spread_Weight or config.Hunt_Spread
  end
  if #spreadWeight == 1 then
    self.m_dbTable:Set(type, "pool", newPool)
    local code = spreadWeight[1].Code
    return code, Table.ListContain(config.Lucky_Config.Super_Item, code) and BoardSpreadType.SuperLucky or nil
  end
  local sequence = self.m_dbTable:GetValue(type, "sequence")
  if StringUtil.IsNilOrEmpty(sequence) then
    sequence = ItemSpreadHelper.GenerateWeightSequence(spreadWeight)
  end
  local code
  code, sequence = ItemSpreadHelper.GetFirstCodeFromWeightSequence(spreadWeight, sequence)
  if StringUtil.IsNilOrEmpty(sequence) then
    self.m_dbTable:Set(type, "pool", newPool)
  end
  self.m_dbTable:Set(type, "sequence", sequence)
  if GameConfig.IsTestMode() then
    Log.Verbose(string.format("[ItemLuckySpreadModel:GenerateItemCode] \229\150\183\229\143\145\228\191\161\230\129\175:\n\230\163\139\229\173\144: %s\n\232\189\174\230\172\161\233\154\143\230\156\186\229\186\143\229\136\151: %s\n\229\189\147\229\137\141\232\189\174\230\172\161\229\137\169\228\189\153\229\186\143\229\136\151: %s\n\229\142\159\229\167\139\233\133\141\231\189\174: %s", code, pool, sequence, codeWeightPairsString))
  end
  return code, Table.ListContain(config.Lucky_Config.Super_Item, code) and BoardSpreadType.SuperLucky or nil
end

function ItemLuckySpreadModel:_AllWeightToString(config)
  local spreadWeight = config.Spread_Weight
  local luckyConfig = config.Lucky_Config
  local str = string.format("%d,%d,%d", luckyConfig.Normal_Num, luckyConfig.Common_Up_Num, luckyConfig.Rare_Up_Num)
  str = str .. "," .. ItemUtility.CodeWeightPairsToString(spreadWeight)
  str = str .. "," .. ItemUtility.CodeWeightPairsToString(luckyConfig.Common_Up)
  str = str .. "," .. ItemUtility.CodeWeightPairsToString(luckyConfig.Rare_Up)
  return str
end
