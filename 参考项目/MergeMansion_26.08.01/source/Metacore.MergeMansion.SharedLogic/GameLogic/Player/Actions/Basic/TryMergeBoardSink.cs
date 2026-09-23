using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11032)]
	public class TryMergeBoardSink : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate FromPosition { get; set; }

		public Coordinate ToPosition { get; set; }

		public TryMergeBoardSink()
		{
		}

		public TryMergeBoardSink(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
