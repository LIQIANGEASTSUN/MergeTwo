namespace Code.GameLogic.GameEvents;

public interface IItemActivationEvent
{

	public int CalculateEnergyAmount(IPlayer player, StatsTrackingType trackingType, int resourcesUsed) { }

	public ValueTuple<EnergyType, Int32> GetItemActivationBonusChanceAuxEnergyAttachmentChance(IPlayer player, StatsTrackingType trackingType) { }

}

