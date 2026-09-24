namespace GameLogic.Player.Actions.Basic;

[ModelAction(11032)]
public class TryMergeBoardSink : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <FromPosition>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Coordinate <ToPosition>k__BackingField; //Field offset: 0x20

	private Coordinate FromPosition
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

	private Coordinate ToPosition
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMergeBoardSink() { }

	public TryMergeBoardSink(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_FromPosition() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private Coordinate get_ToPosition() { }

	[CompilerGenerated]
	private void set_FromPosition(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ToPosition(Coordinate value) { }

}

