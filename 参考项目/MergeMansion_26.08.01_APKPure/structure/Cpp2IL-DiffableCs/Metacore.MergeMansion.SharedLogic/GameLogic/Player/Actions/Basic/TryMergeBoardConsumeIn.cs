namespace GameLogic.Player.Actions.Basic;

[ModelAction(11033)]
public class TryMergeBoardConsumeIn : PlayerAction
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass14_0
	{
		public MergeItem fromItem; //Field offset: 0x10
		public IMergeMansionGameConfig config; //Field offset: 0x18

		public <>c__DisplayClass14_0() { }

		internal bool <Execute>b__0(string tag) { }

	}

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

	private TryMergeBoardConsumeIn() { }

	public TryMergeBoardConsumeIn(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition) { }

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

