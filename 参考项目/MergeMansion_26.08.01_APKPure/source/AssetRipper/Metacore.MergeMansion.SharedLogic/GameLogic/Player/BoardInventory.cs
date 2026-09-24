using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
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
	[MetaBlockedMembers(new int[] { 1, 2 })]
	public sealed class BoardInventory : IBoardInventory
	{
		[MetaSerializable]
		public class InventoryEntry : IInventoryEntry
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public MergeItem Item { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public MetaTime Timestamp { get; set; }
		}

		[MetaSerializable]
		public class ProducerInventorySlotState : IWritableProducerInventorySlotState
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public bool Unlocked { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public bool Seen { get; set; }

			public ProducerInventorySlotState()
			{
			}

			public ProducerInventorySlotState(bool unlocked)
			{
			}

			public ProducerInventorySlotState(bool unlocked, bool seen)
			{
			}
		}

		[MetaMember(3, MetaMemberFlags.None)]
		public int Size { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<InventoryEntry> Entries { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool IsLocked { get; set; }

		public int ItemCount => 0;

		public bool IsFull => false;

		public bool IsEmpty => false;

		public InventoryContentChanged InventoryChanged { get; set; }

		[IgnoreDataMember]
		public IEnumerable<MergeItem> MergeItems => null;

		public BoardInventory()
		{
		}

		public BoardInventory(int initialSize)
		{
		}

		public BoardInventory(MergeBoardId boardId, int initialSize)
		{
		}

		public void SetInitialSize(int startingSize)
		{
		}

		public MergeItem GetItemAtIndex(int index)
		{
			return null;
		}

		public bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetaTime currentTime, out bool removeItemFromBoard)
		{
			removeItemFromBoard = default(bool);
			return false;
		}

		public bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime, out bool removeItemFromBoard)
		{
			removeItemFromBoard = default(bool);
			return false;
		}

		public Dictionary<int, int> GetItemTypesAndAmountsOfItems()
		{
			return null;
		}

		public Dictionary<int, IEnumerable<MergeItem>> GetItemsGroupedByType()
		{
			return null;
		}

		public IEnumerable<MergeItem> GetItemsSorted(IPlayer player, BoardInventorySortMode sortMode = BoardInventorySortMode.Type)
		{
			return null;
		}

		public int GetItemIndex(MergeItem item)
		{
			return 0;
		}

		public int FindItemOfCertainType(int it)
		{
			return 0;
		}

		public IEnumerable<MergeItem> GetItems()
		{
			return null;
		}

		public IEnumerable<MergeItem> GetItemsOfCertainChain(IPlayer player, IItemDefinition itemDefinition)
		{
			return null;
		}

		public (MergeItem, MetaTime) TakeItemOut(int index)
		{
			return default((MergeItem, MetaTime));
		}

		public bool RemoveItem(string typeToRemove, int index, IPlayer player)
		{
			return false;
		}

		public void ReplaceItems(IPlayer player, Predicate<MergeItem> itemMatcher, IItemDefinition replacement, MetacoreTime replacementTime)
		{
		}

		public void RemoveItems(Predicate<MergeItem> itemMatcher)
		{
		}

		public void RemoveItems(Predicate<MergeItem> itemMatcher, Action<MergeItem> onRemoved)
		{
		}

		public void CollectItems(Predicate<MergeItem> itemMatcher, ICollectionContext context, MetacoreTime timestamp)
		{
		}

		public void CollectItemsFromChest(Predicate<IItemDefinition> itemMatcher, ICollectionContext context, MetacoreTime timestamp)
		{
		}

		public void RemoveItem(MergeItem mergeItem, Predicate<MergeItem> itemMatcher)
		{
		}

		public bool FindAndRemoveFirstOfType(int itemId)
		{
			return false;
		}

		public bool FindAndRemoveFirstVisibleItemOfCertainType(IEnumerable<int> itemTypes, MetacoreTime timestamp, bool areBubbleItemsAllowed = false)
		{
			return false;
		}

		public IEnumerable<IMergeItem> RemoveAndReturnItems(Predicate<IMergeItem> itemMatcher)
		{
			return null;
		}

		public void RestoreInternalState(MetacoreTime restorationTime, IPlayer player)
		{
		}

		public int CountVisibleItemsOfTypes(IEnumerable<IItemDefinition> itemTypes, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public int CountVisibleItemsOfTypes(IEnumerable<int> itemIds, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public List<IInventoryEntry> RemoveEntriesStartingFrom(int startIndex)
		{
			return null;
		}

		public void SetItemStoredTimeStamp(MergeItem mergeItem, MetaTime timeStamp)
		{
		}

		public MetaTime GetItemStoredTimeStamp(MergeItem mergeItem)
		{
			return default(MetaTime);
		}

		public bool CanAddItem(MergeItem item, IPlayer player)
		{
			return false;
		}

		public Option<IInventoryEntry> MergeableInventoryItemOption(IPlayer player, MergeItem itemToAdd, MetacoreTime currentTime)
		{
			return default(Option<IInventoryEntry>);
		}
	}
}
