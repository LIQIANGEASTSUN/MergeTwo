using System.Collections.Generic;
using System.Collections.Immutable;
using Code.GameLogic.Area;
using Code.GameLogic.Config;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.FlashSales;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.CardCollectionSupportingEvent;
using Code.GameLogic.GameEvents.DailyChallenges.Data;
using Code.GameLogic.GameEvents.DailyScoop;
using Code.GameLogic.GameEvents.SoloMilestone;
using Code.GameLogic.Hotspots;
using Code.GameLogic.IAP;
using Code.GameLogic.Player.Requirements;
using Code.GameLogic.ProgressionTracks;
using Code.GameLogic.Social;
using Code.GameLogic.Utility.PitySystem;
using Game.Cloud.Webshop;
using GameLogic.Addressables;
using GameLogic.Area;
using GameLogic.Audio;
using GameLogic.Banks;
using GameLogic.CardCollection;
using GameLogic.Codex;
using GameLogic.Config.DecorationShop;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Config.Map.Characters;
using GameLogic.Config.Shop;
using GameLogic.Cutscenes;
using GameLogic.DailyTasks;
using GameLogic.DailyTasksV2;
using GameLogic.Decorations;
using GameLogic.Dialogue;
using GameLogic.EventCharacters;
using GameLogic.Fallbacks;
using GameLogic.GameFeatures;
using GameLogic.Hotspots;
using GameLogic.Hotspots.CardStack;
using GameLogic.Inventory;
using GameLogic.ItemsInPocket;
using GameLogic.MergeChains;
using GameLogic.MiniEvents;
using GameLogic.MixABooster;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Items.OverrideSpawnChance;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Modes;
using GameLogic.Player.Rewards;
using GameLogic.Player.ScheduledActions;
using GameLogic.ProgressivePacks;
using GameLogic.Seasonality;
using GameLogic.Social;
using GameLogic.SocialMedia;
using GameLogic.Story;
using GameLogic.Story.SlideShows;
using GameLogic.Story.Videos;
using Merge;
using Metacore;
using Metaplay.Core;
using Metaplay.Core.InAppPurchase;
using Metaplay.Core.Localization;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;
using Player;
using TimedMergeBoards;

namespace GameLogic.Config
{
	public interface IMergeMansionGameConfig
	{
		IReadOnlyDictionary<OfferPlacementId, List<MetaOfferGroupInfoBase>> MetaOfferGroupsPerPlacementInMostImportantFirstOrder { get; }

		IReadOnlyDictionary<int, ConfigLookupValue<ItemInPocketInfo>> ItemInPocketInfoByItemId { get; }

		SharedGlobals SharedGlobals { get; }

		IReadOnlyDictionary<HotspotId, IEnumerable<HotspotDefinition>> HotspotOpensAfterCompletion { get; }

		IReadOnlyDictionary<FlashSaleGroupId, ConfigLookupValue<FlashSaleGroupDefinition>> FlashSaleGroups { get; }

		IReadOnlyDictionary<int, CardCollectionPackId> CardPacksByItemId { get; }

		IReadOnlyDictionary<int, CardCollectionCardId> InformantTipsByItemId { get; }

		WebShopSettings WebShopSettings { get; }

		IReadOnlyDictionary<int, ConfigLookupValue<FallbackItemInfo>> FallbackItemInfoByItemId { get; }

		IReadOnlyDictionary<MergeBoardId, List<CollectibleBoardEventId>> CollectibleBoardEventBoards { get; }

		IReadOnlyDictionary<(CardStars, TemporaryCardCollectionEventId), DuplicateRewardPair> DuplicateRewards { get; }

		IReadOnlyDictionary<MergeBoardId, LeaderboardEventId> LeaderboardEventBoards { get; }

		int MaxPlayerLevel { get; }

		IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, IImmutableSet<PlayerSegmentId>> MysteryMachineLeaderboardRewardSegments { get; }

		IReadOnlyList<int> MysteryMachineItemIds { get; }

		DailyTasksV2Settings DailyTasksV2Settings { get; }

		IReadOnlyDictionary<OfferPlacementId, List<MetaOfferGroupId>> OfferGroupIdsByOfferPlacementId { get; }

		IReadOnlyDictionary<MergeBoardId, List<CollectibleBoardEventId>> DigEventMergeBoards { get; }

		IReadOnlyList<ConfigLookupValue<TemporaryCardCollectionEventInfo>> OrderedTemporaryCardCollectionEventInfos { get; }

