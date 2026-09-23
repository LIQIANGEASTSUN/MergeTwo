using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Types;
using GameLogic.DailyTasksV2;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Metaplay.Core;

namespace GameLogic.Player.DailyTasksV2
{
	public static class DailyTasksV2Utils
	{
		public class GarageItemData
		{
			public IItemDefinition ItemDefinition { get; }

			public int AgeInDays { get; }

			public int AgeValue { get; }

			public int ItemValue { get; }

			public int Score { get; }

			public GarageItemData(IItemDefinition itemDefinition, int ageInDays, int ageValue, int itemValue)
			{
			}
		}

		public class Result
		{
			public int attempt;

			public int diminishingReturn;

			public IItemDefinition requirementItem;

			public int requirementItemValue;

			public IItemDefinition rewardItem;

			public int rewardItemValue;

			public bool successful;
		}

		public class AlgorithmContext
		{
			public List<GarageItemData> GarageItemsData { get; set; }

			public Dictionary<IMergeChainDefinition, int> HighestLevelPerMergeChainRequirementOnNextHotspots { get; set; }

			public Dictionary<IMergeChainDefinition, int> HighestLevelPerMergeChainRequirementOnVisibleHotspots { get; set; }

			public HashSet<IItemDefinition> LastGeneratedTaskRewardItemsHistory { get; set; }

			public List<IItemDefinition> PossibleRequirementsHighPriority { get; set; }

			public List<IItemDefinition> PossibleRequirementsNormalPriority { get; set; }

			public List<IItemDefinition> PossibleRequirementsLowPriority { get; set; }

			public List<IItemDefinition> PossibleRewardsHighPriority { get; set; }

			public List<IItemDefinition> PossibleRewardsNormalPriority { get; set; }

			public List<IItemDefinition> PossibleRewardsLowPriority { get; set; }

			public Result Result { get; set; }

			public string VisibleHotspotsHash { get; set; }
		}

		public static (MetaTime, MetaTime) GetCurrentCycleTimeSpan(IPlayer player)
		{
			return default((MetaTime, MetaTime));
		}

		public static (MetaTime, MetaTime) GetTimeExtensionTimeSpan(IPlayer player)
		{
			return default((MetaTime, MetaTime));
		}

		public static (RewardExperience, RewardBoultonLeaguePoints, int) GetExtraRewardsForDailyTask(PlayerModel playerModel, DailyTaskV2State taskState)
		{
			return default((RewardExperience, RewardBoultonLeaguePoints, int));
		}

		public static (IItemDefinition, IItemDefinition, int, int) RollStepRequirementAndReward(PlayerModel playerModel, List<string> algorithmAttempts, int desiredRequirementValue, int desiredRewardValue, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds, IDailyTasksV2Logger logger)
		{
			return default((IItemDefinition, IItemDefinition, int, int));
		}

		public static void BuildPossibleRequirementsHighPriority(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds)
		{
		}

		public static void BuildPossibleRequirementsNormalPriority(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds, int desiredRequirementValue)
		{
		}

		public static void BuildPossibleRequirementsLowPriority(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds, int desiredRequirementValue)
		{
		}

