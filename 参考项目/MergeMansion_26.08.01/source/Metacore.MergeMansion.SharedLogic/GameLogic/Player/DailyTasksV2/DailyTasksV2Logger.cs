using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using Metaplay.Core.Math;

namespace GameLogic.Player.DailyTasksV2
{
	public class DailyTasksV2Logger : IDailyTasksV2Logger
	{
		[NonSerialized]
		public int currentAttempt;

		[NonSerialized]
		public int currentRequirementValue;

		[NonSerialized]
		public int currentRewardValue;

		[NonSerialized]
		public int currentStep;

		[NonSerialized]
		public string content;

		public string Content => null;

		public void ClearContent()
		{
		}

		public void OnAccumulateDiminishingValue(int taskStateIndex, int diminishingValue, int accumulatedDiminishingValue)
		{
		}

		public void OnBuildStartRequirementsHighPriority()
		{
		}

		public void OnBuildStartRequirementsNormalPriority()
		{
		}

		public void OnBuildStartRequirementsLowPriority()
		{
		}

		public void OnBuildStartRewardsHighPriority()
		{
		}

		public void OnBuildStartRewardsNormalPriority()
		{
		}

		public void OnBuildStartRewardsLowPriority()
		{
		}

		public void OnBuildStopRequirementsHighPriority(List<IItemDefinition> items, PlayerModel playerModel)
		{
		}

		public void OnBuildStopRequirementsNormalPriority(List<IItemDefinition> items, PlayerModel playerModel, int desiredRequirementValue)
		{
		}

		public void OnBuildStopRequirementsLowPriority(List<IItemDefinition> items, PlayerModel playerModel, int desiredRequirementValue)
		{
		}

		public void OnBuildStopRewardsHighPriority(List<IItemDefinition> items, PlayerModel playerModel)
		{
		}

		public void OnBuildStopRewardsNormalPriority(List<IItemDefinition> items, PlayerModel playerModel)
		{
		}

		public void OnBuildStopRewardsLowPriority(List<IItemDefinition> items, PlayerModel playerModel)
		{
		}

		public void OnDiscardMatchBecauseOfBiggerRewardItemValue(IItemDefinition possibleRequirement, int requirementItemValue, IItemDefinition possibleReward, int rewardItemValue)
		{
		}

		public void OnDiscardMatchBecauseOfBiggerRewardItemValueMultiplier(IItemDefinition possibleRequirement, int requirementItemValue, IItemDefinition possibleReward, int rewardItemValue, F32 rewardRequirementRatio, F32 maxRewardRequirementRatio)
		{
		}

		public void OnDiscardMatchBecauseOfMaxDiminishing(IItemDefinition possibleRequirement, int requirementItemValue, IItemDefinition possibleReward, int rewardItemValue, int diminishingValue, int maxDiminishingValue)
		{
		}

		public void OnDiscardMatchBecauseOfSameMergeChain(IItemDefinition possibleRequirement, IItemDefinition possibleReward)
		{
		}

		public void OnFinish(IItemDefinition requirementItem, int requirementValue, IItemDefinition rewardItem, int rewardValue, int diminishingReturn)
		{
		}

		public void OnLastGeneratedTaskVisibleHotspotHashChange(string previousHash, string updatedHash)
		{
		}

		public void OnLastGeneratedTaskVisibleHotspotHashKeep(string hash)
		{
		}

		public void OnRemoveExistingRequirementItems(int previousCount, List<IItemDefinition> items, HashSet<int> existingRequirementItemIds)
		{
		}

		public void OnRemoveExistingRewardItems(int previousCount, List<IItemDefinition> items, HashSet<int> existingRewardItemIds)
		{
		}

