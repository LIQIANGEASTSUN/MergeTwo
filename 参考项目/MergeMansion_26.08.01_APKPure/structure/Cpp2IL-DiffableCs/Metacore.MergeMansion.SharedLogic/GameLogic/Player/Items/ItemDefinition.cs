namespace GameLogic.Player.Items;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {59, 60, 61, 62, 63, 56, 57})]
[MetaSerializableDerived(1)]
public class ItemDefinition : IGameConfigData<Int32>, IGameConfigData, IHasGameConfigKey<Int32>, IValidatable, IItemDefinition
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<IMergeChainElement, IEnumerable`1<ItemDef>> <>9__237_0; //Field offset: 0x8
		public static Func<ItemDef, Int32> <>9__237_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal IEnumerable<ItemDef> <Validate>b__237_0(IMergeChainElement x) { }

		internal int <Validate>b__237_1(ItemDef x) { }

	}

	[CompilerGenerated]
	private int <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <PoolTag>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <SkinName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <LevelNumber>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <Movable>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private F64 <CostInDiamonds>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private F64 <AnchorPriceGems>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private F64 <AnchorPriceCoins>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private F64 <TimeSkipPriceGems>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private F64 <UnlockOnBoardPriceGems>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private int <ExperienceValue>k__BackingField; //Field offset: 0x58
	[MetaMember(12, MetaMemberFlags::None (0))]
	private MergeFeatures _MergeFeatures; //Field offset: 0x60
	[MetaMember(13, MetaMemberFlags::None (0))]
	private ActivationFeatures _ActivationFeatures; //Field offset: 0x68
	[MetaMember(14, MetaMemberFlags::None (0))]
	private SpawnFeatures _SpawnFeatures; //Field offset: 0x70
	[MetaMember(15, MetaMemberFlags::None (0))]
	private DecayFeatures _DecayFeatures; //Field offset: 0x78
	[MetaMember(16, MetaMemberFlags::None (0))]
	private ChestFeatures _ChestFeatures; //Field offset: 0x80
	[MetaMember(17, MetaMemberFlags::None (0))]
	private CollectableFeatures _CollectableFeatures; //Field offset: 0x88
	[MetaMember(18, MetaMemberFlags::None (0))]
	private BoosterFeatures _BoosterFeatures; //Field offset: 0x90
	[MetaMember(19, MetaMemberFlags::None (0))]
	private BubbleFeatures _BubbleFeatures; //Field offset: 0x98
	[MetaMember(20, MetaMemberFlags::None (0))]
	private SinkFeatures _SinkFeatures; //Field offset: 0xA0
	[MetaMember(21, MetaMemberFlags::None (0))]
	private ConsumableFeatures _ConsumableFeatures; //Field offset: 0xA8
	[MetaMember(22, MetaMemberFlags::None (0))]
	private PortalFeatures _PortalFeatures; //Field offset: 0xB0
	[MetaMember(23, MetaMemberFlags::None (0))]
	private ChargesFeatures _ChargesFeatures; //Field offset: 0xB8
	[MetaMember(24, MetaMemberFlags::None (0))]
	private TimeContainerFeatures _TimeContainer; //Field offset: 0xC0
	[CompilerGenerated]
	private List<String> <Tags>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private MergeChainDef <MergeChainDef>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private List<String> <ConfirmableMergeResults>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private List<IDirectorAction> <OnDiscoveredActions>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private bool <ShowTutorialFingerOnDiscovery>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private List<String> <AnalyticsMetaData>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private List<Int32> <CombineInfoWithItem>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private ItemRarity <Rarity>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private bool <Unsellable>k__BackingField; //Field offset: 0x104
	[MetaMember(34, MetaMemberFlags::None (0))]
	private LeaderboardFeatures _LeaderboardFeatures; //Field offset: 0x108
	[CompilerGenerated]
	private string <ItemType>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private List<PlayerReward> <Rewards>k__BackingField; //Field offset: 0x118
	[MetaMember(37, MetaMemberFlags::None (0))]
	private FishingRodFeatures _FishingRodFeatures; //Field offset: 0x120
	[MetaMember(38, MetaMemberFlags::None (0))]
	private WeightFeatures _WeightFeatures; //Field offset: 0x128
	[MetaMember(39, MetaMemberFlags::None (0))]
	private CameraFeatures _CameraFeatures; //Field offset: 0x130
	[MetaMember(40, MetaMemberFlags::None (0))]
	private SinkableFeatures _SinkableFeatures; //Field offset: 0x138
	[MetaMember(41, MetaMemberFlags::None (0))]
	private FramesFeatures _FramesFeatures; //Field offset: 0x140
	[CompilerGenerated]
	private List<PlayerRequirement> <UnlockRequirements>k__BackingField; //Field offset: 0x148
	[MetaMember(43, MetaMemberFlags::None (0))]
	private PersistentFeatures _PersistentFeatures; //Field offset: 0x150
	[CompilerGenerated]
	private List<String> <SpawnEffects>k__BackingField; //Field offset: 0x158
	[MetaMember(45, MetaMemberFlags::None (0))]
	private OverrideSpawnChanceFeatures _OverrideSpawnChanceFeatures; //Field offset: 0x160
	[CompilerGenerated]
	private ConfigPrefabId <CustomItemInfoPopupId>k__BackingField; //Field offset: 0x168
	[CompilerGenerated]
	private bool <ShowCustomItemInfoPopupOnDiscovery>k__BackingField; //Field offset: 0x170
	[MetaMember(48, MetaMemberFlags::None (0))]
	private AudioFeatures _AudioFeatures; //Field offset: 0x178
	[CompilerGenerated]
	private string <OverrideLocalizationItemKey>k__BackingField; //Field offset: 0x180
	[MetaMember(50, MetaMemberFlags::None (0))]
	private MiniEventFeatures _MiniEventFeatures; //Field offset: 0x188
	[CompilerGenerated]
	private string <FullOverrideLocalizationItemKey>k__BackingField; //Field offset: 0x190
	[CompilerGenerated]
	private string <SinkTag>k__BackingField; //Field offset: 0x198
	[CompilerGenerated]
	private int <SinkPoints>k__BackingField; //Field offset: 0x1A0
	[MetaMember(54, MetaMemberFlags::None (0))]
	private OrderFeatures _OrderFeatures; //Field offset: 0x1A8
	[CompilerGenerated]
	private List<Int32> <OverrideProductionSource>k__BackingField; //Field offset: 0x1B0
	[CompilerGenerated]
	private string <OverrideLocalizationItemCategory>k__BackingField; //Field offset: 0x1B8
	[CompilerGenerated]
	private ItemEffectFeatures <_ItemEffectFeatures>k__BackingField; //Field offset: 0x1C0
	[CompilerGenerated]
	private OnFireFeatures <_OnFireFeatures>k__BackingField; //Field offset: 0x1C8
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x1D0

	[MetaMember(64, MetaMemberFlags::None (0))]
	private ItemEffectFeatures _ItemEffectFeatures
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(65, MetaMemberFlags::None (0))]
	private OnFireFeatures _OnFireFeatures
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override IActivationFeatures ActivationFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(30, MetaMemberFlags::None (0))]
	public override List<String> AnalyticsMetaData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	private F64 AnchorPriceCoins
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	private F64 AnchorPriceGems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IAudioFeatures AudioFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IBoosterFeatures BoosterFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IBubbleFeatures BubbleFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override ICameraFeatures CameraFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IChargesFeatures ChargesFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IChestFeatures ChestFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override ICollectableFeatures CollectableFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(31, MetaMemberFlags::None (0))]
	public override List<Int32> CombineInfoWithItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public override int ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(27, MetaMemberFlags::None (0))]
	public override List<String> ConfirmableMergeResults
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IConsumableFeatures ConsumableFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public override F64 CostInDiamonds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(46, MetaMemberFlags::None (0))]
	public private override ConfigPrefabId CustomItemInfoPopupId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override IDecayFeatures DecayFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public override int ExperienceValue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IFishingRodFeatures FishingRodFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IFramesFeatures FramesFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(51, MetaMemberFlags::None (0))]
	public override string FullOverrideLocalizationItemKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public override bool HasUnlockRequirements
	{
		 get { } //Length: 84
	}

	[IgnoreDataMember]
	public override IItemEffectFeatures ItemEffectFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(35, MetaMemberFlags::None (0))]
	public private override string ItemType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override ILeaderboardFeatures LeaderboardFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public override int LevelNumber
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override string LocalizationItemKey
	{
		 get { } //Length: 48
	}

	[MetaMember(26, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRef")]
	public override MergeChainDef MergeChainDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IMergeFeatures MergeFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IMiniEventFeatures MiniEventFeatures
	{
		 get { } //Length: 16
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public override bool Movable
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IEnumerable<IDirectorAction> OnDiscovered
	{
		 get { } //Length: 8
	}

	[MetaMember(28, MetaMemberFlags::None (0))]
	private List<IDirectorAction> OnDiscoveredActions
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IOnFireFeatures OnFireFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IOrderFeatures OrderFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(58, MetaMemberFlags::None (0))]
	public private override string OverrideLocalizationItemCategory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(49, MetaMemberFlags::None (0))]
	private string OverrideLocalizationItemKey
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(55, MetaMemberFlags::None (0))]
	public override List<Int32> OverrideProductionSource
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[IgnoreDataMember]
	public override IOverrideSpawnChanceFeatures OverrideSpawnChanceFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override IPersistentFeatures PersistentFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public override string PoolTag
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IPortalFeatures PortalFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(32, MetaMemberFlags::None (0))]
	public override ItemRarity Rarity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(36, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public private override List<PlayerReward> Rewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(47, MetaMemberFlags::None (0))]
	public override bool ShowCustomItemInfoPopupOnDiscovery
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(29, MetaMemberFlags::None (0))]
	public override bool ShowTutorialFingerOnDiscovery
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override ISinkableFeatures SinkableFeatures
	{
		 get { } //Length: 100
	}

	[IgnoreDataMember]
	public override ISinkFeatures SinkFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(53, MetaMemberFlags::None (0))]
	public override int SinkPoints
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(52, MetaMemberFlags::None (0))]
	public override string SinkTag
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public override string SkinName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(44, MetaMemberFlags::None (0))]
	public private override List<String> SpawnEffects
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override ISpawnFeatures SpawnFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(25, MetaMemberFlags::None (0))]
	public override List<String> Tags
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override ITimeContainerFeatures TimeContainerFeatures
	{
		 get { } //Length: 100
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public override F64 TimeSkipPriceGems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public override F64 UnlockOnBoardPriceGems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(42, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public private override List<PlayerRequirement> UnlockRequirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(33, MetaMemberFlags::None (0))]
	public override bool Unsellable
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IWeightFeatures WeightFeatures
	{
		 get { } //Length: 100
	}

	public ItemDefinition(int configKey, string itemType, string poolTag, string skinName, int levelNumber, bool movable, F64 costInDiamonds, F64 anchorPriceGems, F64 anchorPriceCoins, F64 timeSkipPriceGems, F64 unlockOnBoardPriceGems, int experienceValue, MergeFeatures mergeFeatures, ActivationFeatures activationFeatures, SpawnFeatures spawnFeatures, DecayFeatures decayFeatures, ChestFeatures chestFeatures, CollectableFeatures collectableFeatures, BoosterFeatures boosterFeatures, BubbleFeatures bubbleFeatures, SinkFeatures sinkFeatures, ConsumableFeatures consumableFeatures, PortalFeatures portalFeatures, ChargesFeatures chargesFeatures, TimeContainerFeatures timeContainer, LeaderboardFeatures leaderboardFeatures, FishingRodFeatures fishingRodFeatures, WeightFeatures weightFeatures, CameraFeatures cameraFeatures, SinkableFeatures sinkableFeatures, FramesFeatures framesFeatures, PersistentFeatures persistentFeatures, OverrideSpawnChanceFeatures overrideSpawnChanceFeatures, AudioFeatures audioFeatures, OrderFeatures orderFeatures, List<String> tags, List<String> confirmableMergeResults, List<IDirectorAction> onDiscoveredActions, bool showTutorialFingerOnDiscovery, List<String> analyticsMetadata, List<Int32> combineInfoWithItem, ItemRarity rarity, bool unsellable, IEnumerable<PlayerReward> rewards, IEnumerable<PlayerRequirement> unlockRequirements, List<String> spawnEffects, ConfigPrefabId customItemInfoPopupId, bool showCustomItemInfoPopupOnDiscovery, string overrideLocalizationItemKey, MiniEventFeatures miniEventFeatures, string fullOverrideLocalizationItemKey, string overrideLocalizationItemCategory, string sinkTag, int sinkPoints, List<String> overrideProductionSource, ItemEffectFeatures itemEffectFeatures, MergeChainDef mergeChainDef, OnFireFeatures onFireFeatures, int experimentPriority) { }

	public ItemDefinition() { }

	public override F64 AnchorPrice(Currencies currency) { }

	public override F64 BubbleDiscount(IPlayer player, Currencies openCurrency, int openCost) { }

	public static T ConvertDefaultToNull(T item, K defaultValue) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	private static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams) { }

	public static MergeChainDef FixRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	private ItemEffectFeatures get__ItemEffectFeatures() { }

	[CompilerGenerated]
	private OnFireFeatures get__OnFireFeatures() { }

	public override IActivationFeatures get_ActivationFeatures() { }

	[CompilerGenerated]
	public override List<String> get_AnalyticsMetaData() { }

	[CompilerGenerated]
	private F64 get_AnchorPriceCoins() { }

	[CompilerGenerated]
	private F64 get_AnchorPriceGems() { }

	public override IAudioFeatures get_AudioFeatures() { }

	public override IBoosterFeatures get_BoosterFeatures() { }

	public override IBubbleFeatures get_BubbleFeatures() { }

	public override ICameraFeatures get_CameraFeatures() { }

	public override IChargesFeatures get_ChargesFeatures() { }

	public override IChestFeatures get_ChestFeatures() { }

	public override ICollectableFeatures get_CollectableFeatures() { }

	[CompilerGenerated]
	public override List<Int32> get_CombineInfoWithItem() { }

	[CompilerGenerated]
	public override int get_ConfigKey() { }

	[CompilerGenerated]
	public override List<String> get_ConfirmableMergeResults() { }

	public override IConsumableFeatures get_ConsumableFeatures() { }

	[CompilerGenerated]
	public override F64 get_CostInDiamonds() { }

	[CompilerGenerated]
	public override ConfigPrefabId get_CustomItemInfoPopupId() { }

	public override IDecayFeatures get_DecayFeatures() { }

	[CompilerGenerated]
	public override int get_ExperienceValue() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	public override IFishingRodFeatures get_FishingRodFeatures() { }

	public override IFramesFeatures get_FramesFeatures() { }

	[CompilerGenerated]
	public override string get_FullOverrideLocalizationItemKey() { }

	public override bool get_HasUnlockRequirements() { }

	public override IItemEffectFeatures get_ItemEffectFeatures() { }

	[CompilerGenerated]
	public override string get_ItemType() { }

	public override ILeaderboardFeatures get_LeaderboardFeatures() { }

	[CompilerGenerated]
	public override int get_LevelNumber() { }

	public override string get_LocalizationItemKey() { }

	[CompilerGenerated]
	public override MergeChainDef get_MergeChainDef() { }

	public override IMergeFeatures get_MergeFeatures() { }

	public override IMiniEventFeatures get_MiniEventFeatures() { }

	[CompilerGenerated]
	public override bool get_Movable() { }

	public override IEnumerable<IDirectorAction> get_OnDiscovered() { }

	[CompilerGenerated]
	private List<IDirectorAction> get_OnDiscoveredActions() { }

	public override IOnFireFeatures get_OnFireFeatures() { }

	public override IOrderFeatures get_OrderFeatures() { }

	[CompilerGenerated]
	public override string get_OverrideLocalizationItemCategory() { }

	[CompilerGenerated]
	private string get_OverrideLocalizationItemKey() { }

	[CompilerGenerated]
	public override List<Int32> get_OverrideProductionSource() { }

	public override IOverrideSpawnChanceFeatures get_OverrideSpawnChanceFeatures() { }

	public override IPersistentFeatures get_PersistentFeatures() { }

	[CompilerGenerated]
	public override string get_PoolTag() { }

	public override IPortalFeatures get_PortalFeatures() { }

	[CompilerGenerated]
	public override ItemRarity get_Rarity() { }

	[CompilerGenerated]
	public override List<PlayerReward> get_Rewards() { }

	[CompilerGenerated]
	public override bool get_ShowCustomItemInfoPopupOnDiscovery() { }

	[CompilerGenerated]
	public override bool get_ShowTutorialFingerOnDiscovery() { }

	public override ISinkableFeatures get_SinkableFeatures() { }

	public override ISinkFeatures get_SinkFeatures() { }

	[CompilerGenerated]
	public override int get_SinkPoints() { }

	[CompilerGenerated]
	public override string get_SinkTag() { }

	[CompilerGenerated]
	public override string get_SkinName() { }

	[CompilerGenerated]
	public override List<String> get_SpawnEffects() { }

	public override ISpawnFeatures get_SpawnFeatures() { }

	[CompilerGenerated]
	public override List<String> get_Tags() { }

	public override ITimeContainerFeatures get_TimeContainerFeatures() { }

	[CompilerGenerated]
	public override F64 get_TimeSkipPriceGems() { }

	[CompilerGenerated]
	public override F64 get_UnlockOnBoardPriceGems() { }

	[CompilerGenerated]
	public override List<PlayerRequirement> get_UnlockRequirements() { }

	[CompilerGenerated]
	public override bool get_Unsellable() { }

	public override IWeightFeatures get_WeightFeatures() { }

	public override int GetItemSellPrice(SharedGlobals sharedGlobals) { }

	public override int GetItemValueRequirementForDailyTasksV2(IPlayer player) { }

	public override int GetItemValueRewardForDailyTasksV2(IPlayer player) { }

	public override IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config) { }

	public override IMergeChainDefinition GetMergeChain(IPlayer player) { }

	public override bool HasUnlockRequirement(Type requirementType, out PlayerRequirement requirement) { }

	public override bool IsMaxLevel(IPlayer player) { }

	public override bool IsUnlockedMaxLevel(IPlayer player) { }

	public override Currencies SellCurrency() { }

	public override ValueTuple<Currencies, Int64> SellPrice(SharedGlobals sharedGlobals) { }

	[CompilerGenerated]
	private void set__ItemEffectFeatures(ItemEffectFeatures value) { }

	[CompilerGenerated]
	private void set__OnFireFeatures(OnFireFeatures value) { }

	[CompilerGenerated]
	public void set_AnalyticsMetaData(List<String> value) { }

	[CompilerGenerated]
	private void set_AnchorPriceCoins(F64 value) { }

	[CompilerGenerated]
	private void set_AnchorPriceGems(F64 value) { }

	[CompilerGenerated]
	public void set_CombineInfoWithItem(List<Int32> value) { }

	[CompilerGenerated]
	public void set_ConfigKey(int value) { }

	[CompilerGenerated]
	public void set_ConfirmableMergeResults(List<String> value) { }

	[CompilerGenerated]
	public void set_CostInDiamonds(F64 value) { }

	[CompilerGenerated]
	private void set_CustomItemInfoPopupId(ConfigPrefabId value) { }

	[CompilerGenerated]
	public void set_ExperienceValue(int value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_FullOverrideLocalizationItemKey(string value) { }

	[CompilerGenerated]
	private void set_ItemType(string value) { }

	[CompilerGenerated]
	public void set_LevelNumber(int value) { }

	[CompilerGenerated]
	public void set_MergeChainDef(MergeChainDef value) { }

	[CompilerGenerated]
	public void set_Movable(bool value) { }

	[CompilerGenerated]
	private void set_OnDiscoveredActions(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_OverrideLocalizationItemCategory(string value) { }

	[CompilerGenerated]
	private void set_OverrideLocalizationItemKey(string value) { }

	[CompilerGenerated]
	public override void set_OverrideProductionSource(List<Int32> value) { }

	[CompilerGenerated]
	public void set_PoolTag(string value) { }

	[CompilerGenerated]
	public void set_Rarity(ItemRarity value) { }

	[CompilerGenerated]
	private void set_Rewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	public void set_ShowCustomItemInfoPopupOnDiscovery(bool value) { }

	[CompilerGenerated]
	public void set_ShowTutorialFingerOnDiscovery(bool value) { }

	[CompilerGenerated]
	public override void set_SinkPoints(int value) { }

	[CompilerGenerated]
	public override void set_SinkTag(string value) { }

	[CompilerGenerated]
	public void set_SkinName(string value) { }

	[CompilerGenerated]
	private void set_SpawnEffects(List<String> value) { }

	[CompilerGenerated]
	public void set_Tags(List<String> value) { }

	[CompilerGenerated]
	public void set_TimeSkipPriceGems(F64 value) { }

	[CompilerGenerated]
	public void set_UnlockOnBoardPriceGems(F64 value) { }

	[CompilerGenerated]
	private void set_UnlockRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	public void set_Unsellable(bool value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

	private void ValidateFallbackChest(IMergeMansionGameConfig configuration) { }

	private void ValidateHintLocId(GameConfigValidationResult validationResult) { }

}

