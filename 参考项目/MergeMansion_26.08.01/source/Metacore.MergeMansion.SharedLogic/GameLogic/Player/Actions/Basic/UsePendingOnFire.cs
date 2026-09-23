using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11201)]
	public class UsePendingOnFire : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public UsePendingOnFire()
		{
		}

		public UsePendingOnFire(MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
