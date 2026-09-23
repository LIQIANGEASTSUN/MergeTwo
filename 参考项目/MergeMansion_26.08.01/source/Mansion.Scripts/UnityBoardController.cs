using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Animations;
using Animations.Flying;
using Audio;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using Code.InitFlow;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameAddressables;
using GameEvents;
using GameLogic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Board.Effects;
using GameLogic.Player.Events;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Attachments;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Collectable;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Modes;
using GameLogic.Player.Rewards;
using Haptics;
using IAP;
using Merge;
using Merge.AutoMerge;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.Merge;
using Metacore.MergeMansion.SystemGroups;
using Metacore.MergeMansion.UI;
using Metacore.MergeMansion.UI.Board;
using Metacore.MergeMansion.Utility;
using Metacore.Rendering;
using Metaplay.Core;
using Navigation;
using Pool;
using UI;
using UI.Board;
using UI.Board.BoardStatusEffect;
using UI.Messaging;
using UI.Tooltips;
using UnityEngine;

public class UnityBoardController : IBoardController, ISharedBoardController, IMainStateBoardEvents, ITickSystem, IApplicationPauseSystem, IApplicationFocusSystem
{
	public struct DelayedTapHintData
	{
		public int ItemId;

		public Coordinate Coordinate;

		public ItemVisibility Visibility;

		public DirectorGroupId GroupId;

		public bool AllowBubbleItems;

		public float StartDelay;

		public DelayedTapHintData(int itemId, Coordinate coordinate, ItemVisibility visibility, DirectorGroupId groupId, bool allowBubbleItems, float startDelay)
		{
			ItemId = 0;
			Coordinate = default(Coordinate);
			Visibility = default(ItemVisibility);
			GroupId = null;
			AllowBubbleItems = false;
			StartDelay = 0f;
		}
	}

	public class DelayedCollectibleBoardEventRewardAnimationData
	{
		public int State;

		public ICollectibleBoardEventCollectAction CollectAction;

		public CollectibleBoardEventModel EventModel;

		public BoardItemHandler BoardItem;

		public IItemDefinition Item;

		public Vector3 From;

		public Coordinate FromCoordinate;

		public DelayedCollectibleBoardEventRewardAnimationData(ICollectibleBoardEventCollectAction collectAction, CollectibleBoardEventModel eventModel, BoardItemHandler boardItem, IItemDefinition item, Vector3 from, Coordinate fromCoordinate)
		{
		}
	}

	public struct ExtraSpawnQueueItem
	{
		public readonly Coordinate Coordinate;

		public readonly IItemDefinition Item;

		public readonly Option<Currencies> CurrencyOption;

		public readonly Option<CoreSupportEventTokenId> TokenIdOption;

		public readonly int AmountBefore;

		public readonly int AmountAfter;

		public ExtraSpawnQueueItem(Coordinate coordinate, IItemDefinition item, Option<Currencies> currencyOption, Option<CoreSupportEventTokenId> tokenIdOption, int amountBefore, int amountAfter)
		{
			Coordinate = default(Coordinate);
			Item = null;
			CurrencyOption = default(Option<Currencies>);
			TokenIdOption = default(Option<CoreSupportEventTokenId>);
			AmountBefore = 0;
			AmountAfter = 0;
		}

		public bool SpawnsSameUnit(ExtraSpawnQueueItem other)
		{
			return false;
		}
	}

