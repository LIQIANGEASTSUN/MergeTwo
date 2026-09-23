using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using Merger.Rewards.Interfaces;
using Merger.Services.User;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace MergeEngine.Model.Configuration
{
	public class MergingConfigurationModel : ModelBase, IMergingConfigurationModel, IRewardSpriteReferenceProvider
	{
		[Inject]
		[NonSerialized]
		public ILocalMergeItemsConfigurationModel _localMergeItemsConfigurationModel;

		[Inject]
		[NonSerialized]
		public IDynamicMergeItemConfigurationModel _dynamicMergeItemConfigurationModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[NonSerialized]
		public Dictionary<string, IMergeGraphItem> _graphsByMergeItemIdCache;

		[NonSerialized]
		public UniqueIdMultipleConfigurationLookup<IMergeItem> _mergeItemLookup;

		[NonSerialized]
		public UniqueIdMultipleConfigurationLookup<IMergeGraphItem> _graphsLookup;

		public string[] SpriteReferenceRewardTypes => null;

		public ReadOnlyCollection<IMergeGraphItem> Graphs => null;

		public ReadOnlyCollection<IMergeItem> AllItems => null;

		public bool MaxIndicationIgnoreShortChains => false;

		public override void InitializeModel()
		{
		}

		public void GraphLoaded(IMergeGraphItem graph)
		{
		}

		public void GraphsLoaded(IList<IMergeGraphItem> graphs)
		{
		}

		public bool IsItemInProducerChain(IMergeItem item, IMergeItem producer)
		{
			return false;
		}

		public bool TryAddToMergeItemCache(string uniqueId, IMergeGraphItem graph)
		{
			return false;
		}

		public static void SetTrickyProducerItemsTransformOrigins(IEnumerable<IMergeGraphItem> trickyProducerGraphs)
		{
		}

		public static void SetTrickyProducerItemsTransformOrigins(IMergeGraphItem transformedGraph)
		{
		}

		public bool HasGraphById(string graphId)
		{
			return false;
		}

		public virtual IMergeGraphItem GetGraphFor(string id)
		{
			return null;
		}

		public bool TryGetMergeGraphItemFromCache(string id, out IMergeGraphItem graph)
		{
			graph = null;
			return false;
		}

		public bool TryGetGraphFor(string id, out IMergeGraphItem graph)
		{
			graph = null;
			return false;
		}

		public IReadOnlyCollection<IMergeGraphItem> GetGraphsByType(MergeGraphItemType graphType)
		{
			return null;
		}

		public bool HasItemById(string id)
		{
			return false;
		}

		public virtual IMergeItem GetItemById(string id)
		{
			return null;
		}

		public IMergeItem GetItemWithDynamicConfig(string dynamicConfigId)
		{
			return null;
		}

		public IMergeItem GetNextItemOnGraph(IMergeItem item)
		{
			return null;
		}

		public IMergeItem GetNextItemOnGraph(string id)
		{
			return null;
		}

		public IMergeItem GetNextItemOnGraph(string id, int skipNum)
		{
			return null;
		}

		public IMergeItem GetNextItemFromGraph(string itemUniqueId, int boost)
		{
			return null;
		}

		public int GetItemIndexInGraph(IMergeItem mergeItem)
		{
			return 0;
		}

		public bool IsGatewayItem(IMergeItem mergeItem)
		{
			return false;
		}

		public string GetGatewayFloatingTextKey(IMergeItem mergeItem)
		{
			return null;
		}

		public IMergeItem GetPreviousItemFromGraph(string itemUniqueId, int boost)
		{
			return null;
		}

		public IMergeItem GetPreviousItemOnGraph(IMergeItem item)
		{
			return null;
		}

		public IMergeItem GetPreviousItemOnGraph(string id)
		{
			return null;
		}

		public List<IMergeItem> GetAllItemsOnGraphByItemId(string id)
		{
			return null;
		}

		public int GetItemIndex(IMergeItem item)
		{
			return 0;
		}

		public IMergeItem GetMergeItemFromComponent(IComponentBase component)
		{
			return null;
		}

		public IMergeItem GetLastItemInGraph(string mergeGraphId)
		{
			return null;
		}

		public bool IsLastItemInProducerBaseChain(string itemUniqueId, List<string> spawnableIds)
		{
			return false;
		}

		public IMergeGraphItem GetMergeGraphItemFromComponent(IComponentBase component)
		{
			return null;
		}

		public int GetItemLevel(string id)
		{
			return 0;
		}

		public bool IsMaxLevel(string id)
		{
			return false;
		}

		public IMergeGraphItem GetItemOriginGraph(IMergeItem item)
		{
			return null;
		}

		public bool AreItemsInSameGraph(IMergeItem[] items)
		{
			return false;
		}

		public bool AreItemsInSameGraph(IMergeItem item1, IMergeItem item2)
		{
			return false;
		}

		public IMergeGraphItem GetGraph(string graphId)
		{
			return null;
		}

		public MergeConfigurationDependencyInfo BuildRecursiveSpawnInfo(IMergeItem rootItem)
		{
			return null;
		}

		public bool IsPrimaryProducer(string mergeItemUniqueId)
		{
			return false;
		}

		public bool IsPrimaryProducer(IMergeGraphItem graph)
		{
			return false;
		}

		public bool IsItemBoosted(List<string> producerSpawnableIds, string boostedProducedItem, string originalProducedItem)
		{
			return false;
		}

		public bool IsProducedItemFromTooShortChain(string originalProducedItem, List<string> producerSpawnableIds)
		{
			return false;
		}

		public AssetReferenceT<Sprite> GetRewardSpriteReference(string rewardType, string uniqueId)
		{
			return null;
		}

		public ReadOnlyCollection<IMergeItem> GetLocalMergeItems()
		{
			return null;
		}

		public override void DisposeModel()
		{
		}
	}
}
