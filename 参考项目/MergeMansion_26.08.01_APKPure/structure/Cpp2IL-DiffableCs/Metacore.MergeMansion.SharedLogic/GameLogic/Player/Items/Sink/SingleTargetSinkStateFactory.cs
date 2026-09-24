namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(2)]
public class SingleTargetSinkStateFactory : ISinkStateFactory
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemId", "target"})]
		public static Func<ValueTuple`2<Int32, Int32>, Int32> <>9__13_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemId", "target"})]
		public static Func<ValueTuple`2<Int32, Int32>, Int32> <>9__13_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal int <.ctor>b__13_0(ValueTuple<Int32, Int32> score) { }

		internal int <.ctor>b__13_1(ValueTuple<Int32, Int32> score) { }

	}

	[CompilerGenerated]
	private sealed class <GetAcceptedItems>d__16 : IEnumerable<Int32>, IEnumerable, IEnumerator<Int32>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private int <>2__current; //Field offset: 0x14
		private int <>l__initialThreadId; //Field offset: 0x18
		public SingleTargetSinkStateFactory <>4__this; //Field offset: 0x20
		private Enumerator<Int32, Int32> <>7__wrap1; //Field offset: 0x28

		private override int System.Collections.Generic.IEnumerator<System.Int32>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 40
		}

		[DebuggerHidden]
		public <GetAcceptedItems>d__16(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<Int32> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator() { }

		[DebuggerHidden]
		private override int System.Collections.Generic.IEnumerator<System.Int32>.get_Current() { }

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
	private sealed class <GetSinkProducts>d__14 : IEnumerable<ValueTuple`2<IItemDefinition, Int32>>, IEnumerable, IEnumerator<ValueTuple`2<IItemDefinition, Int32>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<IItemDefinition, Int32> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public SingleTargetSinkStateFactory <>4__this; //Field offset: 0x30
		private IMergeMansionGameConfig config; //Field offset: 0x38
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x40

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
		public <GetSinkProducts>d__14(int <>1__state) { }

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
	private MetaDictionary<Int32, Int32> <Scores>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ScoreTarget>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ItemDef <RewardDef>k__BackingField; //Field offset: 0x20

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public ItemDef RewardDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MetaDictionary<Int32, Int32> Scores
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int ScoreTarget
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private SingleTargetSinkStateFactory() { }

	public SingleTargetSinkStateFactory(List<ValueTuple`2<Int32, Int32>> scores, int scoreTarget, int rewardId) { }

	public override ISinkState Create() { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public ItemDef get_RewardDef() { }

	[CompilerGenerated]
	public MetaDictionary<Int32, Int32> get_Scores() { }

	[CompilerGenerated]
	public int get_ScoreTarget() { }

	[IteratorStateMachine(typeof(<GetAcceptedItems>d__16))]
	public override IEnumerable<Int32> GetAcceptedItems(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetSinkProducts>d__14))]
	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetSinkProducts(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public void set_RewardDef(ItemDef value) { }

	[CompilerGenerated]
	public void set_Scores(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	public void set_ScoreTarget(int value) { }

}

