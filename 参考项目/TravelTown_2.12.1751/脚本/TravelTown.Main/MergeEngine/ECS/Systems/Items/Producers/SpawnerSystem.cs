using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using Merger.ProducerExcitement.Compatibility;
using Merger.Services.Backend.WebSocket;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.Producers
{
	public class SpawnerSystem : SpawningItemsSystem<SpawnerComponent>
	{
		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public UndoSellAbuseSystem _undoSellAbuseSystem;

		[Inject]
		[NonSerialized]
		public IProducerExcitementService _producerExcitementService;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override ItemOrigin ItemOrigin => default(ItemOrigin);

		public override IEnumerable<SpawnerComponent> OnWillProcessComponents(ReadOnlyCollection<SpawnerComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(SpawnerComponent spawner)
		{
		}

		public void TryForceSpawn(SpawnerComponent spawner)
		{
		}

		public void TrySpawn(SpawnerComponent spawner, InteractionComponent interaction)
		{
		}

		public void SpawnInternal(SpawnerComponent spawner, BoardItemPosition position, bool forceSpawn)
		{
		}

		public bool IsTileReady(BoardItemPosition position)
		{
			return false;
		}
	}
}
