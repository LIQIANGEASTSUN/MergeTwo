using System;
using DG.Tweening;
using Framework.Core.View.ReactiveComponents;
using Framework.UIFSM.Fsm;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Signal.Board;
using Merger.Game.Data;
using Merger.Game.ViewModel.Board;
using Merger.Game.Views.Data;
using UnityEngine;

namespace Merger.Game.Views.Board
{
	[Obsolete("This class is needed to support events packed in asset bundles before v.2.12.130. Use BoardQueueView2 instead. See details in this ticket https://moonactive.atlassian.net/browse/TRT-11807")]
	public class BoardQueueView : GameViewBase<BoardQueueViewModel>, IEnterStateHandler, IExitStateHandler
	{
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
		[Header("Hinting")]
		public RectTransform _tutorialHand;

		[SerializeField]
		public int _showTutorialHintUntilLevel;

		[SerializeField]
		public float _showTutorialAfterBeingIdleFor;

		[NonSerialized]
		public Canvas _overlayCanvas;

		[NonSerialized]
		public Animation _hintAnimation;

		[NonSerialized]
		public Vector2 _defaultSizeDelta;

		[NonSerialized]
		public float _idleTime;

		[NonSerialized]
		public bool _isInBoardState;

		[NonSerialized]
		public Tween _tween;

		[NonSerialized]
		public bool _queueHideTweenInProgress;

		public GameObject _counter => null;

		public RectTransform ParentContainer => null;

		public bool HasItems => false;

		public override void Awake()
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

		public void Start()
		{
		}

		public void OnEnable()
		{
		}

		public void Update()
		{
		}

		public override void OnDestroy()
		{
		}

		public void EnqueueItem(EnqueueItemAnimationSignal signal)
		{
		}

		public bool ShouldSlide(EnqueueItemAnimationSignal signal, RewardDestinationType? destinationType)
		{
			return false;
		}

		public bool ShouldSkipGrantAnimation(EnqueueItemAnimationSignal signal)
		{
			return false;
		}

		public void SlideItemIntoQueue(IItem item, Vector2 itemPositionInRoot, InstantiateAndSlideIconsAnimationSettings animationSettings)
		{
		}

		public void TryDisplayQueuedItem()
		{
		}

		public void TryEnableQueueView()
		{
		}

		public void Dequeue()
		{
		}

		public void TryHideQueueDisplay()
		{
		}

		public void PrimaryGameStateChanged(GameState state)
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
