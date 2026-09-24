namespace GameLogic.Merge;

public struct ActivationCostData
{
	public EnergyType EnergyType; //Field offset: 0x0
	public int ActivationCost; //Field offset: 0x4
	public EnergyModeInfo EnergyMode; //Field offset: 0x8

	public ActivationCostData(EnergyType energyType, int activationCost, EnergyModeInfo energyMode) { }

}

