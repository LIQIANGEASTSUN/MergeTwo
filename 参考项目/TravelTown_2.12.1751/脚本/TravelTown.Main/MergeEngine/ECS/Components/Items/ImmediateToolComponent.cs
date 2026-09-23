using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.ECS.Components.Items
{
	public class ImmediateToolComponent : ComponentBase<ImmediateToolCapability>
	{
		public bool IsToolbox => false;

		public List<WeightedTool> ToolsWeights => null;

		public List<WeightedToolLevel> ToolLevelsWeights => null;

		public int NumberOfToolsToSpawn => 0;

		public ImmediateToolComponent(ImmediateToolCapability capability, Entity entity)
			: base((ImmediateToolCapability)default(_00210), (Entity)null)
		{
		}
	}
}
