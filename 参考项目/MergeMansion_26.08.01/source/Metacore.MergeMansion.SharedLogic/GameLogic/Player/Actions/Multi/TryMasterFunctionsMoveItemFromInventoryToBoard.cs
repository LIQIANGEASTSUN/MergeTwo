using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10914)]
	public class TryMasterFunctionsMoveItemFromInventoryToBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public int InventoryIndex { get; set; }

		public int ItemIndex { get; set; }

		public TryMasterFunctionsMoveItemFromInventoryToBoard()
		{
		}

		public TryMasterFunctionsMoveItemFromInventoryToBoard(MergeBoardId boardId, int inventoryIndex, int itemIndex)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
