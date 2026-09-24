using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using MergePuzzle;
using NaughtyAttributes;
using UnityEngine;
using UnityEngine.Rendering;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class MiniBoardItemController : BaseSubscriber, ITutorialSetSorting, IEventReceiver<CanvasEvent.ToggleScreenInputBlocker>, IEventReceiverBase, IEventReceiver<SrDebuggerEvent.ShowDebugLayers>, IEventReceiver<BaseMiniBoardEvent.BoardItemRemoveFinished>, IEventReceiver<BaseMiniBoardEntityUpdateEvent.BoardItemStatusChange>, IItemController
	{
		public enum WarningType
		{
			RECHARGING = 0,
			BOARD_FULL = 1,
			FULL = 2,
			BUBBLE = 3,
			LOCKED = 4,
			ONLY1CHEST = 5,
			FULLY_CHARGED = 6,
			CANNOT_MERGE = 7,
			CAN_NOT_STORE_INVENTORY = 8,
			NEW_ITEM_FOUND = 9,
			KEEP_PLAYING_UNLOCKED = 10
		}

		public enum PositionUpdateType
		{
			MOVE = 0,
			SPAWN = 1,
			BUBBLE = 2,
			SWAP = 3,
			PANEL_ANIMATION = 4,
			REVERT_MOVE = 5,
			MERGE = 6
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CChangeModulesSortingData_003Ed__108 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MiniBoardItemController _003C_003E4__this;

			public SortingData sortingData;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CMergeTweenAction_003Ed__129 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MiniBoardItemController _003C_003E4__this;

			public MiniBoardItemController targetItem;

			public BoardItemData mergedItemData;

			public MiniBoardCellController nearestCollidingCell;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		public static float BoardImageJellyScale;

		public static float BoardImageDefaultScale;

		public Action<SortingData> OnItemSortingUpdated;

		[BoxGroup("Item")]
		public MiniBoardItemControllerItemIcon ItemIcon;

		[Foldout("Animation")]
		public AnimationController AnimationController;

		[Foldout("Animation")]
		public AnimationLoop SpawnerHint;

		[Foldout("Animation")]
		public AnimationLoop ClickLoop;

		[Foldout("Animation")]
		public AnimationItem MergeDisappear;

		[Foldout("Animation")]
		public AnimationItem MergeMoveBehind;

		[Foldout("Animation")]
		public AnimationItem DragScaleUp;

		[Foldout("Animation")]
		public AnimationItem DragScaleDown;

		[NonSerialized]
		public Coordinate _lastGameObjectBoardIndex;

		[NonSerialized]
		public bool _initialized;

		public Transform IconTransform => null;

		public SortingGroup SortingGroup { get; set; }

		public MiniBoardItemParticleController ItemParticleController { get; set; }

		public MiniBoardItemRuntimeData ItemRuntimeData { get; set; }

		public MiniBoardMovable Movable { get; set; }

		public BaseMiniBoardController Board { get; set; }

		public Collider2D Collider2D { get; set; }

		public SortingData SortingData { get; set; }

		public MiniBoardItemControllerMaxBadge ItemControllerMaxBadge { get; set; }

		public MiniBoardItemControllerDebug ItemControllerDebug { get; set; }

		public MiniBoardItemControllerBox ItemControllerBox { get; set; }

		public MiniBoardItemControllerLock ItemControllerLock { get; set; }

		public MiniBoardItemControllerRewardIcon ItemRewardIcon { get; set; }

		public MiniBoardItemControllerRewardHolderIcon ItemRewardHolderIcon { get; set; }

		public IBoardController GetBoardController => null;

		public IItemRuntimeData GetRuntimeData => null;

		public void ChangeCurrentCapacity(BoardItemSpawnerData spawnerData, float amount, bool isRewardedCapacity = false, bool animateClockDisappear = false, string changeReason = "", bool saveBoard = true)
		{
		}

		public bool PreventRecharge(bool log = false)
		{
			return false;
		}

		public void ArrangeOpenChestSpawnerState()
		{
		}

		public void BoardChangeState(bool animateClockDisappear)
		{
		}

		public bool ProcessSpawn(BoardItemSpawnerData boardItemSpawnerData, int energyConsumeAmount)
		{
			return false;
		}

		public bool ProcessSpawn(BoardItemPerishableSpawner boardItemPerishableSpawner, int energyConsumeAmount)
		{
			return false;
		}

		public bool ProcessSpawn(BoardItemChestSpawner boardItemChestSpawner, int energyConsumeAmount)
		{
			return false;
		}

		public override void Awake()
		{
		}

		public override void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public override void OnDestroy()
		{
		}

		public void DestroyItem()
		{
		}

		public void OnDestroyItemKillRunTimeData()
		{
		}

		public void RewardHolderDestroyItem()
		{
		}

		public void RewardHolderClaimDestroyItem()
		{
		}

		public static MiniBoardItemRuntimeData GetDefaultRuntimeData()
		{
			return null;
		}

		public void SetScale(Vector3 scale)
		{
		}

		public override void UpdatePlayingTick(float elapsedTime)
		{
		}

		public void ChangeGameObjectName()
		{
		}

		public bool IsPlayingTickUnavailable()
		{
			return false;
		}

		public override void UpdatePausedTick(float elapsedTime)
		{
		}

		public override void UpdateTutorialTick(float elapsedTime)
		{
		}

		public MiniBoardPosition GetPosition()
		{
			return null;
		}

		public MiniBoardCellController GetCell()
		{
			return null;
		}

		public bool IsColliderEnabled()
		{
			return false;
		}

		public void SetColliderState(bool state)
		{
		}

		public bool IsItemSpawnerOrCollectable()
		{
			return false;
		}

		public void SetTutorialSortingData(SortingData sortingData)
		{
		}

		public SortingData GetTutorialSortingData()
		{
			return null;
		}

		public void ArrangeInitializationSortingStatus(bool enableCollisions)
		{
		}

		public void StartMergeHintSorting(int offset)
		{
		}

		public void RestoreMergeHintSorting()
		{
		}

		public void ArrangeSorting(bool moveToFront)
		{
		}

		public void ArrangeSorting(int order)
		{
		}

		public void SetSortingData(SortingData sortingData)
		{
		}

		[AsyncStateMachine(typeof(_003CChangeModulesSortingData_003Ed__108))]
		public UniTaskVoid ChangeModulesSortingData(SortingData sortingData)
		{
			return default(UniTaskVoid);
		}

		public void SetCellSortingData(MiniBoardItemEntity itemEntity)
		{
		}

		public void Initialize(BaseMiniBoardController board, BoardItemData boardItemData, MiniBoardItemEntity itemEntity, bool isNewlyCreated, bool onBoardInitialize)
		{
		}

		public bool AddToSpawnerHint()
		{
			return false;
		}

		public void InitializeItemRuntimeData(BoardItemData boardItemData, MiniBoardItemEntity itemEntity, bool onBoardInitialize)
		{
		}

		public void InitializeStartedDefaultUIElements()
		{
		}

		public void InitializeMovableStatusAndUI(BoardItemData boardItemData, MiniBoardItemEntity itemEntity, MiniBoardData boardData)
		{
		}

		public void InitializeLockImageAndSorting(MiniBoardItemEntity itemEntity)
		{
		}

		public void InitializeLockImageRendererAndPosition(MiniBoardItemEntity itemEntity, MiniBoardData boardData)
		{
		}

		public void InitializeItemRewardIcon(MiniBoardItemEntity itemEntity)
		{
		}

		public void DisableTrigger(bool disabled)
		{
		}

		public void Unbox(bool withAnimation)
		{
		}

		public bool CanClickAnimation()
		{
			return false;
		}

		public void OnEvent(CanvasEvent.ToggleScreenInputBlocker e)
		{
		}

		public void OnEvent(SrDebuggerEvent.ShowDebugLayers e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.BoardItemRemoveFinished e)
		{
		}

		public void OnEvent(BaseMiniBoardEntityUpdateEvent.BoardItemStatusChange e)
		{
		}

		public override void OnEvent(CanvasEvent.GameplayStatusUpdate e)
		{
		}

		public bool PreventMerge()
		{
			return false;
		}

		public MiniBoardItemController IsMergeAvailable(bool performMerge)
		{
			return null;
		}

		public void MergeIt(MiniBoardItemController targetItem, MiniBoardCellController nearestCollidingCell, BoardItemData mergedItemData)
		{
		}

		[AsyncStateMachine(typeof(_003CMergeTweenAction_003Ed__129))]
		public UniTaskVoid MergeTweenAction(MiniBoardItemController targetItem, BoardItemData mergedItemData, MiniBoardCellController nearestCollidingCell)
		{
			return default(UniTaskVoid);
		}

		public bool PreventAnyHint()
		{
			return false;
		}

		public bool IsSpawner()
		{
			return false;
		}

		public bool IsSpawnerParticleAvailable()
		{
			return false;
		}

		public void StartSpawnerHintAnimation()
		{
		}

		public void StartSpawnerHint()
		{
		}

		public void SpawnerTweenAction(MiniBoardItemController item, bool onKilled)
		{
		}

		public void ArrangeSpawnerParticle(SpawnerState eSpawnerState)
		{
		}

		public void ArrangeSpawnerState(BoardItemSpawnerData spawnerData, bool isRewardedCapacity = false, bool animateClockDisappear = false)
		{
		}

		public void TryStartSpawnerHint()
		{
		}

		public bool UsesEnergy()
		{
			return false;
		}

		public void KillAnimationActiveLoops(Sequence exception1 = null, Sequence exception2 = null, Sequence exception3 = null, Sequence exception4 = null)
		{
		}

		public void ScaleDownWithAnimation()
		{
		}

		public void ArrangeAnimator(bool activate, Animator animatorPrefab, ref Animator currentInstance, bool create = true)
		{
		}

		public void _DOKill()
		{
		}

		public void KillItemRuntimeSequences()
		{
		}

		public void KillPanelAnimation(bool completeKill = true)
		{
		}

		public void KillMergeHintAnimation(bool completeKill = true)
		{
		}

		public void ThrowWarning(WarningType warningType)
		{
		}

		public bool IsClickable()
		{
			return false;
		}

		public bool IsItemDraggable()
		{
			return false;
		}

		public void DragCollisionEnter(GameObject other)
		{
		}

		public void DragCollisionExit(GameObject other)
		{
		}

		public void DragStarted()
		{
		}

		public void DragContinues()
		{
		}

		public void DragStopped()
		{
		}

		public void TryToPositionNearestCell(List<MiniBoardCellController> nearestAvailableOtherCells)
		{
		}

		public void ProcessItemClick()
		{
		}

		public bool ProcessItemClickValidCheck(MiniBoardPosition selectedPosition)
		{
			return false;
		}

		public void ProcessDoubleClick()
		{
		}

		public bool ProcessNonMovableItemClick()
		{
			return false;
		}

		public void CommonClickArrangement()
		{
		}

		public bool CanClickLoop()
		{
			return false;
		}

		public void StartClickLoop()
		{
		}

		public void ClickTweenAction(MiniBoardItemController item)
		{
		}

		public MiniBoardItemControllerMaxBadge GetItemMaxBadge()
		{
			return null;
		}

		public void DestroyItemMaxLevelBadge()
		{
		}

		public void SetMaxLevelBadge(BaseMiniBoardController board, MiniBoardItemEntity itemEntity)
		{
		}

		public MiniBoardItemControllerDebug GetDebug()
		{
			return null;
		}

		public void DestroyItemDebug()
		{
		}

		public void CheckItemDebug()
		{
		}

		public MiniBoardItemControllerBox GetBox()
		{
			return null;
		}

		public void DestroyItemBox()
		{
		}

		public void InitBoxImage()
		{
		}

		public MiniBoardItemControllerLock GetLock()
		{
			return null;
		}

		public void DestroyItemLock()
		{
		}

		public void CheckItemLock()
		{
		}

		public MiniBoardItemControllerRewardIcon GetRewardIcon()
		{
			return null;
		}

		public void DestroyItemRewardIcon()
		{
		}

		public MiniBoardItemControllerRewardHolderIcon GetItemRewardHolderIcon()
		{
			return null;
		}

		public void DestroyItemRewardHolderIcon()
		{
		}

		public void SetItemRewardHolderIcon()
		{
		}

		public Sprite GetRewardHolderIconSprite()
		{
			return null;
		}
	}
}
