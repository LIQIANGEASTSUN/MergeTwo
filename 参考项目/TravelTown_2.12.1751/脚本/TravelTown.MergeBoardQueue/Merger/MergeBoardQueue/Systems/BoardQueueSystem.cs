using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Analytics.Data;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoardQueue.Models;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Zenject;

namespace Merger.MergeBoardQueue.Systems
{
	public class BoardQueueSystem : ISystem
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
		public IBoardQueueModel _boardQueueModel;

		public void Tick(TickContext context)
		{
		}

		public bool TrySpawnEntityFromQueue(TickContext context, string itemName, IMergeItem mergeItem, ItemPayloadBase itemPayload, out Entity entity, out ItemAnalyticsData analyticsData, out int position)
		{
			entity = null;
			analyticsData = null;
			position = default(int);
			return false;
		}

		public bool TryFindEmptyPositionUsingModel(TickContext context, out int emptyPosition)
		{
			emptyPosition = default(int);
			return false;
		}
	}
}
