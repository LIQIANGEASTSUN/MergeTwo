using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "PhotoTaken", menuName = "Butler/Filter/PhotoTaken")]
	[Documentation("Filter Photo Taken", "specific only for Fishing event filter select only items with Photo feature", null)]
	public class FilterPhotoTaken : FilterBase
	{
		public override IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> Items)
		{
			return null;
		}

		public override IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> Items)
		{
			return null;
		}

		public static bool HasPhotoOfItemBeenTaken(RuntimeModel runtimeModel, (Coordinate, MergeItem) item)
		{
			return false;
		}

		public static bool HasPhotoOfItemBeenTaken(RuntimeModel runtimeModel, IMergeItem item)
		{
			return false;
		}
	}
}
