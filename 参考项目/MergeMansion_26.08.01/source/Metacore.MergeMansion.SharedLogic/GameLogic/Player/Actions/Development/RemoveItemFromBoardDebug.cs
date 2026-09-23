using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20003)]
	[DevelopmentOnlyAction]
	public class RemoveItemFromBoardDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate Position { get; set; }

		public RemoveItemFromBoardDebug()
		{
		}

		public RemoveItemFromBoardDebug(MergeBoard mergeBoard, Coordinate position)
		{
		}

		public RemoveItemFromBoardDebug(MergeBoardId boardId, Coordinate position)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
