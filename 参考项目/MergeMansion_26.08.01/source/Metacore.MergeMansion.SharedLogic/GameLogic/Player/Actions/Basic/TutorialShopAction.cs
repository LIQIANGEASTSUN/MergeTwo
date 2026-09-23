using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11096)]
	public class TutorialShopAction : PlayerAction
	{
		public IItemDefinition item { get; set; }

		public Coordinate coordinate { get; set; }

		public MergeBoardId mergeBoardId { get; set; }

		public TutorialShopAction()
		{
		}

		public TutorialShopAction(IItemDefinition item, Coordinate coordinate, MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
