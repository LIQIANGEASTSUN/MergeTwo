using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using Metaplay.Core.Math;

namespace GameLogic.Player.DailyTasksV2
{
	public interface IDailyTasksV2Logger
	{
		string Content { get; }

		void ClearContent();

		void OnAccumulateDiminishingValue(int taskStateIndex, int diminishingValue, int accumulatedDiminishingValue);

		void OnBuildStartRequirementsHighPriority();

		void OnBuildStartRequirementsNormalPriority();

		void OnBuildStartRequirementsLowPriority();

		void OnBuildStartRewardsHighPriority();

		void OnBuildStartRewardsNormalPriority();

		void OnBuildStartRewardsLowPriority();

		void OnBuildStopRequirementsHighPriority(List<IItemDefinition> items, PlayerModel playerModel);

		void OnBuildStopRequirementsNormalPriority(List<IItemDefinition> items, PlayerModel playerModel, int desiredRequirementValue);

		void OnBuildStopRequirementsLowPriority(List<IItemDefinition> items, PlayerModel playerModel, int desiredRequirementValue);

		void OnBuildStopRewardsHighPriority(List<IItemDefinition> items, PlayerModel playerModel);

		void OnBuildStopRewardsNormalPriority(List<IItemDefinition> items, PlayerModel playerModel);

		void OnBuildStopRewardsLowPriority(List<IItemDefinition> items, PlayerModel playerModel);

		void OnDiscardMatchBecauseOfBiggerRewardItemValue(IItemDefinition possibleRequirement, int requirementItemValue, IItemDefinition possibleReward, int rewardItemValue);

		void OnDiscardMatchBecauseOfBiggerRewardItemValueMultiplier(IItemDefinition possibleRequirement, int requirementItemValue, IItemDefinition possibleReward, int rewardItemValue, F32 rewardRequirementRatio, F32 maxRewardRequirementRatio);

		void OnDiscardMatchBecauseOfMaxDiminishing(IItemDefinition possibleRequirement, int requirementItemValue, IItemDefinition possibleReward, int rewardItemValue, int diminishingValue, int maxDiminishingValue);

		void OnDiscardMatchBecauseOfSameMergeChain(IItemDefinition possibleRequirement, IItemDefinition possibleReward);

		void OnFinish(IItemDefinition requirementItem, int requirementValue, IItemDefinition rewardItem, int rewardValue, int diminishingReturn);

		void OnLastGeneratedTaskVisibleHotspotHashChange(string previousHash, string updatedHash);

		void OnLastGeneratedTaskVisibleHotspotHashKeep(string hash);

		void OnRemoveExistingRequirementItems(int previousCount, List<IItemDefinition> items, HashSet<int> existingRequirementItemIds);

		void OnRemoveExistingRewardItems(int previousCount, List<IItemDefinition> items, HashSet<int> existingRewardItemIds);

		void OnRemoveHighPriorityExclusiveRequirements(int previousCount, List<IItemDefinition> items);

		void OnRemoveItemsNotInRangeLevelForNextHotspots(int previousCount, List<IItemDefinition> items);

		void OnRemoveItemsNotInRangeLevelForVisibleHotspots(int previousCount, List<IItemDefinition> items);

		void OnRemoveGarageItemsNotMarkedAsRequirementInConfig(int previousCount, List<IItemDefinition> items);

		void OnRemoveNotBubbleItems(int previousCount, List<IItemDefinition> items);

		void OnRemoveNotDiscoveredItems(int previousCount, List<IItemDefinition> items, bool skipping);

		void OnRemovePossibleRequirementsIfDoNotHaveProducer(int previousCount, List<IItemDefinition> items);

		void OnRemovePossibleRewardItemsInLastGeneratedTaskRewardItemsHistory(int previousCount, List<IItemDefinition> items, HashSet<IItemDefinition> history);

		void OnRemovePossibleRequirementsBeingRequiredByNextHotspots(int previousCount, List<IItemDefinition> items);

		void OnRemovePossibleRequirementsBeingRequiredByVisibleHotspots(int previousCount, List<IItemDefinition> items);

		void OnRemoveRewardsIfIsNotInVisibleHotspotsInAreas(int previousCount, List<IItemDefinition> items);

		void OnRemoveRewardsNotRequiredByHotspots(int previousCount, List<IItemDefinition> items);

		void OnResultEmptyRequirements();

		void OnResultEmptyRewards();

		void OnResultFail();

		void OnResultFindStartRequirementsHighRewardsHigh(int attempt);

		void OnResultFindStartRequirementsHighRewardsNormal(int attempt);

		void OnResultFindStartRequirementsHighRewardsLow(int attempt);

		void OnResultFindStartRequirementsNormalRewardsHigh(int attempt);

		void OnResultFindStartRequirementsNormalRewardsNormal(int attempt);

		void OnResultFindStartRequirementsNormalRewardsLow(int attempt);

		void OnResultFindStartRequirementsLowRewardsHigh(int attempt);

		void OnResultFindStartRequirementsLowRewardsNormal(int attempt);

		void OnResultFindStartRequirementsLowRewardsLow(int attempt);

		void OnResultSuccessful();

		void OnSetupGarageItems(List<DailyTasksV2Utils.GarageItemData> garageItemsData);

		void OnSetupHighestLevelPerMergeChainRequirementOnNextHotspots(Dictionary<IMergeChainDefinition, int> highestLevelPerMergeChain);

		void OnSetupHighestLevelPerMergeChainRequirementOnVisibleHotspots(Dictionary<IMergeChainDefinition, int> highestLevelPerMergeChain);

		void OnSetupNextHotspots(List<IHotspotDefinition> nextHotspots, int nextHotspotsMax);

		void OnSetupLastGeneratedTaskRewardItemsHistory(HashSet<IItemDefinition> lastGeneratedTaskRewardItemsHistory);

		void OnSetupVisibleHotspots(List<IHotspotDefinition> visibleHotspots);

		void OnSortRewardsForHighPriorityRequirement(int targetRewardValue, List<(IItemDefinition, int, int)> sortedRewardTriples, IItemDefinition requirementItem);

		void OnSortRewardsForNotHighPriorityRequirement(int targetRewardValue, List<(IItemDefinition, int, int)> sortedRewardTriples);

		void OnStart(int requirementValue, int rewardValue);

		void OnStepStart(int stepNumber);

		void OnStepStop();

		void OnUpdateLastGeneratedTaskRewardItemsHistory(IMergeMansionGameConfig config, List<ItemDef> history, IItemDefinition rewardItem, IItemDefinition removedItem);

		void OnUpdateLastGeneratedTaskRewardItemsHistory(IMergeMansionGameConfig config, List<ItemDef> history, IItemDefinition rewardItem);

		void OnUsingAccumulatedDiminishingValue(int taskStateIndex, int desiredRewardValue, int accumulatedDiminishingValue);
	}
}
