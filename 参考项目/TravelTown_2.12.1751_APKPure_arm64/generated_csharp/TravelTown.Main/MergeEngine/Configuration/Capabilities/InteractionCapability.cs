using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class InteractionCapability
	{
		public bool InteractionCostResource;

		public bool InteractionCostsItems;

		public PlayerResourceEnum ResourceToConsume;

		public int ResourceAmountToConsume;

		public ItemConsumeMode ItemsConsumeMode;

		public ItemMultiple[] ItemsToConsume;

		[JsonProperty("combinations")]
		public List<Combination> Combinations;

		public bool Enabled => false;
	}
}
