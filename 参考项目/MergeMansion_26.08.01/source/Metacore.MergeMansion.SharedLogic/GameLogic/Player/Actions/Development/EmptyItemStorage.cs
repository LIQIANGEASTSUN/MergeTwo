using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21190)]
	[DevelopmentOnlyAction]
	public class EmptyItemStorage : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ItemPosition { get; set; }

		public EmptyItemStorage()
		{
		}

		public EmptyItemStorage(MergeBoardId boardId, Coordinate itemPosition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
