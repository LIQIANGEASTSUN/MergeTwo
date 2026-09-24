namespace Code.GameLogic;

public interface IEnergyAttachmentEvent
{

	public EnergyType EnergyType
	{
		 get { } //Length: 0
	}

	public int CalculateEnergyAmount(IPlayer player, StatsTrackingType trackingType, int resourcesUsed) { }

	public EnergyType get_EnergyType() { }

	public int GetAuxEnergyAttachmentChance(PlayerModel player, StatsTrackingType trackingType) { }

	public SoloMilestoneTokenSpawnsInfo GetSpawnedTokenInfo(IPlayer player, StatsTrackingType trackingType) { }

}

