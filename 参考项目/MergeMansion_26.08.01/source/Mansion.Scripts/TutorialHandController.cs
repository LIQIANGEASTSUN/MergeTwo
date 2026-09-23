using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Merge;
using Metacore.Cutscenes;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.InputController;
using Spine;
using Tutorial;
using UI;
using UnityEngine;

public class TutorialHandController : ITutorialController
{
	public enum DragReason
	{
		Undefined = 0,
		BetweenItems = 1,
		BetweenPositions = 2,
		Test = 3
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CHandleUntilInputHandDeactivationAsync_003Ed__63 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public TutorialHandController _003C_003E4__this;

		public CancellationToken ct;

		[NonSerialized]
		public bool _003CalreadyHadNoInput_003E5__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CTapPositionUpdateAsync_003Ed__73 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public TutorialHandController _003C_003E4__this;

		public float startDelay;

		public CancellationToken ct;

		public Transform target;

		[NonSerialized]
		public DateTime _003CstartTime_003E5__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeContinueDraggingAsync_003Ed__112 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public int wasCommandId;

		public TutorialHandController _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeContinueDraggingWorldPositionAsync_003Ed__113 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public int wasCommandId;

		public TutorialHandController _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeContinueTappingAtItemAsync_003Ed__114 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public int wasCommandId;

		public TutorialHandController _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeContinueTappingAtUIAsync_003Ed__115 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public int wasCommandId;

		public TutorialHandController _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeStartDraggingAsync_003Ed__88 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float startDelay;

		public CancellationToken ct;

		public TutorialHandController _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeStartDraggingAsync_003Ed__95 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float startDelay;

		public CancellationToken ct;

		public TutorialHandController _003C_003E4__this;

		public int itemType1;

		public ItemVisibility visibility1;

		public int itemType2;

		public ItemVisibility visibility2;

		public HandVisibility handVisibility;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeStartTappingAsync_003Ed__69 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float startDelay;

		public CancellationToken ct;

		public TutorialHandController _003C_003E4__this;

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
	public readonly IScheduler scheduler;

	[NonSerialized]
	public IInputController inputController;

	[NonSerialized]
	public Transform tutorialHandInitParent;

	[NonSerialized]
	public Vector3 tutorialHandInitScale;

	[NonSerialized]
	public RectTransform tutorialHandRectTransform;

	[NonSerialized]
	public int tutorialHandInitSiblingIndex;

	[NonSerialized]
	public Option<IDisposable> _handParentingCancelOption;

	[NonSerialized]
	public AnimationRunner tutorialHandAnimationRunner;

	[NonSerialized]
	public Tweener tweener;

	[NonSerialized]
	public DragReason dragReason;

	[NonSerialized]
	public bool shouldDragAnimationContinueAfterMoves;

	[NonSerialized]
	public bool shouldTapAnimationContinueAtItemAfterMoves;

	[NonSerialized]
	public bool shouldTapAnimationContinueAtUIElementAfterMoves;

	[NonSerialized]
	public bool shouldTapAnimationContinueAtTransformAfterMoves;

	[NonSerialized]
	public HandVisibility _handVisibility;

	[NonSerialized]
	public HandDirection _handPointingDirection;

	[NonSerialized]
	public (int itemId, ItemVisibility visibility) itemForTap;

	[NonSerialized]
	public (int itemId, ItemVisibility visibility) itemForDragStart;

	[NonSerialized]
	public (int itemId, ItemVisibility visibility) itemForDragEnd;

	[NonSerialized]
	public Transform transformForTap;

	[NonSerialized]
	public Vector2 pointForUIElementTap;

	[NonSerialized]
	public bool uiTapIsInWorldPosition;

	[NonSerialized]
	public Vector3 dragFromPosition;

	[NonSerialized]
	public Vector3 dragToPosition;

	[NonSerialized]
	public PositionType dragPositionType;

	public const float DragDuration = 19f / 30f;

	[NonSerialized]
	public CancellationTokenSource _delayCts;

	[NonSerialized]
	public CancellationToken _ct;

	[NonSerialized]
	public int commandId;

	[NonSerialized]
	public HandMode handMode;

	[NonSerialized]
	public List<(string, int, string)> debugForHandShowAndHide;

	[NonSerialized]
	public TitleBarController titleBarController;

	[NonSerialized]
	public IMenuController menuController;

	[NonSerialized]
	public IBoardController boardController;

	public Transform tutorialUIElementTopDialogue => null;

	public Transform tutorialUIElementShopButton => null;

	public Transform tutorialUIElementProducerInventoryButton => null;

	public Ease ease => default(Ease);

	public GameObject tutorialHand => null;

	public static TutorialHandController singleton => null;

	public static bool HasInstance => false;

	public int CurrentCommandId => 0;

	public Vector3 HandPosition => default(Vector3);

	public bool HasInput => false;

	public TutorialHandController(IScheduler scheduler, IInputController inputController, ISafeRollback rollback, TitleBarController titleBarController)
	{
	}

	public void AwakeInner()
	{
	}

	public void StartInner()
	{
	}

	public void OnDestroyInner()
	{
	}

	public void SetHandActive(bool active)
	{
	}

	public bool IsActive()
	{
		return false;
	}

	public bool HasActiveHand()
	{
		return false;
	}

	public void SetScale(Vector3 value)
	{
	}

	[AsyncStateMachine(typeof(_003CHandleUntilInputHandDeactivationAsync_003Ed__63))]
	public UniTask HandleUntilInputHandDeactivationAsync(CancellationToken ct)
	{
		return default(UniTask);
	}

