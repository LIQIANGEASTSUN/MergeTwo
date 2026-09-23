using System;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class StackingCapability : CapabilityBase
	{
		[JsonProperty("usesAmount")]
		public int StackSize;
	}
}
