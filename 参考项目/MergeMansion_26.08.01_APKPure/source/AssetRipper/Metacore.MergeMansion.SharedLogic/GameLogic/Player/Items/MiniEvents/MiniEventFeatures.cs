using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.MiniEvents
{
	[MetaSerializable]
	public class MiniEventFeatures : IMiniEventFeatures
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<F64?> ProducerTimeSkipPrice { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<int?> ProducerCapacity { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<MetaDuration?> ProducerTimer { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<int?> BubblePrice { get; set; }

		public static MiniEventFeatures NoMiniEventFeatures => null;

		public bool TryGetProducerTimeSkipPriceOverride(IPlayer player, out F64 outPrice)
		{
			outPrice = default(F64);
			return false;
		}

		public bool TryGetProducerCapacityOverride(IPlayer player, out int outValue)
		{
			outValue = default(int);
			return false;
		}

		public bool TryGetProducerTimerOverride(IPlayer player, out MetaDuration outValue)
		{
			outValue = default(MetaDuration);
			return false;
		}

		public bool TryGetBubblePriceOverride(IPlayer player, out int outPrice)
		{
			outPrice = default(int);
			return false;
		}

		public MiniEventFeatures()
		{
		}

		public MiniEventFeatures(List<F64?> producerTimeSkipPrice, List<int?> producerCapacity, List<MetaDuration?> producerTimer, List<int?> bubblePrice)
		{
		}
	}
}
