using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class FishingRodFeatures : IFishingRodFeatures
	{
		public static readonly FishingRodFeatures NoFishingRodFeatures;

		[IgnoreDataMember]
		IReadOnlyList<IItemOdds> IFishingRodFeatures.ItemOdds => null;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsFishingRod { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<ItemOdds> ItemOdds { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public IPlacement Placement { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public FishingRodRarity Rarity { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int[] FishWeightCategoryOddsOverrides { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int[] FishWeightCategorySizePercentagesOverrides { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int WaterDropletOverride { get; set; }

		public FishingRodFeatures()
		{
		}

		public FishingRodFeatures(IEnumerable<(int, int)> itemWeightPairs, FishingRodRarity rarity, string fishWeightCategoryOddsOverrides, string fishWeightCategorySizePercentagesOverrides, string waterDropletOverride)
		{
		}

		public FishingRodFeatures(bool isFishingRod, List<ItemOdds> itemOdds, IPlacement placement, FishingRodRarity rarity, string fishWeightCategoryOddsOverrides, string fishWeightCategorySizePercentagesOverrides, string waterDropletOverride)
		{
		}
	}
}
