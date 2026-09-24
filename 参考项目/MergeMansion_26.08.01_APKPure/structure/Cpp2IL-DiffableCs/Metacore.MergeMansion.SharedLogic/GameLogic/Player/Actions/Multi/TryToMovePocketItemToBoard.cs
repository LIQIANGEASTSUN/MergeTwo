namespace GameLogic.Player.Actions.Multi;

[ModelAction(10905)]
public class TryToMovePocketItemToBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <EmptyCoordinate>k__BackingField; //Field offset: 0x18

	private Coordinate EmptyCoordinate
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

	private TryToMovePocketItemToBoard() { }

	public TryToMovePocketItemToBoard(MergeBoardId boardId, Coordinate emptyCoordinate) { }

	[CompilerGenerated]
	private bool <Execute>b__10_0(IBoardEventModel ev) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_EmptyCoordinate() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_EmptyCoordinate(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

