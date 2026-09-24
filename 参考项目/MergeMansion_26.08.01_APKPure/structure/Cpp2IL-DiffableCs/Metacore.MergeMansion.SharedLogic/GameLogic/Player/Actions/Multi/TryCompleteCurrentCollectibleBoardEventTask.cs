namespace GameLogic.Player.Actions.Multi;

[ModelAction(10997)]
public class TryCompleteCurrentCollectibleBoardEventTask : PlayerAction
{
	[CompilerGenerated]
	private CollectibleBoardEventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private EventTaskId <EventTaskId>k__BackingField; //Field offset: 0x18

	private CollectibleBoardEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private EventTaskId EventTaskId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private static IComparer<MergeItem> WithMoreDecayTimeFirst
	{
		private get { } //Length: 88
	}

	private TryCompleteCurrentCollectibleBoardEventTask() { }

	public TryCompleteCurrentCollectibleBoardEventTask(CollectibleBoardEventId eventId, EventTaskId eventTaskId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private CollectibleBoardEventId get_EventId() { }

	[CompilerGenerated]
	private EventTaskId get_EventTaskId() { }

	private static IComparer<MergeItem> get_WithMoreDecayTimeFirst() { }

	[CompilerGenerated]
	private void set_EventId(CollectibleBoardEventId value) { }

	[CompilerGenerated]
	private void set_EventTaskId(EventTaskId value) { }

}

