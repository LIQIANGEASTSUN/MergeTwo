namespace GameLogic.Utility;

public static class ProducerUtilities
{

	public static List<IItemOdds> AllowedItems(IReadOnlyList<ItemOdds> originalItems, List<IItemDefinition> allowedItems) { }

	public static int CalculateTotalOdds(IReadOnlyList<IItemOdds> oddsList) { }

	public static T GetFromSequencedOrder(List<ValueTuple`2<T, Int32>> oddsList, int index) { }

	public static IItemDefinition GetItemFromMixedOrder(IMergeMansionGameConfig config, IReadOnlyList<IItemOdds> oddsList, int index) { }

	public static IItemDefinition GetItemFromSequencedOrder(IMergeMansionGameConfig config, List<ItemOdds> oddsList, int index) { }

	public static ulong GetProducedCount(IMergeItem item, IMergeMansionGameConfig config) { }

	public static IEnumerable<IItemDefinition> GetSpawnItemsSimple(IMergeMansionGameConfig config, List<ItemOdds> oddsList) { }

	public static bool IsAllowedItem(IItemDefinition itemDefinition, IEnumerable<IItemDefinition> allowedItems) { }

	public static List<ValueTuple`2<Int32, Int32>> OddsAsIntegers(List<ItemOdds> oddsList) { }

	public static IEnumerable<ValueTuple`2<IItemDefinition, Int32>> OddsAsItemDefinitions(IMergeMansionGameConfig config, List<ItemOdds> oddsList) { }

}

