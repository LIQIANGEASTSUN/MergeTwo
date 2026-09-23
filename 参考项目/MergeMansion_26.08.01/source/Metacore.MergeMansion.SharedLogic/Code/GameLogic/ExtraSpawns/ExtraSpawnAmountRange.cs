using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	public struct ExtraSpawnAmountRange
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public F32 Min { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 Max { get; set; }

		public ExtraSpawnAmountRange(F32 min, F32 max)
		{
			Min = default(F32);
			Max = default(F32);
		}

		public F32 GetAmount(RandomPCG random)
		{
			return default(F32);
		}
	}
}
