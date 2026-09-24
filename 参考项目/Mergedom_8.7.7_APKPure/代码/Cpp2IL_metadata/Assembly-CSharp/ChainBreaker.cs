//Type is in global namespace

public class ChainBreaker : Booster
{
	[CompilerGenerated]
	private struct <OnMerged>d__4 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<BaseItem> <>t__builder; //Field offset: 0x8
		public BaseItem otherItem; //Field offset: 0x20
		public ChainBreaker <>4__this; //Field offset: 0x28
		private Awaiter<BaseItem> <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[Inject]
	private IItemPooler _itemPooler; //Field offset: 0xE0
	[Inject]
	private SlidingTextController _slidingTextController; //Field offset: 0xE8
	private List<Int32> _blacklistedItemIds; //Field offset: 0xF0

	public ChainBreaker() { }

	[CompilerGenerated]
	[DebuggerHidden]
	private UniTask<BaseItem> <>n__0(BaseItem otherItem) { }

	public virtual bool CanMergeWith(BaseItem otherItem) { }

	[AsyncStateMachine(typeof(<OnMerged>d__4))]
	public virtual UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

	public virtual void OnTapped() { }

}

