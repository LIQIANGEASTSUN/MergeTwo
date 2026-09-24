using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11033)]
	public class TryMergeBoardConsumeIn : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate FromPosition { get; set; }

		public Coordinate ToPosition { get; set; }

		public TryMergeBoardConsumeIn()
		{
		}

		public TryMergeBoardConsumeIn(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
