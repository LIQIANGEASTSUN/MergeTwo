using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.MiniEvents
{
	public interface IMiniEventFeatures
	{
		bool TryGetProducerTimeSkipPriceOverride(IPlayer player, out F64 outPrice);

		bool TryGetProducerCapacityOverride(IPlayer player, out int outValue);

		bool TryGetProducerTimerOverride(IPlayer player, out MetaDuration outValue);

		bool TryGetBubblePriceOverride(IPlayer player, out int outPrice);
	}
}
