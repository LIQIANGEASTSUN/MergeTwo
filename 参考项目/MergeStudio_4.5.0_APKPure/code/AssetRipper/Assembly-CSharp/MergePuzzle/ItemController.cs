using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using MergePuzzle.EnergyMultiplier;
using MergePuzzle.Item;
using MergePuzzle.Tutorial.Core;
using NaughtyAttributes;
using Paxie;
using Paxie.MergeStudio.GameCore.Gameplay;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;

namespace MergePuzzle
{
	public class ItemController : BaseSubscriber, ITutorialSetSorting, IEventReceiver<BoardEvent.BoosterPanelStatusChange>, IEventReceiverBase, IEventReceiver<CanvasEvent.ToggleScreenInputBlocker>, IEventReceiver<TaskEvent.SetLevelUpOnItems>, IEventReceiver<TaskEvent.LevelUpDismissed>, IEventReceiver<SrDebuggerEvent.ShowDebugLayers>, IEventReceiver<CanvasEvent.StopBubbleTick>, IEventReceiver<CanvasEvent.ContinueBubbleTick>, IEventReceiver<SDKEvents.RewardedAdEarned>, IEventReceiver<SDKEvents.RewardedAdDismissed>, IEventReceiver<SDKEvents.RewardedAdFailedToShown>, IEventReceiver<TaskEvent.TaskDoneBoardTaskItemDisappearStarted>, IEventReceiver<BoardEvent.BoardItemRemoveFinished>, IEventReceiver<BoardEvent.RemoveItemViaSellComplete>, IEventReceiver<EntityUpdateEvent.BoardItemStatusChange>, IEventReceiver<CanvasEvent.OpenGameplayRequest>, IItemController
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
			KEEP_PLAYING_UNLOCKED = 10,
			COMMON_JOKER_CARD = 11
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
		public struct _003CChangeModulesSortingData_003Ed__160 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public ItemController _003C_003E4__this;

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
		public struct _003CMergeTweenAction_003Ed__198 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public ItemController _003C_003E4__this;

			public ItemController targetItem;

			public BoardItemData mergedItemData;

			public CellController nearestCollidingCell;

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

		[NonSerialized]
		public Sequence _taskMoveSequence;

		[NonSerialized]
		public Sequence _taskMoveScaleSequence;

		public static float BoardImageJellyScale;

		public static float BoardImageDefaultScale;

		public static readonly List<TutorialIndex> TutorialBoardItemSortingLayerSteps;

		public static readonly List<TutorialIndex> TutorialBoardItemNoEnergySteps;

		public Action<SortingData> OnItemSortingUpdated;

		[BoxGroup("UI")]
		public Transform SpawnerItemsParent;

		[BoxGroup("Item")]
		public ItemControllerItemIcon ItemIcon;

		[Foldout("Animation")]
		public AnimationController AnimationController;

		[Foldout("Animation")]
		public AnimationLoop SpawnerHint;

		[Foldout("Animation")]
		public AnimationLoop MoveDisappearLoop;

		[Foldout("Animation")]
		public AnimationLoop SellDisappearLoop;

		[Foldout("Animation")]
		public AnimationLoop ClickLoop;

		[Foldout("Animation")]
		public AnimationLoop TaskMoveToObjective;

		[Foldout("Animation")]
		public AnimationLoop TaskMoveToObjectiveScale;

		[Foldout("Animation")]
		public AnimationItem MergeDisappear;

		[Foldout("Animation")]
		public AnimationItem MergeMoveBehind;

		[Foldout("Animation")]
		public AnimationItem DragScaleUp;

		[Foldout("Animation")]
		public AnimationItem DragScaleDown;

		[Foldout("Animation")]
		public DoMove ChargeMoveBehind;

		[NonSerialized]
		public InventoryEntity _inventoryEntity;

		[NonSerialized]
		public Coordinate _lastGameObjectBoardIndex;

		[NonSerialized]
		public bool _initialized;

		public Transform IconTransform => null;

		public SortingGroup SortingGroup { get; set; }

		public ItemParticleController ItemParticleController { get; set; }

		public ItemRuntimeData ItemRuntimeData { get; set; }

		public Movable Movable { get; set; }

		public BoardController Board { get; set; }

		public Collider2D Collider2D { get; set; }

		public SortingData SortingData { get; set; }

		public GameplayScaledCanvasView GameplayScaledCanvasView => null;

		public GameplayNonScaledCanvasView GameplayNonScaledCanvasView => null;

