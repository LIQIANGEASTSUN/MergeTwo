using System;
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
using Metaplay.Core.Config;
using Metaplay.Core.InAppPurchase;
using Metaplay.Core.Localization;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;
using Metaplay.Core.Schedule;
using Player;
using TimedMergeBoards;

namespace GameLogic.Config
{
	public class SharedGameConfig : SharedGameConfigBase, IMergeMansionGameConfig
	{
		[NonSerialized]
		public Lazy<IReadOnlyList<IItemDefinition>> DailyTasksV2AllPossibleRewardItems;

		[NonSerialized]
		public Lazy<IReadOnlyList<IItemDefinition>> DailyTasksV2AllPossibleRequirementItemsInfinite;

		[NonSerialized]
		public Lazy<IReadOnlyList<IItemDefinition>> DailyTasksV2AllPossibleRequirementItemsDefault;

		IReadOnlyDictionary<OfferPlacementId, List<MetaOfferGroupInfoBase>> IMergeMansionGameConfig.MetaOfferGroupsPerPlacementInMostImportantFirstOrder => null;

		IReadOnlyCollection<ConfigLookupValue<IItemDefinition>> IMergeMansionGameConfig.ItemsAvailableOnlyDuringCardCollectionEvent => null;

		IReadOnlyDictionary<MixABoosterEventId, MixABoosterEventInfo> IMergeMansionGameConfig.MixABoosterEvents => null;

		IReadOnlyDictionary<MixABoosterRecipeId, MixABoosterRecipe> IMergeMansionGameConfig.MixABoosterRecipes => null;

		IReadOnlyDictionary<MixABoosterIngredientId, MixABoosterIngredient> IMergeMansionGameConfig.MixABoosterIngredients => null;

		IReadOnlyDictionary<SharedProducerSettingsId, SharedProducerSettings> IMergeMansionGameConfig.SharedProducerSettings => null;

		IReadOnlyDictionary<int, ItemDefinition> IMergeMansionGameConfig.Items => null;

		IReadOnlyDictionary<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo> IMergeMansionGameConfig.CodexDiscoveryRewards => null;

		IReadOnlyDictionary<CodexCategoryId, CodexCategoryInfo> IMergeMansionGameConfig.CodexCategories => null;

		IReadOnlyDictionary<ShopItemId, DynamicPurchaseDefinition> IMergeMansionGameConfig.DynamicPurchaseProducts => null;

		IReadOnlyDictionary<MergeBoardId, TimedMergeBoard> IMergeMansionGameConfig.TimedMergeBoards => null;

		IReadOnlyDictionary<AuthenticationPlatform, SocialAuthenticationConfig> IMergeMansionGameConfig.SocialAuthentication => null;

		IReadOnlyDictionary<GameFeatureId, GameFeatureSetting> IMergeMansionGameConfig.GameFeatures => null;

		IReadOnlyDictionary<MiniEventId, MiniEventInfo> IMergeMansionGameConfig.MiniEvents => null;

		IReadOnlyDictionary<MergeBoardId, BoardInfo> IMergeMansionGameConfig.Boards => null;

		IReadOnlyDictionary<EventLevelId, EventLevelInfo> IMergeMansionGameConfig.EventLevels => null;

		IReadOnlyDictionary<EventLevelSetId, EventLevels> IMergeMansionGameConfig.LevelSets => null;

		IReadOnlyDictionary<EventTaskId, EventTaskInfo> IMergeMansionGameConfig.EventTasks => null;

		IReadOnlyDictionary<int, PlayerLevelData> IMergeMansionGameConfig.PlayerLevels => null;

		IReadOnlyDictionary<HotspotId, HotspotDefinition> IMergeMansionGameConfig.HotspotDefinitions => null;

		IReadOnlyDictionary<DecorationId, DecorationInfo> IMergeMansionGameConfig.Decorations => null;

		IReadOnlyDictionary<StoryDefinitionId, StoryElementInfo> IMergeMansionGameConfig.StoryElements => null;

		IReadOnlyDictionary<DialogItemId, DialogItemInfo> IMergeMansionGameConfig.DialogItems => null;

		IReadOnlyDictionary<MapCharacterEventId, MapCharacterEventDefinition> IMergeMansionGameConfig.MapCharacterEvents => null;

		IReadOnlyDictionary<ShopItemId, ShopItemInfo> IMergeMansionGameConfig.ShopItems => null;

		IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> IMergeMansionGameConfig.GarageFlashSales => null;

		IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> IMergeMansionGameConfig.EventFlashSales => null;

		IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> IMergeMansionGameConfig.GarageFlashSaleGroups => null;

		IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> IMergeMansionGameConfig.EventFlashSaleGroups => null;

		IReadOnlyDictionary<DigEventItemId, DigEventItemInfo> IMergeMansionGameConfig.DigEventItemInfos => null;

		IReadOnlyDictionary<DigEventBoardId, DigEventBoards> IMergeMansionGameConfig.DigEventBoards => null;

		IReadOnlyDictionary<DigEventMuseumShelfId, DigEventMuseumShelfInfo> IMergeMansionGameConfig.DigEventShelves => null;

		IReadOnlyDictionary<DigEventId, DigEventInfo> IMergeMansionGameConfig.DigEvents => null;

		IReadOnlyDictionary<DigEventShinyProgressionId, DigEventShinyProgression> IMergeMansionGameConfig.DigEventShinyProgression => null;

		IReadOnlyDictionary<GarageCleanupEventId, GarageCleanupEventInfo> IMergeMansionGameConfig.GarageCleanupEvents => null;

		IReadOnlyDictionary<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo> IMergeMansionGameConfig.GarageCleanupBoardRows => null;

		IReadOnlyDictionary<GarageCleanupPatternSetId, GarageCleanupPatternSetInfo> IMergeMansionGameConfig.GarageCleanupPatternSets => null;

		IReadOnlyDictionary<GarageCleanupPatternRowId, GarageCleanupPatternRowInfo> IMergeMansionGameConfig.GarageCleanupPatternRows => null;

		IReadOnlyDictionary<GarageCleanupRewardId, GarageCleanupRewardInfo> IMergeMansionGameConfig.GarageCleanupRewards => null;

		IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> IMergeMansionGameConfig.InventorySlots => null;

		IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> IMergeMansionGameConfig.ProducerInventorySlots => null;

		IReadOnlyDictionary<FlashSaleShopSettingsId, FlashSaleShopSettings> IMergeMansionGameConfig.FlashSaleShopSettings => null;

		IReadOnlyDictionary<ShopLayoutId, ShopLayout> IMergeMansionGameConfig.ShopLayouts => null;

		IReadOnlyDictionary<int, SuppressedBuildLogsInfo> IMergeMansionGameConfig.SuppressedWarnings => null;

		IReadOnlyDictionary<OfferPopupTriggerId, OfferPopupTrigger> IMergeMansionGameConfig.OfferPopupTriggers => null;

		IReadOnlyDictionary<MetaOfferId, DelayedOfferPurchaseRequirement> IMergeMansionGameConfig.DelayedOfferPurchaseRequirements => null;

		IReadOnlyDictionary<AddressablesDownloadProcessId, AddressablesDownloadProcess> IMergeMansionGameConfig.AddressablesDownloadProcesses => null;

		IReadOnlyDictionary<CollectibleDialoguesInfoId, CollectibleDialoguesInfo> IMergeMansionGameConfig.CollectibleDialoguesInfo => null;

		IReadOnlyDictionary<LevelUpTutorialConfigId, LevelUpTutorialConfig> IMergeMansionGameConfig.LevelUpTutorialConfig => null;

		IReadOnlyDictionary<ScheduledActionId, ScheduledActionInfo> IMergeMansionGameConfig.ScheduledActions => null;

		IReadOnlyDictionary<CollectibleBoardEventId, CollectibleBoardEventInfo> IMergeMansionGameConfig.CollectibleBoardEvents => null;

		IReadOnlyDictionary<LeaderboardEventId, LeaderboardEventInfo> IMergeMansionGameConfig.LeaderboardEvents => null;

		IReadOnlyDictionary<BoultonLeagueEventId, BoultonLeagueEventInfo> IMergeMansionGameConfig.BoultonLeagueEvents => null;

		IReadOnlyDictionary<BoultonLeagueStageId, BoultonLeagueStageInfo> IMergeMansionGameConfig.BoultonLeagueStages => null;

		IReadOnlyDictionary<DialogCharacterType, DialogueCharacterInfo> IMergeMansionGameConfig.DialogueCharacters => null;

		IReadOnlyDictionary<EventCharacterId, EventCharacterInfo> IMergeMansionGameConfig.EventCharacters => null;

		IReadOnlyDictionary<SocialAuthRewardId, SocialAuthRewardInfo> IMergeMansionGameConfig.SocialAuthRewards => null;

		IReadOnlyDictionary<ReEngagementSettingsId, ReEngagementSettings> IMergeMansionGameConfig.ReEngagementSettings => null;

		IReadOnlyDictionary<CutsceneId, CutsceneInfo> IMergeMansionGameConfig.Cutscenes => null;

		IReadOnlyDictionary<LayeredDecorationSetId, LayeredDecorationSetInfo> IMergeMansionGameConfig.LayeredDecorations => null;

		IReadOnlyDictionary<ProgressionPackId, ProgressionPack> IMergeMansionGameConfig.ProgressionPacks => null;

		IReadOnlyDictionary<MetaOfferId, MakeYourOwnOfferInfo> IMergeMansionGameConfig.MakeYourOwnOffers => null;

		IReadOnlyDictionary<MapSpotId, MapSpotInfo> IMergeMansionGameConfig.MapSpots => null;

		IFishingSettings IMergeMansionGameConfig.FishingSettings => null;

		IReadOnlyDictionary<ProgressionEventStreakId, ProgressionEventStreakRewards> IMergeMansionGameConfig.ProgressionEventStreaks => null;

		IReadOnlyDictionary<SeasonId, SeasonInfo> IMergeMansionGameConfig.Seasons => null;

		IReadOnlyDictionary<MergeChainId, MergeChainDefinition> IMergeMansionGameConfig.MergeChains => null;

		IReadOnlyDictionary<CardCollectionBalanceId, CardCollectionBalanceInfo> IMergeMansionGameConfig.CardCollectionBalanceInfos => null;

		IReadOnlyDictionary<CardCollectionCardId, CardCollectionCardInfo> IMergeMansionGameConfig.CardCollectionCardInfos => null;

		IReadOnlyDictionary<CardCollectionCardSetId, CardCollectionCardSetInfo> IMergeMansionGameConfig.CardCollectionCardSetInfos => null;

