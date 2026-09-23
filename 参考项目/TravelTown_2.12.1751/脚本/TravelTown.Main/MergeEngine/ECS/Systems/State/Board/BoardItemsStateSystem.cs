using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board
{
	public class BoardItemsStateSystem<TState> : ItemsStateSystemBase<TState> where TState : BoardItems
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		public override void EntitiesRemovalLogic(IComponentBase component)
		{
		}

		public override List<IdComponent> GetExistingEntityIds()
		{
			return null;
		}

		public override void ProcessItems(TState boardItems, List<IdComponent> existingEntityIds)
		{
		}

		public Entity ProcessItem(ItemPayloadBase item, List<IdComponent> existingEntityIds = null, bool transitionInDisabled = false)
		{
			return null;
		}

		public void UpdateTimeLockCapacityState(Entity entity)
		{
		}

		public List<Entity> HandleDuplicatedEntityPositions(List<PositionComponent> positionedItems)
		{
			return null;
		}

		public void ValidateTimeCycleComponent(Entity entity)
		{
		}
	}
}
