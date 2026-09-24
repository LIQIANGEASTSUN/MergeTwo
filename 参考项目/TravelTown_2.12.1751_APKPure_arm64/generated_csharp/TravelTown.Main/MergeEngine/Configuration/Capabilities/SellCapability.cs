using System;
using MergeEngine.Model;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class SellCapability : CapabilityBase
	{
		public PlayerResourceEnum Resource;

		public int Amount;

		public int MinLevel;
	}
}