	public enum AnimateExtraSpawnStyle
	{
		Default = 0,
		EventsOnBoard = 1
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass490_0
	{
		public UnityBoardController _003C_003E4__this;

		public IBoardEventCard card;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass551_0
	{
		public int activeAnimationCount;

		public void _003CProcessExtraSpawnQueue_Default_003Eb__0()
		{
		}
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass556_0
	{
		public UnityBoardController _003C_003E4__this;

		public Option<Coordinate> targetCoordinate;

		public void _003CAnimateExtraSpawnCurrency_003Eb__0()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CAnimateAuxEnergyForEventsOnBoard_003Ed__490 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

		public EnergyType energyType;

		public Vector3 from;

		public IItemDefinition item;

		public int amount;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass490_0 _003C_003E8__1;

		[NonSerialized]
		public Vector3 _003CtargetPosition_003E5__2;

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
	public struct _003CAnimateExtraSpawn_003Ed__553 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

		public ExtraSpawnQueueItem item;

		public AnimateExtraSpawnStyle style;

		public CancellationToken ct;

		public Option<Action> onCompleteOption;

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
	public struct _003CAnimateExtraSpawnCoreSupportEventTokens_003Ed__557 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public int amountAfter;

		public int amountBefore;

		public CoreSupportEventTokenId tokenId;

		public UnityBoardController _003C_003E4__this;

		public AnimateExtraSpawnStyle style;

		public IItemDefinition item;

		public Coordinate coordinate;

		public CancellationToken ct;

		public Vector3 from;

		[NonSerialized]
		public RewardCoreSupportEventTokens _003Creward_003E5__2;

		[NonSerialized]
		public CoreSupportEventModel _003CeventModel_003E5__3;

		[NonSerialized]
		public bool _003CshowInfoPanel_003E5__4;

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
	public struct _003CAnimateExtraSpawnCurrency_003Ed__554 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Currencies currency;

		public UnityBoardController _003C_003E4__this;

		public int amountAfter;

		public int amountBefore;

		public Vector3 from;

		public AnimateExtraSpawnStyle style;

		public IItemDefinition item;

		public Coordinate coordinate;

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
	public struct _003CAnimateExtraSpawnCurrency_003Ed__556 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

		public int amountAfter;

		public int amountBefore;

		public Currencies currency;

		public AnimateExtraSpawnStyle style;

		public IItemDefinition item;

		public Coordinate coordinate;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass556_0 _003C_003E8__1;

		public Vector3 from;

		[NonSerialized]
		public PlayerReward _003Creward_003E5__2;

		[NonSerialized]
		public Vector3? _003Ctarget_003E5__3;

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
	public struct _003CDelayedTapHintAsync_003Ed__453 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

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
	public struct _003CLoadAndInstantiateBoardBackground_003Ed__288 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<Option<GameObject>> _003C_003Et__builder;

		public MergeBoardId mergeBoardId;

		public UnityBoardController _003C_003E4__this;

		public IBoardEventModel boardEventModel;

		public CancellationToken ct;

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
	public struct _003CLoadAndInstantiateBoardBackgroundInternal_003Ed__289 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<Option<GameObject>> _003C_003Et__builder;

		public IMergeBoardEventPrefabs boardEventPrefabs;

		public CancellationToken ct;

		public UnityBoardController _003C_003E4__this;

		public MergeBoardId mergeBoardId;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

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
	public struct _003CProcessExtraSpawnQueue_003Ed__550 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

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
	public struct _003CProcessExtraSpawnQueue_Default_003Ed__551 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass551_0 _003C_003E8__1;

		[NonSerialized]
		public Option<ExtraSpawnQueueItem> _003CpreviousItemOption_003E5__2;

		[NonSerialized]
		public Option<Action> _003ConAnimationComplete_003E5__3;

		[NonSerialized]
		public ExtraSpawnQueueItem _003Citem_003E5__4;

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
	public struct _003CProcessExtraSpawnQueue_EventsOnBoard_003Ed__552 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UnityBoardController _003C_003E4__this;

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

	[NonSerialized]
	public MenuStatus menuStatus;

	[NonSerialized]
	public IBoardEventModel currentBoardEventModel;

	[NonSerialized]
	public MergeBoard mergeBoard;

	[NonSerialized]
	public MergeBoardId _previousMergeBoardId;

	[NonSerialized]
	public bool boardNeedsVisualRebuild;

	[NonSerialized]
	public IEnumerable<IBoardInventory> defaultInventories;

	[NonSerialized]
	public IEnumerable<IBoardInventory> producerInventories;

	[NonSerialized]
	public IEnumerable<IBoardInventory> rentableInventories;

	[NonSerialized]
	public HashSet<int> wantedDailyTaskItems;

	[NonSerialized]
	public readonly ICollection<MergeBoardAct> enqueuedAutoSellItemsFromBoardActs;

	[NonSerialized]
	public readonly ICollection<MergeBoardAct> enqueuedAutoSellItemsFromInventoryActs;

	[NonSerialized]
	public readonly ICollection<MergeBoardAct> enqueuedAutoSellItemsFromPocketActs;

	[NonSerialized]
	public Func<MergeBoard, bool> shouldEventEndCheck;

	[NonSerialized]
	public Canvas boardCanvas;

	[NonSerialized]
	public BoardItemHandler[,] slots;

	[NonSerialized]
	public Vector2[,] uiPositions;

	[NonSerialized]
	public Vector2[,] uiDragPositions;

	[NonSerialized]
	public readonly List<MergeBoardAct> unprocessedActs;

	[NonSerialized]
	public MetaTime lastBoardUpdateTime;

	[NonSerialized]
	public bool doBoardItemsDrawOrderUpdate;

	[NonSerialized]
	public Coordinate processClickForCoordinate;

	[NonSerialized]
	public List<ProcessClickActionType> processClickActionTypes;

	[NonSerialized]
	public Coordinate processSelectForCoordinate;

	[NonSerialized]
	public int selectedItem;

	[NonSerialized]
	public Coordinate selectedCoordinate;

	[NonSerialized]
	public Coordinate processSoldCoordinate;

	[NonSerialized]
	public Coordinate processSpeedUpCoordinate;

	[NonSerialized]
	public bool hasToProcessPocketItem;

	[NonSerialized]
	public Coordinate processPocketEmptyCoordinate;

	[NonSerialized]
	public Vector2 pocketButtonPosition;

	[NonSerialized]
	public bool processDragCoordinates;

	[NonSerialized]
	public Coordinate mergeOrMoveFrom;

	[NonSerialized]
	public Coordinate mergeOrMoveTo;

	[NonSerialized]
	public Coordinate mergeOrMoveToNear;

	[NonSerialized]
	public bool nearInventoryButton;

	[NonSerialized]
	public bool dragIsOngoing;

	[NonSerialized]
	public bool updateEventTimeLeft;

	[NonSerialized]
	public readonly int updateEventTimeLeftEveryNthFrame;

	[NonSerialized]
	public int updateEventTimeLeftCounter;

	[NonSerialized]
	public bool readyForUpdates;

	[NonSerialized]
	public WallClockTime lastMergeHintRelatedEventTimestamp;

	[NonSerialized]
	public List<BoardItemHandler> currentTagSinkHints;

	[NonSerialized]
	public bool showingSinkTagHint;

	[NonSerialized]
	public Coordinate selectedSinkTagCoordinates;

	[NonSerialized]
	public BoardItemHandler currentTagSinkableHint;

	[NonSerialized]
	public bool showingSinkableTagHint;

	[NonSerialized]
	public Coordinate selectedSinkableTagCoordinates;

	[NonSerialized]
	public BoardItemHandler currentOrderHintItem;

	[NonSerialized]
	public bool showingOrderHint;

	[NonSerialized]
	public Coordinate selectedOrderCoordinates;

	[NonSerialized]
	public bool showingMergeHint;

	[NonSerialized]
	public BoardItemHandler mergeHintItem1;

	[NonSerialized]
	public BoardItemHandler mergeHintItem2;

	[NonSerialized]
	public bool showingSinkHint;

	[NonSerialized]
	public List<BoardItemHandler> sinkHintItems;

	public static readonly System.Random MergeHintRandom;

	[NonSerialized]
	public readonly SearchOptions mergeHintSearch;

	[NonSerialized]
	public bool canBeMergedShowing;

	[NonSerialized]
	public bool canBeSunkShowing;

	[NonSerialized]
	public bool canBeConsumedShowing;

	[NonSerialized]
	public bool canTakePhotoShowing;

	[NonSerialized]
	public bool nearInventoryEffectShowing;

	[NonSerialized]
	public HashSet<int> itemsWithDiscoveryEffectShowing;

	[NonSerialized]
	public BoardItemHandler tapHintItem;

	[NonSerialized]
	public bool isLegacyEvent;

	[NonSerialized]
	public bool isLiveOpsEventBoard;

	[NonSerialized]
	public readonly Vector2 hideLocation;

	[NonSerialized]
	public (BoardItemHandler boardItemHandler, MergeItem mergeItem)? draggedItem;

	[NonSerialized]
	public IMenuController menuController;

	[NonSerialized]
	public Director director;

	[NonSerialized]
	public IHotspotProgressRefresher hotspotProgressRefresher;

	[NonSerialized]
	public IHotspotPopupActions hotspotPopupActions;

	[NonSerialized]
	public IMergeGoalItemQuery mergeGoalItemQuery;

	[NonSerialized]
	public MapVisibilityController mapVisibilityController;

	[NonSerialized]
	public CollectibleBoardEventManager collectibleBoardEventManager;

	[NonSerialized]
	public LeaderboardEventManager leaderboardEventManager;

	[NonSerialized]
	public INavigationController Navigation;

	[NonSerialized]
	public DialogueRunner dialogueController;

	[NonSerialized]
	public TitleBarController titleBarController;

	[NonSerialized]
	public TutorialHandController tutorialHandController;

	[NonSerialized]
	public TooltipManager tooltipManager;

	[NonSerialized]
	public CollectibleBoardEventManager _collectibleBoardEventManager;

	[NonSerialized]
	public LeaderboardEventManager _leaderboardEventManager;

	[NonSerialized]
	public readonly Dictionary<string, (GameObject, IDisposableAssetHandle<GameObject>)> _dynamicBackgrounds;

	[NonSerialized]
	public List<(Coordinate coordinate, MergeBoardAct.ItemActSource actSource)> itemActions;

	public static Action OnMergeBoardBecameVisible;

	public static Action OnMapBecameVisible;

	[NonSerialized]
	public IRewardsAnimations RewardsAnimations;

	[NonSerialized]
	public readonly IAudioPlayer Audio;

	[NonSerialized]
	public readonly IPoolsManager PoolsManager;

	[NonSerialized]
	public HapticsController HapticsController;

	public const string hapticConfigIdGenericError = "GenericErrorOnMergeboard1";

	[NonSerialized]
	public IActionsExecutor actionsExecutor;

	[NonSerialized]
	public readonly IScheduler scheduler;

	[NonSerialized]
	public readonly ISafeRollback schedulerRollback;

	[NonSerialized]
	public readonly PlayerClientCache _playerClientCache;

	[NonSerialized]
	public readonly SceneContextMansion sceneContextMansion;

	[NonSerialized]
	public readonly PlayerModel player;

	[NonSerialized]
	public readonly PlayerClientContext playerContext;

	[NonSerialized]
	public readonly IAnalyticsCollector analytics;

	[NonSerialized]
	public bool waitingForMergeConfirmationResult;

	[NonSerialized]
	public bool hasMergeConfirmationResult;

	[NonSerialized]
	public MergeResult confirmableMergeResult;

	public const string ErrorInventoryFullLocId = "Error_InventoryFull";

	public const string ErrorMoveToInventoryNotAllowedLocId = "Error_MoveToInventoryNotAllowed";

	[NonSerialized]
	public HashSet<int> bannedSearchItems;

	[NonSerialized]
	public bool IsEnergyFillVisualUpdatePaused;

	[NonSerialized]
	public MysteryMachineBoard mysteryMachineBoard;

	[NonSerialized]
	public MessagingController messagingController;

	[NonSerialized]
	public GameObject activeBackground;

	[NonSerialized]
	public bool hasActiveCooldownRemover;

	[NonSerialized]
	public bool hasActiveOnFireEffect;

	[NonSerialized]
	public bool isActivatingOnFireEffect;

	public const float ItemAnimationToCoordinateDuration = 0.3f;

	public const Ease ItemAnimationToCoordinateEasing = Ease.InOutSine;

	public const float ItemMoveDuration = 0.75f;

	public static readonly MetaDuration leaderboardEventRankingPollingInterval;

	[NonSerialized]
	public MetaTime? lastLeaderboardEventBoardButtonRefreshTime;

	[NonSerialized]
	public BoardStatusEffectSystem boardStatusEffectSystem;

	[NonSerialized]
	public readonly Dictionary<BoardStepResult, MetaTime> _lastBoardStepResultTimes;

	[NonSerialized]
	public Option<BoardCustomInit> _boardCustomInitOption;

	[NonSerialized]
	public BoardViewTaskHandler _boardViewTaskHandler;

	[NonSerialized]
	public readonly IBoardCamera _boardCamera;

	[NonSerialized]
	public readonly IPurchaseManager _purchaseManager;

	[NonSerialized]
	public Option<CancellationTokenSource> _ctsOption;

	[NonSerialized]
	public Vector3? originalBottomRightMarkerLocalPos;

	[NonSerialized]
	public Vector3? originalTopleftMarkerLocalPos;

	[NonSerialized]
	public readonly Dictionary<IItemDefinition, bool> _unlockedActivationSpawnItemsCache;

	[NonSerialized]
	public readonly Dictionary<IItemDefinition, bool> _unlockedSpawnItemsCache;

	[NonSerialized]
	public DelayedTapHintData delayedTapHint;

	[NonSerialized]
	public bool delayedTapHintSet;

	[NonSerialized]
	public readonly Queue<DelayedCollectibleBoardEventRewardAnimationData> delayedCollectibleBoardEventRewardAnimations;

	[NonSerialized]
	public int delayedCollectibleBoardEventProgressChange;

	[NonSerialized]
	public int delayedLeaderboardEventScoreChange;

	[NonSerialized]
	public int delayedShortLeaderboardEventScoreChange;

	[NonSerialized]
	public int _scoreUpCount;

	public const RewardsAnimationsFlags EXTRA_SPAWN_REWARDS_ANIMATION_FLAGS = RewardsAnimationsFlags.ExplosionOnBegin | RewardsAnimationsFlags.IgnoreChunksCount;

	public const int EXTRA_SPAWN_SCORE_UP_DURATION_MILLISECONDS = 700;

	public const int EXTRA_SPAWN_DIFFERENT_UNIT_DELAY_MILLISECONDS = 1250;

	public const int EXTRA_SPAWN_INFO_PANEL_DELAY_MILLISECONDS = 250;

	public const int EXTRA_SPAWN_EVENTS_ON_BOARD_DELAY = 1500;

	[NonSerialized]
	public Option<CancellationTokenSource> _processExtraSpawnQueueCtsOption;

	[NonSerialized]
	public readonly Queue<ExtraSpawnQueueItem> _extraSpawnQueue;

	public static UnityBoardController Instance => null;

	public static bool HasInstance => false;

	public RectTransform topLeftMarker => null;

	public RectTransform bottomRightMarker => null;

	public GameObject canvasGO => null;

	public RectTransform selectionIndicator => null;

	public GameObject cooldownRemoverIndicator => null;

	public TimerControl cooldownRemoverTimer => null;

	public GameObject canBeMergedIndicator => null;

	public GameObject canBeSinkedIndicator => null;

	public GameObject canTakePhotoIndicator => null;

	public GameObject canBeConsumedIndicator => null;

	public GameObject defaultBackground => null;

	public CompactItemInfoArea itemInfoArea => null;

	public Vector2 topLeftLimit => default(Vector2);

	public Vector2 botRightLimit => default(Vector2);

	public Vector2 topLeftDraggingLimit => default(Vector2);

	public Vector2 botRightDraggingLimit => default(Vector2);

	public bool MergeHintEnabled => false;

	public MenuStatus MenuStatus
	{
		get
		{
			return default(MenuStatus);
		}
		set
		{
		}
	}

	public Transform boardParent => null;

	public MergeBoard CurrentBoard => null;

	public Option<BoardInfo> CurrentBoardInfoOption => default(Option<BoardInfo>);

	public Coordinate SelectedCoordinate => default(Coordinate);

	public MenuStatus VisualStatus => default(MenuStatus);

	public PlayerModel Player => null;

	public IAnalyticsCollector Analytics => null;

	public SharedGlobals SharedGlobals => null;

	public MergeItem SelectedItem => null;

	public MysteryMachineView MysteryMachineView => null;

	public IScheduler Scheduler => null;

	public ISafeRollback SchedulerRollback => null;

	public BoardItemHandler this[Coordinate coord]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public BoardItemHandler this[int x, int y]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public ProgressionEventBoardTopBar ProgressionEventBoardTopBar => null;

	public IReadOnlyDictionary<BoardStepResult, MetaTime> LastBoardStepResultTimes => null;

	public CanvasScaleFactorStack CanvasScaleFactorStack => null;

	public RectTransform ItemParent => null;

	public Option<BoardCustomInit> BoardCustomInitOption => default(Option<BoardCustomInit>);

	public GameObject CanvasGameObject => null;

	public LocationLoader LocationLoader { get; }

	public AddressablesSession AddressablesSession { get; }

	public CancellationToken CancellationToken => default(CancellationToken);

	public Option<AutoMergeController> AutoMergeController { get; set; }

	public event Action<MenuStatus> OnTransition
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

	public event Action<MergeBoardAct> OnMergeActProcessed
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

	public event Action<MergeBoardAct> OnManualSpawnActProcessed
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

	public event Action<BoardStepResult> OnBoardStepResult
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

	public event Action<MergeResult> OnMergeResult
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

	public void SetMessagingController(MessagingController messagingController)
	{
	}

	public void ChangeEnergyFillVisualUpdateState(bool value)
	{
	}

	public bool GetEnergyFillVisualUpdateState()
	{
		return false;
	}

	public void SetBannedSearchItems(HashSet<int> bannedItems)
	{
	}

	public UnityBoardController(IActionsExecutor actionsExecutor, IScheduler scheduler, ISafeRollback schedulerRollback, PlayerClientCache playerClientCache, SceneContextMansion sceneContextMansion, PlayerModel player, PlayerClientContext playerContext, IAnalyticsCollector analytics, IAudioPlayer audio, IPoolsManager poolsManager, IBoardCamera boardCamera, IPurchaseManager purchaseManager, LocationLoader locationLoader, AddressablesSession addressablesSession)
	{
	}

	public void Init2(IScheduler scheduler, MenuController menuController, RewardAnimationController rewardAnimationController, TooltipManager tooltipManager, HapticsController hapticsController, BoardViewTaskHandler boardViewTaskHandler, TitleBarController titleBarController)
	{
	}

	public void Init3(ISafeRollback rollback, NavigationController navigationController, MenuController menuController, DialogueRunner dialogueController, Director director, MapVisibilityController mapVisibilityController, TutorialHandController tutorialHandController, BoardStatusEffectSystem boardStatusEffectSystem, IHotspotProgressRefresher hotspotProgressRefresher, IHotspotPopupActions hotspotPopupActions, IMergeGoalItemQuery mergeGoalItemQuery, CollectibleBoardEventManager collectibleBoardEventManager, LeaderboardEventManager leaderboardEventManager)
	{
	}

	public void OnEventRemoved(CollectibleBoardEventInfo removed)
	{
	}

	public void OnAutoMergeStateChanged()
	{
	}

	public void OnAutoMergeDurationChanged()
	{
	}

	public void RefreshBoardSlots(out bool refreshed)
	{
		refreshed = default(bool);
	}

	public void RefreshBoardUIPositions()
	{
	}

	public static (Vector3, Vector3) AdjustForBoardDimensionsRatio(Vector3 topLeft, Vector3 bottomRight, Vector2 ratio)
	{
		return default((Vector3, Vector3));
	}

	public void ClearSlots()
	{
	}

	public void UpdateInner()
	{
	}

	void ITickSystem.Tick()
	{
	}

	public void ResetDragAction()
	{
	}

	public void SetMergeBoard(MergeBoard board)
	{
	}

	public void RefreshDecayWarning()
	{
	}

	public List<BoardItemHandler> GetItemsToSink(ISinkState sinkState)
	{
		return null;
	}

	public BoardItemHandler GetTagSink(string tag)
	{
		return null;
	}

	public BoardItemHandler GetOrderItem(int itemId)
	{
		return null;
	}

	public void AnimateItemToCoordinate(Coordinate itemCoordinate, Coordinate animateToCoordinate, float animationDuration = 0.3f, Ease animationEasing = Ease.Linear)
	{
	}

	public IBoardEventModel GetCurrentBoardEventModel()
	{
		return null;
	}

	void IApplicationFocusSystem.OnApplicationFocus(bool hasFocus)
	{
	}

	void IApplicationPauseSystem.OnApplicationPause(bool pauseStatus)
	{
	}

	public void CalculateDragLimits(SceneContextMansion context)
	{
	}

	public void SelectItemAt(Coordinate c, bool showSinkItemTooltip = false, bool fromClick = false)
	{
	}

	public bool ShouldCollectibleBoardEventInfoRemainActive()
	{
		return false;
	}

	public bool ShouldLeaderboardEventInfoRemainActive()
	{
		return false;
	}

	public bool ShouldShortLeaderboardEventInfoRemainActive()
	{
		return false;
	}

	public bool ShouldFishingRodInfoRemainActive(MergeItem selectedItem, bool selectedCoordinateChanged)
	{
		return false;
	}

	public void DeselectItem()
	{
	}

	public void OnBoardTransition()
	{
	}

	public void OnOverlayMenuChange(bool isVisible)
	{
	}

	public void UndoSell()
	{
	}

	public void ClearUndoSellState()
	{
	}

	public void StartRevealIfHidden(Coordinate coord)
	{
	}

	public void StartRevealIfHidden(int x, int y)
	{
	}

	public static BoardItemFlags GetBoardItemFlags(IMergeItem item, IMergeMansionGameConfig config)
	{
		return default(BoardItemFlags);
	}

	public int GetSelectedItemType()
	{
		return 0;
	}

	public Coordinate GetSelectedItemCoordinate()
	{
		return default(Coordinate);
	}

	public void ShowMergeGoalItemEffects()
	{
	}

	public void HideMergeGoalItemEffects()
	{
	}

	public void HideSinkTagItemEffects()
	{
	}

	public void HideDailyTaskItemEffects()
	{
	}

	public void HideSeasonalBoardEventItemEffects()
	{
	}

	public void HideBoardEventItemEffects()
	{
	}

	public void HideGarageCleanupEventItemEffects()
	{
	}

	public void HideArtifactProgressBarPreviewEffects()
	{
	}

	public void HideArtifactCanBeMergedEffects()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadAndInstantiateBoardBackground_003Ed__288))]
	public UniTask<Option<GameObject>> LoadAndInstantiateBoardBackground(IBoardEventModel boardEventModel, MergeBoardId mergeBoardId, CancellationToken ct)
	{
		return default(UniTask<Option<GameObject>>);
	}

