using System.Collections.Generic;
using System.Collections.ObjectModel;
using JetBrains.Annotations;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Model.Configuration
{
	public interface IMergingConfigurationModel
	{
		ReadOnlyCollection<IMergeGraphItem> Graphs { get; }

		ReadOnlyCollection<IMergeItem> AllItems { get; }

		bool HasGraphById(string graphId);

		bool TryGetGraphFor(string id, out IMergeGraphItem graph);

		IMergeGraphItem GetGraphFor(string id);

		IMergeGraphItem GetGraph(string graphId);

		ReadOnlyCollection<IMergeItem> GetLocalMergeItems();

		IReadOnlyCollection<IMergeGraphItem> GetGraphsByType(MergeGraphItemType graphType);

		bool HasItemById(string id);

		IMergeItem GetItemById(string id);

		IMergeItem GetItemWithDynamicConfig(string dynamicConfigId);

		IMergeItem GetNextItemOnGraph(IMergeItem item);

		IMergeItem GetPreviousItemFromGraph(string itemUniqueId, int boost);

		IMergeItem GetNextItemOnGraph(string id);

		IMergeItem GetNextItemOnGraph(string id, int skipNum);

		IMergeItem GetNextItemFromGraph(string itemUniqueId, int boost);

		IMergeItem GetPreviousItemOnGraph(IMergeItem item);

		IMergeItem GetPreviousItemOnGraph(string id);

		List<IMergeItem> GetAllItemsOnGraphByItemId(string id);

		int GetItemIndex(IMergeItem item);

		IMergeItem GetMergeItemFromComponent(IComponentBase component);

		IMergeItem GetLastItemInGraph(string mergeGraphId);

		bool IsLastItemInProducerBaseChain(string itemUniqueId, List<string> spawnableIds);

		IMergeGraphItem GetMergeGraphItemFromComponent(IComponentBase component);

		bool IsItemInProducerChain(IMergeItem item, IMergeItem producer);

		int GetItemLevel(string id);

		bool IsMaxLevel(string id);

		IMergeGraphItem GetItemOriginGraph(IMergeItem item);

		bool AreItemsInSameGraph([NotNull] IMergeItem[] items);

		bool AreItemsInSameGraph(IMergeItem item1, IMergeItem item2);

		MergeConfigurationDependencyInfo BuildRecursiveSpawnInfo(IMergeItem item);

		bool IsPrimaryProducer(string mergeItemUniqueId);

		bool IsPrimaryProducer(IMergeGraphItem mergeItemUniqueId);

		bool IsItemBoosted(List<string> producerSpawnableIds, string boostedProducedItem, string originalProducedItem);

		int GetItemIndexInGraph(IMergeItem mergeItem);

		bool IsGatewayItem(IMergeItem mergeItem);

		string GetGatewayFloatingTextKey(IMergeItem mergeItem);
	}
}
