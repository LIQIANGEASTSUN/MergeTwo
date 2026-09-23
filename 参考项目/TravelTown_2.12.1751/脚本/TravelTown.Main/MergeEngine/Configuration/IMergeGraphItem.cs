using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.Model;

namespace MergeEngine.Configuration
{
	public interface IMergeGraphItem : IUniqueStringKeyAsset
	{
		List<IMergeItem> Items { get; }

		Dictionary<string, IMergeItem> ItemsById { get; }

		string GraphName { get; }

		bool DropConsumable { get; }

		bool PowerBoostable { get; }

		int DropConsumableFromItemLevel { get; }

		PlayerResourceEnum ConsumableDropResource { get; }

		bool PrioritizeHinting { get; }

		bool DropBubbledItems { get; }

		int DropBubbleItemsFromLevel { get; }

		float BubbledItemPriceMultiplier { get; }

		bool PreventMergeWithAnyItem { get; }

		bool IsInCollectionBook { get; }

		CollectionBookCategoryConfigWeakReference CollectionBookTab { get; }

		int SortOrderInCollectionBook { get; }

		MergeGraphItemType GraphType { get; }

		bool OverrideOriginGraph { get; }

		IMergeGraphItem OriginGraph { get; }

		IMergeGraphItem OverridenOriginGraph { get; set; }

		MergeGraphItemWeakReference OriginGraphReference { get; }

		bool PreventAddToInventory { get; }

		bool IsSpecialChain { get; }

		bool IsGateway { get; }

		string GatewayText { get; }
	}
}
