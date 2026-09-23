using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.ServerTime;
using MergeEngine.Data;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using MergeEngine.Service.Cards.Models;
using Merger.Boosters.Declarations.Models;
using Merger.ItemSelectionBox.Models;
using Merger.Services.Backend.Sync.Data.Payloads;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Merger.Services.Backend.Sync.Repository;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.Services.Backend.Sync.Implementations
{
	public class SyncBoardService : SyncPayloadServiceBase<SyncBoardPayload>
	{
		[Inject]
		[NonSerialized]
		public IBubbledItemsConfigurationModel _bubbledItemsConfigurationModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public new IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public CardsPackConfigurationModel _cardsPackConfigurationModel;

		[Inject]
		[NonSerialized]
		public ItemSelectionBoxConfigurationModel _itemSelectionBoxConfigurationModel;

		public override string SyncName => null;

		public override void InitializeService()
		{
		}

		public override SyncBoardPayload CreateSyncPayload(BackendSyncEntitiesWrapper backendSyncEntitiesWrapper)
		{
			return null;
		}

		public override IPromise SendSyncRequest(SyncBoardPayload payload, ISyncRepository repository)
		{
			return null;
		}

		public BoardStructure ConstructMainBoard(BackendSyncEntitiesWrapper backendSyncEntitiesWrapper)
		{
			return null;
		}

		public List<BoardItem> ConstructBoardItems(PersistentEntitiesWrapper boardItems)
		{
			return null;
		}

		public void TryAddCooldownEndTimes(ItemPayloadBase item)
		{
		}

		public List<FreeVoucher> ConstructFreeVouchers(string eventId = null)
		{
			return null;
		}

		public int GetFreeBubbleBurstRemains(string eventId = null)
		{
			return 0;
		}

		public int GetCoreFreeBubbleBurst()
		{
			return 0;
		}

		public int GetEventFreeBubbleBurst(string eventId)
		{
			return 0;
		}

		public List<Resource> ConstructPlayerResources(bool isEvent)
		{
			return null;
		}

		public void MapIdComponent(ItemPayloadBase item, SerializedIdComponent idComponent)
		{
		}
	}
}
