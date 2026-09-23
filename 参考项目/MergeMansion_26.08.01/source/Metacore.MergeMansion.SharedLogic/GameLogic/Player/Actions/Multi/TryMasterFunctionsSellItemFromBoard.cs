using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10909)]
	public class TryMasterFunctionsSellItemFromBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate SellPosition { get; set; }

		public TryMasterFunctionsSellItemFromBoard()
		{
		}

		public TryMasterFunctionsSellItemFromBoard(MergeBoardId boardId, Coordinate sellCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
