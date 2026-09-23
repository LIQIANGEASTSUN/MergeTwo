using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "ChainParents", menuName = "Butler/Filter/ChainParents")]
	[Documentation("Filter Chain Parents", "select items that are producers for current required item", null)]
	public class FilterChainParents : FilterBase
	{
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
