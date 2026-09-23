using System;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class MergeCapability : CapabilityBase
	{
		public MergeType MergeType;

		public string SpecificMergeItem;
	}
}
