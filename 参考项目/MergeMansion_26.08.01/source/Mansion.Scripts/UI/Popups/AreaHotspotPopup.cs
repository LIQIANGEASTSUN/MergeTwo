using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameAddressables;
using GameLogic.Hotspots;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.GameAddressables.AddressableComponents;
using Metacore.MergeMansion.UI.Libraries;
using Metacore.Rendering.Components;
using TMPro;
using UI.Areas;
using UI.Buttons;
using UI.Indicators;
using UI.Libraries;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class AreaHotspotPopup : PopupBase<AreaHotspotMenuState>
	{
		[Serializable]
		public struct References
		{
			public GameObject popup;

			public Image blueOverlay;

			public TextMeshProUGUI nameText;

			[Header("Area progress bar")]
			public SerializableUnityOption<GameObject> progressBarContent;

			public SliderProgressBar progressBar;

			public SpineRewardItemIndicator rewardIndicator;

			[Header("Header")]
			public SerializableUnityOption<GameObject> headerIconContainer;

			public Image headerIcon;

			[Header("Animations")]
			public Animator animator;

			[Header("Bonus")]
			public GameObject bonusTimerSection;

			public TimerControl bonusTimer;

			public TextMeshProUGUI bonusTimerDescriptionText;

			[Header("Libraries")]
			public AreaIcons areaIconsLibrary;

			public LocationTravelUILibrary locationTravelUILibrary;
		}

		[Serializable]
		public struct DefaultTaskReferences
		{
			public GameObject content;

			public TextMeshProUGUI descriptionText;

			public TweenedButton buttonComplete;

			public BCSHModifier buttonBCSH;

			public TextMeshProUGUI buttonText;

			public SpineInfoItemIndicator[] requirements;

			public GameObject rewardContainer;

			public SpineRewardItemIndicator[] rewards;

			public SpineRewardItemIndicator[] bonusRewards;

			public RedDotIndicator redDotIndicator;

			[Header("Task Group hotspot")]
			public GameObject taskGroupProgressGroup;

			public SliderProgressBar taskGroupProgressBar;

			public SpineRewardItemIndicator taskGroupRewardIndicator;

			public GameObject taskGroupCompletedGroup;

			public TweenedButton taskGroupCompletedButtonComplete;

			[Header("Multi-step hotspot")]
			public GameObject multiStepGroupProgressGroup;

			public SliderProgressBar multiStepGroupProgressBar;

			public SerializableUnityOption<BonusRewardsGroup> bonusRewardsGroupOption;

			[Header("Requirement Containers")]
			public GameObject taskRequirementContainer;

			public GameObject noTaskRequirementContainer;

			[Header("Traveling")]
			public GameObject travelContainer;

			public LocationTravelSlider buttonSlider;

			[SerializeField]
			public SpineRewardItemIndicator bonusTokenIndicator;

			[Header("Task Difficulty")]
			public GameObject taskDifficultyGroup;

			[Header("Extra Spawns")]
			public ExtraSpawnsView extraSpawnsView;
		}

		[Serializable]
		public struct LockedTaskReferences
		{
			public ToDoTaskScheduleLockedMergeGoalItem content;

			public TimerControl timer;
		}

		[Serializable]
		public struct CharacterTaskReferences
		{
			public GameObject content;

			public TextMeshProUGUI descriptionText;

			public TweenedButton buttonComplete;

			public BCSHModifier buttonBCSH;

			public TextMeshProUGUI buttonText;

			public SpineInfoItemIndicator[] requirements;

			public GameObject rewardContainer;

			public SpineRewardItemIndicator[] rewards;

			public SpineRewardItemIndicator[] bonusRewards;

			public RedDotIndicator redDotIndicator;

			[Header("Task Group hotspot")]
			public GameObject taskGroupProgressGroup;

			public SliderProgressBar taskGroupProgressBar;

			public SpineRewardItemIndicator taskGroupRewardIndicator;

			public GameObject taskGroupCompletedGroup;

			public TweenedButton taskGroupCompletedButtonComplete;

			[Header("Multi-step hotspot")]
			public GameObject multiStepGroupProgressGroup;

			public SliderProgressBar multiStepGroupProgressBar;

			[Header("Character")]
			public AddressableImage characterImageLoader;

			[Header("Traveling")]
			public GameObject travelContainer;

			public LocationTravelSlider buttonSlider;

			public SerializableUnityOption<BonusRewardsGroup> bonusRewardsGroupOption;

			[Header("Task Difficulty")]
			public GameObject taskDifficultyGroup;

			[Header("Extra Spawns")]
			public ExtraSpawnsView extraSpawnsView;
		}

		[Serializable]
		public struct CardStackTaskReferences
		{
			public ToDoTaskMergeGoalItem content;

			public TweenedButton buttonComplete;

			public BCSHModifier buttonBCSH;

			public TextMeshProUGUI buttonText;

			public GameObject rewardContainer;

			public SpineRewardItemIndicator[] rewards;

			public SpineRewardItemIndicator[] bonusRewards;

			public RedDotIndicator redDotIndicator;

			[Header("Traveling")]
			public GameObject travelContainer;

			public LocationTravelSlider buttonSlider;

			public SerializableUnityOption<BonusRewardsGroup> bonusRewardsGroupOption;

			[Header("Task Difficulty")]
			public GameObject taskDifficultyGroup;

			[Header("Extra Spawns")]
			public ExtraSpawnsView extraSpawnsView;
		}

		[Serializable]
		public struct IllustrationTaskReference
		{
			public GameObject content;

			public SerializableUnityOption<TextMeshProUGUI> idleText;

			public SerializableUnityOption<Image> idleImage;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CExecuteDifficultTaskTutorialStep_003Ed__77 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public AreaHotspotPopup _003C_003E4__this;

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
		public struct _003CLoadCharacterPortrait_003Ed__46 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public AreaHotspotPopup _003C_003E4__this;

			public CharacterConfig config;

			public CancellationToken ct;

			[NonSerialized]
			public UniTask<Common.Result>.Awaiter _003C_003Eu__1;

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
		public struct _003COpenHotspotWithDelay_003Ed__37 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public AreaHotspotPopup _003C_003E4__this;

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
		public struct _003CWaitForTransitionAndClose_003Ed__70 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public AreaHotspotPopup _003C_003E4__this;

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

		public static readonly ProfilerMarker MARKER;

		[Header("Common UI")]
		[SerializeField]
		public References refs;

		[Header("Default task")]
		[SerializeField]
		public DefaultTaskReferences defaultTaskRefs;

		[Header("Locked task")]
		[SerializeField]
		public LockedTaskReferences lockedTaskRefs;

		[Header("Character task")]
		[SerializeField]
		public CharacterTaskReferences characterTaskRefs;

		[Header("CardStack task")]
		[SerializeField]
		public CardStackTaskReferences cardStackTaskRefs;

		[Header("Illustration task")]
		[SerializeField]
		public IllustrationTaskReference illustrationTaskRefs;

		[NonSerialized]
		public MapSpotUIMarker _currentMarker;

		[NonSerialized]
		public bool _aboutToClose;

		[NonSerialized]
		public bool _allowOnlyPositiveAction;

		[NonSerialized]
		public PlayerCurrentTimeRequirement _timeRequirement;

		[NonSerialized]
		public Option<Action> _updateExtraSpawnsCallbackOption;

		[NonSerialized]
		public Rollback _portraitsLoading;

		[NonSerialized]
		public Option<Rollback> _tutorialTapRollback;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override AreaHotspotMenuState MenuState { get; set; }

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public Rollback GetPortraitsRollback()
		{
			return null;
		}

		public void Update()
		{
		}

		public override void PopulateContent()
		{
		}

		[AsyncStateMachine(typeof(_003COpenHotspotWithDelay_003Ed__37))]
		public UniTask OpenHotspotWithDelay(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void OnHotspotClosed()
		{
		}

		public void RefreshVisuals()
		{
		}

		public void RefreshVisuals(IHotspotDefinition hotspotDefinition, MapSpotUIMarker marker)
		{
		}

		public void RefreshPopupContent()
		{
		}

		public void RefreshScheduleLockedContent(PlayerCurrentTimeRequirement timeRequirement)
		{
		}

		public void RefreshDefaultContent()
		{
		}

		public void AnimateTaskGroupCompletionReward(SliderProgressBar progressBar, Transform rewardTransform, TweenedButton button, Action onCompleteAction = null)
		{
		}

		public void RefreshCharacterTaskContent()
		{
		}

		[AsyncStateMachine(typeof(_003CLoadCharacterPortrait_003Ed__46))]
		public UniTask LoadCharacterPortrait(CharacterConfig config, CancellationToken ct)
		{
			return default(UniTask);
		}

		public void RefreshCardStackContent()
		{
		}

		public void SetupBoultonLeaguePointsValue(HotspotDefinition hotspot, GameObject targetParentObj, TMP_Text targetLabel)
		{
		}

		public void SetupSoloMilestoneTokenValue(int hotspotSoloMilestoneHotspotValue, GameObject soloMilestoneTokenSection, TMP_Text soloMilestoneTokenValue)
		{
		}

		public void SetupExtraSpawnsView(ExtraSpawnsView extraSpawnsView, IHotspotDefinition hotspot)
		{
		}

		public void InitExtraSpawnsUpdateCallback(ExtraSpawnsView extraSpawnsView, IHotspotDefinition hotspot, IIconLibrary iconLibrary)
		{
		}

		public void RemoveExtraSpawnsCallback()
		{
		}

		public void RefreshIllustrationContent()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		public void OnAreaAddressableDownloaded(AddressableAgent agent)
		{
		}

		public override void CloseMenuButton()
		{
		}

		public void PopulateRequirements(IHotspotDefinition hotspot, SpineInfoItemIndicator[] indicators)
		{
		}

		public void PopulateRewards(SpineRewardItemIndicator[] indicators, List<PlayerReward> rewards, bool isBonusReward, bool isAvailable = false)
		{
		}

		public void HideRewards(SpineRewardItemIndicator[] indicators)
		{
		}

		public void SetBonusTimer(IHotspotDefinition hotspot)
		{
		}

		public void DisableBonusTimer()
		{
		}

		public void DisableBonusTimer(IHotspotDefinition hotspot, SpineRewardItemIndicator[] bonusRewards)
		{
		}

		public void HandleLegacyEventFlow(MergeBoardId mergeBoard)
		{
		}

		public void ShowEventCalendarMenu()
		{
		}

		public void ShowCollectEventProgressRewardMenu()
		{
		}

		public void TransitionToMergeBoard(MergeBoardId mergeBoard)
		{
		}

		[PublicAPI]
		public void PositiveActionButton()
		{
		}

		public void CompleteHotspot(IHotspotDefinition hotspot)
		{
		}

		public void PartiallyCompleteHotspot(IHotspotDefinition hotspot)
		{
		}

		[AsyncStateMachine(typeof(_003CWaitForTransitionAndClose_003Ed__70))]
		public UniTask WaitForTransitionAndClose(CancellationToken ct)
		{
			return default(UniTask);
		}

		public TweenedButton GetCompleteButton()
		{
			return null;
		}

		[PublicAPI]
		public void InfoButtonClicked()
		{
		}

		[PublicAPI]
		public void CloseAreaClicked()
		{
		}

		public void OnLocationTravelFinished()
		{
		}

		public void SetupRewardIndicator()
		{
		}

		public void SetDifficultTaskVisibility(GameObject difficultTaskObject)
		{
		}

		[AsyncStateMachine(typeof(_003CExecuteDifficultTaskTutorialStep_003Ed__77))]
		public UniTask ExecuteDifficultTaskTutorialStep(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void OnDifficultTaskButtonClicked()
		{
		}
	}
}
