using GameLogic.Config;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20032)]
	[DevelopmentOnlyAction]
	public class ReplaceItemsOnBoard : PlayerAction
	{
		public MergeBoardId MergeBoard { get; set; }

		public string Tag { get; set; }

		public ItemDef ReplacementItem { get; set; }

		public ReplaceItemsOnBoard()
		{
		}

		public ReplaceItemsOnBoard(MergeBoardId mergeBoard, string tag, ItemDefinition replacementItem)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
