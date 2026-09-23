using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20102)]
	[DevelopmentOnlyAction]
	public class MoveMergeItemToPocket : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate Coordinate { get; set; }

		public MoveMergeItemToPocket()
		{
		}

		public MoveMergeItemToPocket(MergeBoardId mergeBoardId, Coordinate coordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
