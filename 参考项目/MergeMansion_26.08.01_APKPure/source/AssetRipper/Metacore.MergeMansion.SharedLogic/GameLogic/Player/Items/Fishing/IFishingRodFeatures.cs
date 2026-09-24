using System.Collections.Generic;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;

namespace GameLogic.Player.Items.Fishing
{
	public interface IFishingRodFeatures
	{
		bool IsFishingRod { get; }

		IReadOnlyList<IItemOdds> ItemOdds { get; }

		IPlacement Placement { get; }

		FishingRodRarity Rarity { get; }

		int[] FishWeightCategoryOddsOverrides { get; }

		int[] FishWeightCategorySizePercentagesOverrides { get; }

		int WaterDropletOverride { get; }
	}
}
