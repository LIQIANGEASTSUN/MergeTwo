using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10908)]
	public class TryMasterFunctionsCollectItemFromBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate CollectPosition { get; set; }

		public TryMasterFunctionsCollectItemFromBoard()
		{
		}

		public TryMasterFunctionsCollectItemFromBoard(MergeBoardId boardId, Coordinate collectCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
