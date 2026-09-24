using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11003)]
	public class DirectorTryToUnpauseMergeBoard : PlayerAction
	{
		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