		IReadOnlyDictionary<CollectibleBoardEventId, MergeBoardId> FishingEventBoards { get; }

		IReadOnlyDictionary<MergeBoardId, List<IStringId>> EventsByMergeBoard { get; }

		IImmutableSet<int> CardItems { get; }

		IReadOnlyList<IReadOnlyList<int>> ProducerVariants { get; }

		IImmutableSet<int> CardDeckItems { get; }

		IReadOnlyList<HotspotId> AreaUnlockHotspots { get; }

		IReadOnlyDictionary<MergeBoardId, MysteryMachineEventId> MysteryMachineEventBoards { get; }

		IImmutableSet<MergeBoardId> AuxEnergyMergeBoards { get; }

		IReadOnlyList<PortalPieceChainData> PortalPieceChains { get; }

		RestoreCountryCodeSettings RestoreCountryCodeSettings { get; }

		IReadOnlyDictionary<DialogItemId, List<DialogCharacterType>> CharactersToForceDiscoverByNonHotspotDialogItemId { get; }

		IImmutableSet<int> ItemsAcceptedBySinks { get; }

		IReadOnlyDictionary<OfferPlacementId, List<OfferPlacementId>> OfferPlacementIds { get; }

		IReadOnlyDictionary<MergeBoardId, EventId> BoardEventBoards { get; }

		IImmutableSet<MergeBoardId> ShortLeaderboardEventBoards { get; }

		IReadOnlyDictionary<LeaderboardEventId, List<ConfigLookupValue<MergeChainDefinition>>> MergeChainsByLeaderboardEventId { get; }

		IReadOnlyCollection<ConfigLookupValue<IItemDefinition>> ItemsAvailableOnlyDuringCardCollectionEvent { get; }

		IReadOnlyDictionary<MixABoosterEventId, MixABoosterEventInfo> MixABoosterEvents { get; }

		IReadOnlyDictionary<MixABoosterRecipeId, MixABoosterRecipe> MixABoosterRecipes { get; }

		IReadOnlyDictionary<MixABoosterIngredientId, MixABoosterIngredient> MixABoosterIngredients { get; }

		IReadOnlyDictionary<SharedProducerSettingsId, SharedProducerSettings> SharedProducerSettings { get; }

		IReadOnlyDictionary<InAppProductId, InAppProductInfo> InAppProducts { get; }

		IReadOnlyDictionary<int, ItemDefinition> Items { get; }

		IReadOnlyDictionary<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo> CodexDiscoveryRewards { get; }

		IReadOnlyDictionary<CodexCategoryId, CodexCategoryInfo> CodexCategories { get; }

		IReadOnlyDictionary<ShopItemId, DynamicPurchaseDefinition> DynamicPurchaseProducts { get; }

		IReadOnlyDictionary<MergeBoardId, TimedMergeBoard> TimedMergeBoards { get; }

		IReadOnlyDictionary<AuthenticationPlatform, SocialAuthenticationConfig> SocialAuthentication { get; }

		IReadOnlyDictionary<GameFeatureId, GameFeatureSetting> GameFeatures { get; }

		IReadOnlyDictionary<MiniEventId, MiniEventInfo> MiniEvents { get; }

		IReadOnlyDictionary<MergeBoardId, BoardInfo> Boards { get; }

		IReadOnlyDictionary<EventLevelId, EventLevelInfo> EventLevels { get; }

		IReadOnlyDictionary<EventLevelSetId, EventLevels> LevelSets { get; }

		IReadOnlyDictionary<EventTaskId, EventTaskInfo> EventTasks { get; }

		IReadOnlyDictionary<int, PlayerLevelData> PlayerLevels { get; }

		IReadOnlyDictionary<HotspotId, HotspotDefinition> HotspotDefinitions { get; }

		IReadOnlyDictionary<DecorationId, DecorationInfo> Decorations { get; }

		IReadOnlyDictionary<StoryDefinitionId, StoryElementInfo> StoryElements { get; }

		IReadOnlyDictionary<DialogItemId, DialogItemInfo> DialogItems { get; }

		IReadOnlyDictionary<MapCharacterEventId, MapCharacterEventDefinition> MapCharacterEvents { get; }

		IReadOnlyDictionary<ShopItemId, ShopItemInfo> ShopItems { get; }

		IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> GarageFlashSales { get; }

		IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> EventFlashSales { get; }

		IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> GarageFlashSaleGroups { get; }

		IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> EventFlashSaleGroups { get; }

		IReadOnlyDictionary<DigEventItemId, DigEventItemInfo> DigEventItemInfos { get; }

		IReadOnlyDictionary<DigEventBoardId, DigEventBoards> DigEventBoards { get; }

		IReadOnlyDictionary<DigEventMuseumShelfId, DigEventMuseumShelfInfo> DigEventShelves { get; }

		IReadOnlyDictionary<DigEventId, DigEventInfo> DigEvents { get; }

		IReadOnlyDictionary<DigEventShinyProgressionId, DigEventShinyProgression> DigEventShinyProgression { get; }

		IReadOnlyDictionary<GarageCleanupEventId, GarageCleanupEventInfo> GarageCleanupEvents { get; }

		IReadOnlyDictionary<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo> GarageCleanupBoardRows { get; }

		IReadOnlyDictionary<GarageCleanupPatternSetId, GarageCleanupPatternSetInfo> GarageCleanupPatternSets { get; }

		IReadOnlyDictionary<GarageCleanupPatternRowId, GarageCleanupPatternRowInfo> GarageCleanupPatternRows { get; }

		IReadOnlyDictionary<GarageCleanupRewardId, GarageCleanupRewardInfo> GarageCleanupRewards { get; }

		IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> InventorySlots { get; }

		IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> ProducerInventorySlots { get; }

		IReadOnlyDictionary<FlashSaleShopSettingsId, FlashSaleShopSettings> FlashSaleShopSettings { get; }

		IReadOnlyDictionary<ShopLayoutId, ShopLayout> ShopLayouts { get; }

		IReadOnlyDictionary<int, SuppressedBuildLogsInfo> SuppressedWarnings { get; }

		IReadOnlyDictionary<OfferPopupTriggerId, OfferPopupTrigger> OfferPopupTriggers { get; }

		IReadOnlyDictionary<MetaOfferId, DelayedOfferPurchaseRequirement> DelayedOfferPurchaseRequirements { get; }

		IReadOnlyDictionary<AddressablesDownloadProcessId, AddressablesDownloadProcess> AddressablesDownloadProcesses { get; }

		IReadOnlyDictionary<CollectibleDialoguesInfoId, CollectibleDialoguesInfo> CollectibleDialoguesInfo { get; }

		IReadOnlyDictionary<LevelUpTutorialConfigId, LevelUpTutorialConfig> LevelUpTutorialConfig { get; }

		IReadOnlyDictionary<ScheduledActionId, ScheduledActionInfo> ScheduledActions { get; }

		IReadOnlyDictionary<CollectibleBoardEventId, CollectibleBoardEventInfo> CollectibleBoardEvents { get; }

		IReadOnlyDictionary<LeaderboardEventId, LeaderboardEventInfo> LeaderboardEvents { get; }

		IReadOnlyDictionary<BoultonLeagueEventId, BoultonLeagueEventInfo> BoultonLeagueEvents { get; }

		IReadOnlyDictionary<BoultonLeagueStageId, BoultonLeagueStageInfo> BoultonLeagueStages { get; }

		IReadOnlyDictionary<DialogCharacterType, DialogueCharacterInfo> DialogueCharacters { get; }

		IReadOnlyDictionary<EventCharacterId, EventCharacterInfo> EventCharacters { get; }

		IReadOnlyDictionary<SocialAuthRewardId, SocialAuthRewardInfo> SocialAuthRewards { get; }

		IReadOnlyDictionary<ReEngagementSettingsId, ReEngagementSettings> ReEngagementSettings { get; }

		IReadOnlyDictionary<CutsceneId, CutsceneInfo> Cutscenes { get; }

		IReadOnlyDictionary<LayeredDecorationSetId, LayeredDecorationSetInfo> LayeredDecorations { get; }

		IReadOnlyDictionary<ProgressionPackId, ProgressionPack> ProgressionPacks { get; }

		IReadOnlyDictionary<MetaOfferId, MakeYourOwnOfferInfo> MakeYourOwnOffers { get; }

		IReadOnlyDictionary<MapSpotId, MapSpotInfo> MapSpots { get; }

		IReadOnlyDictionary<ConfigLookupValue<ItemDefinition>, IOverrideSpawnChanceFeatures> OverrideSpawnChanceByItemDefinition { get; }