		IReadOnlyDictionary<CardCollectionPackId, CardCollectionPackInfo> IMergeMansionGameConfig.CardCollectionPackInfos => null;

		IReadOnlyDictionary<CardCollectionCardActivationId, CardCollectionCardActivationInfo> IMergeMansionGameConfig.CardCollectionCardActivationInfos => null;

		IReadOnlyDictionary<CardCollectionPackActivationId, CardCollectionPackActivationInfo> IMergeMansionGameConfig.CardCollectionPackActivationInfos => null;

		IReadOnlyDictionary<CardCollectionHiddenRarityActivationId, CardCollectionHiddenRarityActivationInfo> IMergeMansionGameConfig.CardCollectionHiddenRarityActivationInfos => null;

		IReadOnlyDictionary<CardCollectionSetActivationId, CardCollectionSetActivationInfo> IMergeMansionGameConfig.CardCollectionSetActivationInfos => null;

		IReadOnlyDictionary<CardCollectionEvidenceBoxId, CardCollectionEvidenceBoxInfo> IMergeMansionGameConfig.CardCollectionEvidenceBoxes => null;

		IReadOnlyDictionary<CardCollectionDuplicateRewardId, CardCollectionDuplicateRewardInfo> IMergeMansionGameConfig.CardCollectionDuplicateCardRewards => null;

		IReadOnlyDictionary<CardCollectionSupportingEventId, CardCollectionSupportingEventInfo> IMergeMansionGameConfig.CardCollectionSupportingEvents => null;

		IReadOnlyDictionary<CardCollectionPackId, CardCollectionSupportingEventReplacementPackInfo> IMergeMansionGameConfig.CardCollectionSupportingEventsReplacementPacks => null;

		IReadOnlyDictionary<CardStackId, CardStackInfo> IMergeMansionGameConfig.CardStacks => null;

		IReadOnlyDictionary<ProgressionEventId, ProgressionEventInfo> IMergeMansionGameConfig.ProgressionEvents => null;

		IReadOnlyDictionary<MetaOfferGroupId, MergeMansionOfferGroupInfo> IMergeMansionGameConfig.OfferGroups => null;

		IReadOnlyDictionary<FallbackPlayerRewardId, FallbackPlayerRewardInfo> IMergeMansionGameConfig.FallbackPlayerRewards => null;

		IReadOnlyDictionary<MetaOfferId, MergeMansionOfferInfo> IMergeMansionGameConfig.Offers => null;

		IReadOnlyDictionary<TemporaryCardCollectionEventId, TemporaryCardCollectionEventInfo> IMergeMansionGameConfig.TemporaryCardCollectionEvents => null;

		IReadOnlyDictionary<PlayerSegmentId, PlayerSegmentInfo> IMergeMansionGameConfig.PlayerSegments => null;

		IReadOnlyDictionary<ShortLeaderboardEventId, ShortLeaderboardEventInfo> IMergeMansionGameConfig.ShortLeaderboardEvents => null;

		IReadOnlyDictionary<CurrencyBankId, CurrencyBankInfo> IMergeMansionGameConfig.CurrencyBanks => null;

		IReadOnlyDictionary<AreaId, AreaInfo> IMergeMansionGameConfig.Areas => null;

		IReadOnlyDictionary<InAppProductId, InAppProductInfo> IMergeMansionGameConfig.InAppProducts => null;

		IReadOnlyDictionary<MergeRewardId, MergeReward> IMergeMansionGameConfig.XpMergeRewards => null;

		IReadOnlyDictionary<SocialMediaId, SocialMediaInfo> IMergeMansionGameConfig.SocialMedia => null;

		IReadOnlyDictionary<RewardContainerId, RewardContainerInfo> IMergeMansionGameConfig.RewardContainers => null;

		IReadOnlyDictionary<MysteryMachineId, MysteryMachineInfo> IMergeMansionGameConfig.MysteryMachines => null;

		IReadOnlyDictionary<int, EnergyModeProgressionEventItemInfo> IMergeMansionGameConfig.EnergyModeProgressionEventItems => null;

		IReadOnlyDictionary<MysteryMachineEventId, MysteryMachineEventInfo> IMergeMansionGameConfig.MysteryMachineEvents => null;

		IReadOnlyDictionary<PlayerModeId, EnergyModeInfo> IMergeMansionGameConfig.EnergyModes => null;

		IReadOnlyDictionary<MergeChainId, DailyTasksV2MergeChainInfo> IMergeMansionGameConfig.DailyTasksV2MergeChains => null;

		IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, MysteryMachineLeaderboardConfigInfo> IMergeMansionGameConfig.MysteryMachineLeaderboardConfigs => null;

		IReadOnlyDictionary<LocationTravelId, LocationTravelInfo> IMergeMansionGameConfig.LocationTravels => null;

		IReadOnlyDictionary<PetId, PetInfo> IMergeMansionGameConfig.PetInfos => null;

		IReadOnlyDictionary<SoloMilestoneEventId, SoloMilestoneEventInfo> IMergeMansionGameConfig.SoloMilestoneEvents => null;

		IReadOnlyDictionary<DailyScoopEventId, DailyScoopEventInfo> IMergeMansionGameConfig.DailyScoopEvents => null;

		IReadOnlyDictionary<int, ExtraSpawnItemValueInfo> IMergeMansionGameConfig.ExtraSpawnItemValues => null;

		IReadOnlyDictionary<Currencies, ExtraSpawnCurrencyValueInfo> IMergeMansionGameConfig.ExtraSpawnCurrencyValues => null;

		IReadOnlyDictionary<CardStackId, ExtraSpawnCardStackValueInfo> IMergeMansionGameConfig.ExtraSpawnCardStackValues => null;

		IReadOnlyDictionary<CustomHotspotTableId, ExtraSpawnIllustrationValueInfo> IMergeMansionGameConfig.ExtraSpawnIllustrationValues => null;

		IReadOnlyDictionary<EnergyModeEventId, EnergyModeEventInfo> IMergeMansionGameConfig.EnergyModeEvents => null;

		IReadOnlyDictionary<DecorationShopId, DecorationShopInfo> IMergeMansionGameConfig.DecorationShops => null;

		IReadOnlyDictionary<DailyTaskId, DailyTaskDefinition> IMergeMansionGameConfig.DailyTasks => null;

		IReadOnlyDictionary<MysteryMachineSpecialSaleId, MysteryMachineSpecialSaleInfo> IMergeMansionGameConfig.MysteryMachineSpecialSales => null;

		IReadOnlyDictionary<BubblesSetupId, BubblesSetup> IMergeMansionGameConfig.BubbleSetups => null;

		IReadOnlyDictionary<ProgressionPackEventId, ProgressionPackEventInfo> IMergeMansionGameConfig.ProgressionPackEvents => null;

		IReadOnlyDictionary<CoreSupportEventId, CoreSupportEventInfo> IMergeMansionGameConfig.CoreSupportEvents => null;

		IReadOnlyDictionary<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo> IMergeMansionGameConfig.MysteryMachineCurrencyItemChains => null;

		IReadOnlyDictionary<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo> IMergeMansionGameConfig.MysteryMachineCurrencyItems => null;

		IReadOnlyDictionary<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo> IMergeMansionGameConfig.MysteryMachineExtraItemGranting => null;

		IReadOnlyDictionary<MysteryMachineChainMultiplierId, MysteryMachineChainMultiplierInfo> IMergeMansionGameConfig.MysteryMachineChainMultipliers => null;

		IReadOnlyDictionary<MysteryMachineItemScoreId, MysteryMachineItemScore> IMergeMansionGameConfig.MysteryMachineItemScores => null;

		IReadOnlyDictionary<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo> IMergeMansionGameConfig.MysteryMachineSpecialItems => null;

		IReadOnlyDictionary<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo> IMergeMansionGameConfig.MysteryMachineProgressionEventProgressItemChains => null;

		IReadOnlyDictionary<ItemTypeConstant, DailyTasksV2ItemBoultonLeagueInfo> IMergeMansionGameConfig.DailyTasksV2ItemsBoultonLeague => null;

		IReadOnlyDictionary<DailyScoopDayId, DailyScoopDayData> IMergeMansionGameConfig.DailyScoopDays => null;

		IReadOnlyDictionary<DailyScoopWeekId, DailyScoopWeekData> IMergeMansionGameConfig.DailyScoopWeeks => null;

		IReadOnlyDictionary<DailyScoopMilestoneId, DailyScoopMilestoneData> IMergeMansionGameConfig.DailyScoopMilestones => null;

		IReadOnlyDictionary<DailyScoopSpecialObjectiveId, DailyScoopSpecialObjectiveData> IMergeMansionGameConfig.DailyScoopSpecialObjectives => null;

		IReadOnlyDictionary<DailyScoopStandardObjectiveId, DailyScoopStandardObjectiveData> IMergeMansionGameConfig.DailyScoopStandardObjectives => null;

		IDailyChallengesEventConfig IMergeMansionGameConfig.DailyChallengesEventConfig => null;

		IReadOnlyDictionary<SoloMilestoneTokenSpawnsId, SoloMilestoneTokenSpawnsInfo> IMergeMansionGameConfig.SoloMilestoneTokenSpawns => null;

		IReadOnlyDictionary<ShortLeaderboardEventStageId, ShortLeaderboardEventStageInfo> IMergeMansionGameConfig.ShortLeaderboardEventStages => null;

		IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueInfo> IMergeMansionGameConfig.DailyTasksV2BoultonLeague => null;

		IReadOnlyDictionary<EnergyType, EnergySettingsConfig> IMergeMansionGameConfig.EnergySettings => null;

		IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2Info> IMergeMansionGameConfig.DailyTasksV2 => null;

		IReadOnlyDictionary<AreasGlobalUnlockRequirementId, AreasGlobalUnlockRequirementInfo> IMergeMansionGameConfig.AreasGlobalUnlockRequirements => null;

		IReadOnlyDictionary<SoloMilestoneMilestonesId, SoloMilestoneMilestonesInfo> IMergeMansionGameConfig.SoloMilestoneMilestones => null;

		IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueUnlimitedInfo> IMergeMansionGameConfig.DailyTasksV2BoultonLeagueUnlimited => null;

		IReadOnlyDictionary<RentableInventorySettingsId, RentableInventorySettings> IMergeMansionGameConfig.RentableInventorySettings => null;

		IReadOnlyDictionary<DigEventMuseumCollectionId, DigEventMuseumCollectionInfo> IMergeMansionGameConfig.DigEventMuseumCollections => null;

		IReadOnlyDictionary<DecorationShopItemId, DecorationShopItemInfo> IMergeMansionGameConfig.DecorationShopItems => null;

