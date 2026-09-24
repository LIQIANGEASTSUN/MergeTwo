using System;
using System.Collections.Generic;
using MergeEngine.ECS.Systems;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Models;
using Merger.Boosters.Systems;
using Merger.RemoteContentManager.Services;
using Zenject;

namespace Merger.Boosters.Controllers
{
	public class JokerCardBoosterController : IBoosterController
	{
		[Inject]
		[NonSerialized]
		public IRemoteContentService _remoteContentService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[NonSerialized]
		public BoosterBoardSystem _boosterBoardSystem;

		public BoosterBoardSystem BoosterBoardSystem => null;

		public BoosterType Type => default(BoosterType);

		public void Process(List<RemoteBoosterData> boosters)
		{
		}

		public void BoosterActivated(RemoteBoosterData activeBooster)
		{
		}

		public void BoosterExpired(string uuid)
		{
		}

		public bool CanActivateOnMetaScreen(RemoteBoosterData remoteActiveBooster)
		{
			return false;
		}
	}
}
