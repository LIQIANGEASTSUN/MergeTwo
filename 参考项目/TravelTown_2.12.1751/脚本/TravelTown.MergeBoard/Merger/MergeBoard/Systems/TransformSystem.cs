using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Framework.Core.Services.ServerTime;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Analytics.Data;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Utils;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class TransformSystem : ISystem
	{
		public const string TimerReason = "timer";

		public const string TapReason = "tap";

		public const string TimeEndReason = "time_end";

		public const string TimeLimitedReason = "time_limited_conversion";

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IExpendSpawnService _expendSpawnService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		public void Tick(TickContext context)
		{
		}

		public void HandleTransformByInteract(TickContext context, ExpendableComponent expendableComponent, Entity entity, BoardTilePositionComponent positionComponent)
		{
		}

		public void HandleTransformByDuration(TickContext context, ExpendableComponent expendableComponent, Entity entity, BoardTilePositionComponent positionComponent)
		{
		}

		public void TransformTimeLimitedItem(TickContext context, Entity entity, ExpendableComponent expendableComponent, BoardTilePositionComponent positionComponent, ItemAnalyticsData analyticsData)
		{
		}

		public void EmitItemExpiredResult(TickContext context, Entity entity, int position, ItemAnalyticsData analyticsData, string reason, string subReason)
		{
		}
	}
}
