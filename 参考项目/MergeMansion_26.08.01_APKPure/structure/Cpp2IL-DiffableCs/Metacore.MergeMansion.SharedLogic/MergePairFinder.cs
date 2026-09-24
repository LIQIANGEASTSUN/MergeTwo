//Type is in global namespace

[Extension]
public static class MergePairFinder
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass6_0
	{
		public int itemId; //Field offset: 0x10
		public IPlayer player; //Field offset: 0x18
		public MetacoreTime currentTime; //Field offset: 0x20
		public IBoard mergeBoard; //Field offset: 0x28
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public Func<ValueTuple`2<Coordinate, MergeItem>, Boolean> <>9__0; //Field offset: 0x30

		public <>c__DisplayClass6_0() { }

		internal bool <FindMatchingItemsImpl>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	private struct ItemEntry
	{
		public int ItemId; //Field offset: 0x0
		public int Count; //Field offset: 0x4

	}


	private static bool ContainsItem(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId) { }

	private static int FindExistingItemIndex(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId) { }

	public static ValueTuple<Coordinate, Coordinate> FindMatchingItems(IPlayer player, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime) { }

	public static ValueTuple<Coordinate, Coordinate> FindMatchingItems(IPlayer player, IEnumerable<ValueTuple`2<Coordinate, MergeItem>> items, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime) { }

	public static ValueTuple<Coordinate, Coordinate> FindMatchingItemsImpl(IPlayer player, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime) { }

	private static ValueTuple<Coordinate, Coordinate> FindMatchingItemsImpl(IPlayer player, IEnumerable<ValueTuple`2<Coordinate, MergeItem>> items, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime) { }

	public static ValueTuple<Coordinate, Coordinate> FindSuggestion(IPlayer player, IBoard mergeBoard, SearchOptions options, ICollection<Int32> excludedItems, MetacoreTime currentTime, Random rand) { }

	private static int GetExistingItemCount(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId) { }

	private static int IncrementItemCount(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId) { }

	[Extension]
	public static bool IsItReadyForOpenChest(MergeItem mergeItem, IMergeMansionGameConfig config, MetacoreTime currentTime) { }

	private static ValueTuple<Int32, Int32> PopulateItemEntries(IPlayer player, List<MergeItem> boardItems, ICollection<Int32> excludedItems, MetacoreTime currentTime, ItemEntry[] visibleItemEntriesBuffer, ItemEntry[] partiallyVisibleItemEntriesBuffer) { }

	private static int PopulateItemsInBothStates(ItemEntry[] visibleItemEntriesBuffer, int visibleItemEntriesCount, ItemEntry[] partiallyVisibleItemEntriesBuffer, int partiallyVisibleItemEntriesCount, Int32[] itemsInBothStatesBuffer) { }

	public static void RemoveSingleElements(Dictionary<Int32, Int32> itemTypeCounts, IReadOnlyDictionary<Int32, Int32> itemTypePartialCounts) { }

	private static int RemoveVisibleItemEntriesWithoutPair(ItemEntry[] visibleItemEntriesBuffer, int visibleItemEntriesCount, ItemEntry[] partiallyVisibleItemEntriesBuffer, int partiallyVisibleItemEntriesCount) { }

	public static void SortItemByVisibility(IEnumerable<MergeItem> items, Dictionary<Int32, Int32> visibleItems, Dictionary<Int32, Int32> partialVisibleItems) { }

}

