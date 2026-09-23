using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "Fishes", menuName = "Butler/Filter/Fishes")]
	[Documentation("Filter Fishes", "select items that has Weight only (for example: fishes)", null)]
	public class FilterFishes : FilterBase
	{
		public override IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> items)
		{
			return null;
		}

		public override IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> items)
		{
			return null;
		}
	}
}
