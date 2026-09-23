using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class Combination
	{
		[JsonIgnore]
		[NonSerialized]
		public string _id;

		[JsonIgnore]
		[NonSerialized]
		public List<string> _itemsToConsumeIDs;

		[JsonProperty("itemsToConsume")]
		public List<MergeItemWeakReference> ItemsToConsume;

		[JsonProperty("itemsToProduce")]
		public List<WeightedItem> ItemsToProduce;

		[JsonIgnore]
		public string ID => null;

		[JsonIgnore]
		public List<string> ItemsToConsumeIDs => null;

		public override string ToString()
		{
			return null;
		}
	}
}
