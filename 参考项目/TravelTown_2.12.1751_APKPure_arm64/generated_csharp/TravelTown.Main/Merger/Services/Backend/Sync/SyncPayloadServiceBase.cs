using System;
using Framework.Core.Services;
using MergeEngine.Model;
using Merger.Game.Model;
using Merger.Services.Backend.Sync.Repository;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.Services.Backend.Sync
{
	public abstract class SyncPayloadServiceBase<TPayload> : ServiceBase, ISyncPayloadService
	{
		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public ISyncRepository _syncRepository;

		[Inject]
		[NonSerialized]
		public ICheatsSyncRepository _cheatsSyncRepository;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		public IJsonService JsonService => null;

		public abstract string SyncName { get; }

		public bool GameStarted => false;

		public abstract TPayload CreateSyncPayload(BackendSyncEntitiesWrapper backendSyncEntitiesWrapper);

		public abstract IPromise SendSyncRequest(TPayload payload, ISyncRepository repository);

		public virtual IPromise HandleSyncRequest(BackendSyncEntitiesWrapper backendSyncEntitiesWrapper, bool sendAsCheat)
		{
			return null;
		}

		public int GetResourceValue(PlayerResourceEnum resource)
		{
			return 0;
		}

		public SyncPayloadServiceBase()
		{
		}
	}
}
