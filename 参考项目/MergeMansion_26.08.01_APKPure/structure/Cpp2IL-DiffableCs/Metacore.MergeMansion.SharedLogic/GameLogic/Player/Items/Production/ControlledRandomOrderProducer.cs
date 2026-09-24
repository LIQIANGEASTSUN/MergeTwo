namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(4)]
public class ControlledRandomOrderProducer : IOrderSpawner, IOrderProducer
{
	[CompilerGenerated]
	private sealed class <GetSpawnOrder>d__18 : IEnumerable<OrderRequirementsId>, IEnumerable, IEnumerator<OrderRequirementsId>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private OrderRequirementsId <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public ControlledRandomOrderProducer <>4__this; //Field offset: 0x28
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"orderRequirements", "weight"})]
		private Enumerator<ValueTuple<OrderRequirementsId, Int32>> <>7__wrap1; //Field offset: 0x30

		private override OrderRequirementsId System.Collections.Generic.IEnumerator<GameLogic.Player.Items.Order.OrderRequirementsId>.Current
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
		public <GetSpawnOrder>d__18(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<OrderRequirementsId> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.Order.OrderRequirementsId>.GetEnumerator() { }

		[DebuggerHidden]
		private override OrderRequirementsId System.Collections.Generic.IEnumerator<GameLogic.Player.Items.Order.OrderRequirementsId>.get_Current() { }

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
	private RollHistoryType <RollType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ItemType>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"orderRequirements", "weight"})]
	private List<ValueTuple`2<OrderRequirementsId, Int32>> <GenerationOdds>k__BackingField; //Field offset: 0x18

	[MetaMember(3, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"orderRequirements", "weight"})]
	private List<ValueTuple`2<OrderRequirementsId, Int32>> GenerationOdds
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private int ItemType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override int OrderCount
	{
		 get { } //Length: 72
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private RollHistoryType RollType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ControlledRandomOrderProducer() { }

	public ControlledRandomOrderProducer(RollHistoryType rollType, int itemId, List<ValueTuple`2<OrderRequirementsId, Int32>> oddsList) { }

	public override void AdvanceSequenceIndex(IGenerationContext context) { }

	[CompilerGenerated]
	private List<ValueTuple`2<OrderRequirementsId, Int32>> get_GenerationOdds() { }

	[CompilerGenerated]
	private int get_ItemType() { }

	public override int get_OrderCount() { }

	[CompilerGenerated]
	private RollHistoryType get_RollType() { }

	[IteratorStateMachine(typeof(<GetSpawnOrder>d__18))]
	public override IEnumerable<OrderRequirementsId> GetSpawnOrder() { }

	public override OrderRequirements Produce(int orderIndex, IGenerationContext context) { }

	[CompilerGenerated]
	private void set_GenerationOdds(List<ValueTuple`2<OrderRequirementsId, Int32>> value) { }

	[CompilerGenerated]
	private void set_ItemType(int value) { }

	[CompilerGenerated]
	private void set_RollType(RollHistoryType value) { }

}