		public void OnRemoveHighPriorityExclusiveRequirements(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveItemsNotInRangeLevelForNextHotspots(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveItemsNotInRangeLevelForVisibleHotspots(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveGarageItemsNotMarkedAsRequirementInConfig(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveNotBubbleItems(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveNotDiscoveredItems(int previousCount, List<IItemDefinition> items, bool skipping)
		{
		}

		public void OnRemovePossibleRequirementsIfDoNotHaveProducer(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemovePossibleRewardItemsInLastGeneratedTaskRewardItemsHistory(int previousCount, List<IItemDefinition> items, HashSet<IItemDefinition> history)
		{
		}

		public void OnRemovePossibleRequirementsBeingRequiredByNextHotspots(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemovePossibleRequirementsBeingRequiredByVisibleHotspots(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveRewardsIfIsNotInVisibleHotspotsInAreas(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnRemoveRewardsNotRequiredByHotspots(int previousCount, List<IItemDefinition> items)
		{
		}

		public void OnResultEmptyRequirements()
		{
		}

		public void OnResultEmptyRewards()
		{
		}

		public void OnResultFail()
		{
		}

		public void OnResultFindStartRequirementsHighRewardsHigh(int attempt)
		{
		}

		public void OnResultFindStartRequirementsHighRewardsNormal(int attempt)
		{
		}

		public void OnResultFindStartRequirementsHighRewardsLow(int attempt)
		{
		}

		public void OnResultFindStartRequirementsNormalRewardsHigh(int attempt)
		{
		}

		public void OnResultFindStartRequirementsNormalRewardsNormal(int attempt)
		{
		}

		public void OnResultFindStartRequirementsNormalRewardsLow(int attempt)
		{
		}

		public void OnResultFindStartRequirementsLowRewardsHigh(int attempt)
		{
		}

		public void OnResultFindStartRequirementsLowRewardsNormal(int attempt)
		{
		}

		public void OnResultFindStartRequirementsLowRewardsLow(int attempt)
		{
		}

		public void OnResultSuccessful()
		{
		}

		public void OnSetupGarageItems(List<DailyTasksV2Utils.GarageItemData> garageItemsData)
		{
		}

		public void OnSetupHighestLevelPerMergeChainRequirementOnNextHotspots(Dictionary<IMergeChainDefinition, int> highestLevelPerMergeChain)
		{
		}

		public void OnSetupHighestLevelPerMergeChainRequirementOnVisibleHotspots(Dictionary<IMergeChainDefinition, int> highestLevelPerMergeChain)
		{
		}

		public void OnSetupNextHotspots(List<IHotspotDefinition> nextHotspots, int nextHotspotsMax)
		{
		}

		public void OnSetupLastGeneratedTaskRewardItemsHistory(HashSet<IItemDefinition> lastGeneratedTaskRewardItemsHistory)
		{
		}

		public void OnSetupVisibleHotspots(List<IHotspotDefinition> visibleHotspots)
		{
		}

		public void OnSortRewardsForHighPriorityRequirement(int targetRewardValue, List<(IItemDefinition, int, int)> sortedRewardTriples, IItemDefinition requirementItem)
		{
		}

		public void OnSortRewardsForNotHighPriorityRequirement(int targetRewardValue, List<(IItemDefinition, int, int)> sortedRewardTriples)
		{
		}

		public void LogSortedRewardTriples(List<(IItemDefinition, int, int)> sortedRewardTriples)
		{
		}

		public void OnStart(int requirementValue, int rewardValue)
		{
		}

		public void OnStepStart(int stepNumber)
		{
		}

		public void OnStepStop()
		{
		}

		public void OnUpdateLastGeneratedTaskRewardItemsHistory(IMergeMansionGameConfig config, List<ItemDef> history, IItemDefinition rewardItem, IItemDefinition removedItem)
		{
		}

		public void OnUpdateLastGeneratedTaskRewardItemsHistory(IMergeMansionGameConfig config, List<ItemDef> history, IItemDefinition rewardItem)
		{
		}

		public void OnUsingAccumulatedDiminishingValue(int taskStateIndex, int desiredRewardValue, int accumulatedDiminishingValue)
		{
		}

		public void Log(string message)
		{
		}

		public void LogRequirementItems(string message, List<IItemDefinition> items, PlayerModel playerModel)
		{
		}

		public void LogRequirementItems(string message, List<IItemDefinition> items, PlayerModel playerModel, int desiredRequirementValue)
		{
		}

		public void LogRewardItems(string message, List<IItemDefinition> items, PlayerModel playerModel)
		{
		}
	}
}
