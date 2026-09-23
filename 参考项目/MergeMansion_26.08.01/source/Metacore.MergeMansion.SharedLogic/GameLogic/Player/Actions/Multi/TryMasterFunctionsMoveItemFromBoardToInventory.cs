using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10913)]
	public class TryMasterFunctionsMoveItemFromBoardToInventory : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate TryToMoveCoordinate { get; set; }

		public TryMasterFunctionsMoveItemFromBoardToInventory()
		{
		}

		public TryMasterFunctionsMoveItemFromBoardToInventory(MergeBoardId boardId, Coordinate tryToMoveCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
