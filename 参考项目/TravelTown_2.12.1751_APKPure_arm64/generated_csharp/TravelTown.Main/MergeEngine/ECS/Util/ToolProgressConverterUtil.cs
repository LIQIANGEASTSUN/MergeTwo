using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;

namespace MergeEngine.ECS.Util
{
	public static class ToolProgressConverterUtil
	{
		public static float GetProgressFromItem(IMergeItem item, IMergingConfigurationModel mergingConfig)
		{
			return 0f;
		}

		public static IMergeItem GetItemFromProgress(PlayerResourceEnum toolType, float progressValue, IResourcesConfigurationModel resourcesConfig)
		{
			return null;
		}

		public static int GetItemLevelSumPerChain(PlayerResourceEnum toolType, float progressValue, IResourcesConfigurationModel resourcesConfig, Dictionary<int, int> powLookup)
		{
			return 0;
		}

		public static int GetItemLevelSumPerChain(float progressValue, IMergeGraphItem toolGraph)
		{
			return 0;
		}
	}
}
