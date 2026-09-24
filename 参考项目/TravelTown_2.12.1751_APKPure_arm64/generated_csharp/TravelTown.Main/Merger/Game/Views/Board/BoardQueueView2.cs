using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using Framework.Core.View.ReactiveComponents;
using Framework.UIFSM.Fsm;
using MergeEngine.Configuration;
using MergeEngine.Signal.Items;
using Merger.Game.Data;
using Merger.Game.Signal;
using Merger.Game.ViewModel.Board;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using Merger.RemoteBoardLiveOps.Views;
using Merger.Rewards.Signals;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Merger.Game.Views.Board
{
	[RequireComponent(typeof(AnimationGraphPlayer))]
	public sealed class BoardQueueView2 : GameViewBase<BoardQueueViewModel>, IEnterStateHandler, IExitStateHandler, IBoardWidgetContainer
	{
		[SerializeField]
		public AnimationGraphPlayer _animationGraphPlayer;

		[SerializeField]
		public string _inNodeName;

		[SerializeField]
		public string _outNodeName;

		[SerializeField]
		public SlideIconTweenSettings _iconTweenSettings;

		[SerializeField]
		public AddressableImage _queuedItemImage;

		[SerializeField]
		public ReactiveButton _dequeueButton;

		[SerializeField]
		public ReactiveText _counterText;

		[SerializeField]
		public ReactiveText _timerText;

		[SerializeField]
		public SlideBoardItemView _slideBoardItemView;

		[Header("Hinting")]
		[SerializeField]
		public RectTransform _tutorialHand;

		[SerializeField]
		public int _showTutorialHintUntilLevel;

		[SerializeField]
		public float _showTutorialAfterBeingIdleFor;

		[SerializeField]
		public GameObject _loader;

		[NonSerialized]
		public float _idleTime;

		[NonSerialized]
		public bool _isInBoardState;

		[NonSerialized]
		public bool _isChangingRectSize;

		[NonSerialized]
		public Vector2 _itemEndPosition;

		[NonSerialized]
		public Animation _hintAnimation;

		[NonSerialized]
		public GameObject _counter;

		[NonSerialized]
		public RectTransform _overlayRectTransform;

		public bool ShouldShowWidget => false;

		public bool HasItems => false;

		public RectTransform ParentContainer => null;

		public event Action<bool> QueueStatusChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public override void Awake()
		{
		}

		public void InitializeUiComponents()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Start()
		{
		}

		public void OnEnable()
		{
		}

		public void Update()
		{
		}

		public void LateUpdate()
		{
		}

		public override void GameStarted()
		{
		}

		public void MoveToFront()
		{
		}

		public void MoveToBack()
		{
		}

		public void EnqueueItem(ItemQueuedSignal signal)
		{
		}

		public void SlideItemIntoQueue(IItem item, Vector2 itemStartPosition, Func<GameObject> getPrefabInstance = null, Func<FlyingIconView, InstantiateAndSlideIconsAnimationSettings, Tween> overrideTween = null, InstantiateAndSlideIconsAnimationSettings animationSettings = null)
		{
		}

		public void TryDisplayQueuedItem()
		{
		}

		public void UpdateTimerView()
		{
		}

		public void TryEnableQueueView()
		{
		}

		public void Dequeue()
		{
		}

		public void TryPlayHideAnimation()
		{
		}

		public void SubscribeOnSignals()
		{
		}

		public void OnEffectiveQueueCountChanged(int count)
		{
		}

		public void OnEffectiveHeadSpriteChanged(AssetReferenceT<Sprite> sprite)
		{
		}

		public void OnRewardCameToTarget(RewardFlyAnimationFinishedSignal signal)
		{
		}

		public void SetButtonInteractable(bool isLoading)
		{
		}

		public void ActivateGameObject(bool isOn)
		{
		}

		public void GameStateChanged(GameState state)
		{
		}

		public void BoardVisibilityChanged(BoardVisibilityChangedSignal signal)
		{
		}

		public void ResetRewardTargets()
		{
		}

		void IEnterStateHandler.HandleEnterState()
		{
		}

		void IExitStateHandler.HandleExitState()
		{
		}
	}
}
