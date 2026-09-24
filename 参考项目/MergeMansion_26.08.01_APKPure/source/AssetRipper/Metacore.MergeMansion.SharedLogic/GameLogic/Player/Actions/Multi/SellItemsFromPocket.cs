using System.Collections.Generic;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10973)]
	public class SellItemsFromPocket : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public List<IItemDefinition> ItemDefinitions { get; set; }

		public SellItemsFromPocket()
		{
		}

		public SellItemsFromPocket(MergeBoardId boardId, List<IItemDefinition> itemDefinitions)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
