using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Logic.CombineValidators;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class FeedingCombinationExtractSystem : ISystem
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

		public void ExtractItemByAction(TickContext context, Entity feedingEntity, string itemId)
		{
		}

		public void ExtractItemByTime(TickContext context, Entity feedingEntity, string itemId, int deadPosition = 0)
		{
		}

		public void HandleExtract(TickContext context, Entity feedingEntity, string itemId, int emptyPosition)
		{
		}

		public FeedingCombinationConsumedItemSnapshot FindConsumedItemSnapshot(Entity feedingEntity, string itemId)
		{
			return null;
		}
	}
}
