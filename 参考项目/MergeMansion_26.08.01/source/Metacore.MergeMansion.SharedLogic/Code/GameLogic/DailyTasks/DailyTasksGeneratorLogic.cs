using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.DailyTasks;
using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace Code.GameLogic.DailyTasks
{
	public static class DailyTasksGeneratorLogic
	{
		public static List<DailyTaskDefinition> RollDailyTasksForPlayer(PlayerModel playerModel, int dailyTasksCount, IEnumerable<DailyTaskState> notCompleteTasks)
		{
			return null;
		}

		public static Dictionary<DailyTaskDefinition, F32> CalculateWeightByTask(IMergeMansionGameConfig gameConfig, List<DailyTaskDefinition> poolTasks, Dictionary<HotspotDefinition, List<IItemDefinition>> itemsRequirementByHotspot, Dictionary<DailyTaskDefinition, HashSet<IMergeChainDefinition>> rewardMergeChainsByTask, IEnumerable<IMergeChainDefinition> currentTasksRewards)
		{
			return null;
		}

		public static DailyTaskDefinition ChooseTask(RandomPCG rng, List<DailyTaskDefinition> eligibleTasks, List<DailyTaskDefinition> tasks, Dictionary<DailyTaskDefinition, F32> weightByTask, List<DailyTaskDefinition> chosenTasks)
		{
			return null;
		}

		public static List<DailyTaskDefinition> GetEligibleTasks(PlayerModel playerModel, List<DailyTaskDefinition> tasks)
		{
			return null;
		}

		public static Dictionary<HotspotDefinition, List<IItemDefinition>> GetItemsRequirementByVisibleHotspot(PlayerModel playerModel)
		{
			return null;
		}

		public static List<IMergeChainDefinition> GetRewardMergeChainsGivenDailyTaskStates(IMergeMansionGameConfig gameConfig, IEnumerable<DailyTaskState> notCompleteTasks)
		{
			return null;
		}

		public static Dictionary<DailyTaskDefinition, HashSet<IMergeChainDefinition>> GetRewardMergeChainsByTask(IMergeMansionGameConfig gameConfig, List<DailyTaskDefinition> poolTasks)
		{
			return null;
		}

		public static void RecalculateWeightsGivenChosenTask(PlayerModel playerModel, Dictionary<DailyTaskDefinition, HashSet<IMergeChainDefinition>> rewardMergeChainsByTask, Dictionary<DailyTaskDefinition, F32> weightByTask, DailyTaskDefinition chosenTask)
		{
		}
	}
}
