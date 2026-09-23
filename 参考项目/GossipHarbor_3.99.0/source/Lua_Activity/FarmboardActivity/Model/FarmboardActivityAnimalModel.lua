FarmboardActivityAnimalModel = {}
FarmboardActivityAnimalModel.__index = FarmboardActivityAnimalModel
FarmboardActivityAnimalModel.AnimalCodeWeightPairKey = "AnimalCodeWeightPair"

function FarmboardActivityAnimalModel.Create(virtualDBTable, config)
  local model = setmetatable({}, FarmboardActivityAnimalModel)
  model:Init(virtualDBTable, config)
  return model
end

function FarmboardActivityAnimalModel:Init(virtualDBTable, config)
  self.m_dbTable = virtualDBTable
  self.m_config = config
  local codeWeightPairString = self.m_dbTable:GetValue(FarmboardActivityAnimalModel.AnimalCodeWeightPairKey, "value")
  if codeWeightPairString == nil then
    self.m_codeWeightPairs = Table.Empty
  else
    self.m_codeWeightPairs = ItemUtility.StringToCodeWeightPairs(codeWeightPairString)
  end
end

function FarmboardActivityAnimalModel:_SaveCodeWeightPairs()
  local codeWeightPairString = ItemUtility.CodeWeightPairsToString(self.m_codeWeightPairs)
  self.m_dbTable:Set(FarmboardActivityAnimalModel.AnimalCodeWeightPairKey, "value", codeWeightPairString)
end

function FarmboardActivityAnimalModel:Activate()
  local codeWeightPairs = Table.ListRandomSelectOne(self.m_config)
  self.m_codeWeightPairs = Table.DeepCopy(codeWeightPairs)
  self:_SaveCodeWeightPairs()
end

function FarmboardActivityAnimalModel:CanProduce()
  return #self.m_codeWeightPairs ~= 0
end

function FarmboardActivityAnimalModel:Produce()
  local code = Table.ListWeightSelectOne(self.m_codeWeightPairs).Code
  for index, item in ipairs(self.m_codeWeightPairs) do
    if code == item.Code then
      item.Weight = item.Weight - 1
      if item.Weight == 0 then
        table.remove(self.m_codeWeightPairs, index)
      end
      self:_SaveCodeWeightPairs()
      break
    end
  end
  return code
end
