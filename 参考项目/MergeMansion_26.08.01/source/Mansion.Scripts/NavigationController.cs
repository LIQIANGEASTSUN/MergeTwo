using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Animations;
using Audio;
using Code.GameLogic.GameEvents;
using Code.InitFlow;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Decorations;
using Game.Logic.Mail;
using GameEvents;
using GameLogic;
using GameLogic.Area;
using GameLogic.Banks;
using GameLogic.Config.Shop.Items;
using GameLogic.Decorations;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using General;
using IAP;
using JetBrains.Annotations;
using Mail;
using Merge;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.GameEvents;
using Metacore.MergeMansion.Map.Locations;
using Metacore.MergeMansion.Merge;
using Metacore.MergeMansion.SystemGroups;
using Metacore.MergeMansion.UI;
using Metacore.MergeMansion.UI.FocusShade;
using Metacore.MergeMansion.UI.FocusShade.V2;
using Metacore.MergeMansion.UI.GarageCleanupEvent;
using Metacore.Rendering;
using Metaplay.Core;
using Navigation;
using Offers;
using Pool;
using ReEngagement;
using TMPro;
using Tutorial;
using UI;
using UI.Addressables;
using UI.Buttons;
using UI.Elements;
using UI.GameEvents;
using UI.Inbox;
using UI.Indicators;
using UI.Libraries;
using UI.Mansion;
using UI.Messaging;
using UI.TemporaryCardCollectionEvent;
using UnityEngine;

public class NavigationController : ILocationNavigationController, INavigationController, ILocationDependent, ITickSystem
{
	[Serializable]
	public class Controllers
	{
		public MailController MailController { get; set; }

		public RewardAnimationController RewardAnimationController { get; set; }

		public OffersManager OffersManager { get; set; }

		public LevelUpTutorialController LevelUpTutorialController { get; set; }

		public INavigationHotspots Hotspots { get; set; }

		public IHotspotCompletionState HotspotCompletionState { get; set; }

		public DecorationController DecorationController { get; set; }

		public IBoardController BoardController { get; set; }

		public IPurchaseManager PurchaseManager { get; set; }

		public IActionsExecutor Executor { get; set; }

		public CoreSupportingEventsEventManager CoreSupportingEventsEventManager { get; set; }

		public MessagingController MessagingController { get; set; }

		public Controllers(MailController mailController, RewardAnimationController rewardAnimationController, OffersManager offersManager, LevelUpTutorialController levelUpTutorialController, INavigationHotspots hotspots, IHotspotCompletionState hotspotCompletionState, DecorationController decorationController, IBoardController boardController, IPurchaseManager purchaseManager, IActionsExecutor executor, CoreSupportingEventsEventManager coreSupportingEventsEventManager, MessagingController messagingController)
		{
		}
	}

	public struct EventManagers
	{
		public readonly ShortLeaderboardEventManager ShortLeaderboardEventManager;

		public readonly EnergyModeEventManager EnergyModeEventManager;

		public readonly CoreSupportEventManager CoreSupportEventManager;

		public readonly TemporaryCardCollectionEventManager TemporaryCardCollectionEventManager;

		public readonly CollectibleBoardEventManager CollectibleBoardEventManager;

		public readonly LeaderboardEventManager LeaderboardEventManager;

		public readonly GarageCleanupEventManager GarageCleanupEventManager;

		public readonly MiniEventManager MiniEventManager;

		public readonly DecorationShopManager DecorationShopManager;

		public readonly MysteryMachineEventManager MysteryMachineEventManager;

		public readonly BoultonLeagueEventManager BoultonLeagueEventManager;

		public readonly CardCollectionSupportingEventManager CardCollectionSupportingEventManager;

		public readonly CoreSupportingEventsEventManager CoreSupportingEventsEventManager;

		public readonly ProgressionEventManager ProgressionEventManager;

		public EventManagers(ShortLeaderboardEventManager shortLeaderboardEventManager, EnergyModeEventManager energyModeEventManager, CoreSupportEventManager coreSupportEventManager, TemporaryCardCollectionEventManager temporaryCardCollectionEventManager, CollectibleBoardEventManager collectibleBoardEventManager, LeaderboardEventManager leaderboardEventManager, GarageCleanupEventManager garageCleanupEventManager, MiniEventManager miniEventManager, DecorationShopManager decorationShopManager, MysteryMachineEventManager mysteryMachineEventManager, BoultonLeagueEventManager boultonLeagueEventManager, CardCollectionSupportingEventManager cardCollectionSupportingEventManager, CoreSupportingEventsEventManager coreSupportingEventsEventManager, ProgressionEventManager progressionEventManager)
		{
			ShortLeaderboardEventManager = null;
			EnergyModeEventManager = null;
			CoreSupportEventManager = null;
			TemporaryCardCollectionEventManager = null;
			CollectibleBoardEventManager = null;
			LeaderboardEventManager = null;
			GarageCleanupEventManager = null;
			MiniEventManager = null;
			DecorationShopManager = null;
			MysteryMachineEventManager = null;
			BoultonLeagueEventManager = null;
			CardCollectionSupportingEventManager = null;
			CoreSupportingEventsEventManager = null;
			ProgressionEventManager = null;
		}
	}

