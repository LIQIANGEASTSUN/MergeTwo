namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(5)]
public class TagSinkStateFactory : ISinkStateFactory
{
	[CompilerGenerated]
	private sealed class <GetAcceptedItems>d__6 : IEnumerable<Int32>, IEnumerable, IEnumerator<Int32>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private int <>2__current; //Field offset: 0x14
		private int <>l__initialThreadId; //Field offset: 0x18
		private IMergeMansionGameConfig config; //Field offset: 0x20
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x28
		public TagSinkStateFactory <>4__this; //Field offset: 0x30
		private IEnumerator<KeyValuePair`2<Int32, ItemDefinition>> <>7__wrap1; //Field offset: 0x38

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
		public <GetAcceptedItems>d__6(int <>1__state) { }

		private void <>m__Finally1() { }

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
	private sealed class <GetSinkProducts>d__5 : IEnumerable<ValueTuple`2<IItemDefinition, Int32>>, IEnumerable, IEnumerator<ValueTuple`2<IItemDefinition, Int32>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<IItemDefinition, Int32> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28

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
		public <GetSinkProducts>d__5(int <>1__state) { }

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

	[MetaMember(1, MetaMemberFlags::None (0))]
	private string Tag; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private int InputCount; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	private string RewardTagName; //Field offset: 0x20

	private TagSinkStateFactory() { }

	public TagSinkStateFactory(string tag, string rewardTagName, int inputCount) { }

	public override ISinkState Create() { }

	[IteratorStateMachine(typeof(<GetAcceptedItems>d__6))]
	public override IEnumerable<Int32> GetAcceptedItems(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetSinkProducts>d__5))]
	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetSinkProducts(IMergeMansionGameConfig config) { }

}

