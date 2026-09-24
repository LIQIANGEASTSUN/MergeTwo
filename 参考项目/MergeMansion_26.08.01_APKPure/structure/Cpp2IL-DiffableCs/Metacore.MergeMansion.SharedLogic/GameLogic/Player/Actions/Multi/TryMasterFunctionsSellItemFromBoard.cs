namespace GameLogic.Player.Actions.Multi;

[ModelAction(10909)]
public class TryMasterFunctionsSellItemFromBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <SellPosition>k__BackingField; //Field offset: 0x18

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Coordinate SellPosition
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsSellItemFromBoard() { }

	public TryMasterFunctionsSellItemFromBoard(MergeBoardId boardId, Coordinate sellCoordinate) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private Coordinate get_SellPosition() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_SellPosition(Coordinate value) { }

}

