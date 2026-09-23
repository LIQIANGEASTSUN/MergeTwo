using System;
using System.Collections.Generic;
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
using Game.Logic;
using Game.Logic.Mail;
using GameLogic.Banks;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Config.Types;
using GameLogic.GameFeatures;
using GameLogic.Hotspots;
using GameLogic.MiniEvents;
using GameLogic.Offers;
using GameLogic.Player.Board;
using GameLogic.Player.DailyTasks;
using GameLogic.Player.DailyTasksV2;
using GameLogic.Player.Director.Actions;
using GameLogic.Player.Director.Conditions;
using GameLogic.Player.Events;
using GameLogic.Player.Leaderboard.ClassicRacesEvent;
using GameLogic.Player.Leaderboard.ShortLeaderboardEvent;
using GameLogic.Player.Modes;
using GameLogic.Player.Modifiers;
using GameLogic.Random;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Math;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;
using Metaplay.Core.Session;

namespace GameLogic.Player
{
	public interface IPlayer : IGenerationContext
	{
		const int MaxMergeBoards = 100;

		const int MaxInventories = 100;

		PlayerIdentity PlayerIdentity { get; }

		SessionToken SessionToken { get; }

		int LogicVersion { get; }

		int PlayerLevel { get; }

		Wallet Wallet { get; }

		SpawnFactoryState SpawnFactoryState { get; }

		ProgressState ProgressState { get; }

		DailyTaskStatus DailyTaskStatus { get; }

		DailyTasksV2Status DailyTasksV2Status { get; }

		StoreStatus StoreStatus { get; }

		GameSettings GameSettings { get; }

		GameFeaturesStates UnlockedFeatures { get; }

		MetacoreTime CurrentTime { get; }

		PlayerLocalTime CurrentLocalTime { get; }

		IEnumerable<IActiveOfferGroup> ActiveOfferGroups { get; }

		IEnumerable<IPlayerModifier> ActiveModifiers { get; }

		List<IPlayerModifier> ActiveModifiersNonAlloc { get; }

		OrderedSet<PlayerModeId> ActiveModesGlobal { get; }

		MetaDictionary<MergeBoardId, OrderedSet<PlayerModeId>> ActiveModesPerBoard { get; }

		LogChannel Log { get; }

		OverrideSpawnItemsStatus OverrideSpawnItemsStatus { get; }

		BoultonLeagueStatus BoultonLeagueStatus { get; }

		MergeBoardId ActiveMergeBoardId { get; }

		IPlayerModelClientListener ClientListener { get; }

		IPlayerModelServerListener ServerListener { get; }

		IEnumerable<IBoard> Boards { get; }

		MergeBoard GarageMergeBoard { get; }

		IBoardInventory GarageBoardInventory { get; set; }

		IBoardInventory GarageBoardProducerInventory { get; }

		IBoardInventory RentableBoardInventory { get; }

		IReadOnlyList<IWritableProducerInventorySlotState> ProducerInventoryEntries { get; }

		IEnumerable<(IBoard board, MetaTime? expirationTime)> BoardsWithExpirationTimes { get; }

		(IBoardInventory inventory, MetaTime? expirationTime) RentableInventory { get; }

		IEnumerable<IMailMessage> MailMessages { get; }

		IEnumerable<GarageCleanupEventModel> ActiveGarageCleanups { get; }

		IEnumerable<CollectibleBoardEventModel> ActiveCollectibleBoardEvents { get; }

		IEnumerable<LeaderboardEventModel> ActiveLeaderboardEvents { get; }

		IEnumerable<MysteryMachineEventModel> ActiveMysteryMachineEvents { get; }

		IEnumerable<ProgressionEventModel> ActiveProgressionEvents { get; }

		IEnumerable<SoloMilestoneEventModel> ActiveSoloMilestoneEvents { get; }

		IEnumerable<TemporaryCardCollectionEventModel> ActiveTemporaryCardCollectionEvents { get; }

		IEnumerable<CardCollectionSupportingEventModel> ActiveCardCollectionSupportingEvents { get; }

		OrderedSet<EventLevelData> EventLevelsUpgradedByCardCollectionSupportingEvent { get; }

		IEnumerable<ShortLeaderboardEventModel> ActiveShortLeaderboardEvents { get; }

		IEnumerable<EnergyModeEventModel> ActiveEnergyModeEvents { get; }

		IEnumerable<CoreSupportEventModel> ActiveCoreSupportEvents { get; }

		IEnumerable<MiniEventModel> ActiveMiniEvents { get; }

		IEnumerable<GarageCleanupEventModel> AllGarageCleanups { get; }

		PlayerProgressionEventsModel ProgressionEvents { get; }

		ProgressionPackEventsModel ProgressionPackEvents { get; }

		PlayerCollectibleBoardEventsModel CollectibleBoardEvents { get; }

		PlayerLeaderboardEventsModel LeaderboardEvents { get; }

		PlayerMysteryMachineEventsModel MysteryMachineEvents { get; }

		PlayerShortLeaderboardEventsModel ShortLeaderboardEvents { get; }

		PlayerEnergyModeEventsModel EnergyModeEvents { get; }

		PlayerCoreSupportEventsModel CoreSupportEvents { get; }

		PlayerSoloMilestoneEventModel SoloMilestoneEvents { get; }

		CurrencyBanksModel CurrencyBanksModel { get; }

		CurrencyBankModel CurrencyBankModel { get; }

		string PlayerName { get; }

		PlayerTemporaryCardCollectionEventsModel TemporaryCardCollectionEvents { get; }

		PlayerCardCollectionSupportingEventsModel CardCollectionSupportingEvents { get; }

