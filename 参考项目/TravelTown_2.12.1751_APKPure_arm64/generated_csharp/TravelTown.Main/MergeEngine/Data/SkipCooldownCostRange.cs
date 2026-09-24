using System;
using Newtonsoft.Json;

namespace MergeEngine.Data
{
	[Serializable]
	public class SkipCooldownCostRange
	{
		[JsonProperty("timeLeftThreshold")]
		public float TimeLeftThreshold;

		[JsonProperty("cost")]
		public ResourceCost ResourceCost;
	}
}
