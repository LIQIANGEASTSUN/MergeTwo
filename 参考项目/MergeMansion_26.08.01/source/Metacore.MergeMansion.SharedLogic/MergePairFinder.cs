using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;

public static class MergePairFinder
{
	public struct ItemEntry
	{
		public int ItemId;

		public int Count;
	}

	public static (Coordinate, Coordinate) FindSuggestion(IPlayer player, IBoard mergeBoard, SearchOptions options, ICollection<int> excludedItems, MetacoreTime currentTime, Random rand)
	{
		return default((Coordinate, Coordinate));
	}

	public static void RemoveSingleElements(Dictionary<int, int> itemTypeCounts, IReadOnlyDictionary<int, int> itemTypePartialCounts)
	{
	}

	public static void SortItemByVisibility(IEnumerable<MergeItem> items, Dictionary<int, int> visibleItems, Dictionary<int, int> partialVisibleItems)
	{
	}

	public static (Coordinate, Coordinate) FindMatchingItems(IPlayer player, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime)
	{
		return default((Coordinate, Coordinate));
	}

	public static (Coordinate, Coordinate) FindMatchingItems(IPlayer player, IEnumerable<(Coordinate Coordinate, MergeItem Item)> items, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime)
	{
		return default((Coordinate, Coordinate));
	}

	public static (Coordinate, Coordinate) FindMatchingItemsImpl(IPlayer player, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime)
	{
		return default((Coordinate, Coordinate));
	}

	public static (Coordinate, Coordinate) FindMatchingItemsImpl(IPlayer player, IEnumerable<(Coordinate Coordinate, MergeItem Item)> items, IBoard mergeBoard, int itemId, PartialLevel partialLevel, MetacoreTime currentTime)
	{
		return default((Coordinate, Coordinate));
	}

	public static bool IsItReadyForOpenChest(this MergeItem mergeItem, IMergeMansionGameConfig config, MetacoreTime currentTime)
	{
		return false;
	}

	public static (int, int) PopulateItemEntries(IPlayer player, List<MergeItem> boardItems, ICollection<int> excludedItems, MetacoreTime currentTime, ItemEntry[] visibleItemEntriesBuffer, ItemEntry[] partiallyVisibleItemEntriesBuffer)
	{
		return default((int, int));
	}

	public static int IncrementItemCount(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId)
	{
		return 0;
	}

	public static int FindExistingItemIndex(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId)
	{
		return 0;
	}

	public static int GetExistingItemCount(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId)
	{
		return 0;
	}

	public static bool ContainsItem(ItemEntry[] itemEntriesBuffer, int itemEntriesCount, int itemId)
	{
		return false;
	}

	public static int RemoveVisibleItemEntriesWithoutPair(ItemEntry[] visibleItemEntriesBuffer, int visibleItemEntriesCount, ItemEntry[] partiallyVisibleItemEntriesBuffer, int partiallyVisibleItemEntriesCount)
	{
		return 0;
	}

	public static int PopulateItemsInBothStates(ItemEntry[] visibleItemEntriesBuffer, int visibleItemEntriesCount, ItemEntry[] partiallyVisibleItemEntriesBuffer, int partiallyVisibleItemEntriesCount, int[] itemsInBothStatesBuffer)
	{
		return 0;
	}
}