	[AsyncStateMachine(typeof(_003CLoadAndInstantiateBoardBackgroundInternal_003Ed__289))]
	public UniTask<Option<GameObject>> LoadAndInstantiateBoardBackgroundInternal(MergeBoardId mergeBoardId, IMergeBoardEventPrefabs boardEventPrefabs, CancellationToken ct)
	{
		return default(UniTask<Option<GameObject>>);
	}

	public void DestroyBackground(MergeBoardId mergeBoardId)
	{
	}

	public void ToggleBackground(MergeBoard board)
	{
	}

	public static bool ShouldUseDefaultBackground(MergeBoardId mergeBoardId)
	{
		return false;
	}

	public void SelectMergeBoard(PlayerModel playerModel, MergeBoard mb, bool legacyEventBoard, bool liveOpsEventBoard, Func<MergeBoard, bool> eventEndCheck, bool eventTimeUpdate, bool forceVisualRebuild = false)
	{
	}

	public void RefreshWantedDailyTaskItems(IPlayer player)
	{
	}

	public void ShowCanvas(MetaDuration timeTakenToLoad, Action onComplete = null, Action onReadyToPlay = null, BoardTransitionFlags transitionFlags = BoardTransitionFlags.None)
	{
	}

	public void ClearUnlockedItemsCaches()
	{
	}