		IReadOnlyList<ConfigLookupValue<IItemDefinition>> FishItems { get; }

		IReadOnlyList<ConfigLookupValue<IItemDefinition>> FishingRodItems { get; }

		IFishingSettings FishingSettings { get; }

		IReadOnlyDictionary<ProgressionEventStreakId, ProgressionEventStreakRewards> ProgressionEventStreaks { get; }

		IReadOnlyDictionary<SeasonId, SeasonInfo> Seasons { get; }

		IReadOnlyDictionary<MergeChainId, MergeChainDefinition> MergeChains { get; }

		IReadOnlyDictionary<CardCollectionCardId, CardCollectionCardInfo> CardCollectionCardInfos { get; }

		IReadOnlyDictionary<CardCollectionCardSetId, CardCollectionCardSetInfo> CardCollectionCardSetInfos { get; }

		IReadOnlyDictionary<CardCollectionPackId, CardCollectionPackInfo> CardCollectionPackInfos { get; }

		IReadOnlyDictionary<CardCollectionCardActivationId, CardCollectionCardActivationInfo> CardCollectionCardActivationInfos { get; }

		IReadOnlyDictionary<CardCollectionPackActivationId, CardCollectionPackActivationInfo> CardCollectionPackActivationInfos { get; }

		IReadOnlyDictionary<CardCollectionHiddenRarityActivationId, CardCollectionHiddenRarityActivationInfo> CardCollectionHiddenRarityActivationInfos { get; }

		IReadOnlyDictionary<CardCollectionSetActivationId, CardCollectionSetActivationInfo> CardCollectionSetActivationInfos { get; }

		IReadOnlyDictionary<CardCollectionBalanceId, CardCollectionBalanceInfo> CardCollectionBalanceInfos { get; }

		IReadOnlyDictionary<CardCollectionEvidenceBoxId, CardCollectionEvidenceBoxInfo> CardCollectionEvidenceBoxes { get; }

		IReadOnlyDictionary<CardCollectionDuplicateRewardId, CardCollectionDuplicateRewardInfo> CardCollectionDuplicateCardRewards { get; }

		IReadOnlyDictionary<CardCollectionSupportingEventId, CardCollectionSupportingEventInfo> CardCollectionSupportingEvents { get; }

		IReadOnlyDictionary<CardCollectionPackId, CardCollectionSupportingEventReplacementPackInfo> CardCollectionSupportingEventsReplacementPacks { get; }

		IReadOnlyDictionary<CardStackId, CardStackInfo> CardStacks { get; }

		IReadOnlyDictionary<ProgressionEventId, ProgressionEventInfo> ProgressionEvents { get; }

		IReadOnlyDictionary<MetaOfferGroupId, MergeMansionOfferGroupInfo> OfferGroups { get; }

		IReadOnlyDictionary<PlayerSegmentId, PlayerSegmentInfo> PlayerSegments { get; }

		IReadOnlyDictionary<FallbackPlayerRewardId, FallbackPlayerRewardInfo> FallbackPlayerRewards { get; }

		IReadOnlyDictionary<MetaOfferId, MergeMansionOfferInfo> Offers { get; }

		IReadOnlyDictionary<TemporaryCardCollectionEventId, TemporaryCardCollectionEventInfo> TemporaryCardCollectionEvents { get; }

		IReadOnlyDictionary<ShortLeaderboardEventId, ShortLeaderboardEventInfo> ShortLeaderboardEvents { get; }

		IReadOnlyDictionary<CurrencyBankId, CurrencyBankInfo> CurrencyBanks { get; }

		IReadOnlyDictionary<AreaId, AreaInfo> Areas { get; }

		IReadOnlyDictionary<MergeRewardId, MergeReward> XpMergeRewards { get; }

		IReadOnlyDictionary<SocialMediaId, SocialMediaInfo> SocialMedia { get; }

		IReadOnlyDictionary<RewardContainerId, RewardContainerInfo> RewardContainers { get; }

		IReadOnlyDictionary<MysteryMachineId, MysteryMachineInfo> MysteryMachines { get; }

		IReadOnlyDictionary<int, EnergyModeProgressionEventItemInfo> EnergyModeProgressionEventItems { get; }

		IReadOnlyDictionary<MysteryMachineEventId, MysteryMachineEventInfo> MysteryMachineEvents { get; }

		IReadOnlyDictionary<PlayerModeId, EnergyModeInfo> EnergyModes { get; }

