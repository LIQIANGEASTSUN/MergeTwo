using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class ToolSpawningCapability : CapabilityBase
	{
		public List<WeightedTool> Tools;

		public List<WeightedToolLevel> ToolLevels;
	}
}
