namespace MergeEngine.ECS.Components.Items.Producers
{
	public interface ITimeCycleComponent : IComponentBase
	{
		int ItemsPerSubCycle { get; }

		int SubCycleTime { get; }

		int SubCycles { get; }

		int CycleDelay { get; }

		double CycleDelayLeft { get; set; }

		double SubCycleDelayLeft { get; set; }

		int CurrentSubCycle { get; set; }

		int ItemsToProduce { get; set; }

		int ItemsProducedPerSubCycle { get; set; }

		int Capacity { get; }

		TimeCycleState State { get; set; }

		int TotalNumberOfCycles { get; set; }

		bool ExceededLifetimeLimit { get; }

		int TotalSpawnedItemsInLifetime { get; set; }

		bool ModifiedByStateLoad { get; set; }

		bool ModifiedBySubCycle { get; set; }

		bool IsCooldownBlocked { get; set; }
	}
}
