using System;
using MergeEngine.Model;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public struct WeightedTool
	{
		public int Weight;

		public PlayerResourceEnum ToolResource;
	}
}
