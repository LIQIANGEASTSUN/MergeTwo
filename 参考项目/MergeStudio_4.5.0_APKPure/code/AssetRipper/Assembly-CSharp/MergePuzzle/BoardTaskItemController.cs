using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using MergePuzzle.Abstract;
using MergePuzzle.ItemRewardBackup;
using NaughtyAttributes;
using Paxie;
using Paxie.MergeStudio.GameCore.Gameplay.ScrollableArea;
using Spine;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MergePuzzle
{
	public class BoardTaskItemController : ScrollableItem, IPerformCameraChangeAnimation, IEventReceiver<EntityUpdateEvent.BoardItemStatusChange>, IEventReceiverBase, IEventReceiver<TaskEvent.TaskLastCoinOut>, IEventReceiver<SrDebuggerEvent.ShowDebugLayers>, IEventReceiver<MetaEvent.ActiveSeasonStatusChange>, IEventReceiver<ItemRewardConvertEvent.UpdateRewardImages>, IEventReceiver<TaskEvent.TaskUpdateRewardUI>
	{
		[StructLayout((LayoutKind)0, Size = 1)]
		public struct CharAnimationStates
		{
			public const string EMPTY = "EMPTY";

			public const string IDLE_DEFAULT = "IDLE_ANIM";

			public const string APPEAR_ANIM = "UP_ANIM";

			public const string DISAPPEAR_ANIM = "DOWN_ANIM";

			public const string IDLE_HAPPY = "HAPPY_ANIM";

			public const string REACTION_ANIM = "REACTION_ANIM";
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CInitializeTaskItem_003Ed__60 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardTaskItemController _003C_003E4__this;

			public BoardTaskController boardTaskController;

			public BoardTaskItem boardTaskItem;

			public BoardEntity boardEntity;

			public EventEntity eventEntity;

			public BoardData boardData;

			public bool isSpecialTask;

			public bool isInitialize;

			public bool isAddedFromPopup;

			public bool isNewlyCreated;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

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
		public struct _003CPerformInitAnimations_003Ed__108 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardTaskItemController _003C_003E4__this;

			public bool playAllAppearAnims;

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
		public struct _003CProcessDoneClickBasedOnType_003Ed__89 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardTaskItemController _003C_003E4__this;

			[NonSerialized]
			public BoardController _003Cboard_003E5__2;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__2;

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

		[BoxGroup("Container")]
		[SerializeField]
		public RectTransform TaskContainerRect;

		public List<GoalUI> GoalUIList;

		public SkeletonGraphic CharAnimGraphic;

		public RectMask2D TopMask;

		public GameObject DebugParent;

		public TextMeshProUGUI DebugTaskNo;

		public Transform DoneUI;

		public Button DoneButton;

		[SerializeField]
		public Image EffectDone;

		public AnimationLoop TaskDoneStandAnimationLoop;

		public DoScale ScaleUpGoalBackground;

		public DoLocalMoveY TaskDoneDoLocalMoveGoalBackground;

		public Image TaskStandImage;

		public DoLocalMove TaskDoneDoLocalMove;

		public AnimationController DoneButtonAnimationController;

		public GameObject TaskDoneParticle;

		[Header("TaskPanel")]
		public RectTransform TaskRewardsParent;

		public BoardTaskItemCurrencyPanelView BoardTaskItemCurrencyPanelViewDefault;

		public BoardTaskItemCurrencyPanelView BoardTaskItemCurrencyPanelViewBoardEvent;

		[NonSerialized]
		public BoardTaskItemCurrencyPanelView _boardTaskItemCurrencyPanelView;

		public RectTransform CoinAppearParent;

		[NonSerialized]
		public BoardTaskItemControllerData _boardTaskItemControllerData;

		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public EventEntity _eventEntity;

		[NonSerialized]
		public BoardData _boardData;

		[NonSerialized]
		public BoardTaskController _boardTaskController;

		[NonSerialized]
		public LayoutElement _layoutElement;

		[NonSerialized]
		public Canvas _canvas;

		[NonSerialized]
		public bool _isDoneButtonAnimating;

		[NonSerialized]
		public ScrollableTaskGoAnimation _scrollableTaskGoAnimation;

		[Header("Configurable")]
		public Image TaskAreaStand;

		public static readonly int TaskPoint;

		public BoardTaskItem BoardTaskItem => null;

		public BoardTaskType BoardTaskType => default(BoardTaskType);

		public int ActiveCharAnimationIndex => 0;

		public bool IsCompleted => false;

		public bool IsCharAnimInitialized => false;

		public bool IsDoneable => false;

		public BoardTaskItemCurrencyPanelView BoardTaskItemCurrencyPanelView => null;

		public bool IsSeasonAvailable => false;

		public int NonAnimatedGoalItemCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public override void Awake()
		{
		}

		public override void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public override void UpdateTick()
		{
		}

		public Canvas ReturnCanvas()
		{
			return null;
		}

		public bool IsActiveInScene()
		{
			return false;
		}

		public void ResetController()
		{
		}

		public void ResetData()
		{
		}

		[AsyncStateMachine(typeof(_003CInitializeTaskItem_003Ed__60))]
		public virtual UniTask<bool> InitializeTaskItem(BoardTaskController boardTaskController, BoardTaskItem boardTaskItem, BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, bool isInitialize, bool isSpecialTask, bool isNewlyCreated = false, bool isAddedFromPopup = false)
		{
			return default(UniTask<bool>);
		}

		public virtual void InitializeParameters(BoardTaskController boardTaskController, BoardTaskItem boardTaskItem, BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, int activeCharIndex)
		{
		}

		public void UpdateTaskRewardUI()
		{
		}

		public void UpdateTaskRewardUI(bool seasonPassActive)
		{
		}

		public (int, int) CalculateTaskRewards(bool seasonPassActive, out int activeRewardCount)
		{
			activeRewardCount = default(int);
			return default((int, int));
		}

		public virtual void InitChar(int activeCharIndex, SkeletonDataAsset skeletonDataAsset)
		{
		}

		public void InitSpecialChar(int taskNo, SkeletonDataAsset skeletonDataAsset)
		{
		}

		public void SendFirebaseEvent(BoardData boardData, BoardTaskItem boardTaskItem)
		{
		}

		public static void SendHotSalesFirebaseEvents(BoardTaskItem boardTaskItem)
		{
		}

		public bool IsGoal(ItemInfo itemInfo)
		{
			return false;
		}

		public void ArrangeSpecialTask()
		{
		}

		public void OpenSpecialTaskRewardInfoPopup()
		{
		}

		public void GainSpecialTaskRewards(DailyRewardData rewardData)
		{
		}

		public void ClearSpecialTaskItems(SpecialTaskData specialTaskData)
		{
		}

		public bool ArrangeTaskRewardIcons()
		{
			return false;
		}

		public void UpdateSeasonPassData()
		{
		}

		public bool TriggerTutorialSteps(bool isInitialize)
		{
			return false;
		}

		public void UpdateGoalUI(bool focus, bool refreshImmediate)
		{
		}

		public void ArrangeGoalUIScale(GameConfig gameConfig, BoardTaskGoal boardTaskGoal, GoalUI goalUI)
		{
		}

		public void ResetGoalUIAndTickImages()
		{
		}

		public (bool, Dictionary<string, int>) ArrangeTaskDoneStatus(BoardTaskItem boardTaskItem, BoardEntity boardEntity, EventEntity eventEntity, bool focus, bool refreshImmediate)
		{
			return default((bool, Dictionary<string, int>));
		}

		public void GoalUIClicked(int goalIndex)
		{
		}

		public void ArrangeComponentClickableStatuses(bool enable)
		{
		}

		public void PlayTaskDoneSound()
		{
		}

		public void ArrangeInputBlocker(bool enable)
		{
		}

		public bool IsTaskReadyToDone()
		{
			return false;
		}

		public void ArrangeDoneUIActiveNess(bool active)
		{
		}

		public void DoneClicked()
		{
		}

		public virtual void TaskDoneAction()
		{
		}

		[AsyncStateMachine(typeof(_003CProcessDoneClickBasedOnType_003Ed__89))]
		public UniTask<bool> ProcessDoneClickBasedOnType()
		{
			return default(UniTask<bool>);
		}

		public void SetTaskProgressForFeatures(BoardController board)
		{
		}

		public void AddToCompletedTasks(BoardController board, BoardTaskItem completedTask)
		{
		}

		public (BoardTaskEntity, bool) ArrangeLevelUp()
		{
			return default((BoardTaskEntity, bool));
		}

		public void ArrangeGlow()
		{
		}

		public void SetGlowStatus(bool enable)
		{
		}

		public void ArrangeAllUIAndAnimations(bool refreshImmediate)
		{
		}

		public void SetVisibility(bool isVisible)
		{
		}

		public void DestroyAnimations()
		{
		}

		public void AnimateGoalUI(int goalUIIndex)
		{
		}

		public void TaskDoneBoardItemsMoveEvent(BoardTaskItem completedTask, bool isFirst)
		{
		}

		public GameObject GetSpecialTaskImage()
		{
			return null;
		}

		public void SetActiveSpecialTaskInfoIcon(bool active)
		{
		}

		public void SetLayoutElement(bool state)
		{
		}

		public void RemoveEventParentsAndRefresh(int id)
		{
		}

		public bool IsEvent()
		{
			return false;
		}

		public void ProcessExtraItemReward()
		{
		}

		public void PerformCameraChangeAnimation(bool appear)
		{
		}

		public void PlayIdleAnimation()
		{
		}

		[AsyncStateMachine(typeof(_003CPerformInitAnimations_003Ed__108))]
		public UniTask<bool> PerformInitAnimations(bool playAllAppearAnims)
		{
			return default(UniTask<bool>);
		}

		public void ResetUI()
		{
		}

		public bool ValidateStateChange(string state)
		{
			return false;
		}

		public void MoveAfterItemDisappearFinished(Vector3 targetPos, bool isLastTask)
		{
		}

		public void SetDoneButtonAnimation(bool isActive)
		{
		}

		public void SetCharAnim(string state, Action<bool> callback = null)
		{
		}

		public void PlayDisappearCharAnim(Action<bool> completion)
		{
		}

		public void PlayAppearCharAnim(Action<bool> completion)
		{
		}

		public TrackEntry SetAnimationInternal(string state, bool loop)
		{
			return null;
		}

		public void ResetAnimationInternal(string state, bool loop)
		{
		}

		public TrackEntry SetAnimationImmediate(string state, bool loop, int timescale)
		{
			return null;
		}

		public TrackEntry AddAnimationImmediate(string state, bool loop)
		{
			return null;
		}

		public void ClearAnims()
		{
		}

		public void PlayIdleCharAnim(bool happy, int trackIndex)
		{
		}

		public void ThrowParticle(Transform transform)
		{
		}

		public void OnEvent(SrDebuggerEvent.ShowDebugLayers e)
		{
		}

		public void OnEvent(MetaEvent.ActiveSeasonStatusChange e)
		{
		}

		public void OnEvent(EntityUpdateEvent.BoardItemStatusChange e)
		{
		}

		public void OnEvent(TaskEvent.TaskLastCoinOut e)
		{
		}

		public void OnEvent(ItemRewardConvertEvent.UpdateRewardImages e)
		{
		}

		public void OnEvent(TaskEvent.TaskUpdateRewardUI e)
		{
		}
	}
}
