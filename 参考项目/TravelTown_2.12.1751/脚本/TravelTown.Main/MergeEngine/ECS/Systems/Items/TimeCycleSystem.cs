using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Timing;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class TimeCycleSystem : BaseItemSystem<ITimeCycleComponent>
	{
		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public TimeSystem _timeSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public SkipCooldownSystem _skipCooldownSystem;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override SystemPriorities Priority => default(SystemPriorities);

		public List<ITimeCycleComponent> GetUnlockedComponents(IList<ITimeCycleComponent> components)
		{
			return null;
		}

		public override IEnumerable<ITimeCycleComponent> OnWillProcessComponents(ReadOnlyCollection<ITimeCycleComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(ITimeCycleComponent component)
		{
		}

		public void ProcessTimeCheckIfLocked(double seconds, ITimeCycleComponent component)
		{
		}

		public void ProcessTime(double seconds, ITimeCycleComponent component)
		{
		}

		public void ProcessDelay(ITimeCycleComponent component, double seconds)
		{
		}

		public void ProcessCycles(ITimeCycleComponent component, double seconds)
		{
		}

		public bool SkipCooldownEntirely(ITimeCycleComponent component)
		{
			return false;
		}

		public void ProcessCycle(ITimeCycleComponent component, double seconds)
		{
		}

		public void CheckCooldownState(TimeCycleState previousState, TimeCycleState currentState, IMergeItem item, TimeCycleComponentAnalytics analyticParams, ITimeCycleComponent component)
		{
		}
	}
}
