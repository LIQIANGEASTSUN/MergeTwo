namespace GameLogic.Player.Actions.Multi;

[ModelAction(30005)]
public class TryToMoveRentableInventoryItemsToBoard : PlayerAction
{

	public TryToMoveRentableInventoryItemsToBoard() { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

}

