using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21244)]
	[DevelopmentOnlyAction]
	public class SellItemsFromPocketDebug : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public SellItemsFromPocketDebug()
		{
		}

		public SellItemsFromPocketDebug(MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
