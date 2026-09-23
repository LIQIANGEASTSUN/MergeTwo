using System.Collections.Generic;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.OverrideSpawnChance
{
	[MetaSerializable]
	public class OverrideSpawnChanceFeatures : IOverrideSpawnChanceFeatures
	{
		public static readonly OverrideSpawnChanceFeatures NoOverrideSpawnChance;

		[MetaMember(1, MetaMemberFlags.None)]
		public List<OverrideSpawnChance> OverrideSpawnChances { get; set; }

		public OverrideSpawnChanceFeatures(List<OverrideSpawnChance> overrideSpawnChances)
		{
		}

		public OverrideSpawnChanceFeatures()
		{
		}
	}
}
