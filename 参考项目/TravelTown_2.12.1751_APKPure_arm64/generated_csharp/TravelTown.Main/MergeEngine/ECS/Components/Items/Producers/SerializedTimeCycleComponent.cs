using System;

namespace MergeEngine.ECS.Components.Items.Producers
{
	[Serializable]
	public class SerializedTimeCycleComponent
	{
		public long CooldownEndTime;

		public long CycleCooldownEndTime;

		public double CycleDelayLeft;

		public double SubCycleDelayLeft;

		public int CurrentSubCycle;

		public int ItemsToProduce;

		public int ItemsProducedPerSubCycle;

		public int TotalNumberOfCycles;

		public int TotalSpawnedItemsInLifetime;

		public bool IsCooldownBlocked;
	}
}
