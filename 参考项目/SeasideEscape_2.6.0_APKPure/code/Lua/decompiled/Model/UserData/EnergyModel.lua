EnergyModel = setmetatable({}, BaseEnergyModel)
EnergyModel.__index = EnergyModel

function EnergyModel:Init()
  self.m_type = EnergyType.Main
  self.m_propertyType = EPropertyType.Energy
  BaseEnergyModel.Init(self, GM.DBTableManager:GetTable(EDBTableConfigs.Energy))
end

function EnergyModel.GetCurrentEnergyModel(ePropertyType)
  if ePropertyType == EPropertyType.Energy then
    return GM.EnergyModel
  end
  return GM.EnergyModel
end

function EnergyModel.OnEnergyConsumed(itemModel, nCostEnergy, gameMode, newItemPos)
  GM.ActivityManager:GetModel(ActivityType.SurpriseChestOneTime):OnEnergyCost(itemModel, nCostEnergy, gameMode)
  EventDispatcher.DispatchEvent(EEventType.ConsumeEnergy, {
    pos = itemModel:GetPosition(),
    num = nCostEnergy,
    gameMode = gameMode,
    newItemPos = newItemPos
  })
end
