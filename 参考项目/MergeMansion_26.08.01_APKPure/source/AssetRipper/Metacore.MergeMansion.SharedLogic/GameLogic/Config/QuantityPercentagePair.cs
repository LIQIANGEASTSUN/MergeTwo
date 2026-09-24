using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class QuantityPercentagePair
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public F32 Quantity { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 Percentage { get; set; }

		public QuantityPercentagePair()
		{
		}

		public QuantityPercentagePair(F32 quantity, F32 percentage)
		{
		}
	}
}
