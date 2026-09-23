using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using CustomUI.TodoTasks;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameLogic.Hotspots;
using GameLogic.Player.MergeTasks;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using TMPro;
using UI.Areas;
using UI.DailyTodo;
using UI.Indicators;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class AreaTaskPopup : PopupBase<AreaTaskPopupMenuState>, ITaskActionListener
	{
		[Serializable]
		public struct References
		{
			public GameObject popup;

			public Image blueOverlay;

			public TextMeshProUGUI nameText;

			[Header("Area info")]
			public GameObject areaBannerContainer;

			public AreaBanner areaBanner;

			public CanvasGroup areaImageCanvasGroup;

			public GameObject progressBarContent;

			public SliderProgressBar progressBar;

			public SpineRewardItemIndicator rewardIndicator;

			public Transform contentPanel;

			[Header("Animation configs")]
			public string ShowAreaImagePanelAnimationConfigId;

			public string ShowContentPanelAnimationConfigId;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCreateTaskToDoItem_003Ed__39 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public AreaTaskPopup _003C_003E4__this;

			public Rollback rollback;

			public CancellationToken ct;

			public bool cleanOpen;

			[NonSerialized]
			public UniTask<UnityOption<ToDoTaskItem>>.Awaiter _003C_003Eu__1;

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
		public struct _003CWaitForTransitionAndClose_003Ed__48 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public AreaTaskPopup _003C_003E4__this;

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

		[Header("Common UI")]
		[SerializeField]
		public References refs;

		[SerializeField]
		public ToDoItemFactory itemFactory;

		[SerializeField]
		public AreaIcons areaIcons;

		[Header("Animation parameters")]
		[SerializeField]
		public float areaBannerFadeInDuration;

		[SerializeField]
		public AnimationCurve areaBannerFadeInCurve;

		[NonSerialized]
		public MapSpotUIMarker currentMarker;

		[NonSerialized]
		public bool aboutToClose;

		[NonSerialized]
		public bool allowOnlyPositiveAction;

		[NonSerialized]
		public ToDoTaskItem taskItem;

		[NonSerialized]
		public Option<Rollback> cachedRollback;

		[NonSerialized]
		public List<Vector3> requirementItemPositions;

		[NonSerialized]
		public AnimationConfig areaBannerAnimationConfig;

		[NonSerialized]
		public Tween areaBannerFadeInTween;

		[NonSerialized]
		public AnimationConfig contentPanelAnimationConfig;

		[NonSerialized]
		public Tween contentPanelFadeInTween;

		public override bool ShowImmediatelyAfterMenuBeforeWasClosed => false;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override AreaTaskPopupMenuState MenuState { get; set; }

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override void PopulateContent()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		[PublicAPI]
		public override void CloseMenuButton()
		{
		}

		public void ReInitTasks()
		{
		}

		public void UpdateTaskContents()
		{
		}

		public void RefreshVisuals()
		{
		}

		public void RefreshPopupContent(bool cleanOpen = false)
		{
		}

		[AsyncStateMachine(typeof(_003CCreateTaskToDoItem_003Ed__39))]
		public UniTask CreateTaskToDoItem(bool cleanOpen, Rollback rollback, CancellationToken ct)
		{
			return default(UniTask);
		}

		public void OnTaskItemLoaded(UnityOption<ToDoTaskItem> loadedItemOption)
		{
		}

		public void UpdateRequirementItemPositions()
		{
		}

		public bool CanCompleteBoardEventTask()
		{
			return false;
		}

		public void ProcessShowBoardEventTaskTap(MergeBoardId targetBoardId)
		{
		}

		public void ProcessShowButtonTap(UnlockAreaTask task)
		{
		}

		public void ProcessShowButtonTap(HotspotMergeTask task)
		{
		}

		public void CompleteHotspot(IHotspotDefinition hotspot)
		{
		}

		public void PartiallyCompleteHotspot(IHotspotDefinition hotspot)
		{
		}

		[AsyncStateMachine(typeof(_003CWaitForTransitionAndClose_003Ed__48))]
		public UniTask WaitForTransitionAndClose(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void ProcessShowButtonTap(RepeatableTask task)
		{
		}

		public void ProcessCompleteCollectibleBoardEventTaskTap(ToDoProgressCollectibleBoardEventItem item, CollectibleBoardEventMergeTask task, List<(Vector3, IPlayerReward)> visualRewards)
		{
		}

		public void ProcessShowCollectibleBoardEventTaskTap(CollectibleBoardEventMergeTask task)
		{
		}

		public void DebugRefresh()
		{
		}
	}
}
