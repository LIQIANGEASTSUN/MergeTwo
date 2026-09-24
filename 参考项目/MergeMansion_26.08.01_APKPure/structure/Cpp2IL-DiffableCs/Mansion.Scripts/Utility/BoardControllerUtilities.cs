namespace Utility;

public static class BoardControllerUtilities
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public IBoardController boardController; //Field offset: 0x10

		public <>c__DisplayClass1_0() { }

		internal bool <WaitUntilBoardHidden>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <GetBoardItemIds>d__2 : IEnumerable<Int32>, IEnumerable, IEnumerator<Int32>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private int <>2__current; //Field offset: 0x14
		private int <>l__initialThreadId; //Field offset: 0x18
		private IBoardController boardController; //Field offset: 0x20
		public IBoardController <>3__boardController; //Field offset: 0x28
		private Enumerator<MergeItem> <>7__wrap1; //Field offset: 0x30

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
		public <GetBoardItemIds>d__2(int <>1__state) { }

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
	private struct <WaitUntilBoardHidden>d__1 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public IBoardController boardController; //Field offset: 0x18
		public CancellationToken cancellation; //Field offset: 0x20
		public bool requireMetaplayPlayerContext; //Field offset: 0x28
		public Action onHidden; //Field offset: 0x30
		private Awaiter <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}


	[IteratorStateMachine(typeof(<GetBoardItemIds>d__2))]
	public static IEnumerable<Int32> GetBoardItemIds(IBoardController boardController) { }

	public static void HideBoardIfVisible(IBoardController boardController, MonoBehaviour runner, Action onHidden, bool ignoreScriptedEvents = false) { }

	[AsyncStateMachine(typeof(<WaitUntilBoardHidden>d__1))]
	public static UniTask WaitUntilBoardHidden(IBoardController boardController, Action onHidden, CancellationToken cancellation, bool requireMetaplayPlayerContext = true) { }

}

