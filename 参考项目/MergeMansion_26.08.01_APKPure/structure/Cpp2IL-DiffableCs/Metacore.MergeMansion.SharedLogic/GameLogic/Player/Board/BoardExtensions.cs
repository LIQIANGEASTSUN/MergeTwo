namespace GameLogic.Player.Board;

[Extension]
public static class BoardExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Boolean> <>9__1_0; //Field offset: 0x8
		public static Func<MergeItem, Boolean> <>9__2_0; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__8_1; //Field offset: 0x18
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Boolean> <>9__9_0; //Field offset: 0x20
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__9_1; //Field offset: 0x28
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__11_1; //Field offset: 0x30
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__12_1; //Field offset: 0x38
		public static Func<MergeItem, Boolean> <>9__14_0; //Field offset: 0x40
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__15_1; //Field offset: 0x48
		public static Func<IItemDefinition, Int32> <>9__26_0; //Field offset: 0x50
		public static Func<MergeItem, Boolean> <>9__31_0; //Field offset: 0x58

		private static <>c() { }

		public <>c() { }

		internal bool <CountAllItemsInBubbles>b__14_0(MergeItem item) { }

		internal bool <CountAllVisibleItems>b__31_0(MergeItem item) { }

		internal int <CountVisibleItemsOfTypes>b__26_0(IItemDefinition i) { }

		internal Coordinate <FindAllActivableAndVisibleItems>b__8_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal Coordinate <FindAllCoordinatesOfCertainItemType>b__12_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal Coordinate <FindAllItemsOfCertainTypes>b__15_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal bool <FindFirstEmptySlot>b__9_0(ValueTuple<Coordinate, MergeItem> cell) { }

		internal Coordinate <FindFirstEmptySlot>b__9_1(ValueTuple<Coordinate, MergeItem> cell) { }

		internal Coordinate <FindFirstItemOfCertainType>b__11_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal bool <Items>b__1_0(ValueTuple<Coordinate, MergeItem> pair) { }

		internal bool <VisibleItems>b__2_0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass0_0
	{
		public IBoard mergeBoard; //Field offset: 0x10

		public <>c__DisplayClass0_0() { }

		internal ValueTuple<Coordinate, MergeItem> <Cells>b__0(Coordinate coord) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass11_0
	{
		public int itemId; //Field offset: 0x10

		public <>c__DisplayClass11_0() { }

		internal bool <FindFirstItemOfCertainType>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass12_0
	{
		public int it; //Field offset: 0x10

		public <>c__DisplayClass12_0() { }

		internal bool <FindAllCoordinatesOfCertainItemType>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public Predicate<MergeItem> predicate; //Field offset: 0x10

		public <>c__DisplayClass13_0() { }

		internal bool <FindItems>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass15_0
	{
		public ICollection<Int32> items; //Field offset: 0x10

		public <>c__DisplayClass15_0() { }

		internal bool <FindAllItemsOfCertainTypes>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass16_0
	{
		public Coordinate startCoordinate; //Field offset: 0x10

		public <>c__DisplayClass16_0() { }

		internal bool <ScanLinesFrom>b__0(Coordinate coord) { }

		internal bool <ScanLinesFrom>b__1(Coordinate coord) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass19_0
	{
		public IBoard mergeBoard; //Field offset: 0x10
		public int itemId; //Field offset: 0x18
		public ItemVisibility itemVisibility; //Field offset: 0x1C

		public <>c__DisplayClass19_0() { }

		internal bool <FindFirstItemOfCertainType>b__0(Coordinate coord) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass20_0
	{
		public IBoard mergeBoard; //Field offset: 0x10
		public int itemId; //Field offset: 0x18
		public ItemVisibility itemVisibility; //Field offset: 0x1C
		public bool areBubbleItemsAllowed; //Field offset: 0x20

		public <>c__DisplayClass20_0() { }

		internal bool <FindFirstItemOfCertainType>b__0(Coordinate coord) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass23_0
	{
		public int itemId; //Field offset: 0x10
		public bool areBubbleItemsAllowed; //Field offset: 0x14

		public <>c__DisplayClass23_0() { }

		internal bool <HasAtLeastOnePartiallyVisibleItem>b__0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass3_0
	{
		public IBoard mergeBoard; //Field offset: 0x10

		public <>c__DisplayClass3_0() { }

		internal bool <EmptyCells>b__0(Coordinate coord) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass30_0
	{
		public int itemId; //Field offset: 0x10
		public ICollection<ItemVisibility> visibilities; //Field offset: 0x18

		public <>c__DisplayClass30_0() { }

		internal bool <CountItemsOfType>b__0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass32_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10
		public bool shouldBeVisible; //Field offset: 0x18

		public <>c__DisplayClass32_0() { }

		internal bool <SinkItems>b__0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass5_0() { }

		internal bool <FindAllBoosterItems>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass6_0
	{
		public IPlayer player; //Field offset: 0x10
		public string id; //Field offset: 0x18

		public <>c__DisplayClass6_0() { }

		internal bool <FindSpecificBoosterItems>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass8_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass8_0() { }

		internal bool <FindAllActivableAndVisibleItems>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}


	[Extension]
	public static IEnumerable<ValueTuple`2<Coordinate, MergeItem>> Cells(IBoard mergeBoard) { }

	[Extension]
	public static int CountAllItemsInBubbles(IBoard mergeBoard) { }

	[Extension]
	public static int CountAllVisibleItems(IBoard mergeBoard) { }

	[Extension]
	public static int CountItemChargesOfType(IBoard mergeBoard, int itemId, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static int CountItemsOfType(IBoard mergeBoard, int itemId, ICollection<ItemVisibility> visibilities) { }

	[Extension]
	public static int CountVisibleItemsOfType(IBoard mergeBoard, IPlayer player, int itemId, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static int CountVisibleItemsOfTypes(IBoard mergeBoard, IPlayer player, IEnumerable<Int32> itemTypes, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static int CountVisibleItemsOfTypes(IBoard mergeBoard, IPlayer player, IEnumerable<IItemDefinition> itemTypes, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static int EmptyCellCount(MergeBoard mergeBoard) { }

	[Extension]
	public static IEnumerable<Coordinate> EmptyCells(IBoard mergeBoard) { }

	[Extension]
	public static IEnumerable<Coordinate> FindAllActivableAndVisibleItems(IBoard mergeBoard, IPlayer player) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<Coordinate, MergeItem>> FindAllBoosterItems(IBoard mergeBoard, IPlayer player) { }

	[Extension]
	public static IEnumerable<Coordinate> FindAllCoordinatesOfCertainItemType(IBoard mergeBoard, int it) { }

	[Extension]
	public static IEnumerable<Coordinate> FindAllItemsOfCertainTypes(IBoard mergeBoard, ICollection<Int32> items) { }

	[Extension]
	public static Coordinate FindFirstEmptySlot(IBoard mergeBoard) { }

	[Extension]
	public static Coordinate FindFirstItemOfCertainType(IBoard mergeBoard, int itemId, ItemVisibility itemVisibility, Coordinate startCoordinate, bool areBubbleItemsAllowed) { }

	[Extension]
	public static Coordinate FindFirstItemOfCertainType(IBoard mergeBoard, int itemId, ItemVisibility itemVisibility, bool areBubbleItemsAllowed) { }

	[Extension]
	public static Coordinate FindFirstItemOfCertainType(IBoard mergeBoard, int itemId, ItemVisibility itemVisibility, Coordinate startCoordinate) { }

	[Extension]
	public static Coordinate FindFirstItemOfCertainType(IBoard mergeBoard, int itemId) { }

	[Extension]
	public static Coordinate FindFirstItemOfCertainType(IBoard mergeBoard, int itemId, ItemVisibility itemVisibility) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<Coordinate, MergeItem>> FindItems(IBoard mergeBoard, Predicate<MergeItem> predicate) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<Coordinate, MergeItem>> FindSpecificBoosterItems(IBoard mergeBoard, string id, IPlayer player) { }

	private static int GetEffectiveItemCount(IPlayer player, MergeItem item) { }

	[Extension]
	public static Option<IMergeItem> GetFirstMergeItemOnBoard(IBoard board) { }

	[Extension]
	public static Option<Coordinate> GetMergeItemInstanceCoordinate(IBoard board, IMergeItem item) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<Coordinate, MergeItem>> GetRemovedItems(IBoard mergeBoard, IEnumerable<ValueTuple`2<Coordinate, MergeItem>> previousBoardState) { }

	[Extension]
	public static bool HasAtLeastOnePartiallyVisibleItem(IBoard mergeBoard, int itemId, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static bool HasAtLeastOneVisibleItem(IBoard mergeBoard, int itemId, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static bool HasAtLeastOneVisibleItem(IBoard mergeBoard, Int32[] itemIds, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static bool IsFull(IBoard board) { }

	[Extension]
	public static bool IsOnMapBoard(BoardInfo boardInfo) { }

	[Extension]
	public static bool IsOnMapBoard(Option<BoardInfo> boardInfoOption) { }

	[Extension]
	public static bool IsOnMapBoard(MergeBoardId boardId, IPlayer player) { }

	[Extension]
	public static bool IsOpeningChest(IBoard mergeBoard, IMergeMansionGameConfig config, MetacoreTime currentTime) { }

	private static bool IsVisibleItem(MergeItem item, bool areBubbleItemsAllowed) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<Coordinate, MergeItem>> Items(IBoard mergeBoard) { }

	[Extension]
	public static IEnumerable<Coordinate> ScanLinesFrom(IBoard mergeBoard, Coordinate startCoordinate) { }

	[Extension]
	public static IEnumerable<MergeItem> SinkItems(IBoard mergeBoard, IMergeMansionGameConfig config, bool shouldBeVisible = true) { }

	[Extension]
	public static bool TryFindFirstEmptySlot(IBoard mergeBoard, out Coordinate outCoord) { }

	[Extension]
	public static IEnumerable<MergeItem> VisibleItems(IBoard mergeBoard) { }

}

