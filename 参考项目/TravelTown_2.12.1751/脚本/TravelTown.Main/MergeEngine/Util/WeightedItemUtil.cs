using System;
using System.Collections.Generic;

namespace MergeEngine.Util
{
	public static class WeightedItemUtil
	{
		public static WeightedItemList<TItem> GenerateWeightedItemList<TItemData, TItem>(IList<TItemData> items, Func<TItemData, int> getWeightFunc, Func<TItemData, TItem> getItemFunc)
		{
			return null;
		}
	}
}
