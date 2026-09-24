using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;

namespace GameCore.Configuration.Definitions
{
	public abstract class MultipleConfigurationLookup<TAsset, TKey>
	{
		[NonSerialized]
		public Dictionary<TKey, TAsset> _itemsLookup;

		[NonSerialized]
		public List<TAsset> _items;

		public ReadOnlyCollection<TAsset> Items => null;

		public ReadOnlyDictionary<TKey, TAsset> ItemsById => null;

		public event Action<TAsset> ConfigurationRemoved
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<TAsset> ConfigurationAdded
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public abstract TKey GetKey(TAsset item);

		public void AddItem(TAsset item)
		{
		}

		public void RemoveItem(TAsset item)
		{
		}

		public void ItemsLoaded(IEnumerable<TAsset> items)
		{
		}

		public bool TryCreateDataCollections()
		{
			return false;
		}

		public void ItemLoaded(TAsset item)
		{
		}

		public bool HasItem(TKey id)
		{
			return false;
		}

		public TAsset GetById(TKey uniqueId)
		{
			return default(TAsset);
		}

		public MultipleConfigurationLookup()
		{
		}
	}
}
