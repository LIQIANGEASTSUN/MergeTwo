using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "AnyRequiredItem_chains", menuName = "Butler/Filter/AnyRequiredItem_chains")]
	[Documentation("AnyRequiredItem_chains", "[Expensive] Select items that relates to any required items chains", null)]
	public class FilterAllChainsItems : FilterChainItems
	{
		[SerializeField]
		public bool onlyMissed;

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
