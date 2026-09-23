using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Data;
using Framework.Core.Services.Backend.Remote;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.Rewards;
using MergeEngine.ECS.Util;
using MergeEngine.Model.RemoteSpawning;
using Merger.GenericAccumulationEvent.Data;
using Merger.LiveOps.Events.ECS.System;
using Merger.Services.Backend.WebSocket.Interfaces;
using Zenject;

namespace MergeEngine.ECS.Systems.RNG
{
	public class RngProgressSystem : SystemBase, IChannelListener
	{
		[Inject]
		[NonSerialized]
		public IWebSocketChannelObservable _webSocketChannelObservable;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IRemoteServerStatesService _remoteServerStatesService;

		[InjectSystem]
		[NonSerialized]
		public RewardsSystem _rewardsSystem;

		[InjectSystem]
		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		[Inject]
		[NonSerialized]
		public IPushedRngItemsModel _pushedRngItemsModel;

		[NonSerialized]
		public readonly Dictionary<string, RngProgressContext> progressContexts;

		public string ChannelName => null;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void RegisterProgress(RngProgressContext context)
		{
		}

		public void UnregisterProgress(string eventId)
		{
		}

		public void HandleMessage(BackendMessageNotification webMessage)
		{
		}

		public static void AccumulatePendingRewards(IAccumulationProgressMessage progressMessage, Reward collectedRewards, RewardOrigin rewardOrigin)
		{
		}

		public bool IsValidProgressMessage(IAccumulationProgressMessage progressMessage)
		{
			return false;
		}

		public void UpdatePendingRewards(IAccumulationProgressMessage progressMessage)
		{
		}

		public bool IsBoardEventRNGValid(string boardEventID)
		{
			return false;
		}
	}
}
