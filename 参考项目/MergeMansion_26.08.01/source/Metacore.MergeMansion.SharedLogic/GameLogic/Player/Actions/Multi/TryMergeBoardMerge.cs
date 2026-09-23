using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10900)]
	public class TryMergeBoardMerge : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate FromPosition { get; set; }

		public Coordinate ToPosition { get; set; }

		public TryMergeBoardMerge()
		{
		}

		public TryMergeBoardMerge(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
