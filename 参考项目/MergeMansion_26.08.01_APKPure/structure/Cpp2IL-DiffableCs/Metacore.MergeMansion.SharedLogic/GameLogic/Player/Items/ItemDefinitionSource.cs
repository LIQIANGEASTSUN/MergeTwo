namespace GameLogic.Player.Items;

public class ItemDefinitionSource : IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string PoolTag; //Field offset: 0x18
	public string SkinName; //Field offset: 0x20
	public int LevelNumber; //Field offset: 0x28
	public bool Movable; //Field offset: 0x2C
	public List<String> Tags; //Field offset: 0x30
	public MergeChainId MergeChain; //Field offset: 0x38
	public F64 CostInDiamonds; //Field offset: 0x40
	public F64 AnchorPriceGems; //Field offset: 0x48
	public F64 AnchorPriceCoins; //Field offset: 0x50
	public F64 TimeSkipPriceGems; //Field offset: 0x58
	public F64 UnlockOnBoardPriceGems; //Field offset: 0x60
	public Nullable<Int32> ExperienceValue; //Field offset: 0x68
	public List<String> ConfirmableMergeResults; //Field offset: 0x70
	public List<String> DiscoveredActions; //Field offset: 0x78
	public bool ShowTutorialFingerOnDiscovery; //Field offset: 0x80
	public List<String> Durability; //Field offset: 0x88
	public List<String> TimeLimited; //Field offset: 0x90
	public List<String> CombineInfoWithItem; //Field offset: 0x98
	public ItemRarity Rarity; //Field offset: 0xA0
	public bool Unsellable; //Field offset: 0xA4
	public List<String> SpawnEffects; //Field offset: 0xA8
	public ConfigPrefabId CustomItemInfoPopupId; //Field offset: 0xB0
	public bool ShowCustomItemInfoPopupOnDiscovery; //Field offset: 0xB8
	public string OverrideLocalizationItemKey; //Field offset: 0xC0
	public string FullOverrideLocalizationItemKey; //Field offset: 0xC8
	public string OverrideLocalizationItemCategory; //Field offset: 0xD0
	public string SinkTag; //Field offset: 0xD8
	public int SinkPoints; //Field offset: 0xE0
	public List<String> OverrideProductionSource; //Field offset: 0xE8
	[CompilerGenerated]
	private List<String> <UnlockRequirementType>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private List<String> <UnlockRequirementId>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private List<String> <UnlockRequirementAmount>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private List<String> <UnlockRequirementAux0>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private List<String> <RewardType>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private List<String> <RewardId>k__BackingField; //Field offset: 0x118
	[CompilerGenerated]
	private List<Int32> <RewardAmount>k__BackingField; //Field offset: 0x120
	[CompilerGenerated]
	private List<String> <RewardAux0>k__BackingField; //Field offset: 0x128
	[CompilerGenerated]
	private List<String> <RewardAux1>k__BackingField; //Field offset: 0x130
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x138

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public List<Int32> RewardAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> RewardAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> RewardAux1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> RewardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> RewardType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> UnlockRequirementAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> UnlockRequirementAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> UnlockRequirementId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> UnlockRequirementType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public ItemDefinitionSource() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public int get_ExperimentPriority() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	public List<Int32> get_RewardAmount() { }

	[CompilerGenerated]
	public List<String> get_RewardAux0() { }

	[CompilerGenerated]
	public List<String> get_RewardAux1() { }

	[CompilerGenerated]
	public List<String> get_RewardId() { }

	[CompilerGenerated]
	public List<String> get_RewardType() { }

	[CompilerGenerated]
	public List<String> get_UnlockRequirementAmount() { }

	[CompilerGenerated]
	public List<String> get_UnlockRequirementAux0() { }

	[CompilerGenerated]
	public List<String> get_UnlockRequirementId() { }

	[CompilerGenerated]
	public List<String> get_UnlockRequirementType() { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_RewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	public void set_RewardAux0(List<String> value) { }

	[CompilerGenerated]
	public void set_RewardAux1(List<String> value) { }

	[CompilerGenerated]
	public void set_RewardId(List<String> value) { }

	[CompilerGenerated]
	public void set_RewardType(List<String> value) { }

	[CompilerGenerated]
	public void set_UnlockRequirementAmount(List<String> value) { }

	[CompilerGenerated]
	public void set_UnlockRequirementAux0(List<String> value) { }

	[CompilerGenerated]
	public void set_UnlockRequirementId(List<String> value) { }

	[CompilerGenerated]
	public void set_UnlockRequirementType(List<String> value) { }

	public ItemDefinition ToConfigData(MergeFeatures mergeFeatures, ActivationFeatures activationFeatures, ActivationReEngagementSettings activationReEngagementSettings, SpawnFeatures spawnFeatures, DecayFeatures decayFeatures, ChestFeatures chestFeatures, CollectableFeatures collectableFeatures, BoosterFeatures boosterFeatures, BubbleFeatures bubbleFeatures, SinkFeatures sinkFeatures, ConsumableFeatures consumableFeatures, PortalFeatures portalFeatures, ChargesFeatures chargesFeatures, TimeContainerFeatures timeContainerFeatures, LeaderboardFeatures leaderboardFeatures, FishingRodFeatures fishingRodFeatures, WeightFeatures weightFeatures, CameraFeatures cameraFeatures, SinkableFeatures sinkableFeatures, FramesFeatures framesFeatures, PersistentFeatures persistentFeatures, OverrideSpawnChanceFeatures overrideSpawnChanceFeatures, AudioFeatures audioFeatures, OrderFeatures orderFeatures, MiniEventFeatures miniEventFeatures, ItemEffectFeatures itemEffectFeatures, OnFireFeatures onFireFeatures) { }

}

