WheelItemData = {}
WheelItemData.__index = WheelItemData

function WheelItemData.Create(config)
  local instance = setmetatable(config, WheelItemData)
  instance:_Init()
  return instance
end

function WheelItemData:_Init()
  self:_LoadRandomRewards()
end

function WheelItemData:_LoadRandomRewards()
  if Table.IsEmpty(self.randomRewards) or self.largeReward == nil then
    return
  end
  local rewardCfg = {}
  Table.ListAppend(rewardCfg, self.largeReward)
  Table.ListAppend(rewardCfg, self.randomRewards)
  self.m_arrRandomReward = {}
  local arrStr, rewardConfig, numStr
  for _, rewardStr in ipairs(rewardCfg) do
    arrStr = StringUtil.Split(rewardStr, ",")
    Log.Assert(#arrStr == 2, "[WheelItemData:_LoadRandomRewards] \232\182\133\231\186\167\232\189\172\231\155\152\233\133\141\231\189\174\230\156\137\232\175\175, itemId=" .. self.itemId)
    numStr = StringUtil.Split(arrStr[2], "-")
    rewardConfig = {}
    rewardConfig[PROPERTY_TYPE] = arrStr[1]
    rewardConfig[PROPERTY_COUNT] = tonumber(numStr[1]) or 0
    rewardConfig.Weight = tonumber(numStr[2]) or 0
    table.insert(self.m_arrRandomReward, rewardConfig)
  end
end

function WheelItemData:GetRandomReward()
  return self.m_arrRandomReward
end

function WheelItemData:GenerateRandomRewards()
  return Table.ListWeightSelectOne(self.m_arrRandomReward)
end
