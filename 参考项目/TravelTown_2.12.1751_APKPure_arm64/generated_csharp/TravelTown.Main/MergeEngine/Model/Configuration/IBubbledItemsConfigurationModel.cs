using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.BubbleBlaster.Configuration;

namespace MergeEngine.Model.Configuration
{
	public interface IBubbledItemsConfigurationModel
	{
		BubbledItemsConfig BubbledItemsConfig { get; }

		NewBubbledItemsConfig NewBubbledItemsConfig { get; }

		NewBubbledItemsConfig CoreBoardNewBubbledItemsConfig { get; }

		List<WeightedItemSpawnable> ExpiredBubbleSpawnedItems { get; }

		List<WeightedItemSpawnable> CompensationForRemovedBubblesItemsSpawnList { get; }

		BubbleBlasterTierConfig GetBlasterTierForHc(int hcValue);
	}
}
