using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21245)]
	[DevelopmentOnlyAction]
	public class SellItemsFromInventoriesDebug : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public SellItemsFromInventoriesDebug()
		{
		}

		public SellItemsFromInventoriesDebug(MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
