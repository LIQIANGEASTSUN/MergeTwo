using System;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class TimeCycleCapability : CapabilityBase
	{
		public int CycleDelay;

		public int SubCycles;

		public int SubCycleTime;

		public int ItemsPerSubCycle;

		public int Capacity;

		public bool LimitLifetimeSpawnedItems;

		public int LifetimeSpawnedItemsLimit;
	}
}
