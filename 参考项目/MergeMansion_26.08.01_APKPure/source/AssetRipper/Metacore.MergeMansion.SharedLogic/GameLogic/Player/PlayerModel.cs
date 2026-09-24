using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Analytics;
using Code.GameLogic.AutoMerge;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.CardCollectionSupportingEvent;
using Code.GameLogic.GameEvents.DailyChallenges;
using Code.GameLogic.GameEvents.DailyScoop;
using Code.GameLogic.GameEvents.SoloMilestone;
using Code.GameLogic.Player;
using Code.GameLogic.Player.Board;
using Code.GameLogic.Player.Events.DailyScoopEvent;
using Code.GameLogic.Utility;
using Code.GameLogic.Utility.PitySystem;
using Game.Cloud.Webshop;
using Game.Logic;
using Game.Logic.Mail;
using GameLogic.Banks;
using GameLogic.Config;
using GameLogic.Config.DecorationShop;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Config.Types;
using GameLogic.GameFeatures;
using GameLogic.Hotspots;
using GameLogic.Inventory;
using GameLogic.Merge;
using GameLogic.MiniEvents;
using GameLogic.MixABooster;
using GameLogic.Offers;
using GameLogic.Player.Board;
using GameLogic.Player.DailyTasks;
using GameLogic.Player.DailyTasksV2;
using GameLogic.Player.Director;
using GameLogic.Player.Director.Actions;
using GameLogic.Player.Director.Conditions;
using GameLogic.Player.Events;
using GameLogic.Player.Leaderboard;
using GameLogic.Player.Leaderboard.BoultonLeague;
using GameLogic.Player.Leaderboard.ClassicRacesEvent;
using GameLogic.Player.Leaderboard.ShortLeaderboardEvent;
using GameLogic.Player.Modes;
using GameLogic.Player.Modifiers;
using GameLogic.Player.ScheduledActions;
using GameLogic.ProgressivePacks;
using GameLogic.Random;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Debugging;
using Metaplay.Core.InAppPurchase;
using Metaplay.Core.InGameMail;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;

namespace GameLogic.Player
{
	[MetaSerializableDerived(1)]
	[MetaReservedMembers(99, 400)]
	[MetaReservedMembers(11, 12)]
	[MetaBlockedMembers(new int[]
	{
		6, 108, 110, 112, 114, 116, 117, 200, 202, 203,
		205, 208, 220, 224, 239, 241, 251, 233, 274, 285,
		249, 250, 216, 231, 258, 280, 298, 299, 306, 309,
		312
	})]
	[SupportedSchemaVersions(57, 60)]
	public class PlayerModel : PlayerModelBase<PlayerModel, PlayerStatisticsCore, PlayerMergeMansionOffersGroupModel, PlayerGuildStateCore>, IWritablePlayer, IPlayer, IGenerationContext
	{
		[CompilerGenerated]
		public sealed class _003CGetAllActiveAndJoinedBoultonLeagueEvents_003Ed__630 : IEnumerable<BoultonLeagueEventModel>, IEnumerable, IEnumerator<BoultonLeagueEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public BoultonLeagueEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public PlayerModel _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<BoultonLeagueEventModel> _003C_003E7__wrap1;

