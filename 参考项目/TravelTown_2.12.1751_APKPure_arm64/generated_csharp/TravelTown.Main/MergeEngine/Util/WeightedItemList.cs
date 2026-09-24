using System;
using System.Collections.Generic;

namespace MergeEngine.Util
{
	public class WeightedItemList<TItem>
	{
		[NonSerialized]
		public List<WeightedItem<TItem>> _items;

		[NonSerialized]
		public int _weightSum;

		public List<TItem> PlainItems => null;

		public int Count => 0;

		public void AddItem(WeightedItem<TItem> item)
		{
		}

		public void AddItems(IEnumerable<WeightedItem<TItem>> items)
		{
		}

		public TItem GetItem(Random random)
		{
			return default(TItem);
		}
	}
}
