namespace GameLogic.Player.Items.Order;

public abstract class OrderState : IOrderState, ISinkState, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<KeyValuePair`2<Int32, Int32>, Int32> <>9__13_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Value", null})]
		public static Func<KeyValuePair`2<Int32, Int32>, ValueTuple`2<Int32, Int32>> <>9__13_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal int <.ctor>b__13_0(KeyValuePair<Int32, Int32> score) { }

		internal ValueTuple<Int32, Int32> <.ctor>b__13_1(KeyValuePair<Int32, Int32> score) { }

	}

	[CompilerGenerated]
	private sealed class <get_CompletionItems>d__18 : IEnumerable<OrderStateReward>, IEnumerable, IEnumerator<OrderStateReward>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private OrderStateReward <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public OrderState <>4__this; //Field offset: 0x28
		private Enumerator<OrderStateReward> <>7__wrap1; //Field offset: 0x30

		private override OrderStateReward System.Collections.Generic.IEnumerator<GameLogic.Player.Items.Order.OrderStateReward>.Current
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
		public <get_CompletionItems>d__18(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<OrderStateReward> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.Order.OrderStateReward>.GetEnumerator() { }

		[DebuggerHidden]
		private override OrderStateReward System.Collections.Generic.IEnumerator<GameLogic.Player.Items.Order.OrderStateReward>.get_Current() { }

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
	private sealed class <GetOdds>d__31 : IEnumerable<ValueTuple`2<IItemDefinition, Int32>>, IEnumerable, IEnumerator<ValueTuple`2<IItemDefinition, Int32>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<IItemDefinition, Int32> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public OrderState <>4__this; //Field offset: 0x30
		private Enumerator<OrderStateReward> <>7__wrap1; //Field offset: 0x38

		private override ValueTuple<IItemDefinition, Int32> System.Collections.Generic.IEnumerator<(GameLogic.Player.Items.IItemDefinition,System.Int32)>.Current
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
		public <GetOdds>d__31(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`2<IItemDefinition, Int32>> System.Collections.Generic.IEnumerable<(GameLogic.Player.Items.IItemDefinition,System.Int32)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<IItemDefinition, Int32> System.Collections.Generic.IEnumerator<(GameLogic.Player.Items.IItemDefinition,System.Int32)>.get_Current() { }

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
	private sealed class <Produce>d__32 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public OrderState <>4__this; //Field offset: 0x28
		private int quantity; //Field offset: 0x30
		public int <>3__quantity; //Field offset: 0x34
		private int <count>5__2; //Field offset: 0x38
		private Enumerator<OrderStateReward> <>7__wrap2; //Field offset: 0x40

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
		public <Produce>d__32(int <>1__state) { }

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

	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"required", "progress"})]
	private MetaDictionary<Int32, ValueTuple`2<Int32, Int32>> <TakeInScores>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<OrderStateReward> <RewardItems>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <ActivationType>k__BackingField; //Field offset: 0x20

	[MetaMember(3, MetaMemberFlags::None (0))]
	private string ActivationType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override int ClaimableRewardsCount
	{
		 get { } //Length: 448
	}

	public override IEnumerable<OrderStateReward> CompletionItems
	{
		[IteratorStateMachine(typeof(<get_CompletionItems>d__18))]
		 get { } //Length: 116
	}

	[IgnoreDataMember]
	public override int ItemsPerActivation
	{
		 get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private List<OrderStateReward> RewardItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"required", "progress"})]
	protected MetaDictionary<Int32, ValueTuple`2<Int32, Int32>> TakeInScores
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	protected OrderState() { }

	protected OrderState(MetaDictionary<Int32, Int32> takeIn, List<Int32> rewardItems, List<Int32> rewardAmounts, string activationType, IGenerationContext context) { }

	public override bool DoesTakeIn(IPlayer player, int itemId) { }

	[CompilerGenerated]
	private string get_ActivationType() { }

	public override int get_ClaimableRewardsCount() { }

	[IteratorStateMachine(typeof(<get_CompletionItems>d__18))]
	public override IEnumerable<OrderStateReward> get_CompletionItems() { }

	public override int get_ItemsPerActivation() { }

	[CompilerGenerated]
	private List<OrderStateReward> get_RewardItems() { }

	[CompilerGenerated]
	protected MetaDictionary<Int32, ValueTuple`2<Int32, Int32>> get_TakeInScores() { }

	public override IItemDefinition GetCompletionItem(IPlayer player, MergeItem mergeItem, MergeBoard mergeBoard) { }

	[IteratorStateMachine(typeof(<GetOdds>d__31))]
	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public abstract ValueTuple<Int32, Int32> GetProgress() { }

	public override void GetProgressEntries(ref List<SinkProgressEntry>& outList) { }

	public abstract SinkType GetSinkType() { }

	public override bool IncreaseProgress(IPlayer player, int inputItem) { }

	public override void IncrementClaimedRewardsCount() { }

	public override bool IsActivable() { }

	public abstract bool IsCompleted() { }

	public override bool IsSpawnable() { }

	public override bool OrderCompleted() { }

	[IteratorStateMachine(typeof(<Produce>d__32))]
	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	private void set_ActivationType(string value) { }

	[CompilerGenerated]
	private void set_RewardItems(List<OrderStateReward> value) { }

	[CompilerGenerated]
	protected void set_TakeInScores(MetaDictionary<Int32, ValueTuple`2<Int32, Int32>> value) { }

}

