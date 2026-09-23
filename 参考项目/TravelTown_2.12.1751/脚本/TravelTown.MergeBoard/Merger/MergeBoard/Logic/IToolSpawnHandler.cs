using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Logic
{
	public interface IToolSpawnHandler
	{
		PlayerResourceEnum GraphToResource(IMergeGraphItem graph);

		IMergeGraphItem ResourceToGraph(PlayerResourceEnum resource);

		IMergeItem GetToolToSpawn(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionData, List<WeightedTool> availableToolsToSpawn, List<WeightedToolLevel> toolLevelWeights);

		Dictionary<PlayerResourceEnum, ToolProgressionData> GetToolProgressionData(IEnumerable<string> unlockedItemsOnBoard);

		int CalculateMergeValue(int itemLevel);
	}
}
