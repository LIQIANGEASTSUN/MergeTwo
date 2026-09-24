namespace GameLogic.Player.Items;

public interface IMergeItem : IBoardItem
{

	public bool ActivationPaused
	{
		 get { } //Length: 0
	}

	public ActivationState ActivationState
	{
		 get { } //Length: 0
	}

	public StorageState ActivationStorageState
	{
		 get { } //Length: 0
	}

	public ItemAttachmentsState AttachmentsState
	{
		 get { } //Length: 0
	}

	public ItemAttachmentsState AttachmentsStateMaybe
	{
		 get { } //Length: 0
	}

	public BoosterState BoosterState
	{
		 get { } //Length: 0
	}

	public BubbleState BubbleState
	{
		 get { } //Length: 0
	}

	public ChargesState ChargesState
	{
		 get { } //Length: 0
	}

	public IChestState ChestState
	{
		 get { } //Length: 0
	}

	public MetacoreTime CreatedAt
	{
		 get { } //Length: 0
	}

	public DecayState DecayState
	{
		 get { } //Length: 0
	}

	public XpState ExperienceState
	{
		 get { } //Length: 0
	}

	public MergeItemExtra Extra
	{
		 get { } //Length: 0
	}

	public FishingRodState FishingRodState
	{
		 get { } //Length: 0
	}

	public bool IsInsideBubble
	{
		 get { } //Length: 0
	}

	public bool IsLootable
	{
		 get { } //Length: 0
	}

	public bool IsPartiallyVisible
	{
		 get { } //Length: 0
	}

	public bool IsVisible
	{
		 get { } //Length: 0
	}

	public ItemLeaderboardState LeaderboardState
	{
		 get { } //Length: 0
	}

	public Option<MetacoreTime> NextSpawnStorageTimestampOption
	{
		 get { } //Length: 0
	}

	public OrderParentState OrderState
	{
		 get { } //Length: 0
	}

	public PersistentState PersistentState
	{
		 get { } //Length: 0
	}

	public Nullable<MetacoreDuration> RemainingDuration
	{
		 get { } //Length: 0
	}

	public MetacoreDuration RemainingTimeContained
	{
		 get { } //Length: 0
	}

	public ItemRewardsState RewardsState
	{
		 get { } //Length: 0
	}

	public ISinkState SinkState
	{
		 get { } //Length: 0
	}

	public SpawnState SpawnState
	{
		 get { } //Length: 0
	}

	public StorageState SpawnStorageState
	{
		 get { } //Length: 0
	}

	public int SpecialActivationAmount
	{
		 get { } //Length: 0
	}

	public F32 TimeBoostMultiplier
	{
		 get { } //Length: 0
	}

	public ITimeContainerState TimeContainerState
	{
		 get { } //Length: 0
	}

	public F32 TimeSpawnBoostMultiplier
	{
		 get { } //Length: 0
	}

	public ItemVisibility Visibility
	{
		 get { } //Length: 0
	}

	public WeightState WeightState
	{
		 get { } //Length: 0
	}

	public WeightState WeightStateMaybe
	{
		 get { } //Length: 0
	}

	public bool get_ActivationPaused() { }

	public ActivationState get_ActivationState() { }

	public StorageState get_ActivationStorageState() { }

	public ItemAttachmentsState get_AttachmentsState() { }

	public ItemAttachmentsState get_AttachmentsStateMaybe() { }

	public BoosterState get_BoosterState() { }

	public BubbleState get_BubbleState() { }

	public ChargesState get_ChargesState() { }

	public IChestState get_ChestState() { }

	public MetacoreTime get_CreatedAt() { }

	public DecayState get_DecayState() { }

	public XpState get_ExperienceState() { }

	public MergeItemExtra get_Extra() { }

	public FishingRodState get_FishingRodState() { }

	public bool get_IsInsideBubble() { }

	public bool get_IsLootable() { }

	public bool get_IsPartiallyVisible() { }

	public bool get_IsVisible() { }

	public ItemLeaderboardState get_LeaderboardState() { }

	public Option<MetacoreTime> get_NextSpawnStorageTimestampOption() { }

	public OrderParentState get_OrderState() { }

	public PersistentState get_PersistentState() { }

	public Nullable<MetacoreDuration> get_RemainingDuration() { }

	public MetacoreDuration get_RemainingTimeContained() { }

	public ItemRewardsState get_RewardsState() { }

	public ISinkState get_SinkState() { }

	public SpawnState get_SpawnState() { }

	public StorageState get_SpawnStorageState() { }

	public int get_SpecialActivationAmount() { }

	public F32 get_TimeBoostMultiplier() { }

	public ITimeContainerState get_TimeContainerState() { }

	public F32 get_TimeSpawnBoostMultiplier() { }

	public ItemVisibility get_Visibility() { }

	public WeightState get_WeightState() { }

	public WeightState get_WeightStateMaybe() { }

	public IItemDefinition GetDefinition(IMergeMansionGameConfig config) { }

	public IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config) { }

}

