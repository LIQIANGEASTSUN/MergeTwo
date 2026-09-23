using System;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Definitions
{
	public class WeightedItem : IEquatable<WeightedItem>
	{
		[JsonProperty("weight")]
		public int Weight;

		[JsonProperty("item")]
		public MergeItemWeakReference Item;

		public bool Equals(WeightedItem other)
		{
			return false;
		}
	}
}
