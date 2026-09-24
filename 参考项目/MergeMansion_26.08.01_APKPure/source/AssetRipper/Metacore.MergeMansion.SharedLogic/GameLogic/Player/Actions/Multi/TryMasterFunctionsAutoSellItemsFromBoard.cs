using System.Collections.Generic;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10974)]
	public class TryMasterFunctionsAutoSellItemsFromBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public List<Coordinate> SellPositions { get; set; }

		public TryMasterFunctionsAutoSellItemsFromBoard()
		{
		}

		public TryMasterFunctionsAutoSellItemsFromBoard(MergeBoardId boardId, List<Coordinate> sellCoordinates)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
