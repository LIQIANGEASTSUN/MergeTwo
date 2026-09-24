namespace GameLogic.Player.Actions.Multi;

[ModelAction(10930)]
public class StartNewEventBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private StartNewEventBoard() { }

	public StartNewEventBoard(MergeBoardId mergeBoardId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

