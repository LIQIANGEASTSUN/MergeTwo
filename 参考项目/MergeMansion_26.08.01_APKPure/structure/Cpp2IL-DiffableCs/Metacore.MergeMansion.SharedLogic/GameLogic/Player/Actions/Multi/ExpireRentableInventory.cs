namespace GameLogic.Player.Actions.Multi;

[ModelAction(30002)]
public class ExpireRentableInventory : PlayerAction
{

	public ExpireRentableInventory() { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

}

