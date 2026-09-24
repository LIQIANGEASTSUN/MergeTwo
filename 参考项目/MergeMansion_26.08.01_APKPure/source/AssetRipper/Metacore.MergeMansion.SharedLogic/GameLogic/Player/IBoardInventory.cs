using System;
using System.Collections.Generic;
using Code.GameLogic.Player;
using Game.Logic;
using GameLogic.Config.Types;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Collectable;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	public interface IBoardInventory
	{
		int Size { get; set; }

		MergeBoardId BoardId { get; }

		bool IsLocked { get; set; }

		int ItemCount { get; }

		bool IsFull { get; }

		bool IsEmpty { get; }

		InventoryContentChanged InventoryChanged { get; set; }

		IEnumerable<MergeItem> MergeItems { get; }

		List<BoardInventory.InventoryEntry> Entries { get; }

		void SetInitialSize(int startingSize);

		MergeItem GetItemAtIndex(int index);

		bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime, out bool removeItemFromBoard);

		Dictionary<int, int> GetItemTypesAndAmountsOfItems();

		Dictionary<int, IEnumerable<MergeItem>> GetItemsGroupedByType();

		IEnumerable<MergeItem> GetItemsSorted(IPlayer player, BoardInventorySortMode sortMode = BoardInventorySortMode.Type);

		int GetItemIndex(MergeItem item);

		int FindItemOfCertainType(int itemId);

		IEnumerable<MergeItem> GetItems();

		IEnumerable<MergeItem> GetItemsOfCertainChain(IPlayer player, IItemDefinition itemDefinition);

		(MergeItem, MetaTime) TakeItemOut(int index);

		bool RemoveItem(string typeToRemove, int index, IPlayer player);

		void ReplaceItems(IPlayer player, Predicate<MergeItem> itemMatcher, IItemDefinition replacement, MetacoreTime replacementTime);

		void RemoveItems(Predicate<MergeItem> itemMatcher);

		void RemoveItems(Predicate<MergeItem> itemMatcher, Action<MergeItem> onRemoved);

		void CollectItems(Predicate<MergeItem> itemMatcher, ICollectionContext context, MetacoreTime timestamp);

		void CollectItemsFromChest(Predicate<IItemDefinition> itemMatcher, ICollectionContext context, MetacoreTime timestamp);

		void RemoveItem(MergeItem mergeItem, Predicate<MergeItem> itemMatcher);

		bool FindAndRemoveFirstOfType(int itemId);

		bool FindAndRemoveFirstVisibleItemOfCertainType(IEnumerable<int> itemTypes, MetacoreTime timestamp, bool areBubbleItemsAllowed = false);

		IEnumerable<IMergeItem> RemoveAndReturnItems(Predicate<IMergeItem> itemMatcher);

		void RestoreInternalState(MetacoreTime restorationTime, IPlayer player);

		int CountVisibleItemsOfTypes(IEnumerable<IItemDefinition> itemTypes, bool areBubbleItemsAllowed = false);

		int CountVisibleItemsOfTypes(IEnumerable<int> itemIds, bool areBubbleItemsAllowed = false);

		List<IInventoryEntry> RemoveEntriesStartingFrom(int startIndex);

		void SetItemStoredTimeStamp(MergeItem mergeItem, MetaTime timeStamp);

		MetaTime GetItemStoredTimeStamp(MergeItem mergeItem);

		bool CanAddItem(MergeItem item, IPlayer player);

		Option<IInventoryEntry> MergeableInventoryItemOption(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime);
	}
}
