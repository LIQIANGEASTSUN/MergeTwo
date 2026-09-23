using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11090)]
	public class ResetPersistentDecayCycles : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate Position { get; set; }

		public ResetPersistentDecayCycles()
		{
		}

		public ResetPersistentDecayCycles(MergeBoardId boardId, Coordinate position)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