		public EnergyMultiplierHandler EnergyMultiplierHandler => null;

		public SpawnerClockController SpawnerClockController { get; set; }

		public ItemControllerDialogue ItemControllerDialogue { get; set; }

		public ItemControllerTick ItemControllerTick { get; set; }

		public ItemControllerProgressBar ItemControllerProgressBar { get; set; }

		public ItemControllerMaxBadge ItemControllerMaxBadge { get; set; }

		public ItemControllerDebug ItemControllerDebug { get; set; }

		public ItemControllerBox ItemControllerBox { get; set; }

		public ItemControllerLock ItemControllerLock { get; set; }

		public ItemControllerTreasureBoxUnlock ItemControllerTreasureBoxUnlock { get; set; }

		public ItemControllerSpawnerEnergy ItemControllerSpawnerEnergy { get; set; }

		public ItemControllerProgressText ItemControllerProgressText { get; set; }

		public ItemControllerTreasureBoxOpenSprite ItemControllerTreasureBoxOpenSprite { get; set; }

		public ItemControllerTreasureBoxOpened ItemControllerTreasureBoxOpened { get; set; }

		public ItemControllerBubble ItemControllerBubble { get; set; }

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

		public void OnDisable()
		{
		}

		public override void OnDestroy()
		{
		}

		public void DestroyItem(bool undoDestroy)
		{
		}

		public static ItemRuntimeData GetDefaultRuntimeData()
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

		public void SetGoalTick()
		{
		}

		public BoardPosition GetPosition()
		{
			return null;
		}

		public CellController GetCell()
		{
			return null;
		}

		public void ArrangeItemTickImage()
		{
		}

		public void CheckBubbleTime()
		{
		}

		public void ClearTreasureBoxNotif()
		{
		}

		public bool IsColliderEnabled()
		{
			return false;
		}

		public void SetColliderState(bool state)
		{
		}

		public void CheckSpawnTutorialFinish()
		{
		}

		public bool IsItemSpawnerOrCollectable()
		{
			return false;
		}

		public bool IsCollidingButton(Button button)
		{
			return false;
		}

