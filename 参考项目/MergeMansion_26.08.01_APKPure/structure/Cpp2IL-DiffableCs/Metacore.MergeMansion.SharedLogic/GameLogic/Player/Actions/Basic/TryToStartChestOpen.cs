namespace GameLogic.Player.Actions.Basic;

[ModelAction(11013)]
public class TryToStartChestOpen : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <ChestPosition>k__BackingField; //Field offset: 0x18

	private Coordinate ChestPosition
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

	private TryToStartChestOpen() { }

	public TryToStartChestOpen(MergeBoardId boardId, Coordinate chestCoordinate) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_ChestPosition() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_ChestPosition(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

