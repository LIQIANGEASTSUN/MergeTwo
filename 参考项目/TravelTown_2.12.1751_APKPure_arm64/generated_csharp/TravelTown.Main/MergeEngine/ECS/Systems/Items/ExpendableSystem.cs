using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.SpecialChainEvent.ECS.Systems;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class ExpendableSystem : BaseItemSystem<ExpendableComponent>
	{
		public const string TapReason = "tap";

		public const string TimerReason = "timer";

		[Inject]
		[NonSerialized]
		public IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public SpecialChainSequenceSystem _specialChainSequenceSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		public long CurrentServerTimeMS => 0L;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override IEnumerable<ExpendableComponent> OnWillProcessComponents(ReadOnlyCollection<ExpendableComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(ExpendableComponent expendableComponent)
		{
		}

		public void TrySpawnItems(ExpendableComponent expendableComponent, InteractionComponent interactionComponent, PositionComponent positionComponent, OperationContext operationContext, bool transformTimeLimited = false)
		{
		}

		public void TrySpawnParticles(ExpendableComponent expendableComponent, InteractionComponent interactionComponent, PositionComponent positionComponent)
		{
		}

		public bool CanExpend(ExpendableComponent expendableComponent, PositionComponent positionComponent)
		{
			return false;
		}

		public void SpawnItems(ExpendableComponent expendable, bool isTransformationByReason, string reason, int numItemsToSpawn, Func<BoardItemPosition> getPositionFunc, ItemOrigin itemOrigin, OperationContext operationContext, bool shouldHideTransformedItems, bool transformTimeLimited = false)
		{
		}

		public void SpawnItems(ExpendableComponent expendable, IList<EmptiableWeightedItemSpawnable> itemSpawnables, int numItemsToSpawn, Func<BoardItemPosition> getPositionFunc, ItemOrigin itemOrigin, OperationContext operationContext, bool transformTimeLimited = false)
		{
		}

		public void SpawnItem(WeightedItemSpawnable itemSpawnable, ExpendableComponent expendable, Func<BoardItemPosition> getPositionFunc, ItemOrigin itemOrigin, OperationContext operationContext, bool shouldHideTransformedItems, bool transformTimeLimited = false)
		{
		}

		public void TryTransformItem(ExpendableComponent expendableComponent, OperationContext operationContext, string reason, bool shouldHideTransformedItems, CombiningComponent combiningComponent = null, bool transformTimeLimited = false)
		{
		}

		public void SetExpendableTrackingData(ItemOrigin itemOrigin, WeightedItemSpawnable itemSpawnable, ExpendableComponent expendable)
		{
		}

		public void SetExpendableTrackingDataWithoutSpawn(ExpendableComponent expendable)
		{
		}

		public void UpdateProducersCreatedTimestamp(ExpendableComponent expandable, Entity spawnable)
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public void TransformTimeLimitedItem(ExpendableComponent expendableComponent, TimeLimitedActivationComponent timeLimitedComponent)
		{
		}

		public void SetTimeLimitedExtraData(TimeLimitedActivationComponent timeLimitedComponent, ExpendableComponent expendableComponent)
		{
		}
	}
}
