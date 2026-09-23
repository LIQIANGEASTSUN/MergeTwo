using System;
using Animations;
using Audio;
using Banks.Scripts.UI;
using DG.Tweening;
using GameLogic.Player;
using Map;
using MapCharacters3D;
using Merge;
using Metacore.Cutscenes;
using Metacore.MergeMansion;
using Metacore.MergeMansion.PlayerSupport;
using Metacore.MergeMansion.UI;
using Metacore.MergeMansion.UI.FocusShade.V2;
using Metacore.MergeMansion.UI.GarageCleanupEvent;
using Metacore.MergeMansion.UI.Libraries;
using Metacore.MergeMansion.Utility;
using Metacore.MergeMansion.Videos;
using Slideshows;
using TMPro;
using UI;
using UI.Addressables;
using UI.Areas;
using UI.Board;
using UI.Board.BoardStatusEffect;
using UI.Buttons;
using UI.DailyTasksV2;
using UI.Elements;
using UI.GameEvents;
using UI.GameEvents.Decorations;
using UI.GameEvents.MergeBoards;
using UI.Inbox;
using UI.Indicators;
using UI.Libraries;
using UI.Mansion;
using UI.Messaging;
using UI.Offers;
using UI.Rewards;
using UI.Seasonality;
using UI.TemporaryCardCollectionEvent;
using UI.Tooltips;
using UI.WebShop;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Code.InitFlow
{
	public class SceneContextMansion : MonoBehaviour
	{
		[NonSerialized]
		public PlayerModel player;

		public GameObject[] DisableOnAwake;

		public MapCharacterController3D MapCharacterController3D;

		public MansionHandler MansionHandler;

		public FullscreenLoading FullscreenLoading;

		public UniversalPositionFinder UniversalPositionFinder;

		public VideoController VideoController;

		public SlideshowController SlideshowController;

		public DialogueRunner DialogueRunner;

		public TitleBarController TitleBarController;

		public BottomPanelController BottomPanelController;

		public BoardViewTaskHandler BoardViewTaskHandler;

		public CompactDialogRunner CompactDialogRunner;

		public SpeechBubbleManager SpeechBubbleManager;

		public AudioPlayback AudioPlayback;

		public TooltipManager TooltipManager;

		public PlayerSupportEventsDispatcher PlayerSupportEventsDispatcher;

		public CutsceneController CutsceneController;

		public GraphicsController GraphicsController;

		public VFXController VFXController;

		[SerializeField]
		public UICharacterContainer UICharacterContainer;

		[SerializeField]
		public GameObject[] menus;

		public MenuPrefabs menuPrefabs;

		[SerializeField]
		public GameObject blockingLayer;

		[SerializeField]
		public RectTransform popupContainer;

		[SerializeField]
		public bool allowDirectorAccess;

		[Tooltip("Parent object for hotspot UI markers")]
		[SerializeField]
		public CanvasGroupTweener hotspotParentCanvasGroupTweener;

		[Header("Asset Libraries References")]
		[SerializeField]
		public AssetReferenceT<ProgressionEventPrefabsLibrary> progressionEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<AllCollectibleBoardEventsPrefabsLibrary> collectibleBoardEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<MysteryMachineEventPrefabsLibrary> mysteryMachineEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<TemporaryCardCollectionEventPrefabsLibrary> temporaryCardCollectionEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<MiniEventPrefabsLibrary> miniEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<DecorationShopPrefabsLibrary> decorationShopPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<MergeBoardLibrary> mergeBoardLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<DecorationsLibrary> decorationsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<UIArtScriptableObject> uiArtRef;

		[SerializeField]
		public ScriptableObjectReference<StaticOfferPopupsLibrary> offerPopupsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<StaticRewardVisuals> rewardVisualsRef;

		[SerializeField]
		public ScriptableObjectReference<StaticRewardVisuals> shopRewardVisualsRef;

		[SerializeField]
		public ScriptableObjectReference<IconLibrary> defaultIconLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<IconLibrary> eventIconLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<ArtifactLibrary> artifactLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<CharacterLibrary> characterLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<Prop3DLibrary> prop3DLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<CurrencyBankLibrary> currencyBankLibrary;

		[SerializeField]
		public ScriptableObjectReference<CutsceneGroupLibrary> cutsceneGroupLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<AnimationConfigLibrary> animationConfigLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<GraphicsConfigLibrary> graphicsConfigLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<SeasonalityPrefabsLibrary> seasonalityPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<DailyTasksV2Library> dailyTasksV2LibraryRef;

		[SerializeField]
		public ScriptableObjectReference<TemporaryCardCollectionEventSpritesLibrary> temporaryCardCollectionEventSpritesLibraryRef;

		[SerializeField]
		public AssetReferenceT<BoultonLeagueEventPrefabsLibrary> boultonLeagueEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<BoultonLeagueStageLibrary> boultonLeagueStageLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<VFXConfigLibrary> vfxConfigLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<EnergyModeEventPrefabsLibrary> energyModeEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<IllustrationLibrary> illustrationLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<AnimationSettingsConfig> animationSettingsConfigRef;

		[SerializeField]
		public ScriptableObjectReference<MiniGamesPrefabsLibrary> miniGamesPrefabLibraryRef;

		[SerializeField]
		public AreaIcons areaIconsLibrary;

		[SerializeField]
		public AssetReferenceT<LocationTravelUILibrary> locationTravelUiLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<ShortLeaderboardEventPrefabsLibrary> shortLeaderboardEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<CardCollectionSupportingEventPrefabsLibrary> cardCollectionSupportingEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<CoreSupportingEventsPrefabsLibrary> coreSupportingEventPrefabsLibraryRef;

		[SerializeField]
		public ScriptableObjectReference<CoreSupportEventPrefabsLibrary> coreSupportEventPrefabsLibraryRef;

		public CollectibleBoardEventButtonGroup collectibleBoardEventButtonGroup;

		public LeaderboardEventButtonGroup leaderboardEventButtonGroup;

		public DecorationShopButtonGroup decorationShopButtonGroup;

		public MysteryMachineEventButtonGroup mysteryMachineEventButtonGroup;

		public CoreSupportingEventsButtonGroup coreSupportingEventsButtonGroup;

		public BoultonLeagueEventButtonGroup boultonLeagueEventButtonGroup;

		public MiniEventButtonGroup miniEventButtonGroup;

		public TemporaryCardCollectionEventButtonGroup temporaryCardCollectionEventButtonGroup;

		public ShortLeaderboardEventButtonGroup shortLeaderboardEventButtonGroup;

		public CardCollectionSupportingEventButtonGroup cardCollectionSupportingEventButtonGroup;

		public EnergyModeEventButtonGroup energyModeEventButtonGroup;

		public CoreSupportEventButtonGroup coreSupportEventButtonGroup;

		[Header("Flying items")]
		[SerializeField]
		public string flyingItemTag;

		[SerializeField]
		public RectTransform flightParent;

		[SerializeField]
		public RewardAnimationController.AnimationProperties[] animationProperties;

		[SerializeField]
		public UIArtScriptableObject genericUI;

		[SerializeField]
		public RewardAnimationController.FlightDestination[] inGarageDestinations;

		[SerializeField]
		public RewardAnimationController.FlightDestination[] outsideOfGarageDestinations;

		[SerializeField]
		public RewardAnimationController.FlightDestination alternatePocketDestination;

		[Tooltip("Blocks all player input")]
		[Obsolete("Use IInputBlockerController instead")]
		[Header("Input Blocker")]
		[SerializeField]
		public GameObject inputBlocker;

		[Header("Screen transition")]
		[SerializeField]
		public ScreenTransition screenTransition;

		[Header("Todo")]
		[SerializeField]
		public TweenedButton toDoButton;

		[SerializeField]
		public RedDotIndicator todoRedDotIndicator;

		[SerializeField]
		public RedDotNumberIndicator redDotNumberIndicator;

		[SerializeField]
		public TweenedButton alternateToDoButton;

		[SerializeField]
		public RedDotIndicator alternateTodoRedDotIndicator;

		[SerializeField]
		public RedDotNumberIndicator alternateRedDotNumberIndicator;

		[Header("Garage")]
		[SerializeField]
		public GarageGridButton garageMergeGridButton;

		[Header("Timed event")]
		[SerializeField]
		public UiElement eventCalendarButtonContainer;

		[Header("Back")]
		[SerializeField]
		public TweenedButton backButton;

		[Header("Pocket")]
		[SerializeField]
		public Transform pocketButtonGroup;

		[SerializeField]
		public Transform pocketButtonItemGroup;

		[SerializeField]
		public Transform alternatePocketButtonGroup;

		[SerializeField]
		public Transform alternatePocketButtonGroupBackground;

		[SerializeField]
		public Transform alternatePocketButtonItemGroup;

		[Header("WebShop")]
		[SerializeField]
		public WebShopNotification webShopNotification;

		[Header("Shop")]
		[SerializeField]
		public TweenedButton mergeGridShopButton;

		[SerializeField]
		public TextMeshProUGUI shopOffersTimer;

		[SerializeField]
		public RedDotIndicator shopRedDotIndicator;

		[SerializeField]
		public RedDotIndicator alternativeShopRedDotIndicator;

		[Header("Inventory")]
		[SerializeField]
		public RedDotIndicator inventoryRedDotIndicator;

		[Header("Adventure goal")]
		[SerializeField]
		public TweenedButton adventureGoalsButton;

		[SerializeField]
		public TextMeshProUGUI eventLevelText;

		[SerializeField]
		public TextMeshProUGUI eventBoardTimedEventTimeLeftText;

		[Header("Inbox")]
		[SerializeField]
		public InboxButton inboxButton;

		[Header("Maintenance")]
		[SerializeField]
		public TweenedButton maintenanceUpcomingButton;

		[SerializeField]
		public MaintenanceUpcomingButton maintenanceCountdown;

		[Header("Daily tasks")]
		[SerializeField]
		public GameObject dailyTasksButtonNew;

		[Header("Settings")]
		[SerializeField]
		public RedDotIndicator settingsRedDotIndicator;

		[SerializeField]
		public ItemInventoryEffect itemInventoryEffect;

		[SerializeField]
		public ItemInventoryEffect alternateItemInventoryEffect;

		[Header("Player level")]
		[SerializeField]
		public RedDotIndicator playerLevelRedDotIndicator;

		[Header("Decoration")]
		[SerializeField]
		public TweenedButton decorationButton;

		[Header("Travel")]
		[SerializeField]
		public TravelButton travelButton;

		[Header("General")]
		[SerializeField]
		public GameObject allButtonsParent;

		[SerializeField]
		public GarageCleanupEventButtonGroup garageCleanupEventButtonGroup;

		[SerializeField]
		public ProgressionEventButtonGroup progressionEventButtonGroup;

		[SerializeField]
		public GameObject titleBar;

		[SerializeField]
		public float nearButtonMultiplier;

		[SerializeField]
		public string offersPlacementId;

		[SerializeField]
		public GameObject codexButton;

		[SerializeField]
		public TweenedButton settingsButton;

		[Header("Focus shade")]
		[SerializeField]
		public FocusShade focusShade;

		[SerializeField]
		public FocusShadeV2View focusShadeV2;

		[Header("Overlay")]
		[SerializeField]
		public Overlay overlay;

		[Header("Mansion UI")]
		[SerializeField]
		public MansionUi mansionUi;

		[Header("Addressables")]
		[SerializeField]
		public AddressablesButton addressablesButton;

		[SerializeField]
		public EventBoardButton _eventBoardButton;

		[SerializeField]
		public EventBoardButton _alternateEventBoardButton;

		[SerializeField]
		public RedDotIndicator _eventBoardButtonRedDotIndicator;

		[SerializeField]
		public RedDotIndicator _alternateEventBoardButtonRedDotIndicator;

		[SerializeField]
		public LeaderboardEventBoardButton _leaderboardEventBoardButton;

		[SerializeField]
		public LeaderboardEventBoardButton _alternateLeaderboardEventBoardButton;

		public BoardButton boardButton;

		public GameObject connectionErrorIndicator;

		[Header("Tutorial Elements")]
		[SerializeField]
		public Transform tutorialUIElementTopDialogue;

		public GameObject tutorialHand;

		[Header("Miscellaneous")]
		[SerializeField]
		public UnityEvent<int> onDecorationSpotClicked;

		public Ease ease;

		[Header("UnityBoardController")]
		public RectTransform topLeftMarker;

		public RectTransform bottomRightMarker;

		public GameObject canvasGO;

		public RectTransform selectionIndicator;

		public GameObject canBeMergedIndicator;

		public GameObject canBeSinkedIndicator;

		public GameObject canTakePhotoIndicator;

		[Header("Cooldown Remover")]
		public GameObject cooldownRemoverIndicator;

		public TimerControl cooldownRemoverTimer;

		[Space]
		public GameObject canBeConsumedIndicator;

		public GameObject defaultBackground;

		public Image boardFullColorBackground;

		public CanvasScaleFactorStack boardCanvasScaleFactorStack;

		public RectTransform boardItemParent;

		[Header("Status bars")]
		[SerializeField]
		public CompactItemInfoArea itemInfoArea;

		[Header("Board parent")]
		[SerializeField]
		public Transform boardParent;

		public bool MergeHintEnabled;

		public Vector2 topLeftLimit;

		public Vector2 botRightLimit;

		public Vector2 topLeftDraggingLimit;

		public Vector2 botRightDraggingLimit;

		[Header("Board Status Effects")]
		[SerializeField]
		public BoardStatusEffectContainer boardStatusEffectContainer;

		[SerializeField]
		public BoardStatusEffectContainer mansionUIStatusEffectContainer;

		[SerializeField]
		public BoardStatusEffectConfigLibrary boardStatusEffectConfigLibrary;

		[Header("Board Visual Effects")]
		[SerializeField]
		public BoardVisualEffectConfigLibrary boardVisualEffectConfigLibrary;

		[SerializeField]
		public Transform boardForegroundEffectContainer;

		[SerializeField]
		public Transform boardBackgroundEffectContainer;

		[Header("UI Canvases")]
		[SerializeField]
		public Canvas MansionUICanvas;

		[SerializeField]
		public Canvas LegacyUICanvas;

		[Header("Alert Message")]
		[SerializeField]
		public GenericMessage AlertMessage;

		[SerializeField]
		public GameNotification GameNotification;

		[SerializeField]
		public BubbleNotification BubbleNotification;

		[Header("Hotspot reward prefabs")]
		[Tooltip("Parent object for hotspot rewards")]
		[SerializeField]
		public Transform hotspotRewardParent;

		[SerializeField]
		public Transform hotspotRewardParentOnTopUI;

		[SerializeField]
		public SpineRewardItemIndicator hotspotRewardPrefab;

		[SerializeField]
		public SpineInfoItemIndicator hotspotRequirementPrefab;

		[SerializeField]
		public SpineInfoItemIndicator hotspotRequirementPrefabV2;

		[SerializeField]
		public GameObject hotspotCompleteFXV2;

		[SerializeField]
		public SpineRewardItemIndicator hotspotRewardPrefab2;

		[SerializeField]
		public Transform hotspotRequirementParent2;

		[Header("Solo milestone")]
		[SerializeField]
		public Transform soloMilestoneProgressToken;

		[Header("Skip indicator")]
		[SerializeField]
		public GameObject SkipIndicator;

		[Header("Dig Event Prototype")]
		[SerializeField]
		public GameObject DigEventViewPrefab;

		[SerializeField]
		public GameObject DigEventContainer;

		[SerializeField]
		public GameObject CloudsTransition;

		[SerializeField]
		public GameObject ScreenTransitionParent;

		public static SceneContextMansion Instance => null;

		public static bool HasInstance => false;

		public MapController MapController { get; set; }

		public TweenedButton ToDoButton => null;

		public RedDotIndicator ToDoRedDotIndicator => null;

		public RedDotNumberIndicator ToDoRedDotNumberIndicator => null;

		public RedDotIndicator ShopButtonRedDotIndicator => null;

		public EventBoardButton EventBoardButton => null;

		public RedDotIndicator EventBoardButtonRedDotIndicator => null;

		public LeaderboardEventBoardButton LeaderboardEventBoardButton => null;

		public CompactItemInfoArea ItemInfoArea => null;

		public bool RecalculateDragLimits { get; set; }

		public void Init(PlayerModel player)
		{
		}

		public bool ShouldSupportDTOBLayout()
		{
			return false;
		}

		public void SetMapController(MapController mapController)
		{
		}

		public void SetTodoVisibility(bool shouldBeVisible, bool useAlternativeButton = true)
		{
		}

		public TweenedButton GetCurrentGridShopButton(IBoardController boardController)
		{
			return null;
		}

		public void ShowItemInfoAreaPanel()
		{
		}

		public void SetItemInfoAreaPanelVisibility(ItemInfoAreaVisibility infoAreaVisibility)
		{
		}

		public ItemInfoAreaVisibility GetCurrentItemInfoAreaPanelVisibility()
		{
			return default(ItemInfoAreaVisibility);
		}

		public void DisableItemInfoAreaPanels()
		{
		}

		public void Awake()
		{
		}
	}
}