	public void StartTapAtUIPosition(float x, float y, float startDelay = 0f, HandVisibility handIsVisible = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void StartTapAtUIElement(TutorialUIElement tutorialUIElement, float x, float y, float startDelay = 0f, HandVisibility handIsVisible = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void StartTapAtTransform(Transform target, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, HandDirection handDirection = HandDirection.Up, string callingMethod = "", string callingFilePath = "", int callingFileLineNumber = 0)
	{
	}

	public void StartTap(Vector2 pos, float startDelay = 0f)
	{
	}

	public void StartTapAtWorldPosition(Vector2 worldPosition, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeStartTappingAsync_003Ed__69))]
	public UniTask WaitBeforeStartTappingAsync(float startDelay, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void AnimateTap()
	{
	}

	public void StartTap(Coordinate coordinate, float startDelay = 0f)
	{
	}

	public void StartTapAtItem(int itemId, ItemVisibility visibility, float startDelay = 0f, bool allowBubbleItems = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	[AsyncStateMachine(typeof(_003CTapPositionUpdateAsync_003Ed__73))]
	public UniTask TapPositionUpdateAsync(Transform target, float startDelay, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void UpdateHandDirection()
	{
	}

	public void StopUITap(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void StopTapAtItem(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void StopTapAtTransform(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void ResetTutorialHand()
	{
	}

	public void ResetHandDirection()
	{
	}

	public void SetParentToOther(Option<Transform> newParentOption)
	{
	}

	public void ResetParent()
	{
	}

	public void StopAndHide()
	{
	}

	public void StartDragging(float x1, float y1, float x2, float y2, float startDelay = 0f)
	{
	}

	public void StartDragging(Vector2 posFrom, Vector2 posTo, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, PositionType positionType = PositionType.Local)
	{
	}

	public void PrepareForDragging(Vector2 posFrom, Vector2 posTo)
	{
	}

	public void PrepareForDraggingWorldPosition(Vector2 posFrom, Vector2 posTo)
	{
	}

	public void StartDragging(Vector2 posFrom, Vector2 posTo)
	{
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeStartDraggingAsync_003Ed__88))]
	public UniTask WaitBeforeStartDraggingAsync(float startDelay, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void AnimateDrag()
	{
	}

	public void StartDragging(int itemId1, ItemVisibility visibility1, int itemId2, ItemVisibility visibility2, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void StartDragging(Vector3 startPosition, Vector3 endPosition, PositionType positionType, float startDelay = 0f, string callingMethod = "", string callingFilePath = "", int callingFileLineNumber = 0)
	{
	}

	public bool CheckAndPrepareForDraggingBetweenItems(int itemId1, ItemVisibility visibility1, int itemId2, ItemVisibility visibility2, out Vector2 tempFromPos, out Vector2 tempToPos)
	{
		tempFromPos = default(Vector2);
		tempToPos = default(Vector2);
		return false;
	}

	public void StartDragging(Coordinate startPosition, Vector3 endPosition, float startDelay = 0f, string callingMethod = "", string callingFilePath = "", int callingFileLineNumber = 0)
	{
	}

	public void WaitAndStartDragging(float startDelay, int itemType1, ItemVisibility visibility1, int itemType2, ItemVisibility visibility2, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeStartDraggingAsync_003Ed__95))]
	public UniTask WaitBeforeStartDraggingAsync(float startDelay, int itemType1, ItemVisibility visibility1, int itemType2, ItemVisibility visibility2, HandVisibility handVisibility, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void StopDrag(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0)
	{
	}

	public void MandatoryStopSteps()
	{
	}

	public void StopAnyWaitingDelayCoroutine()
	{
	}

	public void MenuSituationChanged(bool someMenuIsVisible)
	{
	}

	public void OnCutsceneStarted(Cutscene cutscene, bool debug = false)
	{
	}

	public void MergeBoardGoesVisible()
	{
	}

	public void MergeBoardGoesHidden()
	{
	}

	public void MenuGoesVisible()
	{
	}

	public void MenuGoesHidden()
	{
	}

	public void MergeItemDragStarted()
	{
	}

	public void MergeItemDragEnded()
	{
	}

	public void WorldPositionDragStarted()
	{
	}

	public void WorldPositionDragEnded()
	{
	}

	public void StopDragAndTaps()
	{
	}

	public void ContinueDragAndTaps(bool boardIsVisible)
	{
	}

	public bool AnimationWaitingToContinue()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeContinueDraggingAsync_003Ed__112))]
	public UniTask WaitBeforeContinueDraggingAsync(int wasCommandId, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeContinueDraggingWorldPositionAsync_003Ed__113))]
	public UniTask WaitBeforeContinueDraggingWorldPositionAsync(int wasCommandId, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeContinueTappingAtItemAsync_003Ed__114))]
	public UniTask WaitBeforeContinueTappingAtItemAsync(int wasCommandId, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeContinueTappingAtUIAsync_003Ed__115))]
	public UniTask WaitBeforeContinueTappingAtUIAsync(int wasCommandId, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void HandleAnimationEvent(TrackEntry trackEntry, Spine.Event spineEvent)
	{
	}

	public Transform GetTutorialUIElement(TutorialUIElement tutorialUIElement)
	{
		return null;
	}

	public Transform GetEnergyModeButtonTransform()
	{
		return null;
	}

	public void LogHandUsage(string message)
	{
	}
}
