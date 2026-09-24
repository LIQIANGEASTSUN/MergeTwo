namespace GameLogic.Player.Actions.Multi;

[ModelAction(10913)]
public class TryMasterFunctionsMoveItemFromBoardToInventory : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <TryToMoveCoordinate>k__BackingField; //Field offset: 0x18

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Coordinate TryToMoveCoordinate
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsMoveItemFromBoardToInventory() { }

	public TryMasterFunctionsMoveItemFromBoardToInventory(MergeBoardId boardId, Coordinate tryToMoveCoordinate) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private Coordinate get_TryToMoveCoordinate() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_TryToMoveCoordinate(Coordinate value) { }

}

