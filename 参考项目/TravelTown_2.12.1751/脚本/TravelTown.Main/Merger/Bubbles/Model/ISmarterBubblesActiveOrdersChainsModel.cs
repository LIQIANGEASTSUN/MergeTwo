using System.Collections.Generic;
using MergeEngine.Configuration;

namespace Merger.Bubbles.Model
{
	public interface ISmarterBubblesActiveOrdersChainsModel
	{
		HashSet<IMergeGraphItem> GetRelatedGraphs(IMergeItem objectiveItem);
	}
}
