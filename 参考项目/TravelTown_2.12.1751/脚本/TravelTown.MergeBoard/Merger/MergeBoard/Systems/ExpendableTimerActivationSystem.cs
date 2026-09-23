using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Framework.Core.Services.ServerTime;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Analytics.Models;
using Merger.MergeBoard.Components;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ExpendableTimerActivationSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IItemAnalyticsDataModel _analyticsDataModel;

		public long CurrentServerTimeMS => 0L;

		public void Tick(TickContext context)
		{
		}

		public void HandleFirstTimeProduceTrigger(TickContext context)
		{
		}

		public void HandleCreatedTrigger(TickContext context)
		{
		}

		public void ActivateTimer(Entity entity, TimeDurationComponent timeDurationComponent, TimeLimitedActivationComponent timeLimitedActivationComponent, ExpendableComponent expendableComponent, string triggerReason)
		{
		}

		public void SaveAnalyticSessionData(Entity entity, ExpendableComponent expendableComponent, string triggerReason)
		{
		}
	}
}
