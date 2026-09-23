using System.Collections.Generic;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Boosting
{
	[MetaSerializable]
	public sealed class BoosterFeatures : IBoosterFeatures
	{
		public static readonly BoosterFeatures NoBoost;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool DoesBoost { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public BoostAreaStyle BoostAreaStyle { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<int> AffectedItemsSet { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public F32 BoostFactor { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public F32 SpawnBoostFactor { get; set; }

		public BoosterFeatures()
		{
		}

		public BoosterFeatures(bool boosts, BoostAreaStyle areaStyle, float factor, float spawnFactor)
		{
		}

		public BoosterFeatures(bool boosts, BoostAreaStyle areaStyle, float factor, params int[] affectedItems)
		{
		}

		public BoosterFeatures(BoostAreaStyle boostAreaStyle, List<int> affectedItemsSet, F32 boostFactor, F32 spawnFactor)
		{
		}

		public bool Equals(BoosterFeatures other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
