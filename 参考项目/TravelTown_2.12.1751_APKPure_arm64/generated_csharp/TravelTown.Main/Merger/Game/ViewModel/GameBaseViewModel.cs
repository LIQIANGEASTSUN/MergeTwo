using System;
using Framework.Core.DataBinding;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Shop;
using MergeEngine.ECS.Systems.Tutorials;
using MergeEngine.Model;
using Merger.EventEnergy.Enums;
using Merger.EventEnergy.Model;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Models;
using Merger.RemotePromotions.Systems;
using Merger.Rewards.Interfaces;
using Merger.Rewards.ViewModels;
using Merger.ShopOTA.Interfaces;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace Merger.Game.ViewModel
{
	public class GameBaseViewModel : RewardAnimationTargetViewModel
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IShopService _shopService;

		[Inject]
		[NonSerialized]
		public IEventEnergyAssetsModel _eventEnergyAssetsModel;

		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[NonSerialized]
		public TutorialSystem _tutorialSystem;

		[Inject]
		public IActionsModel _actionsModel { get; set; }

		public BindableProperty<bool> Started => null;

		public BindableProperty<GameState> CurrentGameState => null;

		public BindableProperty<GameState> CurrentPrimaryGameState => null;

		public BindableProperty<bool> IsInMetagame => null;

		public BindableProperty<CurrentBoardType> BoardType => null;

		public string CurrentEventId => null;

		public bool IsSectionShop => false;

		public ShopSystemBase ShopSystem => null;

		public BoardSystem BoardSystem => null;

		public PromotionsSystem PromotionSystem => null;

		public bool IsFtueActive => false;

		public BindableProperty<int> GetBindableResource(IRewardType rewardType)
		{
			return null;
		}

		public BindableProperty<int> GetDisplayableBindableResource(IRewardType rewardType)
		{
			return null;
		}

		public TSystem GetSystem<TSystem>() where TSystem : SystemBase
		{
			return null;
		}

		public bool CanAfford(ResourceMultiple price)
		{
			return false;
		}

		public bool CanAfford(ResourceMultiple[] price)
		{
			return false;
		}

		public bool NavigateToShopIfCannotAfford(ResourceMultiple resource, IInventoryModel inventoryModel, string mergeItemType, Action backAction)
		{
			return false;
		}

		public AssetReferenceT<Sprite> GetEventEnergyIcon(EventEnergySpriteEnum spriteType)
		{
			return null;
		}

		public AssetReferenceT<Sprite> GetResourceIcon(IRewardType rewardType)
		{
			return null;
		}
	}
}
