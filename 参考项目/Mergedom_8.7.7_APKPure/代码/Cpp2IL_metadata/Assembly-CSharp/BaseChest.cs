//Type is in global namespace

public class BaseChest : BaseItem
{
	[CompilerGenerated]
	private struct <OnMerged>d__13 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<BaseItem> <>t__builder; //Field offset: 0x8
		public BaseChest <>4__this; //Field offset: 0x20
		private Awaiter<BaseItem> <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[Inject]
	protected SignalBus SignalBus; //Field offset: 0xD8
	[Inject]
	protected IBoardController BoardController; //Field offset: 0xE0
	public GameObject OpenHintIndicator; //Field offset: 0xE8
	protected DefaultPopEffect HintParticle; //Field offset: 0xF0
	private Vector3 _particleLocalScale; //Field offset: 0xF8

	public BaseChest() { }

	[CompilerGenerated]
	[DebuggerHidden]
	private UniTask<BaseItem> <>n__0(BaseItem otherItem) { }

	public virtual bool CanHintedForMerge() { }

	public bool IsRechargeable() { }

	public bool IsRecharging() { }

	public virtual void OnEndItemDrag() { }

	public virtual void OnItemPlacedToBoard(bool willPlayParticle = false) { }

	[AsyncStateMachine(typeof(<OnMerged>d__13))]
	public virtual UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

	public virtual void OnRechargeCompleted() { }

	public virtual void OnRechargeStarted() { }

	public virtual void OnStartItemDrag() { }

	public void SetOpenHintIndicatorVisibility(bool anotherChestOpening) { }

}

