using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Boosting
{
	[MetaSerializable]
	public sealed class BoosterState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public F32 BoostMultiplier { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime LastCalculationTime { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public F32 SpawnBoostMultiplier { get; set; }

		public BoosterState()
		{
		}

		public BoosterState(F32 boostMultiplier, F32 spawnBoostMultiplier, MetaTime lastCalculationTime)
		{
		}
	}
}
