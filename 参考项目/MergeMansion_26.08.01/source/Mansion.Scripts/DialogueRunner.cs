using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Audio;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Dialogue;
using GameAddressables;
using GameLogic;
using GameLogic.Config.Map.Characters;
using GameLogic.Player;
using GameLogic.Player.Director;
using GameLogic.Story;
using Merge;
using Metacore.Cutscenes;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.SystemGroups;
using Metacore.Rendering;
using Metaplay.Core;
using UI;
using UnityEngine;
using Utility;

public class DialogueRunner : MonoBehaviour, IDialogueController, ISharedDialogueController, ITickSystem
{
	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CBottomCloseTimerAsync_003Ed__150 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public DialogueRunner _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CInitTimerAsync_003Ed__121 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public DialogueRunner _003C_003E4__this;

		public StoryElementInfo storyElementInfo;

		public Action onPlaybackStarted;

		public Action onPlaybackFinished;

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
	public struct _003CInputDelayTimerAsync_003Ed__153 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public MetaDuration inputDelay;

		public CancellationToken ct;

		public DialogueRunner _003C_003E4__this;

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
	public struct _003CTopCloseTimerAsync_003Ed__149 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public DialogueRunner _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitBeforeStartingDialogAsync_003Ed__142 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public DialogueRunner _003C_003E4__this;

		public StoryElementInfo storyToPlayback;

		public StoryPlaybackFlags flags;

		public Action onPlaybackFinishedCallback;

		public Action okButtonAction;

		public float startDelay;

		public CancellationToken ct;

		public Action onPlaybackStartedCallback;

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

	[Header("Dialogue runners")]
	public GenericDialogRunner genericDialogRunner;

	public CompactDialogRunner compactDialogRunner;

	public CompactDialogRunner compactBottomDialogRunner;

	public SMSDialogueRunner smsDialogRunner;

	public MaddieMeetsMansionDialogRunner maddieMeetsMansionDialogRunner;

	[Header("Input blockers")]
	public GameObject inputBlockerFullscreen;

	public GameObject inputBlockerLowerDialog;

	public GameObject inputBlockerCompactDialog;

	public GameObject inputBlockerCompactBottomDialog;

	public GameObject inputBlockerSkip;

	[Header("UI elements")]
	public GameObject unityUIGenericRunner;

	public GameObject unityUICompactRunner;

	public GameObject unityUICompactBottomRunner;

	public Transform unityUICompactRunnerCloseButton;

	public Transform unityUICompactBottomRunnerCloseButton;

	[NonSerialized]
	public bool closingUICompactRunner;

	[NonSerialized]
	public bool closingUICompactBottomRunner;

	public GameObject unityUISMSRunner;

	public GameObject unityUIMaddieMeetsMansionDialogRunner;

	[SerializeField]
	public GameObject skipButton;

	public static readonly DialogLayoutEvent[] makesLeftCharacterVisible;

	public static readonly DialogLayoutEvent[] makesLeftCharacterHidden;

	public static readonly DialogLayoutEvent[] makesRightCharacterVisible;

	public static readonly DialogLayoutEvent[] makesRightCharacterHidden;

	public static readonly List<DialogCharacterType> EmptyChars;

	public static readonly string[] legalInitialStoryDefs;

	[NonSerialized]
	public bool leftCharacterVisible;

	[NonSerialized]
	public bool rightCharacterVisible;

	[NonSerialized]
	public bool leftSpeechBubbleVisible;

	[NonSerialized]
	public bool rightSpeechBubbleVisible;

	[NonSerialized]
	public List<DialogItemInfo> dialoguesToShow;

	[NonSerialized]
	public int dialogueIndex;

	[NonSerialized]
	public StoryPlaybackFlags storyPlaybackFlags;

	[NonSerialized]
	public MetaTime lastTime;

	[NonSerialized]
	public bool moveToNextDialogId;

	[NonSerialized]
	public bool moveToNextDialogIdAtEndOfScrolling;

	[NonSerialized]
	public bool useInputBlockingBackLayer;

	[NonSerialized]
	public bool dialogueHasCompleted;

	[NonSerialized]
	public DialogMode dialogMode;

	[NonSerialized]
	public DialogState dialogState;

	[NonSerialized]
	public Option<CancellationTokenSource> _delayCts;

