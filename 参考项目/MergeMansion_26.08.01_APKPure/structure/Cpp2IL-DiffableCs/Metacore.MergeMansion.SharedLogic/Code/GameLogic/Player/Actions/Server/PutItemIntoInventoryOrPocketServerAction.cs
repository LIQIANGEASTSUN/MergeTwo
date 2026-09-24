namespace Code.GameLogic.Player.Actions.Server;

[ModelAction(20227)]
public class PutItemIntoInventoryOrPocketServerAction : PlayerSynchronizedServerActionCore<PlayerModel>
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <Position>k__BackingField; //Field offset: 0x18

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Coordinate Position
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PutItemIntoInventoryOrPocketServerAction() { }

	public PutItemIntoInventoryOrPocketServerAction(MergeBoardId mergeBoardId, Coordinate source) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private Coordinate get_Position() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_Position(Coordinate value) { }

}

