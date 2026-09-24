using System;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class OrderSpawnCapability : CapabilityBase
	{
		[JsonProperty("orderGraphTreeReference")]
		public string OrderTreeId { get; set; }
	}
}
