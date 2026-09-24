namespace GameLogic.Player.Actions.Multi;

[ModelAction(10941)]
public class TryToDismissBubble : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <BubbleCoordinate>k__BackingField; //Field offset: 0x18

	private MergeBoardId BoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Coordinate BubbleCoordinate
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryToDismissBubble() { }

	public TryToDismissBubble(MergeBoardId boardId, Coordinate bubbleCoordinate) { }

	[CompilerGenerated]
	private bool <Execute>b__10_0(MergeBoard board) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_BoardId() { }

	[CompilerGenerated]
	private Coordinate get_BubbleCoordinate() { }

	[CompilerGenerated]
	private void set_BoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_BubbleCoordinate(Coordinate value) { }

}

