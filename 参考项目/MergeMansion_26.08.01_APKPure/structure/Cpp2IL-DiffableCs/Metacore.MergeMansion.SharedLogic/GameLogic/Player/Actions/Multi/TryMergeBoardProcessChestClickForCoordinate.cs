namespace GameLogic.Player.Actions.Multi;

[ModelAction(10902)]
public class TryMergeBoardProcessChestClickForCoordinate : PlayerAction
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass10_0
	{
		public PlayerModel player; //Field offset: 0x10

		public <>c__DisplayClass10_0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass10_1
	{
		public MergeItem item; //Field offset: 0x10
		public <>c__DisplayClass10_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass10_1() { }

		internal bool <Execute>b__0(string tag) { }

	}

	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <ChestCoordinate>k__BackingField; //Field offset: 0x18

	private Coordinate ChestCoordinate
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMergeBoardProcessChestClickForCoordinate() { }

	public TryMergeBoardProcessChestClickForCoordinate(MergeBoardId boardId, Coordinate chestCoordinate) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_ChestCoordinate() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	private void SendAnalyticsEventCurrencySink(MergeBoard boardToProcess, PlayerModel player, MergeBoardAct act, MergeItem currentItem, List<String> actItemTypes) { }

	[CompilerGenerated]
	private void set_ChestCoordinate(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

