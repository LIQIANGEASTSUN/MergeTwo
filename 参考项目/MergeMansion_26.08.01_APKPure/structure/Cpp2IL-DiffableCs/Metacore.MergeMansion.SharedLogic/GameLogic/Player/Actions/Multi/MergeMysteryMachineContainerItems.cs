namespace GameLogic.Player.Actions.Multi;

[ModelAction(30024)]
public class MergeMysteryMachineContainerItems : PlayerAction
{
	[CompilerGenerated]
	private MysteryMachineEventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <MinDurationSinceOriginalSpawn>k__BackingField; //Field offset: 0x18

	private MysteryMachineEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MetaDuration MinDurationSinceOriginalSpawn
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeMysteryMachineContainerItems() { }

	public MergeMysteryMachineContainerItems(MysteryMachineEventId eventId, MetaDuration minDurationSinceOriginalSpawn) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MysteryMachineEventId get_EventId() { }

	[CompilerGenerated]
	private MetaDuration get_MinDurationSinceOriginalSpawn() { }

	[CompilerGenerated]
	private void set_EventId(MysteryMachineEventId value) { }

	[CompilerGenerated]
	private void set_MinDurationSinceOriginalSpawn(MetaDuration value) { }

}

