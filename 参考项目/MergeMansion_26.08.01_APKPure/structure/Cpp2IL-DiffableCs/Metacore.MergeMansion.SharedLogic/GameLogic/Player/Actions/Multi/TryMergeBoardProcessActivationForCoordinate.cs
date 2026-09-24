namespace GameLogic.Player.Actions.Multi;

[ModelAction(10901)]
public class TryMergeBoardProcessActivationForCoordinate : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <ActivationCoordinate>k__BackingField; //Field offset: 0x18

	private Coordinate ActivationCoordinate
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

	private TryMergeBoardProcessActivationForCoordinate() { }

	public TryMergeBoardProcessActivationForCoordinate(MergeBoardId boardId, Coordinate activationCoordinate) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_ActivationCoordinate() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_ActivationCoordinate(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

