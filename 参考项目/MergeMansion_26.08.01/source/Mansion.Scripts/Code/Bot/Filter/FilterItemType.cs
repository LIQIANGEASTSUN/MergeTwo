using System;
using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "ItemType", menuName = "Butler/Filter/ItemType")]
	[Documentation("Filter Item Type", "select items with ConfigKey from the keys list", null)]
	public class FilterItemType : FilterBase
	{
		[SerializeField]
		public List<string> relevantItems;

		[NonSerialized]
		public HashSet<int> itemsKeys;

		public void Initialize()
		{
		}

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
