namespace GameLogic.Player;

[Extension]
public static class PlayerMigrations
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<KeyValue<AuthenticationKey, PlayerAuthEntryBase>> <>9__0_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, MergeItem> <>9__2_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal MergeItem <RemoveCbePortals>b__2_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal bool <RemoveSupercellIdAuthEntry>b__0_0(KeyValue<AuthenticationKey, PlayerAuthEntryBase> entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_0
	{
		public PlayerModel playerModel; //Field offset: 0x10

		public <>c__DisplayClass2_0() { }

		internal bool <RemoveCbePortals>b__0(ValueTuple<Coordinate, MergeItem> item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_1
	{
		public MergeBoardId boardId; //Field offset: 0x10

		public <>c__DisplayClass2_1() { }

		internal bool <RemoveCbePortals>b__2(CollectibleBoardEventInfo eventInfo) { }

		internal bool <RemoveCbePortals>b__3(LeaderboardEventInfo eventInfo) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_2
	{
		public MergeBoardId boardId; //Field offset: 0x10

		public <>c__DisplayClass2_2() { }

		internal bool <RemoveCbePortals>b__4(CollectibleBoardEventInfo eventInfo) { }

		internal bool <RemoveCbePortals>b__5(LeaderboardEventInfo eventInfo) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_3
	{
		public MergeBoardId boardId; //Field offset: 0x10

		public <>c__DisplayClass2_3() { }

		internal bool <RemoveCbePortals>b__6(CollectibleBoardEventInfo eventInfo) { }

	}


	[Extension]
	public static void MigrateAutoMerge(PlayerModel playerModel) { }

	[Extension]
	public static void MigrateIllustrationTasksIfNotCompleted(PlayerModel playerModel) { }

	[Extension]
	public static void MigrateTutorialPouch2(PlayerModel playerModel) { }

	[Extension]
	public static void RemoveCbePortals(PlayerModel playerModel) { }

	[Extension]
	public static void RemoveMysteryMachineLeaderboardRewardRequests(PlayerModel playerModel) { }

	[Extension]
	public static void RemoveSupercellIdAuthEntry(PlayerModel playerModel) { }

}

