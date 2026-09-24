namespace GameLogic.Player.Actions.Basic;

[ModelAction(11198)]
public class FinishCollectibleBoardEventBoard : PlayerAction
{
	[CompilerGenerated]
	private CollectibleBoardEventId <EventId>k__BackingField; //Field offset: 0x10

	private CollectibleBoardEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private FinishCollectibleBoardEventBoard() { }

	public FinishCollectibleBoardEventBoard(CollectibleBoardEventId eventId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private CollectibleBoardEventId get_EventId() { }

	[CompilerGenerated]
	private void set_EventId(CollectibleBoardEventId value) { }

}

