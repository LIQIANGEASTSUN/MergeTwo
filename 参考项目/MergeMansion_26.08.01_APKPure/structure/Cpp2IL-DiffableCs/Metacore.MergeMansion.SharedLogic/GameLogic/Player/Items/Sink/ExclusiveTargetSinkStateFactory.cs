namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(4)]
public class ExclusiveTargetSinkStateFactory : ISinkStateFactory
{
	[CompilerGenerated]
	private sealed class <GetAcceptedItems>d__7 : IEnumerable<Int32>, IEnumerable, IEnumerator<Int32>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private int <>2__current; //Field offset: 0x14
		private int <>l__initialThreadId; //Field offset: 0x18
		public ExclusiveTargetSinkStateFactory <>4__this; //Field offset: 0x20
		private int <i>5__2; //Field offset: 0x28

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
		public <GetAcceptedItems>d__7(int <>1__state) { }

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
	private sealed class <GetSinkProducts>d__8 : IEnumerable<ValueTuple`2<IItemDefinition, Int32>>, IEnumerable, IEnumerator<ValueTuple`2<IItemDefinition, Int32>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<IItemDefinition, Int32> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public ExclusiveTargetSinkStateFactory <>4__this; //Field offset: 0x30
		private IMergeMansionGameConfig config; //Field offset: 0x38
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x40
		private int <i>5__2; //Field offset: 0x48

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
		public <GetSinkProducts>d__8(int <>1__state) { }

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
	private List<ExclusiveTargetSinkBranch> <Branches>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public List<ExclusiveTargetSinkBranch> Branches
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private ExclusiveTargetSinkStateFactory() { }

	public ExclusiveTargetSinkStateFactory(List<ValueTuple`2<Int32, Int32>> scores, List<Int32> rewardItemIds) { }

	public override ISinkState Create() { }

	[CompilerGenerated]
	public List<ExclusiveTargetSinkBranch> get_Branches() { }

	[IteratorStateMachine(typeof(<GetAcceptedItems>d__7))]
	public override IEnumerable<Int32> GetAcceptedItems(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetSinkProducts>d__8))]
	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetSinkProducts(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public void set_Branches(List<ExclusiveTargetSinkBranch> value) { }

}

