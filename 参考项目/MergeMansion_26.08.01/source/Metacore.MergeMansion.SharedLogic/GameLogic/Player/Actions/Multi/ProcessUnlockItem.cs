using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10921)]
	public class ProcessUnlockItem : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ClickPosition { get; set; }

		public ProcessUnlockItem()
		{
		}

		public ProcessUnlockItem(MergeBoardId boardId, Coordinate clickPosition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
