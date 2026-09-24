using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Util
{
	public static class CombiningUtil
	{
		public static List<Combination> FindReadyCombinations(CombiningComponent combiningComponent)
		{
			return null;
		}

		public static List<MergeItemWeakReference> RemoveConsumedItems(CombiningComponent combiningComponent, Combination combination)
		{
			return null;
		}

		public static Combination TryFindSuitableCombination(List<Combination> recipes, PositionComponent item)
		{
			return null;
		}

		public static List<Combination> GetCombinationsInProgressWithItem(CombiningComponent combiningComponent, PositionComponent item)
		{
			return null;
		}

		public static List<Combination> GetCombinationsInProgress(CombiningComponent combiningComponent)
		{
			return null;
		}
	}
}
