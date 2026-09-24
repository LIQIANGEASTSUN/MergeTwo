using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11013)]
	public class TryToStartChestOpen : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ChestPosition { get; set; }

		public TryToStartChestOpen()
		{
		}

		public TryToStartChestOpen(MergeBoardId boardId, Coordinate chestCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
