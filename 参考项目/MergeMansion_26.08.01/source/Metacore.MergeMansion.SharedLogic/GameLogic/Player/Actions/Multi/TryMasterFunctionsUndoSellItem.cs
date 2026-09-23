using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10910)]
	public class TryMasterFunctionsUndoSellItem : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public TryMasterFunctionsUndoSellItem()
		{
		}

		public TryMasterFunctionsUndoSellItem(MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
