using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model.Configuration;
using MergeEngine.Util;
using Merger.MergeBoard.Components;
using Merger.PowerBoost.Providers;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Utils
{
	public static class SpawningItemsUtils
	{
		public static ItemSpawnable GetItemToSpawn(Entity entity, SpawnerComponent spawnerComponent, TimeCycleComponent timeCycleComponent, InteractionComponent interactionComponent)
		{
			return null;
		}

		public static ItemSpawnable GetItemToProduce(Entity entity, ProducerComponent producerComponent, TimeCycleComponent timeCycleComponent, InteractionComponent interactionComponent, IMergingConfigurationModel mergingConfigurationModel, IPowerBoostDataProvider powerBoostDataProvider)
		{
			return null;
		}

		public static ItemSpawnable GetItemFromQueue(ItemSpawningQueue itemsQueue, InteractionComponent interactionComponent, List<ItemPayloadBase> consumedItems = null)
		{
			return null;
		}

		public static void DecrementItemsToProduce(ref TimeCycleComponent timeCycle, Entity entity)
		{
		}

		public static ItemSpawnable TryReplaceWithBoosted(ItemSpawnable itemToProduce, Entity entity, ItemsSpawningCapability itemsSpawningCapability, IMergingConfigurationModel mergingConfigurationModel, IPowerBoostDataProvider powerBoostDataProvider)
		{
			return null;
		}
	}
}
