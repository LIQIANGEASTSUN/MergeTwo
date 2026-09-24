using System;
using Newtonsoft.Json;

namespace MergeEngine.Data
{
	[Serializable]
	public class SkipCooldownSettings
	{
		[JsonProperty("showTimeLeft")]
		public bool ShowTimeLeft;

		[JsonProperty("costRanges")]
		public SkipCooldownCostRange[] CostRanges;
	}
}