		public void PrepareRecurringEventClick()
		{
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

		public void SetTutorialSortingForward()
		{
		}

		public void StartMergeHintSorting(int offset)
		{
		}

		public void RestoreMergeHintSorting(int order)
		{
		}

		public void ArrangeSorting(bool moveToFront)
		{
		}

		public void SetSortingData(SortingData sortingData)
		{
		}

		[AsyncStateMachine(typeof(_003CChangeModulesSortingData_003Ed__160))]
		public UniTaskVoid ChangeModulesSortingData(SortingData sortingData)
		{
			return default(UniTaskVoid);
		}

		public void SetCellSortingData(ItemEntity itemEntity)
		{
		}

		public void Initialize(BoardController board, BoardItemData boardItemData, ItemEntity itemEntity, bool isNewlyCreated, bool onBoardInitialize)
		{
		}

		public bool AddToSpawnerHint()
		{
			return false;
		}

		public void InitializeItemRuntimeData(BoardItemData boardItemData, ItemEntity itemEntity, bool onBoardInitialize)
		{
		}

		public void InitializeStartedDefaultUIElements()
		{
		}

		public void InitializeMovableStatusAndUI(BoardItemData boardItemData, ItemEntity itemEntity, BoardData boardData)
		{
		}

		public void InitializeLockImageAndSorting(ItemEntity itemEntity)
		{
		}

		public void InitializeLockImageRendererAndPosition(ItemEntity itemEntity, BoardData boardData)
		{
		}

		public void InitializeItemProgressiveWithData(BoardItemData boardItemData, ItemEntity itemEntity, bool onBoardInitialize, BoardItemProgressive progressive, BoardData boardData)
		{
		}

		public void InitializePerishableWithData(ItemEntity itemEntity, BoardItemPerishableSpawner perishable)
		{
		}

		public void InitializeChargeableWithData(ItemEntity itemEntity, BoardItemChargeable chargeable)
		{
		}

		public void InitializeValidateCurrentTaskIndex(BoardItemProgressive progressive)
		{
		}

		public void DisableChestBoardGlow()
		{
		}

		public void DisableTrigger(bool disabled)
		{
		}

		public void Unbox(bool withAnimation)
		{
		}

		public bool IsGoal(ItemEntity entity)
		{
			return false;
		}

		public bool CanClickAnimation()
		{
			return false;
		}

		public void OnEvent(BoardEvent.BoosterPanelStatusChange e)
		{
		}

		public void OnEvent(CanvasEvent.ToggleScreenInputBlocker e)
		{
		}

		public void OnEvent(TaskEvent.SetLevelUpOnItems e)
		{
		}

		public void OnEvent(TaskEvent.LevelUpDismissed e)
		{
		}

		public void OnEvent(SrDebuggerEvent.ShowDebugLayers e)
		{
		}

		public void OnEvent(CanvasEvent.StopBubbleTick e)
		{
		}

		public void OnEvent(CanvasEvent.ContinueBubbleTick e)
		{
		}

		public void OnEvent(SDKEvents.RewardedAdEarned e)
		{
		}

		public void OnEvent(SDKEvents.RewardedAdDismissed e)
		{
		}

		public void OnEvent(SDKEvents.RewardedAdFailedToShown e)
		{
		}

		public void OnEvent(TaskEvent.TaskDoneBoardTaskItemDisappearStarted e)
		{
		}

		public void OnEvent(BoardEvent.BoardItemRemoveFinished e)
		{
		}

		public void OnEvent(BoardEvent.RemoveItemViaSellComplete e)
		{
		}

		public void OnEvent(EntityUpdateEvent.BoardItemStatusChange e)
		{
		}

		public void OnEvent(CanvasEvent.OpenGameplayRequest e)
		{
		}

		public override void OnEvent(CanvasEvent.GameplayStatusUpdate e)
		{
		}

		public bool PreventMerge()
		{
			return false;
		}

		public ItemController IsMergeAvailable(bool performMerge)
		{
			return null;
		}

		public void MergeIt(ItemController targetItem, CellController nearestCollidingCell, BoardItemData mergedItemData)
		{
		}

		public void ChargeIt(CellController nearestCollidingCell, ItemController candidateItem)
		{
		}

		[AsyncStateMachine(typeof(_003CMergeTweenAction_003Ed__198))]
		public UniTaskVoid MergeTweenAction(ItemController targetItem, BoardItemData mergedItemData, CellController nearestCollidingCell)
		{
			return default(UniTaskVoid);
		}

		public void SetRewardWaiting()
		{
		}

		public void RewardEarned()
		{
		}

		public void InitializeBubbleItem(ItemEntity itemEntity, BoardData boardData)
		{
		}

		public void RemoveBubble(string trigger)
		{
		}

		public void RemoveJelly(bool isSelect = true)
		{
		}

		public bool IsSellable()
		{
			return false;
		}

		public bool CheckSellableForItemSet41()
		{
			return false;
		}

		public bool ProcessSellButtonClick()
		{
			return false;
		}

		public int GetRewardedCapacity(BoardItemDefaultSpawner spawnerData)
		{
			return 0;
		}

		public int GetRewardedCapacity(BoardItemAutoSpawner spawnerData)
		{
			return 0;
		}

		public bool IsSpawner()
		{
			return false;
		}

		public bool IsSpawnerPart()
		{
			return false;
		}

		public bool IsSpawnerParticleAvailable()
		{
			return false;
		}

		public void SkipChargingState(bool animateClockDisappear, bool saveBoard = true, bool chargeToFullCapacity = false)
		{
		}

		public int GetSkipCapacity(int smallCapacity, int bigCapacity, SpawnerState skippedState)
		{
			return 0;
		}

		public void StartSpawnerHintAnimation()
		{
		}

		public void StartSpawnerHint()
		{
		}

		public void SpawnerTweenAction(ItemController item, bool onKilled)
		{
		}

		public void UpdateSpawners(float elapsedTime)
		{
		}

		public void SkipSpawnerUpdate(BoardItemData data)
		{
		}

		public void SpawnerCharge(BoardItemSpawnerData spawnerData)
		{
		}

		public void ArrangeSpawnerParticle(SpawnerState eSpawnerState, bool animateClockDisappear = false)
		{
		}

		public void ArrangeSpawnerState(BoardItemSpawnerData spawnerData, bool isRewardedCapacity = false, bool animateClockDisappear = false)
		{
		}

		public void CheckChargerTutorialState()
		{
		}

		public void TryStartSpawnerHint()
		{
		}

		public bool UsesEnergy()
		{
			return false;
		}

		public bool RecurringEventUseEnergy()
		{
			return false;
		}

		public void KillAnimationActiveLoops(Sequence exception1 = null, Sequence exception2 = null, Sequence exception3 = null, Sequence exception4 = null)
		{
		}

		public void ProcessTaskMoveCompletedForFirstItem(BoardTaskItem completedTask)
		{
		}

		public void AnimateItemToTask(BoardTaskItemController completedTaskItemController, Coordinate position, int goalUIIndex, Action<bool> callback)
		{
		}

		public void AnimateItemToTask(BoardTaskItemController completedTaskItemController, int goalUIIndex, Action onComplete)
		{
		}

		public void AnimateItemToSpecialTask(BoardTaskItemController completedTaskItemController, Coordinate position, int goalUIIndex)
		{
		}

		public void PrepareAnimate()
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

		public void ThrowDragWarning()
		{
		}

		public void ThrowBoosterWarning()
		{
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

		public bool ProcessDragStopForButtons(Button button)
		{
			return false;
		}

		public void TryToPositionNearestCell(List<CellController> nearestAvailableOtherCells)
		{
		}

		public void ProcessItemClick()
		{
		}

		public bool ProcessItemClickValidCheck(BoardPosition selectedPosition)
		{
			return false;
		}

		public void ProcessDoubleClick()
		{
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

		public void ClickTweenAction(ItemController item)
		{
		}

		public bool ProcessNonMovableItemClick()
		{
			return false;
		}

		public void ProcessNonMovableDoubleClick()
		{
		}

		public void OnBoosterPanelStatusChange(BoardEvent.BoosterPanelStatusChange e)
		{
		}

		public SpawnerClockController GetSpawnerClock()
		{
			return null;
		}

		public void DestroySpawnerClock()
		{
		}

		public void ArrangeSpawnerClockStatus(bool enable, bool disableWithAnimation)
		{
		}

		public ItemControllerDialogue GetDialogue()
		{
			return null;
		}

		public GameObject GetDialogueObject()
		{
			return null;
		}

		public void DestroyItemDialogue()
		{
		}

		public bool IsDialogueActive()
		{
			return false;
		}

		public void OpenProgressiveDialogue()
		{
		}

		public ItemControllerTick GetItemTick()
		{
			return null;
		}

		public void DestroyItemTick()
		{
		}

		public bool OpenTick()
		{
			return false;
		}

		public ItemControllerProgressBar GetProgressBar()
		{
			return null;
		}

		public GameObject GetItemProgressBarObject()
		{
			return null;
		}

		public void DestroyItemProgressBar()
		{
		}

		public void ArrangeItemProgressBar(bool isActive, int maxProgress, int currentProgress)
		{
		}

		public void SetBarFillAmount(int amount)
		{
		}

		public ItemControllerMaxBadge GetItemMaxBadge()
		{
			return null;
		}

		public void DestroyItemMaxLevelBadge()
		{
		}

		public void SetMaxLevelBadge(BoardController board, ItemEntity itemEntity)
		{
		}

		public ItemControllerDebug GetDebug()
		{
			return null;
		}

		public void DestroyItemDebug()
		{
		}

		public void CheckItemDebug()
		{
		}

		public ItemControllerBox GetBox()
		{
			return null;
		}

		public void DestroyItemBox()
		{
		}

		public void InitBoxImage()
		{
		}

		public ItemControllerLock GetLock()
		{
			return null;
		}

		public void DestroyItemLock()
		{
		}

		public void CheckItemLock()
		{
		}

		public ItemControllerTreasureBoxUnlock GetTreasureBoxUnlock()
		{
			return null;
		}

		public void DestroyItemTreasureBoxUnlock()
		{
		}

		public void CreateTreasureBoxUnlock(BoardData boardData)
		{
		}

		public ItemControllerSpawnerEnergy GetSpawnerEnergy()
		{
			return null;
		}

		public void DestroyItemSpawnerEnergy()
		{
		}

		public void SetSpawnerEnergyParticle(bool enable)
		{
		}

		public ItemControllerProgressText GetProgressText()
		{
			return null;
		}

		public void DestroyItemProgressText()
		{
		}

		public ItemControllerTreasureBoxOpenSprite GetTreasureBoxOpenSprite()
		{
			return null;
		}

		public void DestroyItemTreasureBoxOpenSprite()
		{
		}

		public ItemControllerTreasureBoxOpened GetTreasureBoxOpened()
		{
			return null;
		}

		public void DestroyItemTreasureBoxOpened()
		{
		}

		public ItemControllerBubble GetBubble()
		{
			return null;
		}

		public void DestroyItemBubble()
		{
		}
	}
}
