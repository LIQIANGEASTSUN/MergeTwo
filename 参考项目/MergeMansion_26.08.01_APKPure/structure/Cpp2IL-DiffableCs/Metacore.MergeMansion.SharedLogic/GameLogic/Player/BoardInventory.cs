namespace GameLogic.Player;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {1, 2})]
[MetaSerializable]
public sealed class BoardInventory : IBoardInventory
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<InventoryEntry, MergeItem> <>9__27_0; //Field offset: 0x8
		public static Func<InventoryEntry, Int32> <>9__35_0; //Field offset: 0x10
		public static Func<Int32, Int32> <>9__35_1; //Field offset: 0x18
		public static Func<IGrouping`2<Int32, Int32>, Int32> <>9__35_2; //Field offset: 0x20
		public static Func<IGrouping`2<Int32, Int32>, Int32> <>9__35_3; //Field offset: 0x28
		public static Func<InventoryEntry, MergeItem> <>9__36_0; //Field offset: 0x30
		public static Func<MergeItem, Int32> <>9__36_1; //Field offset: 0x38
		public static Func<IGrouping`2<Int32, MergeItem>, Int32> <>9__36_2; //Field offset: 0x40
		public static Func<MergeItem, MergeItem> <>9__36_4; //Field offset: 0x48
		public static Func<IGrouping`2<Int32, MergeItem>, IEnumerable`1<MergeItem>> <>9__36_3; //Field offset: 0x50
		public static Func<InventoryEntry, MetaTime> <>9__37_0; //Field offset: 0x58
		public static Func<InventoryEntry, MergeItem> <>9__37_1; //Field offset: 0x60
		public static Func<InventoryEntry, MergeItem> <>9__37_2; //Field offset: 0x68
		public static Func<<>f__AnonymousType1`2<MergeItem, IItemDefinition>, Boolean> <>9__37_5; //Field offset: 0x70
		public static Func<<>f__AnonymousType1`2<MergeItem, IItemDefinition>, Boolean> <>9__37_6; //Field offset: 0x78
		public static Func<<>f__AnonymousType1`2<MergeItem, IItemDefinition>, String> <>9__37_9; //Field offset: 0x80
		public static Func<<>f__AnonymousType1`2<MergeItem, IItemDefinition>, Int32> <>9__37_11; //Field offset: 0x88
		public static Func<<>f__AnonymousType1`2<MergeItem, IItemDefinition>, Int32> <>9__37_12; //Field offset: 0x90
		public static Func<<>f__AnonymousType1`2<MergeItem, IItemDefinition>, MergeItem> <>9__37_13; //Field offset: 0x98
		public static Func<InventoryEntry, MergeItem> <>9__40_0; //Field offset: 0xA0
		public static Func<InventoryEntry, MergeItem> <>9__41_1; //Field offset: 0xA8
		public static Func<InventoryEntry, MergeItem> <>9__54_1; //Field offset: 0xB0
		public static Func<IItemDefinition, Int32> <>9__56_0; //Field offset: 0xB8

		private static <>c() { }

		public <>c() { }

		internal int <CountVisibleItemsOfTypes>b__56_0(IItemDefinition item) { }

		internal MergeItem <get_MergeItems>b__27_0(InventoryEntry entry) { }

		internal MergeItem <GetItems>b__40_0(InventoryEntry entry) { }

		internal MergeItem <GetItemsGroupedByType>b__36_0(InventoryEntry entry) { }

		internal int <GetItemsGroupedByType>b__36_1(MergeItem item) { }

		internal int <GetItemsGroupedByType>b__36_2(IGrouping<Int32, MergeItem> group) { }

		internal IEnumerable<MergeItem> <GetItemsGroupedByType>b__36_3(IGrouping<Int32, MergeItem> group) { }

		internal MergeItem <GetItemsGroupedByType>b__36_4(MergeItem group) { }

		internal MergeItem <GetItemsOfCertainChain>b__41_1(InventoryEntry entry) { }

		internal MetaTime <GetItemsSorted>b__37_0(InventoryEntry entry) { }

		internal MergeItem <GetItemsSorted>b__37_1(InventoryEntry entry) { }

		internal int <GetItemsSorted>b__37_11(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal int <GetItemsSorted>b__37_12(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal MergeItem <GetItemsSorted>b__37_13(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal MergeItem <GetItemsSorted>b__37_2(InventoryEntry entry) { }

		internal bool <GetItemsSorted>b__37_5(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal bool <GetItemsSorted>b__37_6(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal string <GetItemsSorted>b__37_9(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal int <GetItemTypesAndAmountsOfItems>b__35_0(InventoryEntry entry) { }

		internal int <GetItemTypesAndAmountsOfItems>b__35_1(int it) { }

		internal int <GetItemTypesAndAmountsOfItems>b__35_2(IGrouping<Int32, Int32> group) { }

		internal int <GetItemTypesAndAmountsOfItems>b__35_3(IGrouping<Int32, Int32> group) { }

		internal MergeItem <RemoveAndReturnItems>b__54_1(InventoryEntry i) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass37_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass37_0() { }

		internal int <GetItemsSorted>b__10(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal <>f__AnonymousType1<MergeItem, IItemDefinition> <GetItemsSorted>b__3(MergeItem item) { }

		internal bool <GetItemsSorted>b__4(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal bool <GetItemsSorted>b__7(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

		internal bool <GetItemsSorted>b__8(<>f__AnonymousType1<MergeItem, IItemDefinition> x) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass38_0
	{
		public MergeItem item; //Field offset: 0x10

		public <>c__DisplayClass38_0() { }

		internal bool <GetItemIndex>b__0(InventoryEntry entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass39_0
	{
		public int it; //Field offset: 0x10

		public <>c__DisplayClass39_0() { }

		internal bool <FindItemOfCertainType>b__0(InventoryEntry entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass41_0
	{
		public IPlayer player; //Field offset: 0x10
		public MergeChainId mergeChainId; //Field offset: 0x18

		public <>c__DisplayClass41_0() { }

		internal bool <GetItemsOfCertainChain>b__0(InventoryEntry entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass44_0
	{
		public Predicate<MergeItem> itemMatcher; //Field offset: 0x10
		public Func<InventoryEntry, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass44_0() { }

		internal bool <ReplaceItems>b__0(InventoryEntry entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass45_0
	{
		public Predicate<MergeItem> itemMatcher; //Field offset: 0x10

		public <>c__DisplayClass45_0() { }

		internal bool <RemoveItems>b__0(InventoryEntry entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass48_0
	{
		public ICollectionContext context; //Field offset: 0x10
		public MetacoreTime timestamp; //Field offset: 0x18
		public Predicate<IItemDefinition> itemMatcher; //Field offset: 0x20

		public <>c__DisplayClass48_0() { }

		internal bool <CollectItemsFromChest>g__CanBeCollected|0(IItemDefinition def) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass50_0
	{
		public int itemId; //Field offset: 0x10

		public <>c__DisplayClass50_0() { }

		internal bool <FindAndRemoveFirstOfType>b__0(InventoryEntry entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass51_0
	{
		public IEnumerable<Int32> itemTypes; //Field offset: 0x10
		public Func<InventoryEntry, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass51_0() { }

		internal bool <FindAndRemoveFirstVisibleItemOfCertainType>b__0(InventoryEntry pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass54_0
	{
		public Predicate<IMergeItem> itemMatcher; //Field offset: 0x10

		public <>c__DisplayClass54_0() { }

		internal bool <RemoveAndReturnItems>b__0(InventoryEntry entry) { }

	}

	[MetaSerializable]
	internal class InventoryEntry : IInventoryEntry
	{
		[CompilerGenerated]
		private MergeItem <Item>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private MetaTime <Timestamp>k__BackingField; //Field offset: 0x18

		[MetaMember(1, MetaMemberFlags::None (0))]
		public override MergeItem Item
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		[MetaMember(2, MetaMemberFlags::None (0))]
		public override MetaTime Timestamp
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		public InventoryEntry() { }

		[CompilerGenerated]
		public override MergeItem get_Item() { }

		[CompilerGenerated]
		public override MetaTime get_Timestamp() { }

		[CompilerGenerated]
		public override void set_Item(MergeItem value) { }

		[CompilerGenerated]
		public override void set_Timestamp(MetaTime value) { }

	}

	[MetaSerializable]
	internal class ProducerInventorySlotState : IWritableProducerInventorySlotState
	{
		[CompilerGenerated]
		private bool <Unlocked>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private bool <Seen>k__BackingField; //Field offset: 0x11

		[MetaMember(2, MetaMemberFlags::None (0))]
		public override bool Seen
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		[MetaMember(1, MetaMemberFlags::None (0))]
		public override bool Unlocked
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		public ProducerInventorySlotState() { }

		public ProducerInventorySlotState(bool unlocked) { }

		public ProducerInventorySlotState(bool unlocked, bool seen) { }

		[CompilerGenerated]
		public override bool get_Seen() { }

		[CompilerGenerated]
		public override bool get_Unlocked() { }

		[CompilerGenerated]
		public override void set_Seen(bool value) { }

		[CompilerGenerated]
		public override void set_Unlocked(bool value) { }

	}

	[CompilerGenerated]
	private int <Size>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<InventoryEntry> <Entries>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <IsLocked>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private InventoryContentChanged <InventoryChanged>k__BackingField; //Field offset: 0x30

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override MergeBoardId BoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public override List<InventoryEntry> Entries
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override InventoryContentChanged InventoryChanged
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override bool IsEmpty
	{
		 get { } //Length: 24
	}

	public override bool IsFull
	{
		 get { } //Length: 32
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public override bool IsLocked
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ItemCount
	{
		 get { } //Length: 72
	}

	[IgnoreDataMember]
	public override IEnumerable<MergeItem> MergeItems
	{
		 get { } //Length: 288
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public override int Size
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BoardInventory(MergeBoardId boardId, int initialSize) { }

	public BoardInventory() { }

	public BoardInventory(int initialSize) { }

	public override bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime, out bool removeItemFromBoard) { }

	public bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetaTime currentTime, out bool removeItemFromBoard) { }

	public override bool CanAddItem(MergeItem item, IPlayer player) { }

	public override void CollectItems(Predicate<MergeItem> itemMatcher, ICollectionContext context, MetacoreTime timestamp) { }

	public override void CollectItemsFromChest(Predicate<IItemDefinition> itemMatcher, ICollectionContext context, MetacoreTime timestamp) { }

	public override int CountVisibleItemsOfTypes(IEnumerable<Int32> itemIds, bool areBubbleItemsAllowed = false) { }

	public override int CountVisibleItemsOfTypes(IEnumerable<IItemDefinition> itemTypes, bool areBubbleItemsAllowed = false) { }

	public override bool FindAndRemoveFirstOfType(int itemId) { }

	public override bool FindAndRemoveFirstVisibleItemOfCertainType(IEnumerable<Int32> itemTypes, MetacoreTime timestamp, bool areBubbleItemsAllowed = false) { }

	public override int FindItemOfCertainType(int it) { }

	[CompilerGenerated]
	public override MergeBoardId get_BoardId() { }

	[CompilerGenerated]
	public override List<InventoryEntry> get_Entries() { }

	[CompilerGenerated]
	public override InventoryContentChanged get_InventoryChanged() { }

	public override bool get_IsEmpty() { }

	public override bool get_IsFull() { }

	[CompilerGenerated]
	public override bool get_IsLocked() { }

	public override int get_ItemCount() { }

	public override IEnumerable<MergeItem> get_MergeItems() { }

	[CompilerGenerated]
	public override int get_Size() { }

	public override MergeItem GetItemAtIndex(int index) { }

	public override int GetItemIndex(MergeItem item) { }

	public override IEnumerable<MergeItem> GetItems() { }

	public override Dictionary<Int32, IEnumerable`1<MergeItem>> GetItemsGroupedByType() { }

	public override IEnumerable<MergeItem> GetItemsOfCertainChain(IPlayer player, IItemDefinition itemDefinition) { }

	public override IEnumerable<MergeItem> GetItemsSorted(IPlayer player, BoardInventorySortMode sortMode = 0) { }

	public override MetaTime GetItemStoredTimeStamp(MergeItem mergeItem) { }

	public override Dictionary<Int32, Int32> GetItemTypesAndAmountsOfItems() { }

	public override Option<IInventoryEntry> MergeableInventoryItemOption(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime) { }

	public override IEnumerable<IMergeItem> RemoveAndReturnItems(Predicate<IMergeItem> itemMatcher) { }

	public override List<IInventoryEntry> RemoveEntriesStartingFrom(int startIndex) { }

	public override bool RemoveItem(string typeToRemove, int index, IPlayer player) { }

	public override void RemoveItem(MergeItem mergeItem, Predicate<MergeItem> itemMatcher) { }

	public override void RemoveItems(Predicate<MergeItem> itemMatcher) { }

	public override void RemoveItems(Predicate<MergeItem> itemMatcher, Action<MergeItem> onRemoved) { }

	public override void ReplaceItems(IPlayer player, Predicate<MergeItem> itemMatcher, IItemDefinition replacement, MetacoreTime replacementTime) { }

	public override void RestoreInternalState(MetacoreTime restorationTime, IPlayer player) { }

	[CompilerGenerated]
	private void set_BoardId(MergeBoardId value) { }

	[CompilerGenerated]
	public void set_Entries(List<InventoryEntry> value) { }

	[CompilerGenerated]
	public override void set_InventoryChanged(InventoryContentChanged value) { }

	[CompilerGenerated]
	public override void set_IsLocked(bool value) { }

	[CompilerGenerated]
	public override void set_Size(int value) { }

	public override void SetInitialSize(int startingSize) { }

	public override void SetItemStoredTimeStamp(MergeItem mergeItem, MetaTime timeStamp) { }

	public override ValueTuple<MergeItem, MetaTime> TakeItemOut(int index) { }

}