		public static void BuildPossibleRewardsHighPriority(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static void BuildPossibleRewardsNormalPriority(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static void BuildPossibleRewardsLowPriority(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static Result FindResult(PlayerModel playerModel, IDailyTasksV2Logger logger, int desiredRequirementValue, int desiredRewardValue, List<IItemDefinition> possibleRequirements, List<IItemDefinition> possibleRewards, bool checkMaxDiminishingValue, bool targetRewardValueBasedOnRequirement, bool rewardValueBiggerClause)
		{
			return null;
		}

		public static string GenerateVisibleHotspotsHash(PlayerModel playerModel)
		{
			return null;
		}

		public static List<IItemDefinition> GetAllPossibleRequirementItems(PlayerModel playerModel)
		{
			return null;
		}

		public static List<IItemDefinition> GetAllPossibleRewardItems(PlayerModel playerModel)
		{
			return null;
		}

		public static void RunStep1(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static void RunStep2(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static void RunStep3(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static void RunStep4(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds)
		{
		}

		public static void GetPriorityLists(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds, int desiredRequirementValue, string listsInstruction, out List<IItemDefinition> possibleRequirements, out List<IItemDefinition> possibleRewards)
		{
			possibleRequirements = null;
			possibleRewards = null;
		}

		public static Result RunAttempt(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, int desiredRequirementValue, int desiredRewardValue, List<IItemDefinition> possibleRequirements, List<IItemDefinition> possibleRewards)
		{
			return null;
		}

		public static void LogResultFindStart(IDailyTasksV2Logger logger, int attempt, string listsInstruction)
		{
		}

		public static void RunStep5(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, HashSet<int> existingRequirementItemIds, HashSet<int> existingRewardItemIds, int desiredRequirementValue, int desiredRewardValue, List<string> algorithmAttempts)
		{
		}

		public static void RemoveExistingRequirementItems(IDailyTasksV2Logger logger, List<IItemDefinition> items, HashSet<int> existingRequirementItemIds)
		{
		}

		public static void RemoveExistingRewardItems(IDailyTasksV2Logger logger, List<IItemDefinition> items, HashSet<int> existingRewardItemIds)
		{
		}

		public static void RemovePossibleItemsInLastGeneratedTaskRewardItemsHistory(IDailyTasksV2Logger logger, List<IItemDefinition> items, HashSet<IItemDefinition> filter)
		{
		}

		public static void RemoveHighPriorityExclusiveRequirements(IDailyTasksV2Logger logger, PlayerModel playerModel, List<IItemDefinition> possibleRequirements)
		{
		}

		public static void RemoveItemsNotInRangeLevel(IPlayer player, List<IItemDefinition> items, Dictionary<IMergeChainDefinition, int> highestLevelPerMergeChain)
		{
		}

		public static void RemoveItemsNotMarkedAsRequirementInConfig(IDailyTasksV2Logger logger, PlayerModel playerModel, List<IItemDefinition> items)
		{
		}

		public static void RemoveItemsOfSameMergeChainUnderLeveled(PlayerModel playerModel, List<IItemDefinition> items, Dictionary<IMergeChainDefinition, int> dictionary)
		{
		}

		public static void RemovePossibleRequirementsIfDoNotHaveProducer(PlayerModel playerModel, List<IItemDefinition> items)
		{
		}

		public static void RemoveNotBubbleItems(IDailyTasksV2Logger logger, List<IItemDefinition> items)
		{
		}

		public static void RemoveNotDiscoveredItems(IDailyTasksV2Logger logger, PlayerModel playerModel, List<IItemDefinition> items)
		{
		}

		public static void RemoveRewardsIfIsNotInVisibleHotspotsInAreas(IDailyTasksV2Logger logger, PlayerModel playerModel, List<IItemDefinition> possibleRewards)
		{
		}

		public static void RemoveRewardsNotRequiredByHotspots(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger, List<IItemDefinition> possibleRewards)
		{
		}

		public static void SortPossibleRequirementsByItemValue(PlayerModel playerModel, int desiredRequirementValue, List<IItemDefinition> possibleRequirements)
		{
		}

		public static int CalculateAgeInDays(MergeItem mergeItem, MetacoreTime now)
		{
			return 0;
		}

		public static int CalculateAgeValue(int ageInDays, List<int> ageValues)
		{
			return 0;
		}

		public static List<GarageItemData> GetGarageItemsData(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
			return null;
		}

		public static HashSet<IItemDefinition> GetLastGeneratedTaskRewardItemsHistory(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
			return null;
		}

		public static Dictionary<IMergeChainDefinition, int> GetHighestLevelPerMergeChainRequirementOnHotspots(List<IHotspotDefinition> hotspots, IPlayer player)
		{
			return null;
		}

		public static Dictionary<IMergeChainDefinition, int> GetHighestLevelPerMergeChainRequirementOnNextHotspots(PlayerModel playerModel, IDailyTasksV2Logger logger)
		{
			return null;
		}

		public static Dictionary<IMergeChainDefinition, int> GetHighestLevelPerMergeChainRequirementOnVisibleHotspots(PlayerModel playerModel, IDailyTasksV2Logger logger)
		{
			return null;
		}

		public static List<IHotspotDefinition> GetNextHotspots(PlayerModel playerModel, int nextHotspotsMax)
		{
			return null;
		}

		public static void CustomSort<T>(PlayerModel playerModel, List<T> list, int sortingRange, Func<T, int> primaryAscendingValue, Func<T, int> secondaryDescendingValue, Func<T, int> uniqueValue)
		{
		}

		public static List<IHotspotDefinition> GetVisibleHotspotsValidForDailyTasksV2(PlayerModel playerModel)
		{
			return null;
		}

		public static void SortTriples(PlayerModel playerModel, List<(IItemDefinition, int, int)> triples)
		{
		}

		public static void UpdateLastGeneratedTaskVisibleHotspotHash(PlayerModel playerModel, AlgorithmContext context, IDailyTasksV2Logger logger)
		{
		}

		public static void UpdateLastGeneratedTaskRewardItemsHistory(PlayerModel playerModel, Result result, IDailyTasksV2Logger logger)
		{
		}

		public static bool TryGetTaskCustomization(IPlayer player, DailyTaskV2Id taskId, out DailyTaskV2StateCustomizationForBoultonLeague task)
		{
			task = null;
			return false;
		}

		public static void GenerateDailyTaskV2Customization(PlayerModel playerModel, DailyTaskV2Id taskId)
		{
		}

		public static void GenerateDailyTaskV2Customization(PlayerModel playerModel, DailyTaskV2State taskState)
		{
		}

		public static void GenerateAllDailyTasksV2Customizations(PlayerModel playerModel)
		{
		}

		public static bool HasValidTasksCustomizations(PlayerModel playerModel)
		{
			return false;
		}
	}
}
