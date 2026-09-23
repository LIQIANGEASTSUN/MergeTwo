using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "PoolTag", menuName = "Butler/Filter/PoolTag")]
	[Documentation("Filter Pool Tag", "select items that has the same PoolTag as in the list", null)]
	public class FilterPoolTag : FilterBase
	{
		[SerializeField]
		public List<string> relevantTags;

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
