ItemSpreadHelper = {}
ItemSpreadHelper.__index = ItemSpreadHelper
local SPLIT_CHAR = ","

function ItemSpreadHelper.GetCodeByWeight(spreadWeightConfig, weight)
  for _, cfg in ipairs(spreadWeightConfig) do
    if weight <= cfg.Weight then
      return cfg.Code
    else
      weight = weight - cfg.Weight
    end
  end
  Log.Error("ItemSpreadHelper.GetCodeByWeight error")
  return 1 <= #spreadWeightConfig and spreadWeightConfig[1].Code or ItemType.Energy01
end

function ItemSpreadHelper.GetFirstCodeFromWeightSequence(spreadWeightConfig, weightSequence)
  local firstWeight
  local startIndex, endIndex = string.find(weightSequence, SPLIT_CHAR, 1, true)
  if startIndex == nil then
    firstWeight = tonumber(weightSequence) or 0
    weightSequence = nil
  else
    firstWeight = tonumber(string.sub(weightSequence, 1, startIndex - 1)) or 0
    weightSequence = string.sub(weightSequence, endIndex + 1)
  end
  local code = ItemSpreadHelper.GetCodeByWeight(spreadWeightConfig, firstWeight)
  return code, weightSequence
end

function ItemSpreadHelper.GenerateWeightSequence(spreadWeightConfig)
  local sumWeight = 0
  for _, item in ipairs(spreadWeightConfig) do
    sumWeight = sumWeight + item.Weight
  end
  local array = ItemSpreadHelper.Format1ToNArray(sumWeight)
  ItemSpreadHelper.RandomShuffleNumberArray(array)
  return table.concat(array, SPLIT_CHAR)
end

function ItemSpreadHelper.Format1ToNArray(N)
  local array = {}
  for i = 1, N do
    array[i] = i
  end
  return array
end

function ItemSpreadHelper.RandomShuffleNumberArray(array, startIndex, endIndex)
  startIndex = startIndex or 1
  endIndex = endIndex or #array
  local index, temp
  for i = endIndex, startIndex, -1 do
    index = math.random(startIndex, i)
    temp = array[index]
    array[index] = array[i]
    array[i] = temp
  end
end
