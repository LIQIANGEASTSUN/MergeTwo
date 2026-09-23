using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20028)]
	[DevelopmentOnlyAction]
	public class AddChestsToPocket : PlayerAction
	{
		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
