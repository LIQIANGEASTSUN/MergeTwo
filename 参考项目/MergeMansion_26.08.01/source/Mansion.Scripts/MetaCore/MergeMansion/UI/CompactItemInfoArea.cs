using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using Analytics;
using Animations;
using Audio;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameLogic.Config.Types;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Modes;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.UI.Libraries;
using Pool;
using TMPro;
using UI;
using UI.Buttons;
using UI.Fishing;
using UI.GameEvents;
using UI.Indicators;
using UI.Popups;
using UI.Tweens;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace Metacore.MergeMansion.UI
{
	public class CompactItemInfoArea : MonoBehaviour
	{
		public enum InfoButtonState
		{
			Hidden = 0,
			InfoIcon = 1,
			ShowLevel = 2
		}

		public enum FeatureGroup
		{
			None = 0,
			Currency = 1,
			Undo = 2,
			SpeedUp = 3,
			Sink = 4,
			TimerActivation = 5,
			Timer = 6,
			Amount = 7,
			Action = 8,
			Bubble = 9,
			Order = 10,
			EnergyMode = 11
		}

		[Serializable]
		public class PanelColorData
		{
			public Color TextHeaderColor;

			public Color TextDescriptionColor;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CShowTooltip_003Ed__338 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public bool initialDelay;

			public CancellationToken ct;

			public CompactItemInfoArea _003C_003E4__this;

			[NonSerialized]
			public float _003Ctimer_003E5__2;

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
		public struct _003CTimerLoop_003Ed__190 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CompactItemInfoArea _003C_003E4__this;

			public CancellationToken ct;

			[NonSerialized]
			public float _003CloopTimer_003E5__2;

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

		public const string GenericDragOnDescriptionTag = "GenericDragOnDescription";

		public const string GenericDragOnDescriptionLocKey = "Item_DragOnTop_Description";

		public const string SkipTextLocKey = "DialogText_Skip";

		[NonSerialized]
		public GameObject itemIcon;

		[NonSerialized]
		public ILoanedGameObject itemSprite;

		[NonSerialized]
		public string itemIconPoolTag;

		[Header("Main")]
		[SerializeField]
		public int compactTextLengthMax;

		[Header("Title")]
		[SerializeField]
		public TextMeshProUGUI titleText;

		[SerializeField]
		public TweenedItem titleTweenedItem;

		[SerializeField]
		public GameObject textContainer;

		[Header("Action Description")]
		[SerializeField]
		public TextMeshProUGUI descriptionText;

		[SerializeField]
		public TweenedItem descriptionTweenedItem;

		[Header("Level based visuals")]
		[SerializeField]
		public Image[] levelBorders;

		[SerializeField]
		public Image[] levelHeaders;

		[SerializeField]
		public Image[] levelItemBorders;

		[Header("Max Level Icon")]
		[SerializeField]
		public GameObject maxLevelIcon;

		[SerializeField]
		public TweenedItem maxLevelTweenedItem;

		[Header("Item Timer")]
		[SerializeField]
		public TimerControl itemTimer;

		[Header("Bubble Icon")]
		[SerializeField]
		public GameObject bubbleIcon;

		[SerializeField]
		public TweenedItem bubbleIconTweenedItem;

		[Header("Feature Group")]
		[SerializeField]
		public GameObject featureGroup;

		[Header("Currency Group")]
		[SerializeField]
		public CanvasGroup currencyGroup;

		[SerializeField]
		public TweenedItem currencyGroupTweenedItem;

		[SerializeField]
		public CurrencyButton currencyButton;

		[SerializeField]
		public TextMeshProUGUI currencyDescriptionText;

		[Header("Undo Group")]
		[SerializeField]
		public CanvasGroup undoGroup;

		[SerializeField]
		public TweenedItem undoGroupTweenedItem;

		[SerializeField]
		public TweenedButton undoButton;

		[SerializeField]
		public TextMeshProUGUI undoDescriptionText;

		[Header("Speed Up Group")]
		[SerializeField]
		public CanvasGroup speedUpGroup;

		[SerializeField]
		public TweenedItem speedGroupTweenedItem;

		[SerializeField]
		public CurrencyButton speedUpButton;

		[SerializeField]
		public TextMeshProUGUI speedUpDescriptionText;

		[SerializeField]
		public TextMeshProUGUI speedUpRewardAmount;

		[Header("Sink Group (Default)")]
		[SerializeField]
		public CanvasGroup sinkGroupDefault;

		[SerializeField]
		public TweenedItem sinkGroupDefaultTweenedItem;

		[SerializeField]
		public SpineInfoItemIndicator[] sinkItemsDefault;

		[Header("Timer Activation Group")]
		[SerializeField]
		public CanvasGroup timerActivationGroup;

		[SerializeField]
		public TweenedItem timerActivationGroupTweenedItem;

		[SerializeField]
		public TimerControl timerActivationGroupTimer;

		[SerializeField]
		public TweenedButton timerActivationButton;

		[SerializeField]
		public TextMeshProUGUI timerActivationButtonText;

		[SerializeField]
		public TextMeshProUGUI timerActivationDescriptionText;

		[Header("Timer Group")]
		[SerializeField]
		public CanvasGroup timerGroup;

		[SerializeField]
		public TweenedItem timerGroupTweenedItem;

		[SerializeField]
		public TimerControl timerGroupTimer;

		[SerializeField]
		public TextMeshProUGUI timerGroupDescriptionText;

		[Header("Amount Group")]
		[SerializeField]
		public CanvasGroup amountGroup;

		[SerializeField]
		public TweenedItem amountGroupTweenedItem;

		[SerializeField]
		public TextMeshProUGUI amountGroupDescriptionText;

		[SerializeField]
		public TextMeshProUGUI amountGroupValueText;

		[Header("Generic action Group")]
		[SerializeField]
		public CanvasGroup genericActionGroup;

		[SerializeField]
		public TweenedItem genericActionGroupTweenedItem;

		[SerializeField]
		public TweenedButton genericActionButton;

		[SerializeField]
		public TextMeshProUGUI genericActionButtonText;

		[SerializeField]
		public TextMeshProUGUI genericActionDescriptionText;

		[Header("Remove Bubble Group")]
		[FormerlySerializedAs("bubbleGroup")]
		[SerializeField]
		public CanvasGroup removeBubbleGroup;

		[FormerlySerializedAs("removebubbleGroupTweenedItem")]
		[SerializeField]
		public TweenedItem removeBubbleGroupTweenedItem;

		[FormerlySerializedAs("bubbleGroupDescriptionText")]
		[SerializeField]
		public TextMeshProUGUI removeBubbleGroupDescriptionText;

		[Header("Bubble Group")]
		[SerializeField]
		public CanvasGroup bubbleGroup;

		[SerializeField]
		public TweenedItem bubbleGroupTweenedItem;

		[SerializeField]
		public CurrencyButton bubbleCurrencyButton;

		[SerializeField]
		public TextMeshProUGUI bubbleCurrencyDescriptionText;

		[SerializeField]
		public GameObject bubbleBonusViewGroup;

		[SerializeField]
		public BubbleAuxEnergyBonusView bubbleBonusItemPrefab;

		[SerializeField]
		public ExtraSpawnsView bubbleBonusExtraSpawnsView;

		[SerializeField]
		public TextMeshProUGUI bubbleAdsRewardAmount;

		[Header("Bubble Bonuses")]
		[SerializeField]
		public BubbleBonusView currencyBonusView;

		[SerializeField]
		public ItemEffectBubbleBonus bubbleIconBonus;

		[Header("Info Button")]
		[SerializeField]
		public Transform infoButton;

		[SerializeField]
		public TweenedItem infoButtonTweenedItem;

		[Header("Seasonal info")]
		[SerializeField]
		public Transform infoPanelParent;

		[Header("Offer")]
		[SerializeField]
		public GameObject discountBadge;

		[SerializeField]
		public TextMeshProUGUI discountBadgeText;

		[Header("Switch")]
		[SerializeField]
		public Button switchButton;

		[Header("Fishing")]
		[SerializeField]
		public FishTag fishTag;

		[Header("Limited item count display")]
		[SerializeField]
		public LimitedItemCountDisplay limitedItemCountDisplay;

		[Header("Task Items")]
		[SerializeField]
		public InfoPanelTaskItemUI infoPanelTaskItems;

		[Header("EnergyMode")]
		[SerializeField]
		public EnergyModeInfoPanel energyModeInfoPanel;

		[Header("Actionable")]
		[SerializeField]
		public Actionable boardActionable;

		[SerializeField]
		public TextMeshProUGUI infoText;

		[SerializeField]
		public CanvasGroup canvasGroup;

		[NonSerialized]
		public IMergeItem currentItem;

		public Coordinate currentItemCoordinate;

		[NonSerialized]
		public MergeBoardId boardId;

		[NonSerialized]
		public ChestOpeningState chestState;

		public Coordinate currentSelectedProducer;

		[NonSerialized]
		public bool selectedItemCanBeActivated;

		[NonSerialized]
		public bool selectedItemCanSpawn;

		[NonSerialized]
		public int previousSpeedUpCost;

		[NonSerialized]
		public Action bubbleItemPositiveCallback;

		[NonSerialized]
		public Action bubbleItemNegativeCallback;

		[NonSerialized]
		public Action unlockItemPositiveCallback;

		[NonSerialized]
		public Action genericActionItemPositiveCallback;

		[NonSerialized]
		public EventInfoPanelBehaviour collectibleBoardEventInfoPanel;

		[NonSerialized]
		public EventInfoPanelBehaviour leaderboardEventInfoPanel;

		[NonSerialized]
		public EventInfoPanelBehaviour shortLeaderboardEventInfoPanel;

		[NonSerialized]
		public Option<CoreSupportEventInfoPanel> coreSupportEventInfoPanelOption;

		[NonSerialized]
		public Func<IPlayer, IItemDefinition, string> getEventItemDescriptionLocId;

		public static Action SpeedUpSelectedItemCall;

		public static Action SellSelectedItemCall;

		public static Action UndoSellCall;

		public static Action BoosterPauseCall;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public IAnalyticsCollector analyticsCollector;

		[NonSerialized]
		public IBoardController boardController;

		[NonSerialized]
		public IMergeGoalItemQuery mergeGoalItemQuery;

		[NonSerialized]
		public IIconLibrary iconLibrary;

		[NonSerialized]
		public IRewardsAnimations rewardsAnimations;

		[NonSerialized]
		public Coroutine timerCoroutine;

		[NonSerialized]
		public bool timerCoroutineActive;

		public static readonly float timerInterval;

		[NonSerialized]
		public int previewMergeToItemBaseExperience;

		[NonSerialized]
		public int previewMergeToItemTotalExperience;

		[NonSerialized]
		public int previewMergeToItemExperienceRequired;

		[NonSerialized]
		public Sequence animationSequence;

		[NonSerialized]
		public ItemInfoAreaVisibility infoAreaVisibility;

		[Header("Animation")]
		[SerializeField]
		public float shakeScaleDuration;

		[SerializeField]
		public float scaleChangeDuration;

		[SerializeField]
		public Ease scaleChangeEase;

		[NonSerialized]
		public bool initialised;

		[NonSerialized]
		public MetacoreTime? nextPollingRefreshTime;

		[NonSerialized]
		public readonly List<MetacoreTime> forcedRefreshTimes;

		[NonSerialized]
		public readonly StringBuilder stringBuilder;

		[NonSerialized]
		public GameObjectPoolManager gameObjectPoolManager;

		[NonSerialized]
		public Option<Rollback> _pollRollbackOption;

		[NonSerialized]
		public ISafeRollback _rollBack;

		[Header("Info Button Binding")]
		[SerializeField]
		public Button _infoButton;

		[Header("Order Group")]
		[SerializeField]
		public CanvasGroup _orderGroup;

		[SerializeField]
		public TextMeshProUGUI _orderedRewardTitle;

		[SerializeField]
		public PanelColorData _orderCompletedPanelColorData;

		[SerializeField]
		public SpineInfoItemIndicator[] _orderItems;

		[SerializeField]
		public SpineInfoItemIndicator[] _orderRewardItems;

		[SerializeField]
		public GameObject _orderRewardsParent;

		[SerializeField]
		public Graphic[] _orderTextHeaderColorGraphics;

		[SerializeField]
		public Graphic[] _orderTextDescriptionColorGraphics;

		[SerializeField]
		public GameObject _infoPanelGreenBackground;

		[Header("Tooltip")]
		[SerializeField]
		public float _tooltipShowDuration;

		[SerializeField]
		public GameObject _tooltip;

		[SerializeField]
		public TweenedButton _tooltipButton;

		[SerializeField]
		public DOTweenAnimation _tooltipAnimation;

		[SerializeField]
		public PanelColorData _normalPanelColorData;

		[SerializeField]
		public GameObject _defaultDescription;

		[SerializeField]
		public GameObject _infoIconObject;

		[Header("Level banner")]
		[SerializeField]
		public TextMeshProUGUI levelText;

		[SerializeField]
		public TextMeshProUGUI lvlText;

		[SerializeField]
		public GameObject levelBanner;

		[NonSerialized]
		public UniTask _showTooltipTask;

		[NonSerialized]
		public List<BubbleAuxEnergyBonusView> _instantiatedTooltipItems;

		[NonSerialized]
		public CancellationTokenSource _toolTipCancellationToken;

		[NonSerialized]
		public Action infoButtonCallback;

		public Transform SpeedUpButtonTransform => null;

		public TweenedButton OpenButton => null;

		public bool FeatureSpawnerCooldownTimerEnabled => false;

		public bool FeatureBubbleDismissButtonEnabled => false;

		public bool FeatureBubbleDiscountBadgeEnabled => false;

		public PlayerModel Player => null;

		public PlayerClientContext ClientContext => null;

		public IAudioPlayer Audio => null;

		public ItemInfoAreaVisibility InfoAreaVisibility => default(ItemInfoAreaVisibility);

		public bool CollectibleBoardEventCollectActive => false;

		public bool CollectibleBoardEventCollectAnimationActive => false;

		public GenericInfoType VisibleGenericInfo { get; set; }

		public void SetBoardId(MergeBoardId boardId)
		{
		}

		public void SetMergeGoalItemQuery(IMergeGoalItemQuery mergeGoalItemQuery)
		{
		}

		public bool TryGetActiveMergeGoalItemState(int itemId, out bool isActiveMergeGoalItem)
		{
			isActiveMergeGoalItem = default(bool);
			return false;
		}

		public bool IsActiveMergeGoalItem(int itemId)
		{
			return false;
		}

		public void TearDown()
		{
		}

		public virtual void Initialise()
		{
		}

		public virtual void OnEmptyCellClicked()
		{
		}

		public void Start()
		{
		}

		public virtual void UpdateInfoAreaVisibility()
		{
		}

		public void OnEnable()
		{
		}

		public virtual void SetCurrentItem(IMergeItem mergeItem)
		{
		}

		public void OnDisable()
		{
		}

		public virtual void RewardCleanup()
		{
		}

		public virtual void Dispose()
		{
		}

		public void StartTimer()
		{
		}

		[AsyncStateMachine(typeof(_003CTimerLoop_003Ed__190))]
		public UniTask TimerLoop(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void ForceRefreshIfEarlierThanPolling(MetacoreTime refreshTime)
		{
		}

		public bool CheckForcedRefreshTimes()
		{
			return false;
		}

		public virtual void Refresh()
		{
		}

		public bool AnimateElement(IMergeItem item)
		{
			return false;
		}

		public virtual void SetDefaultTitleAndDescription()
		{
		}

		public virtual string GetDescription()
		{
			return null;
		}

		public virtual void SetTitle(string value, bool animate = true)
		{
		}

		public void SetTitle(IMergeItem selectedItem, bool animate = true)
		{
		}

		public virtual string GetTitle(IMergeItem selectedItem, IItemDefinition definition)
		{
			return null;
		}

		public void DisableDescription(bool shouldDisableObject)
		{
		}

		public virtual void SetDescription(string value, bool animate = true)
		{
		}

		public void HideDescription()
		{
		}

		public void ShowDescription()
		{
		}

		public virtual void RefreshItemData(IMergeItem selectedItem, bool animate = true)
		{
		}

		public string GetItemDescription(IMergeItem selectedItem)
		{
			return null;
		}

		public virtual string GetPartiallyVisibleDescriptionId(bool canBeUnlocked)
		{
			return null;
		}

		public Option<(MetacoreDuration?, MetacoreDuration?)> ShouldShowTimerForCompact(IMergeItem selectedItem)
		{
			return default(Option<(MetacoreDuration?, MetacoreDuration?)>);
		}

		public void DeactivateGroups(ICollection<FeatureGroup> excludeGroup = null)
		{
		}

		public virtual void SetPartiallyVisibleState(Coordinate selectedCoordinate, IMergeItem selectedItem, Action positiveCallback)
		{
		}

		public virtual void UpdateTitle(IItemDefinition definition, IMergeItem selectedItem, bool animate)
		{
		}

		public void SetCurrencyGroupEnabled(bool enabled, int consumableSecondaryEnergyAttachmentCount = 0)
		{
		}

		public void SetUndoState(IMergeItem item)
		{
		}

		public void SetUndoGroupEnabled(bool enabled)
		{
		}

		public bool IsUndoGroupActive()
		{
			return false;
		}

		public void SetSpeedUpGroupEnabled(bool enabled)
		{
		}

		public void SetSinkGroupEnabled(bool sinkGroupEnabled, IMergeItem mergeItem = null)
		{
		}

		public virtual void EnableSinkGroups(CanvasGroup sinkGroup)
		{
		}

		public virtual void DisableSinkGroups()
		{
		}

		public virtual void SetOrderState(IMergeItem mergeItem)
		{
		}

		public virtual void SetOrderGroupEnabled(bool groupEnabled, IMergeItem mergeItem, bool animate)
		{
		}

		public void CleanupOrderGroupState()
		{
		}

		public void SetTimerActivationGroupEnabled(bool enabled)
		{
		}

		public void SetTimerGroupEnabled(bool enabled)
		{
		}

		public virtual void SetAmountGroupEnabled(bool groupEnabled)
		{
		}

		public virtual void SetBubbleGroupEnabled(bool enabled)
		{
		}

		public virtual void SetActionState(IMergeItem selectedItem, Action positiveAction = null)
		{
		}

		public virtual void UpdateActionStateIconAndTitle(IMergeItem mergeItem, bool animate)
		{
		}

		public void SetActionGroupEnabled(bool activeGroupEnabled)
		{
		}

		public void SetGarageCleanupEventProducerState(IMergeItem selectedItem, Action positiveAction = null)
		{
		}

		public virtual void UpdateGarageCleanupEventProducerStateIconAndTitle(IMergeItem mergeItem, bool animate)
		{
		}

		public void SetSpeedUpItems(IMergeItem selectedItem, MetacoreTime time)
		{
		}

		public virtual string GetSpeedUpDescription()
		{
			return null;
		}

		public virtual void RefreshTimerSection(IMergeItem selectedItem)
		{
		}

		public Option<(MetacoreDuration?, MetacoreDuration?)> ShowTimerForActivation(IMergeItem selectedItem)
		{
			return default(Option<(MetacoreDuration?, MetacoreDuration?)>);
		}

		public virtual void DeselectItem()
		{
		}

		public void ShowStandardSpawnerOrActivationCurrentItemInfo()
		{
		}

		public void ShowStandardSpawnerOrActivationItemInfo(IMergeItem selectedItem)
		{
		}

		public void RefreshTimer(IMergeItem selectedItem, MetacoreTime currentTimestamp)
		{
		}

		public virtual void ShowSpawnerTimer(MetacoreDuration? totalDuration, MetacoreDuration? remainingDuration)
		{
		}

		public virtual void ShowSpawnerTimer(MetacoreTime? startTime, MetacoreTime? finalTime)
		{
		}

		public virtual void HideSpawnerTimer()
		{
		}

		public void SetStandardSpawnerOrActivationItemState(IMergeItem selectedItem, MetacoreTime currentTimestamp)
		{
		}

		public virtual void UpdateStandardSpawnerOrActivationItemStateIconAndTitle(IMergeItem mergeItem, bool animate)
		{
		}

		public virtual void SetChestState(MergeBoardId newBoardId, Coordinate chestCoordinate, IMergeItem chest, bool canOpenChest)
		{
		}

		public void UpdateChestState(bool canOpenChest, bool animate)
		{
		}

		public virtual void SetChestCanBeOpenedState(bool animate)
		{
		}

		public virtual void UpdateChestStateTitle(bool animate)
		{
		}

		public virtual string GetIsReadyForOpenDescription()
		{
			return null;
		}

		public virtual string GetAlreadyOpeningDescription()
		{
			return null;
		}

		public virtual void UpdateChestIsOpeningDescription(bool animate)
		{
		}

		public virtual void SetBubbleItemState(IMergeItem itemInBubble, Action positive, Coordinate bubblePosition, List<MergeBoardAct> acts, Action dismiss, IPlayer player)
		{
		}

		public virtual void UpdateBubbleBonuses(BubbleState bubbleState)
		{
		}

		public virtual void UpdateBubbleItemStateIconAndTitle(IMergeItem itemInBubble, IItemDefinition definition, bool animate)
		{
		}

		public void SetConsumableSecondaryEnergyAttachmentCount(int consumableSecondaryEnergyAttachmentCount)
		{
		}

		public void SetInactiveBoosterState(IMergeItem selectedItem)
		{
		}

		public void UpdateContainingTime()
		{
		}

		public void UpdateRemainingTime()
		{
		}

		public void SendTimerStartedAnalytics(IMergeItem item, MetacoreDuration? duration, CurrencySink sinkType)
		{
		}

		public GameResourceCost GetPlayerCurrentBalance(Currencies currency)
		{
			return null;
		}

		public virtual void UpdateInactiveBoosterStateIconTitleAndDescription(IMergeItem mergeItem, bool animate)
		{
		}

		public virtual void UpdateActiveBoosterStateIconTitleAndDescription(IMergeItem mergeItem, bool animate)
		{
		}

		public virtual void UpdateChargeStateTitleAndDescription(IMergeItem mergeItem, bool animate)
		{
		}

		public virtual void UpdateInfiniteEnergyStateTitleAndDescription(IMergeItem mergeItem, bool animate)
		{
		}

		public void SetActiveBoosterState(IMergeItem selectedItem)
		{
		}

		public void SetChargeState(IMergeItem selectedItem)
		{
		}

		public void SetInfiniteEnergyState(IMergeItem selectedItem)
		{
		}

		public virtual void UpdateInfiniteEnergyDurationState(IMergeItem selectedItem, string durationText, bool animate)
		{
		}

		public virtual void UpdateMissingInfiniteEnergyDurationState(IMergeItem selectedItem, string durationText, bool animate)
		{
		}

		public virtual void SetTimeStorageState(IMergeItem selectedItem)
		{
		}

		public virtual void UpdateTimeStorageTitleAndDescription(IMergeItem mergeItem, bool animate)
		{
		}

		public void UpdateDefaultTitle(IMergeItem mergeItem, bool animate)
		{
		}

		public virtual void ShowGenericInfo(GenericInfoType type, string localizedTitle, string localizedDescription, Option<Sprite> sprite, Action onInfoButtonClicked)
		{
		}

		public void SpeedUpButtonClicked()
		{
		}

		public void ActionButtonClicked()
		{
		}

		public void TimerActivationButtonClicked()
		{
		}

		public void InfoButtonClicked()
		{
		}

		public void ExtraInfoButtonClicked()
		{
		}

		public void ArtifactInfoButtonClicked()
		{
		}

		public void UndoButtonClicked()
		{
		}

		public void GenericActionButtonClicked()
		{
		}

		public void RemoveBubbleClicked()
		{
		}

		public static T InstantiateAtParentZero<T>(T prefab, Transform parent) where T : MonoBehaviour
		{
			return null;
		}

		public bool TryGetEventInfoPanelPrefab<TEventModel>(TEventModel eventModel, out EventInfoPanelBehaviour prefab)
		{
			prefab = null;
			return false;
		}

		public void SetupCollectibleBoardEventInfo(CollectibleBoardEventModel eventModel, bool forceShowInfoPanel = false, FishingRodInfoPanel.State fishingState = FishingRodInfoPanel.State.None)
		{
		}

		public void RefreshCollectibleBoardEventInfoPanel(CollectibleBoardEventModel eventModel)
		{
		}

		public void ClearCollectibleBoardEventInfo()
		{
		}

		public void OnCollectibleBoardEventCollect(CollectibleBoardEventModel eventModel, int progress)
		{
		}

		public Vector3? GetCollectibleBoardEventAnimateTarget()
		{
			return null;
		}

		public void SetupLeaderboardEventInfo(LeaderboardEventModel eventModel)
		{
		}

		public bool IsLeaderboardEventInfoActive()
		{
			return false;
		}

		public void ClearLeaderboardEventInfo()
		{
		}

		public void OnLeaderboardEventScoreChanged(LeaderboardEventModel eventModel, int scoreChange)
		{
		}

		public Vector3? GetLeaderboardEventAnimateTarget()
		{
			return null;
		}

		public void SetupShortLeaderboardEventInfo(ShortLeaderboardEventModel eventModel)
		{
		}

		public bool IsShortLeaderboardEventInfoActive()
		{
			return false;
		}

		public void ClearShortLeaderboardEventInfo()
		{
		}

		public void OnShortLeaderboardEventScoreChanged(ShortLeaderboardEventModel eventModel, int scoreChange)
		{
		}

		public Vector3? GetShortLeaderboardEventAnimateTarget()
		{
			return null;
		}

		public void SetupCoreSupportEventInfo(CoreSupportEventModel eventModel, int amountBefore, int amountAfter)
		{
		}

		public virtual void CreateCoreSupportEventInfoPanel(CoreSupportEventModel eventModel, int amountBefore, int amountAfter)
		{
		}

		public Transform GetCoreSupportEventInfoPanelTargetParent()
		{
			return null;
		}

		public void ClearCoreSupportEventInfo()
		{
		}

		public Option<CoreSupportEventInfoPanel> GetCoreSupportEventInfoPanel(CoreSupportEventModel eventModel)
		{
			return default(Option<CoreSupportEventInfoPanel>);
		}

		public bool HasCoreSupportEventInfoPanelActive()
		{
			return false;
		}

		public void HideLimitedItemCount()
		{
		}

		public void ShowLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
		{
		}

		public void SetFuncGetEventItemDescriptionLocId(Func<IPlayer, IItemDefinition, string> parGetEventItemDescriptionLocId)
		{
		}

		public void SetInfoButtonEnabled(bool visible)
		{
		}

		public virtual void SetOnInfoButtonClickedHandler(Action handler)
		{
		}

		public void SetMaxLevelIconEnabled(bool enabled)
		{
		}

		public virtual void SetLevelItemsEnabled(bool enabled, int level = 0, int minLevel = 0)
		{
		}

		public void SetLevelBanner(InfoButtonState state, int level = 0)
		{
		}

		public void SetBubbleIcon(BubbleState bubbleState, IItemDefinition itemDefinition = null)
		{
		}

		public virtual bool IsBubbleIconEnabled()
		{
			return false;
		}

		public Option<ExtraSpawnBoardData> CreateExtraSpawnBoardData()
		{
			return default(Option<ExtraSpawnBoardData>);
		}

		public void ShowDiscount(int discount)
		{
		}

		public void SetDiscountEnabled(bool enabled)
		{
		}

		public void SetSwitchAction(Action switchAction)
		{
		}

		public bool IsFishingRodInfoActive()
		{
			return false;
		}

		public void SetFishTag(IMergeItem item)
		{
		}

		public FishRarity? GetFishRarityForItem(IMergeItem item)
		{
			return null;
		}

		public string GetDynamicValue()
		{
			return null;
		}

		public Vector3 GetCurrencyButtonPosition()
		{
			return default(Vector3);
		}

		public CurrencyButton GetSpeedUpButton()
		{
			return null;
		}

		public void Show()
		{
		}

		public void Hide()
		{
		}

		public void ForceRebuildFeatureGroupLayout()
		{
		}

		public void SetEnergyMode(BoardInfo boardInfo, Option<EnergyModeInfo> energyModeOption, IScheduler scheduler, ISafeRollback rollback)
		{
		}

		public void SetItemInfoAreaVisibility(ItemInfoAreaVisibility visibility)
		{
		}

		public void SetVisibleAndInteractable(bool visibleAndInteractable)
		{
		}

		[PublicAPI]
		public void OnOpenTooltip()
		{
		}

		public bool IsTooltipTaskRunning()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CShowTooltip_003Ed__338))]
		public UniTask ShowTooltip(CancellationToken ct, bool initialDelay = false)
		{
			return default(UniTask);
		}
	}
}
