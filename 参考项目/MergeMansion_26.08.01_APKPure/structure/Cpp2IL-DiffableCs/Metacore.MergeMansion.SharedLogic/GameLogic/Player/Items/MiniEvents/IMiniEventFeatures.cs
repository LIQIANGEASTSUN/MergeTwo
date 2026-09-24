namespace GameLogic.Player.Items.MiniEvents;

public interface IMiniEventFeatures
{

	public bool TryGetBubblePriceOverride(IPlayer player, out int outPrice) { }

	public bool TryGetProducerCapacityOverride(IPlayer player, out int outValue) { }

	public bool TryGetProducerTimerOverride(IPlayer player, out MetaDuration outValue) { }

	public bool TryGetProducerTimeSkipPriceOverride(IPlayer player, out F64 outPrice) { }

}

