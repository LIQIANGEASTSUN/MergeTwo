using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using MergeEngine.Model.RemoteSpawning;
using Merger.Game.Model;
using Merger.PowerBoost;
using Merger.ProducerExcitement.Compatibility;
using Merger.Services;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.Producers
{
	public abstract class SpawningItemsSystem<T> : BaseItemSystem<T> where T : ComponentBase, IItemSpawningComponent
	{
		[Inject]
		[NonSerialized]
		public IRandomNumberModel RandomNumberModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel MergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[InjectComponent]
		[NonSerialized]
		public BoardComponent BoardComponent;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		[InjectSystem]
		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		[Inject]
		[NonSerialized]
		public IRemoteSpawningModel _remoteSpawningModel;

		[Inject]
		[NonSerialized]
		public IBoardConfigService _boardConfigService;

		[Inject]
		[NonSerialized]
		public List<ILowLevelProduceStrategy> _produceStrategies;

		[NonSerialized]
		public BoardSystem BoardSystem;

		public abstract ItemOrigin ItemOrigin { get; }

		public bool IsRemoteSpawning => false;

		public override void InitializeSystem()
		{
		}

		public List<TComponent> GetUnlockedComponents<TComponent>(IList<TComponent> components) where TComponent : IComponentBase
		{
			return null;
		}

		public void RefillQueueFor(IItemSpawningComponent itemSpawningComponent, List<Combination> combinations)
		{
		}

		public ItemSpawnable SpawnAt(BoardItemPosition position, IItemSpawningComponent itemSpawningComponent, InteractionComponent interactionComponent, OperationContext operationContext, bool isSpawner = false, LowLevelItemProduceData lowLevelData = null, ProducerExcitementSpawnData excitementData = null)
		{
			return null;
		}

		public void CopyTimerItemData(TimerItemData from, TimerItemData to)
		{
		}

		public ItemSpawnable GetSpawnableItem(InteractionComponent interactionComponent, IItemSpawningComponent itemSpawningComponent, LowLevelItemProduceData lowLevelData, ProducerExcitementSpawnData excitementData, out ExtraData extraData)
		{
			extraData = null;
			return null;
		}

		public ItemSpawnable TryReplaceWithRemoteSpawnable(InteractionComponent interactionComponent, IItemSpawningComponent itemSpawningComponent, ExtraData extraData)
		{
			return null;
		}

		public ItemSpawnable GetItemFromDefaultQueue(InteractionComponent interactionComponent, IItemSpawningComponent itemSpawningComponent)
		{
			return null;
		}

		public string GetMaxLevelPrimaryProducerIdOnBoard(IItemSpawningComponent itemSpawningComponent)
		{
			return null;
		}

		public ItemSpawnable CreateNewBoostedItem(IMergeItem producer, ItemSpawnable itemSpawnable)
		{
			return null;
		}

		public void SetItemSpawningTrackingData(IItemSpawningComponent itemSpawningComponent, TimeDurationComponent timeDurationComponent, IMergeItem spawnerItem, ItemSpawnable itemSpawnable, LowLevelItemProduceData lowLevelData, ProducerExcitementSpawnData excitementData)
		{
		}

		public ItemSpawningTrackingData GetItemSpawningTrackingData(IItemSpawningComponent itemSpawningComponent, IMergeItem spawnerItem, ItemSpawnable itemSpawnable)
		{
			return null;
		}

		public void SetRemoteItemSpawningTrackingData(string stackId, int bet, bool isFromRemoteQueue, string pushedItemSource)
		{
		}

		public void SpawnItemAt(ItemSpawnable item, BoardItemPosition position, IItemSpawningComponent itemSpawningComponent, InteractionComponent interactionComponent, OperationContext operationContext, ExtraData extraData, bool isExcitementItem)
		{
		}

		public void OnItemBoosted(BoardItemPosition position, VisualComponent visualComponent)
		{
		}

		public bool TryGetLowLevelProduceData(IItemSpawningComponent itemSpawningComponent, out LowLevelItemProduceData lowLevelData)
		{
			lowLevelData = null;
			return false;
		}

		public bool IsLocked(T component)
		{
			return false;
		}

		public void HandleFloatingTexts(IItemSpawningComponent itemSpawningComponent)
		{
		}

		public void HandleFireChargingFloatingText(IItemSpawningComponent itemSpawningComponent)
		{
		}

		public void HandleExpiredFloatingText(IItemSpawningComponent itemSpawningComponent)
		{
		}

		public SpawningItemsSystem()
		{
		}
	}
}
