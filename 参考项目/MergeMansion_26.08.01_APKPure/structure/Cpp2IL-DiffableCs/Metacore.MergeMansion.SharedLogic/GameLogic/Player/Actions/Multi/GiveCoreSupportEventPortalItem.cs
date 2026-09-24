namespace GameLogic.Player.Actions.Multi;

[ModelAction(30097)]
public class GiveCoreSupportEventPortalItem : PlayerAction
{
	[CompilerGenerated]
	private CoreSupportEventId <EventId>k__BackingField; //Field offset: 0x10

	private CoreSupportEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private GiveCoreSupportEventPortalItem() { }

	public GiveCoreSupportEventPortalItem(CoreSupportEventId eventId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private CoreSupportEventId get_EventId() { }

	[CompilerGenerated]
	private void set_EventId(CoreSupportEventId value) { }

}

