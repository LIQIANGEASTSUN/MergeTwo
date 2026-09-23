using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;

namespace Merger.MergeBoard.Components
{
	public struct InteractionComponent : IComponent
	{
		public bool InteractionCostsResource;

		public PlayerResourceEnum ResourceToConsume;

		public int ResourceAmountToConsume;

		public List<Combination> Combinations;

		public bool InteractionCostsItems;

		public ItemMultiple[] ItemsToConsume;

		public string[] ItemsToConsumeIds => null;
	}
}
