using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class FishingRodState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int WaterDropletCount { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Item { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public WeightCategory? WeightCategory { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public F32? Weight { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int TapCount { get; set; }

		public FishingRodState()
		{
		}

		public FishingRodState(int waterDropletCount, int item, WeightCategory? weightCategory, F32? weight)
		{
		}

		public bool ShouldProduceItem()
		{
			return false;
		}
	}
}
