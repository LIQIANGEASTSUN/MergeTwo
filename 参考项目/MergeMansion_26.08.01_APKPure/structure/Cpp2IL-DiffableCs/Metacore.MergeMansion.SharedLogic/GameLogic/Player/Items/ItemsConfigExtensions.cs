namespace GameLogic.Player.Items;

[Extension]
public static class ItemsConfigExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {null, "itemWeight"})]
		public static Func<IEnumerable`1<String>, ValueTuple`2<Int32, Int32>> <>9__0_0; //Field offset: 0x8
		public static Func<String, String[]> <>9__9_1; //Field offset: 0x10
		public static Func<String[], ValueTuple`2<Int32, Int32>> <>9__9_2; //Field offset: 0x18

		private static <>c() { }

		public <>c() { }

		internal String[] <ConstructFactory>b__9_1(string val) { }

		internal ValueTuple<Int32, Int32> <ConstructFactory>b__9_2(String[] parts) { }

		internal ValueTuple<Int32, Int32> <Create>b__0_0(IEnumerable<String> chunk) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass9_0
	{
		public IEnumerable<String> scoresArgs; //Field offset: 0x0

	}


	[CompilerGenerated]
	internal static List<ValueTuple`2<Int32, Int32>> <ConstructFactory>g__getScores|9_0(ref <>c__DisplayClass9_0 unnamed_param_0) { }

	public static ICalculateCollectValue ConstructCalculator(IList<String> parts) { }

	public static ICollectAction ConstructCollectAction(string actionType, IList<String> actionArgs) { }

	public static ISinkStateFactory ConstructFactory(string type, IEnumerable<String> scoresArgs, List<Int32> rewardItemIds, int finalScore, string rewardTag) { }

	public static IConsumptionLogic ConstructLogic(string type, IEnumerable<String> arguments) { }

	public static LootRoller ConstructLootRoller(IEnumerable<ValueTuple`2<Int32, Int32>> odds, IEnumerable<Int32> forcedLoot, IEnumerable<Int32> staticLoot, string spawnId) { }

	[Extension]
	public static IMergeChainElement ConstructMergeChainElement(string source) { }

	public static IOrderStateFactory ConstructOrderFactory(string type, MetaDictionary<Int32, Int32> scores, MetaDictionary<Int32, Int32> rewardItemIds, string activationType) { }

	public static ISpawnCycle ConstructSpawnCycle(string type, MetaDuration delay, MetaDuration firstDelay, MetaDuration delayBetween, int howManyPerGenerated, int amountInCycle, int howManyCycles) { }

	[Extension]
	public static IItemSpawner Create(IProducerFactory factory, RollHistoryType rollHistoryType, string producerString) { }

	private static AddSpawnAmountAction ParseAddSpawnAmountAction(IList<String> args) { }

	private static CollectibleBoardEventCollectAction ParseCollectibleBoardEventCollectAction(IList<String> args) { }

	private static ShortLeaderboardEventCollectAction ParseShortLeaderboardEventCollectAction(IList<String> args) { }

}

