using System;
using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Configuration
{
	public sealed class RemoteMergeGraphItemLazy : IMergeGraphItem, IUniqueStringKeyAsset
	{
		[NonSerialized]
		public RemoteMergeGraphItem _remoteMergeGraphItem;

		[NonSerialized]
		public string _raw;

		[NonSerialized]
		public readonly JsonSerializer _serializer;

		[NonSerialized]
		public Dictionary<string, IMergeItem> _itemsById;

		public string UniqueId { get; set; }

		public string GraphName { get; set; }

		public MergeGraphItemType GraphType { get; set; }

		public bool IsInCollectionBook { get; set; }

		public CollectionBookCategoryConfigWeakReference CollectionBookTab { get; set; }

		public int SortOrderInCollectionBook { get; set; }

		public List<IMergeItem> Items { get; }

		[JsonIgnore]
		public Dictionary<string, IMergeItem> ItemsById => null;

		public bool DropConsumable => false;

		public bool PowerBoostable => false;

		public int DropConsumableFromItemLevel => 0;

		public PlayerResourceEnum ConsumableDropResource => default(PlayerResourceEnum);

		public bool PrioritizeHinting => false;

		public bool DropBubbledItems => false;

		public int DropBubbleItemsFromLevel => 0;

		public float BubbledItemPriceMultiplier => 0f;

		public bool PreventMergeWithAnyItem => false;

		public bool OverrideOriginGraph => false;

		public IMergeGraphItem OriginGraph => null;

		public IMergeGraphItem OverridenOriginGraph
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public MergeGraphItemWeakReference OriginGraphReference => null;

		public bool PreventAddToInventory => false;

		public bool IsSpecialChain => false;

		public bool IsGateway => false;

		public string GatewayText => null;

		public RemoteMergeGraphItem DeserializedMergeGraphItem => null;

		public RemoteMergeGraphItemLazy(string raw, string id, string graphName, MergeGraphItemType graphType, bool isInCollectionBook, CollectionBookCategoryConfigWeakReference collectionBookTab, int sortOrderInCollectionBook, List<IMergeItem> items, JsonSerializer serializer)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
