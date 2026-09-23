using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoard.Components
{
	public struct ToolSpawningComponent : IComponent
	{
		public List<WeightedTool> ToolsWeights;

		public List<WeightedToolLevel> ToolLevelsWeights;
	}
}
