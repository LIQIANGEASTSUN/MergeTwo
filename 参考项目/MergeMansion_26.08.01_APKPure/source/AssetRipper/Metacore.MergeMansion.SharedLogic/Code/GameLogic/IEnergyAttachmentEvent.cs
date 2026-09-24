using Code.GameLogic.GameEvents;
using Code.GameLogic.StatsTracking;
using GameLogic.Player;

namespace Code.GameLogic
{
	public interface IEnergyAttachmentEvent
	{
		EnergyType EnergyType { get; }

		int GetAuxEnergyAttachmentChance(PlayerModel player, StatsTrackingType trackingType);

		int CalculateEnergyAmount(IPlayer player, StatsTrackingType trackingType, int resourcesUsed);

		SoloMilestoneTokenSpawnsInfo GetSpawnedTokenInfo(IPlayer player, StatsTrackingType trackingType);
	}
}