	[NonSerialized]
	public bool delayCoroutineActive;

	[NonSerialized]
	public bool unityUIDisabled;

	[NonSerialized]
	public IActionsExecutor actionsExecutor;

	[NonSerialized]
	public IBoardController boardController;

	[NonSerialized]
	public IAnalyticsCollector analytics;

	[NonSerialized]
	public IAudioPlayer audio;

	[NonSerialized]
	public IMenuController menu;

	[NonSerialized]
	public IPlayer player;

	[NonSerialized]
	public PlayerClientContext playerContext;

	[NonSerialized]
	public MainStateManager mainStateManager;

	[NonSerialized]
	public Director director;

	[NonSerialized]
	public string textLocalizationId;

	[NonSerialized]
	public bool textShownUsingAnimation;

	[NonSerialized]
	public Action onPlaybackFinished;

	[NonSerialized]
	public Action confirmButtonCallback;

	[NonSerialized]
	public bool animateDialogueText;

	public const float CONTINUE_COOLDOWN_DURATION = 250f;

	[NonSerialized]
	public MetaTime previousNextClick;

	public static Action OnCutsceneDialogueContinueClicked;

	public static Action OnCutsceneDialogueSkipClicked;

	[NonSerialized]
	public bool isCutsceneDialogue;

	[NonSerialized]
	public Option<CancellationTokenSource> _inputDelayCts;

	[NonSerialized]
	public bool dialogueCanBeSkipped;

	public StoryElementInfo StepToPlayback { get; set; }

	public DialogItemInfo CurrentDialogItem => null;

	public StoryPlaybackFlags StoryPlaybackFlags => default(StoryPlaybackFlags);

	public static DialogueRunner singleton => null;

	public static bool HasInstance => false;

	public DialogMode DialogMode => default(DialogMode);

	public IBoardController BoardController => null;

	public IAnalyticsCollector Analytics => null;

	public IAudioPlayer Audio => null;

	public IActionsExecutor Executor => null;

	public IMenuController Menu => null;

	public IPlayer Player => null;

	public PlayerClientContext PlayerContext => null;

	public bool DialogueIsOpen => false;

	public bool InputDelayActive => false;

	public ICutsceneCamera CutsceneCamera => null;

	public bool HasCamera => false;

	public event Action<DialogItemInfo> DialogueStarted
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

	public event Action<DialogItemId> DialogueChanged
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

	public event Action<DialogItemInfo> DialogueHidden
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

	public event Action<DialogItemInfo> DialogueStateSet
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

	public event Action<List<MapCharacterType>> DialogueResetMapCharacters
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

	public DialogueRunner Init(ISafeRollback rollback, IScheduler scheduler, AddressablesSession addressablesSession, IActionsExecutor actionsExecutor, IBoardController boardController, IAnalyticsCollector analytics, IAudioPlayer audio, IMenuController menu, IPlayer player, PlayerClientContext playerContext, MainStateManager mainStateManager, Director director)
	{
		return null;
	}

	public void Tick()
	{
	}

	public void OnDisableInner()
	{
	}

	public void StartInner()
	{
	}

	public void UpdateInner()
	{
	}

	public void DialoguePlaybackInit(StoryElementInfo storyElementInfo, Action onPlaybackStarted = null, Action onPlaybackFinished = null)
	{
	}

	[AsyncStateMachine(typeof(_003CInitTimerAsync_003Ed__121))]
	public UniTaskVoid InitTimerAsync(StoryElementInfo storyElementInfo, Action onPlaybackStarted, Action onPlaybackFinished, CancellationToken ct)
	{
		return default(UniTaskVoid);
	}

	public bool IsDialogueShown()
	{
		return false;
	}

	public bool IsDialogueShown(StoryDefinitionId storyDefinitionId)
	{
		return false;
	}

	public bool IsDelayCoroutineActive()
	{
		return false;
	}

	public bool ShouldDialoguePreventEvents()
	{
		return false;
	}

	public void DisableWholeDialog()
	{
	}

	public (bool, DialogUtilities.DialogPartialState) FixDialogState(DialogItemInfo dialogue, StoryElementInfo originatingStory)
	{
		return default((bool, DialogUtilities.DialogPartialState));
	}

	public void SetDialogueSkippingEnabled(bool enabled)
	{
	}

