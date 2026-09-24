using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using Framework.Core.View;
using Framework.Core.View.ReactiveComponents;
using Framework.UIFSM.Fsm;
using MergeEngine.Data;
using Merger.Game.Data;
using Merger.Game.ViewModel;
using Merger.Rewards.Signals;
using UnityEngine;

namespace Merger.Game.Views
{
	public class BoardUIView : GameViewBase<BoardUIViewModel>, IBoardUIView, IViewComponent, IEnterStateHandler, IExitStateHandler
	{
		[SerializeField]
		public RectTransform _inventoryRectTransform;

		[SerializeField]
		public RectTransform _metaGameRectTransform;

		[SerializeField]
		public SwitchMergingMetaButtonView _metaGameButton;

		[SerializeField]
		public ReactiveButton _inventoryButton;

		[SerializeField]
		public Animator _inventoryButtonAnimator;

		[SerializeField]
		public GameObject _inventoryNotification;

		[Header("Hinting")]
		[SerializeField]
		public RectTransform _metaTutorial;

		[SerializeField]
		public float _showMetaTutorialAfterBeingIdleFor;

		public static readonly int ToolBoxReceivingHash;

		[NonSerialized]
		public float _idleTime;

		[NonSerialized]
		public Tween _inventoryMoveTween;

		[NonSerialized]
		public Tween _inventoryScaleTween;

		public SwitchMergingMetaButtonView MetaGameButton => null;

		GameObject IViewComponent.gameObject => null;

		public event Action<BoardItemPosition> ItemDroppedOnInventory
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

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnBoardTypeChange(CurrentBoardType boardType)
		{
		}

		public void OnGameStateChanged(GameState gameState)
		{
		}

		public void OnInventoryNotificationChanged(bool value)
		{
		}

		public void Start()
		{
		}

		public override void GameStarted()
		{
		}

		public void Update()
		{
		}

		public void StartInventoryButtonHinting()
		{
		}

		public void StopInventoryButtonHinting()
		{
		}

		public void DropItemOnInventory(BoardItemPosition boardItemPosition)
		{
		}

		public void DisableUI()
		{
		}

		public void EnableUI()
		{
		}

		public void OnRewardIconArrived(RewardFlyIconAnimationFinishedSignal signal)
		{
		}

		public void CheckShowMetaButtonTutorial()
		{
		}

		public void CheckStopMetaButtonTutorial()
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
