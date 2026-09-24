namespace GameLogic.Player.Actions.Basic;

[ModelAction(11000)]
public class TryMergeBoardMove : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <FromPosition>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Coordinate <ToPosition>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Coordinate> <ReturnList>k__BackingField; //Field offset: 0x28

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

	[IgnoreDataMember]
	private List<Coordinate> ReturnList
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

	private TryMergeBoardMove() { }

	public TryMergeBoardMove(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition, List<Coordinate> returnList) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_FromPosition() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private List<Coordinate> get_ReturnList() { }

	[CompilerGenerated]
	private Coordinate get_ToPosition() { }

	[CompilerGenerated]
	private void set_FromPosition(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ReturnList(List<Coordinate> value) { }

	[CompilerGenerated]
	private void set_ToPosition(Coordinate value) { }

}

