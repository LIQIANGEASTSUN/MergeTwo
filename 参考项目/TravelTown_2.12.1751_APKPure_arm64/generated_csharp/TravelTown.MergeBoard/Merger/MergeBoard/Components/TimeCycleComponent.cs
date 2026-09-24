using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct TimeCycleComponent : IComponent
	{
		public int CycleDelay { get; set; }

		public int SubCycles { get; set; }

		public int SubCycleTime { get; set; }

		public int ItemsPerSubCycle { get; set; }

		public int Capacity { get; set; }

		public bool LimitLifetimeSpawnedItems { get; set; }

		public int LifetimeSpawnedItemsLimit { get; set; }

		public double CycleDelayLeft { get; set; }

		public double SubCycleDelayLeft { get; set; }

		public int CurrentSubCycle { get; set; }

		public int ItemsToProduce { get; set; }

		public int ItemsProducedPerSubCycle { get; set; }

		public TimeCycleState State { get; set; }

		public int TotalNumberOfCycles { get; set; }

		public int TotalSpawnedItemsInLifetime { get; set; }

		public bool ModifiedByStateLoad { get; set; }

		public bool ModifiedBySubCycle { get; set; }

		public bool IsCooldownBlocked { get; set; }

		public bool ExceededLifetimeLimit => false;

		public double TimeLeftForFullCapacity => 0.0;
	}
}