		IReadOnlyDictionary<MergeChainId, DailyTasksV2MergeChainInfo> DailyTasksV2MergeChains { get; }

		IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, MysteryMachineLeaderboardConfigInfo> MysteryMachineLeaderboardConfigs { get; }

		IReadOnlyDictionary<PetId, PetInfo> PetInfos { get; }

		IReadOnlyDictionary<LocationTravelId, LocationTravelInfo> LocationTravels { get; }

		IReadOnlyDictionary<SoloMilestoneEventId, SoloMilestoneEventInfo> SoloMilestoneEvents { get; }

		IReadOnlyDictionary<DailyScoopEventId, DailyScoopEventInfo> DailyScoopEvents { get; }

		IReadOnlyDictionary<int, ExtraSpawnItemValueInfo> ExtraSpawnItemValues { get; }

		IReadOnlyDictionary<Currencies, ExtraSpawnCurrencyValueInfo> ExtraSpawnCurrencyValues { get; }

		IReadOnlyDictionary<CardStackId, ExtraSpawnCardStackValueInfo> ExtraSpawnCardStackValues { get; }

		IReadOnlyDictionary<CustomHotspotTableId, ExtraSpawnIllustrationValueInfo> ExtraSpawnIllustrationValues { get; }

		IReadOnlyDictionary<EnergyModeEventId, EnergyModeEventInfo> EnergyModeEvents { get; }

		IReadOnlyDictionary<DecorationShopId, DecorationShopInfo> DecorationShops { get; }

		IReadOnlyDictionary<DailyTaskId, DailyTaskDefinition> DailyTasks { get; }

		IReadOnlyDictionary<MysteryMachineSpecialSaleId, MysteryMachineSpecialSaleInfo> MysteryMachineSpecialSales { get; }

		IReadOnlyDictionary<BubblesSetupId, BubblesSetup> BubbleSetups { get; }

		IReadOnlyDictionary<ProgressionPackEventId, ProgressionPackEventInfo> ProgressionPackEvents { get; }

		IReadOnlyDictionary<CoreSupportEventId, CoreSupportEventInfo> CoreSupportEvents { get; }

		IReadOnlyDictionary<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo> MysteryMachineCurrencyItemChains { get; }

		IReadOnlyDictionary<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo> MysteryMachineCurrencyItems { get; }

		IReadOnlyDictionary<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo> MysteryMachineExtraItemGranting { get; }

		IReadOnlyDictionary<MysteryMachineChainMultiplierId, MysteryMachineChainMultiplierInfo> MysteryMachineChainMultipliers { get; }

		IReadOnlyDictionary<MysteryMachineItemScoreId, MysteryMachineItemScore> MysteryMachineItemScores { get; }

		IReadOnlyDictionary<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo> MysteryMachineSpecialItems { get; }

		IReadOnlyDictionary<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo> MysteryMachineProgressionEventProgressItemChains { get; }

		IReadOnlyDictionary<ItemTypeConstant, DailyTasksV2ItemBoultonLeagueInfo> DailyTasksV2ItemsBoultonLeague { get; }

		IReadOnlyDictionary<DailyScoopDayId, DailyScoopDayData> DailyScoopDays { get; }

		IReadOnlyDictionary<DailyScoopWeekId, DailyScoopWeekData> DailyScoopWeeks { get; }

		IReadOnlyDictionary<DailyScoopMilestoneId, DailyScoopMilestoneData> DailyScoopMilestones { get; }

		IReadOnlyDictionary<DailyScoopSpecialObjectiveId, DailyScoopSpecialObjectiveData> DailyScoopSpecialObjectives { get; }

		IReadOnlyDictionary<DailyScoopStandardObjectiveId, DailyScoopStandardObjectiveData> DailyScoopStandardObjectives { get; }

		IDailyChallengesEventConfig DailyChallengesEventConfig { get; }

		IReadOnlyDictionary<SoloMilestoneTokenSpawnsId, SoloMilestoneTokenSpawnsInfo> SoloMilestoneTokenSpawns { get; }

		IReadOnlyDictionary<ShortLeaderboardEventStageId, ShortLeaderboardEventStageInfo> ShortLeaderboardEventStages { get; }

		IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueInfo> DailyTasksV2BoultonLeague { get; }

		IReadOnlyDictionary<EnergyType, EnergySettingsConfig> EnergySettings { get; }

		IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2Info> DailyTasksV2 { get; }

