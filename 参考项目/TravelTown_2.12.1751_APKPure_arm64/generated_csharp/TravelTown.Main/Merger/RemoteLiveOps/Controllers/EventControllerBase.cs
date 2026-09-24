using System;
using System.Collections.Generic;
using Framework.Core;
using Framework.Core.Assets;
using Framework.Core.DataBinding;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Remote;
using Framework.Core.Services.Backend.Remote.Payloads;
using Framework.Core.Services.Firebase;
using Framework.Core.Services.ServerTime;
using Framework.Util.Promises;
using MergeEngine.ECS.Systems;
using MergeEngine.Model;
using Merger.Audio.Configuration;
using Merger.Audio.Models;
using Merger.Game.Model;
using Merger.Game.Views.Icons;
using Merger.RemoteContentManager.Models;
using Merger.RemoteContentManager.Services;
using Merger.RemoteLiveOps.Data;
using Merger.RemoteLiveOps.Data.EventData;
using Merger.RemoteLiveOps.Service;
using Merger.RemoteLiveOps.Signals;
using Merger.TriggerNotifications.Data;
using Newtonsoft.Json.Linq;
using TMPro;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.RemoteLiveOps.Controllers
{
	public abstract class EventControllerBase<TEventData> : Base, IEventController<TEventData>, IEventController where TEventData : RemoteLiveOpData
	{
		[Inject]
		[NonSerialized]
		public IFirebaseService _firebaseService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IAssetManager _assetManager;

		[Inject]
		[NonSerialized]
		public IRemoteLiveOpsService _remoteLiveOpsService;

		[Inject]
		[NonSerialized]
		public IRemoteLiveOpsActivationService _remoteLiveOpsActivationService;

		[Inject]
		[NonSerialized]
		public IRemoteContentService _remoteContentService;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IRemoteServerStatesService _remoteServerStatesService;

		[Inject]
		[NonSerialized]
		public IAudioConfigurationModel _audioConfigurationModel;

		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[Inject]
		[NonSerialized]
		public IRemoteLiveOpSetupService _liveOpSetupService;

		[Inject]
		[NonSerialized]
		public ILiveOpConditionalModel _liveOpConditionalModel;

		[NonSerialized]
		public bool _assetsDownloadCompleted;

		[NonSerialized]
		public Sound _soundConfig;

		[NonSerialized]
		public RemoteContentBundleHandle RemoteContentBundleHandler;

		[NonSerialized]
		public RemoteContentBundleHandle? RemoteBadgesBundleHandler;

		[NonSerialized]
		public AllPromise LoadDependencyPromise;

		[NonSerialized]
		public IPromise ActivationDependencyPromise;

		[NonSerialized]
		public TMP_SpriteAsset _textMeshSpriteOveride;

		[NonSerialized]
		public bool ActivatedThisSession;

		public bool HasRemoteAssets => false;

		public MutableBindableProperty<double> EventTimeLeftSeconds { get; }

		public long CurrentServerTimeMS => 0L;

		public virtual string RemoteBundleName => null;

		public virtual string RemoteBadgesBundleName => null;

		public virtual List<string> EventAssetsKeys { get; }

		public virtual List<string> BadgesBundleAssetsKeys { get; }

		public virtual string TextMeshSpriteOverrideName => null;

		public string EventId { get; set; }

		public TEventData EventData { get; set; }

		public ISystemManager SystemManager => null;

		public IAssetManager AssetManager => null;

		public IRemoteServerStatesService RemoteServerStatesService => null;

		public IRemoteLiveOpsService RemoteLiveOpsService => null;

		public IRemoteLiveOpsActivationService RemoteLiveOpsActivationService => null;

		public IRemoteContentService RemoteContentService => null;

		public IJsonService JsonService => null;

		public IconsSystem IconsSystem => null;

		public BackendStates ActivationStates { get; set; }

		public virtual int IconPriority => 0;

		public virtual string AudioConfigKey => null;

		public IPromise ExternalAssetPromise { get; set; }

		public bool AssetsDownloadCompleted => false;

		public RemoteLiveOpEventState CurrentEventState { get; set; }

		public abstract void StartEvent();

		public abstract void OnDataUpdated();

		public virtual void OnInitialized()
		{
		}

		public virtual void OnEventResumed()
		{
		}

		public virtual void OnAfterAssetsDownloaded()
		{
		}

		public virtual void OnAssetsDownloadFailed()
		{
		}

		public override void SubscribeToSignals()
		{
		}

		public virtual void UpdateRewardsData(TEventData updatedConfig)
		{
		}

		public virtual void TryUpdateRewardsWithActivationData(JObject activationData)
		{
		}

		public virtual void OnDestroy()
		{
		}

		public virtual void EndEvent()
		{
		}

		public void OnCreate(string eventId, TEventData eventData)
		{
		}

		public virtual void OnEventCreated()
		{
		}

		public void AbortEvent(string message)
		{
		}

		public void OnUpdate(TEventData eventData)
		{
		}

		public void TrySetStateToPendingActivation()
		{
		}

		public void OnStatusChanged(RemoteFeatureStatus status)
		{
		}

		public void ActivateOrStartEvent()
		{
		}

		public virtual void ActivateRemoteLiveOpEvent()
		{
		}

		public virtual void SetupRemoteLiveOp()
		{
		}

		public void ActivateEvent()
		{
		}

		public virtual void OnSuccessfulSetup()
		{
		}

		public void InitializeRemoteContentBundleHandler()
		{
		}

		public IPromise DownloadAsset(string assetKey, RemoteContentBundleHandle bundleHandle)
		{
			return null;
		}

		public IPromise DownloadEventAssets()
		{
			return null;
		}

		public void OnRemoteLiveOpConfigUpdatedSignal(RemoteLiveOpConfigUpdatedSignal signal)
		{
		}

		public virtual bool IsSubEvent(string eventId)
		{
			return false;
		}

		public void OnRemoteLiveOpActivatedSignal(RemoteLiveOpActivatedSignal signal)
		{
		}

		public virtual void ApplyStates(bool shouldUpdateBoardItems = false)
		{
		}

		public virtual void OnStatesApplied()
		{
		}

		public void UpdateOnActivationIfNeeded(JObject activationData)
		{
		}

		public virtual void UpdateActivationData(JObject activationData)
		{
		}

		public virtual void OnRemoteLiveOpActivationFailed()
		{
		}

		public void UpdateData(TEventData eventData)
		{
		}

		public void SetActivationDependency()
		{
		}

		public void OnTimePassed(double timePassed)
		{
		}

		public virtual void OnForceRemove(TriggerLiveOpAnalytics triggerLiveOpAnalytics)
		{
		}

		public virtual void Tick()
		{
		}

		public virtual bool EventReadyForActivation()
		{
			return false;
		}

		public virtual void SetEventTimeLeft()
		{
		}

		public void StartEventInternal()
		{
		}

		public virtual IAsset GetIconAsset()
		{
			return null;
		}

		public IconDataContainer CreateIconDataContainer()
		{
			return null;
		}

		public virtual void ShowGenericIcon()
		{
		}

		public virtual TimedIconData CreateIconData()
		{
			return null;
		}

		public void ToggleIcon(bool displayIcon)
		{
		}

		public void LateCreate()
		{
		}

		public void TryAddTmpSpriteOverride()
		{
		}

		public void TryUnloadTmpSpriteOverride()
		{
		}

		public void LoadSoundConfig()
		{
		}

		public void UnloadSoundConfig()
		{
		}

		public EventControllerBase()
		{
		}
	}
}
