//Type is in global namespace

[Extension]
public static class MergeItemMigrations
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<KeyValuePair`2<Int32, Int32>, Boolean> <>9__14_0; //Field offset: 0x8
		public static Func<Int32, Boolean> <>9__14_1; //Field offset: 0x10
		public static Predicate<MergeItem> <>9__14_2; //Field offset: 0x18

		private static <>c() { }

		public <>c() { }

		internal bool <MigrateTimeSkipBoosterMaxLevelReduced>b__14_0(KeyValuePair<Int32, Int32> tuple) { }

		internal bool <MigrateTimeSkipBoosterMaxLevelReduced>b__14_1(int type) { }

		internal bool <MigrateTimeSkipBoosterMaxLevelReduced>b__14_2(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass0_0
	{
		public PlayerModel playerModel; //Field offset: 0x10
		public Predicate<IItemDefinition> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass0_0() { }

		internal bool <MigrateStoryMergeItems>b__0(IItemDefinition item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public List<Int32> removeItems; //Field offset: 0x10

		public <>c__DisplayClass1_0() { }

		internal bool <MigrateStoryEvent>b__0(MergeItem matcher) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_1
	{
		public KeyValuePair<Int32, Int32> kvpMapping; //Field offset: 0x10

		public <>c__DisplayClass1_1() { }

		internal bool <MigrateStoryEvent>b__1(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass6_0
	{
		public PlayerModel player; //Field offset: 0x10

		public <>c__DisplayClass6_0() { }

		internal bool <ReturnTree>b__0(IItemDefinition def) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass9_0
	{
		public PlayerModel player; //Field offset: 0x10

		public <>c__DisplayClass9_0() { }

		internal int <RediscoverBoardItems>b__0(IMergeItem mergeItem) { }

	}

	private const string TreeMailTitle = "It’s Back!"; //Field offset: 0x0
	private const string TreeMailTitleExcerpt = "Back it comes!"; //Field offset: 0x0
	private const string TreeMailBody = "Given that the use of the Planted Bush has now changed, here’s the highest level Planted Bush that you have ever created"; //Field offset: 0x0
	private const string TreeMailBodyExcerpt = "Your Planted Bush!"; //Field offset: 0x0
	private const string TimeSkip05MailTitle = "Your Level 5 Time Skip Booster(s)"; //Field offset: 0x0
	private const string TimeSkip05TitleExcerpt = "Time Skip Booster changes"; //Field offset: 0x0
	private const string TimeSkip05MailBody = "We have decided to reduce the max level for the Time Skip Boosters because there aren’t really any opportunities to use an 16hr Time Skip in the game. We have replaced any Level 5 Time Skip Boosters you may have with two Level 4 Time Skip Boosters. This will allow for much more flexibility when playing."; //Field offset: 0x0
	private const string TimeSkip05MailBodyExcerpt = "Level 4 is now max level"; //Field offset: 0x0

	private static void MigrateStoryEvent(PlayerModel playerModel, HotspotId eventHotspotId, Dictionary<Int32, Int32> replacementMapping, List<Int32> removeItems) { }

	[Extension]
	public static bool MigrateStoryMergeItems(PlayerModel playerModel) { }

	[Extension]
	public static bool MigrateTimeSkipBoosterMaxLevelReduced(PlayerModel player) { }

	[Extension]
	public static bool RediscoverBoardItems(PlayerModel player) { }

	[Extension]
	public static bool RediscoverStoryItems(PlayerModel player) { }

	[Extension]
	private static bool RediscoverStoryItems(PlayerModel player, HotspotId hotspotId) { }

	[Extension]
	public static bool ReturnTree(PlayerModel player) { }

}

