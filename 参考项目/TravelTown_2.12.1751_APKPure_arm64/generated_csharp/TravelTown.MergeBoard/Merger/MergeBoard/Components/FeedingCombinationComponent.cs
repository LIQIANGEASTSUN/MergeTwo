using System.Collections.Generic;
using ContextualizedECS;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Components
{
	public struct FeedingCombinationComponent : IComponent
	{
		public List<string> ConsumedItemIds => null;

		public List<FeedingCombinationConsumedItemSnapshot> ConsumedItems { get; set; }
	}
}
