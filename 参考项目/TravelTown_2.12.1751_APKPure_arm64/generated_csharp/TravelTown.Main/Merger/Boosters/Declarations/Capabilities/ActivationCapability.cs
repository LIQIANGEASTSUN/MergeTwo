using System;
using MergeEngine.Configuration.Capabilities;
using Merger.Boosters.Declarations.Enums;
using Newtonsoft.Json;

namespace Merger.Boosters.Declarations.Capabilities
{
	[Serializable]
	public class ActivationCapability : CapabilityBase
	{
		[JsonProperty("boosterType")]
		public BoosterType BoosterType;
	}
}
