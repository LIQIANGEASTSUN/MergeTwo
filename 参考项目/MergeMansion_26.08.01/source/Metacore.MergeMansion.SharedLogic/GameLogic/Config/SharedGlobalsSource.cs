using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Config
{
	public class SharedGlobalsSource : GameConfigKeyValue<SharedGlobalsSource>
	{
		public class SharedGlobalsTransformer : IKeyValueStructureTransformer<SharedGlobals, SharedGlobalsSource>
		{
			public IEnumerable<VariantConfigStructureMember> Transform(IEnumerable<VariantConfigStructureMember> source)
			{
				return null;
			}

			public VariantConfigStructureMember ChangeType(VariantConfigStructureMember source)
			{
				return default(VariantConfigStructureMember);
			}
		}

		public static readonly IKeyValueStructureTransformer<SharedGlobals, SharedGlobalsSource> Transformer;

		public int DefaultActivationCost { get; set; }

		public MetaDuration EnergyUnitRestoreDuration { get; set; }

		public List<string> ItemTagsRequiringBoosterAnalytics { get; set; }

		public List<string> StartupActions { get; set; }

		public string BubbleLogic { get; set; }

		public string AutoCollectOnSessionStarted { get; set; }

		public List<int> ProgressionEventBlackListedItems { get; set; }

		public List<string> ItemTagsIgnoredByItemInfoPopup { get; set; }

		public string StartingValues { get; set; }

		public List<string> ItemTagsIgnoredByLocalizationValidation { get; set; }

		public string SpeedUpCostBehavior { get; set; }

		public SpeedUpBehavior SpeedUpBehavior { get; set; }

		public List<int> ItemSellPrices { get; set; }

		public int PlayerNamePopupTriggerLevel { get; set; }

		public bool ValidatePlayerNameOnInputEnd { get; set; }

		public F32 DailyTaskWeightAdditive { get; set; }

		public F32 DailyTaskWeightMultiplicative { get; set; }

		public F32 DailyTaskWeightSubtractive { get; set; }

		public F32 DailyTasksCount { get; set; }

		public MergeBoardId InitBoardId { get; set; }

		public bool ProgressionEventBubbleBonusesEnabled { get; set; }

		public bool ForcePlayerName { get; set; }

		public MetaDuration DialogueInputDelay { get; set; }

		public string PlayerNameDisallowedRegex { get; set; }

		public MetaDuration DailyTasksDuration { get; set; }

		public int DailyTasksResetHourUTC { get; set; }

		public bool DailyTasksRefreshTogetherWithFinalReward { get; set; }

		public int DailyTasksRequiredTasksForFinalReward { get; set; }

		public List<MetaRef<EventLevels>> DailyTasksEventLevelSets { get; set; }

		public long MergeHintWaitTimeMilliseconds { get; set; }

		public List<int> DailyTasksRefreshPricesInDiamonds { get; set; }

		public int DailyTasksRefreshTasksCount { get; set; }

		public bool DailyTasksRefreshAlsoOnFinalReward { get; set; }

		public int ItemsNeededCountDisplayMax { get; set; }

		public F32 DefaultBubbleBonusDivisor { get; set; }

		public F32 SinkItemToolTipDisplayDuration { get; set; }

		public MetaDuration DefaultLockedTaskTimerDuration { get; set; }

		public MetaDuration MinimumSpeedUpTime { get; set; }

		public MetaDuration ThirdPartySurveyRewardCheckDuration { get; set; }

		public bool DailyTasksSkipOldTasksForWeightCalculation { get; set; }

		public MetaDuration MaintenanceBannerReminderTime { get; set; }

		public string MergeMansionURL { get; set; }

		public bool DisableDecayingSpawnerFix { get; set; }

		public int InventorySlotsRequiredToTeaseProducerInventory { get; set; }

		public int MaxGemCostForOutOfEnergyAds { get; set; }

		public bool DisableMysteryMachineItemOddsPopup { get; set; }

		public bool DefaultHapticsEnabled { get; set; }

		public int MinLevelForAdditionalSpawnItem { get; set; }

		public int MaxOfferPopupTriggersPerSession { get; set; }

		public int MaxConsecutiveOfferPopupTriggers { get; set; }

		public bool UseAlternateShopButtonLayout { get; set; }

		public bool ShowRewardsInTaskList { get; set; }

		public int PocketItemsCap { get; set; }

		public bool AutoLevelUp { get; set; }

		public FTUEStartGroups FTUEStartGroup { get; set; }

		public bool UseUITracking { get; set; }

		public bool DisableExperienceItemDrops { get; set; }

		public bool TutorializedAreaUnlock { get; set; }

		public bool CacheLastNSegments { get; set; }

		public bool TabletScalingEnabled { get; set; }

		public TasksTabStyle TasksTabStyle { get; set; }

		public LocationId InitialLocation { get; set; }

		public bool UseStreamlinedStoryEventFlow { get; set; }

		public bool UseOldPickWeighted { get; set; }

		public int LeaderboardEventSafetyMarginSeconds { get; set; }

		public bool UseAlternateFtueFlow { get; set; }

		public string InitialFtueProducerSequence { get; set; }

		public ItemTypeConstant InitialFtueChestId { get; set; }

		public bool EnableEventsOnBoard { get; set; }

		public bool EnableAutoMergeOnAllBoards { get; set; }

		public int MaxOfferPopupTriggersPerReset { get; set; }
	}
}
