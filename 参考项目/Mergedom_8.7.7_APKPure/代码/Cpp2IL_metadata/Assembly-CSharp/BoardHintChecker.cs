//Type is in global namespace

public class BoardHintChecker
{
	[CompilerGenerated]
	private sealed class <IterateOverHintCombinations>d__19 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public BoardHintChecker <>4__this; //Field offset: 0x20
		private List<KeyValuePair`2<Pair`2<Int32, Int32>, BoardHintItemGroup>> <lockedItemsForHint>5__2; //Field offset: 0x28
		private List<KeyValuePair`2<Pair`2<Int32, Int32>, BoardHintItemGroup>> <unlockedItemsForHint>5__3; //Field offset: 0x30
		private Enumerator<KeyValuePair<Pair`2<Int32, Int32>, BoardHintItemGroup>> <>7__wrap3; //Field offset: 0x38
		private KeyValuePair<Pair`2<Int32, Int32>, BoardHintItemGroup> <lockedItemGroup>5__5; //Field offset: 0x58
		private Enumerator<BaseItem> <>7__wrap5; //Field offset: 0x68

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <IterateOverHintCombinations>d__19(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private const float HintCalculateDelay = 3; //Field offset: 0x0
	private const float HintIterateDelay = 1; //Field offset: 0x0
	[Inject]
	private SignalBus _signalBus; //Field offset: 0x10
	[Inject]
	private IBoardController _boardController; //Field offset: 0x18
	[Inject]
	private ItemTaskManager _itemTaskManager; //Field offset: 0x20
	[Inject]
	private AsyncProcessor _asyncProcessor; //Field offset: 0x28
	[Inject]
	private InventoryHintChecker _inventoryHintChecker; //Field offset: 0x30
	[Inject]
	private TutorialController _tutorialController; //Field offset: 0x38
	[CompilerGenerated]
	private MergeHintState <MergeHintState>k__BackingField; //Field offset: 0x40
	private readonly Dictionary<Pair`2<Int32, Int32>, BoardHintItemGroup> _items; //Field offset: 0x48
	private Pair<BaseItem, BaseItem> _hintedItems; //Field offset: 0x50
	private IEnumerator _hintIterationCoroutine; //Field offset: 0x60

	public MergeHintState MergeHintState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BoardHintChecker() { }

	[CompilerGenerated]
	private bool <IterateOverHintCombinations>b__19_0(KeyValuePair<Pair`2<Int32, Int32>, BoardHintItemGroup> item) { }

	[CompilerGenerated]
	private bool <IterateOverHintCombinations>b__19_1(KeyValuePair<Pair`2<Int32, Int32>, BoardHintItemGroup> item) { }

	public void CheckForMergeHint() { }

	private void FindHintCombinations() { }

	[CompilerGenerated]
	public MergeHintState get_MergeHintState() { }

	private void HintItems(BaseItem item1, BaseItem item2) { }

	[IteratorStateMachine(typeof(<IterateOverHintCombinations>d__19))]
	private IEnumerator IterateOverHintCombinations() { }

	public void Reset() { }

	private void ResetHintedItems() { }

	[CompilerGenerated]
	public void set_MergeHintState(MergeHintState value) { }

}

