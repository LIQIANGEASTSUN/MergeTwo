using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class CollectibleBoardEventProgressionPopup : PopupBase<CollectibleBoardEventProgressionMenuState>
	{
		[Serializable]
		public struct References
		{
			public GameObject Popup;

			public Image BlueOverlay;

			public ScrollRect ScrollRect;

			public Transform SegmentContainer;

			public CollectibleBoardEventProgressSegment SegmentPrefab;

			public CollectibleBoardEventProgressSegment DecorationSegmentPrefab;

			public CollectibleBoardEventProgressSegment RecurringSegmentPrefab;

			public CollectibleBoardEventProgressSegment FallbackSegmentPrefab;

			public SerializableUnityOption<CollectibleBoardEventProgressSegmentColors> SegmentColors;

			public SerializableUnityOption<TextMeshProUGUI> HeaderText;

			public SerializableUnityOption<TimerControl> EventTimer;

			public SerializableUnityOption<GameObject> EndingSoon;

			public SerializableUnityOption<EventShopExtensionWidget> ExtensionWidget;

			public SerializableUnityOption<ProgressionEventItemProgressBar> ProgressBar;

			public SerializableUnityOption<RedDotIndicator> rewardTabRedDotIndicator;

			public SerializableUnityOption<ProgressionPopupSubGoalLinker> SubGoalLinker;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPoll_003Ed__23 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CollectibleBoardEventProgressionPopup _003C_003E4__this;

			public CancellationToken ct;

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

		[SerializeField]
		public References Refs;

		[NonSerialized]
		public readonly List<CollectibleBoardEventProgressSegment> _instantiatedSegments;

		[NonSerialized]
		public Option<Rollback> _pollRoutine;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override string MenuTag => null;

		public override CollectibleBoardEventProgressionMenuState MenuState { get; set; }

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

		public override void OnContentPopulated()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		public void StopPollRoutineIfExists()
		{
		}

		public void StartPollRoutine()
		{
		}

		[AsyncStateMachine(typeof(_003CPoll_003Ed__23))]
		public UniTask Poll(CancellationToken ct)
		{
			return default(UniTask);
		}

		public bool HasEventExpired()
		{
			return false;
		}

		public void InitializeProgressBar()
		{
		}

		public void InitializeExtensionWidget()
		{
		}

		public void InstantiateSegments()
		{
		}

		public int GetFirstClaimableLevel()
		{
			return 0;
		}

		public CollectibleBoardEventProgressSegment CreateSegment(int level, EventLevelRewardClaimStatus claimStatus, CollectibleBoardEventProgressSegment.OffsetCondition offsetCondition)
		{
			return null;
		}

		public CollectibleBoardEventProgressSegment GetSegmentPrefab(IPlayerReward reward, int level, EventLevelInfo levelInfo, LevelEventLevelType levelType, bool isRecurringLevel, bool topLevel)
		{
			return null;
		}

		public void DestroySegments()
		{
		}

		public float CalculateOpeningScrollPosition()
		{
			return 0f;
		}

		public CollectibleBoardEventProgressSegment GetOpeningScrollTargetSegment()
		{
			return null;
		}

		public CollectibleBoardEventProgressSegment GetSegmentForLevel(int level)
		{
			return null;
		}

		public virtual void OnLevelClaimed(List<IPlayerReward> rewards)
		{
		}

		public void TransitionToMergeBoard(MergeBoardId mergeBoardId)
		{
		}

		public void TransitionToToDoPopup()
		{
		}

		public void RefreshRewardTabRedDotIndicator()
		{
		}

		[PublicAPI]
		public void PlayButtonClicked()
		{
		}

		[PublicAPI]
		public void InfoButtonClicked()
		{
		}

		public override void OnHidden(HideMenuReason reason)
		{
		}

		public void OnEventRemoved(CollectibleBoardEventInfo removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}
	}
}
