namespace GameLogic.Config;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {1, 2, 3, 5, 31, 32, 37, 44, 48, 61, 16, 17, 40, 41, 52, 53, 54, 55, 56, 63, 64, 65, 78, 79, 80, 82, 85, 92})]
[MetaSerializable]
public class SharedGlobals : GameConfigKeyValue<SharedGlobals>, IValidatable
{
	[CompilerGenerated]
	private int <DefaultActivationCost>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<String> <ItemTagsRequiringBoosterAnalytics>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<IDirectorAction> <StartupActions>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private CollectItemsOnSessionStartSettings <AutoCollectOnSessionStarted>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<Int32> <ProgressionEventBlackListedItems>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <ItemTagsIgnoredByItemInfoPopup>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private StartingValues <StartingValues>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <ItemTagsIgnoredByLocalizationValidation>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private SpeedUpCostBehavior <SpeedUpCostBehavior>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private SpeedUpBehavior <SpeedUpBehavior>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<Int32> <ItemSellPrices>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private int <PlayerNamePopupTriggerLevel>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private bool <ValidatePlayerNameOnInputEnd>k__BackingField; //Field offset: 0x6C
	[CompilerGenerated]
	private F32 <DailyTaskWeightAdditive>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private F32 <DailyTaskWeightMultiplicative>k__BackingField; //Field offset: 0x74
	[CompilerGenerated]
	private F32 <DailyTaskWeightSubtractive>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private F32 <DailyTasksCount>k__BackingField; //Field offset: 0x7C
	[CompilerGenerated]
	private MergeBoardId <InitBoardId>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private bool <ProgressionEventBubbleBonusesEnabled>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private bool <ForcePlayerName>k__BackingField; //Field offset: 0x89
	[CompilerGenerated]
	private MetaDuration <DialogueInputDelay>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private string <PlayerNameDisallowedRegex>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private MetaDuration <DailyTasksDuration>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private int <DailyTasksResetHourUTC>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private List<MetaRef`1<EventLevels>> <DailyTasksEventLevelSets>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private long <MergeHintWaitTimeMilliseconds>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private List<Int32> <DailyTasksRefreshPricesInDiamonds>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private int <DailyTasksRefreshTasksCount>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private int <ItemsNeededCountDisplayMax>k__BackingField; //Field offset: 0xCC
	[CompilerGenerated]
	private F32 <DefaultBubbleBonusDivisor>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private F32 <SinkItemToolTipDisplayDuration>k__BackingField; //Field offset: 0xD4
	[CompilerGenerated]
	private MetaDuration <DefaultLockedTaskTimerDuration>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private MetaDuration <MinimumSpeedUpTime>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private MetaDuration <ThirdPartySurveyRewardCheckDuration>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private bool <DailyTasksSkipOldTasksForWeightCalculation>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private MetaDuration <MaintenanceBannerReminderTime>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private string <MergeMansionURL>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private bool <DisableDecayingSpawnerFix>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private int <InventorySlotsRequiredToTeaseProducerInventory>k__BackingField; //Field offset: 0x10C
	[CompilerGenerated]
	private int <MaxGemCostForOutOfEnergyAds>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private bool <DisableMysteryMachineItemOddsPopup>k__BackingField; //Field offset: 0x114
	[CompilerGenerated]
	private bool <DefaultHapticsEnabled>k__BackingField; //Field offset: 0x115
	[CompilerGenerated]
	private int <MinLevelForAdditionalSpawnItem>k__BackingField; //Field offset: 0x118
	[CompilerGenerated]
	private int <MaxOfferPopupTriggersPerSession>k__BackingField; //Field offset: 0x11C
	[CompilerGenerated]
	private int <MaxConsecutiveOfferPopupTriggers>k__BackingField; //Field offset: 0x120
	[CompilerGenerated]
	private bool <UseAlternateShopButtonLayout>k__BackingField; //Field offset: 0x124
	[CompilerGenerated]
	private bool <ShowRewardsInTaskList>k__BackingField; //Field offset: 0x125
	[CompilerGenerated]
	private int <PocketItemsCap>k__BackingField; //Field offset: 0x128
	[CompilerGenerated]
	private bool <AutoLevelUp>k__BackingField; //Field offset: 0x12C
	[CompilerGenerated]
	private bool <DisableExperienceItemDrops>k__BackingField; //Field offset: 0x12D
	[CompilerGenerated]
	private bool <CacheLastNSegments>k__BackingField; //Field offset: 0x12E
	[CompilerGenerated]
	private FTUEStartGroups <FTUEStartGroup>k__BackingField; //Field offset: 0x130
	[CompilerGenerated]
	private TasksTabStyle <TasksTabStyle>k__BackingField; //Field offset: 0x134
	[CompilerGenerated]
	private bool <TabletScalingEnabled>k__BackingField; //Field offset: 0x138
	[CompilerGenerated]
	private bool <TutorializedAreaUnlock>k__BackingField; //Field offset: 0x139
	[CompilerGenerated]
	private bool <UseUITracking>k__BackingField; //Field offset: 0x13A
	[CompilerGenerated]
	private LocationId <InitialLocation>k__BackingField; //Field offset: 0x13C
	[CompilerGenerated]
	private bool <UseStreamlinedStoryEventFlow>k__BackingField; //Field offset: 0x140
	[CompilerGenerated]
	private bool <UseOldPickWeighted>k__BackingField; //Field offset: 0x141
	[CompilerGenerated]
	private int <LeaderboardEventSafetyMarginSeconds>k__BackingField; //Field offset: 0x144
	[CompilerGenerated]
	private bool <UseAlternateFtueFlow>k__BackingField; //Field offset: 0x148
	[CompilerGenerated]
	private string <InitialFtueProducerSequence>k__BackingField; //Field offset: 0x150
	[CompilerGenerated]
	private ItemTypeConstant <InitialFtueChestId>k__BackingField; //Field offset: 0x158
	[CompilerGenerated]
	private bool <EnableEventsOnBoard>k__BackingField; //Field offset: 0x15C
	[CompilerGenerated]
	private bool <EnableAutoMergeOnAllBoards>k__BackingField; //Field offset: 0x15D
	[CompilerGenerated]
	private int <MaxOfferPopupTriggersPerReset>k__BackingField; //Field offset: 0x160

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private CollectItemsOnSessionStartSettings AutoCollectOnSessionStarted
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(71, MetaMemberFlags::None (0))]
	public private bool AutoLevelUp
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(73, MetaMemberFlags::None (0))]
	public private bool CacheLastNSegments
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(23, MetaMemberFlags::None (0))]
	public private F32 DailyTasksCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(29, MetaMemberFlags::None (0))]
	public private MetaDuration DailyTasksDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(33, MetaMemberFlags::None (0))]
	public private List<MetaRef`1<EventLevels>> DailyTasksEventLevelSets
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(35, MetaMemberFlags::None (0))]
	public private List<Int32> DailyTasksRefreshPricesInDiamonds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(36, MetaMemberFlags::None (0))]
	public private int DailyTasksRefreshTasksCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(30, MetaMemberFlags::None (0))]
	public private int DailyTasksResetHourUTC
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(47, MetaMemberFlags::None (0))]
	public private bool DailyTasksSkipOldTasksForWeightCalculation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(20, MetaMemberFlags::None (0))]
	public private F32 DailyTaskWeightAdditive
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(21, MetaMemberFlags::None (0))]
	public private F32 DailyTaskWeightMultiplicative
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(22, MetaMemberFlags::None (0))]
	public private F32 DailyTaskWeightSubtractive
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int DefaultActivationCost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(39, MetaMemberFlags::None (0))]
	public private F32 DefaultBubbleBonusDivisor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(60, MetaMemberFlags::None (0))]
	public private bool DefaultHapticsEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(43, MetaMemberFlags::None (0))]
	public MetaDuration DefaultLockedTaskTimerDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(27, MetaMemberFlags::None (0))]
	public private MetaDuration DialogueInputDelay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(51, MetaMemberFlags::None (0))]
	public private bool DisableDecayingSpawnerFix
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(72, MetaMemberFlags::None (0))]
	public private bool DisableExperienceItemDrops
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(59, MetaMemberFlags::None (0))]
	public private bool DisableMysteryMachineItemOddsPopup
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(93, MetaMemberFlags::None (0))]
	public private bool EnableAutoMergeOnAllBoards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(91, MetaMemberFlags::None (0))]
	public private bool EnableEventsOnBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(26, MetaMemberFlags::None (0))]
	public private bool ForcePlayerName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(74, MetaMemberFlags::None (0))]
	public private FTUEStartGroups FTUEStartGroup
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(24, MetaMemberFlags::None (0))]
	public private MergeBoardId InitBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(90, MetaMemberFlags::None (0))]
	public private ItemTypeConstant InitialFtueChestId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(89, MetaMemberFlags::None (0))]
	public private string InitialFtueProducerSequence
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(83, MetaMemberFlags::None (0))]
	public private LocationId InitialLocation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(57, MetaMemberFlags::None (0))]
	public private int InventorySlotsRequiredToTeaseProducerInventory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private List<Int32> ItemSellPrices
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(38, MetaMemberFlags::None (0))]
	public private int ItemsNeededCountDisplayMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private List<String> ItemTagsIgnoredByItemInfoPopup
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private List<String> ItemTagsIgnoredByLocalizationValidation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private List<String> ItemTagsRequiringBoosterAnalytics
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(87, MetaMemberFlags::None (0))]
	public private int LeaderboardEventSafetyMarginSeconds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(49, MetaMemberFlags::None (0))]
	public private MetaDuration MaintenanceBannerReminderTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(67, MetaMemberFlags::None (0))]
	public private int MaxConsecutiveOfferPopupTriggers
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(58, MetaMemberFlags::None (0))]
	public private int MaxGemCostForOutOfEnergyAds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(94, MetaMemberFlags::None (0))]
	public private int MaxOfferPopupTriggersPerReset
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(66, MetaMemberFlags::None (0))]
	public private int MaxOfferPopupTriggersPerSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(34, MetaMemberFlags::None (0))]
	public private long MergeHintWaitTimeMilliseconds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(50, MetaMemberFlags::None (0))]
	public private string MergeMansionURL
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(45, MetaMemberFlags::None (0))]
	public private MetaDuration MinimumSpeedUpTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(62, MetaMemberFlags::None (0))]
	public private int MinLevelForAdditionalSpawnItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(28, MetaMemberFlags::None (0))]
	public private string PlayerNameDisallowedRegex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	public private int PlayerNamePopupTriggerLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(70, MetaMemberFlags::None (0))]
	public private int PocketItemsCap
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private List<Int32> ProgressionEventBlackListedItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(25, MetaMemberFlags::None (0))]
	public private bool ProgressionEventBubbleBonusesEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(69, MetaMemberFlags::None (0))]
	public private bool ShowRewardsInTaskList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(42, MetaMemberFlags::None (0))]
	public private F32 SinkItemToolTipDisplayDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	private SpeedUpBehavior SpeedUpBehavior
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	public private SpeedUpCostBehavior SpeedUpCostBehavior
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private StartingValues StartingValues
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private List<IDirectorAction> StartupActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(76, MetaMemberFlags::None (0))]
	public private bool TabletScalingEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(75, MetaMemberFlags::None (0))]
	private TasksTabStyle TasksTabStyle
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(46, MetaMemberFlags::None (0))]
	public private MetaDuration ThirdPartySurveyRewardCheckDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(77, MetaMemberFlags::None (0))]
	public private bool TutorializedAreaUnlock
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(88, MetaMemberFlags::None (0))]
	public private bool UseAlternateFtueFlow
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(68, MetaMemberFlags::None (0))]
	public private bool UseAlternateShopButtonLayout
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(86, MetaMemberFlags::None (0))]
	public private bool UseOldPickWeighted
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(84, MetaMemberFlags::None (0))]
	public private bool UseStreamlinedStoryEventFlow
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(81, MetaMemberFlags::None (0))]
	public private bool UseUITracking
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(19, MetaMemberFlags::None (0))]
	public private bool ValidatePlayerNameOnInputEnd
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public SharedGlobals() { }

	[CompilerGenerated]
	public CollectItemsOnSessionStartSettings get_AutoCollectOnSessionStarted() { }

	[CompilerGenerated]
	public bool get_AutoLevelUp() { }

	[CompilerGenerated]
	public bool get_CacheLastNSegments() { }

	[CompilerGenerated]
	public F32 get_DailyTasksCount() { }

	[CompilerGenerated]
	public MetaDuration get_DailyTasksDuration() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventLevels>> get_DailyTasksEventLevelSets() { }

	[CompilerGenerated]
	public List<Int32> get_DailyTasksRefreshPricesInDiamonds() { }

	[CompilerGenerated]
	public int get_DailyTasksRefreshTasksCount() { }

	[CompilerGenerated]
	public int get_DailyTasksResetHourUTC() { }

	[CompilerGenerated]
	public bool get_DailyTasksSkipOldTasksForWeightCalculation() { }

	[CompilerGenerated]
	public F32 get_DailyTaskWeightAdditive() { }

	[CompilerGenerated]
	public F32 get_DailyTaskWeightMultiplicative() { }

	[CompilerGenerated]
	public F32 get_DailyTaskWeightSubtractive() { }

	[CompilerGenerated]
	public int get_DefaultActivationCost() { }

	[CompilerGenerated]
	public F32 get_DefaultBubbleBonusDivisor() { }

	[CompilerGenerated]
	public bool get_DefaultHapticsEnabled() { }

	[CompilerGenerated]
	public MetaDuration get_DefaultLockedTaskTimerDuration() { }

	[CompilerGenerated]
	public MetaDuration get_DialogueInputDelay() { }

	[CompilerGenerated]
	public bool get_DisableDecayingSpawnerFix() { }

	[CompilerGenerated]
	public bool get_DisableExperienceItemDrops() { }

	[CompilerGenerated]
	public bool get_DisableMysteryMachineItemOddsPopup() { }

	[CompilerGenerated]
	public bool get_EnableAutoMergeOnAllBoards() { }

	[CompilerGenerated]
	public bool get_EnableEventsOnBoard() { }

	[CompilerGenerated]
	public bool get_ForcePlayerName() { }

	[CompilerGenerated]
	public FTUEStartGroups get_FTUEStartGroup() { }

	[CompilerGenerated]
	public MergeBoardId get_InitBoardId() { }

	[CompilerGenerated]
	public ItemTypeConstant get_InitialFtueChestId() { }

	[CompilerGenerated]
	public string get_InitialFtueProducerSequence() { }

	[CompilerGenerated]
	public LocationId get_InitialLocation() { }

	[CompilerGenerated]
	public int get_InventorySlotsRequiredToTeaseProducerInventory() { }

	[CompilerGenerated]
	public List<Int32> get_ItemSellPrices() { }

	[CompilerGenerated]
	public int get_ItemsNeededCountDisplayMax() { }

	[CompilerGenerated]
	public List<String> get_ItemTagsIgnoredByItemInfoPopup() { }

	[CompilerGenerated]
	public List<String> get_ItemTagsIgnoredByLocalizationValidation() { }

	[CompilerGenerated]
	public List<String> get_ItemTagsRequiringBoosterAnalytics() { }

	[CompilerGenerated]
	public int get_LeaderboardEventSafetyMarginSeconds() { }

	[CompilerGenerated]
	public MetaDuration get_MaintenanceBannerReminderTime() { }

	[CompilerGenerated]
	public int get_MaxConsecutiveOfferPopupTriggers() { }

	[CompilerGenerated]
	public int get_MaxGemCostForOutOfEnergyAds() { }

	[CompilerGenerated]
	public int get_MaxOfferPopupTriggersPerReset() { }

	[CompilerGenerated]
	public int get_MaxOfferPopupTriggersPerSession() { }

	[CompilerGenerated]
	public long get_MergeHintWaitTimeMilliseconds() { }

	[CompilerGenerated]
	public string get_MergeMansionURL() { }

	[CompilerGenerated]
	public MetaDuration get_MinimumSpeedUpTime() { }

	[CompilerGenerated]
	public int get_MinLevelForAdditionalSpawnItem() { }

	[CompilerGenerated]
	public string get_PlayerNameDisallowedRegex() { }

	[CompilerGenerated]
	public int get_PlayerNamePopupTriggerLevel() { }

	[CompilerGenerated]
	public int get_PocketItemsCap() { }

	[CompilerGenerated]
	public List<Int32> get_ProgressionEventBlackListedItems() { }

	[CompilerGenerated]
	public bool get_ProgressionEventBubbleBonusesEnabled() { }

	[CompilerGenerated]
	public bool get_ShowRewardsInTaskList() { }

	[CompilerGenerated]
	public F32 get_SinkItemToolTipDisplayDuration() { }

	[CompilerGenerated]
	private SpeedUpBehavior get_SpeedUpBehavior() { }

	[CompilerGenerated]
	public SpeedUpCostBehavior get_SpeedUpCostBehavior() { }

	[CompilerGenerated]
	public StartingValues get_StartingValues() { }

	[CompilerGenerated]
	public List<IDirectorAction> get_StartupActions() { }

	[CompilerGenerated]
	public bool get_TabletScalingEnabled() { }

	[CompilerGenerated]
	private TasksTabStyle get_TasksTabStyle() { }

	[CompilerGenerated]
	public MetaDuration get_ThirdPartySurveyRewardCheckDuration() { }

	[CompilerGenerated]
	public bool get_TutorializedAreaUnlock() { }

	[CompilerGenerated]
	public bool get_UseAlternateFtueFlow() { }

	[CompilerGenerated]
	public bool get_UseAlternateShopButtonLayout() { }

	[CompilerGenerated]
	public bool get_UseOldPickWeighted() { }

	[CompilerGenerated]
	public bool get_UseStreamlinedStoryEventFlow() { }

	[CompilerGenerated]
	public bool get_UseUITracking() { }

	[CompilerGenerated]
	public bool get_ValidatePlayerNameOnInputEnd() { }

	public SpeedUpBehavior GetSpeedUpBehavior(IPlayer player) { }

	public TasksTabStyle GetTasksTabStyle(IPlayer player) { }

	[CompilerGenerated]
	private void set_AutoCollectOnSessionStarted(CollectItemsOnSessionStartSettings value) { }

	[CompilerGenerated]
	private void set_AutoLevelUp(bool value) { }

	[CompilerGenerated]
	private void set_CacheLastNSegments(bool value) { }

	[CompilerGenerated]
	private void set_DailyTasksCount(F32 value) { }

	[CompilerGenerated]
	private void set_DailyTasksDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_DailyTasksEventLevelSets(List<MetaRef`1<EventLevels>> value) { }

	[CompilerGenerated]
	private void set_DailyTasksRefreshPricesInDiamonds(List<Int32> value) { }

	[CompilerGenerated]
	private void set_DailyTasksRefreshTasksCount(int value) { }

	[CompilerGenerated]
	private void set_DailyTasksResetHourUTC(int value) { }

	[CompilerGenerated]
	private void set_DailyTasksSkipOldTasksForWeightCalculation(bool value) { }

	[CompilerGenerated]
	private void set_DailyTaskWeightAdditive(F32 value) { }

	[CompilerGenerated]
	private void set_DailyTaskWeightMultiplicative(F32 value) { }

	[CompilerGenerated]
	private void set_DailyTaskWeightSubtractive(F32 value) { }

	[CompilerGenerated]
	private void set_DefaultActivationCost(int value) { }

	[CompilerGenerated]
	private void set_DefaultBubbleBonusDivisor(F32 value) { }

	[CompilerGenerated]
	private void set_DefaultHapticsEnabled(bool value) { }

	[CompilerGenerated]
	public void set_DefaultLockedTaskTimerDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_DialogueInputDelay(MetaDuration value) { }

	[CompilerGenerated]
	private void set_DisableDecayingSpawnerFix(bool value) { }

	[CompilerGenerated]
	private void set_DisableExperienceItemDrops(bool value) { }

	[CompilerGenerated]
	private void set_DisableMysteryMachineItemOddsPopup(bool value) { }

	[CompilerGenerated]
	private void set_EnableAutoMergeOnAllBoards(bool value) { }

	[CompilerGenerated]
	private void set_EnableEventsOnBoard(bool value) { }

	[CompilerGenerated]
	private void set_ForcePlayerName(bool value) { }

	[CompilerGenerated]
	private void set_FTUEStartGroup(FTUEStartGroups value) { }

	[CompilerGenerated]
	private void set_InitBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_InitialFtueChestId(ItemTypeConstant value) { }

	[CompilerGenerated]
	private void set_InitialFtueProducerSequence(string value) { }

	[CompilerGenerated]
	private void set_InitialLocation(LocationId value) { }

	[CompilerGenerated]
	private void set_InventorySlotsRequiredToTeaseProducerInventory(int value) { }

	[CompilerGenerated]
	private void set_ItemSellPrices(List<Int32> value) { }

	[CompilerGenerated]
	private void set_ItemsNeededCountDisplayMax(int value) { }

	[CompilerGenerated]
	private void set_ItemTagsIgnoredByItemInfoPopup(List<String> value) { }

	[CompilerGenerated]
	private void set_ItemTagsIgnoredByLocalizationValidation(List<String> value) { }

	[CompilerGenerated]
	private void set_ItemTagsRequiringBoosterAnalytics(List<String> value) { }

	[CompilerGenerated]
	private void set_LeaderboardEventSafetyMarginSeconds(int value) { }

	[CompilerGenerated]
	private void set_MaintenanceBannerReminderTime(MetaDuration value) { }

	[CompilerGenerated]
	private void set_MaxConsecutiveOfferPopupTriggers(int value) { }

	[CompilerGenerated]
	private void set_MaxGemCostForOutOfEnergyAds(int value) { }

	[CompilerGenerated]
	private void set_MaxOfferPopupTriggersPerReset(int value) { }

	[CompilerGenerated]
	private void set_MaxOfferPopupTriggersPerSession(int value) { }

	[CompilerGenerated]
	private void set_MergeHintWaitTimeMilliseconds(long value) { }

	[CompilerGenerated]
	private void set_MergeMansionURL(string value) { }

	[CompilerGenerated]
	private void set_MinimumSpeedUpTime(MetaDuration value) { }

	[CompilerGenerated]
	private void set_MinLevelForAdditionalSpawnItem(int value) { }

	[CompilerGenerated]
	private void set_PlayerNameDisallowedRegex(string value) { }

	[CompilerGenerated]
	private void set_PlayerNamePopupTriggerLevel(int value) { }

	[CompilerGenerated]
	private void set_PocketItemsCap(int value) { }

	[CompilerGenerated]
	private void set_ProgressionEventBlackListedItems(List<Int32> value) { }

	[CompilerGenerated]
	private void set_ProgressionEventBubbleBonusesEnabled(bool value) { }

	[CompilerGenerated]
	private void set_ShowRewardsInTaskList(bool value) { }

	[CompilerGenerated]
	private void set_SinkItemToolTipDisplayDuration(F32 value) { }

	[CompilerGenerated]
	private void set_SpeedUpBehavior(SpeedUpBehavior value) { }

	[CompilerGenerated]
	private void set_SpeedUpCostBehavior(SpeedUpCostBehavior value) { }

	[CompilerGenerated]
	private void set_StartingValues(StartingValues value) { }

	[CompilerGenerated]
	private void set_StartupActions(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_TabletScalingEnabled(bool value) { }

	[CompilerGenerated]
	private void set_TasksTabStyle(TasksTabStyle value) { }

	[CompilerGenerated]
	private void set_ThirdPartySurveyRewardCheckDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_TutorializedAreaUnlock(bool value) { }

	[CompilerGenerated]
	private void set_UseAlternateFtueFlow(bool value) { }

	[CompilerGenerated]
	private void set_UseAlternateShopButtonLayout(bool value) { }

	[CompilerGenerated]
	private void set_UseOldPickWeighted(bool value) { }

	[CompilerGenerated]
	private void set_UseStreamlinedStoryEventFlow(bool value) { }

	[CompilerGenerated]
	private void set_UseUITracking(bool value) { }

	[CompilerGenerated]
	private void set_ValidatePlayerNameOnInputEnd(bool value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

