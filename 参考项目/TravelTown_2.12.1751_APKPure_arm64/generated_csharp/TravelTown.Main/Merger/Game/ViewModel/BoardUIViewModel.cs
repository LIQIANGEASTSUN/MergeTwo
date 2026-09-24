using System;
using Framework.Core.DataBinding;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Orders;
using Merger.Game.Model;
using Merger.Metagame.Model;
using Merger.Rewards.Models.Animations;
using Merger.SayHello.Models;
using UnityEngine;
using Zenject;

namespace Merger.Game.ViewModel
{
	public class BoardUIViewModel : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public new IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IMetagameModel _metagameModel;

		[Inject]
		[NonSerialized]
		public ISayHelloTogglesModel _sayHelloTogglesModel;

		[NonSerialized]
		public OrdersSystem _ordersSystem;

		[NonSerialized]
		public CollectionBookSystem _collectionBookSystem;

		[NonSerialized]
		public InventorySystem _inventorySystem;

		public OrdersSystem OrdersSystem => null;

		public InventorySystem InventorySystem => null;

		public BindableProperty<bool> ShowInventoryNotifications => null;

		public override RewardAnimationTarget RewardAnimationTarget => default(RewardAnimationTarget);

		public bool CheckShowMetaTutorial()
		{
			return false;
		}

		public override void RegisterRewardTargets(RectTransform targetRectTransform)
		{
		}
	}
}
