using System;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Signal;
using Framework.Core.Signal;
using Merger.Game.Data;
using Merger.RemoteSprite.Repository;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.Services
{
	public class BoardConfigService : ServiceBase, IBoardConfigService
	{
		[Inject]
		[NonSerialized]
		public IBoardConfigRepository _boardConfigRepository;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		public BoardConfigResponse BoardConfigResponse { get; set; }

		public int? ImmediateToolsMinLevel => null;

		public int? StackingMinLevel => null;

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public IPromise FetchBoardConfig()
		{
			return null;
		}

		public void OnFetchBackendUpdates(FetchBackendUpdatesSignal signal)
		{
		}

		public void OnGamePause(GamePauseSignal signal)
		{
		}

		public void OnLevelUp()
		{
		}
	}
}
