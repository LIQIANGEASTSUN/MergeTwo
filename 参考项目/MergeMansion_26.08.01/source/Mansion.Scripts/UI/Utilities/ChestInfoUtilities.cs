using System;
using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Chest;
using UI.Indicators;
using UnityEngine;

namespace UI.Utilities
{
	public static class ChestInfoUtilities
	{
		public static void CreateItems(IItemDefinition itemDefinition, BoxInfoItem itemPrefab, Transform itemParent, IPlayer player, bool openedFromShop, bool quantitySeparatedBySpace, bool showLockedItems, ChestContext chestContext = null)
		{
		}

		public static void CreateItems(IMergeItem mergeItem, BoxInfoItem itemPrefab, Transform itemParent, IPlayer player, bool openedFromShop, bool quantitySeparatedBySpace, bool showLockedItems)
		{
		}

		public static List<(IItemDefinition, int, Action<BoxInfoItem, Transform>)> GetChestItems(IItemDefinition itemDefinition, IPlayer player, IMenuController menuController, bool openedFromShop, bool quantitySeparatedBySpace, bool showLockedItems, ChestContext chestContext = null)
		{
			return null;
		}

		public static int GetOdds(IEnumerable<(IItemDefinition, int)> oddsList, int key)
		{
			return 0;
		}

		public static IEnumerable<(IItemDefinition, int)> GetGroupedItemQuantityPairs(IEnumerable<(IItemDefinition, int)> pairs)
		{
			return null;
		}

		public static void ProcessUnlockedAndAvailablePairs(IPlayer player, ChestContext chestContext, bool showLockedItems, List<(IItemDefinition, int)> pairs)
		{
		}

		public static bool IsItemUnlockedAndAvailable(IItemDefinition item, IPlayer player, ChestContext chestContext, out IItemDefinition resultItem)
		{
			resultItem = null;
			return false;
		}
	}
}
