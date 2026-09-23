using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20011)]
	[DevelopmentOnlyAction]
	public class ActivateItem : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ItemPosition { get; set; }

		public ActivateItem()
		{
		}

		public ActivateItem(MergeBoardId boardId, Coordinate itemPosition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
