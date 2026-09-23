using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21336)]
	[DevelopmentOnlyAction]
	public class IncreaseSinkProgressDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate SinkPosition { get; set; }

		public int ItemToSinkId { get; set; }

		public IncreaseSinkProgressDebug()
		{
		}

		public IncreaseSinkProgressDebug(MergeBoardId mergeBoardId, Coordinate sinkPosition, int itemToSinkId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
