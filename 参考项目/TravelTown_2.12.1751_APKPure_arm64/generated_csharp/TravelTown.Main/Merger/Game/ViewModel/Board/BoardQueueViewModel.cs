using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Player;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.Service.Cards.Models;
using MergeEngine.Signal.Board.Enums;
using MergeEngine.Signal.Items;
using Merger.Boosters.Declarations.Models;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.LiveOps.Events.ECS.System;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Models.Animations;
using Merger.Services.User;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace Merger.Game.ViewModel.Board
{
	public class BoardQueueViewModel : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public new IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public CardsConfigurationModel _cardsConfigurationModel;

		[Inject]
		[NonSerialized]
		public IDisplayableBoardQueueModel _displayableBoardQueueModel;

		[NonSerialized]
		public HashSet<IRewardType> _flyingRewardTypes;

		[NonSerialized]
		public BoardQueueComponent _boardQueueComponent;

		[NonSerialized]
		public BoardComponent _boardComponent;

		[NonSerialized]
		public PlayerProgressionComponent _playerProgressionComponent;

		[NonSerialized]
		public TutorialProgressComponent _tutorialProgressComponent;

		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		public BindableProperty<int> EffectiveQueueCount => null;

		public BindableProperty<AssetReferenceT<Sprite>> EffectiveHeadSprite => null;

		public BoardQueueComponent BoardQueueComponent => null;

		public BoardComponent BoardComponent => null;

		public PlayerProgressionComponent PlayerProgressionComponent => null;

		public TutorialProgressComponent TutorialProgressComponent => null;

		public LiveOpsEventSystem LiveOpsEventSystem => null;

		public IGameSessionModel GameSessionModel => null;

		public bool CanDequeueInCurrentBoardEvent => false;

		public AssetReferenceT<Sprite> FirstQueuedItemSprite => null;

		public double ItemDuration => 0.0;

		public bool IsBoardFull => false;

		public int NumItemsInQueue => 0;

		public int PlayerLevel => 0;

		public bool ShowingTutorial => false;

		public BindableProperty<bool> IsLoading => null;

		public BindableProperty<GameState> PrimaryGameState => null;

		public BindableProperty<GameState> GameState => null;

		public override RewardAnimationTarget RewardAnimationTarget => default(RewardAnimationTarget);

		public bool IsBoardVisible => false;

		public void SendUserActionDuringOrderCompleteAnalytic(UserActionTypeDuringOrderComplete actionType, string mergeItemId = null)
		{
		}

		public override void RegisterRewardTargets(RectTransform targetRectTransform)
		{
		}

		public bool ShouldSlide(CurrentBoardType boardType, ItemQueuedSignal signal, RewardDestinationType? destinationType, bool activeInHierarchy)
		{
			return false;
		}

		public bool ShouldSlideOnEventBoard(ItemQueuedSignal signal, RewardDestinationType? destinationType, bool activeInHierarchy)
		{
			return false;
		}

		public bool ShouldSlideOnCoreBoard(ItemQueuedSignal signal, RewardDestinationType? destinationType, bool activeInHierarchy)
		{
			return false;
		}
	}
}
