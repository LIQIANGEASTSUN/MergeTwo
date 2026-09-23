using System.Collections.Generic;
using Code.Bot.Model;
using GameLogic.Config;
using GameLogic.MergeChains;
using GameLogic.Player.Items;

namespace Code.Bot.Task
{
	public static class TasksHelper
	{
		public static HashSet<string> GetRequiredChains(RuntimeModel runtimeModel, MainBoardData mainBoardData)
		{
			return null;
		}

		public static Dictionary<int, List<int>> FindAllItemsInChain(RuntimeModel runtimeModel, IItemDefinition requiredItem, int maxChainDepth = 10)
		{
			return null;
		}

		public static bool Contains(Dictionary<int, List<int>> dict, int targetItem)
		{
			return false;
		}

		public static HashSet<int> FilterChainItems(RuntimeModel runtimeModel, IItemDefinition requiredItem)
		{
			return null;
		}

		public static HashSet<int> FilterChainActivators(RuntimeModel runtimeModel, IItemDefinition requiredItem)
		{
			return null;
		}

		public static IEnumerable<int> GatherSpawnersFromEarlierInChain(RuntimeModel runtimeModel, IMergeChainDefinition mergeChain, int itemLevelNumber)
		{
			return null;
		}

		public static List<IItemDefinition> GetSinkChilds(IMergeMansionGameConfig config, IItemDefinition target)
		{
			return null;
		}
	}
}
