namespace GameLogic.Player.Actions.Basic;

[ModelAction(11001)]
public class TryMergeBoardSwap : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <FromPosition>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Coordinate <ToPosition>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Coordinate> <ReturnList>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <CheckForEmptySlots>k__BackingField; //Field offset: 0x30

	private bool CheckForEmptySlots
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

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

	private TryMergeBoardSwap() { }

	public TryMergeBoardSwap(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition, List<Coordinate> returnList, bool checkForEmptySlots = true) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private bool get_CheckForEmptySlots() { }

	[CompilerGenerated]
	private Coordinate get_FromPosition() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private List<Coordinate> get_ReturnList() { }

	[CompilerGenerated]
	private Coordinate get_ToPosition() { }

	[CompilerGenerated]
	private void set_CheckForEmptySlots(bool value) { }

	[CompilerGenerated]
	private void set_FromPosition(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ReturnList(List<Coordinate> value) { }

	[CompilerGenerated]
	private void set_ToPosition(Coordinate value) { }

}

