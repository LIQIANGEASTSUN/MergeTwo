namespace GameLogic.Player.Items.Chest;

[MetaSerializable]
public sealed class ChestState : IChestState
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<IItemDefinition, ItemDef> <>9__34_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <OpenAndFillRewards>b__34_0(IItemDefinition item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass38_0
	{
		public List<IItemDefinition> itemsToRemove; //Field offset: 0x10
		public IMergeMansionGameConfig config; //Field offset: 0x18

		public <>c__DisplayClass38_0() { }

		internal bool <RemoveFromChest>b__0(ItemDef loot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass42_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass42_0() { }

		internal IItemDefinition <GetRemainingLoot>b__0(ItemDef item) { }

	}

	private static readonly F64 oneMinuteGemCost; //Field offset: 0x0
	private static readonly F64 timeDiscountMin; //Field offset: 0x8
	private static readonly F64 timeDiscountMax; //Field offset: 0x10
	private static readonly F64 discountCurve; //Field offset: 0x18
	private static readonly F64 upperRangeOfTimeInSeconds; //Field offset: 0x20
	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaTime openStartTime; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private MetaTime estimatedEndTime; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaDuration relativeTimeSpendOnOpen; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	private List<ItemDef> remainingLoot; //Field offset: 0x28
	[MetaMember(5, MetaMemberFlags::None (0))]
	private bool hasBeenFilled; //Field offset: 0x30
	[MetaMember(6, MetaMemberFlags::None (0))]
	private MetaTime lastAbsoluteUpdateTime; //Field offset: 0x38
	[CompilerGenerated]
	private ulong <ActivationCount>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private ChestContext <ChestContext>k__BackingField; //Field offset: 0x48

	[MetaMember(7, MetaMemberFlags::None (0))]
	public override ulong ActivationCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private override ChestContext ChestContext
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override MetacoreTime EstimatedEndTime
	{
		 get { } //Length: 92
	}

	[IgnoreDataMember]
	public override MetacoreTime OpenStartTime
	{
		 get { } //Length: 92
	}

	private static ChestState() { }

	public ChestState() { }

	public override void AddAbsoluteTimeSpendOnOpen(MetacoreTime timestamp) { }

	public override void CalculateEstimatedOpenEndTime(MetacoreDuration duration, F32 boostFactor, MetacoreTime currentTimestamp) { }

	public override ValueTuple<Currencies, Int32> CalculateFastOpenCost(MetacoreTime currentTime, MetacoreDuration maxDuration) { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	public override void ForceCompleteCountdown() { }

	[CompilerGenerated]
	public override ulong get_ActivationCount() { }

	[CompilerGenerated]
	public override ChestContext get_ChestContext() { }

	public override MetacoreTime get_EstimatedEndTime() { }

	public override MetacoreTime get_OpenStartTime() { }

	private static int GetDiscountedGemCostForTime(MetacoreDuration duration) { }

	public override int GetLootCount() { }

	public override IItemDefinition GetNextLoot(IPlayer player) { }

	public IEnumerable<IItemDefinition> GetRemainingLoot(IMergeMansionGameConfig config) { }

	public override bool HasOpeningStarted() { }

	public override void IncreaseActivationCount() { }

	public override void IncreaseRelativeTimeSpendOnOpen(MetacoreDuration add) { }

	public override void InitChestContext(IPlayer player) { }

	public override bool IsForceCompleted() { }

	public override bool IsReadyForLooting() { }

	public override bool IsReadyForOpen(MetacoreTime timestamp) { }

	public override void OpenAndFillRewards(IEnumerable<IItemDefinition> rewards, IPlayer player) { }

	public override IEnumerable<IItemDefinition> RemoveFromChest(Predicate<IItemDefinition> itemMatcher, IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public void set_ActivationCount(ulong value) { }

	[CompilerGenerated]
	private void set_ChestContext(ChestContext value) { }

	public override void SkipGameTime(MetacoreDuration numMillisecondToSkip) { }

	public override void StartChestOpenCountdown(MetacoreTime startTime, MetacoreDuration duration, F32 boostFactor) { }

}

