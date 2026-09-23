using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21312)]
	[DevelopmentOnlyAction]
	public class RestartAutoMergeEventDebug : PlayerAction
	{
		public int Amount { get; set; }

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
