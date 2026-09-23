using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "Activators", menuName = "Butler/Filter/Activators")]
	[Documentation("Filet Activators", "select only items that supports activation or fishing rod tap feature", null)]
	public class FilterActivators : FilterBase
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
