using System.Collections.Generic;
using MergeEngine.Configuration;

namespace MergeEngine.Model.Configuration
{
	public class MergeConfigurationDependencyInfo
	{
		public IMergeItem item;

		public HashSet<IMergeGraphItem> dependentGraphs;

		public HashSet<IMergeItem> dependentItems;
	}
}
