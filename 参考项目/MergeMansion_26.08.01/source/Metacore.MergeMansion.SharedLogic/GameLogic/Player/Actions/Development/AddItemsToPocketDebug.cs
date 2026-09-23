using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21308)]
	[DevelopmentOnlyAction]
	public class AddItemsToPocketDebug : PlayerAction
	{
		public int[] ItemIds { get; set; }

		public int Count { get; set; }

		public AddItemsToPocketDebug()
		{
		}

		public AddItemsToPocketDebug(int[] itemIds, int count)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
