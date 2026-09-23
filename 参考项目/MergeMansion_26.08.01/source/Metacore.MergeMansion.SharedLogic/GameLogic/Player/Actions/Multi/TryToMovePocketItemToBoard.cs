using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10905)]
	public class TryToMovePocketItemToBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate EmptyCoordinate { get; set; }

		public TryToMovePocketItemToBoard()
		{
		}

		public TryToMovePocketItemToBoard(MergeBoardId boardId, Coordinate emptyCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
