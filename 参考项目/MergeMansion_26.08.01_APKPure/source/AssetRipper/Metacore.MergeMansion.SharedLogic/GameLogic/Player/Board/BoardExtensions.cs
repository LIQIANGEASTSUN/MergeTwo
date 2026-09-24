using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Items;
using Merge;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Player.Board
{
	public static class BoardExtensions
	{
		public static IEnumerable<(Coordinate, MergeItem)> Cells(this IBoard mergeBoard)
		{
			return null;
		}

		public static IEnumerable<(Coordinate, MergeItem)> Items(this IBoard mergeBoard)
		{
			return null;
		}

		public static IEnumerable<MergeItem> VisibleItems(this IBoard mergeBoard)
		{
			return null;
		}

		public static IEnumerable<Coordinate> EmptyCells(this IBoard mergeBoard)
		{
			return null;
		}

		public static int EmptyCellCount(this MergeBoard mergeBoard)
		{
			return 0;
		}

		public static IEnumerable<(Coordinate, MergeItem)> FindAllBoosterItems(this IBoard mergeBoard, IPlayer player)
		{
			return null;
		}

		public static IEnumerable<(Coordinate, MergeItem)> FindSpecificBoosterItems(this IBoard mergeBoard, string id, IPlayer player)
		{
			return null;
		}

		public static bool IsOpeningChest(this IBoard mergeBoard, IMergeMansionGameConfig config, MetacoreTime currentTime)
		{
			return false;
		}

		public static IEnumerable<Coordinate> FindAllActivableAndVisibleItems(this IBoard mergeBoard, IPlayer player)
		{
			return null;
		}

		public static Coordinate FindFirstEmptySlot(this IBoard mergeBoard)
		{
			return default(Coordinate);
		}

		public static bool TryFindFirstEmptySlot(this IBoard mergeBoard, out Coordinate outCoord)
		{
			outCoord = default(Coordinate);
			return false;
		}

		public static Coordinate FindFirstItemOfCertainType(this IBoard mergeBoard, int itemId)
		{
			return default(Coordinate);
		}

		public static IEnumerable<Coordinate> FindAllCoordinatesOfCertainItemType(this IBoard mergeBoard, int it)
		{
			return null;
		}

		public static IEnumerable<(Coordinate, MergeItem)> FindItems(this IBoard mergeBoard, Predicate<MergeItem> predicate)
		{
			return null;
		}

		public static int CountAllItemsInBubbles(this IBoard mergeBoard)
		{
			return 0;
		}

		public static IEnumerable<Coordinate> FindAllItemsOfCertainTypes(this IBoard mergeBoard, ICollection<int> items)
		{
			return null;
		}

		public static IEnumerable<Coordinate> ScanLinesFrom(this IBoard mergeBoard, Coordinate startCoordinate)
		{
			return null;
		}

		public static Coordinate FindFirstItemOfCertainType(this IBoard mergeBoard, int itemId, ItemVisibility itemVisibility)
		{
			return default(Coordinate);
		}

		public static Coordinate FindFirstItemOfCertainType(this IBoard mergeBoard, int itemId, ItemVisibility itemVisibility, bool areBubbleItemsAllowed)
		{
			return default(Coordinate);
		}

		public static Coordinate FindFirstItemOfCertainType(this IBoard mergeBoard, int itemId, ItemVisibility itemVisibility, Coordinate startCoordinate)
		{
			return default(Coordinate);
		}

		public static Coordinate FindFirstItemOfCertainType(this IBoard mergeBoard, int itemId, ItemVisibility itemVisibility, Coordinate startCoordinate, bool areBubbleItemsAllowed)
		{
			return default(Coordinate);
		}

		public static bool HasAtLeastOneVisibleItem(this IBoard mergeBoard, int itemId, bool areBubbleItemsAllowed = false)
		{
			return false;
		}

		public static bool HasAtLeastOneVisibleItem(this IBoard mergeBoard, int[] itemIds, bool areBubbleItemsAllowed = false)
		{
			return false;
		}

		public static bool HasAtLeastOnePartiallyVisibleItem(this IBoard mergeBoard, int itemId, bool areBubbleItemsAllowed = false)
		{
			return false;
		}

		public static int CountItemChargesOfType(this IBoard mergeBoard, int itemId, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public static int CountVisibleItemsOfType(this IBoard mergeBoard, IPlayer player, int itemId, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public static int CountVisibleItemsOfTypes(this IBoard mergeBoard, IPlayer player, IEnumerable<IItemDefinition> itemTypes, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public static int CountVisibleItemsOfTypes(this IBoard mergeBoard, IPlayer player, IEnumerable<int> itemTypes, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public static bool IsVisibleItem(MergeItem item, bool areBubbleItemsAllowed)
		{
			return false;
		}

		public static int GetEffectiveItemCount(IPlayer player, MergeItem item)
		{
			return 0;
		}

		public static int CountItemsOfType(this IBoard mergeBoard, int itemId, ICollection<ItemVisibility> visibilities)
		{
			return 0;
		}

		public static int CountAllVisibleItems(this IBoard mergeBoard)
		{
			return 0;
		}

		public static IEnumerable<MergeItem> SinkItems(this IBoard mergeBoard, IMergeMansionGameConfig config, bool shouldBeVisible = true)
		{
			return null;
		}

		public static IEnumerable<(Coordinate, MergeItem)> GetRemovedItems(this IBoard mergeBoard, IEnumerable<(Coordinate Coordinate, MergeItem Item)> previousBoardState)
		{
			return null;
		}

		public static bool IsOnMapBoard(this MergeBoardId boardId, IPlayer player)
		{
			return false;
		}

		public static bool IsOnMapBoard(this Option<BoardInfo> boardInfoOption)
		{
			return false;
		}

		public static bool IsOnMapBoard(this BoardInfo boardInfo)
		{
			return false;
		}

		public static Option<IMergeItem> GetFirstMergeItemOnBoard(this IBoard board)
		{
			return default(Option<IMergeItem>);
		}

		public static bool IsFull(this IBoard board)
		{
			return false;
		}

		public static Option<Coordinate> GetMergeItemInstanceCoordinate(this IBoard board, IMergeItem item)
		{
			return default(Option<Coordinate>);
		}
	}
}
