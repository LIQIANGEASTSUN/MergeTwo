namespace GameLogic.Player.Actions.Multi;

[ModelAction(10938)]
public class TryCompleteCurrentEventTask : PlayerAction
{
	[CompilerGenerated]
	private EventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private EventTaskId <EventTaskId>k__BackingField; //Field offset: 0x18

	private EventId EventId
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

	private TryCompleteCurrentEventTask() { }

	public TryCompleteCurrentEventTask(EventId eventId, EventTaskId eventTaskId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private EventId get_EventId() { }

	[CompilerGenerated]
	private EventTaskId get_EventTaskId() { }

	private static IComparer<MergeItem> get_WithMoreDecayTimeFirst() { }

	[CompilerGenerated]
	private void set_EventId(EventId value) { }

	[CompilerGenerated]
	private void set_EventTaskId(EventTaskId value) { }

}

