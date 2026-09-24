//Type is in global namespace

public class TimeSkipper : Booster
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ItemProducer, ActiveItemProducerData> <>9__6_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ActiveItemProducerData <OnMerged>b__6_0(ItemProducer producer) { }

	}

	[CompilerGenerated]
	private struct <AnimateTimersOfItem>d__7 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public BaseItem otherItem; //Field offset: 0x18
		public TimeSkipper <>4__this; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <OnMerged>d__6 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<BaseItem> <>t__builder; //Field offset: 0x8
		public BaseItem otherItem; //Field offset: 0x20
		public TimeSkipper <>4__this; //Field offset: 0x28
		private BaseItem <tempItem>5__2; //Field offset: 0x30
		private Awaiter<BaseItem> <>u__1; //Field offset: 0x38
		private Awaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[Inject]
	private IItemPooler _itemPooler; //Field offset: 0xE0
	[Inject]
	private SlidingTextController _slidingTextController; //Field offset: 0xE8
	[Inject]
	private GameScreen _gameScreen; //Field offset: 0xF0
	[Inject]
	private KinoaGameEventsService _kinoaGameEventsService; //Field offset: 0xF8
	private List<Int32> _blacklistedItemIds; //Field offset: 0x100

	public TimeSkipper() { }

	[CompilerGenerated]
	[DebuggerHidden]
	private UniTask<BaseItem> <>n__0(BaseItem otherItem) { }

	[AsyncStateMachine(typeof(<AnimateTimersOfItem>d__7))]
	private UniTask AnimateTimersOfItem(BaseItem otherItem) { }

	public virtual bool CanMergeWith(BaseItem otherItem) { }

	[AsyncStateMachine(typeof(<OnMerged>d__6))]
	public virtual UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

	public virtual void OnTapped() { }

}

