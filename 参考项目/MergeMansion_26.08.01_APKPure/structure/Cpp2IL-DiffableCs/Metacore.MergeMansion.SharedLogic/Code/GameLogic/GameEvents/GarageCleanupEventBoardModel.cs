namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class GarageCleanupEventBoardModel
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<GarageCleanupEventBoardSlotModel, Boolean> <>9__4_1; //Field offset: 0x8
		public static Func<GarageCleanupEventBoardRowModel, Boolean> <>9__4_0; //Field offset: 0x10
		public static Func<GarageCleanupEventBoardSlotModel, Boolean> <>9__9_2; //Field offset: 0x18
		public static Func<GarageCleanupEventBoardRowModel, Int32> <>9__9_0; //Field offset: 0x20
		public static Func<GarageCleanupEventBoardRowModel, Int32> <>9__9_1; //Field offset: 0x28

		private static <>c() { }

		public <>c() { }

		internal int <GetProgress>b__9_0(GarageCleanupEventBoardRowModel r) { }

		internal int <GetProgress>b__9_1(GarageCleanupEventBoardRowModel r) { }

		internal bool <GetProgress>b__9_2(GarageCleanupEventBoardSlotModel s) { }

		internal bool <IsFilled>b__4_0(GarageCleanupEventBoardRowModel r) { }

		internal bool <IsFilled>b__4_1(GarageCleanupEventBoardSlotModel s) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass3_0
	{
		public PlayerModel player; //Field offset: 0x10
		public Func<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass3_0() { }

		internal GarageCleanupBoardRowInfo <.ctor>b__0(GarageCleanupBoardRowId rowId) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public GarageCleanupEventBoardModel <>4__this; //Field offset: 0x10
		public int i; //Field offset: 0x18
		public Func<Boolean, Int32, Boolean> <>9__0; //Field offset: 0x20

		public <>c__DisplayClass5_0() { }

		internal bool <IsPatternFilled>b__0(bool t, int j) { }

	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public List<GarageCleanupEventBoardRowModel> Rows; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public List<GarageCleanupPatternId> PatternsClaimed; //Field offset: 0x18

	public GarageCleanupEventBoardModel() { }

	public GarageCleanupEventBoardModel(PlayerModel player, GarageCleanupBoardInfo boardInfo) { }

	public float GetProgress() { }

	public bool IsFilled() { }

	public bool IsPatternClaimed(GarageCleanupPatternId patternId) { }

	public bool IsPatternFilled(PlayerModel player, GarageCleanupPatternInfo patternInfo) { }

	public void MarkPatternClaimed(GarageCleanupPatternId patternId) { }

	public bool WillPatternBeFilled(PlayerModel player, GarageCleanupPatternInfo patternInfo, int plannedFillIndex) { }

}