	public void SetDialogueState(DialogItemInfo dialogue, StoryElementInfo originatingStory = null)
	{
	}

	public List<DialogCharacterType> GetCharactersToDiscover(DialogItemInfo dialogue)
	{
		return null;
	}

	public bool HotspotControllerSingletonInitialized()
	{
		return false;
	}

	public void HideNonDialogueUI(DialogMode mode)
	{
	}

	public void ShowNonDialogueUI(DialogMode mode)
	{
	}

	public void ShowDialog()
	{
	}

	public void HideDialog()
	{
	}

	public void ForceHideDialog()
	{
	}

	public IDialogueRunner CurrentDialogueRunner()
	{
		return null;
	}

	public void StartPlaybackOf(StoryElementInfo storyDefinition, float startDelay = 0f, Action onPlaybackStartedCallback = null, Action onPlaybackFinishedCallback = null, Action confirmButtonAction = null, StoryPlaybackFlags flags = StoryPlaybackFlags.None)
	{
	}

	public void EndDelayCoroutine()
	{
	}

	public void OnDelayCoroutineEnded()
	{
	}

	public static bool ShouldStoryForceDisableMergeBoardTransition(StoryElementInfo storyDefinition)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CWaitBeforeStartingDialogAsync_003Ed__142))]
	public UniTaskVoid WaitBeforeStartingDialogAsync(StoryElementInfo storyToPlayback, float startDelay, Action onPlaybackStartedCallback, Action onPlaybackFinishedCallback, Action okButtonAction, StoryPlaybackFlags flags, CancellationToken ct)
	{
		return default(UniTaskVoid);
	}

	public void MoveToNextDialogId()
	{
	}

	public int GetDialogueChainStepCount(int index, out int stepNumber, bool includeEmpty = false)
	{
		stepNumber = default(int);
		return 0;
	}

	public void LogDialogueViewAnalytics(string parentId, bool isSkipped, int index, MetaDuration duration)
	{
	}

	public void StampLastTime(out MetaDuration duration)
	{
		duration = default(MetaDuration);
	}

	public void TopCloseButtonClicked()
	{
	}

	public void BottomCloseButtonClicked()
	{
	}

	[AsyncStateMachine(typeof(_003CTopCloseTimerAsync_003Ed__149))]
	public UniTaskVoid TopCloseTimerAsync(CancellationToken ct)
	{
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003CBottomCloseTimerAsync_003Ed__150))]
	public UniTaskVoid BottomCloseTimerAsync(CancellationToken ct)
	{
		return default(UniTaskVoid);
	}

	public void StartInputDelay()
	{
	}

	public void StopInputDelayIfExists()
	{
	}

	[AsyncStateMachine(typeof(_003CInputDelayTimerAsync_003Ed__153))]
	public UniTaskVoid InputDelayTimerAsync(MetaDuration inputDelay, CancellationToken ct)
	{
		return default(UniTaskVoid);
	}

	public void ContinueClicked()
	{
	}

	public void NextStep()
	{
	}

	public void PreviousStep()
	{
	}

	public void ResetStep()
	{
	}

	public void LimitInputsToDialog()
	{
	}

	public void AllowInputToOtherParts()
	{
	}

	public void DisableInputBlocking()
	{
	}

	public void AllowCameraMovementIfNeeded()
	{
	}

	public bool IsWorldInputBlocked()
	{
		return false;
	}

	public void BlockNonDialogueInput()
	{
	}

	public void CallDialogChanged(DialogItemId nextDialog)
	{
	}

	public void ScrollingCompeted()
	{
	}

	public bool IsDialogCompleted()
	{
		return false;
	}

	public void SkipButtonAction(bool skipInputDelay = false)
	{
	}

	public void OnShowScreenTransitionStarted()
	{
	}

	public Character GetCharacter(DialogCharacterType characterType)
	{
		return null;
	}

	public CharacterConfig GetCharacterConfig(DialogCharacterType characterType, string config = "")
	{
		return null;
	}

	public void RefreshLocalizedTexts()
	{
	}

	public void TriggerResetMapCharacters(List<MapCharacterType> resettableMapCharacters)
	{
	}

	public void Reset()
	{
	}

	public void SetDialogueState(CutsceneDialogueControlBehaviour behaviour, Action onComplete)
	{
	}

	public void EndDialogue()
	{
	}
}