		IReadOnlyDictionary<MysteryMachineItemId, MysteryMachineItemInfo> IMergeMansionGameConfig.MysteryMachineItems => null;

		IReadOnlyDictionary<MysteryMachineItemSetId, MysteryMachineItemSetInfo> IMergeMansionGameConfig.MysteryMachineItemSets => null;

		IReadOnlyDictionary<MysteryMachineMultiplierId, MysteryMachineMultiplierInfo> IMergeMansionGameConfig.MysteryMachineMultipliers => null;

		IReadOnlyDictionary<string, ExtraSpawnInfo> IMergeMansionGameConfig.ExtraSpawns => null;

		IReadOnlyDictionary<BubbleVariationId, BubbleVariantsDefinition> IMergeMansionGameConfig.BubbleVariations => null;

		IReadOnlyDictionary<OrderRequirementsId, OrderRequirements> IMergeMansionGameConfig.OrderRequirements => null;

		IReadOnlyDictionary<string, TagRewardsInfo> IMergeMansionGameConfig.TagRewards => null;

		IReadOnlyDictionary<string, MMPlaylist> IMergeMansionGameConfig.Playlists => null;

		IReadOnlyDictionary<VideoId, Video> IMergeMansionGameConfig.Videos => null;

		IReadOnlyDictionary<SlideShowId, SlideShow> IMergeMansionGameConfig.SlideShows => null;

		IReadOnlyDictionary<LanguageId, LanguageInfo> IMergeMansionGameConfig.Languages => null;

		IReadOnlyDictionary<CustomHotspotTableId, CustomHotspotTablesInfo> IMergeMansionGameConfig.CustomTables => null;

		IReadOnlyDictionary<CoreSupportEventMinigameId, ClassicRacesMinigameInfo> IMergeMansionGameConfig.ClassicRacesMinigames => null;

		IReadOnlyDictionary<ClassicRacesEventStageId, ClassicRacesEventStageInfo> IMergeMansionGameConfig.ClassicRacesEventStages => null;

		IReadOnlyDictionary<ProgressionTrackId, ProgressionTrackInfo> IMergeMansionGameConfig.ProgressionTracks => null;

		IReadOnlyDictionary<ExtraSpawnTriggerType, OrderedSet<CoreSupportEventTokenId>> IMergeMansionGameConfig.ExtraSpawnTriggerCoreSupportEventTokens => null;

		IRollTheDiceConfig IMergeMansionGameConfig.RollTheDiceConfig => null;

		IBuilderEventConfig IMergeMansionGameConfig.BuilderEventConfig => null;

		IReadOnlyDictionary<PitySystemId, PitySystemRuleInfo> IMergeMansionGameConfig.PitySystemRules => null;

		IReadOnlyDictionary<PitySystemId, PitySystemRuleRequirementsInfo> IMergeMansionGameConfig.PitySystemRuleRequirements => null;

		IReadOnlyDictionary<RequirementId, RequirementInfo> IMergeMansionGameConfig.Requirements => null;

		IReadOnlyDictionary<RequirementSetId, RequirementSet> IMergeMansionGameConfig.RequirementSets => null;

		IReadOnlyDictionary<LocationId, LocationInfo> IMergeMansionGameConfig.Locations => null;

		[GameConfigEntry("Languages", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "LanguageId -> LanguageId #key" }, null, false)]
		public GameConfigLibrary<LanguageId, LanguageInfo> Languages { get; set; }

		[GameConfigEntry("InAppProducts", true, null)]
		[GameConfigEntryTransform(typeof(InAppProductConfigSource))]
		[GameConfigSyntaxAdapter(new string[] { "ProductId -> ProductId #key" }, null, false)]
		public GameConfigLibrary<InAppProductId, InAppProductInfo> InAppProducts { get; set; }

