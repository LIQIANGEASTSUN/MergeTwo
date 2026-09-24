using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Logic.CombineValidators;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class FeedingCombinationFeedSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public FeedingItemCombinerValidator _feedingItemCombinerValidator;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IFeedingCombinationConsumedItemSnapshotFactory _feedingCombinationConsumedItemSnapshotFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}

		public void TryFeedItem(TickContext context)
		{
		}

		public void FeedItem((Entity entity, BoardTilePositionComponent positionComp, FeedingCombinationComponent feedingCombinationComponent, IdComponent idComponent, InteractionComponent interactionComponent, ProducerComponent producerComponent, TimeCycleComponent timeCycleComponent) feedingCombinationsEntity, (Entity entity, BoardTilePositionComponent positionComp, ItemMovedComponent itemMovedComponent, IdComponent idComponent) consumedEntity, TickContext context)
		{
		}

		public void CheckForFedProducers(TickContext context)
		{
		}
	}
}
