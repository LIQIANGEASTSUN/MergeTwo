using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Board;
using GameLogic.Player.Items;

namespace Code.Bot.Utility
{
	public class ItemsRelationsUtility
	{
		public Dictionary<int, HashSet<IItemDefinition>> ItemProducingParents { get; set; }

		public ItemsRelationsUtility(IMergeMansionGameConfig gameConfig)
		{
		}

		public HashSet<IItemDefinition> GetAllRelevantOrders(IEnumerable<(Coordinate, MergeItem)> items, int requiredItemId)
		{
			return null;
		}

		public void AddItem(int key, IItemDefinition parentDef)
		{
		}
	}
}