		PlayerModifiersChangedEvent ModifiersChanged { get; set; }

		PlayerModesChangedEvent ModesChanged { get; set; }

		MetaDictionary<int, RandomPCG> RandomsByFishingRodType { get; set; }

		RandomPCG MysteryMachineRandom { get; }

		RandomPCG SoloMilestoneRandom { get; }

		RandomPCG RewardContainerRandom { get; }

		RandomPCG StackMiniGameRandom { get; }

		F64 TotalIapSpend { get; }

		ShortLeaderboardEventDivisionClientState ShortLeaderboardEventDivisionClientState { get; }

		ClassicRacesEventDivisionClientState ClassicRacesEventDivisionClientState { get; }

		PlayerMiniEventOverrides MiniEventOverrides { get; }

		IAutoMergeFeatureModel AutoMergeFeatureModel { get; }

		IEnumerable<DailyScoopEventModel> ActiveDailyScoopEvents { get; }

		int ProgressionEventIAPStreakLength { get; }

		SortedDictionary<int, F64> MoneySpentPerDay { get; }

		RandomPCG DigEventRandom { get; }

		RandomPCG RollTheDiceRandom { get; }

		DigEventBoardId CurrentDigEventBoard { get; set; }

		IDigEventMinigameData DigEventMinigameData { get; }

		DigEventMuseumModel DigEventMuseum { get; }

		ILastNSegmentsCache LastNSegmentsCache { get; }

		IMetacorePlayerTimeZoneInfo TimeZoneInfo { get; }

		Option<PlayerLocation> LastKnownLocationOption { get; }

		Option<TasksTabStyle> OverrideTasksTabStyleOption { get; }

		IRollTheDiceMinigameData RollTheDiceMinigameData { get; }

		IBuilderEventMinigameData BuilderEventMinigameData { get; }

		IDailyChallengesEventsHistoricalDataModel DailyChallengesEventsHistoricalData { get; }

		PityRuns PityRuns { get; }

		SegmentorState Segmentor { get; }

		bool IsProductionEnvironment { get; }

		bool IsDeveloper { get; }

		ICustomMergeBoardsState CustomMergeBoardsState { get; }

		LocationId StartLocation { get; }

		bool DebugUseAreaGlobalRequirement { get; }

		event Action<PlayerEventBase> EventStreamInterceptor;

		(int, Currencies, long) GetRentableInventoryBatchCost();

		GarageCleanupEventModel GarageCleanupEventState(GarageCleanupEventInfo eventInfo);

		ProgressionEventModel ProgressionEventState(ProgressionEventInfo eventInfo);

		CollectibleBoardEventModel CollectibleBoardEventState(CollectibleBoardEventInfo eventInfo);

		LeaderboardEventModel LeaderboardEventState(LeaderboardEventInfo eventInfo);

		MysteryMachineEventModel MysteryMachineEventState(MysteryMachineEventInfo eventInfo);

		SoloMilestoneEventModel SoloMilestoneEventState(SoloMilestoneEventInfo eventInfo);

		DailyScoopEventModel DailyScoopEventState(DailyScoopEventInfo eventInfo);

		BoultonLeagueEventModel BoultonLeagueEventState(BoultonLeagueEventInfo eventInfo);

		IReadOnlyCollection<MergeBoard> GetMergeBoards(bool includeEvents = false);

		int GetMergeBoards(Span<MergeBoard> results, bool includeEvents = false);

		IEnumerable<BoultonLeagueEventModel> GetAllActiveAndJoinedBoultonLeagueEvents();

		bool TryGetFirstActiveAndJoinedBoultonLeagueEvent(out BoultonLeagueEventModel outEventModel);

		bool TryExtendingCollectibleBoardEvent(CollectibleBoardEventInfo eventInfo);

		void RecordStaleExtensionPurchase(CollectibleBoardEventInfo eventInfo);

		bool TryConsumeCurrencyBank(CurrencyBankId currencyBankId, int storedAmount, AnalyticsContext context);

		bool IsActivableActive(MetaActivableState activable);

		void RecordStaleProgressionEventPremiumIAPPurchase(ProgressionEventId eventId);

		void RecordStaleProgressionEventPremiumIAPPurchase(IStringId eventId);

		IPlayerModifier AddModifier(IPlayerModifier playerModifier);

		IEnumerable<IHotspotDefinition> GetMissingHotspots();

		void AddScriptedEvent(IScriptedEventCondition condition, ISerializedAction action);

		void ReportEvent(PlayerEventBase analyticsEvent);

		void ReportEvent(AnalyticsServersideEventBase analyticsEvent, bool skipOnlineCheck = false);

		IActiveOfferGroup GetActiveOrSoldOutOfferGroup(MetaOfferGroupId offerGroupId);

		IActiveOfferGroup GetActiveOfferGroup(MetaOfferGroupId offerGroupId);

		IEnumerable<IBoardInventory> GetInventories(MergeBoardId boardId, int typeFlags, bool forceExpiredInventories = false);

		void AddProgressionEventIAPStreak(ProgressionEventId eventId);

		void PlayerInventoryContentChanged(int itemId, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType);

		(int, int) CalculateHotspotTokenAmount(SoloMilestoneEventModel soloMilestoneEventModel, HotspotDefinition hotspotDefinition);

		void ReportLevelReachedDuringCardCollectionSupportingEvent(string eventId, int eventLevel);

		bool ShouldCardPacksBeUpgraded(RewardSourceContext rewardSourceContext);

		void OnInitialLogin();

		Option<IBoard> GetBoard(MergeBoardId boardId);

		void RefreshEventModelStates(PlayerEventsModelRefreshAction action);
	}
}
