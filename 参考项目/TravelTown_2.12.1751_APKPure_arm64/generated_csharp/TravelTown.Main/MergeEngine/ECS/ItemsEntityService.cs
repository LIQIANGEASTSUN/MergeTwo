using System;
using Framework.Core.Services;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.State;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Zenject;

namespace MergeEngine.ECS
{
	public class ItemsEntityService : ServiceBase, IItemsEntityService
	{
		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		public DateTime ServerDateTime => default(DateTime);

		public double TotalSecondsNow => 0.0;

		public long CurrentServerTimeMS => 0L;

		public void TryLoadSharedItemComponents(Entity entity, ItemPayloadBase item)
		{
		}

		public void TryInitializeTimeLimitedItem(Entity entity, ItemPayloadBase item)
		{
		}

		public bool TryLoadComponent<TComponent, TPayload>(TComponent component, TPayload payload) where TComponent : IRemoteLoadedComponent<TPayload>
		{
			return false;
		}

		public void CalculateBubbleTimeLeft(SerializedLockedComponent lockedComponent)
		{
		}

		public void CalculateUnlockTimeLeft(SerializedTimeLockComponent timeLockComponent)
		{
		}

		public void CalculateCyclesDelay(SerializedItemSpawningComponent itemSpawningComponent)
		{
		}
	}
}
