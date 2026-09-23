using System;
using MergeEngine.Model;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class CollectCapability : CapabilityBase
	{
		public PlayerResourceEnum Resource;

		public int Amount;

		public bool CollectWhenDroppedOnInventory;
	}
}