			BoultonLeagueEventModel IEnumerator<BoultonLeagueEventModel>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetAllActiveAndJoinedBoultonLeagueEvents_003Ed__630(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<BoultonLeagueEventModel> IEnumerable<BoultonLeagueEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetInventories_003Ed__577 : IEnumerable<IBoardInventory>, IEnumerable, IEnumerator<IBoardInventory>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IBoardInventory _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public MergeBoardId boardId;

			public MergeBoardId _003C_003E3__boardId;

			[NonSerialized]
			public int typeFlags;

			public int _003C_003E3__typeFlags;

			public PlayerModel _003C_003E4__this;

			[NonSerialized]
			public bool forceExpiredInventories;

			public bool _003C_003E3__forceExpiredInventories;

			[NonSerialized]
			public IEnumerator<IBoardInventory> _003C_003E7__wrap1;

			IBoardInventory IEnumerator<IBoardInventory>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetInventories_003Ed__577(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IBoardInventory> IEnumerable<IBoardInventory>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003Cget_ActiveShortLeaderboardEvents_003Ed__613 : IEnumerable<ShortLeaderboardEventModel>, IEnumerable, IEnumerator<ShortLeaderboardEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ShortLeaderboardEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public PlayerModel _003C_003E4__this;

			[NonSerialized]
			public MetaDictionary<ShortLeaderboardEventId, ShortLeaderboardEventModel>.ValueCollection.ValueEnumerator _003C_003E7__wrap1;

			ShortLeaderboardEventModel IEnumerator<ShortLeaderboardEventModel>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003Cget_ActiveShortLeaderboardEvents_003Ed__613(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ShortLeaderboardEventModel> IEnumerable<ShortLeaderboardEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public const int MaxLoginCounts = 30;

		public const int MaxCurrencySpentDays = 30;

		public const int MaxMoneySpentDays = 30;

		public const int TicksPerSecond = 5;

		public const int CleanSessionDataAfterDays = 90;

		[ServerOnly]
		[MetaMember(211, MetaMemberFlags.None)]
		[Transient]
		public MetaDictionary<MergeBoardId, MetaTime> BoardActivationsLeftAnalyticsEvents;

		[MetaMember(244, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime? previousIntervalCheckTime;

		[IgnoreDataMember]
		[NonSerialized]
		public readonly ICollection<MergeBoardAct> updateActs;

		[NonSerialized]
		public bool _modelEventsRegistered;

		[NonSerialized]
		public readonly Dictionary<Type, Dictionary<Delegate, Action<PlayerEventBase>>> _eventStreamTypedHandlers;

		public static readonly string GET_MERGE_BOARDS_ASSERT_MESSAGE;

		[Obsolete("use MergeMansionGameConfig instead")]
		[IgnoreDataMember]
		public new SharedGameConfig GameConfig => null;

		[IgnoreDataMember]
		public IMergeMansionGameConfig MergeMansionGameConfig => null;

		[IgnoreDataMember]
		public IPlayerModelServerListener ServerListener { get; set; }

		[IgnoreDataMember]
		public IPlayerModelClientListener ClientListener { get; set; }

		[IgnoreDataMember]
		IMetacorePlayerTimeZoneInfo IPlayer.TimeZoneInfo => null;

		[IgnoreDataMember]
		public Option<PlayerLocation> LastKnownLocationOption => default(Option<PlayerLocation>);

		public sealed override int PlayerLevel
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[IgnoreDataMember]
		MetacoreTime IPlayer.CurrentTime => default(MetacoreTime);

		[IgnoreDataMember]
		public PlayerLocalTime CurrentLocalTime => default(PlayerLocalTime);

		[IgnoreDataMember]
		public IEnumerable<IActiveOfferGroup> ActiveOfferGroups => null;

		[IgnoreDataMember]
		public SpawnFactoryState SpawnState => null;

		[IgnoreDataMember]
		public GarageCleanupEventModel GarageCleanupEventModel => null;

		[IgnoreDataMember]
		public CurrencyBankModel CurrencyBankModel => null;

		[MetaMember(11, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public RandomPCG Random { get; set; }

		[MetaMember(99, MetaMemberFlags.None)]
		public sealed override EntityId PlayerId { get; set; }

		[MetaMember(100, MetaMemberFlags.None)]
		[NoChecksum]
		public GameSettings GameSettings { get; set; }

		[MetaMember(101, MetaMemberFlags.None)]
		[NoChecksum]
		public Statistics Statistics { get; set; }

		[MetaMember(102, MetaMemberFlags.None)]
		[NoChecksum]
		public PlayerIdentity PlayerIdentity { get; set; }

		[MetaMember(103, MetaMemberFlags.None)]
		public Wallet Wallet { get; set; }

		[MetaMember(104, MetaMemberFlags.None)]
		public ProgressState ProgressState { get; set; }

		[MetaMember(105, MetaMemberFlags.None)]
		public StoreStatus StoreStatus { get; set; }

		[MetaMember(106, MetaMemberFlags.None)]
		public SpawnFactoryState SpawnFactoryState { get; set; }

		[MetaMember(107, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public BoardInventory GarageBoardInventory { get; set; }

		[IgnoreDataMember]
		IBoardInventory IPlayer.GarageBoardInventory
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		[MetaMember(109, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MergeBoard GarageMergeBoard { get; set; }

		[MetaMember(111, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MergeBoard EventMergeBoard { get; set; }

		[MetaMember(113, MetaMemberFlags.None)]
		public WeightedDistributionStates DistributionStates { get; set; }

		[MetaMember(115, MetaMemberFlags.None)]
		public DailyTaskStatus DailyTaskStatus { get; set; }

		[MetaMember(201, MetaMemberFlags.None)]
		[Transient]
		public MergeBoardId ActiveMergeBoardId { get; set; }

		[MetaMember(204, MetaMemberFlags.None)]
		public List<IPlayerModifier> PlayerModifiers { get; set; }

		[MetaMember(206, MetaMemberFlags.None)]
		public int ScriptedEventNextId { get; set; }

		[MetaMember(207, MetaMemberFlags.None)]
		public List<ScriptedEvent> RegisteredScriptedEvents { get; set; }

		[MetaMember(209, MetaMemberFlags.None)]
		public MetaDictionary<int, ThirdPartySurveyStatus> CompletedThirdPartySurveys { get; set; }

		[MetaMember(210, MetaMemberFlags.None)]
		public PlayerGarageCleanupEventsModel GarageCleanupEvents { get; set; }

		[MetaMember(212, MetaMemberFlags.None)]
		public PlayerProgressionEventsModel ProgressionEvents { get; set; }

		[MetaMember(213, MetaMemberFlags.None)]
		public bool HadArtifactsEnabled { get; set; }

		[MetaMember(214, MetaMemberFlags.None)]
		public GameFeaturesStates UnlockedFeatures { get; set; }

		[MetaMember(215, MetaMemberFlags.None)]
		[NoChecksum]
		public List<MetaTime> SessionsInTheLast240HoursStartAt { get; set; }

		[MetaMember(217, MetaMemberFlags.None)]
		[Transient]
		public string AnalyticsApiKey { get; set; }

		[MetaMember(218, MetaMemberFlags.None)]
		[NoChecksum]
		public SortedDictionary<int, int> LoginCountsPerDay { get; set; }

		[MetaMember(219, MetaMemberFlags.None)]
		public OrderedSet<PlayerSegmentId> ForcedSegments { get; set; }

		[MetaMember(261, MetaMemberFlags.None)]
		[ServerOnly]
		public Queue<PlayerAnalyticsEventDPL2> AnalyticsEvents { get; set; }

		[MetaMember(221, MetaMemberFlags.None)]
		[ServerOnly]
		public int NumOfResets { get; set; }

		[MetaMember(222, MetaMemberFlags.None)]
		public PlayerScheduledActions ScheduledActions { get; set; }

		[MetaMember(223, MetaMemberFlags.None)]
		public CurrencyBanksModel CurrencyBanksModel { get; set; }

		[MetaMember(225, MetaMemberFlags.None)]
		public ClientPlatform LastClientPlatform { get; set; }

		[MetaMember(226, MetaMemberFlags.None)]
		public PlayerCollectibleBoardEventsModel CollectibleBoardEvents { get; set; }

		[MetaMember(227, MetaMemberFlags.None)]
		[NoChecksum]
		public sealed override string PlayerName { get; set; }

		[MetaMember(228, MetaMemberFlags.None)]
		public PlayerLeaderboardEventsModel LeaderboardEvents { get; set; }

		[MetaMember(229, MetaMemberFlags.None)]
		public ulong Flags { get; set; }

		[MetaMember(230, MetaMemberFlags.None)]
		public SortedDictionary<int, F64> MoneySpentPerDay { get; set; }

		[MetaMember(232, MetaMemberFlags.None)]
		public ReEngagementSettingsId ReEngagementSettingsId { get; set; }

		[MetaMember(234, MetaMemberFlags.None)]
		public MetaDuration DebugTimeOffsetValue { get; set; }

		[MetaMember(235, MetaMemberFlags.None)]
		public List<ProgressionEventId> ProgressionEventIAPStreaks { get; set; }

		[MetaMember(236, MetaMemberFlags.None)]
		public BoardInventory RentableBoardInventory { get; set; }

		[IgnoreDataMember]
		IBoardInventory IPlayer.RentableBoardInventory => null;

		[MetaMember(237, MetaMemberFlags.None)]
		public MetaTime RentableInventoryExpirationTime { get; set; }

		[MetaMember(238, MetaMemberFlags.None)]
		public int RentableInventoryBoughtBatchCount { get; set; }

		[MetaMember(240, MetaMemberFlags.None)]
		public BoardInventory GarageBoardProducerInventory { get; set; }

		[IgnoreDataMember]
		IBoardInventory IPlayer.GarageBoardProducerInventory => null;

		[MetaMember(242, MetaMemberFlags.None)]
		public RentableInventoryState RentableInventoryState { get; set; }

		[MetaMember(243, MetaMemberFlags.None)]
		public List<string> UnlockedSongs { get; set; }

		[MetaMember(245, MetaMemberFlags.None)]
		public PlayerDecorationShopsModel DecorationShops { get; set; }

		[MetaMember(246, MetaMemberFlags.None)]
		public OrderedSet<PlayerModeId> ActiveModesGlobal { get; set; }

		[MetaMember(247, MetaMemberFlags.None)]
		[Transient]
		public bool IsProductionEnvironment { get; set; }

		[MetaMember(248, MetaMemberFlags.None)]
		[NoChecksum]
		[ServerOnly]
		[Obsolete]
		public PlayerBanInfo LegacyBanInfo { get; set; }

		[MetaMember(252, MetaMemberFlags.None)]
		public MetaDictionary<int, RandomPCG> RandomsByFishingRodType { get; set; }

		[MetaMember(253, MetaMemberFlags.None)]
		public OverrideSpawnItemsStatus OverrideSpawnItemsStatus { get; set; }

		[MetaMember(254, MetaMemberFlags.None)]
		public WebshopState WebshopState { get; set; }

		[MetaMember(255, MetaMemberFlags.None)]
		public PlayerMysteryMachineEventsModel MysteryMachineEvents { get; set; }

		[MetaMember(256, MetaMemberFlags.None)]
		public RandomPCG MysteryMachineRandom { get; set; }

		[MetaMember(257, MetaMemberFlags.None)]
		public int MysteryMachineEventsStarted { get; set; }

		[MetaMember(259, MetaMemberFlags.None)]
		public List<BoardInventory.ProducerInventorySlotState> ProducerInventoryEntries { get; set; }

		[IgnoreDataMember]
		IReadOnlyList<IWritableProducerInventorySlotState> IPlayer.ProducerInventoryEntries => null;

		[MetaMember(260, MetaMemberFlags.None)]
		public int MysteryMachineAllTasksCompletedRewardClaimedEventInstance { get; set; }

		[MetaMember(262, MetaMemberFlags.None)]
		[NoChecksum]
		public MetaDictionary<MetaTime, MetaDuration> SessionData { get; set; }

		[MetaMember(263, MetaMemberFlags.None)]
		public DailyTasksV2Status DailyTasksV2Status { get; set; }

		[MetaMember(264, MetaMemberFlags.None)]
		public bool HasAds { get; set; }

		[MetaMember(265, MetaMemberFlags.None)]
		[NoChecksum]
		public UnitySystemInfo UnitySystemInfo { get; set; }

		[MetaMember(266, MetaMemberFlags.None)]
		public PlayerEnergyModeEventsModel EnergyModeEvents { get; set; }

		[MetaMember(267, MetaMemberFlags.None)]
		public PlayerMiniEventsModel MiniEvents { get; set; }

		[MetaMember(268, MetaMemberFlags.None)]
		public PlayerMiniEventOverrides MiniEventOverrides { get; set; }

		[MetaMember(269, MetaMemberFlags.None)]
		public PlayerSoloMilestoneEventModel SoloMilestoneEvents { get; set; }

		[MetaMember(270, MetaMemberFlags.None)]
		public int SoloMilestoneEventsStarted { get; set; }

		[MetaMember(271, MetaMemberFlags.None)]
		public RandomPCG SoloMilestoneRandom { get; set; }

		[MetaMember(272, MetaMemberFlags.None)]
		public PlayerDailyScoopEventModel DailyScoopEvents { get; set; }

		[MetaMember(273, MetaMemberFlags.None)]
		[ServerOnly]
		public List<int> MassMailsReceived { get; set; }

		[MetaMember(275, MetaMemberFlags.None)]
		public RandomPCG RewardContainerRandom { get; set; }

		[MetaMember(276, MetaMemberFlags.None)]
		public PlayerMysteryMachineLeaderboardRewardsState MysteryMachineLeaderboardRewardsState { get; set; }

		[MetaMember(277, MetaMemberFlags.None)]
		public PlayerBoultonLeagueEventsModel BoultonLeagueEvents { get; set; }

		[MetaMember(278, MetaMemberFlags.None)]
		public BoultonLeagueStatus BoultonLeagueStatus { get; set; }

		[MetaMember(279, MetaMemberFlags.None)]
		public PlayerTemporaryCardCollectionEventsModel TemporaryCardCollectionEvents { get; set; }

		[MetaMember(281, MetaMemberFlags.None)]
		public RandomPCG StackMiniGameRandom { get; set; }

		[MetaMember(282, MetaMemberFlags.None)]
		public MetaDictionary<CollectibleBoardEventId, Queue<int>> PastPortalsGivenPerEvent { get; set; }

		[MetaMember(283, MetaMemberFlags.None)]
		public MetaTime LastTimeZoneUpdateTimestamp { get; set; }

		[IgnoreDataMember]
		public MetaDuration MinTimeBetweenTimeZoneUpdate => default(MetaDuration);

		[MetaMember(286, MetaMemberFlags.None)]
		public ProgressionPackEventsModel ProgressionPackEvents { get; set; }

		[MetaMember(287, MetaMemberFlags.None)]
		public MetaDictionary<MergeBoardId, OrderedSet<PlayerModeId>> ActiveModesPerBoard { get; set; }

		[MetaMember(288, MetaMemberFlags.None)]
		public PlayerShortLeaderboardEventsModel ShortLeaderboardEvents { get; set; }

		[MetaMember(289, MetaMemberFlags.None)]
		public List<DigEventBoardId> CompletedShinyBoards { get; set; }

		[MetaMember(290, MetaMemberFlags.None)]
		public DigEvent DigEvents { get; set; }

		[MetaMember(291, MetaMemberFlags.None)]
		public RandomPCG DigEventRandom { get; set; }

		[MetaMember(292, MetaMemberFlags.None)]
		public DigEventBoardId CurrentDigEventBoard { get; set; }

		[MetaMember(293, MetaMemberFlags.None)]
		public DigEventMuseumModel DigEventMuseum { get; set; }

		[MetaMember(294, MetaMemberFlags.None)]
		public int DigEventShinyBoardTries { get; set; }

		[MetaMember(295, MetaMemberFlags.None)]
		public DigEventMinigameData DigEventMinigameData { get; set; }

		[MetaMember(296, MetaMemberFlags.None)]
		public PlayerCardCollectionSupportingEventsModel CardCollectionSupportingEvents { get; set; }

		[MetaMember(297, MetaMemberFlags.None)]
		public OrderedSet<EventLevelData> EventLevelsUpgradedByCardCollectionSupportingEvent { get; set; }

		[MetaMember(300, MetaMemberFlags.None)]
		public MetaDictionary<LocationId, F64> CameraZoomPerLocation { get; set; }

		[MetaMember(301, MetaMemberFlags.None)]
		public bool DebugUseAreaGlobalRequirement { get; set; }

		[MetaMember(302, MetaMemberFlags.None)]
		public LocationId StartLocation { get; set; }

		[MetaMember(303, MetaMemberFlags.None)]
		public PlayerCoreSupportEventsModel CoreSupportEvents { get; set; }

		[MetaMember(304, MetaMemberFlags.None)]
		public PlayerMixABoosterEventsModel MixABoosterEvents { get; set; }

		[MetaMember(305, MetaMemberFlags.None)]
		public int CurrentDigEventShinyProgressIndex { get; set; }

		[MetaMember(307, MetaMemberFlags.None)]
		public RandomPCG DigEventChanceRandom { get; set; }

		[MetaMember(308, MetaMemberFlags.None)]
		[NoChecksum]
		public MetaDictionary<LocationId, F64Vec3> CameraPositionsPerLocation { get; set; }

		[MetaMember(310, MetaMemberFlags.None)]
		public LastNSegmentsCache LastNSegmentsCache { get; set; }

		[IgnoreDataMember]
		ILastNSegmentsCache IPlayer.LastNSegmentsCache => null;

		[MetaMember(311, MetaMemberFlags.None)]
		public TasksTabStyle? OverrideTasksTabStyle { get; set; }

		[IgnoreDataMember]
		public Option<TasksTabStyle> OverrideTasksTabStyleOption => default(Option<TasksTabStyle>);

		[MetaMember(313, MetaMemberFlags.None)]
		public RandomPCG RollTheDiceRandom { get; set; }

		[MetaMember(314, MetaMemberFlags.None)]
		public RollTheDiceMinigameData RollTheDiceMinigameData { get; set; }

		IDailyChallengesEventsHistoricalDataModel IPlayer.DailyChallengesEventsHistoricalData => null;

		[MetaMember(315, MetaMemberFlags.None)]
		public SegmentorState Segmentor { get; set; }

		[MetaMember(316, MetaMemberFlags.None)]
		public CustomMergeBoardsState CustomMergeBoardsState { get; set; }

		[MetaMember(317, MetaMemberFlags.None)]
		public DailyChallengesEventsHistoricalDataModel DailyChallengesEventsHistoricalData { get; set; }

		[MetaMember(318, MetaMemberFlags.None)]
		public BuilderEventMinigameData BuilderEventMinigameData { get; set; }

		[MetaMember(319, MetaMemberFlags.None)]
		public PityRuns PityRuns { get; set; }

		[MetaMember(320, MetaMemberFlags.None)]
		public IAutoMergeFeatureModel AutoMergeFeatureModel { get; set; }

		public override MetaDuration DebugTimeOffset => default(MetaDuration);

		[IgnoreDataMember]
		public LeaderboardClientState LeaderboardClientState => null;

		[IgnoreDataMember]
		public BoultonLeagueDivisionClientState BoultonLeagueDivisionClientState => null;

		[IgnoreDataMember]
		public ShortLeaderboardEventDivisionClientState ShortLeaderboardEventDivisionClientState => null;

		[IgnoreDataMember]
		public ClassicRacesEventDivisionClientState ClassicRacesEventDivisionClientState => null;

		[IgnoreDataMember]
		public (IBoardInventory inventory, MetaTime? expirationTime) RentableInventory => default((IBoardInventory, MetaTime?));

		[IgnoreDataMember]
		public bool IsRentableInventoryExpired => false;

		public PlayerModifiersChangedEvent ModifiersChanged { get; set; }

		public PlayerModesChangedEvent ModesChanged { get; set; }

		[IgnoreDataMember]
		public string SessionConfigVersion { get; set; }

		[IgnoreDataMember]
		public string ServerBuildVersion { get; set; }

		[IgnoreDataMember]
		public string SessionHandshakeDeviceModel { get; set; }

		IDigEventMinigameData IPlayer.DigEventMinigameData => null;

		IRollTheDiceMinigameData IPlayer.RollTheDiceMinigameData => null;

		IBuilderEventMinigameData IPlayer.BuilderEventMinigameData => null;

		ICustomMergeBoardsState IPlayer.CustomMergeBoardsState => null;

		[IgnoreDataMember]
		public IEnumerable<IBoard> Boards => null;

		[IgnoreDataMember]
		public IEnumerable<(IBoard, MetaTime?)> BoardsWithExpirationTimes => null;

		public IEnumerable<IMailMessage> MailMessages => null;

		public IEnumerable<GarageCleanupEventModel> ActiveGarageCleanups => null;

		public IEnumerable<CollectibleBoardEventModel> ActiveCollectibleBoardEvents => null;

		public IEnumerable<LeaderboardEventModel> ActiveLeaderboardEvents => null;

		public IEnumerable<DailyScoopEventModel> ActiveDailyScoopEvents => null;

		public IEnumerable<MysteryMachineEventModel> ActiveMysteryMachineEvents => null;

		public IEnumerable<ProgressionEventModel> ActiveProgressionEvents => null;

		public IEnumerable<ProgressionPackEventModel> ActiveProgressionPackEvents => null;

		public IEnumerable<SoloMilestoneEventModel> ActiveSoloMilestoneEvents => null;

		public IEnumerable<MiniEventModel> ActiveMiniEvents => null;

		public IEnumerable<TemporaryCardCollectionEventModel> ActiveTemporaryCardCollectionEvents => null;

		public IEnumerable<CardCollectionSupportingEventModel> ActiveCardCollectionSupportingEvents => null;

		public IEnumerable<MixABoosterEventModel> ActiveMixABoosterEvents => null;

		public IEnumerable<ShortLeaderboardEventModel> ActiveShortLeaderboardEvents
		{
			[IteratorStateMachine(typeof(_003Cget_ActiveShortLeaderboardEvents_003Ed__613))]
			get
			{
				return null;
			}
		}

		public IEnumerable<EnergyModeEventModel> ActiveEnergyModeEvents => null;

		public IEnumerable<CoreSupportEventModel> ActiveCoreSupportEvents => null;

		public IEnumerable<GarageCleanupEventModel> AllGarageCleanups => null;

		public IEnumerable<IPlayerModifier> ActiveModifiers => null;

		public List<IPlayerModifier> ActiveModifiersNonAlloc => null;

		[IgnoreDataMember]
		public IReadOnlyList<ScriptedEvent> ScriptedEvents => null;

		[IgnoreDataMember]
		public int ProgressionEventIAPStreakLength => 0;

		public event Action<PlayerEventBase> EventStreamInterceptor
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

		public override int GetTicksPerSecond()
		{
			return 0;
		}

		public override IModelRuntimeData<IPlayerModelBase> GetRuntimeData()
		{
			return null;
		}

		public override PlayerBanInfo GetAndClearLegacyPlayerBanInfoForFixup()
		{
			return null;
		}

		public void SetWallet(Wallet wallet)
		{
		}

		public override bool GetMasterNotificationsOn()
		{
			return false;
		}

		public void ForwardEvent(PlayerEventBase evt)
		{
		}

		public void SubscribeToPlayerEvent<T>(Action<T> callback) where T : PlayerEventBase
		{
		}

		public void UnsubscribeFromPlayerEvent<T>(Action<T> callback) where T : PlayerEventBase
		{
		}

		public override void GameInitializeNewPlayerModel(MetaTime now, ISharedGameConfig gameConfig, EntityId playerId, string name)
		{
		}

		public override void GameOnRestoredFromPersistedState(MetaDuration elapsedTime)
		{
		}

		public void HotfixBrokenVisibleHotspots(RestoredStateFixupChangeLog changeLog)
		{
		}

		public override InAppPurchaseHistory CreateInAppPurchaseHistorySummary(MetaTime? now)
		{
			return null;
		}

		public void RegisterModelEvents()
		{
		}

		public override PlayerAuthEntryBase FixupLegacyPlayerAuthEntry(AuthenticationKey key, LegacyPlayerAuthEntry auth)
		{
			return null;
		}

		public void RemoveExpiredThirdPartySurveyMails(RestoredStateFixupChangeLog changeLog = null)
		{
		}

		public void RemoveNonExistingItemsFromMails(RestoredStateFixupChangeLog changeLog)
		{
		}

		public void RemoveOutOfBoundsEnergyConsumptionMultiplierModes()
		{
		}

		public void UpdateDiscoveredDialogueCharacters()
		{
		}

		public void PlayerPocketChangedEvent(int itemId, string itemType, MergeBoardId boardId, int count, PlayerPocketChangeEventType? changeType)
		{
		}

		public void PlayerInventoryContentChanged(int itemId, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType)
		{
		}

		public void ClampBrokenItemTimers(IBoard board, IPlayer player, RestoredStateFixupChangeLog changeLog)
		{
		}

		public void RefreshMergeChainLevels(RestoredStateFixupChangeLog changeLog = null)
		{
		}

		public override void GameOnSessionStarted()
		{
		}

		public void StorePreviousSessions()
		{
		}

		public void CleanOldSessionData()
		{
		}

		public void UpdateTrackingSessionsInTheLast240Hours(MetacoreTime currentTime)
		{
		}

		public void UpdateUnitySystemInfo(UnitySystemInfo unitySystemInfo)
		{
		}

		public void TryRefreshDailyTasks()
		{
		}

		public override void GameOnInitialLogin()
		{
		}

		public override void GameOnSessionEnded()
		{
		}

		public override void GameFastForwardTime(MetaDuration elapsedTime)
		{
		}

		public void OnPlayerLogin(MetaTime curTime, string loginGameVersion, ClientPlatform clientPlatform)
		{
		}

		public static bool ShouldRemoveMail(PlayerMailItem mail)
		{
			return false;
		}

		public void AddMailToInbox(MetaInGameMail mailContents)
		{
		}

		public void AddMailToInbox(MetaInGameMail mailContents, MetaTime timestamp)
		{
		}

		public override void OnClaimedInAppProduct(InAppPurchaseEvent ev, InAppProductInfoBase productInfoBase, out ResolvedPurchaseContentBase resolvedContent)
		{
			resolvedContent = null;
		}

		public override void GameTick(IChecksumContext checksumCtx)
		{
		}

		public override void GameImportAfterReset(PlayerModel source)
		{
		}

		public override void GameImportAfterResetRevert(PlayerModel source)
		{
		}

		public override void GameImportAfterOverwrite(PlayerModel source)
		{
		}

		public void SetFlags(ulong flags, bool set)
		{
		}

		public bool AreFlagsSet(ulong flags)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetInventories_003Ed__577))]
		public IEnumerable<IBoardInventory> GetInventories(MergeBoardId boardId, int typeFlags, bool forceExpiredInventories = false)
		{
			return null;
		}

		public int GetInventoryIndex(MergeBoardId boardId, IBoardInventory boardInventory)
		{
			return 0;
		}

		public IReadOnlyCollection<MergeBoard> GetMergeBoards(bool includeEvents = false)
		{
			return null;
		}

		public int GetMergeBoards(Span<MergeBoard> results, bool includeEvents = false)
		{
			return 0;
		}

		public GarageCleanupEventModel GarageCleanupEventState(GarageCleanupEventInfo eventInfo)
		{
			return null;
		}

		public ProgressionEventModel ProgressionEventState(ProgressionEventInfo eventInfo)
		{
			return null;
		}

		public ProgressionPackEventModel ProgressionPackEventState(ProgressionPackEventInfo eventInfo)
		{
			return null;
		}

		public CollectibleBoardEventModel CollectibleBoardEventState(CollectibleBoardEventInfo eventInfo)
		{
			return null;
		}

		public LeaderboardEventModel LeaderboardEventState(LeaderboardEventInfo eventInfo)
		{
			return null;
		}

		public MysteryMachineEventModel MysteryMachineEventState(MysteryMachineEventInfo eventInfo)
		{
			return null;
		}

		public SoloMilestoneEventModel SoloMilestoneEventState(SoloMilestoneEventInfo eventInfo)
		{
			return null;
		}

		public DailyScoopEventModel DailyScoopEventState(DailyScoopEventInfo eventInfo)
		{
			return null;
		}

		public TemporaryCardCollectionEventModel TemporaryCardCollectionEventState(TemporaryCardCollectionEventInfo eventInfo)
		{
			return null;
		}

		public BoultonLeagueEventModel BoultonLeagueEventState(BoultonLeagueEventInfo eventInfo)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAllActiveAndJoinedBoultonLeagueEvents_003Ed__630))]
		public IEnumerable<BoultonLeagueEventModel> GetAllActiveAndJoinedBoultonLeagueEvents()
		{
			return null;
		}

		public bool TryGetFirstActiveAndJoinedBoultonLeagueEvent(out BoultonLeagueEventModel outEventModel)
		{
			outEventModel = null;
			return false;
		}

		public bool TryExtendingCollectibleBoardEvent(CollectibleBoardEventInfo eventInfo)
		{
			return false;
		}

		public void RecordStaleExtensionPurchase(CollectibleBoardEventInfo eventInfo)
		{
		}

		public bool TryConsumeCurrencyBank(CurrencyBankId currencyBankId, int storedAmount, AnalyticsContext context)
		{
			return false;
		}

		public bool IsActivableActive(MetaActivableState activable)
		{
			return false;
		}

		public void RecordStaleProgressionEventPremiumIAPPurchase(ProgressionEventId eventId)
		{
		}

		public void RecordStaleProgressionEventPremiumIAPPurchase(IStringId eventId)
		{
		}

		public MergeBoard TryGetMergeBoard(MergeBoardId boardId)
		{
			return null;
		}

		public MergeBoard TryGetMergeBoard(MergeBoardId boardId, out bool isLegacyEvent, out bool isLiveOpsEvent, out IBoardEventModel boardEventModel)
		{
			isLegacyEvent = default(bool);
			isLiveOpsEvent = default(bool);
			boardEventModel = null;
			return null;
		}

		public IBoardEventModel FindBoardEventModel<TId, TInfo, TEventState>(MetaActivableSet<TId, TInfo, TEventState> model, MergeBoardId boardId) where TInfo : IMetaActivableInfo<TId> where TEventState : MetaActivableState, IBoardEventModel
		{
			return null;
		}

		public ShortLeaderboardEventModel FindShortLeaderboardEventModel(MergeBoardId boardId)
		{
			return null;
		}

		public void RefreshEnergy(MetacoreTime time)
		{
		}

		public void RefreshProducerInventory(RestoredStateFixupChangeLog changeLog)
		{
		}

		public void RefreshActiveBoard(MetacoreTime time)
		{
		}

		public void ReportEvent(AnalyticsServersideEventBase commonEvent, bool skipOnlineCheck = false)
		{
		}

		public void SendAnalyticsEvent(AnalyticsServersideEventBase commonEvent, bool skipOnlineCheck = false)
		{
		}

		public void SendAnalyticsEvents(IEnumerable<AnalyticsServersideEventBase> events)
		{
		}

		public void AnalyticsZeroEnergyCostActivationEvent(long analyticsFakeZeroEnergyCost, long analyticsFakeZeroEnergySaldo, CurrencySink currencySink, int itemId, AnalyticsContext context, string attachmnet, int attachmentAmount)
		{
		}

		public void AnalyticsCurrencyRemovedEvent(Currencies currency, long amountSoft, long amountHard, CurrencySink currencySink, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
		{
		}

		public void AnalyticsCurrencyReceivedEvent(Currencies currency, long amountSoft, long amountHard, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
		{
		}

		public void AnalyticsItemDiscoveredEvent(int itemId)
		{
		}

		public void CollectPlayerEvent(PlayerEventBase playerEvent)
		{
		}

		public int SessionCount(int hoursSince)
		{
			return 0;
		}

		public void ExpireModifiers(MetaTime tick)
		{
		}

		public IPlayerModifier AddModifier(IPlayerModifier playerModifier)
		{
			return null;
		}

		public void ReportEvent(PlayerEventBase analyticsEvent)
		{
		}

		public void RemoveNonExistingHotspots(RestoredStateFixupChangeLog changeLog)
		{
		}

		public void MakeCompletedHotspotChildrenVisible(bool skipAppearActions = false, RestoredStateFixupChangeLog changeLog = null)
		{
		}

		public IEnumerable<IHotspotDefinition> GetMissingHotspots()
		{
			return null;
		}

		public void AddScriptedEvent(IScriptedEventCondition condition, ISerializedAction action)
		{
		}

		public bool TryGetScriptedEvent(int eventId, out ScriptedEvent scriptedEvent, out int scriptedEventIndex)
		{
			scriptedEvent = null;
			scriptedEventIndex = default(int);
			return false;
		}

		public void RemoveRegisteredScriptedEvent(int index)
		{
		}

		public void OnItemDiscovered(int itemId)
		{
		}

		public void CollectItemsOnSessionStart(CollectItemsOnSessionStartSettings sharedGlobalsAutoCollectOnSessionStarted)
		{
		}

		public void CollectItemsOnSessionStart(MetaDuration durationSinceInclusive, ICollection<int> typesToCollect)
		{
		}

		public void ForceSessionStartCleanup(ICollection<int> typesToCollect, MetacoreTime now, out int mergeBoardTupleCount, out int inventoryMergeItemCount)
		{
			mergeBoardTupleCount = default(int);
			inventoryMergeItemCount = default(int);
		}

		public void ConvertArtifactsToBoxes(MetacoreTime conversionTime, RestoredStateFixupChangeLog changeLog)
		{
		}

		public void DoStartupCleanupForReEngagement()
		{
		}

		public void ForceReEngagementCleanup(ReEngagementSettings activeSettings)
		{
		}

		public IActiveOfferGroup GetActiveOrSoldOutOfferGroup(MetaOfferGroupId offerGroupId)
		{
			return null;
		}

		public IActiveOfferGroup GetActiveOfferGroup(MetaOfferGroupId offerGroupId)
		{
			return null;
		}

		public bool IncludedInProgressionEventStreak(ProgressionEventId eventId)
		{
			return false;
		}

		public void AddProgressionEventIAPStreak(ProgressionEventId eventId)
		{
		}

		public void ClearProgressionEventIAPStreak()
		{
		}

		public void UpdateRentableInventoryTimer()
		{
		}

		public void AddTimeToRentableInventory(MetaDuration duration)
		{
		}

		public void AddRentableInventoryBatch(int amountToAdd)
		{
		}

		public void ResetRentableInventoryExpirationTime()
		{
		}

		public void ResetRentableInventoryBatchCount(int amount)
		{
		}

		public (int, Currencies, long) GetRentableInventoryBatchCost()
		{
			return default((int, Currencies, long));
		}

		public RentableInventorySettings GetRentableInventorySettings()
		{
			return null;
		}

		public int GetAmountOfBatchesWithItems()
		{
			return 0;
		}

		public bool ShouldShowRentableInventoryExtensionPopup()
		{
			return false;
		}

		public void SetupInitialProducerInventory()
		{
		}

		public void SetupProducerInventory(int initialSize, int maximumSize)
		{
		}

		public (int, int) CalculateDailyTaskV2TokenAmount(SoloMilestoneEventModel model, int taskSoloMilestonePoints)
		{
			return default((int, int));
		}

		public (int, int) CalculateHotspotTokenAmount(SoloMilestoneEventModel model, HotspotDefinition hotspotDefinition)
		{
			return default((int, int));
		}

		public int GetBatchCostIndex(RentableInventorySettings settings)
		{
			return 0;
		}

		public void HandleIntervalChecks()
		{
		}

		public static List<IWritableProducerInventorySlotState> GetDefaultProducerInventoryEntries(IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> producerInventorySlots)
		{
			return null;
		}

		public static List<IWritableProducerInventorySlotState> GetDefaultProducerInventoryEntries(int initialSize, int maximumSize)
		{
			return null;
		}

		public void ProgressSoloMilestone(SoloMilestoneEventModel activeSoloMilestoneEvent)
		{
		}

		public void AddTokensToFlashSales(SoloMilestoneEventModel eventModel)
		{
		}

		public void OnAdStarted()
		{
		}

		public void CleanupPocket()
		{
		}

		public void SetLastTimeZoneUpdateTimestamp(MetacoreTime newTimestamp)
		{
		}

		public override void UpdateTimeZone(PlayerTimeZoneInfo newTimeZone, bool isFirstLogin)
		{
		}

		public string GetActiveBoardModesLogContent()
		{
			return null;
		}

		public void ReportLevelReachedDuringCardCollectionSupportingEvent(string eventId, int eventLevel)
		{
		}

		public bool ShouldCardPacksBeUpgraded(RewardSourceContext rewardSourceContext)
		{
			return false;
		}

		public bool WasEventLevelReachedDuringSupportingEvent(string eventId, int eventLevel)
		{
			return false;
		}

		public bool IsOnFireActiveOnAnyBoard()
		{
			return false;
		}

		public void HandleCacheLastNSegments()
		{
		}

		public override void DebugForceSetActivablePhase(MetaActivableKindId kindId, string activableIdStr, MetaActivableState.DebugPhase? phase)
		{
		}

		public Option<IBoard> GetBoard(MergeBoardId boardId)
		{
			return default(Option<IBoard>);
		}

		public void RefreshEventModelStates(PlayerEventsModelRefreshAction action)
		{
		}

		public override void OnInAppPurchaseHistoryUpdated()
		{
		}

		public void CheckPlayerProgress(RestoredStateFixupChangeLog changeLog)
		{
		}

		public bool CanHotspotBeVisible(HotspotId hotspotId)
		{
			return false;
		}

		public void HideHotspots(List<HotspotId> hotspots, RestoredStateFixupChangeLog changeLog)
		{
		}

		public void FixVisibleHotspots(RestoredStateFixupChangeLog changeLog)
		{
		}

		[MigrationFromVersion(57)]
		public void MigrateFromVersion57()
		{
		}

		[MigrationFromVersion(58)]
		public void MigrateFromVersion58()
		{
		}

		[MigrationFromVersion(59)]
		public void MigrateFromVersion59()
		{
		}
	}
}
