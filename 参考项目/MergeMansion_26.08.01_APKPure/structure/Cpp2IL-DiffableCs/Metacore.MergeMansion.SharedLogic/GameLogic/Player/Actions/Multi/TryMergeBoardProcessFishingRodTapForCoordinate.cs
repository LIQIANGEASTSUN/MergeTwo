namespace GameLogic.Player.Actions.Multi;

[ModelAction(10998)]
public class TryMergeBoardProcessFishingRodTapForCoordinate : PlayerAction
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass14_0
	{
		public MergeBoard boardToProcess; //Field offset: 0x10
		public PlayerModel player; //Field offset: 0x18

		public <>c__DisplayClass14_0() { }

		internal bool <Execute>b__0(MergeBoardAct act) { }

		internal string <Execute>b__1(MergeBoardAct act) { }

	}

	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <Coordinate>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private LuckyType <LuckyType>k__BackingField; //Field offset: 0x20

	private Coordinate Coordinate
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private LuckyType LuckyType
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

	private TryMergeBoardProcessFishingRodTapForCoordinate() { }

	public TryMergeBoardProcessFishingRodTapForCoordinate(MergeBoardId boardId, Coordinate coordinate, LuckyType luckyType) { }

	private void AddSoloMilestoneTokens(PlayerModel player, MergeBoard boardToProcess, MergeItem currentItem) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_Coordinate() { }

	[CompilerGenerated]
	private LuckyType get_LuckyType() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_Coordinate(Coordinate value) { }

	[CompilerGenerated]
	private void set_LuckyType(LuckyType value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

