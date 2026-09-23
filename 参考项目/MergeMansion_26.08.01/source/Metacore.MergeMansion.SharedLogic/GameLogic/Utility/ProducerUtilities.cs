using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Production;

namespace GameLogic.Utility
{
	public static class ProducerUtilities
	{
		public static ulong GetProducedCount(IMergeItem item, IMergeMansionGameConfig config)
		{
			return 0uL;
		}

		public static IItemDefinition GetItemFromSequencedOrder(IMergeMansionGameConfig config, List<ItemOdds> oddsList, int index)
		{
			return null;
		}

		public static T GetFromSequencedOrder<T>(List<(T type, int weight)> oddsList, int index)
		{
			return default(T);
		}

		public static IItemDefinition GetItemFromMixedOrder(IMergeMansionGameConfig config, IReadOnlyList<IItemOdds> oddsList, int index)
		{
			return null;
		}

		public static IEnumerable<(IItemDefinition, int)> OddsAsItemDefinitions(IMergeMansionGameConfig config, List<ItemOdds> oddsList)
		{
			return null;
		}

		public static List<(int, int)> OddsAsIntegers(List<ItemOdds> oddsList)
		{
			return null;
		}

		public static IEnumerable<IItemDefinition> GetSpawnItemsSimple(IMergeMansionGameConfig config, List<ItemOdds> oddsList)
		{
			return null;
		}

		public static List<IItemOdds> AllowedItems(IReadOnlyList<ItemOdds> originalItems, List<IItemDefinition> allowedItems)
		{
			return null;
		}

		public static bool IsAllowedItem(IItemDefinition itemDefinition, IEnumerable<IItemDefinition> allowedItems)
		{
			return false;
		}

		public static int CalculateTotalOdds(IReadOnlyList<IItemOdds> oddsList)
		{
			return 0;
		}
	}
}
