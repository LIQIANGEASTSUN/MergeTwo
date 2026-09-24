namespace GameLogic.MergeChains;

[Extension]
public static class MergeChainDefinitionExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<IMergeChainElement, ItemDef> <>9__30_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <GetAllItemsSolvedInChain>b__30_0(IMergeChainElement item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass30_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass30_0() { }

		internal bool <GetAllItemsSolvedInChain>b__1(ItemDef x) { }

	}


	private static string DebugLog(IReadOnlyList<IMergeChainElement> chain, int itemId, IPlayer player, int itemIndexInChain = -1, int itemElementIndex = -1, string prefix = "") { }

	[Extension]
	public static string DebugLogMergeChains(IMergeChainDefinition chain, int itemId, IPlayer player) { }

	[Extension]
	public static IItemDefinition DefaultFirstItem(IMergeChainDefinition chain, IPlayer player) { }

	[Extension]
	public static IItemDefinition DefaultItemAtIndex(IMergeChainDefinition chain, IPlayer player, int indexInChain) { }

	[Extension]
	public static IItemDefinition DefaultLastItem(IMergeChainDefinition chain, IPlayer player) { }

	[Extension]
	public static IItemDefinition FirstItem(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId) { }

	[Extension]
	public static List<ItemDef> GetAllItemsSolvedInChain(IMergeChainDefinition mergeChainDefinition, IPlayer player) { }

	[Extension]
	public static IPlayerReward GetDiscoveryCompletionReward(IMergeChainDefinition mergeChainDefinition) { }

	[Extension]
	public static Option<IPlayerReward> GetDiscoveryReward(IMergeChainDefinition mergeChainDefinition, int index) { }

	[Extension]
	public static ValueTuple<IReadOnlyList`1<IMergeChainElement>, Int32, Int32> GetItemData(IMergeChainDefinition mergeChainDefinition, int itemId) { }

	private static ValueTuple<IReadOnlyList`1<IMergeChainElement>, Int32, Int32> GetItemData(IReadOnlyList<IMergeChainElement> chain, int itemId) { }

	[Extension]
	public static List<Int32> GetItemIds(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId) { }

	[Extension]
	public static int GetItemIndex(IMergeChainDefinition mergeChainDefinition, int itemId) { }

	[Extension]
	public static int GetItemLevel(IMergeChainDefinition mergeChainDefinition, int itemId) { }

	[Extension]
	public static List<IItemDefinition> GetItems(IMergeChainDefinition mergeChainDefinition, IMergeMansionGameConfig config, int itemId, int minItemLevel = 1) { }

	[Extension]
	public static ValueTuple<IReadOnlyList`1<IMergeChainElement>, Int32, Int32> GetItemsData(IMergeChainDefinition mergeChainDefinition, int itemId) { }

	[Extension]
	public static IItemDefinition GetLastUnlockedMergeChainItem(IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player, bool playerMustHaveDiscovered = false) { }

	[Extension]
	public static IEnumerable<IItemDefinition> GetMergeChainItemsStartingFrom(IMergeChainDefinition chain, IItemDefinition item, IPlayer player) { }

	[Extension]
	public static bool IsFirstItem(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId) { }

	[Extension]
	public static bool IsLastItem(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId) { }

	[Extension]
	public static bool IsLastUnlockedMergeChainItem(IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static bool IsPartOfMergeChain(IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, bool includeFallback = false) { }

	private static bool IsValid(ValueTuple<IReadOnlyList`1<IMergeChainElement>, Int32, Int32> itemData) { }

	[Extension]
	public static IItemDefinition ItemAtIndex(IMergeChainDefinition mergeChainDefinition, IMergeMansionGameConfig config, ValueTuple<IReadOnlyList`1<IMergeChainElement>, Int32, Int32> itemData, int wantedItemIndex) { }

	[Extension]
	public static IItemDefinition ItemAtIndex(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId, int wantedItemIndex) { }

	[Extension]
	public static IItemDefinition LastItem(IMergeChainDefinition mergeChainDefinition, IMergeMansionGameConfig config, int itemId) { }

	[Extension]
	public static IItemDefinition NextItem(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId) { }

	[Extension]
	public static IItemDefinition PreviousItem(IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId) { }

	[Extension]
	public static List<IItemDefinition> UnlockedAndAvailableItems(IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static int UnlockedAndAvailableLength(IMergeChainDefinition mergeChainDefinition, IPlayer player) { }

	[Extension]
	public static int UnlockedAndAvailableLength(IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player) { }

}

