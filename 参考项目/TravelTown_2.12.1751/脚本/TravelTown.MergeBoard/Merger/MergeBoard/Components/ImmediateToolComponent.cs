using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoard.Components
{
	public struct ImmediateToolComponent : IComponent
	{
		public List<WeightedTool> ToolsWeights { get; set; }

		public List<WeightedToolLevel> ToolLevelsWeights { get; set; }

		public int NumberOfToolsToSpawn { get; set; }

		public bool IsToolbox => false;
	}
}
