using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.CoinMultipliers.Services;
using Merger.CollectibleItems.Models;
using Merger.LiveOps.Events.Model;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class CollectSystem : BaseItemSystem<CollectableComponent>
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

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

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[Inject]
		[NonSerialized]
		public ICollectableRewardsModel _collectableRewardsModel;

		[Inject]
		[NonSerialized]
		public ICoinMultiplierCollectFloatingTextBuilder _coinMultiplierCollectFloatingTextBuilder;

		[NonSerialized]
		public List<CollectableComponent> _entitiesToCollect;

		public override SystemPriorities Priority => default(SystemPriorities);

		public bool IsInBoardEvent => false;

		public override IEnumerable<CollectableComponent> OnWillProcessComponents(ReadOnlyCollection<CollectableComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(CollectableComponent collectable)
		{
		}

		public void PlayFlyAnimationForCollectableItems(CollectableComponent collectable)
		{
		}

		public void CreateFloatingTextSignal(CollectableComponent collectable)
		{
		}

		public void HandleVisualState(CollectableComponent collectable)
		{
		}

		public void CreateSlidingIcon(CollectableComponent collectable)
		{
		}

		public void RemoveItemFromBoard(CollectableComponent collectable)
		{
		}
	}
}
