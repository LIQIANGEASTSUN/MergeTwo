using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class ImmediateToolCapability
	{
		public bool IsToolbox { get; set; }

		public List<WeightedTool> ToolsWeights { get; set; }

		public List<WeightedToolLevel> ToolLevelsWeights { get; set; }

		public int NumberOfToolsToSpawn { get; set; }

		public ImmediateToolCapability()
		{
		}

		public ImmediateToolCapability(ToolSpawningCapability toolSpawning, int numberOfToolsToSpawn)
		{
		}
	}
}