		[GameConfigEntry("PlayerSegments", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "SegmentId -> SegmentId #key" }, null, false)]
		[GameConfigEntryTransform(typeof(PlayerSegmentInfoSourceItem))]
		public GameConfigLibrary<PlayerSegmentId, PlayerSegmentInfo> PlayerSegments { get; set; }

		[GameConfigEntry("Offers", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "OfferId -> OfferId #key" }, null, false)]
		[GameConfigEntryTransform(typeof(MergeMansionOfferSourceConfigItem))]
		public GameConfigLibrary<MetaOfferId, MergeMansionOfferInfo> Offers { get; set; }

		[GameConfigEntry("TieredOfferItems", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "OfferId -> OfferId #key" }, null, false)]
		[GameConfigEntryTransform(typeof(MergeMansionOfferSourceConfigItem))]
		public GameConfigLibrary<MetaOfferId, MergeMansionOfferInfo> TieredOfferItems { get; set; }

		[GameConfigEntry("OfferGroups", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "GroupId -> GroupId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		[GameConfigEntryTransform(typeof(MergeMansionOfferGroupSourceItem))]
		public GameConfigLibrary<MetaOfferGroupId, MergeMansionOfferGroupInfo> OfferGroups { get; set; }

		[GameConfigEntry("Items", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "SequenceId -> SequenceId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "ItemKey -> ItemKey #key" }, null, false)]
		public GameConfigLibrary<int, ItemDefinition> Items { get; set; }

		[GameConfigEntry("MergeChains", true, null)]
		[GameConfigEntryTransform(typeof(MergeChainSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MergeChainId, MergeChainDefinition> MergeChains { get; set; }

		[GameConfigEntry("CodexDiscoveryRewards", true, null)]
		[GameConfigEntryTransform(typeof(CodexDiscoveryRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo> CodexDiscoveryRewards { get; set; }

		[GameConfigEntry("CodexCategories", true, null)]
		[GameConfigEntryTransform(typeof(CodexCategorySource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CodexCategoryId, CodexCategoryInfo> CodexCategories { get; set; }

		[GameConfigEntry("DynamicPurchaseProducts", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ShopItemId -> ShopItemId #key" }, null, false)]
		[GameConfigEntryTransform(typeof(DynamicPurchaseDefinitionSource))]
		public GameConfigLibrary<ShopItemId, DynamicPurchaseDefinition> DynamicPurchaseProducts { get; set; }

		[GameConfigEntry("TimedMergeBoards", true, null)]
		[GameConfigEntryTransform(typeof(TimedMergeBoardSource))]
		[GameConfigSyntaxAdapter(new string[] { "EventId -> EventId #key" }, null, false)]
		public GameConfigLibrary<MergeBoardId, TimedMergeBoard> TimedMergeBoards { get; set; }

		[GameConfigEntry("SocialAuthentication", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "AuthenticationPlatformId -> AuthenticationPlatformId #key" }, null, false)]
		public GameConfigLibrary<AuthenticationPlatform, SocialAuthenticationConfig> SocialAuthentication { get; set; }

		[GameConfigEntry("GameFeatures", true, null)]
		[GameConfigEntryTransform(typeof(GameFeatureSettingSource))]
		[GameConfigSyntaxAdapter(new string[] { "GameFeatureId -> GameFeatureId #key" }, null, false)]
		public GameConfigLibrary<GameFeatureId, GameFeatureSetting> GameFeatures { get; set; }

		[GameConfigEntry("MiniEvents", true, null)]
		[GameConfigEntryTransform(typeof(MiniEventConfigSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> MiniEventId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<MiniEventId, MiniEventInfo> MiniEvents { get; set; }

		[GameConfigEntry("Boards", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "BoardId -> BoardId #key" }, null, false)]
		public GameConfigLibrary<MergeBoardId, BoardInfo> Boards { get; set; }

		[GameConfigEntry("EventLevels", true, null)]
		[GameConfigEntryTransform(typeof(EventLevelInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "EventLevelId -> EventLevelId #key" }, null, false)]
		public GameConfigLibrary<EventLevelId, EventLevelInfo> EventLevels { get; set; }

		[GameConfigEntry("EventLevelSets", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "SetId -> SetId #key" }, null, false)]
		public GameConfigLibrary<EventLevelSetId, EventLevels> LevelSets { get; set; }

		[GameConfigEntry("EventTasks", true, null)]
		[GameConfigEntryTransform(typeof(EventTaskConfigSourceItem))]
		[GameConfigSyntaxAdapter(new string[] { "EventTaskId -> EventTaskId #key" }, null, false)]
		public GameConfigLibrary<EventTaskId, EventTaskInfo> EventTasks { get; set; }

		[GameConfigEntry("PlayerLevels", true, null)]
		[GameConfigEntryTransform(typeof(PlayerLevelDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "LevelKey -> LevelKey #key" }, null, false)]
		public GameConfigLibrary<int, PlayerLevelData> PlayerLevels { get; set; }

		[GameConfigEntry("HotspotDefinitions", true, null)]
		[GameConfigEntryTransform(typeof(HotspotDefinitionSource))]
		[GameConfigSyntaxAdapter(new string[] { "HotspotId -> HotspotId #key" }, null, false)]
		public GameConfigLibrary<HotspotId, HotspotDefinition> HotspotDefinitions { get; set; }

		[GameConfigEntry("Decorations", true, null)]
		[GameConfigEntryTransform(typeof(DecorationInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "DecorationId -> DecorationId #key" }, null, false)]
		public GameConfigLibrary<DecorationId, DecorationInfo> Decorations { get; set; }

		[GameConfigEntry("StoryDefinitions", true, null)]
		[GameConfigEntryTransform(typeof(StoryElementInfoSourceItem))]
		[GameConfigSyntaxAdapter(new string[] { "StoryDefinitionId -> StoryDefinitionId #key" }, null, false)]
		public GameConfigLibrary<StoryDefinitionId, StoryElementInfo> StoryElements { get; set; }

		[GameConfigEntry("DialogItems", true, null)]
		[GameConfigEntryTransform(typeof(DialogItemInfoSourceItem))]
		[GameConfigSyntaxAdapter(new string[] { "DialogItemId -> DialogItemId #key" }, null, false)]
		public GameConfigLibrary<DialogItemId, DialogItemInfo> DialogItems { get; set; }

		[GameConfigEntry("MapCharacterEvents", true, null)]
		[GameConfigEntryTransform(typeof(MapCharacterEventDefinitionSource))]
		[GameConfigSyntaxAdapter(new string[] { "MapCharacterEventId -> MapCharacterEventId #key" }, null, false)]
		public GameConfigLibrary<MapCharacterEventId, MapCharacterEventDefinition> MapCharacterEvents { get; set; }

		[GameConfigEntry("ShopItems", true, null)]
		[GameConfigEntryTransform(typeof(ShopItemInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ShopItemId -> ShopItemId #key" }, null, false)]
		public GameConfigLibrary<ShopItemId, ShopItemInfo> ShopItems { get; set; }

		[GameConfigEntry("FlashSales", true, null)]
		[GameConfigEntryTransform(typeof(FlashSaleSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ShopItemId, FlashSaleDefinition> GarageFlashSales { get; set; }

		[GameConfigEntry("EventFlashSales", true, null)]
		[GameConfigEntryTransform(typeof(FlashSaleSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ShopItemId, FlashSaleDefinition> EventFlashSales { get; set; }

		[GameConfigEntry("FlashSaleGroups", true, null)]
		[GameConfigEntryTransform(typeof(FlashSalesGroupSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<FlashSaleGroupId, FlashSaleGroupDefinition> GarageFlashSaleGroups { get; set; }

		[GameConfigEntry("EventFlashSaleGroups", true, null)]
		[GameConfigEntryTransform(typeof(FlashSalesGroupSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<FlashSaleGroupId, FlashSaleGroupDefinition> EventFlashSaleGroups { get; set; }

		[GameConfigEntry("DigEventItemInfo", true, null)]
		[GameConfigEntryTransform(typeof(DigEventItemSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DigEventItemId, DigEventItemInfo> DigEventItemInfos { get; set; }

		[GameConfigEntry("DigEventBoards", true, null)]
		[GameConfigEntryTransform(typeof(DigEventBoardsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DigEventBoardId, DigEventBoards> DigEventBoards { get; set; }

		[GameConfigEntry("DigEventMuseumCollection", true, null)]
		[GameConfigEntryTransform(typeof(DigEventMuseumCollectionSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DigEventMuseumCollectionId, DigEventMuseumCollectionInfo> DigEventMuseumCollections { get; set; }

		[GameConfigEntry("DigEventMuseumShelf", true, null)]
		[GameConfigEntryTransform(typeof(DigEventMuseumShelfSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DigEventMuseumShelfId, DigEventMuseumShelfInfo> DigEventShelves { get; set; }

		[GameConfigEntry("DigEventInfo", true, null)]
		[GameConfigEntryTransform(typeof(DigEventInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DigEventId, DigEventInfo> DigEvents { get; set; }

		[GameConfigEntry("DigEventShinyProgression", true, null)]
		[GameConfigEntryTransform(typeof(DigEventShinyProgressionSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DigEventShinyProgressionId, DigEventShinyProgression> DigEventShinyProgression { get; set; }

		[GameConfigEntry("MixABoosterEvent", true, null)]
		[GameConfigEntryTransform(typeof(MixABoosterEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<MixABoosterEventId, MixABoosterEventInfo> MixABoosterEvents { get; set; }

		[GameConfigEntry("MixABoosterRecipes", true, null)]
		[GameConfigEntryTransform(typeof(MixABoosterRecipeSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MixABoosterRecipeId, MixABoosterRecipe> MixABoosterRecipes { get; set; }

		[GameConfigEntry("MixABoosterIngredients", true, null)]
		[GameConfigEntryTransform(typeof(MixABoosterIngredientSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MixABoosterIngredientId, MixABoosterIngredient> MixABoosterIngredients { get; set; }

		public IReadOnlyDictionary<HotspotId, IEnumerable<HotspotDefinition>> HotspotOpensAfterCompletion { get; set; }

		[GameConfigEntry("GarageCleanupEvents", true, null)]
		[GameConfigEntryTransform(typeof(GarageCleanupEventSourceConfigItem))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<GarageCleanupEventId, GarageCleanupEventInfo> GarageCleanupEvents { get; set; }

		[GameConfigEntry("GarageCleanupBoardRows", true, null)]
		[GameConfigEntryTransform(typeof(GarageCleanupBoardRowSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key", "RowNumber -> RowNumber #key" }, null, false)]
		public GameConfigLibrary<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo> GarageCleanupBoardRows { get; set; }

		[GameConfigEntry("GarageCleanupPatternSets", true, null)]
		[GameConfigEntryTransform(typeof(GarageCleanupPatternSetSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<GarageCleanupPatternSetId, GarageCleanupPatternSetInfo> GarageCleanupPatternSets { get; set; }

		[GameConfigEntry("GarageCleanupPatternRows", true, null)]
		[GameConfigEntryTransform(typeof(GarageCleanupPatternRowSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key", "RowNumber -> RowNumber #key" }, null, false)]
		public GameConfigLibrary<GarageCleanupPatternRowId, GarageCleanupPatternRowInfo> GarageCleanupPatternRows { get; set; }

		[GameConfigEntry("GarageCleanupRewards", true, null)]
		[GameConfigEntryTransform(typeof(GarageCleanupRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<GarageCleanupRewardId, GarageCleanupRewardInfo> GarageCleanupRewards { get; set; }

		[GameConfigEntry("SharedGlobals", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public SharedGlobals SharedGlobals { get; set; }

		[GameConfigEntry("InventorySlots", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<InventorySlotId, InventorySlotsConfig> InventorySlots { get; set; }

		[GameConfigEntry("ProducerInventorySlots", true, null)]
		[GameConfigEntryTransform(typeof(ProducerInventorySlotSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ProducerInventorySlotId, ProducerInventorySlotConfig> ProducerInventorySlots { get; set; }

		[GameConfigEntry("FlashSaleShopSettings", true, null)]
		[GameConfigEntryTransform(typeof(FlashSaleShopSettingsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<FlashSaleShopSettingsId, FlashSaleShopSettings> FlashSaleShopSettings { get; set; }

		[GameConfigEntry("ShopLayouts", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ShopLayoutId, ShopLayout> ShopLayouts { get; set; }

		[GameConfigEntry("DailyTasks", true, null)]
		[GameConfigEntryTransform(typeof(DailyTaskSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyTaskId, DailyTaskDefinition> DailyTasks { get; set; }

		[GameConfigEntry("DailyTasksV2", true, null)]
		[GameConfigEntryTransform(typeof(DailyTaskV2Source))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyTaskV2Id, DailyTaskV2Info> DailyTasksV2 { get; set; }

		[GameConfigEntry("DailyTasksV2BoultonLeague", true, null)]
		[GameConfigEntryTransform(typeof(DailyTaskV2BoultonLeagueSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyTaskV2Id, DailyTaskV2BoultonLeagueInfo> DailyTasksV2BoultonLeague { get; set; }

		[GameConfigEntry("DailyTasksV2BoultonLeagueUnlimited", true, null)]
		[GameConfigEntryTransform(typeof(DailyTaskV2BoultonLeagueUnlimitedSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyTaskV2Id, DailyTaskV2BoultonLeagueUnlimitedInfo> DailyTasksV2BoultonLeagueUnlimited { get; set; }

		[GameConfigEntry("DailyTasksV2MergeChains", true, null)]
		[GameConfigEntryTransform(typeof(DailyTasksV2MergeChainSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MergeChainId, DailyTasksV2MergeChainInfo> DailyTasksV2MergeChains { get; set; }

		[GameConfigEntry("DailyTasksV2ItemsBoultonLeague", true, null)]
		[GameConfigEntryTransform(typeof(DailyTasksV2ItemBoultonLeagueSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ItemTypeConstant, DailyTasksV2ItemBoultonLeagueInfo> DailyTasksV2ItemsBoultonLeague { get; set; }

		[GameConfigEntry("DailyTasksV2Settings", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public DailyTasksV2Settings DailyTasksV2Settings { get; set; }

		[GameConfigEntry("DailyTasksV2CompletionRewards", true, null)]
		[GameConfigEntryTransform(typeof(DailyTasksV2CompletionRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyTasksV2CompletionRewardId, DailyTasksV2CompletionRewardInfo> DailyTasksV2CompletionRewards { get; set; }

		[GameConfigEntry("Videos", true, null)]
		[GameConfigEntryTransform(typeof(VideoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<VideoId, Video> Videos { get; set; }

		[GameConfigEntry("Music_Tracks", true, null)]
		[GameConfigEntryTransform(typeof(MMTrackSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<string, MMTrack> Tracks { get; set; }

		[GameConfigEntry("Music_Playlists", true, null)]
		[GameConfigEntryTransform(typeof(MMPlaylistSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<string, MMPlaylist> Playlists { get; set; }

		[GameConfigEntry("SlideShows", true, null)]
		[GameConfigEntryTransform(typeof(SlideShowSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<SlideShowId, SlideShow> SlideShows { get; set; }

		[GameConfigEntry("BubbleSetups", true, null)]
		[GameConfigEntryTransform(typeof(BubblesSetupSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BubblesSetupId, BubblesSetup> BubbleSetups { get; set; }

		[GameConfigEntry("WebShopSettings", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public WebShopSettings WebShopSettings { get; set; }

		[GameConfigEntry("BubbleVariants", true, null)]
		[GameConfigEntryTransform(typeof(BubbleVariationSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BubbleVariationId, BubbleVariantsDefinition> BubbleVariations { get; set; }

		[GameConfigEntry("Areas", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<AreaId, AreaInfo> Areas { get; set; }

		[GameConfigEntry("ProgressionEvents", true, null)]
		[GameConfigEntryTransform(typeof(ProgressionEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "EventId -> EventId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<ProgressionEventId, ProgressionEventInfo> ProgressionEvents { get; set; }

		[GameConfigEntry("ProgressionEventPerks", true, null)]
		[GameConfigEntryTransform(typeof(ProgressionEventPerkSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ProgressionEventPerkId, ProgressionEventPerkInfo> ProgressionEventPerks { get; set; }

		[GameConfigEntry("CurrencyBank", true, null)]
		[GameConfigEntryTransform(typeof(CurrencyBankSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<CurrencyBankId, CurrencyBankInfo> CurrencyBanks { get; set; }

		[GameConfigEntry("MergeRewards", true, null)]
		[GameConfigEntryTransform(typeof(MergeRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MergeRewardId, MergeReward> XpMergeRewards { get; set; }

		[GameConfigEntry("SocialMedia", true, null)]
		[GameConfigEntryTransform(typeof(SocialMediaSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<SocialMediaId, SocialMediaInfo> SocialMedia { get; set; }

		[GameConfigEntry("SuppressedWarnings", true, null)]
		[GameConfigEntryTransform(typeof(SuppressedWarningsSource))]
		[GameConfigSyntaxAdapter(new string[] { "RuleId -> RuleId #key" }, null, false)]
		public GameConfigLibrary<int, SuppressedBuildLogsInfo> SuppressedWarnings { get; set; }

		[GameConfigEntry("OfferPopupTriggers", true, null)]
		[GameConfigEntryTransform(typeof(OfferPopupTriggerSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<OfferPopupTriggerId, OfferPopupTrigger> OfferPopupTriggers { get; set; }

		[GameConfigEntry("OfferPurchaseRequirements", true, null)]
		[GameConfigEntryTransform(typeof(DelayedOfferPurchaseRequirementSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MetaOfferId, DelayedOfferPurchaseRequirement> DelayedOfferPurchaseRequirements { get; set; }

		[GameConfigEntry("AddressablesDownloadProcesses", true, null)]
		[GameConfigEntryTransform(typeof(AddressablesDownloadProcessSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<AddressablesDownloadProcessId, AddressablesDownloadProcess> AddressablesDownloadProcesses { get; set; }

		[GameConfigEntry("CollectibleDialoguesInfo", true, null)]
		[GameConfigEntryTransform(typeof(CollectibleDialoguesSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CollectibleDialoguesInfoId, CollectibleDialoguesInfo> CollectibleDialoguesInfo { get; set; }

		[GameConfigEntry("LevelUpTutorialConfig", true, null)]
		[GameConfigEntryTransform(typeof(LevelUpTutorialConfigSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigId -> ConfigId #key" }, null, false)]
		public GameConfigLibrary<LevelUpTutorialConfigId, LevelUpTutorialConfig> LevelUpTutorialConfig { get; set; }

		[GameConfigEntry("ScheduledActions", true, null)]
		[GameConfigEntryTransform(typeof(ScheduledActionSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<ScheduledActionId, ScheduledActionInfo> ScheduledActions { get; set; }

		[GameConfigEntry("CollectibleBoardEvents", true, null)]
		[GameConfigEntryTransform(typeof(CollectibleBoardEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "EventId -> EventId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<CollectibleBoardEventId, CollectibleBoardEventInfo> CollectibleBoardEvents { get; set; }

		[GameConfigEntry("LeaderboardEvents", true, null)]
		[GameConfigEntryTransform(typeof(LeaderboardEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "EventId -> EventId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<LeaderboardEventId, LeaderboardEventInfo> LeaderboardEvents { get; set; }

		[GameConfigEntry("BoultonLeagueEvents", true, null)]
		[GameConfigEntryTransform(typeof(BoultonLeagueEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<BoultonLeagueEventId, BoultonLeagueEventInfo> BoultonLeagueEvents { get; set; }

		[GameConfigEntry("BoultonLeagueStages", true, null)]
		[GameConfigEntryTransform(typeof(BoultonLeagueStageSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BoultonLeagueStageId, BoultonLeagueStageInfo> BoultonLeagueStages { get; set; }

		[GameConfigEntry("DialogueCharacters", true, null)]
		[GameConfigEntryTransform(typeof(DialogueCharacterSource))]
		[GameConfigSyntaxAdapter(new string[] { "DialogCharacterType -> DialogCharacterType #key" }, null, false)]
		public GameConfigLibrary<DialogCharacterType, DialogueCharacterInfo> DialogueCharacters { get; set; }

		[GameConfigEntry("EventCharacters", true, null)]
		[GameConfigEntryTransform(typeof(EventCharacterInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "EventCharacterId -> EventCharacterId #key" }, null, false)]
		public GameConfigLibrary<EventCharacterId, EventCharacterInfo> EventCharacters { get; set; }

		[GameConfigEntry("SocialAuthRewards", true, null)]
		[GameConfigEntryTransform(typeof(SocialAuthRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "SocialAuthRewardId -> SocialAuthRewardId #key" }, null, false)]
		public GameConfigLibrary<SocialAuthRewardId, SocialAuthRewardInfo> SocialAuthRewards { get; set; }

		[GameConfigEntry("ReEngagementSettings", true, null)]
		[GameConfigEntryTransform(typeof(ReEngagementSettingsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ReEngagementSettingsId, ReEngagementSettings> ReEngagementSettings { get; set; }

		[GameConfigEntry("Cutscenes", true, null)]
		[GameConfigEntryTransform(typeof(CutsceneInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "CutsceneId -> CutsceneId #key" }, null, false)]
		public GameConfigLibrary<CutsceneId, CutsceneInfo> Cutscenes { get; set; }

		[GameConfigEntry("LayeredDecorations", true, null)]
		[GameConfigEntryTransform(typeof(LayeredDecorationSetSource))]
		[GameConfigSyntaxAdapter(new string[] { "SetId -> SetId #key" }, null, false)]
		public GameConfigLibrary<LayeredDecorationSetId, LayeredDecorationSetInfo> LayeredDecorations { get; set; }

		[GameConfigEntry("ProgressionPacks", true, null)]
		[GameConfigEntryTransform(typeof(ProgressionPackSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ProgressionPackId, ProgressionPack> ProgressionPacks { get; set; }

		[GameConfigEntry("MakeYourOwnOffers", true, null)]
		[GameConfigEntryTransform(typeof(MakeYourOwnOfferSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MetaOfferId, MakeYourOwnOfferInfo> MakeYourOwnOffers { get; set; }

		[GameConfigEntry("MapSpots", true, null)]
		[GameConfigEntryTransform(typeof(MapSpotSource))]
		[GameConfigSyntaxAdapter(new string[] { "MapSpotId -> MapSpotId #key" }, null, false)]
		public GameConfigLibrary<MapSpotId, MapSpotInfo> MapSpots { get; set; }

		[GameConfigEntry("FishingSettings", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public FishingSettings FishingSettings { get; set; }

		[GameConfigEntry("ProgressionEventStreaks", true, null)]
		[GameConfigEntryTransform(typeof(ProgressionEventStreakRewardsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ProgressionEventStreakId, ProgressionEventStreakRewards> ProgressionEventStreaks { get; set; }

		[GameConfigEntry("Seasons", true, null)]
		[GameConfigEntryTransform(typeof(SeasonInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "SeasonId -> SeasonId #key" }, null, false)]
		public GameConfigLibrary<SeasonId, SeasonInfo> Seasons { get; set; }

		[GameConfigEntry("RentableInventorySettings", true, null)]
		[GameConfigEntryTransform(typeof(RentableInventorySettingsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RentableInventorySettingsId, RentableInventorySettings> RentableInventorySettings { get; set; }

		[GameConfigEntry("PetInfos", true, null)]
		[GameConfigEntryTransform(typeof(PetInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<PetId, PetInfo> PetInfos { get; set; }

		[GameConfigEntry("DecorationShops", true, null)]
		[GameConfigEntryTransform(typeof(DecorationShopSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<DecorationShopId, DecorationShopInfo> DecorationShops { get; set; }

		[GameConfigEntry("DecorationShopSets", true, null)]
		[GameConfigEntryTransform(typeof(DecorationShopSetSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DecorationShopSetId, DecorationShopSetInfo> DecorationShopSets { get; set; }

		[GameConfigEntry("DecorationShopItems", true, null)]
		[GameConfigEntryTransform(typeof(DecorationShopItemSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DecorationShopItemId, DecorationShopItemInfo> DecorationShopItems { get; set; }

		[GameConfigEntry("EnergyModes", true, null)]
		[GameConfigEntryTransform(typeof(EnergyModeSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<PlayerModeId, EnergyModeInfo> EnergyModes { get; set; }

		[GameConfigEntry("EnergyModeProgressionEventItems", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<int, EnergyModeProgressionEventItemInfo> EnergyModeProgressionEventItems { get; set; }

		[GameConfigEntry("CardStacks", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardStackId, CardStackInfo> CardStacks { get; set; }

		[GameConfigEntry("LocationTravels", true, null)]
		[GameConfigEntryTransform(typeof(LocationTravelSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<LocationTravelId, LocationTravelInfo> LocationTravels { get; set; }

		[GameConfigEntry("ItemsInPocket", true, null)]
		[GameConfigEntryTransform(typeof(ItemInPocketInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<ItemInPocketId, ItemInPocketInfo> ItemInPocketInfos { get; set; }

		[GameConfigEntry("TemporaryCardCollectionEvents", true, null)]
		[GameConfigEntryTransform(typeof(TemporaryCardCollectionEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<TemporaryCardCollectionEventId, TemporaryCardCollectionEventInfo> TemporaryCardCollectionEvents { get; set; }

		[GameConfigEntry("CardCollection_SupportingEvents", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionSupportingEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<CardCollectionSupportingEventId, CardCollectionSupportingEventInfo> CardCollectionSupportingEvents { get; set; }

		[GameConfigEntry("CardCollection_SupportingEvents_Packs", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionSupportingEventReplacementPackSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionPackId, CardCollectionSupportingEventReplacementPackInfo> CardCollectionSupportingEventsReplacementPacks { get; set; }

		[GameConfigEntry("MysteryMachineEvents", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<MysteryMachineEventId, MysteryMachineEventInfo> MysteryMachineEvents { get; set; }

		[GameConfigEntry("MysteryMachineItemSets", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineItemSetSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineItemSetId, MysteryMachineItemSetInfo> MysteryMachineItemSets { get; set; }

		[GameConfigEntry("MysteryMachineItems", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineItemSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineItemId, MysteryMachineItemInfo> MysteryMachineItems { get; set; }

		[GameConfigEntry("MysteryMachineItemScores", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineItemScoreSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineItemScoreId, MysteryMachineItemScore> MysteryMachineItemScores { get; set; }

		[GameConfigEntry("MysteryMachineSpecialItems", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineSpecialItemSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo> MysteryMachineSpecialItems { get; set; }

		[GameConfigEntry("MysteryMachineItemChainMultipliers", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineChainMultiplierSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineChainMultiplierId, MysteryMachineChainMultiplierInfo> MysteryMachineChainMultipliers { get; set; }

		[GameConfigEntry("MysteryMachineExtraItemGranting", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineExtraItemGrantingSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo> MysteryMachineExtraItemGranting { get; set; }

		[GameConfigEntry("MysteryMachineMultipliers", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineMultiplierSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineMultiplierId, MysteryMachineMultiplierInfo> MysteryMachineMultipliers { get; set; }

		[GameConfigEntry("MergeMysteryMachines", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineId, MysteryMachineInfo> MysteryMachines { get; set; }

		[GameConfigEntry("MergeMysteryMachineCurrencyItems", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineCurrencyItemSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo> MysteryMachineCurrencyItems { get; set; }

		[GameConfigEntry("MergeMysteryMachineCurrencyItemChains", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineCurrencyItemChainSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo> MysteryMachineCurrencyItemChains { get; set; }

		[GameConfigEntry("MergeMysteryMachineProgressionEventProgressItems", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineProgressionEventProgressItemSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineProgressionEventProgressItemId, MysteryMachineProgressionEventProgressItemInfo> MysteryMachineProgressionEventProgressItems { get; set; }

		[GameConfigEntry("MergeMysteryMachineProgressionEventProgressItemChains", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineProgressionEventProgressItemChainSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo> MysteryMachineProgressionEventProgressItemChains { get; set; }

		[GameConfigEntry("MysteryMachineHeatLevels", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineHeatLevelSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineHeatLevelId, MysteryMachineHeatLevelInfo> MysteryMachineHeatLevels { get; set; }

		[GameConfigEntry("MysteryMachinePerks", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachinePerkSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachinePerkId, MysteryMachinePerkInfo> MysteryMachinePerks { get; set; }

		[GameConfigEntry("MysteryMachineSpecialSales", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineSpecialSaleSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineSpecialSaleId, MysteryMachineSpecialSaleInfo> MysteryMachineSpecialSales { get; set; }

		[GameConfigEntry("MysteryMachineTasks", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineTaskSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineTaskId, MysteryMachineTaskInfo> MysteryMachineTasks { get; set; }

		[GameConfigEntry("MysteryMachineTaskSets", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineTaskSetSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineTaskSetId, MysteryMachineTaskSetInfo> MysteryMachineTaskSets { get; set; }

		[GameConfigEntry("MysteryMachineLevels", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineLevelSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineLevelId, MysteryMachineLevelInfo> MysteryMachineLevels { get; set; }

		[GameConfigEntry("MysteryMachineLeaderboardConfigs", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineLeaderboardConfigSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineLeaderboardConfigId, MysteryMachineLeaderboardConfigInfo> MysteryMachineLeaderboardConfigs { get; set; }

		[GameConfigEntry("MysteryMachineLeaderboardRewards", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineLeaderboardRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineLeaderboardRewardId, MysteryMachineLeaderboardRewardInfo> MysteryMachineLeaderboardRewards { get; set; }

		[GameConfigEntry("MysteryMachineLeaderboardTopRankingRewards", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineLeaderboardTopRankingRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineLeaderboardTopRankingRewardId, MysteryMachineLeaderboardTopRankingRewardInfo> MysteryMachineLeaderboardTopRankingRewards { get; set; }

		[GameConfigEntry("MysteryMachineLeaderboardPercentileRankingRewards", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineLeaderboardPercentileRankingRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineLeaderboardPercentileRankingRewardId, MysteryMachineLeaderboardPercentileRankingRewardInfo> MysteryMachineLeaderboardPercentileRankingRewards { get; set; }

		[GameConfigEntry("SoloMilestoneEvents", true, null)]
		[GameConfigEntryTransform(typeof(SoloMilestoneEventInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<SoloMilestoneEventId, SoloMilestoneEventInfo> SoloMilestoneEvents { get; set; }

		[GameConfigEntry("SoloMilestoneMilestones", true, null)]
		[GameConfigEntryTransform(typeof(SoloMilestoneMilestonesInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<SoloMilestoneMilestonesId, SoloMilestoneMilestonesInfo> SoloMilestoneMilestones { get; set; }

		[GameConfigEntry("SoloMilestoneTokenSpawns", true, null)]
		[GameConfigEntryTransform(typeof(SoloMilestoneTokenSpawnsInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<SoloMilestoneTokenSpawnsId, SoloMilestoneTokenSpawnsInfo> SoloMilestoneTokenSpawns { get; set; }

		[GameConfigEntry("DailyScoopMilestones", true, null)]
		[GameConfigEntryTransform(typeof(DailyScoopMilestoneDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyScoopMilestoneId, DailyScoopMilestoneData> DailyScoopMilestones { get; set; }

		[GameConfigEntry("ProgressionPackEvents", true, null)]
		[GameConfigEntryTransform(typeof(ProgressionPackEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<ProgressionPackEventId, ProgressionPackEventInfo> ProgressionPackEvents { get; set; }

		[GameConfigEntry("DailyScoopStandardObjectives", true, null)]
		[GameConfigEntryTransform(typeof(DailyScoopStandardObjectiveDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyScoopStandardObjectiveId, DailyScoopStandardObjectiveData> DailyScoopStandardObjectives { get; set; }

		[GameConfigEntry("DailyChallengesWeeks", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengesWeekDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesWeekId, DailyChallengesWeekData> DailyChallengesWeeks { get; set; }

		[GameConfigEntry("DailyChallengesDays", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengesDayDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesDayId, DailyChallengesDayData> DailyChallengesDays { get; set; }

		[GameConfigEntry("DailyChallengesWeeksByMinigameId", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengesWeekByMinigameIdDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesMinigameId, DailyChallengesWeekByMinigameIdData> DailyChallengesWeeksByMinigameId { get; set; }

		[GameConfigEntry("DailyChallengesWeeksByPreviousCompletion", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengeWeekByPreviousCompletionDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesWeekId, DailyChallengeWeekByPreviousCompletionData> DailyChallengesWeeksByPreviousCompletion { get; set; }

		[GameConfigEntry("DailyChallengesMinigames", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesMinigameId, DailyChallengesMinigameData> DailyChallengesMinigames { get; set; }

		[GameConfigEntry("DailyChallengesStandardObjectives", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengesStandardObjectiveDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesStandardObjectiveId, DailyChallengesStandardObjectiveData> DailyChallengesStandardObjectives { get; set; }

		[GameConfigEntry("DailyChallengesSpecialObjectives", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengesSpecialObjectiveDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesSpecialObjectiveId, DailyChallengesSpecialObjectiveData> DailyChallengesSpecialObjectives { get; set; }

		[GameConfigEntry("DailyChallengesMilestones", true, null)]
		[GameConfigEntryTransform(typeof(DailyChallengesMilestoneDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyChallengesMilestoneId, DailyChallengesMilestoneData> DailyChallengesMilestones { get; set; }

		[GameConfigEntry("DailyChallengesEventSettings", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public DailyChallengesEventSettings DailyChallengesEventSettings { get; set; }

		[GameConfigEntry("DailyScoopDays", true, null)]
		[GameConfigEntryTransform(typeof(DailyScoopDayDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyScoopDayId, DailyScoopDayData> DailyScoopDays { get; set; }

		[GameConfigEntry("DailyScoopWeeks", true, null)]
		[GameConfigEntryTransform(typeof(DailyScoopWeekDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyScoopWeekId, DailyScoopWeekData> DailyScoopWeeks { get; set; }

		[GameConfigEntry("DailyScoopEvents", true, null)]
		[GameConfigEntryTransform(typeof(DailyScoopEventInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<DailyScoopEventId, DailyScoopEventInfo> DailyScoopEvents { get; set; }

		[GameConfigEntry("TagRewards", true, null)]
		[GameConfigEntryTransform(typeof(TagRewardsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<string, TagRewardsInfo> TagRewards { get; set; }

		[GameConfigEntry("OrderRequirements", true, null)]
		[GameConfigEntryTransform(typeof(OrderRequirementsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<OrderRequirementsId, OrderRequirements> OrderRequirements { get; set; }

		[GameConfigEntry("EnergyModeEvents", true, null)]
		[GameConfigEntryTransform(typeof(EnergyModeEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<EnergyModeEventId, EnergyModeEventInfo> EnergyModeEvents { get; set; }

		[GameConfigEntry("CardCollectionCardInfos", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionCardInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionCardId, CardCollectionCardInfo> CardCollectionCardInfos { get; set; }

		[GameConfigEntry("CardCollectionCardSetInfos", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionCardSetInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionCardSetId, CardCollectionCardSetInfo> CardCollectionCardSetInfos { get; set; }

		[GameConfigEntry("CardCollectionPackInfos", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionPackInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionPackId, CardCollectionPackInfo> CardCollectionPackInfos { get; set; }

		[GameConfigEntry("DailyScoopSpecialObjectives", true, null)]
		[GameConfigEntryTransform(typeof(DailyScoopSpecialObjectiveDataSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<DailyScoopSpecialObjectiveId, DailyScoopSpecialObjectiveData> DailyScoopSpecialObjectives { get; set; }

		[GameConfigEntry("CardCollection_Set_Activation", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionSetActivationInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionSetActivationId, CardCollectionSetActivationInfo> CardCollectionSetActivationInfos { get; set; }

		[GameConfigEntry("CardCollectionBalanceInfos", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionBalanceInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionBalanceId, CardCollectionBalanceInfo> CardCollectionBalanceInfos { get; set; }

		[GameConfigEntry("CardCollection_EvidenceBoxes", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionEvidenceBoxSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionEvidenceBoxId, CardCollectionEvidenceBoxInfo> CardCollectionEvidenceBoxes { get; set; }

		[GameConfigEntry("CardCollection_DuplicateCardRewards", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionDuplicateRewardSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionDuplicateRewardId, CardCollectionDuplicateRewardInfo> CardCollectionDuplicateCardRewards { get; set; }

		[GameConfigEntry("CardCollection_Card_Activation", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionCardActivationInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionCardActivationId, CardCollectionCardActivationInfo> CardCollectionCardActivationInfos { get; set; }

		[GameConfigEntry("CardCollection_Packs_Activation", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionPackActivationInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionPackActivationId, CardCollectionPackActivationInfo> CardCollectionPackActivationInfos { get; set; }

		[GameConfigEntry("CardCollection_HiddenRarity_Activation", true, null)]
		[GameConfigEntryTransform(typeof(CardCollectionHiddenRarityActivationInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardCollectionHiddenRarityActivationId, CardCollectionHiddenRarityActivationInfo> CardCollectionHiddenRarityActivationInfos { get; set; }

		[GameConfigEntry("EnergySettings", true, null)]
		[GameConfigEntryTransform(typeof(EnergySettingsConfigSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<EnergyType, EnergySettingsConfig> EnergySettings { get; set; }

		[GameConfigEntry("HotspotTables", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CustomHotspotTableId, CustomHotspotTablesInfo> CustomTables { get; set; }

		[GameConfigEntry("MapObjectGroups", true, null)]
		[GameConfigEntryTransform(typeof(MapObjectGroupInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MapObjectGroupId, MapObjectGroupInfo> MapObjectGroups { get; set; }

		[GameConfigEntry("RewardContainers", true, null)]
		[GameConfigEntryTransform(typeof(RewardContainerSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RewardContainerId, RewardContainerInfo> RewardContainers { get; set; }

		[GameConfigEntry("MysteryMachineScreens", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineScreenSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineScreenId, MysteryMachineScreenInfo> MysteryMachineScreens { get; set; }

		[GameConfigEntry("MysteryMachineScreenMessagePacks", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineScreenMessagePackSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineScreenMessagePackId, MysteryMachineScreenMessagePackInfo> MysteryMachineScreenMessagePacks { get; set; }

		[GameConfigEntry("MysteryMachineScreenMessages", true, null)]
		[GameConfigEntryTransform(typeof(MysteryMachineScreenMessageSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<MysteryMachineScreenMessageId, MysteryMachineScreenMessageInfo> MysteryMachineScreenMessages { get; set; }

		[GameConfigEntry("FallbackItems", true, null)]
		[GameConfigEntryTransform(typeof(FallbackItemInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<FallbackItemId, FallbackItemInfo> FallbackItems { get; set; }

		[GameConfigEntry("FallbackPlayerRewards", true, null)]
		[GameConfigEntryTransform(typeof(FallbackPlayerRewardInfoSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<FallbackPlayerRewardId, FallbackPlayerRewardInfo> FallbackPlayerRewards { get; set; }

		[GameConfigEntry("RewardUpgradables", true, null)]
		[GameConfigEntryTransform(typeof(RewardUpgradableSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RewardUpgradableId, RewardUpgradableInfo> RewardUpgradables { get; set; }

		[GameConfigEntry("ShortLeaderboardEvents", true, null)]
		[GameConfigEntryTransform(typeof(ShortLeaderboardEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<ShortLeaderboardEventId, ShortLeaderboardEventInfo> ShortLeaderboardEvents { get; set; }

		[GameConfigEntry("ClassicRacesMinigames", true, null)]
		[GameConfigEntryTransform(typeof(ClassicRacesMinigameSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CoreSupportEventMinigameId, ClassicRacesMinigameInfo> ClassicRacesMinigames { get; set; }

		[GameConfigEntry("ClassicRacesEventStages", true, null)]
		[GameConfigEntryTransform(typeof(ClassicRacesEventStageSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ClassicRacesEventStageId, ClassicRacesEventStageInfo> ClassicRacesEventStages { get; set; }

		[GameConfigEntry("ShortLeaderboardEventStages", true, null)]
		[GameConfigEntryTransform(typeof(ShortLeaderboardEventStageSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ShortLeaderboardEventStageId, ShortLeaderboardEventStageInfo> ShortLeaderboardEventStages { get; set; }

		[GameConfigEntry("SharedProducerSettings", true, null)]
		[GameConfigEntryTransform(typeof(SharedProducerSettingsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<SharedProducerSettingsId, SharedProducerSettings> SharedProducerSettings { get; set; }

		[GameConfigEntry("AreasGlobalUnlockRequirements", true, null)]
		[GameConfigEntryTransform(typeof(AreasGlobalUnlockRequirementSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<AreasGlobalUnlockRequirementId, AreasGlobalUnlockRequirementInfo> AreasGlobalUnlockRequirements { get; set; }

		[GameConfigEntry("RestoreCountryCodeSettings", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public RestoreCountryCodeSettings RestoreCountryCodeSettings { get; set; }

		[GameConfigEntry("CoreSupportEvents", true, null)]
		[GameConfigEntryTransform(typeof(CoreSupportEventSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<CoreSupportEventId, CoreSupportEventInfo> CoreSupportEvents { get; set; }

		[GameConfigEntry("ExtraSpawns", true, null)]
		[GameConfigEntryTransform(typeof(ExtraSpawnSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<string, ExtraSpawnInfo> ExtraSpawns { get; set; }

		[GameConfigEntry("ExtraSpawnItemValues", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<int, ExtraSpawnItemValueInfo> ExtraSpawnItemValues { get; set; }

		[GameConfigEntry("ExtraSpawnCurrencyValues", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<Currencies, ExtraSpawnCurrencyValueInfo> ExtraSpawnCurrencyValues { get; set; }

		[GameConfigEntry("ExtraSpawnCardStackValues", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CardStackId, ExtraSpawnCardStackValueInfo> ExtraSpawnCardStackValues { get; set; }

		[GameConfigEntry("ExtraSpawnIllustrationValues", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CustomHotspotTableId, ExtraSpawnIllustrationValueInfo> ExtraSpawnIllustrationValues { get; set; }

		[GameConfigEntry("ProgressionTracks", true, null)]
		[GameConfigEntryTransform(typeof(ProgressionTrackSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<ProgressionTrackId, ProgressionTrackInfo> ProgressionTracks { get; set; }

		[GameConfigEntry("RollTheDiceMinigames", true, null)]
		[GameConfigEntryTransform(typeof(RollTheDiceMinigameSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CoreSupportEventMinigameId, RollTheDiceMinigameInfo> RollTheDiceMinigames { get; set; }

		[GameConfigEntry("RollTheDiceLevel", true, null)]
		[GameConfigEntryTransform(typeof(RollTheDiceLevelSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RollTheDiceLevelId, RollTheDiceLevelInfo> RollTheDiceLevels { get; set; }

		[GameConfigEntry("RollTheDiceTask", true, null)]
		[GameConfigEntryTransform(typeof(RollTheDiceTaskSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RollTheDiceTaskId, RollTheDiceTaskInfo> RollTheDiceTasks { get; set; }

		[GameConfigEntry("RollTheDiceGameDice", true, null)]
		[GameConfigEntryTransform(typeof(RollTheDiceGameDiceSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RollTheDiceGameDiceId, RollTheDiceGameDice> RollTheDiceGameDices { get; set; }

		[GameConfigEntry("RollTheDiceMultipliers", true, null)]
		[GameConfigEntryTransform(typeof(RollTheDiceMultiplierSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RollTheDiceMultiplierId, RollTheDiceMultiplierInfo> RollTheDiceMultipliers { get; set; }

		[GameConfigEntry("BuilderEventMinigames", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventMinigameSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<CoreSupportEventMinigameId, BuilderEventMinigameInfo> BuilderEventMinigames { get; set; }

		[GameConfigEntry("BuilderEventCollections", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventCollectionSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventCollectionId, BuilderEventCollectionInfo> BuilderEventCollections { get; set; }

		[GameConfigEntry("BuilderEventBuilds", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventBuildSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventBuildLevelId, BuilderEventBuildInfo> BuilderEventBuilds { get; set; }

		[GameConfigEntry("BuilderEventTools", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventToolSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventToolId, BuilderEventToolInfo> BuilderEventTools { get; set; }

		[GameConfigEntry("BuilderEventWheels", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventWheelSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventWheelId, BuilderEventWheelInfo> BuilderEventWheels { get; set; }

		[GameConfigEntry("BuilderEventWheelParts", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventWheelPartsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventWheelPartId, BuilderEventWheelPartInfo> BuilderEventWheelParts { get; set; }

		[GameConfigEntry("BuilderEventTimers", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventTimersSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventTimerId, BuilderEventTimerInfo> BuilderEventTimers { get; set; }

		[GameConfigEntry("BuilderEventTimedRewards", true, null)]
		[GameConfigEntryTransform(typeof(BuilderEventTimedRewardsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BuilderEventTimedRewardId, BuilderEventTimedRewardInfo> BuilderEventTimedRewards { get; set; }

		[GameConfigEntry("PitySystemRules", true, null)]
		[GameConfigEntryTransform(typeof(PitySystemRuleSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<PitySystemId, PitySystemRuleInfo> PitySystemRules { get; set; }

		[GameConfigEntry("PitySystemRuleRequirements", true, null)]
		[GameConfigEntryTransform(typeof(PitySystemRuleRequirementsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<PitySystemId, PitySystemRuleRequirementsInfo> PitySystemRuleRequirements { get; set; }

		[GameConfigEntry("Requirements", true, null)]
		[GameConfigEntryTransform(typeof(RequirementSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RequirementId, RequirementInfo> Requirements { get; set; }

		[GameConfigEntry("RequirementSets", true, null)]
		[GameConfigEntryTransform(typeof(RequirementSetSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<RequirementSetId, RequirementSet> RequirementSets { get; set; }

		[GameConfigEntry("Locations", true, null)]
		[GameConfigEntryTransform(typeof(LocationSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<LocationId, LocationInfo> Locations { get; set; }

		public IReadOnlyDictionary<OfferPlacementId, List<OfferPlacementId>> OfferPlacementIds { get; set; }

		public int MaxPlayerLevel { get; set; }

		public IReadOnlyDictionary<MergeBoardId, List<CollectibleBoardEventId>> CollectibleBoardEventBoards { get; set; }

		public IReadOnlyDictionary<MergeBoardId, EventId> BoardEventBoards { get; set; }

		public IReadOnlyDictionary<MergeBoardId, LeaderboardEventId> LeaderboardEventBoards { get; set; }

		public IReadOnlyDictionary<MergeBoardId, MysteryMachineEventId> MysteryMachineEventBoards { get; set; }

		public IImmutableSet<MergeBoardId> ShortLeaderboardEventBoards { get; set; }

		public IImmutableSet<MergeBoardId> AuxEnergyMergeBoards { get; set; }

		public Dictionary<DialogCharacterType, HashSet<HotspotId>> HotspotIdsByDialogCharacterTypeToDiscover { get; set; }

		public IReadOnlyDictionary<LeaderboardEventId, List<ConfigLookupValue<MergeChainDefinition>>> MergeChainsByLeaderboardEventId { get; set; }

		public IReadOnlyDictionary<DialogItemId, List<DialogCharacterType>> CharactersToForceDiscoverByNonHotspotDialogItemId { get; set; }

		public IReadOnlyDictionary<OfferPlacementId, List<MetaOfferGroupId>> OfferGroupIdsByOfferPlacementId { get; set; }

		public IReadOnlyDictionary<CollectibleBoardEventId, MergeBoardId> FishingEventBoards { get; set; }

		public IReadOnlyList<ConfigLookupValue<IItemDefinition>> FishItems { get; set; }

		public IReadOnlyList<ConfigLookupValue<IItemDefinition>> FishingRodItems { get; set; }

		public IImmutableSet<int> ItemsAcceptedBySinks { get; set; }

		public IImmutableSet<int> CardDeckItems { get; set; }

		public IImmutableSet<int> CardItems { get; set; }

		public IReadOnlyList<IReadOnlyList<int>> ProducerVariants { get; set; }

		public IReadOnlyDictionary<MergeBoardId, List<IStringId>> EventsByMergeBoard { get; set; }

		public IReadOnlyList<PortalPieceChainData> PortalPieceChains { get; set; }

		public IReadOnlyDictionary<ConfigLookupValue<ItemDefinition>, IOverrideSpawnChanceFeatures> OverrideSpawnChanceByItemDefinition { get; set; }

		public IReadOnlyList<HotspotId> AreaUnlockHotspots { get; set; }

		public IReadOnlyList<int> MysteryMachineItemIds { get; set; }

		public IReadOnlyDictionary<int, ConfigLookupValue<ItemInPocketInfo>> ItemInPocketInfoByItemId { get; set; }

		public IReadOnlyDictionary<int, ConfigLookupValue<FallbackItemInfo>> FallbackItemInfoByItemId { get; set; }

		public IImmutableSet<ConfigLookupValue<IItemDefinition>> ItemsAvailableOnlyDuringCardCollectionEvent { get; set; }

		public IReadOnlyDictionary<int, CardCollectionPackId> CardPacksByItemId { get; set; }

		public IReadOnlyDictionary<int, CardCollectionCardId> InformantTipsByItemId { get; set; }

		public IReadOnlyList<ConfigLookupValue<TemporaryCardCollectionEventInfo>> OrderedTemporaryCardCollectionEventInfos { get; set; }

		public IReadOnlyDictionary<(CardStars, TemporaryCardCollectionEventId), DuplicateRewardPair> DuplicateRewards { get; set; }

		public IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, IImmutableSet<PlayerSegmentId>> MysteryMachineLeaderboardRewardSegments { get; set; }

		public IReadOnlyDictionary<MergeBoardId, List<CollectibleBoardEventId>> DigEventMergeBoards { get; set; }

		public IReadOnlyDictionary<FlashSaleGroupId, ConfigLookupValue<FlashSaleGroupDefinition>> FlashSaleGroups { get; set; }

		public IReadOnlyDictionary<ExtraSpawnTriggerType, OrderedSet<CoreSupportEventTokenId>> ExtraSpawnTriggerCoreSupportEventTokens { get; set; }

		public IReadOnlyList<InAppProductId> ProgressionEventIAPs { get; set; }

		public IReadOnlyList<InAppProductId> CurrencyBankIAPs { get; set; }

		public ILastNSegmentsConfig LastNSegmentsConfig { get; set; }

		public IRollTheDiceConfig RollTheDiceConfig { get; set; }

		public IDailyChallengesEventConfig DailyChallengesEventConfig { get; set; }

		[GameConfigEntry("AutoMergeSettings", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Member" }, null, false)]
		public AutoMergeSettings AutoMergeSettings { get; set; }

		public IBuilderEventConfig BuilderEventConfig { get; set; }

		public IReadOnlyDictionary<MergeBoardId, List<HotspotId>> OpenMergeBoardHotspotsByMergeBoard { get; set; }

		public IEnumerable<IValidatable> ValidatableEntries => null;

		public override void BuildTimeValidate(GameConfigValidationResult validationResult)
		{
		}

		public override void OnLoaded()
		{
		}

		public void ConstructAreaUnlockHotspots()
		{
		}

		public void FindMaxPlayerLevel()
		{
		}

		public IEnumerable<MergeChainDefinition> GetMergeChainsInCategory(CodexCategoryId categoryId)
		{
			return null;
		}

		public IEnumerable<MergeChainDefinition> GetCodexMergeChains()
		{
			return null;
		}

		public void ConstructHotspotChildren()
		{
		}

		public static Dictionary<HotspotId, IList<HotspotDefinition>> GetHotspotChildrenFromUnlockingParents(IEnumerable<HotspotDefinition> hotspotDefinitions)
		{
			return null;
		}

		public HotspotDefinition GetHotspotDefinition(HotspotId hotspotId)
		{
			return null;
		}

		public IReadOnlyList<HotspotId> GetHotspotParentTree(HotspotId hotspotId)
		{
			return null;
		}

		public List<HotspotId> GetParentHotspots(HotspotDefinition hotspotDefinition, List<HotspotId> hotspots)
		{
			return null;
		}

		public Dictionary<MergeBoardId, List<CollectibleBoardEventId>> ParseCollectibleBoardEventBoards()
		{
			return null;
		}

		public IReadOnlyDictionary<MergeBoardId, LeaderboardEventId> ParseLeaderboardEventBoards()
		{
			return null;
		}

		public Dictionary<MergeBoardId, MysteryMachineEventId> ParseMysteryMachineEventBoards()
		{
			return null;
		}

		public IImmutableSet<MergeBoardId> ParseShortLeaderboardEventBoards()
		{
			return null;
		}

		public IImmutableSet<MergeBoardId> ParseAuxEnergyMergeBoards()
		{
			return null;
		}

		public void ConstructCachesToSupportDiscoverCharacters()
		{
		}

		public void ConstructEventDialogueCompleteActions()
		{
		}

		public Dictionary<LeaderboardEventId, List<ConfigLookupValue<MergeChainDefinition>>> ComputedMergeChainsByLeaderboardEventId()
		{
			return null;
		}

		public Dictionary<OfferPlacementId, List<MetaOfferGroupId>> ParseOfferGroupIdsByOfferPlacementId()
		{
			return null;
		}

		public void ParseFishingEventBoards(out Dictionary<CollectibleBoardEventId, MergeBoardId> fishingEventBoards)
		{
			fishingEventBoards = null;
		}

		public Dictionary<MergeBoardId, List<CollectibleBoardEventId>> ParseDigEventMergeBoards()
		{
			return null;
		}

		public void ParseItemFeatures(out List<ConfigLookupValue<IItemDefinition>> fishItems, out List<ConfigLookupValue<IItemDefinition>> fishingRodItems)
		{
			fishItems = null;
			fishingRodItems = null;
		}

		public IImmutableSet<int> ParseItemsAcceptedBySinks()
		{
			return null;
		}

		public IImmutableSet<int> ParseCardDeckItems()
		{
			return null;
		}

		public IImmutableSet<int> ParseCardItems()
		{
			return null;
		}

		public List<List<int>> ParseProducerVariants()
		{
			return null;
		}

		public string GetCurrentLeaderboardEventId(int leagueId)
		{
			return null;
		}

		public Dictionary<FlashSaleGroupId, ConfigLookupValue<FlashSaleGroupDefinition>> ComputedFlashGroups()
		{
			return null;
		}

		public (LeaderboardEventId, MetaRecurringCalendarSchedule) GetCurrentLeaderboardEventSchedule()
		{
			return default((LeaderboardEventId, MetaRecurringCalendarSchedule));
		}

		public (BoultonLeagueEventId, MetaRecurringCalendarSchedule) GetCurrentBoultonLeagueEventSchedule()
		{
			return default((BoultonLeagueEventId, MetaRecurringCalendarSchedule));
		}

		public (ShortLeaderboardEventId, MetaRecurringCalendarSchedule) GetCurrentShortLeaderboardEventSchedule()
		{
			return default((ShortLeaderboardEventId, MetaRecurringCalendarSchedule));
		}

		public (CoreSupportEventId, MetaRecurringCalendarSchedule) GetCurrentClassicRacesEventSchedule()
		{
			return default((CoreSupportEventId, MetaRecurringCalendarSchedule));
		}

		public Dictionary<MergeBoardId, List<IStringId>> ParseEventsByMergeBoard()
		{
			return null;
		}

		public List<PortalPieceChainData> ParsePortalPieceChains()
		{
			return null;
		}

		public Dictionary<ConfigLookupValue<ItemDefinition>, IOverrideSpawnChanceFeatures> ParseOverrideSpawnChanceByItemDefinition()
		{
			return null;
		}

		public List<int> ParseMysteryMachineItemIds()
		{
			return null;
		}

		public Dictionary<int, ConfigLookupValue<FallbackItemInfo>> ParseFallbackItems()
		{
			return null;
		}

		public Dictionary<int, ConfigLookupValue<ItemInPocketInfo>> ComputedItemInPockets()
		{
			return null;
		}

		public IImmutableSet<ConfigLookupValue<IItemDefinition>> ParseItemsAvailableOnlyDuringCardCollectionEvent()
		{
			return null;
		}

		public Dictionary<int, CardCollectionPackId> ParseCardPacks()
		{
			return null;
		}

		public IReadOnlyDictionary<int, CardCollectionCardId> ParseInformantTips()
		{
			return null;
		}

		public IReadOnlyList<ConfigLookupValue<TemporaryCardCollectionEventInfo>> ComputedTemporaryCardCollectionEventInfos()
		{
			return null;
		}

		public Dictionary<(CardStars, TemporaryCardCollectionEventId), DuplicateRewardPair> ParseDuplicateRewards()
		{
			return null;
		}

		public Dictionary<MysteryMachineLeaderboardConfigId, IImmutableSet<PlayerSegmentId>> ParseMysteryMachineLeaderboardRewardSegments()
		{
			return null;
		}

		public EnergySettingsConfig GetEnergySettingsConfig(EnergyType energyType)
		{
			return null;
		}

		public int GetShortLeaderboardEventRankCount()
		{
			return 0;
		}

		public int GetShortLeaderboardEventParticipantCountForRank(int rank)
		{
			return 0;
		}

		public int GetClassicRacesEventRankCount()
		{
			return 0;
		}

		public int GetClassicRacesEventParticipantCountForRank()
		{
			return 0;
		}

		public MetaDuration GetLeaderboardBotEventStageDuration(int stage, int leagueId)
		{
			return default(MetaDuration);
		}

		public void ValidateAllConfigDefinitionReferences(GameConfigValidationResult validationResult)
		{
		}

		public IReadOnlyDictionary<ExtraSpawnTriggerType, OrderedSet<CoreSupportEventTokenId>> ParseExtraSpawnTriggerCoreSupportEventTokens()
		{
			return null;
		}

		public IReadOnlyList<InAppProductId> ParseProgressionEventIAPs()
		{
			return null;
		}

		public IReadOnlyList<InAppProductId> ParseCurrencyBankIAPs()
		{
			return null;
		}

		public RollTheDiceConfig InitializeRollTheDiceConfig()
		{
			return null;
		}

		public DailyChallengesEventConfig InitializeDailyChallengesEventConfig()
		{
			return null;
		}

		public IReadOnlyDictionary<MergeBoardId, List<HotspotId>> ParseOpenMergeBoardHotspotsByMergeBoard()
		{
			return null;
		}

		public BuilderEventConfig InitializeBuilderEventConfig()
		{
			return null;
		}

		public IReadOnlyList<IItemDefinition> ConstructDailyTasksV2AllPossibleRewardItems()
		{
			return null;
		}

		public IReadOnlyList<IItemDefinition> ConstructDailyTasksV2AllPossibleRequirementItemsInfinite()
		{
			return null;
		}

		public IReadOnlyList<IItemDefinition> ConstructDailyTasksV2AllPossibleRequirementItemsDefault()
		{
			return null;
		}

		public IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRewardItems()
		{
			return null;
		}

		public IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRequirementItemsInfinite()
		{
			return null;
		}

		public IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRequirementItemsDefault()
		{
			return null;
		}
	}
}
