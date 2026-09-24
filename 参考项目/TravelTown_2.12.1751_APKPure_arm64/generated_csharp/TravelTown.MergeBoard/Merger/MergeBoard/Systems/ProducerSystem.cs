using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.View.Layout;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ProducerSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		public void Tick(TickContext context)
		{
		}

		public void ProduceItemOnInteract(TickContext context)
		{
		}

		public void ProduceItemIfReady(TickContext context)
		{
		}

		public bool TryProduceItem(TickContext context, Entity entity, BoardTilePositionComponent boardTilePositionComponent, ProducerComponent producerComponent, TimeCycleComponent timeCycleComponent, InteractionComponent interactionComponent, int emptyPosition)
		{
			return false;
		}
	}
}
