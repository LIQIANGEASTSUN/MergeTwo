using System.Collections.Generic;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21112)]
	[DevelopmentOnlyAction]
	public class ResetBoardExceptCoordinatesDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public List<Coordinate> Coordinates { get; set; }

		public ResetBoardExceptCoordinatesDebug()
		{
		}

		public ResetBoardExceptCoordinatesDebug(MergeBoard board, List<Coordinate> coordinates)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