	public void MakeReadyToPlay(MetaDuration loadDuration)
	{
	}

	public void CheckInitializeCollectibleBoardMinigame(IBoardEventModel boardModel)
	{
	}

	public bool TryDryThenExecuteStartDigEventMinigame(string minigameId)
	{
		return false;
	}

	public bool TryDryThenExecuteAddDigEventMuseumCollection(DigEventId eventId)
	{
		return false;
	}

	public void RefreshShopButton(bool recheckShopRedDotIndicator)
	{
	}

	public void RefreshLeaderboardEventBoardButton()
	{
	}

	public void RefreshLeaderboardEventBoardButton(LeaderboardEventModel eventModel)
	{
	}

	public void HideCanvas(bool instantHide, Action onTransitionComplete = null, bool ignoreScriptedEvents = false)
	{
	}

	public void ResetStatusBars(bool artifactStatusBarEnabled = false)
	{
	}

	public void AddBoardStatusEffects()
	{
	}

	public void StopPlay(bool transitionToMansionView = false, bool ignoreScriptedEvents = false)
	{
	}

	public bool BoardIsVisible(MergeBoardId mergeBoardId = null)
	{
		return false;
	}

	public MergeBoard GetCurrentMergeBoard()
	{
		return null;
	}

	public MergeBoardId GetCurrentMergeBoardIdentifier()
	{
		return null;
	}

