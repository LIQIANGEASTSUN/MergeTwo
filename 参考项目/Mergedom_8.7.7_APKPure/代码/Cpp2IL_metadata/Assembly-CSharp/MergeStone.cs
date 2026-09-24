//Type is in global namespace

public class MergeStone : Booster
{
	[CompilerGenerated]
	private struct <OnMerged>d__9 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<BaseItem> <>t__builder; //Field offset: 0x8
		public BaseItem otherItem; //Field offset: 0x20
		public MergeStone <>4__this; //Field offset: 0x28
		private BaseItem <tempItem>5__2; //Field offset: 0x30
		private Awaiter<BaseItem> <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[Inject]
	private IItemPooler _itemPooler; //Field offset: 0xE0
	[Inject]
	private SlidingTextController _slidingTextController; //Field offset: 0xE8
	private List<Int32> _blacklistedItemIds; //Field offset: 0xF0
	private DefaultPopEffect _hintParticle; //Field offset: 0xF8

	public MergeStone() { }

	[CompilerGenerated]
	[DebuggerHidden]
	private UniTask<BaseItem> <>n__0(BaseItem otherItem) { }

	public virtual bool CanMergeWith(BaseItem otherItem) { }

	public virtual void OnEndItemDrag() { }

	public virtual void OnItemPlacedToBoard(bool willPlayParticle = false) { }

	[AsyncStateMachine(typeof(<OnMerged>d__9))]
	public virtual UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

	public virtual void OnStartItemDrag() { }

	public virtual void OnTapped() { }

}

