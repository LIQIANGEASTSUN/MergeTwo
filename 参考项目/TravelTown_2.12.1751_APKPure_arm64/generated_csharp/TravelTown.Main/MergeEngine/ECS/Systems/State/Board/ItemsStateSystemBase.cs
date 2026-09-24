using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Merger.Services.Backend.WebSocket;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board
{
	public abstract class ItemsStateSystemBase<TLoadable> : StateSystemBase<TLoadable> where TLoadable : BackendState
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergeConfigurationModel;

		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IItemsEntityService ItemsEntityService;

		public abstract void EntitiesRemovalLogic(IComponentBase component);

		public abstract List<IdComponent> GetExistingEntityIds();

		public abstract void ProcessItems(TLoadable itemsState, List<IdComponent> existingEntityIds);

		public override void LoadState(TLoadable newState)
		{
		}

		public void AddNewEntity(Entity entity)
		{
		}

		public void HandleExistingEntities(List<IdComponent> existingEntitiesIds, IEnumerable<ItemPayloadBase> items)
		{
		}

		public bool TryGetEntity(IEnumerable<IdComponent> existingEntityIds, ItemPayloadBase item, MergeItemInstanceConfiguration configuration, out Entity entity)
		{
			entity = null;
			return false;
		}

		public bool TryGetExistingItem(IEnumerable<IdComponent> existingItems, string itemUuid, out IdComponent existingItem)
		{
			existingItem = null;
			return false;
		}

		public ItemsStateSystemBase()
		{
		}
	}
}
