using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10941)]
	public class TryToDismissBubble : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public Coordinate BubbleCoordinate { get; set; }

		public TryToDismissBubble()
		{
		}

		public TryToDismissBubble(MergeBoardId boardId, Coordinate bubbleCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
