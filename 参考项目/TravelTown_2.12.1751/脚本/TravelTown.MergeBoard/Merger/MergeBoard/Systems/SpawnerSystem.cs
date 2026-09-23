using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class SpawnerSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}

		public void HandleSpawnByTap(TickContext context)
		{
		}

		public void HandleSpawnByTick(TickContext context, Entity spawnerEntity, SpawnerComponent spawnerComponent, TimeCycleComponent timeCycleComponent, BoardTilePositionComponent spawnerPositionComponent, InteractionComponent interactionComponent)
		{
		}

		public void SpawnItem(TickContext context, Entity entity, BoardTilePositionComponent positionComponent, ref TimeCycleComponent timeCycleComponent, int emptyPosition, ItemSpawnable itemToSpawn)
		{
		}
	}
}
