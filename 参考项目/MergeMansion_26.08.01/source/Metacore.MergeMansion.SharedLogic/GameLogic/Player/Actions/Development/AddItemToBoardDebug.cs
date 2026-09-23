using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20002)]
	[DevelopmentOnlyAction]
	public class AddItemToBoardDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ToPosition { get; set; }

		public int ItemId { get; set; }

		public ItemVisibility ItemVisibility { get; set; }

		public bool InBubble { get; set; }

		public AddItemToBoardDebug()
		{
		}

		public AddItemToBoardDebug(MergeBoard board, Coordinate toPosition, IItemDefinition itemDefinition, ItemVisibility itemVisibility, bool inBubble = false)
		{
		}

		public AddItemToBoardDebug(MergeBoardId boardId, Coordinate toPosition, int itemId, ItemVisibility itemVisibility, bool inBubble = false)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
