using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21318)]
	[DevelopmentOnlyAction]
	public class ResetReEngagementInActivableDebug : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public Coordinate Coordinate { get; set; }

		public ResetReEngagementInActivableDebug()
		{
		}

		public ResetReEngagementInActivableDebug(MergeBoardId boardId, Coordinate coordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
