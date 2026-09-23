using GameLogic.Config.Types;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21211)]
	[DevelopmentOnlyAction]
	public class SetItemActivationState : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public string ItemType { get; set; }

		public CheatItemActivationState ItemActivationState { get; set; }

		public SetItemActivationState()
		{
		}

		public SetItemActivationState(MergeBoardId boardId, string itemType, CheatItemActivationState itemActivationState)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public static void SetState(PlayerModel player, MergeItem mergeItem, CheatItemActivationState state)
		{
		}

		public static void ResetTo(MergeItem mergeItem, int amountLeft, MetacoreTime nextFillTime)
		{
		}
	}
}
