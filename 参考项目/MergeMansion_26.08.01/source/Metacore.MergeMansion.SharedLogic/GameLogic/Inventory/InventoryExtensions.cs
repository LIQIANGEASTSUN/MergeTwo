using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Items;

namespace GameLogic.Inventory
{
	public static class InventoryExtensions
	{
		public static (Currencies, long) InventorySlotPrice(this IBoardInventory inventory, IPlayer player, int inventoryTypeFlag)
		{
			return default((Currencies, long));
		}

		public static (Currencies, long) InventorySlotPrice(this IBoardInventory inventory, IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> slots)
		{
			return default((Currencies, long));
		}

		public static IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> GetInventorySlotsConfig(IMergeMansionGameConfig gameConfig, int inventoryTypeFlag)
		{
			return null;
		}

		public static IEnumerable<MergeItem> FindItems(this IBoardInventory mergeBoard, Predicate<MergeItem> predicate)
		{
			return null;
		}

		public static int FreeSlotsCount(IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> slots)
		{
			return 0;
		}

		public static int InitialProducerInventorySize(this IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> producerInventorySlots)
		{
			return 0;
		}

		public static bool AreAllSlotsPurchased(this IBoardInventory inventory, IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> slots)
		{
			return false;
		}

		public static bool HasSpaceInInventoryForItem(MergeItem item, PlayerModel player)
		{
			return false;
		}

		public static bool TryGetTargetInventoryTypeFlagForItem(MergeItem item, IPlayer player, out int targetInventoryTypeFlag)
		{
			targetInventoryTypeFlag = default(int);
			return false;
		}
	}
}
