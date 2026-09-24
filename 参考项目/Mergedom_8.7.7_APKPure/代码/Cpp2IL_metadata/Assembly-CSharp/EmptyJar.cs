//Type is in global namespace

public class EmptyJar : BaseItem
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ItemProducer, Boolean> <>9__1_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <CanMergeWith>b__1_0(ItemProducer a) { }

	}

	[CompilerGenerated]
	private struct <OnMerged>d__0 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<BaseItem> <>t__builder; //Field offset: 0x8
		public EmptyJar <>4__this; //Field offset: 0x20
		public BaseItem otherItem; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}


	public EmptyJar() { }

	public virtual bool CanMergeWith(BaseItem otherItem) { }

	[AsyncStateMachine(typeof(<OnMerged>d__0))]
	public virtual UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

}

