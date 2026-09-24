using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ToolSpawningSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IToolSpawnHandler _toolSpawnHandler;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}

		public void SpawnTool(TickContext context, int emptyPosition, (Entity entity, BoardTilePositionComponent boardTilePosition, ToolSpawningComponent toolSpawningComponent, PendingInteractionComponent pendingInteraction, InteractionComponent interactionComponent) selectedEntity)
		{
		}
	}
}