	public Coordinate CalculateCoordinateFromScreenPoint(Vector2 screenPoint)
	{
		return default(Coordinate);
	}

	public Coordinate CalculateNearCoordinateFromScreenPoint(Vector2 screenPoint, Coordinate compareToThis, Vector2[,] itemSlotPositions)
	{
		return default(Coordinate);
	}

	public void CalculatePositionsForUI(int xSlots, int ySlots, Vector2 topLeft, Vector2 bottomRight)
	{
	}

	public void CalculateDragPositionsForUI(int xSlots, int ySlots, Vector2 topLeft, Vector2 bottomRight)
	{
	}

	public Vector2 GetUISlotPosition(Coordinate coordinate)
	{
		return default(Vector2);
	}

	public Vector2[,] GetUISlotPositions()
	{
		return null;
	}

	public void MergeOrMoveAttempt(Coordinate from, Coordinate to, Coordinate near, bool isNearInventoryButton)
	{
	}

	public bool HasSpaceInInventoryForItem(MergeItem item)
	{
		return false;
	}

	public void ShowPossibleItemCanBeMovedToInventoryHighlight(bool shouldShow, Coordinate originOfDraggedItem)
	{
	}

	public void ShowPossibleItemsCanBeMergedOrSunkOrConsumableIndicator(Coordinate start, Coordinate current, Coordinate potentialNearCoordinate)
	{
	}

	public void UpdateArtifactPreview(Coordinate from, Coordinate to)
	{
	}

	public void RefreshArtifactInfo(MergeItem itemFrom, Coordinate coordinateFrom, MergeItem itemTo, Coordinate coordinateTo)
	{
	}

	public void RefreshArtifactCanBeMergedEffect(MergeItem selectedItem, Coordinate selectedCoordinate)
	{
	}

	public void StopPossibleCanBeMergedIndicator()
	{
	}

	public void StopPossibleCanBeSunkIndicator()
	{
	}

	public void StopPossibleCanBeConsumedIndicator()
	{
	}

	public void StopPossibleCanTakePhotoIndicator()
	{
	}

	public void ActionAttempt(Coordinate actionLocation)
	{
	}

	public void SelectionAttempt(Coordinate selectLocation)
	{
	}

	public void SellSelectedItem()
	{
	}

	public void SellAttempt(Coordinate sellLocation)
	{
	}

	public void CollectItemAttempt(MergeBoardId boardId, Coordinate coordinate)
	{
	}

	public void CollectItem(MergeBoardId boardId, Coordinate coordinate, IItemDefinition itemDefinition)
	{
	}

	public void HandleCelebrationCollect(IItemDefinition itemDefinition, bool skipBigCelebration = false)
	{
	}

	public bool ShouldConfirmCollectItem(IItemDefinition itemDefinition)
	{
		return false;
	}

	public void TriggerSelectedItemAction()
	{
	}

	public void SpeedUpSelectedItem()
	{
	}

	public void SpeedUpAttempt(Coordinate speedUpLocation)
	{
	}

	public (bool, Coordinate) TryToMoveItemFromPocketToBoard(Vector2 buttonPos)
	{
		return default((bool, Coordinate));
	}

	public void DraggingStarts(Coordinate deselectLocation)
	{
	}

	public void CreateActForAddedAndRemovedItems(MetaTime currentTime)
	{
	}

	public static bool CheckIfAddedActIsMissing(List<MergeBoardAct> unprocessedActs, int x, int y)
	{
		return false;
	}

	public static bool CheckIfRemovedActIsMissing(List<MergeBoardAct> unprocessedActs, int x, int y)
	{
		return false;
	}

	public void PreprocessUnprocessedActs()
	{
	}

	public static void ActualPreprocessUnprocessedActs(List<MergeBoardAct> unprocessedActs)
	{
	}

	public bool ProcessActs(WallClockTime currentWallTime)
	{
		return false;
	}

	public void RefreshUnlockableUI()
	{
	}

	public void ProcessEnqueuedAutoSellItemsFromPocketActs(ICollection<MergeBoardAct> sellItemActs)
	{
	}

	public void ProcessEnqueuedAutoSellItemFromBoardActs(ICollection<MergeBoardAct> sellItemActs)
	{
	}

	public void ProcessEnqueuedAutoSellItemFromAllInventories(ICollection<MergeBoardAct> sellItemActs)
	{
	}

	public void PlayRewardAnimationsAndRemoveVisualItems(MergeBoardAct act, BoardItemHandler boardItem)
	{
	}

	public Vector3 GetAnimateFromPosition(Coordinate coordinate)
	{
		return default(Vector3);
	}

	public void ProcessMergeAct(MergeBoardAct act)
	{
	}

	public void ProcessUsePortal(PlayerModel playerModel, IItemDefinition portalItem)
	{
	}

	public void ProcessUseBoardPortal(PlayerModel playerModel, MergeBoardId targetBoardId)
	{
	}

	public void TransitionToMergeBoard(PlayerModel playerModel, MergeBoardId targetBoardId)
	{
	}

	public void ProcessUseMinigamePortal(IPlayer player, IItemDefinition portalItem)
	{
	}

	public bool IsSpawnedFromOutsideOfBoard(MergeBoardAct act)
	{
		return false;
	}

	public bool ProcessAutoSpawnedOrManualSpawnedAct(MergeBoardAct act, WallClockTime currentWallTime)
	{
		return false;
	}

	public void PlaySfxMergeSpawnManual(MergeBoardAct act, MergeItem sourceItem, IItemDefinition chainLastItem)
	{
	}

	public void ProcessManualDecayAutoDecaySoldOrCollectedAct(MergeBoardAct act, WallClockTime currentWallTime)
	{
	}

	public void ProcessCollectionAct(MergeBoardAct act, Coordinate coordinate)
	{
	}

