using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20006)]
	[DevelopmentOnlyAction]
	public class ResetBoardDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public ResetBoardDebug()
		{
		}

		public ResetBoardDebug(MergeBoard board)
		{
		}

		public ResetBoardDebug(MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
