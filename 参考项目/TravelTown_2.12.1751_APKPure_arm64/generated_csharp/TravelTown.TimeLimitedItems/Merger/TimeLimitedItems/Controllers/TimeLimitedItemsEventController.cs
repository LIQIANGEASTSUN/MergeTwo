using System;
using Merger.LiveOps.Models;
using Merger.RemoteLiveOps.Controllers;
using Merger.RemoteLiveOps.Handlers;
using Merger.RemoteLiveOps.Handlers.AssetsHandling;
using Merger.RemoteLiveOps.Model;
using Merger.TimeLimitedItems.Data;
using Merger.TimeLimitedItems.Handlers;
using Zenject;

namespace Merger.TimeLimitedItems.Controllers
{
	public class TimeLimitedItemsEventController : EventControllerBase<TimeLimitedItemsEventData>
	{
		[Inject]
		[NonSerialized]
		public IEventAssetsHandler _eventAssetsHandler;

		[Inject]
		[NonSerialized]
		public IEventDataHolder<TimeLimitedItemsEventData> _eventDataHolder;

		[Inject]
		[NonSerialized]
		public IEventTriggeredPopupHandler _eventTriggeredPopupHandler;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventStateTrackingModel _liveOpsEventStateTrackingModel;

		[Inject]
		[NonSerialized]
		public ITimeLimitedItemsControllerCleanupHandler _cleanupHandler;

		[NonSerialized]
		public bool _isEndEventInProgress;

		public bool IsEventDataValid => false;

		public bool IsEventTimeExpired => false;

		public bool IsInCompensationPeriod => false;

		public bool IsInCleanupPhase => false;

		public override void OnInitialized()
		{
		}

		public override bool EventReadyForActivation()
		{
			return false;
		}

		public override void StartEvent()
		{
		}

		public override void OnAfterAssetsDownloaded()
		{
		}

		public override void Tick()
		{
		}

		public override void OnDataUpdated()
		{
		}

		public override void EndEvent()
		{
		}

		public void InitiateEndEventProcess()
		{
		}

		public void RegisterPopupTriggers()
		{
		}

		public void EnablePopupTriggers()
		{
		}

		public void UpdatePopupTriggers()
		{
		}

		public void UnregisterPopupTriggers()
		{
		}

		public void DisposeEventInProgress()
		{
		}
	}
}