		IReadOnlyDictionary<AreasGlobalUnlockRequirementId, AreasGlobalUnlockRequirementInfo> AreasGlobalUnlockRequirements { get; }

		IReadOnlyDictionary<SoloMilestoneMilestonesId, SoloMilestoneMilestonesInfo> SoloMilestoneMilestones { get; }

		IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueUnlimitedInfo> DailyTasksV2BoultonLeagueUnlimited { get; }

		IReadOnlyDictionary<RentableInventorySettingsId, RentableInventorySettings> RentableInventorySettings { get; }

		IReadOnlyDictionary<DigEventMuseumCollectionId, DigEventMuseumCollectionInfo> DigEventMuseumCollections { get; }

		IReadOnlyDictionary<DecorationShopItemId, DecorationShopItemInfo> DecorationShopItems { get; }

		IReadOnlyDictionary<MysteryMachineItemId, MysteryMachineItemInfo> MysteryMachineItems { get; }

		IReadOnlyDictionary<MysteryMachineItemSetId, MysteryMachineItemSetInfo> MysteryMachineItemSets { get; }

		IReadOnlyDictionary<MysteryMachineMultiplierId, MysteryMachineMultiplierInfo> MysteryMachineMultipliers { get; }

		IReadOnlyDictionary<string, ExtraSpawnInfo> ExtraSpawns { get; }

		IReadOnlyDictionary<BubbleVariationId, BubbleVariantsDefinition> BubbleVariations { get; }

		IReadOnlyDictionary<OrderRequirementsId, OrderRequirements> OrderRequirements { get; }

		IReadOnlyDictionary<string, TagRewardsInfo> TagRewards { get; }

		IReadOnlyDictionary<string, MMPlaylist> Playlists { get; }

		IReadOnlyDictionary<VideoId, Video> Videos { get; }

		IReadOnlyDictionary<SlideShowId, SlideShow> SlideShows { get; }

		IReadOnlyDictionary<LanguageId, LanguageInfo> Languages { get; }

		IReadOnlyDictionary<CustomHotspotTableId, CustomHotspotTablesInfo> CustomTables { get; }

		IReadOnlyDictionary<CoreSupportEventMinigameId, ClassicRacesMinigameInfo> ClassicRacesMinigames { get; }

		IReadOnlyDictionary<ClassicRacesEventStageId, ClassicRacesEventStageInfo> ClassicRacesEventStages { get; }

		IReadOnlyDictionary<ProgressionTrackId, ProgressionTrackInfo> ProgressionTracks { get; }

		IReadOnlyDictionary<ExtraSpawnTriggerType, OrderedSet<CoreSupportEventTokenId>> ExtraSpawnTriggerCoreSupportEventTokens { get; }

		IReadOnlyList<InAppProductId> ProgressionEventIAPs { get; }

		IReadOnlyList<InAppProductId> CurrencyBankIAPs { get; }

		ILastNSegmentsConfig LastNSegmentsConfig { get; }

		AutoMergeSettings AutoMergeSettings { get; }

		IRollTheDiceConfig RollTheDiceConfig { get; }

		IBuilderEventConfig BuilderEventConfig { get; }

		IReadOnlyDictionary<PitySystemId, PitySystemRuleInfo> PitySystemRules { get; }

		IReadOnlyDictionary<PitySystemId, PitySystemRuleRequirementsInfo> PitySystemRuleRequirements { get; }

		IReadOnlyDictionary<RequirementId, RequirementInfo> Requirements { get; }

		IReadOnlyDictionary<LocationId, LocationInfo> Locations { get; }

		IReadOnlyDictionary<MergeBoardId, List<HotspotId>> OpenMergeBoardHotspotsByMergeBoard { get; }

		int MaxEnergyModeCount => 0;

		IReadOnlyDictionary<RequirementSetId, RequirementSet> RequirementSets { get; }

		EnergySettingsConfig GetEnergySettingsConfig(EnergyType energyType);

		HotspotDefinition GetHotspotDefinition(HotspotId hotspotId);

		IEnumerable<MergeChainDefinition> GetMergeChainsInCategory(CodexCategoryId categoryId);

		IReadOnlyList<HotspotId> GetHotspotParentTree(HotspotId hotspotId);

		IEnumerable<MergeChainDefinition> GetCodexMergeChains();

		IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRewardItems();

		IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRequirementItemsInfinite();

		IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRequirementItemsDefault();
	}
}
