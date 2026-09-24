using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.ECS.Components.Items
{
	public class ToolSpawningComponent : ComponentBase<ToolSpawningCapability>
	{
		public readonly List<WeightedTool> ToolsWeights;

		public readonly List<WeightedToolLevel> ToolLevelsWeights;

		public ToolSpawningComponent(ToolSpawningCapability capability, Entity entity)
			: base((ToolSpawningCapability)default(_00210), (Entity)null)
		{
		}
	}
}
