//Type is in global namespace

public class ItemMerger
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public BaseItem firstItem; //Field offset: 0x10

		public <>c__DisplayClass5_0() { }

		internal bool <Merge>b__0(int item) { }

		internal bool <Merge>b__1(int item) { }

	}

	[CompilerGenerated]
	private struct <Merge>d__5 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public BaseItem firstItem; //Field offset: 0x28
		public BoardSlot secondItemBoardSlot; //Field offset: 0x30
		public BoardSlot firstItemBoardSlot; //Field offset: 0x38
		public BaseItem secondItem; //Field offset: 0x40
		public ItemMerger <>4__this; //Field offset: 0x48
		private <>c__DisplayClass5_0 <>8__1; //Field offset: 0x50
		private ItemData <firstItemData>5__2; //Field offset: 0x58
		private ItemData <secondItemData>5__3; //Field offset: 0x60
		private int <firstItemId>5__4; //Field offset: 0x68
		private int <secondItemId>5__5; //Field offset: 0x6C
		private int <itemLevelBeforeMerge>5__6; //Field offset: 0x70
		private bool <isMergingWithTutorialItem>5__7; //Field offset: 0x74
		private bool <isChainBroke>5__8; //Field offset: 0x75
		private Awaiter <>u__1; //Field offset: 0x78
		private Awaiter<BaseItem> <>u__2; //Field offset: 0x88

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private static readonly List<Int32> itemsCannotProduceExperience; //Field offset: 0x0
	[Inject]
	private readonly SignalBus signalBus; //Field offset: 0x10
	[Inject]
	private IItemPooler itemPooler; //Field offset: 0x18
	private readonly List<Int32> mergeFeverBlackList; //Field offset: 0x20
	private readonly List<Int32> bubbleProduceBlackList; //Field offset: 0x28

	private static ItemMerger() { }

	public ItemMerger() { }

	[AsyncStateMachine(typeof(<Merge>d__5))]
	public void Merge(BaseItem firstItem, BaseItem secondItem, BoardSlot firstItemBoardSlot, BoardSlot secondItemBoardSlot) { }

}

