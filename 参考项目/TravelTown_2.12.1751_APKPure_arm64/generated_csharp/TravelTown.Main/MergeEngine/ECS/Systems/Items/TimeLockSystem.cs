using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Timing;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Game.Signal;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class TimeLockSystem : TickableSystem<TimeLockComponent>
	{
		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[NonSerialized]
		public TimeSystem _timeSystem;

		public static readonly TimeLockGroup[] SingleUnlockTimeLockGroups;

		[NonSerialized]
		public Dictionary<TimeLockGroup, List<TimeLockComponent>> _timeLocksPerGroup;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void CompleteUnlocking(TimeLockComponent timeLockComponent)
		{
		}

		public void UnlockTimeLockSignalFired(UnlockTimeLockSignal signal)
		{
		}

		public void StartUnlocking(TimeLockComponent timeLockComponent)
		{
		}

		public override void ProcessComponents(ReadOnlyCollection<TimeLockComponent> components)
		{
		}

		public void HandleMergeState(TimeLockComponent timeLockComponent)
		{
		}

		public bool AreItemsInGroupBeingUnlocked(TimeLockComponent timeLockComponent)
		{
			return false;
		}

		public void ProcessCountdown(TimeLockComponent timeLockComponent)
		{
		}

		public void UpdateCanUnlockStatus(TimeLockComponent timeLockComponent)
		{
		}

		public void FireUnlockStateSignal(TimeLockComponent timeLockComponent, bool isStarted)
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}
	}
}
