using System;
using Framework.Core.Command;
using Framework.Core.Services.Backend.Remote;
using MergeEngine.ECS.Systems;
using Merger.Game.Model;
using Zenject;

namespace Merger.Game.Command
{
	public abstract class UpdateBoardResourcesStateCommandBase<T> : CommandBase<T>
	{
		[Inject]
		[NonSerialized]
		public IRemoteServerStateUpdaterService _remoteServerStateUpdaterService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		public override void Execute(T signal)
		{
		}

		public UpdateBoardResourcesStateCommandBase()
		{
		}
	}
}
