RandomBoxData = {}
RandomBoxData.__index = RandomBoxData

function RandomBoxData.Create(config)
  local instance = setmetatable(config, RandomBoxData)
  instance:_Init()
  return instance
end

function RandomBoxData:_Init()
  self:_LoadRandomRewards()
end

function RandomBoxData:_LoadRandomRewards()
  if Table.IsEmpty(self.randomRewards) then
    return
  end
  self.m_arrRandomReward = {}
  local bError = false
  local arrStr, arrRangeStr, rewardConfig, rangeConfig, minNum, maxNum
  for _, rewardStr in ipairs(self.randomRewards) do
    rewardConfig = {}
    arrStr = StringUtil.Split(rewardStr, ",")
    if 2 <= #arrStr then
      rewardConfig[PROPERTY_TYPE] = arrStr[1]
      rewardConfig.AmountRanges = {}
      minNum = math.maxinteger
      maxNum = -1
      for i = 2, #arrStr do
        arrRangeStr = StringUtil.Split(arrStr[i], "-")
        if #arrRangeStr == 3 then
          rangeConfig = {
            MinNum = tonumber(arrRangeStr[1]),
            MaxNum = tonumber(arrRangeStr[2]),
            Weight = tonumber(arrRangeStr[3])
          }
          table.insert(rewardConfig.AmountRanges, rangeConfig)
          minNum = math.min(minNum, rangeConfig.MinNum)
          maxNum = math.max(maxNum, rangeConfig.MaxNum)
        else
          bError = true
        end
      end
      rewardConfig.MinNum = minNum
      rewardConfig.MaxNum = maxNum
      table.insert(self.m_arrRandomReward, rewardConfig)
    else
      bError = true
    end
  end
  if bError then
    Log.Error("[RandomBoxData] BoxItemConfig Error, please check!")
  end
end

function RandomBoxData:GetRandomRewardInfo()
  local arrRandomReward = Table.DeepCopy(self.m_arrRandomReward)
  local curLevel = GM.LevelModel:GetCurrentLevel()
  for _, rewardConfig in ipairs(arrRandomReward) do
    if rewardConfig[PROPERTY_TYPE] == EPropertyType.Gold then
      rewardConfig.MinNum = rewardConfig.MinNum * curLevel
      rewardConfig.MaxNum = rewardConfig.MaxNum * curLevel
      for _, rangeConfig in ipairs(rewardConfig.AmountRanges) do
        rangeConfig.MinNum = rangeConfig.MinNum * curLevel
        rangeConfig.MaxNum = rangeConfig.MaxNum * curLevel
      end
    end
  end
  return arrRandomReward
end

function RandomBoxData:GenerateRandomRewards()
  local rewards = {}
  local rangeConfig, reward
  for _, rewardConfig in ipairs(self.m_arrRandomReward) do
    reward = {}
    reward[PROPERTY_TYPE] = rewardConfig[PROPERTY_TYPE]
    rangeConfig = Table.ListWeightSelectOne(rewardConfig.AmountRanges)
    reward[PROPERTY_COUNT] = math.random(rangeConfig.MinNum, rangeConfig.MaxNum)
    if reward[PROPERTY_TYPE] == EPropertyType.Gold then
      reward[PROPERTY_COUNT] = reward[PROPERTY_COUNT] * GM.LevelModel:GetCurrentLevel()
    end
    table.insert(rewards, reward)
  end
  return rewards
end
