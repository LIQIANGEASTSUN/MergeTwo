using System;
using Framework.Odin;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class TimeDurationCapability : CapabilityBase
	{
		[TimeDuration]
		[JsonProperty("duration")]
		public double Duration;
	}
}
