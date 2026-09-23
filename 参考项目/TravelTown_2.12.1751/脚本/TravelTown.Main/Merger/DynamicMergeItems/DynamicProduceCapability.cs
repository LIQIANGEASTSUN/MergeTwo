using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using Newtonsoft.Json;

namespace Merger.DynamicMergeItems
{
	[Serializable]
	public class DynamicProduceCapability
	{
		[JsonProperty("fixedItems")]
		public List<FixedItemSpawnable> FixedItems;

		[JsonProperty("itemsPerSubCycle")]
		public int ItemsPerSubCycle;

		[JsonProperty("capacity")]
		public int Capacity;
	}
}
