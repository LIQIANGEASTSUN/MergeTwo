using Code.GameLogic.StatsTracking;
using GameLogic.Player;

namespace Code.GameLogic.GameEvents
{
	public interface IItemActivationEvent
	{
		(EnergyType, int) GetItemActivationBonusChanceAuxEnergyAttachmentChance(IPlayer player, StatsTrackingType trackingType);

		int CalculateEnergyAmount(IPlayer player, StatsTrackingType trackingType, int resourcesUsed);
	}
}
