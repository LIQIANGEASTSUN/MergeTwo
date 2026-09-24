using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS;
using Merger.Boosters.Declarations.Data;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Models;
using Zenject;

namespace Merger.Boosters.Implementations
{
	public class BoosterActivator : IBoosterActivator, IInitializable
	{
		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IBoosterRemoteService _boosterRemoteService;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IBoosterController[] _controllers;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject(Optional = true)]
		[NonSerialized]
		public IRemoteServerStateUpdaterService _stateUpdaterService;

		[NonSerialized]
		public Dictionary<BoosterType, IBoosterActivationPolicy> _boosterActivationPolicies;

		public bool CanActivateBooster(IBoosterItem booster, string uuId)
		{
			return false;
		}

		public void ActivateBooster(string Uuid, BoosterActivationData payload)
		{
		}

		public void SendBoosterActivation(string Uuid, BoosterActivationData payload)
		{
		}

		public void BoosterActivated(RemoteBoosterData remoteActiveBooster)
		{
		}

		public void Initialize()
		{
		}
	}
}
