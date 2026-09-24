namespace GameLogic.Player.Actions.Multi;

[ModelAction(30030)]
public class EnqueueMysteryMachineSpawnItems : PlayerAction
{
	private MysteryMachineEventId EventId; //Field offset: 0x10

	private EnqueueMysteryMachineSpawnItems() { }

	public EnqueueMysteryMachineSpawnItems(MysteryMachineEventId eventId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

}

