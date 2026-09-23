using GameLogic.Player;
using GameLogic.Player.Modes;

namespace GameLogic.Merge
{
	public struct ActivationCostData
	{
		public EnergyType EnergyType;

		public int ActivationCost;

		public EnergyModeInfo EnergyMode;

		public ActivationCostData(EnergyType energyType, int activationCost, EnergyModeInfo energyMode)
		{
			EnergyType = default(EnergyType);
			ActivationCost = 0;
			EnergyMode = null;
		}
	}
}
