namespace GameLogic.Player.Actions.Multi;

[ModelAction(1304)]
public class ClaimGarageCleanupSpawnerItemAction : PlayerAction
{
	[CompilerGenerated]
	private GarageCleanupEventId <EventId>k__BackingField; //Field offset: 0x10

	public private GarageCleanupEventId EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ClaimGarageCleanupSpawnerItemAction() { }

	public ClaimGarageCleanupSpawnerItemAction(GarageCleanupEventId eventId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	public GarageCleanupEventId get_EventId() { }

	[CompilerGenerated]
	private void set_EventId(GarageCleanupEventId value) { }

}

