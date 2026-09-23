using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "PartiallyVisible", menuName = "Butler/Filter/PartiallyVisible")]
	[Documentation("Filter Partially Visible", "select PartiallyVisible items only", null)]
	public class FilterPartiallyVisible : FilterBase
	{
		public override IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> Items)
		{
			return null;
		}

		public override IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> Items)
		{
			return null;
		}
	}
}