	public void ProcessCollectionOnSpawnAct(MergeBoardAct act)
	{
	}

	public Vector3? GetRewardCurrencyOverrideTarget(Currencies currency, out Option<Coordinate> targetCoordinate)
	{
		targetCoordinate = default(Option<Coordinate>);
		return null;
	}

	public Vector3? GetRewardCoreSupportEventTokensOverrideTarget(CoreSupportEventTokenId tokenId)
	{
		return null;
	}

	public Option<Vector3> GetRewardCoreSupportEventTokensOverrideTarget(CoreSupportEventModel eventModel)
	{
		return default(Option<Vector3>);
	}

	public RewardItem[] CreateCollectionAnimateRewardsForItem(IItemDefinition item, int amount = 1)
	{
		return null;
	}

	public static RewardItem[] CreateCollectionAnimateRewardsForItemStatic(IItemDefinition item)
	{
		return null;
	}

	public void ProcessTransformAct(MergeBoardAct act, WallClockTime currentWallTime)
	{
	}

	public bool ProcessBubbleRemovedAct(MergeBoardAct act)
	{
		return false;
	}

	public void ProcessSpeedUpAct(MergeBoardAct act)
	{
	}

	public void ProcessSinkInAct(MergeBoardAct act)
	{
	}

	public void ProcessSinkInReverseAct(MergeBoardAct act)
	{
	}

	public void ProcessLevelUpItemAct(MergeBoardAct act)
	{
	}

	public void ProcessConsumedAct(MergeBoardAct act)
	{
	}

	public bool ProcessAddedAct(MergeBoardAct act)
	{
		return false;
	}

	public void ProcessRemovedAct(MergeBoardAct act, WallClockTime currentWallTime)
	{
	}

	public void ProcessBecameVisibleAct(MergeBoardAct act)
	{
	}

	public void ProcessConsumedChargeAct(MergeBoardAct act)
	{
	}

	public void RemoveVisualItemAfterAnimation(Coordinate fromCoordinate, Coordinate toCoordinate)
	{
	}

	public void ReconstructBoard()
	{
	}

	public void Show(MetaDuration loadDuration, Action onTransitionComplete = null, Action onReadyToPlay = null, BoardTransitionFlags transitionFlags = BoardTransitionFlags.None)
	{
	}

	public void Hide(bool instantHide, Action onTransitionComplete = null, bool ignoreScriptedEvents = false)
	{
	}

	public bool IsCurrentHintItemsCanBeMerged()
	{
		return false;
	}

	public void UpdateBoardItemEffects()
	{
	}

	public void UpdateAllSlots()
	{
	}

	public bool HasUnlockedActivationSpawnItemsCached(IPlayer player, IMergeItem item, IItemDefinition itemDefinition)
	{
		return false;
	}

	public bool HasUnlockedSpawnItemsCached(IPlayer player, IBoard board, IMergeItem item, IItemDefinition itemDefinition)
	{
		return false;
	}

	public void ShowOrDisableAnimations()
	{
	}

	public Action GetItemEffectTransition()
	{
		return null;
	}

	public void UpdateItemLevelUpMergeChainActive(MergeItem item, BoardItemHandler boardItem)
	{
	}

	public bool ShouldItemLevelUpMergeChainBeActive(MergeItem item, BoardItemHandler boardItem)
	{
		return false;
	}

	public BoardItemHandler CreateItemForUI(Coordinate coordinate, IItemDefinition itemDefinition, ItemVisibility visibility, ItemSource itemSource, BoardItemFlags flags, BubbleState bubbleState)
	{
		return null;
	}

	public BoardItemHandler CreateItemForUI(int x, int y, IItemDefinition item, Vector2 localPos, ItemVisibility itemVisibility, ItemSource itemSource, BoardItemFlags flags, BubbleState bubbleState)
	{
		return null;
	}

	public void ReturnBoardItemHandlerToPool(BoardItemHandler existingItem)
	{
	}

	public void SetSelectionText(IMergeItem newSelection, Coordinate position, MergeItem previewItemFrom = null, MergeItem previewItemTo = null)
	{
	}

	public void RefreshSelectedItemInfo(IMergeItem newSelection, Coordinate position)
	{
	}

	public void ProcessBubblePurchase(Coordinate position, ICollection<MergeBoardAct> actsCollection)
	{
	}

	public void ProcessBubbleDismiss(Coordinate position)
	{
	}

	public void ProcessUnlockItemForCoordinate(int x, int y)
	{
	}

	public void OnUndoSellItemCleared()
	{
	}

	public void ShowCollectibleBoardEventInfoPanel()
	{
	}

	public void ClearSelectionText()
	{
	}

	public void HideSelectionIndicator()
	{
	}

	public void ShowSelectionIndicator(Coordinate selectionPoint)
	{
	}

	public void StopPlayOfEventMergeBoard()
	{
	}

	public void GlobalStopPlayOfCurrentEvent()
	{
	}

	public void StopMergeHintAnimation(WallClockTime currentTime)
	{
	}

	public void GetItemsForSinkHintAnimation(MergeItem draggedItem, ref List<BoardItemHandler> outList)
	{
	}

	public void StopSinkHintAnimation()
	{
	}

	public void StopMergeAndSinkHintAnimationsOnItem(BoardItemHandler boardItem, WallClockTime currentTime)
	{
	}

	public bool IsValidAndActiveMergeGoalItem(MergeItem item, bool allowBubbles = false)
	{
		return false;
	}

	public static bool IsTagSinkItem(MergeItem item, IPlayer player)
	{
		return false;
	}

	public bool IsValidAndActiveDailyTaskItem(MergeItem item, bool allowBubbles = false)
	{
		return false;
	}

	public bool IsValidAndActiveBoardEventTaskItem(MergeItem item, bool allowBubbles = false, bool isSeasonalBoardEvent = false)
	{
		return false;
	}

	public bool IsValidAndActiveGarageCleanupEventTaskItem(MergeItem item, bool allowBubbles = false)
	{
		return false;
	}

	public static void StopMergeGoalItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public static void StopDailyTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public static void StopSeasonalBoardEventTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public static void StopBoardEventTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public static void StopGarageCleanupEventTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public static void StopArtifactProgressBarPreviewItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public static void StopArtifactCanBeMergedItemAnimationIfNeeded(BoardItemHandler boardItemHandler)
	{
	}

	public bool IsMergeGridVisible()
	{
		return false;
	}

	public bool IsInTransition()
	{
		return false;
	}

	public void OnBoardAct(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs)
	{
	}

	public void OnBoardAct(MergeBoardId boardId, MergeBoardAct boardAct)
	{
	}

	public void OnVisualEffectRequest(IBoardVisualEffect boardVisualEffect)
	{
	}

	public void SpreadMergeBoardActs(SpreadMergeBoardActs visualEffect)
	{
	}

	public void AddAct(MergeBoardAct act)
	{
	}

	public bool CheckConsumptionPossibility(Coordinate from, Coordinate to)
	{
		return false;
	}

	public bool CheckHighlightPossibility(Coordinate from, Coordinate to)
	{
		return false;
	}

