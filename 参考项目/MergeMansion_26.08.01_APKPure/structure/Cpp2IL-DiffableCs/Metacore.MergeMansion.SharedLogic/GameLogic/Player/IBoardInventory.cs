namespace GameLogic.Player;

[MetaSerializable]
public interface IBoardInventory
{

	public MergeBoardId BoardId
	{
		 get { } //Length: 0
	}

	public List<InventoryEntry> Entries
	{
		 get { } //Length: 0
	}

	public InventoryContentChanged InventoryChanged
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool IsEmpty
	{
		 get { } //Length: 0
	}

	public bool IsFull
	{
		 get { } //Length: 0
	}

	public bool IsLocked
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int ItemCount
	{
		 get { } //Length: 0
	}

	public IEnumerable<MergeItem> MergeItems
	{
		 get { } //Length: 0
	}

	public int Size
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime, out bool removeItemFromBoard) { }

	public bool CanAddItem(MergeItem item, IPlayer player) { }

	public void CollectItems(Predicate<MergeItem> itemMatcher, ICollectionContext context, MetacoreTime timestamp) { }

	public void CollectItemsFromChest(Predicate<IItemDefinition> itemMatcher, ICollectionContext context, MetacoreTime timestamp) { }

	public int CountVisibleItemsOfTypes(IEnumerable<Int32> itemIds, bool areBubbleItemsAllowed = false) { }

	public int CountVisibleItemsOfTypes(IEnumerable<IItemDefinition> itemTypes, bool areBubbleItemsAllowed = false) { }

	public bool FindAndRemoveFirstOfType(int itemId) { }

	public bool FindAndRemoveFirstVisibleItemOfCertainType(IEnumerable<Int32> itemTypes, MetacoreTime timestamp, bool areBubbleItemsAllowed = false) { }

	public int FindItemOfCertainType(int itemId) { }

	public MergeBoardId get_BoardId() { }

	public List<InventoryEntry> get_Entries() { }

	public InventoryContentChanged get_InventoryChanged() { }

	public bool get_IsEmpty() { }

	public bool get_IsFull() { }

	public bool get_IsLocked() { }

	public int get_ItemCount() { }

	public IEnumerable<MergeItem> get_MergeItems() { }

	public int get_Size() { }

	public MergeItem GetItemAtIndex(int index) { }

	public int GetItemIndex(MergeItem item) { }

	public IEnumerable<MergeItem> GetItems() { }

	public Dictionary<Int32, IEnumerable`1<MergeItem>> GetItemsGroupedByType() { }

	public IEnumerable<MergeItem> GetItemsOfCertainChain(IPlayer player, IItemDefinition itemDefinition) { }

	public IEnumerable<MergeItem> GetItemsSorted(IPlayer player, BoardInventorySortMode sortMode = 0) { }

	public MetaTime GetItemStoredTimeStamp(MergeItem mergeItem) { }

	public Dictionary<Int32, Int32> GetItemTypesAndAmountsOfItems() { }

	public Option<IInventoryEntry> MergeableInventoryItemOption(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime) { }

	public IEnumerable<IMergeItem> RemoveAndReturnItems(Predicate<IMergeItem> itemMatcher) { }

	public List<IInventoryEntry> RemoveEntriesStartingFrom(int startIndex) { }

	public void RemoveItem(MergeItem mergeItem, Predicate<MergeItem> itemMatcher) { }

	public bool RemoveItem(string typeToRemove, int index, IPlayer player) { }

	public void RemoveItems(Predicate<MergeItem> itemMatcher) { }

	public void RemoveItems(Predicate<MergeItem> itemMatcher, Action<MergeItem> onRemoved) { }

	public void ReplaceItems(IPlayer player, Predicate<MergeItem> itemMatcher, IItemDefinition replacement, MetacoreTime replacementTime) { }

	public void RestoreInternalState(MetacoreTime restorationTime, IPlayer player) { }

	public void set_InventoryChanged(InventoryContentChanged value) { }

	public void set_IsLocked(bool value) { }

	public void set_Size(int value) { }

	public void SetInitialSize(int startingSize) { }

	public void SetItemStoredTimeStamp(MergeItem mergeItem, MetaTime timeStamp) { }

	public ValueTuple<MergeItem, MetaTime> TakeItemOut(int index) { }

}

