using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20100)]
	[DevelopmentOnlyAction]
	public class MoveItemToPocket : PlayerAction
	{
		public int ItemToAddToPocket { get; set; }

		public MoveItemToPocket()
		{
		}

		public MoveItemToPocket(int itemToAdd)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
