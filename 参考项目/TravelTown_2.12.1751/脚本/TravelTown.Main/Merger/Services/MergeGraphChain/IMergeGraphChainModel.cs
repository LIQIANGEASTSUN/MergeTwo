using System.Collections.Generic;
using MergeEngine.Configuration;
using Merger.Game.Views.Components;

namespace Merger.Services.MergeGraphChain
{
	public interface IMergeGraphChainModel
	{
		IReadOnlyCollection<IMergeGraphItem> GetMergeGraphChain(IMergeItem selectedItem);

		int GetMergeGraphLevel(IMergeGraphItem graph);

		bool IsChainValid(List<IMergeGraphItem> chain);

		List<IMergeItem> GetConsumables(IMergeGraphItem graph, IMergeItem selectedItem);

		IMergeItem GetCurrentMergeItemInGraph(IMergeGraphItem graph);

		List<MergeChainCell> GetFilteredMergeChain(List<IMergeGraphItem> mergeGraphItemChain, IMergeItem selectedItem);

		bool IsMergeItemAtMaxLevel(IMergeItem mergeItem);

		List<IMergeGraphItem> GetConsumablesForChain(IMergeItem item);

		List<IMergeGraphItem> GetChainWithConsumables(IMergeItem item);
	}
}
