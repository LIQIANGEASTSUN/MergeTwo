namespace GameLogic.Player.Actions.Multi;

[ModelAction(30031)]
public class DequeueMysteryMachineSpawnItem : PlayerAction
{
	private MysteryMachineEventId EventId; //Field offset: 0x10

	private DequeueMysteryMachineSpawnItem() { }

	public DequeueMysteryMachineSpawnItem(MysteryMachineEventId eventId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

}

