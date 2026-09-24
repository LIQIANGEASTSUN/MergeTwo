namespace GameLogic.Player.Items;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {2})]
[MetaSerializableDerived(2)]
public sealed class MergeItem : IMergeItem, IBoardItem
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<IItemOdds, Int32> <>9__186_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <GenerateFishingRodState>b__186_0(IItemOdds odd) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass181_0
	{
		private sealed class <<GetPotentialEventsForBubbleBonus>g__GetBubbleBonusesForEvent|0>d : IEnumerable<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>>, IEnumerable, IEnumerator<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>>, IEnumerator, IDisposable
		{
			private int <>1__state; //Field offset: 0x10
			private ValueTuple<IBubbleBonusEvent, EnergyType, F32> <>2__current; //Field offset: 0x18
			private int <>l__initialThreadId; //Field offset: 0x28
			private MergeBoard eventBoard; //Field offset: 0x30
			public MergeBoard <>3__eventBoard; //Field offset: 0x38
			public <>c__DisplayClass181_0 <>4__this; //Field offset: 0x40
			private IBubbleBonusEvent bubbleBonusEvent; //Field offset: 0x48
			public IBubbleBonusEvent <>3__bubbleBonusEvent; //Field offset: 0x50
			private EnergyType defaultEnergyType; //Field offset: 0x58
			public EnergyType <>3__defaultEnergyType; //Field offset: 0x5C
			private Enumerator<BubbleBonusInfo> <>7__wrap1; //Field offset: 0x60

			private override ValueTuple<IBubbleBonusEvent, EnergyType, F32> System.Collections.Generic.IEnumerator<(Code.GameLogic.GameEvents.IBubbleBonusEvent,GameLogic.Player.EnergyType,Metaplay.Core.Math.F32)>.Current
			{
				[DebuggerHidden]
				private get { } //Length: 12
			}

			private override object System.Collections.IEnumerator.Current
			{
				[DebuggerHidden]
				private get { } //Length: 92
			}

			[DebuggerHidden]
			public <<GetPotentialEventsForBubbleBonus>g__GetBubbleBonusesForEvent|0>d(int <>1__state) { }

			private void <>m__Finally1() { }

			private override bool MoveNext() { }

			[DebuggerHidden]
			private override IEnumerator<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>> System.Collections.Generic.IEnumerable<(Code.GameLogic.GameEvents.IBubbleBonusEvent,GameLogic.Player.EnergyType,Metaplay.Core.Math.F32)>.GetEnumerator() { }

			[DebuggerHidden]
			private override ValueTuple<IBubbleBonusEvent, EnergyType, F32> System.Collections.Generic.IEnumerator<(Code.GameLogic.GameEvents.IBubbleBonusEvent,GameLogic.Player.EnergyType,Metaplay.Core.Math.F32)>.get_Current() { }

			[DebuggerHidden]
			private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

			[DebuggerHidden]
			private override object System.Collections.IEnumerator.get_Current() { }

			[DebuggerHidden]
			private override void System.Collections.IEnumerator.Reset() { }

			[DebuggerHidden]
			private override void System.IDisposable.Dispose() { }

		}

		public MergeBoardId boardId; //Field offset: 0x10
		public PlayerModel player; //Field offset: 0x18

		public <>c__DisplayClass181_0() { }

		[IteratorStateMachine(typeof(<<GetPotentialEventsForBubbleBonus>g__GetBubbleBonusesForEvent|0>d))]
		internal IEnumerable<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>> <GetPotentialEventsForBubbleBonus>g__GetBubbleBonusesForEvent|0(IBubbleBonusEvent bubbleBonusEvent, MergeBoard eventBoard, EnergyType defaultEnergyType) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass182_0
	{
		public ILeaderboardFeatures leaderboardFeatures; //Field offset: 0x10

		public <>c__DisplayClass182_0() { }

		internal bool <ClaimLeaderboardScoreIfAvailable>b__0(LeaderboardEventModel e) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass182_1
	{
		public ShortLeaderboardEventId shortLeaderboardEventId; //Field offset: 0x10

		public <>c__DisplayClass182_1() { }

		internal bool <ClaimLeaderboardScoreIfAvailable>b__1(ShortLeaderboardEventModel e) { }

	}

	[CompilerGenerated]
	private sealed class <GetActivationSpawnItems>d__97 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public MergeItem <>4__this; //Field offset: 0x28
		private IPlayer player; //Field offset: 0x30
		public IPlayer <>3__player; //Field offset: 0x38
		private ProducerContext producerContext; //Field offset: 0x40
		public ProducerContext <>3__producerContext; //Field offset: 0x50
		private MetacoreTime timestamp; //Field offset: 0x60
		public MetacoreTime <>3__timestamp; //Field offset: 0x68
		private IGenerationContext generationContext; //Field offset: 0x70
		public IGenerationContext <>3__generationContext; //Field offset: 0x78
		private IEnumerator<IItemDefinition> <>7__wrap1; //Field offset: 0x80
		private IEnumerator<OrderStateReward> <>7__wrap2; //Field offset: 0x88

		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <GetActivationSpawnItems>d__97(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IItemDefinition> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.IItemDefinition>.GetEnumerator() { }

		[DebuggerHidden]
		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private sealed class <GetPotentialEventsForBubbleBonus>d__181 : IEnumerable<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>>, IEnumerable, IEnumerator<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"bubleBonusEvent", "energyType", "divisor"})]
		private ValueTuple<IBubbleBonusEvent, EnergyType, F32> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		private MergeBoardId boardId; //Field offset: 0x30
		public MergeBoardId <>3__boardId; //Field offset: 0x38
		private PlayerModel player; //Field offset: 0x40
		public PlayerModel <>3__player; //Field offset: 0x48
		private <>c__DisplayClass181_0 <>8__1; //Field offset: 0x50
		private IMergeMansionGameConfig <gameConfig>5__2; //Field offset: 0x58
		private IImmutableSet<MergeBoardId> <auxEnergyMergeBoards>5__3; //Field offset: 0x60
		private IEnumerator<ProgressionEventModel> <>7__wrap3; //Field offset: 0x68
		private IEnumerator<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>> <>7__wrap4; //Field offset: 0x70
		private IEnumerator<LeaderboardEventModel> <>7__wrap5; //Field offset: 0x78
		private IEnumerator<CollectibleBoardEventModel> <>7__wrap6; //Field offset: 0x80
		private IEnumerator<ShortLeaderboardEventModel> <>7__wrap7; //Field offset: 0x88

		private override ValueTuple<IBubbleBonusEvent, EnergyType, F32> System.Collections.Generic.IEnumerator<(Code.GameLogic.GameEvents.IBubbleBonusEventbubleBonusEvent,GameLogic.Player.EnergyTypeenergyType,Metaplay.Core.Math.F32divisor)>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 12
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 92
		}

		[DebuggerHidden]
		public <GetPotentialEventsForBubbleBonus>d__181(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private void <>m__Finally4() { }

		private void <>m__Finally5() { }

		private void <>m__Finally6() { }

		private void <>m__Finally7() { }

		private void <>m__Finally8() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>> System.Collections.Generic.IEnumerable<(Code.GameLogic.GameEvents.IBubbleBonusEventbubleBonusEvent,GameLogic.Player.EnergyTypeenergyType,Metaplay.Core.Math.F32divisor)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<IBubbleBonusEvent, EnergyType, F32> System.Collections.Generic.IEnumerator<(Code.GameLogic.GameEvents.IBubbleBonusEventbubleBonusEvent,GameLogic.Player.EnergyTypeenergyType,Metaplay.Core.Math.F32divisor)>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private sealed class <GetUnlockedMergeItems>d__109 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		public MergeItem <>4__this; //Field offset: 0x38
		private IEnumerator<IItemDefinition> <>7__wrap1; //Field offset: 0x40

		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <GetUnlockedMergeItems>d__109(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IItemDefinition> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.IItemDefinition>.GetEnumerator() { }

		[DebuggerHidden]
		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {22, 23})]
	[MetaSerializable]
	internal sealed class MergeItemExtra
	{
		[MetaMember(1, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public DecayState DecayState; //Field offset: 0x10
		[MetaMember(2, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ActivationState ActivationState; //Field offset: 0x18
		[MetaMember(3, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public SpawnState SpawnState; //Field offset: 0x20
		[MetaMember(4, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public StorageState ActivationStorageState; //Field offset: 0x28
		[MetaMember(5, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public StorageState SpawnStorageState; //Field offset: 0x30
		[MetaMember(6, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ChestState ChestState; //Field offset: 0x38
		[MetaMember(7, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public BoosterState BoosterState; //Field offset: 0x40
		[MetaMember(8, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public BubbleState BubbleState; //Field offset: 0x48
		[MetaMember(9, MetaMemberFlags::None (0))]
		public int SpecialActivationAmount; //Field offset: 0x50
		[MetaMember(10, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ISinkState SinkState; //Field offset: 0x58
		[MetaMember(12, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public TimeContainerState TimeContainerState; //Field offset: 0x60
		[MetaMember(13, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ChargesState ChargeState; //Field offset: 0x68
		[MetaMember(14, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public XpState ExperienceState; //Field offset: 0x70
		[MetaMember(15, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ItemAttachmentsState AttachmentsState; //Field offset: 0x78
		[MetaMember(16, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ItemLeaderboardState LeaderboardState; //Field offset: 0x80
		[MetaMember(17, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public ItemRewardsState RewardsState; //Field offset: 0x88
		[MetaMember(18, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public FishingRodState FishingRodState; //Field offset: 0x90
		[MetaMember(19, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public WeightState WeightState; //Field offset: 0x98
		[MetaMember(20, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public PersistentState PersistentState; //Field offset: 0xA0
		[MetaMember(21, MetaMemberFlags::None (0))]
		[MetaSerializerOmitNull]
		public OrderParentState OrderState; //Field offset: 0xA8

		public MergeItemExtra() { }

	}

	private const string HotspotTagKey = "FinishHotspotID"; //Field offset: 0x0
	private static readonly MetacoreTime guaranteedFuture; //Field offset: 0x0
	[CompilerGenerated]
	private ItemDef <DefinitionDef>k__BackingField; //Field offset: 0x10
	[MetaMember(3, MetaMemberFlags::None (0))]
	private ItemVisibility visibility; //Field offset: 0x18
	[MetaMember(4, MetaMemberFlags::None (0))]
	private MergeItemExtra extra; //Field offset: 0x20
	[MetaMember(5, MetaMemberFlags::None (0))]
	private MetaTime createdAt; //Field offset: 0x28

	[IgnoreDataMember]
	public override bool ActivationPaused
	{
		 get { } //Length: 52
		 set { } //Length: 76
	}

	[IgnoreDataMember]
	public override ActivationState ActivationState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override StorageState ActivationStorageState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override ItemAttachmentsState AttachmentsState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override ItemAttachmentsState AttachmentsStateMaybe
	{
		 get { } //Length: 24
	}

	[IgnoreDataMember]
	public override BoosterState BoosterState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override BubbleState BubbleState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override ChargesState ChargesState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override IChestState ChestState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override MetacoreTime CreatedAt
	{
		 get { } //Length: 92
	}

	[IgnoreDataMember]
	public override DecayState DecayState
	{
		 get { } //Length: 28
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public ItemDef DefinitionDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override XpState ExperienceState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override MergeItemExtra Extra
	{
		 get { } //Length: 112
	}

	[IgnoreDataMember]
	public override FishingRodState FishingRodState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public FishingRodState FishingRodStateMaybe
	{
		 get { } //Length: 24
	}

	[IgnoreDataMember]
	private override Option<MetacoreTime> GameLogic.Player.Items.IMergeItem.NextSpawnStorageTimestampOption
	{
		private get { } //Length: 368
	}

	[IgnoreDataMember]
	private override ITimeContainerState GameLogic.Player.Items.IMergeItem.TimeContainerState
	{
		private get { } //Length: 28
	}

	public bool HasFishingRodState
	{
		 get { } //Length: 32
	}

	[IgnoreDataMember]
	public bool IsBoosted
	{
		 get { } //Length: 156
	}

	[IgnoreDataMember]
	public bool IsFullyConsumed
	{
		 get { } //Length: 208
	}

	[IgnoreDataMember]
	public bool IsHiddenInABox
	{
		 get { } //Length: 20
	}

	public override bool IsInsideBubble
	{
		 get { } //Length: 32
	}

	[IgnoreDataMember]
	public override bool IsLootable
	{
		 get { } //Length: 280
	}

	[IgnoreDataMember]
	public override bool IsPartiallyVisible
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public bool IsSpawnBoosted
	{
		 get { } //Length: 156
	}

	[IgnoreDataMember]
	public override bool IsVisible
	{
		 get { } //Length: 16
	}

	public override int ItemId
	{
		 get { } //Length: 124
	}

	[IgnoreDataMember]
	public override ItemLeaderboardState LeaderboardState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public Nullable<MetaTime> NextSpawnStorageTimestamp
	{
		 get { } //Length: 48
	}

	[IgnoreDataMember]
	public override OrderParentState OrderState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override PersistentState PersistentState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override Nullable<MetacoreDuration> RemainingDuration
	{
		 get { } //Length: 488
	}

	[IgnoreDataMember]
	public override MetacoreDuration RemainingTimeContained
	{
		 get { } //Length: 436
	}

	[IgnoreDataMember]
	public override ItemRewardsState RewardsState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override ISinkState SinkState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override SpawnState SpawnState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override StorageState SpawnStorageState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override int SpecialActivationAmount
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override F32 TimeBoostMultiplier
	{
		 get { } //Length: 164
	}

	[IgnoreDataMember]
	public TimeContainerState TimeContainerState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override F32 TimeSpawnBoostMultiplier
	{
		 get { } //Length: 164
	}

	[IgnoreDataMember]
	public override ItemVisibility Visibility
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public override WeightState WeightState
	{
		 get { } //Length: 28
	}

	[IgnoreDataMember]
	public override WeightState WeightStateMaybe
	{
		 get { } //Length: 24
	}

	private static MergeItem() { }

	public MergeItem() { }

	private MergeItem(ItemDef definitionDef, MetaTime timestamp, ItemVisibility itemVisibility) { }

	public MergeItem(IPlayer player, ItemDef itemDefinitionDef, MetacoreTime timestamp, MergeBoardId boardId, ItemVisibility itemVisibility = 2, bool insideBubble = false, bool checkNullExtra = false) { }

	public MergeItem(ItemDef itemDefinitionDef, MetaTime timestamp, ItemVisibility itemVisibility, DecayState decayState, ActivationState activationState, StorageState activationStorage, SpawnState spawnState, StorageState spawnStorage, IChestState chestState, ISinkState sinkState, ITimeContainerState timeContainerState, ChargesState chargesState, XpState xpState, OrderParentState orderState, PersistentState persistentState) { }

	public MergeItem(IMergeMansionGameConfig config, IItemDefinition resultingItem, IMergeItem sourceItem, MetacoreTime timestamp, IPlayer player) { }

	public ActivationResult Activate(MetacoreTime timestamp, IPlayer player, int capacityConsumptionMultiplier) { }

	[Obsolete("Use the one with MetacoreTime")]
	public ActivationResult Activate(MetaTime timestamp, IPlayer player, IBoard board) { }

	public ActivationResult Activate(MetacoreTime timestamp, IPlayer player, IBoard board) { }

	public IItemDefinition ActivationItemType(IGenerationContext generationContext, ProducerContext producerContext, IPlayer player, MetacoreTime timestamp, IEnumerable<IItemDefinition> allowedItems = null) { }

	private void ActualTimeMultiplierSetter(IPlayer player, F32 multiplier, F32 spawnMultiplier, MetaTime timestamp) { }

	public void AddAttachment(IItemAttachment attachment) { }

	public void AdjustTimesAfterPausing(MetacoreDuration timeDifference, IMergeMansionGameConfig config) { }

	public bool AllowNearMatching(IPlayer player) { }

	public bool AllowReverseSinking(IPlayer player) { }

	private void ApplyTimeBoostToTimes(MetaTime timestamp, IPlayer player) { }

	public bool BoosterBoostsItem(int checkedItem, IPlayer player) { }

	private void CalculateNextEstimatedDecayEndTime(MetacoreTime currentTimestamp, IPlayer player) { }

	public bool CanBeMergedWithItem(IPlayer player, MergeItem otherItem, MetacoreTime checkTimestamp) { }

	[Obsolete("use the one with MetacoreTime")]
	public bool CanBeMergedWithItem(IPlayer player, MergeItem otherItem, MetaTime checkTimestamp) { }

	public bool CanBeUpgraded(IPlayer player) { }

	public bool CanConsumableMergeWithSameType(IPlayer player) { }

	public void ClaimLeaderboardScoreIfAvailable(IPlayer player, LeaderboardEventScoreChangeSourceAction sourceAction) { }

	public void ClaimRewardsIfAvailable(IPlayer player, Coordinate coordinate) { }

	public bool ClampBrokenItemTimers(MetacoreTime currentTime, LogChannel log, IPlayer player) { }

	public int ConsumableCap(IPlayer player) { }

	public int ConsumeDecayCycle() { }

	private string DebugLogActivation() { }

	public static void DebugMergeItem(MergeItem m, MergeBoard board, IPlayer player) { }

	public IItemDefinition DecayProduct(IGenerationContext generationContext, MergeBoard board) { }

	public bool DoesTakeInItem(IPlayer player, int type) { }

	public bool DoTakeInAction(IPlayer player, int type) { }

	public void FixActivationRelativeTimesIfNeeded(MetacoreTime timestamp) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public void FixSpawnRelativeTimesIfNeeded(MetacoreTime timestamp) { }

	private override Option<MetacoreTime> GameLogic.Player.Items.IMergeItem.get_NextSpawnStorageTimestampOption() { }

	private override ITimeContainerState GameLogic.Player.Items.IMergeItem.get_TimeContainerState() { }

	private static List<IBubbleBonus> GenerateBubbleBonus(IPlayer player, IItemDefinition itemInBubble, MergeBoardId boardId) { }

	public void GenerateFishingRodState(IPlayer player) { }

	public override bool get_ActivationPaused() { }

	public override ActivationState get_ActivationState() { }

	public override StorageState get_ActivationStorageState() { }

	public override ItemAttachmentsState get_AttachmentsState() { }

	public override ItemAttachmentsState get_AttachmentsStateMaybe() { }

	public override BoosterState get_BoosterState() { }

	public override BubbleState get_BubbleState() { }

	public override ChargesState get_ChargesState() { }

	public override IChestState get_ChestState() { }

	public override MetacoreTime get_CreatedAt() { }

	public override DecayState get_DecayState() { }

	[CompilerGenerated]
	public ItemDef get_DefinitionDef() { }

	public override XpState get_ExperienceState() { }

	public override MergeItemExtra get_Extra() { }

	public override FishingRodState get_FishingRodState() { }

	public FishingRodState get_FishingRodStateMaybe() { }

	public bool get_HasFishingRodState() { }

	public bool get_IsBoosted() { }

	public bool get_IsFullyConsumed() { }

	public bool get_IsHiddenInABox() { }

	public override bool get_IsInsideBubble() { }

	public override bool get_IsLootable() { }

	public override bool get_IsPartiallyVisible() { }

	public bool get_IsSpawnBoosted() { }

	public override bool get_IsVisible() { }

	public override int get_ItemId() { }

	public override ItemLeaderboardState get_LeaderboardState() { }

	public Nullable<MetaTime> get_NextSpawnStorageTimestamp() { }

	public override OrderParentState get_OrderState() { }

	public override PersistentState get_PersistentState() { }

	public override Nullable<MetacoreDuration> get_RemainingDuration() { }

	public override MetacoreDuration get_RemainingTimeContained() { }

	public override ItemRewardsState get_RewardsState() { }

	public override ISinkState get_SinkState() { }

	public override SpawnState get_SpawnState() { }

	public override StorageState get_SpawnStorageState() { }

	public override int get_SpecialActivationAmount() { }

	public override F32 get_TimeBoostMultiplier() { }

	public TimeContainerState get_TimeContainerState() { }

	public override F32 get_TimeSpawnBoostMultiplier() { }

	public override ItemVisibility get_Visibility() { }

	public override WeightState get_WeightState() { }

	public override WeightState get_WeightStateMaybe() { }

	public IPlacement GetActivationPlacementStyle(IMergeMansionGameConfig config) { }

	public IEnumerable<IItemDefinition> GetActivationSpawnItems(IPlayer player, IBoard board) { }

	[IteratorStateMachine(typeof(<GetActivationSpawnItems>d__97))]
	public IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, IPlayer player, MetacoreTime timestamp, ProducerContext producerContext) { }

	public MetaDuration GetAge(MetaTime now) { }

	public IBoostArea GetBoostArea(IPlayer player) { }

	public F32 GetBoosterFactor(IPlayer player) { }

	public override IItemDefinition GetDefinition(IMergeMansionGameConfig config) { }

	public override string GetItemType(IMergeMansionGameConfig config) { }

	public override IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config) { }

	public ValueTuple<ItemActionType, MetacoreTime> GetNextEvent(IPlayer player, Coordinate coordinate, IBoardQuery boardQuery, MetacoreTime timestampUpperBoundInclusive) { }

	[IteratorStateMachine(typeof(<GetPotentialEventsForBubbleBonus>d__181))]
	private static IEnumerable<ValueTuple`3<IBubbleBonusEvent, EnergyType, F32>> GetPotentialEventsForBubbleBonus(PlayerModel player, MergeBoardId boardId) { }

	public IItemDefinition GetSinkCompletionItem(IPlayer player, MergeBoard board) { }

	public F32 GetSpawnBoosterFactor(IPlayer player) { }

	public int GetSpecialActivationAmount() { }

	public MetaTime GetStartTimeOfActivationStorageFill() { }

	public MetaTime GetStartTimeOfSpawnStorageFill() { }

	[IteratorStateMachine(typeof(<GetUnlockedMergeItems>d__109))]
	public IEnumerable<IItemDefinition> GetUnlockedMergeItems(IPlayer player) { }

	public int GetUnlockedSpawnItemCount(IPlayer player, MergeBoard board) { }

	public IEnumerable<IItemDefinition> GetUnlockedSpawnItems(IPlayer player, MergeBoard board) { }

	public bool HideSinkProgressBar(IPlayer player) { }

	public bool IsAffectedByBooster(IPlayer player) { }

	public bool IsBooster(IPlayer player) { }

	public bool IsCollectable(IPlayer player) { }

	public bool IsConsumable(IPlayer player) { }

	public bool IsDragSafeAreaEnabled(IPlayer player) { }

	public bool IsMovable(IPlayer player) { }

	public bool IsSellConfirmationRequired(IPlayer player) { }

	public bool IsSinkable(IPlayer player) { }

	public int ItemsPerActivation(bool onFire, IPlayer player) { }

	public void ManualIncreaseOfNextEstimatedActivationStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public void ManualIncreaseOfNextEstimatedSpawnStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public void ManualIncreaseStartTimeOfActivationStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public void ManualIncreaseStartTimeOfSpawnStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public ValueTuple<ItemActionType, MetacoreTime> NextEvent(IPlayer player, Coordinate coordinate, IBoardQuery boardQuery) { }

	public static void OnCobwebCleared(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, MergeItem item) { }

	public void RemoveAttachments(Predicate<IItemAttachment> matcher) { }

	public void RemoveItemFromBubble() { }

	public void ResetSpawnState(IPlayer player, MetacoreTime timestamp) { }

	public void ResetTimeMultiplier(IPlayer player, MetaTime timestamp) { }

	public void ResetTimeMultiplier(IPlayer player, MetacoreTime timestamp) { }

	public void RestoreInternalState(MetacoreTime restorationTime, IPlayer player) { }

	public void RestoreSpawnerState(IItemDefinition itemDefinition) { }

	public ValueTuple<Currencies, Int64> SellPrice(SharedGlobals sharedGlobals, IPlayer player) { }

	public void set_ActivationPaused(bool value) { }

	[CompilerGenerated]
	public void set_DefinitionDef(ItemDef value) { }

	public void SetFishingRodState(FishingRodState fishingRodState) { }

	public void SetPersistent(bool disableDecayAnimation, int decayCycles, int itemStates, IItemDefinition resetToItem, int startCycles, int currentState, bool forced = false) { }

	public void SetTimeMultiplier(IPlayer player, F32 multiplier, F32 spawnMultiplier, MetacoreTime timestamp) { }

	[Obsolete]
	public void SetTimeMultiplier(IPlayer player, F32 multiplier, F32 spawnMultiplier, MetaTime timestamp) { }

	public void SkipGameTime(MetacoreDuration numMillisecond, IMergeMansionGameConfig config) { }

	public void Spawn(IPlayer player, bool takeFromStorageContainer, MetaTime timestamp) { }

	public IItemDefinition SpawnItemType(IPlayer player, MergeBoard board, IEnumerable<IItemDefinition> allowedItems = null) { }

	public IPlacement SpawnPlacement(IPlayer player) { }

	public bool SpawnStorageFull(IMergeMansionGameConfig config) { }

	public ActivationResult SpecialActivate(int takeAmount, IPlayer player, int capacityConsumptionMultiplier, bool onFireActive, out int spawned) { }

	private void StartNextSpawnStorageFill(IPlayer player, MetaTime timestamp) { }

	public bool TrySpawning(IGenerationContext generationContext, out IItemDefinition generatedItem) { }

	public bool TryToFillActivationStorage(IPlayer player, MetacoreTime timestamp, bool boardHasCooldownRemoverState = false, bool boardHasOnFireState = false) { }

	public SpawnReaction TryToFillSpawnStorageOrSpawn(IPlayer player, MetaTime timestamp, bool hasEmptySpaceNear) { }

	public bool UpdateVisibility(MetacoreTime timestamp, IPlayer player, MergeBoard mergeBoard, Coordinate coordinate) { }

}

