using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Components.Tasks;
using MergeEngine.ECS.Systems.Orders;
using MergeEngine.ECS.Systems.RNG;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.ProducerExcitement.Compatibility;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.SpecialChainEvent.ECS.Systems;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.Producers
{
	public class ProduceSystem : SpawningItemsSystem<ProducerComponent>
	{
		[Inject]
		[NonSerialized]
		public new INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public OrdersSystem _ordersSystem;

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
		public TasksComponent _tasksComponent;

		[InjectSystem]
		[NonSerialized]
		public RngSpawnSystem _rngSpawnSystem;

		[Inject]
		[NonSerialized]
		public IProducerExcitementService _producerExcitementService;

		public Action<IMergeItem> ItemProduced;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override ItemOrigin ItemOrigin => default(ItemOrigin);

		public IEnumerable<ProducerComponent> OrderProducers(List<ProducerComponent> producers)
		{
			return null;
		}

		public override IEnumerable<ProducerComponent> OnWillProcessComponents(ReadOnlyCollection<ProducerComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(ProducerComponent producer)
		{
		}

		public bool CanCompleteOrder(ProducerComponent producer)
		{
			return false;
		}

		public void TryProduce(ProducerComponent producer)
		{
		}

		public bool ShouldProduceRngItem(InteractionComponent interactionComponent)
		{
			return false;
		}

		public void FireAnalyticsSignal(ProducerComponent producer, IMergeItem item, string spawnedItemUniqueId, int emptyPositionCount)
		{
		}
	}
}
