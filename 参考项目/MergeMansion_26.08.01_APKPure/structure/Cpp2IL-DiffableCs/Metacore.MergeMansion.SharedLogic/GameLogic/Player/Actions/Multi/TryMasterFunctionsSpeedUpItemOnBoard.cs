namespace GameLogic.Player.Actions.Multi;

[ModelAction(10911)]
public class TryMasterFunctionsSpeedUpItemOnBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <SpeedUpPosition>k__BackingField; //Field offset: 0x18

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Coordinate SpeedUpPosition
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsSpeedUpItemOnBoard() { }

	public TryMasterFunctionsSpeedUpItemOnBoard(MergeBoardId boardId, Coordinate speedUpCoordinate) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private Coordinate get_SpeedUpPosition() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_SpeedUpPosition(Coordinate value) { }

}