	public void RefreshItemEffects(Coordinate coordinate)
	{
	}

	public bool ForcesGoalsReevaluation(MergeItem mergeItem)
	{
		return false;
	}

	public void SendBubblePurchaseEvent(IItemDefinition itemDefinition, MetacoreTime timestamp, BubbleStateData analyticsBubbleData)
	{
	}

	public void ShowAlert(string text, string hapticConfigId = "")
	{
	}

	public bool BoardActive(MergeBoardId boardId)
	{
		return false;
	}

	public bool IsItemUsingDragSafeArea(Coordinate coordinate)
	{
		return false;
	}

	public bool IsInsideCoordinateSafeArea(Vector2 screenPoint, Coordinate currentCoordinate)
	{
		return false;
	}

	public void EnableMergeConfirmation(MergeResult mergeResult, Coordinate fromPosition, Coordinate toPosition)
	{
	}

	public void OnMergeConfirmationAccepted()
	{
	}

	public void OnMergeConfirmationCancelled()
	{
	}

	public void OnItemDiscovered(int discoveredItem)
	{
	}

	public void ShowTapHintAnimationAtItemOnCoordinate(Coordinate coordinate, ItemVisibility visibility)
	{
	}

	public void StopTapHintAnimation()
	{
	}

	public void SetDelayedTapHint(int itemId, Coordinate coordinate, ItemVisibility visibility, DirectorGroupId groupId, bool allowBubbleItems, float startDelay)
	{
	}

	public void ProcessDelayedTapHint()
	{
	}

