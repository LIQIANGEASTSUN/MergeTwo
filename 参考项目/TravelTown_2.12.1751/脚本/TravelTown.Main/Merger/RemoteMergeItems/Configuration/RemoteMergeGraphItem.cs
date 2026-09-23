using System;
using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Configuration
{
	[Serializable]
	public class RemoteMergeGraphItem : IMergeGraphItem, IUniqueStringKeyAsset
	{
		[NonSerialized]
		public Dictionary<string, IMergeItem> _itemsById;

		[JsonProperty("items")]
		public List<IMergeItem> Items { get; }

		[JsonIgnore]
		public Dictionary<string, IMergeItem> ItemsById => null;

		public string GraphName { get; set; }

		public bool DropConsumable { get; set; }

		public bool PowerBoostable { get; set; }

		public int DropConsumableFromItemLevel { get; set; }

		public PlayerResourceEnum ConsumableDropResource { get; set; }

		public bool PrioritizeHinting { get; set; }

		public bool DropBubbledItems { get; set; }

		public int DropBubbleItemsFromLevel { get; set; }

		public float BubbledItemPriceMultiplier { get; set; }

		public bool PreventMergeWithAnyItem { get; set; }

		public bool IsInCollectionBook { get; set; }

		public CollectionBookCategoryConfigWeakReference CollectionBookTab { get; set; }

		public int SortOrderInCollectionBook { get; set; }

		public MergeGraphItemType GraphType { get; set; }

		public bool OverrideOriginGraph { get; set; }

		public bool PreventAddToInventory { get; set; }

		public bool IsSpecialChain { get; set; }

		[JsonProperty("isGateway")]
		public bool IsGateway { get; set; }

		[JsonProperty("gatewayFloatingText")]
		public string GatewayText { get; set; }

		[JsonIgnore]
		public IMergeGraphItem OriginGraph => null;

		public IMergeGraphItem OverridenOriginGraph { get; set; }

		public MergeGraphItemWeakReference OriginGraphReference { get; set; }

		public string UniqueId { get; set; }

		public override string ToString()
		{
			return null;
		}
	}
}