	public enum PocketButtonStatus
	{
		Initializing = 0,
		InTransitionToVisible = 1,
		Visible = 2,
		InTransitionToHidden = 3,
		Hidden = 4
	}

	public struct CountCompletablesCache
	{
		public Option<long> CacheTimeMsOption;

		public int TaskNotificationCount;

		public int EventNotificationCount;

		public int CoreSupportEventNotificationCount;

		public bool HasUnseenEvent;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass262_0
	{
		public MergeBoardId previousBoardId;

		public NavigationController _003C_003E4__this;

		public MergeBoard targetBoard;

		public Action onComplete;

		public void _003CTransitionToMergeBoardInternal_003Eb__0()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CLoadBannerAndScreen_003Ed__297 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<(Option<IDisposableAssetHandle<Sprite>> bannerHandleOption, Option<IDisposableAssetHandle<Sprite>> loadingScreenHandleOption)> _003C_003Et__builder;

		public NavigationController _003C_003E4__this;

		public LocationTravelInfo locationTravelInfo;

		public CancellationToken ct;

		public LocationId illustrationLocation;

		[NonSerialized]
		public UnityOption<Sprite> _003CloadingScreenOption_003E5__2;

		[NonSerialized]
		public Option<IDisposableAssetHandle<Sprite>> _003CloadingScreenHandleOption_003E5__3;

		[NonSerialized]
		public UniTask<(IDisposableAssetHandle<Sprite>, IDisposableAssetHandle<Sprite>)>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<Sprite>>.Awaiter _003C_003Eu__2;

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
	public struct _003CLoadLocationUiLibraryAsync_003Ed__223 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public NavigationController _003C_003E4__this;

		public CancellationToken ct;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<LocationTravelUILibrary>>.Awaiter _003C_003Eu__1;

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
	public struct _003CTransitionToMergeBoardInternal_003Ed__262 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MergeBoardId previousBoardId;

		public NavigationController _003C_003E4__this;

		public MergeBoard targetBoard;

		public Action onComplete;

		public PlayerModel playerModel;

		public IBoardEventModel boardEventModel;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass262_0 _003C_003E8__1;

		public Action onReadyToPlay;

		public BoardTransitionFlags flags;

		[NonSerialized]
		public MetaTime _003CstartTime_003E5__2;

		[NonSerialized]
		public UniTask<Option<GameObject>>.Awaiter _003C_003Eu__1;

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
	public struct _003CTravelToLocationTask_003Ed__296 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public NavigationController _003C_003E4__this;

		public LocationTravelInfo locationTravelInfo;

		public CancellationToken ct;

		public LoadLocationFlags flags;

		public Action onFinish;

		[NonSerialized]
		public Location _003CnewLocation_003E5__2;

		[NonSerialized]
		public LocationId _003ColdLocation_003E5__3;

		[NonSerialized]
		public MetaTime _003CstartTime_003E5__4;

		[NonSerialized]
		public LocationId _003CillustrationLocation_003E5__5;

		[NonSerialized]
		public Option<IDisposableAssetHandle<Sprite>> _003CbannerHandleOption_003E5__6;

		[NonSerialized]
		public Option<IDisposableAssetHandle<Sprite>> _003CloadingScreenHandleOption_003E5__7;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask<(Option<IDisposableAssetHandle<Sprite>> bannerHandleOption, Option<IDisposableAssetHandle<Sprite>> loadingScreenHandleOption)>.Awaiter _003C_003Eu__2;

		[NonSerialized]
		public UniTask<LocationLoadingState>.Awaiter _003C_003Eu__3;

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
	public Option<IDisposableAssetHandle<LocationTravelUILibrary>> _locationUiLibraryHandle;

	[NonSerialized]
	public readonly FocusShadeV2Controller _focusShadeV2;

	[NonSerialized]
	public readonly InputDispatcherEvents inputDispatcherEvents;

	[NonSerialized]
	public readonly Stack<OverrideNavigationUI> overrideStack;

	[NonSerialized]
	public bool supportMessageWaiting;

	[NonSerialized]
	public GameObject pocketItemIcon;

	[NonSerialized]
	public IItemDefinition pocketItemType;

	[NonSerialized]
	public bool pocketButtonShouldBeVisibleInThisMenu;

	[NonSerialized]
	public PocketButtonStatus pocketButtonStatus;

	[NonSerialized]
	public bool recheckPocketItemIcon;

	[NonSerialized]
	public RectTransform inventoryButtonRectTransform;

	[NonSerialized]
	public Vector2 inventoryButtonNearTopLeft;

	[NonSerialized]
	public Vector2 inventoryButtonNearBottomRight;

	[NonSerialized]
	public bool isShopButtonUsable;

	[NonSerialized]
	public bool isMaintenanceButtonVisible;

	[NonSerialized]
	public long initTick;

	[NonSerialized]
	public readonly PlayerModel _player;

	[NonSerialized]
	public readonly PlayerClientContext _playerContext;

	[NonSerialized]
	public readonly IAnalyticsCollector analytics;

	[NonSerialized]
	public readonly IAudioPlayer audio;

	[NonSerialized]
	public readonly MenuController menuController;

	[NonSerialized]
	public readonly LoadingController loadingController;

	[NonSerialized]
	public readonly LocationsListData locationsListData;

	[NonSerialized]
	public readonly LocationLoader locationLoader;

	[NonSerialized]
	public readonly Director director;

	[NonSerialized]
	public readonly GameObjectPoolManager poolManager;

	[NonSerialized]
	public readonly IDecorationCamera decorationCamera;

	[NonSerialized]
	public readonly ICameraHotspotNavigator cameraHotspotNavigator;

	[NonSerialized]
	public readonly List<UnityEngine.Object> hideAllNavigationElementRequesters;

	[NonSerialized]
	public readonly List<string> blockButtonInteractionsRequesters;

	[NonSerialized]
	public List<IIndicator> indicators;

	[NonSerialized]
	public RedDotStatus shopRedDotStatus;

	[NonSerialized]
	public bool ForceDisallowMergeBoardTransition;

	[NonSerialized]
	public readonly ISafeRollback rollback;

	[NonSerialized]
	public readonly IScheduler scheduler;

	[NonSerialized]
	public Controllers controllers;

	[NonSerialized]
	public MainStateManager mainStateManager;

	[NonSerialized]
	public EventManagers eventManagers;

	[NonSerialized]
	public SceneContextMansion sceneContextMansion;

	[NonSerialized]
	public readonly TitleBarController titleBarController;

	[NonSerialized]
	public ReEngagementController reEngagementController;

	[NonSerialized]
	public ILocationContext locationContext;

	[NonSerialized]
	public Option<CancellationTokenSource> _ctsOption;

	[NonSerialized]
	public MergeBoardId _from;

	public const long COUNT_COMPLETABLES_CACHE_INTERVAL_MS = 1000L;

	[NonSerialized]
	public CountCompletablesCache _countCompletablesCache;

	public static NavigationController singleton => null;

	public static bool HasInstance => false;

	public IDecorationCamera DecorationCamera => null;

	public ICameraHotspotNavigator CameraHotspotNavigator => null;

	[Obsolete("Use IInputBlockerController instead")]
	public GameObject inputBlocker => null;

	public ScreenTransition screenTransition => null;

	public TweenedButton toDoButton => null;

	public RedDotIndicator todoRedDotIndicator => null;

	public RedDotNumberIndicator redDotNumberIndicator => null;

	public GarageGridButton garageMergeGridButton => null;

	public UiElement eventCalendarButtonContainer => null;

	public Option<TweenedButton> BackButton => default(Option<TweenedButton>);

	public TravelButton travelButton => null;

	public Transform pocketButtonGroup => null;

	public Transform pocketButtonItemGroup => null;

	public Transform AlternatePocketButtonGroup => null;

	public Transform AlternatePocketButtonGroupBackground => null;

	public TweenedButton mergeGridShopButton => null;

	public TextMeshProUGUI shopOffersTimer => null;

	public RedDotIndicator shopRedDotIndicator => null;

	public RedDotIndicator alternativeShopRedDotIndicator => null;

	public TweenedButton mergeGridInventoryButton => null;

	public RedDotIndicator inventoryRedDotIndicator => null;

	public TweenedButton adventureGoalsButton => null;

	public TextMeshProUGUI eventLevelText => null;

	public TextMeshProUGUI eventBoardTimedEventTimeLeftText => null;

	public InboxButton inboxButton => null;

	public TweenedButton maintenanceUpcomingButton => null;

	public MaintenanceUpcomingButton maintenanceCountdown => null;

	public GameObject dailyTasksButtonNew => null;

	public RedDotIndicator settingsRedDotIndicator => null;

	public RedDotIndicator PlayerLevelRedDotIndicator => null;

	public ItemInventoryEffect itemInventoryEffect => null;

	public TweenedButton decorationButton => null;

	public CollectibleBoardEventButtonGroup collectibleBoardEventButtonGroup => null;

	public LeaderboardEventButtonGroup leaderboardEventButtonGroup => null;

	public BoultonLeagueEventButtonGroup boultonLeagueEventButtonGroup => null;

	public GameObject allButtonsParent => null;

	public GarageCleanupEventButtonGroup garageCleanupEventButtonGroup => null;

	public ProgressionEventButtonGroup progressionEventButtonGroup => null;

	public DecorationShopButtonGroup decorationShopButtonGroup => null;

	public MysteryMachineEventButtonGroup mysteryMachineButtonGroup => null;

	public MiniEventButtonGroup miniEventButtonGroup => null;

	public TemporaryCardCollectionEventButtonGroup temporaryCardCollectionButtonGroup => null;

	public GameObject titleBar => null;

	public float nearButtonMultiplier => 0f;

	public string offersPlacementId => null;

	public GameObject codexButton => null;

	public GameObject eventButton => null;

	public CoreSupportingEventsButtonGroup coreSupportingEventsButtonGroup => null;

	public CoreSupportEventButtonGroup coreSupportEventButtonGroup => null;

	public ShortLeaderboardEventButtonGroup shortLeaderboardEventButtonGroup => null;

	public CardCollectionSupportingEventButtonGroup cardCollectionSupportingEventButtonGroup => null;

	public EnergyModeEventButtonGroup energyModeEventButtonGroup => null;

	public FocusShade _focusShadeLegacy => null;

	public Overlay overlay => null;

	public Option<TweenedButton> MergeGridShopButton => default(Option<TweenedButton>);

	public Option<RedDotIndicator> ShopRedDotIndicator => default(Option<RedDotIndicator>);

	public Option<EventBoardButton> EventBoardButton => default(Option<EventBoardButton>);

	public Option<RedDotIndicator> EventBoardButtonRedDotIndicator => default(Option<RedDotIndicator>);

	public Option<TweenedButton> ToDoButton => default(Option<TweenedButton>);

	public Option<RedDotIndicator> ToDoRedDotIndicator => default(Option<RedDotIndicator>);

	public Option<RedDotNumberIndicator> ToDoRedDotNumberIndicator => default(Option<RedDotNumberIndicator>);

	public Option<GarageGridButton> GarageMergeGridButton => default(Option<GarageGridButton>);

	public Option<AddressablesButton> AddressablesButton => default(Option<AddressablesButton>);

	public Option<BoardButton> BoardButton => default(Option<BoardButton>);

	public bool IsMansionCanvasHidden => false;

	public LeaderboardEventBoardButton LeaderboardEventBoardButton => null;

	public TweenedButton settingsButton => null;

	public TweenedButton playerLevelButton => null;

	public TweenedButton coinsButton => null;

	public TweenedButton diamondsButton => null;

	public TweenedButton energyButton => null;

	public TweenedButton shopButton => null;

	public MansionUi mansionUi => null;

	public AddressablesButton addressablesButton => null;

	public BoardButton boardButton => null;

	public IAnalyticsCollector Analytics => null;

	public IMenuController Menus => null;

	public IBoardController Board => null;

	public Director TheDirector => null;

	public IAudioPlayer Audio => null;

	public CancellationToken CancellationToken => default(CancellationToken);

	public bool IsScreenTransitionActive => false;

	public NavigationController(ISafeRollback rollback, IScheduler scheduler, Controllers controllers, MainStateManager mainStateManager, SceneContextMansion sceneContextMansion, TitleBarController titleBarController, DialogueRunner dialogueRunner, PlayerModel player, PlayerClientContext playerContext, IAnalyticsCollector analytics, IAudioPlayer audio, MenuController menuController, LoadingController loadingController, LocationsListData locationsListData, LocationLoader locationLoader, Director director, GameObjectPoolManager poolManager, FocusShadeV2Controller focusShadeV2, InputDispatcherEvents inputDispatcherEvents, IDecorationCamera decorationCamera, ICameraHotspotNavigator cameraHotspotNavigator)
	{
	}

	public void BindInputDispatcherEvents(MansionUIInputDispatcher.OutgoingEvents outgoingEvents)
	{
	}

	public void Tick()
	{
	}

	public void InitEventManagers(EventManagers eventManagers)
	{
	}

	public void InitLocationFlow(ReEngagementController reEngagementController, ILocationContext locationContext)
	{
	}

	public void SubscribeWalletModelEvents()
	{
	}

	public void InitLocation(ISafeRollback rollback)
	{
	}

	public void DisposeLocation()
	{
	}

	public void AwakeInner()
	{
	}

	public void SetSupportMessageWaiting(bool value)
	{
	}

	public bool IsSupportMessageWaiting()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CLoadLocationUiLibraryAsync_003Ed__223))]
	public UniTask LoadLocationUiLibraryAsync(CancellationToken ct)
	{
		return default(UniTask);
	}

	public void StartInner(ISafeRollback rollback)
	{
	}

	public void FakeInvokeRepeating(Action action, float rate)
	{
	}

	public void OnDestroyInner()
	{
	}

	public void OnAdventureGoalsButtonHidden()
	{
	}

	public Transform GetPocketButtonTransform(out PocketPosition pocketPosition)
	{
		pocketPosition = default(PocketPosition);
		return null;
	}

	public void OnMaintenanceModeChanged()
	{
	}

	public void SetToDoButtonVisible(bool visible)
	{
	}

	public void SetInboxButtonVisible(bool buttonVisible, IMailMessage mostImportantUnreadEmail)
	{
	}

	public void SetAdventureGoalButtonVisible(bool visible)
	{
	}

	public void SetAddressablesButtonVisible(bool isAddressablesButtonVisible)
	{
	}

	public void SetGarageMergeGridButtonVisible(bool visible)
	{
	}

	public void SetDecorationSelectionButtonVisible(bool visible)
	{
	}

	public void SetBackButtonVisible(bool visible)
	{
	}

	public void RefreshTravelButton(bool travelToMansion)
	{
	}

	public void SetTravelButtonVisible(bool visible)
	{
	}

	public Transform GetTravelButtonTransform()
	{
		return null;
	}

	public void RecheckMaintenanceButtonVisibility()
	{
	}

	public void SetDailyTasksButtonVisible(bool b)
	{
	}

	public void SetMergeGridShopButtonVisible(bool visible, bool recheckShopRedDotIndicator = true)
	{
	}

	public void SetMergeGridInventoryButtonVisible(bool state)
	{
	}

	public void SetEventBoardButtonVisible(bool visible, IStringId id)
	{
	}

	public void RecheckEventBoardButtonRedDotIndicator()
	{
	}

	public bool ShouldEventBoardButtonRedDotIndicatorBeOn()
	{
		return false;
	}

	public void SetLeaderboardEventBoardButtonState(LeaderboardEventBoardButtonState state, int? rankingPosition)
	{
	}

	public static void SetUnityButtonStateWithAnimation(bool isVisible, GameObject buttonGameObject)
	{
	}

	public void SetPocketButtonVisibility(bool isVisible, bool hideIsImmediate = false)
	{
	}

	public Vector2 GetMergeGridBackButtonPosition(MergeGridBackButtonPositionOffset offset)
	{
		return default(Vector2);
	}

	public Vector2 GetGarageMergeGridButtonPosition(bool applyOffset = true)
	{
		return default(Vector2);
	}

	public Transform GetGarageMergeGridButtonTransform()
	{
		return null;
	}

	public GarageGridButton GetGarageMergeGridButtonWithFallback()
	{
		return null;
	}

	public Vector2 GetToDoButtonPosition()
	{
		return default(Vector2);
	}

	public Vector3? GetToDoButtonWorldPosition()
	{
		return null;
	}

	public Vector2 GetTaskCompletedButtonPosition()
	{
		return default(Vector2);
	}

	public Vector2 GetPocketButtonPosition()
	{
		return default(Vector2);
	}

	public void TransitionFromMergeGrid()
	{
	}

	public bool AllowMergeBoardTransition()
	{
		return false;
	}

	public bool TransitionToMergeBoard(PlayerModel playerModel, MergeBoardId mergeBoardId, bool forceVisualRebuild, Action onComplete = null, Action onReadyToPlay = null, BoardTransitionFlags flags = BoardTransitionFlags.None)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CTransitionToMergeBoardInternal_003Ed__262))]
	public UniTask TransitionToMergeBoardInternal(IBoardEventModel boardEventModel, MergeBoard targetBoard, MergeBoardId previousBoardId, PlayerModel playerModel, CancellationToken ct, Action onComplete = null, Action onReadyToPlay = null, BoardTransitionFlags flags = BoardTransitionFlags.None)
	{
		return default(UniTask);
	}

	public bool TryShowReEngagementRewardPopup()
	{
		return false;
	}

	public void CheckRentableInventoryStatus(PlayerModel playerModel)
	{
	}

	public void TryBuyRentableInventorySlots()
	{
	}

	public void OnRentableInventoryBuyCancelled()
	{
	}

	public bool TryShowEventEnergyMainBoardInfoPopup(MergeBoardId mergeBoardId)
	{
		return false;
	}

	public (Func<MergeBoard, bool>, bool) GetLegacyEventParams(MergeBoardId mergeBoardId)
	{
		return default((Func<MergeBoard, bool>, bool));
	}

	[ContextMenu("Show garage board")]
	public void TransitionToGarage()
	{
	}

	[ContextMenu("Show event board")]
	public void TransitionToEventBoard()
	{
	}

	[ContextMenu("Start Event")]
	public void StartEvent()
	{
	}

	[ContextMenu("End Event in 20")]
	public void SetEventToEndInTwentySeconds()
	{
	}

	public void EventCalendarButtonTapped()
	{
	}

	public void MergeGridShopButtonTapped()
	{
	}

	public void MergeGridShopButtonTapped(string openingSource, RedDotStatus redDotStatus)
	{
	}

	[PublicAPI]
	public void TopShopButtonTapped()
	{
	}

	public void MergeGridInventoryButtonTapped()
	{
	}

	public void InboxButtonTapped()
	{
	}

	public void PocketButtonTapped()
	{
	}

	public void ShopOffersButtonTapped()
	{
	}

	public void DailyTasksButtonTapped()
	{
	}

	public void MaintenanceButtonTapped()
	{
	}

	public void EventProgressButtonTapped(MergeBoardId eventId = null)
	{
	}

	public void EventProgressButtonTapped()
	{
	}

	public void ToDoButtonTapped()
	{
	}

	public void SettingsButtonTapped()
	{
	}

	public void DownloadButtonTapped()
	{
	}

	public void CodexButtonTapped()
	{
	}

	public void CurrencyBankButtonTapped()
	{
	}

	[Obsolete("Garage cleanup button taps should be controlled by GarageCleanupEventButtonGroup/GarageCleanupHudButton.")]
	public void GarageCleanupButtonTapped()
	{
	}

	public void EventBoardButtonTapped()
	{
	}

	public void LeaderboardEventBoardButtonTapped()
	{
	}

	public void TravelButtonTapped()
	{
	}

	public void TravelToLocation(LocationId locationId, Action onFinish = null, LoadLocationFlags flags = LoadLocationFlags.None)
	{
	}

	public void TravelToLocation(LocationTravelInfo locationTravelInfo, Action onFinish = null, LoadLocationFlags flags = LoadLocationFlags.None)
	{
	}

	[AsyncStateMachine(typeof(_003CTravelToLocationTask_003Ed__296))]
	public UniTask TravelToLocationTask(LocationTravelInfo locationTravelInfo, LoadLocationFlags flags, CancellationToken ct, Action onFinish = null)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadBannerAndScreen_003Ed__297))]
	public UniTask<(Option<IDisposableAssetHandle<Sprite>>, Option<IDisposableAssetHandle<Sprite>>)> LoadBannerAndScreen(LocationTravelInfo locationTravelInfo, LocationId illustrationLocation, CancellationToken ct)
	{
		return default(UniTask<(Option<IDisposableAssetHandle<Sprite>>, Option<IDisposableAssetHandle<Sprite>>)>);
	}

	public void RecheckPocketButtonVisibility(bool hideIsImmediate = false)
	{
	}

	public bool IsTutorialPassed()
	{
		return false;
	}

	public void RefreshAlternatePocketButtonGroupBackground()
	{
	}

	public bool IsInBoardEventContext<TEventModel>(out TEventModel eventModel) where TEventModel : class, IBoardEventModel
	{
		eventModel = null;
		return false;
	}

	public bool IsInCollectibleBoardEventContext(out CollectibleBoardEventModel outBoardEventModel)
	{
		outBoardEventModel = null;
		return false;
	}

	public void SetPocketButtonGroupState(bool enabled, bool immediate = false)
	{
	}

	public void UpdateIconOfPocketButton(IItemDefinition itemDefinition)
	{
	}

	public Vector2 GetDragLimitsForInventoryButton()
	{
		return default(Vector2);
	}

	public Vector3 GetPositionOfInventoryButton()
	{
		return default(Vector3);
	}

	public bool IsNearInventoryButton(Vector2 pos)
	{
		return false;
	}

	public void StartInventoryButtonEffect()
	{
	}

	public void StopInventoryButtonEffect()
	{
	}

	public void ShowItemAddedIntoInventoryEffect()
	{
	}

	public void UpdateInner()
	{
	}

	public (int, int, int, bool) CountCompletablesCached(PlayerModel player, INavigationHotspots hotspots)
	{
		return default((int, int, int, bool));
	}

	public static (int, int, int, bool) CountCompletables(PlayerModel player, INavigationHotspots hotspots)
	{
		return default((int, int, int, bool));
	}

	public static bool ShouldDisplayRedDotIndicatorForAreaTease(PlayerModel player, IAreaInfo area)
	{
		return false;
	}

	public void UpdateTimers()
	{
	}

	public void UpdateEventTimers()
	{
	}

	public void UpdateOfferTimers()
	{
	}

	public void RecheckShopRedDotIndicator()
	{
	}

	public bool ShouldShopRedDotIndicatorBeOn(out RedDotStatus redDotStatus)
	{
		redDotStatus = default(RedDotStatus);
		return false;
	}

	public static bool HasFreeShopOffer(PlayerModel playerModel, MergeBoardId mergeBoardId)
	{
		return false;
	}

	public bool HasFreeShopOffer()
	{
		return false;
	}

	public bool ShouldShopOfferRedDotIndicatorBeOn()
	{
		return false;
	}

	public void RecheckPocketItemIcon()
	{
	}

	public void HideUi()
	{
	}

	public void HideMansionCanvas(bool instantHide = false, List<string> idsToShow = null, bool instantShow = false, bool allowInput = true)
	{
	}

	public void HideMansionCanvas(List<PlayerReward> rewardsToShow, RewardsAnimationsFlags flags = RewardsAnimationsFlags.None, bool instantHide = false, bool instantShow = false, bool allowInput = true)
	{
	}

	public void ShowElementOnOverlay(string id, bool show, bool instant = true)
	{
	}

	public string GetRewardDestination(IPlayerReward reward, RewardsAnimationsFlags flags)
	{
		return null;
	}

	public void RestoreUi()
	{
	}

	public void ShowMansionCanvas(bool instantShow = false, List<string> idsToHide = null, bool instantHide = false, bool allowInput = true)
	{
	}

	public void ShowEventCalendarButtonIfNeeded()
	{
	}

	public void ShowDecorationSelectionButtonIfNeeded()
	{
	}

	public bool ShouldShowDecorationSelectionButton()
	{
		return false;
	}

	public void DecorationSelectionButtonClicked()
	{
	}

	public void CloseInfoMenuButton()
	{
	}

	public void DecorationSelectionButtonClicked(int slot)
	{
	}

	public void HideAllNavigationElements()
	{
	}

	public void ShowHiddenNavigationElements()
	{
	}

	public void RequestHideAllNavigationElements(UnityEngine.Object from)
	{
	}

	public void RestoreHideAllNavigationElementsRequest()
	{
	}

	public void EndRequestHideAllNavigationElements(UnityEngine.Object from)
	{
	}

	public bool HasHideAllNavigationElementsRequest()
	{
		return false;
	}

	public void HideNavigationElementsForDecorationPreview()
	{
	}

	public void ShowHiddenNavigationElementsForDecorationPreview()
	{
	}

	public void RequestBlockButtonInteractions(string from)
	{
	}

	public void EndRequestBlockButtonInteractions(string from)
	{
	}

	public void SetButtonsInteractable(bool interactable)
	{
	}

	public void BlockInput(bool blockBackButtonInput = true)
	{
	}

	public void AllowInput(bool allowBackButtonInput = true)
	{
	}

	public Vector2 GetWildItemInfoButtonPosition()
	{
		return default(Vector2);
	}

	public void OnFlashSalesRollRequested()
	{
	}

	public void OnOfferSetUpdated(bool purchaseMade)
	{
	}

	public void RefreshInboxButton()
	{
	}

	public void RefreshSettingsButton()
	{
	}

	public void RefreshShopButton()
	{
	}

	public void RefreshTasklistButtonVisibility()
	{
	}

	public void RefreshInfoPanelVisibility()
	{
	}

	public void SetInfoPanelVisibility(ItemInfoAreaVisibility infoAreaVisibility)
	{
	}

	public void OnMailboxChange(IReadOnlyCollection<IMailMessage> added, IReadOnlyCollection<IMailMessage> removed)
	{
	}

	public void OnMenuVisibilityChange(bool isVisible)
	{
	}

	public void TransitionToBoard(string boardType)
	{
	}

	public void SetCodexButtonVisible(bool visible)
	{
	}

	public Vector2 GetCodexButtonPosition()
	{
		return default(Vector2);
	}

	public Vector2 GetEventBoardButtonPosition()
	{
		return default(Vector2);
	}

	public bool TryGetCurrencyBankButtonPosition(out Vector2 position)
	{
		position = default(Vector2);
		return false;
	}

	public void OnAddedBankCurrencyAfterCompleteDailyTask(int addedAmount)
	{
	}

	public void OnAddedBankCurrencyAfterCompleteEventTask(int addedAmount)
	{
	}

	public void OnAddedBankCurrencyAfterCompleteHotspotMergeGoalTask(int addedAmount, IHotspotDefinition hotspotDefinition, float[] originPosition)
	{
	}

	public void OnAddedBankCurrencyAfterMerge(int addedAmount, Coordinate coordinate)
	{
	}

	public void OnAddedBankCurrencyAfterSpawnItemUsingEnergy(int addedAmount, Coordinate coordinate)
	{
	}

	public void OnCurrencyBankStartedActivation(CurrencyBankId currencyBankId)
	{
	}

	public void OnCurrencyBankFinalizedActivation(CurrencyBankId currencyBankId)
	{
	}

	public void OnUpdatedCurrencyBank(CurrencyBankId currencyBankId, bool forceFullRefreshImmediatelyState)
	{
	}

	public void OnAddedBankCurrencyVisualizationOriginChanged(Vector3 position)
	{
	}

	public void ShowFocusShade(Vector2 position, Action onClickAction, float shadeAlphaMultiplier = 1f)
	{
	}

	public void ShowFocusShade(Vector2 position, Vector2 scale, Action onClickAction)
	{
	}

	public void ShowFocusShade(Transform focusedObject, Action onClickAction, float shadeAlphaMultiplier = 1f)
	{
	}

	public void ShowFocusShade(Transform focusedObject, Vector2 scale, Action onClickAction)
	{
	}

	public void HideFocusShade()
	{
	}

	public bool IsFocusShadeOn()
	{
		return false;
	}

	public void ShowFocusShadeV2(FocusShadeParams shadeParams)
	{
	}

	public void HideFocusShadeV2()
	{
	}

	public void SurfaceFocusShadeV2Elements(params RectTransform[] targets)
	{
	}

	public void ClearFocusShadeV2Surfaces(params RectTransform[] targets)
	{
	}

	public void ClearAllFocusShadeV2Surfaces()
	{
	}

	public void ShowScreenTransition(Action callOnComplete)
	{
	}

	public ScreenTransition.Preset GetScreenTransitionPreset()
	{
		return null;
	}

	public void HideScreenTransition(Action onFinished = null)
	{
	}

	public void ShowOverlay(Color color)
	{
	}

	public void HideOverlay()
	{
	}

	public void InitIndicators()
	{
	}

	public int GetSiblingIndexForButtons()
	{
		return 0;
	}

	public void SetSiblingIndexForButtons(int index)
	{
	}

	public void SetIndicatorsEnabled(bool enabled, bool saveState = false)
	{
	}

	public void RestoreIndicatorStates()
	{
	}

	public void SaveIndicatorStates()
	{
	}

	public void OnHotspotCompleted(IHotspotDefinition hotspotDefinition)
	{
	}

	public void OnEventDecorationChanged(DecorationId _)
	{
	}

	public void OnPocketContentChanged(int itemId, string itemType, MergeBoardId boardId, int count, PlayerPocketChangeEventType? changeType)
	{
	}

	public void OnEventPocketContentChanged(int itemId, string itemType, MergeBoardId boardId, int count, PlayerPocketChangeEventType? changeType)
	{
	}

	public void OnLiveOpsEventPocketContentChanged(int itemId, string itemType, MergeBoardId boardId, int count, PlayerPocketChangeEventType? changeType)
	{
	}

	public void PushOverride(OverrideNavigationUI overrideUI)
	{
	}

	public void PopOverride()
	{
	}

	public bool TryGetVisibleBoultonLeagueHudButton(out BoultonLeagueEventHudButton outButton)
	{
		outButton = null;
		return false;
	}

	public void RecheckBoardButton()
	{
	}

	public void RecheckGarageMergeGridButton()
	{
	}

	public void RecheckAddressablesButton()
	{
	}
}
