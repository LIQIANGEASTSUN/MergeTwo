namespace GameLogic.Player.Actions.Multi;

[ModelAction(10903)]
public class SetActiveMergeBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F64 <LoadDuration>k__BackingField; //Field offset: 0x18

	private F64 LoadDuration
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

	private SetActiveMergeBoard() { }

	public SetActiveMergeBoard(MergeBoardId mergeBoardId) { }

	public SetActiveMergeBoard(MergeBoardId mergeBoardId, F64 loadDuration) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private F64 get_LoadDuration() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_LoadDuration(F64 value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

