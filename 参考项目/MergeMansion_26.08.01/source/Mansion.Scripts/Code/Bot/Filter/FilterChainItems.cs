using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "ChainItems", menuName = "Butler/Filter/ChainItems")]
	[Documentation("Filter Chain Items", "[Expensive] Select items related to current required item. Can find InDepth relation also", null)]
	public class FilterChainItems : FilterBase
	{
		[Range(0f, 5f)]
		public int minDepth;

		[Range(0f, 5f)]
		public int maxDepth;

		public override IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> Items)
		{
			return null;
		}

		public override IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> Items)
		{
			return null;
		}

		public IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> Items, IItemDefinition requiredItem)
		{
			return null;
		}

		public IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> Items, IItemDefinition requiredItem)
		{
			return null;
		}
	}
}
