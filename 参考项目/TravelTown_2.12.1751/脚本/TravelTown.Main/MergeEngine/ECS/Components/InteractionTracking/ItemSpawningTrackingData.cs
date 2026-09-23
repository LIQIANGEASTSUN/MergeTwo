using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items.Producers;

namespace MergeEngine.ECS.Components.InteractionTracking
{
	public class ItemSpawningTrackingData
	{
		public int ProducerCapacity;

		public int NumberOfSubcycles;

		public int ProducerCycleCooldown;

		public int ProducerSubcycleCooldown;

		public int CurrentCycle;

		public int CurrentSubcycle;

		public int CurrentCapacity;

		public string InteractionCostItems;

		public string UiType;

		public IMergeItem SpawnerItem;

		public IMergeItem SpawnedItem;

		public int? LifetimeSpawnedLeft;

		public double TimeLeft;

		public LowLevelProduceTrackingData LowLevelProduceData;

		public int? SetLifeTime(IMergeItem spawnerItem, IItemSpawningComponent itemSpawningComponent)
		{
			return null;
		}

		public int GetRemainingItemsInSubCycle(IItemSpawningComponent producer)
		{
			return 0;
		}
	}
}
