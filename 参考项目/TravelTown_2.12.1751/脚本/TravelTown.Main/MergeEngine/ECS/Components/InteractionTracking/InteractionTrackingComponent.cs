using System;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components.InteractionTracking
{
	public class InteractionTrackingComponent : ComponentBase
	{
		[NonSerialized]
		public IMergeItem _spawnerItem;

		[NonSerialized]
		public IMergeItem _spawnedItem;

		public InteractionTrackingData InteractionTrackingData;

		public InteractionTrackingComponent(Entity entity)
			: base(null)
		{
		}

		public bool PrepareData(Func<int, IMergeItem, int> getProduceCost = null)
		{
			return false;
		}

		public int GetInteractionResourceAmountToConsume(Func<int, IMergeItem, int> getProduceCost)
		{
			return 0;
		}

		public void SetSpawnedAndSpawner()
		{
		}

		public void SetSpawner(IMergeItem spawnerItem)
		{
		}

		public void SetSpawned(IMergeItem spawnedItem)
		{
		}

		public void ResetData()
		{
		}
	}
}
