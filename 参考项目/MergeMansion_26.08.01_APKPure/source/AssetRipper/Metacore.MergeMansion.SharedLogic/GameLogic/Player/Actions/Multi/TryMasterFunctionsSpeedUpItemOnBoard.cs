using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10911)]
	public class TryMasterFunctionsSpeedUpItemOnBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate SpeedUpPosition { get; set; }

		public TryMasterFunctionsSpeedUpItemOnBoard()
		{
		}

		public TryMasterFunctionsSpeedUpItemOnBoard(MergeBoardId boardId, Coordinate speedUpCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
