using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;

namespace MergeEngine.ECS.Util
{
	public static class BoardItemUtil
	{
		public static int? GetBoardItemIndex(PositionComponent positionComponent)
		{
			return null;
		}

		public static PositionComponent GetPositionItemClosestToInventory(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel)
		{
			return null;
		}

		public static bool CanMergeAnyItemOnly(MergeComponent firstMerge, MergeComponent secondMerge, IMergingConfigurationModel _mergingConfigurationModel)
		{
			return false;
		}

		public static bool CanMergeSpecificItem(MergeComponent firstMerge, MergeComponent secondMerge, IMergingConfigurationModel _mergingConfigurationModel)
		{
			return false;
		}
	}
}
