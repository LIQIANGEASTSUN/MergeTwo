using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30002)]
	public class ExpireRentableInventory : PlayerAction
	{
		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
