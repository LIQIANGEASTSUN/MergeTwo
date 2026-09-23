using System;
using System.Collections.Generic;
using Framework.Core.Services;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Views.Components;
using Zenject;

namespace Merger.Services.MergeGraphChain
{
	public class MergeGraphChainModel : ServiceBase, IMergeGraphChainModel
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPlayerItemsCollectionModel _itemsCollectionModel;

		public const int ShowMergeChainThreshold = 1;

		public IMergeItem GetCurrentMergeItemInGraph(IMergeGraphItem graph)
		{
			return null;
		}

		public IReadOnlyCollection<IMergeGraphItem> GetMergeGraphChain(IMergeItem selectedItem)
		{
			return null;
		}

		public IReadOnlyCollection<MergeChainCell> GetMergeGraphChain1(IMergeItem selectedItem)
		{
			return null;
		}

		public int GetMergeGraphLevel(IMergeGraphItem graph)
		{
			return 0;
		}

		public bool IsChainValid(List<IMergeGraphItem> chain)
		{
			return false;
		}

		public bool ConsumablesEqual(IMergeGraphItem first, IMergeGraphItem second, IMergeItem selectedItem)
		{
			return false;
		}

		public List<IMergeItem> GetConsumables(IMergeGraphItem graph, IMergeItem selectedItem)
		{
			return null;
		}

		public List<IMergeItem> GetConsumablesIncludingCombinations(IMergeGraphItem graph, bool useMaxLevel = false)
		{
			return null;
		}

		public IEnumerable<IMergeGraphItem> FilterMergeChainExcludingSelectedItem(List<IMergeGraphItem> chain, IMergeItem selectedItem)
		{
			return null;
		}

		public List<MergeChainCell> GetFilteredMergeChain(List<IMergeGraphItem> mergeGraphItemChain, IMergeItem selectedItem)
		{
			return null;
		}

		public bool IsMergeItemAtMaxLevel(IMergeItem mergeItem)
		{
			return false;
		}

		public List<IMergeGraphItem> GetConsumablesForChain(IMergeItem item)
		{
			return null;
		}

		public List<IMergeGraphItem> GetChainWithConsumables(IMergeItem item)
		{
			return null;
		}

		public bool IsCollected(IMergeItem mergeItem)
		{
			return false;
		}

		public IReadOnlyCollection<IMergeGraphItem> DepthFirstSearch(IMergeGraphItem rootGraph, IMergeItem selectedItem)
		{
			return null;
		}

		public IReadOnlyCollection<IMergeGraphItem> GetChildren(IMergeGraphItem graph, ICollection<IMergeGraphItem> visitedGraphs)
		{
			return null;
		}

		public List<IMergeItem> GetChildrenMergeItems(List<IMergeItem> graphItems)
		{
			return null;
		}

		public void ManagePathStack(Stack<IMergeGraphItem> pathStack, ICollection<IMergeGraphItem> visitedGraphs)
		{
		}

		public bool PathStackRemovalCondition(IMergeGraphItem graphItem, ICollection<IMergeGraphItem> visitedGraphs)
		{
			return false;
		}
	}
}
