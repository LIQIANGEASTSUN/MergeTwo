using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10971)]
	public class TryMasterFunctionsCollectAndSellItemsFromMergeBoard : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public TryMasterFunctionsCollectAndSellItemsFromMergeBoard()
		{
		}

		public TryMasterFunctionsCollectAndSellItemsFromMergeBoard(MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
