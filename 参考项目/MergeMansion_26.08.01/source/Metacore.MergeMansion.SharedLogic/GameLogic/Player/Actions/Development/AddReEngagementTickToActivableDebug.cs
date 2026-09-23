using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21317)]
	[DevelopmentOnlyAction]
	public class AddReEngagementTickToActivableDebug : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public Coordinate Coordinate { get; set; }

		public AddReEngagementTickToActivableDebug()
		{
		}

		public AddReEngagementTickToActivableDebug(MergeBoardId boardId, Coordinate coordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
