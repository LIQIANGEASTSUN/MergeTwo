using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[]
	{
		1, 2, 3, 5, 31, 32, 37, 44, 48, 61,
		16, 17, 40, 41, 52, 53, 54, 55, 56, 63,
		64, 65, 78, 79, 80, 82, 85, 92
	})]
	public class SharedGlobals : GameConfigKeyValue<SharedGlobals>, IValidatable
	{
		[MetaMember(4, MetaMemberFlags.None)]
		public int DefaultActivationCost { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<string> ItemTagsRequiringBoosterAnalytics { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<IDirectorAction> StartupActions { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public CollectItemsOnSessionStartSettings AutoCollectOnSessionStarted { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<int> ProgressionEventBlackListedItems { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public List<string> ItemTagsIgnoredByItemInfoPopup { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public StartingValues StartingValues { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public List<string> ItemTagsIgnoredByLocalizationValidation { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public SpeedUpCostBehavior SpeedUpCostBehavior { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public SpeedUpBehavior SpeedUpBehavior { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public List<int> ItemSellPrices { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public int PlayerNamePopupTriggerLevel { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public bool ValidatePlayerNameOnInputEnd { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public F32 DailyTaskWeightAdditive { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public F32 DailyTaskWeightMultiplicative { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public F32 DailyTaskWeightSubtractive { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public F32 DailyTasksCount { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public MergeBoardId InitBoardId { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public bool ProgressionEventBubbleBonusesEnabled { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public bool ForcePlayerName { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		public MetaDuration DialogueInputDelay { get; set; }

		[MetaMember(28, MetaMemberFlags.None)]
		public string PlayerNameDisallowedRegex { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		public MetaDuration DailyTasksDuration { get; set; }

		[MetaMember(30, MetaMemberFlags.None)]
		public int DailyTasksResetHourUTC { get; set; }

		[MetaMember(33, MetaMemberFlags.None)]
		public List<MetaRef<EventLevels>> DailyTasksEventLevelSets { get; set; }

		[MetaMember(34, MetaMemberFlags.None)]
		public long MergeHintWaitTimeMilliseconds { get; set; }

		[MetaMember(35, MetaMemberFlags.None)]
		public List<int> DailyTasksRefreshPricesInDiamonds { get; set; }

		[MetaMember(36, MetaMemberFlags.None)]
		public int DailyTasksRefreshTasksCount { get; set; }

		[MetaMember(38, MetaMemberFlags.None)]
		public int ItemsNeededCountDisplayMax { get; set; }

		[MetaMember(39, MetaMemberFlags.None)]
		public F32 DefaultBubbleBonusDivisor { get; set; }

		[MetaMember(42, MetaMemberFlags.None)]
		public F32 SinkItemToolTipDisplayDuration { get; set; }

		[MetaMember(43, MetaMemberFlags.None)]
		public MetaDuration DefaultLockedTaskTimerDuration { get; set; }

		[MetaMember(45, MetaMemberFlags.None)]
		public MetaDuration MinimumSpeedUpTime { get; set; }

		[MetaMember(46, MetaMemberFlags.None)]
		public MetaDuration ThirdPartySurveyRewardCheckDuration { get; set; }

		[MetaMember(47, MetaMemberFlags.None)]
		public bool DailyTasksSkipOldTasksForWeightCalculation { get; set; }

		[MetaMember(49, MetaMemberFlags.None)]
		public MetaDuration MaintenanceBannerReminderTime { get; set; }

		[MetaMember(50, MetaMemberFlags.None)]
		public string MergeMansionURL { get; set; }

		[MetaMember(51, MetaMemberFlags.None)]
		public bool DisableDecayingSpawnerFix { get; set; }

		[MetaMember(57, MetaMemberFlags.None)]
		public int InventorySlotsRequiredToTeaseProducerInventory { get; set; }

		[MetaMember(58, MetaMemberFlags.None)]
		public int MaxGemCostForOutOfEnergyAds { get; set; }

		[MetaMember(59, MetaMemberFlags.None)]
		public bool DisableMysteryMachineItemOddsPopup { get; set; }

		[MetaMember(60, MetaMemberFlags.None)]
		public bool DefaultHapticsEnabled { get; set; }

		[MetaMember(62, MetaMemberFlags.None)]
		public int MinLevelForAdditionalSpawnItem { get; set; }

		[MetaMember(66, MetaMemberFlags.None)]
		public int MaxOfferPopupTriggersPerSession { get; set; }

		[MetaMember(67, MetaMemberFlags.None)]
		public int MaxConsecutiveOfferPopupTriggers { get; set; }

		[MetaMember(68, MetaMemberFlags.None)]
		public bool UseAlternateShopButtonLayout { get; set; }

		[MetaMember(69, MetaMemberFlags.None)]
		public bool ShowRewardsInTaskList { get; set; }

		[MetaMember(70, MetaMemberFlags.None)]
		public int PocketItemsCap { get; set; }

		[MetaMember(71, MetaMemberFlags.None)]
		public bool AutoLevelUp { get; set; }

		[MetaMember(72, MetaMemberFlags.None)]
		public bool DisableExperienceItemDrops { get; set; }

		[MetaMember(73, MetaMemberFlags.None)]
		public bool CacheLastNSegments { get; set; }

		[MetaMember(74, MetaMemberFlags.None)]
		public FTUEStartGroups FTUEStartGroup { get; set; }

		[MetaMember(75, MetaMemberFlags.None)]
		public TasksTabStyle TasksTabStyle { get; set; }

		[MetaMember(76, MetaMemberFlags.None)]
		public bool TabletScalingEnabled { get; set; }

		[MetaMember(77, MetaMemberFlags.None)]
		public bool TutorializedAreaUnlock { get; set; }

		[MetaMember(81, MetaMemberFlags.None)]
		public bool UseUITracking { get; set; }

		[MetaMember(83, MetaMemberFlags.None)]
		public LocationId InitialLocation { get; set; }

		[MetaMember(84, MetaMemberFlags.None)]
		public bool UseStreamlinedStoryEventFlow { get; set; }

		[MetaMember(86, MetaMemberFlags.None)]
		public bool UseOldPickWeighted { get; set; }

		[MetaMember(87, MetaMemberFlags.None)]
		public int LeaderboardEventSafetyMarginSeconds { get; set; }

		[MetaMember(88, MetaMemberFlags.None)]
		public bool UseAlternateFtueFlow { get; set; }

		[MetaMember(89, MetaMemberFlags.None)]
		public string InitialFtueProducerSequence { get; set; }

		[MetaMember(90, MetaMemberFlags.None)]
		public ItemTypeConstant InitialFtueChestId { get; set; }

		[MetaMember(91, MetaMemberFlags.None)]
		public bool EnableEventsOnBoard { get; set; }

		[MetaMember(93, MetaMemberFlags.None)]
		public bool EnableAutoMergeOnAllBoards { get; set; }

		[MetaMember(94, MetaMemberFlags.None)]
		public int MaxOfferPopupTriggersPerReset { get; set; }

		public SpeedUpBehavior GetSpeedUpBehavior(IPlayer player)
		{
			return default(SpeedUpBehavior);
		}

		public TasksTabStyle GetTasksTabStyle(IPlayer player)
		{
			return default(TasksTabStyle);
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}
	}
}
