using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Animations;
using Audio;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.SystemGroups;
using Metacore.MergeMansion.UI.Libraries;
using Metaplay.Core;
using Metaplay.Core.Client;
using Offers;
using TMPro;
using UI;
using UI.Buttons;
using UI.Transitions;
using UnityEngine;
using UnityEngine.UI;

public class TitleBarController : MonoBehaviour, ITickSystem, ITitleBarWalletOverride, ITitleBarRewardWidgets, ITitleBarVisibilityStack, ITitleBarPlayerLevelAnchor, ITitleBarCounterButtons, ITitleBarEnergyBars, IMysteryMachineTitleBar, ITitleBarInfiniteEnergy
{
	public class EnergyState
	{
		public int CurrentEnergy;

		public int CurrentVisibleEnergy;
	}

	public struct OverlayElement
	{
		public Transform Transform;

		[CanBeNull]
		public ITitleBarCurrency TitleBarCurrency;

		public OverlayElement(Transform transform, ITitleBarCurrency titleBarCurrency)
		{
			Transform = null;
			TitleBarCurrency = null;
		}

		public bool IsValid()
		{
			return false;
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CDisableButtonTemporarilyAsync_003Ed__89 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public TweenedButton button;

		public CancellationToken ct;

		public TitleBarController _003C_003E4__this;

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
	public struct _003CExecuteAfterDelayAsync_003Ed__122 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float delay;

		public CancellationToken ct;

		public Action action;

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

	[CompilerGenerated]
	public sealed class _003CGetElements_003Ed__123 : IEnumerable<(OverlayElement, int)>, IEnumerable, IEnumerator<(OverlayElement, int)>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public (OverlayElement element, int siblingIndex) _003C_003E2__current;

		[NonSerialized]
		public int _003C_003El__initialThreadId;

		[NonSerialized]
		public int elementBits;

		public int _003C_003E3__elementBits;

		public TitleBarController _003C_003E4__this;

		[NonSerialized]
		public int _003Ci_003E5__2;

		(OverlayElement, int) IEnumerator<(OverlayElement, int)>.Current
		{
			[DebuggerHidden]
			get
			{
				return default((OverlayElement, int));
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CGetElements_003Ed__123(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}

		[DebuggerHidden]
		IEnumerator<(OverlayElement, int)> IEnumerable<(OverlayElement, int)>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CPollAutoLevelUp_003Ed__136 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public TitleBarController _003C_003E4__this;

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
	public Transform defaultContainer;

	[SerializeField]
	public Transform overlayContainer;

	[SerializeField]
	public Transform playerLevelContainer;

	[SerializeField]
	public TextMeshProUGUI playerLevelText;

	[SerializeField]
	public Transform playerLevelIcon;

	[SerializeField]
	public GameObject playerLevelIconParticles;

	[SerializeField]
	public Slider levelAndExperienceProgressBar;

	[SerializeField]
	public Image levelBackground;

	[SerializeField]
	public CurrencyTitleBar coins;

	[SerializeField]
	public CurrencyTitleBar diamonds;

	[SerializeField]
	public GameObject energyTitleBarPrefab;

	[SerializeField]
	public int energyBarSiblingStartIndex;

	[SerializeField]
	public ProgressionEventBoardTopBar progressionEventBoardTopBar;

	[Header("Buttons")]
	[SerializeField]
	public TweenedButton playerLevelButton;

	[SerializeField]
	public TweenedButton settingsButton;

	[SerializeField]
	public TweenedButton coinsButton;

	[SerializeField]
	public TweenedButton diamondsButton;

	[SerializeField]
	public TweenedButton energyButton;

	[SerializeField]
	public TweenedButton shopButton;

	[SerializeField]
	public GameObject shopButtonObject;

	[SerializeField]
	public RedDotIndicator shopButtonRedDotIndicator;

	[SerializeField]
	public Transform offerButtonContainer;

	[SerializeField]
	public CanvasGroup canvasGroup;

	[Header("Library")]
	[SerializeField]
	public IconLibrary iconLibrary;

	[NonSerialized]
	public int currentVisiblePlayerLevel;

	[NonSerialized]
	public int currentVisibleExperience;

	[NonSerialized]
	public int currentExperience;

	[NonSerialized]
	public Option<CancellationTokenSource> _shopButtonCts;

	public const float SHOP_BUTTON_ACTIVATION_DELAY = 0.25f;

	[NonSerialized]
	public readonly Dictionary<EnergyType, EnergyState> energyStatesByType;

	[NonSerialized]
	public Dictionary<EnergyType, EnergyTitleBar> energyTitleBars;

	[NonSerialized]
	public bool currentInfiniteEnergy;

	[NonSerialized]
	public bool currentVisibleInfiniteEnergy;

	[NonSerialized]
	public int currentDiamonds;

	[NonSerialized]
	public int currentVisibleDiamonds;

	[NonSerialized]
	public int currentCoins;

	[NonSerialized]
	public int currentVisibleCoins;

	[NonSerialized]
	public PlayerModel playerModel;

	[NonSerialized]
	public IPlayerClientContext playerContext;

	[NonSerialized]
	public IMenuController menuController;

	[NonSerialized]
	public ISafeRollback schedulerRollback;

	[NonSerialized]
	public IOffersManager offersManager;

	[NonSerialized]
	public IBoardController boardController;

	[NonSerialized]
	public Option<MetaTime> offerExpireTimestamp;

	[NonSerialized]
	public IWalletState defaultWalletState;

	[NonSerialized]
	public readonly List<(UnityEngine.Object from, IWalletState state)> walletStateOverrideRequesters;

	[NonSerialized]
	public bool refreshActiveEnergyTypeUIRequested;

	[Header("Tween options")]
	[UnityEngine.Tooltip("Tween for progress bar change")]
	[SerializeField]
	public TweenOptions progressBarTweenOptions;

	[UnityEngine.Tooltip("Tween for experience icon on level up")]
	[SerializeField]
	public TweenOptions experienceIconTweenOptions;

	[SerializeField]
	public Vector3 experienceIconTweenScale;

	[UnityEngine.Tooltip("Tween for experience label on level up")]
	[SerializeField]
	public TweenOptions levelTextTweenOptions;

	[SerializeField]
	public Vector3 levelTextTweenScale;

	[NonSerialized]
	public Tween playerExperienceProgressBarTween;

	[NonSerialized]
	public Tween playerExperienceIconTween;

	[NonSerialized]
	public Tween playerLevelTextTween;

	[NonSerialized]
	public EnergyType activeEnergyType;

	[NonSerialized]
	public IAudioPlayer audioPlayer;

	[NonSerialized]
	public RectTransform defaultContainerRectTransform;

	[NonSerialized]
	public RectTransform overlayContainerRectTransform;

	public const int POLL_INTERVAL = 1;

	public const int POLL_START_DELAY = 5;

	[NonSerialized]
	public bool TopCounterButtonsEnabled;

	[NonSerialized]
	public Dictionary<int, (OverlayElement, int siblingIndex)> elements;

	[NonSerialized]
	public Option<CancellationTokenSource> _disableOverlayCts;

	[NonSerialized]
	public readonly List<UnityEngine.Object> updatePauseRequesters;

	[NonSerialized]
	public Stack<bool> _visibleAndInteractableStack;

	public static TitleBarController singleton => null;

	public static bool HasInstance => false;

	public IReadOnlyDictionary<EnergyType, EnergyTitleBar> EnergyTitleBars => null;

	public ProgressionEventBoardTopBar ProgressionEventBoardTopBar => null;

	public void OnDisable()
	{
	}

	public TitleBarController Init(ISafeRollback schedulerRollbackInterface, PlayerModel player, IPlayerClientContext context, IMenuController menu, IOffersManager offers, IBoardController board, IAudioPlayer audioPlayer)
	{
		return null;
	}

	public void Tick()
	{
	}

	public void StartInner()
	{
	}

	public Vector2 GetPlayerLevelPosition()
	{
		return default(Vector2);
	}

	public Transform GetPlayerLevelTransform()
	{
		return null;
	}

	public void UpdateInner()
	{
	}

	public void UpdateCoins()
	{
	}

	public void UpdateDiamonds()
	{
	}

	public void OverrideDiamondsAmountDuringAnimation(int deductedAmount)
	{
	}

	public void UpdatePlayerLevel()
	{
	}

	public void UpdateProgressBar()
	{
	}

	public void UpdateShopButtonTitleBar()
	{
	}

	public void UpdateSettingsButton()
	{
	}

	public void SetSettingsButtonActive(bool active)
	{
	}

	public bool ShouldShowSettingsButton()
	{
		return false;
	}

	public void UpdateOfferButtonTitleBar(bool wasPurchase)
	{
	}

	public void UpdateOfferButtonTitleBar(MergeBoardId boardId)
	{
	}

	[AsyncStateMachine(typeof(_003CDisableButtonTemporarilyAsync_003Ed__89))]
	public UniTask DisableButtonTemporarilyAsync(TweenedButton button, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void SetMysteryMachineCoinsActive(bool active)
	{
	}

	public void SetActiveEnergyType(EnergyType type)
	{
	}

	public void RequestRefreshActiveEnergyTypeUI()
	{
	}

	public void RefreshActiveEnergyTypeUI(Option<MergeBoard> mergeBoardOption)
	{
	}

	public void HandleMysteryMachineEnergyVisibility()
	{
	}

	public void InitializeEnergyStates(IWalletState walletState)
	{
	}

	public void MatchCurrentEnergiesToWallet()
	{
	}

	public void MatchVisibleEnergiesToCurrent()
	{
	}

	public void UpdateEnergyTitleBars()
	{
	}

	public void UpdateEnergyTitleBar(EnergyType type)
	{
	}

	public EnergyTitleBar GetEnergyTitleBar(EnergyType type)
	{
		return null;
	}

	public void UpdateInfiniteEnergy(bool enabled, bool animate = false)
	{
	}

	public void UpdateEnergyCurrencyAmount(EnergyType type, int amount)
	{
	}

	public Option<EnergyModeButton> GetActiveEnergyModeButton()
	{
		return default(Option<EnergyModeButton>);
	}

	public void UpdateCurrencyAmount(Currencies currencyType, int amount, EventCurrencyId eventCurrency = null)
	{
	}

	public void OpenPlayerLevelMenu()
	{
	}

	public void SetButtonsEnabled(bool isEnabled)
	{
	}

	public void BuyMoreMysteryMachineCoinsButtonClicked()
	{
	}

	public void BuyMoreEnergyButtonClicked(EnergyType energyType)
	{
	}

	public void BuyMoreDiamondsButtonClicked()
	{
	}

	public void OnCoinsClicked()
	{
	}

	public void OnShopButtonClicked()
	{
	}

	public void OnEventCurrencyTitleBarClicked()
	{
	}

	public void InitElements()
	{
	}

	public Dictionary<EnergyType, EnergyTitleBar> CreateEnergyElements()
	{
		return null;
	}

	public bool IsRewardWidgetVisible(IPlayerReward reward, bool considerNotVisibleIfAnyMenuIsOpen)
	{
		return false;
	}

	public void EnableOverlayElements(int elementBits, bool resetOverlayDisableDelay = false)
	{
	}

	public void DisableOverlayElements()
	{
	}

	public void DisableOverlayElements(float disableDelay)
	{
	}

	[AsyncStateMachine(typeof(_003CExecuteAfterDelayAsync_003Ed__122))]
	public UniTask ExecuteAfterDelayAsync(float delay, Action action, CancellationToken ct)
	{
		return default(UniTask);
	}

	[IteratorStateMachine(typeof(_003CGetElements_003Ed__123))]
	public IEnumerable<(OverlayElement, int)> GetElements(int elementBits)
	{
		return null;
	}

	public (OverlayElement, int) GetElement(int elementBit)
	{
		return default((OverlayElement, int));
	}

	public void OnPlayerModifiersChanged()
	{
	}

	public void RequestPauseUpdates(UnityEngine.Object from)
	{
	}

	public void EndRequestPauseUpdates(UnityEngine.Object from)
	{
	}

	public IRewardDestination GetTitleBarForCurrency(Currencies currency)
	{
		return null;
	}

	public IWalletState GetWalletState()
	{
		return null;
	}

	public void RequestOverrideWalletState(UnityEngine.Object from, IWalletState walletState)
	{
	}

	public void RequestOverrideWalletState(IWalletState walletState)
	{
	}

	public void EndRequestOverrideWalletState(UnityEngine.Object from)
	{
	}

	public void EndRequestOverrideWalletState()
	{
	}

	public Action GetEnergyButtonAction(EnergyType energyType)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CPollAutoLevelUp_003Ed__136))]
	public UniTask PollAutoLevelUp(CancellationToken ct)
	{
		return default(UniTask);
	}

	public void PushVisibleAndInteractable(bool visibleAndInteractable)
	{
	}

	public void PopVisibleAndInteractable()
	{
	}

	public bool ShouldBeVisibleAndInteractable()
	{
		return false;
	}

	public void SetVisibleAndInteractable(bool visibleAndInteractable)
	{
	}
}
