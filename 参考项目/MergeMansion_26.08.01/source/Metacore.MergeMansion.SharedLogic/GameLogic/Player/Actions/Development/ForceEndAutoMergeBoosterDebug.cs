using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21338)]
	[DevelopmentOnlyAction]
	public class ForceEndAutoMergeBoosterDebug : PlayerAction
	{
		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
