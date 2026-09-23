using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11002)]
	public class DirectorTryToPauseMergeBoard : PlayerAction
	{
		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