	[AsyncStateMachine(typeof(_003CDelayedTapHintAsync_003Ed__453))]
	public UniTask DelayedTapHintAsync(CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ClearDelayedCollectibleBoardEventRewardAnimations()
	{
	}

	public void AddDelayedCollectibleBoardEventRewardAnimation(ICollectibleBoardEventCollectAction collectAction, CollectibleBoardEventModel eventModel, BoardItemHandler boardItem, IItemDefinition item, Vector3 from, Coordinate fromCoordinate)
	{
	}

	public void ProcessDelayedCollectibleBoardEventProgressChange()
	{
	}

	public void RefreshCollectibleBoardEventInfoPanel()
	{
	}

	public void ProcessDelayedCollectibleBoardEventRewardAnimation()
	{
	}

	public void AnimateCollectibleBoardEventCollectActionReward(ICollectibleBoardEventCollectAction collectAction, CollectibleBoardEventModel eventModel, IItemDefinition item, Vector3 from, Coordinate fromCoordinate, BoardItemHandler boardItem = null)
	{
	}

	public (Vector3, Vector3) CalculateLevelUpFromAndTargetPosition(Vector3 from)
	{
		return default((Vector3, Vector3));
	}

	public Vector2 CalculateSlotSize()
	{
		return default(Vector2);
	}

	public void PlayCollectibleBoardEventProgressUp(CollectibleBoardEventId eventId, IItemDefinition itemDefinition, Coordinate coordinate, int progress, float delay)
	{
	}

	public void OnPlayerNameChanged()
	{
	}

	public void OnLeaderboardEventScoreChanged(int scoreChange)
	{
	}

	public void RefreshLeaderboardUI()
	{
	}

	public void ProcessDelayedLeaderboardEventScoreChange()
	{
	}

	public void PlayLeaderboardFeaturesScoreContributionIfNecessary(Coordinate coordinate, float delay = 0f)
	{
	}

	public void AnimateLeaderboardScoreCollection(IItemDefinition itemDefinition, Coordinate coordinate, int scoreChange)
	{
	}

	public void PlayLeaderboardScoreUp(IItemDefinition itemDefinition, Coordinate coordinate, int scoreContribution, float delay)
	{
	}

	public void ProcessLeaderboardEventRankingPolling(PlayerModel playerModel)
	{
	}

	public void OnShortLeaderboardEventScoreChanged(int scoreChange)
	{
	}

	public void ProcessDelayedShortLeaderboardEventScoreChange()
	{
	}

	public void AnimateShortLeaderboardScoreCollection(IItemDefinition itemDefinition, Coordinate coordinate, int scoreChange)
	{
	}

	public void PlayShortLeaderboardEventScoreUp(IItemDefinition itemDefinition, Coordinate coordinate, int scoreContribution, float delay)
	{
	}

	public bool IsAuxEnergyBoard()
	{
		return false;
	}

	public long GetEnergyDisplayAmount(EnergyType type)
	{
		return 0L;
	}

	public void RefreshEnergyDisplay(MergeItem item, BoardItemHandler boardItem)
	{
	}

	public (Option<EnergyType>, Option<CoreSupportEventTokenId>) GetEnergyTypeForEnergyDisplay(MergeItem item)
	{
		return default((Option<EnergyType>, Option<CoreSupportEventTokenId>));
	}

	public Option<CoreSupportEventTokenId> GetCoreSupportEventTokenIdForPortalItem(MergeItem portalItem)
	{
		return default(Option<CoreSupportEventTokenId>);
	}

	public void RefreshAuxEnergyAttachment(MergeItem item, BoardItemHandler boardItemHandler)
	{
	}

	public static AuxEnergyItemAttachment GetAuxEnergyAttachmentIfExists(MergeItem item)
	{
		return null;
	}

	public void AnimateAuxEnergyAttachmentsIfActive(BoardItemHandler fromItem, BoardItemHandler toItem, Coordinate animateFromCoordinate)
	{
	}

	public bool IsEventsOnBoardActive()
	{
		return false;
	}

	public void AnimateAuxEnergyAttachment(BoardItemHandler boardItem, EnergyType energyType, Vector3 from, Vector3 offsetVector, int amount)
	{
	}

	[AsyncStateMachine(typeof(_003CAnimateAuxEnergyForEventsOnBoard_003Ed__490))]
	public UniTask AnimateAuxEnergyForEventsOnBoard(IItemDefinition item, EnergyType energyType, Vector3 from, int amount, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void RefreshLimitedItemCountDisplay(BoardItemHandler boardItem)
	{
	}

	public static void HideChargeCountTooltip(BoardItemHandler boardItemHandler)
	{
	}

	public void ShowChargeCountTooltip(IMergeItem item, BoardItemHandler boardItemHandler)
	{
	}

	public void ShowSinkItemTooltip(IPlayer player, MergeItem item, BoardItemHandler boardItemHandler, int? sinkableItemId = null)
	{
	}

	public static void HideSinkItemTooltip(BoardItemHandler boardItemHandler)
	{
	}

	public void HideSinkItemTooltipExceptSelectedOne(Coordinate c)
	{
	}

	public bool DoesSinkInAnyItem(Coordinate c)
	{
		return false;
	}

	public void HideSinkItemTooltips()
	{
	}

	public void SetSinkItemTooltipsActiveForSinkConsumable(int sinkConsumable)
	{
	}

	public bool IsConsumableBySink(int itemId)
	{
		return false;
	}

	public bool IsConsumableBySink(int itemId, MergeItem sinkMergeItem)
	{
		return false;
	}

	public void OnBubbleBonusGranted(Coordinate sourceCoordinate, IBubbleBonus bonus)
	{
	}

	public void AnimateBubbleProgressionEventProgressBonus(Coordinate sourceCoordinate, BubbleProgressionEventProgressBonus bonus)
	{
	}

	public void AnimateBubbleAuxEnergyBonus(Coordinate sourceCoordinate, BubbleAuxEnergyBonus bonus)
	{
	}

	public Vector3? TryGetBubbleAuxEnergyBonusRewardDestinationTarget(BubbleAuxEnergyBonus bonus)
	{
		return null;
	}

	public void OnMergeItemRewardsClaimed(Coordinate coordinate, IEnumerable<IPlayerReward> rewards)
	{
	}

	public void PlayScoreUp(IItemDefinition itemDefinition, Coordinate coordinate, FlightAnimationContextExtra contextExtra, float delay)
	{
	}

	public void PlayScoreUp(IItemDefinition itemDefinition, Vector3 from, Vector3 target, FlightAnimationContextExtra contextExtra, float delay)
	{
	}

	public (Vector3, Vector3) CalculateScoreUpFromAndTargetPosition(Coordinate coordinate)
	{
		return default((Vector3, Vector3));
	}

	public (Vector3, Vector3) CalculateScoreUpFromAndTargetPosition(Vector3 origin)
	{
		return default((Vector3, Vector3));
	}

	public void PlayFishRarityTooltip(IItemDefinition itemDefinition, Coordinate coordinate, float delay)
	{
	}

	public void StartDragFishRarityTooltipsIfFish(MergeItem mergeItem, BoardItemHandler boardItemHandler)
	{
	}

	public void StopDragFishRarityTooltips()
	{
	}

	public void HandleActivationItemInfoAreaForceRefresh(IMergeItem item)
	{
	}

	public void HandleSpawnEffect(MergeItem mergeItem, BoardItemHandler boardItem, Coordinate actCoordinate)
	{
	}

	public void UsePendingTimeSkips()
	{
	}

	public void ShowTimeSkipFlow(MetaDuration skipDuration)
	{
	}

	public Coordinate GetMidCoordinate()
	{
		return default(Coordinate);
	}

	public void PlayTimeSkipEffectFromCoordinate(Coordinate coordinate, Action onFinished = null)
	{
	}

	public void OnSetPlayerModeActive(PlayerModeId playerModeId, bool active)
	{
	}

	public void OnSetPlayerModeActiveForBoard(PlayerModeId playerModeId, MergeBoardId boardId, bool active)
	{
	}

	public void OnDailyTaskStatusChanged()
	{
	}

	public TapHintAnimationType? GetDesiredTapHintAnimationType(MergeItem currentItem, bool canItemBeActivated, bool isItemSupportsActivation, bool hasActivationItems, bool showOnFire)
	{
		return null;
	}

	public void OnCobwebCleared(IItemDefinition itemDefinition, Coordinate coordinate)
	{
	}

	public (int, int) GetBoardDimensions()
	{
		return default((int, int));
	}

	public void UsePendingRewards()
	{
	}

	public void UsePendingCooldownRemover()
	{
	}

	public void RefreshCooldownRemoverIndicator(bool animateTimer = false)
	{
	}

	public void OnMysteryMachineHeatLevelUp(MysteryMachineEventId eventId)
	{
	}

	public void OnMysteryMachineLevelUp(MysteryMachineEventId eventId)
	{
	}

	public bool IsActiveMysteryMachineEvent(MysteryMachineEventId eventId)
	{
		return false;
	}

	public void RefreshMysteryMachineView()
	{
	}

	public void AnimateProgressionEventProgress(ProgressionEventModel progressionEvent, IProgressCollectAction collectAction, IItemDefinition item, Vector3 from, Option<Action> onCompletedOption)
	{
	}

	public void AnimateProgressionEventProgressEventsOnBoard(ProgressionEventModel progressionEvent, IItemDefinition item, Vector3 from, Option<Action> onCompletedOption)
	{
	}

	public void AnimateSoloMilestoneEventProgress(SoloMilestoneEventModel model, IEnumerable<IPlayerReward> rewards, Vector3 from)
	{
	}

	public BoardItemHandler GetCurrentBoardItemHandler()
	{
		return null;
	}

	public static RewardItem[] CreateCollectionAnimateRewardsForItemStatic(Currencies item, int amount)
	{
		return null;
	}

	public void AnimateProgressionEventProgress(SoloMilestoneEventModel progressionEvent, List<IPlayerReward> rewards, Vector3 from, Vector3 to, FlightAnimationContext extraAnimation)
	{
	}

	public void RestartProcessExtraSpawnQueue()
	{
	}

	[AsyncStateMachine(typeof(_003CProcessExtraSpawnQueue_003Ed__550))]
	public UniTask ProcessExtraSpawnQueue(CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CProcessExtraSpawnQueue_Default_003Ed__551))]
	public UniTask ProcessExtraSpawnQueue_Default(CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CProcessExtraSpawnQueue_EventsOnBoard_003Ed__552))]
	public UniTask ProcessExtraSpawnQueue_EventsOnBoard(CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CAnimateExtraSpawn_003Ed__553))]
	public UniTask AnimateExtraSpawn(AnimateExtraSpawnStyle style, ExtraSpawnQueueItem item, Option<Action> onCompleteOption, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CAnimateExtraSpawnCurrency_003Ed__554))]
	public UniTask AnimateExtraSpawnCurrency(AnimateExtraSpawnStyle style, Currencies currency, int amountBefore, int amountAfter, Vector3 from, Coordinate coordinate, IItemDefinition item, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void AnimateProgressionEventPoints(int amount, Vector3 from)
	{
	}

	[AsyncStateMachine(typeof(_003CAnimateExtraSpawnCurrency_003Ed__556))]
	public UniTask AnimateExtraSpawnCurrency(AnimateExtraSpawnStyle style, Currencies currency, int amountBefore, int amountAfter, Vector3 from, IItemDefinition item, Coordinate coordinate, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CAnimateExtraSpawnCoreSupportEventTokens_003Ed__557))]
	public UniTask AnimateExtraSpawnCoreSupportEventTokens(AnimateExtraSpawnStyle style, CoreSupportEventTokenId tokenId, int amountBefore, int amountAfter, Vector3 from, IItemDefinition item, Coordinate coordinate, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void OnExtraSpawn(IExtraSpawnTrigger trigger, MergeBoardId boardId, Coordinate coordinate, IItemDefinition item, Option<List<(Currencies, long)>> spawnCurrenciesOption, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption)
	{
	}

	public void UpdateAllBubbles()
	{
	}

	public void UpdateOnFire(bool activateEffect)
	{
	}

	public void TryShowOnFireItemInfoArea()
	{
	}

	public bool IsDraggingItem()
	{
		return false;
	}

	public Option<BoardItemHandler> GetBoardItemHandlerAtCoordinate(Coordinate coordinate)
	{
		return default(Option<BoardItemHandler>);
	}

	public void CalculateDragLimits()
	{
	}

	public void ClearExtraSpawns()
	{
	}
}
