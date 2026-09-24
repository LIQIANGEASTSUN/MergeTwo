using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Remote;
using Framework.Core.Services.Backend.Remote.Payloads;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Booster;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Rewards;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Data.Interfaces;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Models;
using Merger.Boosters.Declarations.Response;
using Merger.Boosters.Declarations.Response.Interfaces;
using Merger.Boosters.Systems;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.PendingRewarders.Responses;
using Merger.Services.Analytics.Boosters.OrderSurpriseBox;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.Boosters.Services
{
	public class BoosterService : ServiceBase, IBoosterService
	{
		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IBoosterRemoteService _boosterRemoteService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IRemoteServerStatesService _remoteServerStatesService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IBoosterController[] _boosterControllers;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public RewardsSystem _rewardsSystem;

		[NonSerialized]
		public BoosterBoardSystem _boosterBoardSystem;

		[NonSerialized]
		public BoosterSystem _boosterSystem;

		[NonSerialized]
		public Dictionary<BoosterType, IBoosterActivationPolicy> _boosterActivationPolicies;

		[NonSerialized]
		public bool _b2BLogToggle;

		[NonSerialized]
		public bool _b2bPossibleFixToggle;

		public const long RedFlagDelay = 10000L;

		public BoardSystem BoardSystem => null;

		public RewardsSystem RewardsSystem => null;

		public BoosterBoardSystem BoosterBoardSystem => null;

		public BoosterSystem BoosterSystem => null;

		public override void InitializeService()
		{
		}

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public void OnGameStarted()
		{
		}

		public void OnCardsSeasonStart()
		{
		}

		public void OnBoardSwitch()
		{
		}

		public void OnPurchaseSucceeded()
		{
		}

		public void OnGameStateChanged(GameState gameState)
		{
		}

		public bool CanProcessBoosters(GameState gameState)
		{
			return false;
		}

		public IPromise<List<RemoteBoosterData>> GetActiveBoosters(bool mustSucceed = false)
		{
			return null;
		}

		public void ProcessBoosters()
		{
		}

		public void ProcessBoosters(List<RemoteBoosterData> boosters)
		{
		}

		public void UpdateRemoteBoosterFromResponse(RemoteBoosterData booster)
		{
		}

		public IPromise<BoosterInteractResponse<TResultData>> InteractWithBooster<TData, TResultData>(string uuId, TData interactionPayload) where TData : IBoosterInteractData where TResultData : IBoosterInteractResponseData
		{
			return null;
		}

		public BoosterAnalyticsData GetActiveBoosterAnalyticsData(string configurationId)
		{
			return null;
		}

		public void BoosterUpdateStatesFromInteractResponse(IBoosterInteractResponseData interactResponseData)
		{
		}

		public void UpdateStatesFromResponse(CollectedRewards collectedRewards, BackendStates states)
		{
		}

		public void RemoveBoosterItemEntity(BoosterIdComponent boosterIdComponent)
		{
		}

		public bool HasAnyBoosterToActivateOnMeta(List<RemoteBoosterData> remoteActiveBoosters)
		{
			return false;
		}

		public bool CanActivateOnMetaScreen(RemoteBoosterData remoteActiveBooster)
		{
			return false;
		}

		public void ForceDeactivateBooster(BoosterIdComponent boosterId)
		{
		}

		public void CheckBoosterDeactivatedRemote(BoosterIdComponent boosterId)
		{
		}

		public void TryDeleteBoosterMergeItem(string boosterUUId)
		{
		}

		public IdComponent GetLinkedMergeItemIdComponent(string uuid)
		{
			return null;
		}

		public override void DisposeService()
		{
		}

		public void OnStateChange(GameState gameState)
		{
		}

		public void TryFindCorruptBoosters(out string uuid, out bool hasIssue)
		{
			uuid = null;
			hasIssue = default(bool);
		}
	}
}
