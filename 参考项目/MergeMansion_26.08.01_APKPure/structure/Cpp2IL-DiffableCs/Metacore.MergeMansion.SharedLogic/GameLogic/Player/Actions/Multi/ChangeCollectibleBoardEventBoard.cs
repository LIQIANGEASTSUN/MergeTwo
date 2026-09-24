namespace GameLogic.Player.Actions.Multi;

[ModelAction(30008)]
public class ChangeCollectibleBoardEventBoard : PlayerAction
{
	[CompilerGenerated]
	private CollectibleBoardEventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeBoardId <TargetBoardId>k__BackingField; //Field offset: 0x18

	private CollectibleBoardEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeBoardId TargetBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ChangeCollectibleBoardEventBoard() { }

	public ChangeCollectibleBoardEventBoard(CollectibleBoardEventId eventId, MergeBoardId targetBoardId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private CollectibleBoardEventId get_EventId() { }

	[CompilerGenerated]
	private MergeBoardId get_TargetBoardId() { }

	[CompilerGenerated]
	private void set_EventId(CollectibleBoardEventId value) { }

	[CompilerGenerated]
	private void set_TargetBoardId(MergeBoardId value) { }

}

