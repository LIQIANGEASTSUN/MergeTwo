namespace GameLogic.Config;

public interface IMergeMansionGameConfig
{

	public IReadOnlyDictionary<AddressablesDownloadProcessId, AddressablesDownloadProcess> AddressablesDownloadProcesses
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<AreaId, AreaInfo> Areas
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<AreasGlobalUnlockRequirementId, AreasGlobalUnlockRequirementInfo> AreasGlobalUnlockRequirements
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<HotspotId> AreaUnlockHotspots
	{
		 get { } //Length: 0
	}

	public AutoMergeSettings AutoMergeSettings
	{
		 get { } //Length: 0
	}

	public IImmutableSet<MergeBoardId> AuxEnergyMergeBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, EventId> BoardEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, BoardInfo> Boards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<BoultonLeagueEventId, BoultonLeagueEventInfo> BoultonLeagueEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<BoultonLeagueStageId, BoultonLeagueStageInfo> BoultonLeagueStages
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<BubblesSetupId, BubblesSetup> BubbleSetups
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<BubbleVariationId, BubbleVariantsDefinition> BubbleVariations
	{
		 get { } //Length: 0
	}

	public IBuilderEventConfig BuilderEventConfig
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionBalanceId, CardCollectionBalanceInfo> CardCollectionBalanceInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionCardActivationId, CardCollectionCardActivationInfo> CardCollectionCardActivationInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionCardId, CardCollectionCardInfo> CardCollectionCardInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionCardSetId, CardCollectionCardSetInfo> CardCollectionCardSetInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionDuplicateRewardId, CardCollectionDuplicateRewardInfo> CardCollectionDuplicateCardRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionEvidenceBoxId, CardCollectionEvidenceBoxInfo> CardCollectionEvidenceBoxes
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionHiddenRarityActivationId, CardCollectionHiddenRarityActivationInfo> CardCollectionHiddenRarityActivationInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionPackActivationId, CardCollectionPackActivationInfo> CardCollectionPackActivationInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionPackId, CardCollectionPackInfo> CardCollectionPackInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionSetActivationId, CardCollectionSetActivationInfo> CardCollectionSetActivationInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionSupportingEventId, CardCollectionSupportingEventInfo> CardCollectionSupportingEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardCollectionPackId, CardCollectionSupportingEventReplacementPackInfo> CardCollectionSupportingEventsReplacementPacks
	{
		 get { } //Length: 0
	}

	public IImmutableSet<Int32> CardDeckItems
	{
		 get { } //Length: 0
	}

	public IImmutableSet<Int32> CardItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, CardCollectionPackId> CardPacksByItemId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardStackId, CardStackInfo> CardStacks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DialogItemId, List`1<DialogCharacterType>> CharactersToForceDiscoverByNonHotspotDialogItemId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ClassicRacesEventStageId, ClassicRacesEventStageInfo> ClassicRacesEventStages
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CoreSupportEventMinigameId, ClassicRacesMinigameInfo> ClassicRacesMinigames
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CodexCategoryId, CodexCategoryInfo> CodexCategories
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo> CodexDiscoveryRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, List`1<CollectibleBoardEventId>> CollectibleBoardEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CollectibleBoardEventId, CollectibleBoardEventInfo> CollectibleBoardEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CollectibleDialoguesInfoId, CollectibleDialoguesInfo> CollectibleDialoguesInfo
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CoreSupportEventId, CoreSupportEventInfo> CoreSupportEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<InAppProductId> CurrencyBankIAPs
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CurrencyBankId, CurrencyBankInfo> CurrencyBanks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CustomHotspotTableId, CustomHotspotTablesInfo> CustomTables
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CutsceneId, CutsceneInfo> Cutscenes
	{
		 get { } //Length: 0
	}

	public IDailyChallengesEventConfig DailyChallengesEventConfig
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyScoopDayId, DailyScoopDayData> DailyScoopDays
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyScoopEventId, DailyScoopEventInfo> DailyScoopEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyScoopMilestoneId, DailyScoopMilestoneData> DailyScoopMilestones
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyScoopSpecialObjectiveId, DailyScoopSpecialObjectiveData> DailyScoopSpecialObjectives
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyScoopStandardObjectiveId, DailyScoopStandardObjectiveData> DailyScoopStandardObjectives
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyScoopWeekId, DailyScoopWeekData> DailyScoopWeeks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyTaskId, DailyTaskDefinition> DailyTasks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2Info> DailyTasksV2
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueInfo> DailyTasksV2BoultonLeague
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueUnlimitedInfo> DailyTasksV2BoultonLeagueUnlimited
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ItemTypeConstant, DailyTasksV2ItemBoultonLeagueInfo> DailyTasksV2ItemsBoultonLeague
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeChainId, DailyTasksV2MergeChainInfo> DailyTasksV2MergeChains
	{
		 get { } //Length: 0
	}

	public DailyTasksV2Settings DailyTasksV2Settings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DecorationId, DecorationInfo> Decorations
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DecorationShopItemId, DecorationShopItemInfo> DecorationShopItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DecorationShopId, DecorationShopInfo> DecorationShops
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MetaOfferId, DelayedOfferPurchaseRequirement> DelayedOfferPurchaseRequirements
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DialogItemId, DialogItemInfo> DialogItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DialogCharacterType, DialogueCharacterInfo> DialogueCharacters
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DigEventBoardId, DigEventBoards> DigEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DigEventItemId, DigEventItemInfo> DigEventItemInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, List`1<CollectibleBoardEventId>> DigEventMergeBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DigEventMuseumCollectionId, DigEventMuseumCollectionInfo> DigEventMuseumCollections
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DigEventId, DigEventInfo> DigEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DigEventMuseumShelfId, DigEventMuseumShelfInfo> DigEventShelves
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<DigEventShinyProgressionId, DigEventShinyProgression> DigEventShinyProgression
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ValueTuple`2<CardStars, TemporaryCardCollectionEventId>, DuplicateRewardPair> DuplicateRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShopItemId, DynamicPurchaseDefinition> DynamicPurchaseProducts
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<EnergyModeEventId, EnergyModeEventInfo> EnergyModeEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, EnergyModeProgressionEventItemInfo> EnergyModeProgressionEventItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<PlayerModeId, EnergyModeInfo> EnergyModes
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<EnergyType, EnergySettingsConfig> EnergySettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<EventCharacterId, EventCharacterInfo> EventCharacters
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> EventFlashSaleGroups
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> EventFlashSales
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<EventLevelId, EventLevelInfo> EventLevels
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, List`1<IStringId>> EventsByMergeBoard
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<EventTaskId, EventTaskInfo> EventTasks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CardStackId, ExtraSpawnCardStackValueInfo> ExtraSpawnCardStackValues
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Currencies, ExtraSpawnCurrencyValueInfo> ExtraSpawnCurrencyValues
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CustomHotspotTableId, ExtraSpawnIllustrationValueInfo> ExtraSpawnIllustrationValues
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, ExtraSpawnItemValueInfo> ExtraSpawnItemValues
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<String, ExtraSpawnInfo> ExtraSpawns
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ExtraSpawnTriggerType, OrderedSet`1<CoreSupportEventTokenId>> ExtraSpawnTriggerCoreSupportEventTokens
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, ConfigLookupValue`1<FallbackItemInfo>> FallbackItemInfoByItemId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<FallbackPlayerRewardId, FallbackPlayerRewardInfo> FallbackPlayerRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<CollectibleBoardEventId, MergeBoardId> FishingEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<ConfigLookupValue`1<IItemDefinition>> FishingRodItems
	{
		 get { } //Length: 0
	}

	public IFishingSettings FishingSettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<ConfigLookupValue`1<IItemDefinition>> FishItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<FlashSaleGroupId, ConfigLookupValue`1<FlashSaleGroupDefinition>> FlashSaleGroups
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<FlashSaleShopSettingsId, FlashSaleShopSettings> FlashSaleShopSettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<GameFeatureId, GameFeatureSetting> GameFeatures
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo> GarageCleanupBoardRows
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<GarageCleanupEventId, GarageCleanupEventInfo> GarageCleanupEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<GarageCleanupPatternRowId, GarageCleanupPatternRowInfo> GarageCleanupPatternRows
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<GarageCleanupPatternSetId, GarageCleanupPatternSetInfo> GarageCleanupPatternSets
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<GarageCleanupRewardId, GarageCleanupRewardInfo> GarageCleanupRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> GarageFlashSaleGroups
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> GarageFlashSales
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<HotspotId, HotspotDefinition> HotspotDefinitions
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<HotspotId, IEnumerable`1<HotspotDefinition>> HotspotOpensAfterCompletion
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<InAppProductId, InAppProductInfo> InAppProducts
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, CardCollectionCardId> InformantTipsByItemId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> InventorySlots
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, ConfigLookupValue`1<ItemInPocketInfo>> ItemInPocketInfoByItemId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, ItemDefinition> Items
	{
		 get { } //Length: 0
	}

	public IImmutableSet<Int32> ItemsAcceptedBySinks
	{
		 get { } //Length: 0
	}

	public IReadOnlyCollection<ConfigLookupValue`1<IItemDefinition>> ItemsAvailableOnlyDuringCardCollectionEvent
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LanguageId, LanguageInfo> Languages
	{
		 get { } //Length: 0
	}

	public ILastNSegmentsConfig LastNSegmentsConfig
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LayeredDecorationSetId, LayeredDecorationSetInfo> LayeredDecorations
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, LeaderboardEventId> LeaderboardEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LeaderboardEventId, LeaderboardEventInfo> LeaderboardEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<EventLevelSetId, EventLevels> LevelSets
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LevelUpTutorialConfigId, LevelUpTutorialConfig> LevelUpTutorialConfig
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LocationId, LocationInfo> Locations
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LocationTravelId, LocationTravelInfo> LocationTravels
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MetaOfferId, MakeYourOwnOfferInfo> MakeYourOwnOffers
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MapCharacterEventId, MapCharacterEventDefinition> MapCharacterEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MapSpotId, MapSpotInfo> MapSpots
	{
		 get { } //Length: 0
	}

	public int MaxEnergyModeCount
	{
		 get { } //Length: 272
	}

	public int MaxPlayerLevel
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeChainId, MergeChainDefinition> MergeChains
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<LeaderboardEventId, List`1<ConfigLookupValue`1<MergeChainDefinition>>> MergeChainsByLeaderboardEventId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<OfferPlacementId, List`1<MetaOfferGroupInfoBase>> MetaOfferGroupsPerPlacementInMostImportantFirstOrder
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MiniEventId, MiniEventInfo> MiniEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MixABoosterEventId, MixABoosterEventInfo> MixABoosterEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MixABoosterIngredientId, MixABoosterIngredient> MixABoosterIngredients
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MixABoosterRecipeId, MixABoosterRecipe> MixABoosterRecipes
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineChainMultiplierId, MysteryMachineChainMultiplierInfo> MysteryMachineChainMultipliers
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo> MysteryMachineCurrencyItemChains
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo> MysteryMachineCurrencyItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, MysteryMachineEventId> MysteryMachineEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineEventId, MysteryMachineEventInfo> MysteryMachineEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo> MysteryMachineExtraItemGranting
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<Int32> MysteryMachineItemIds
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineItemId, MysteryMachineItemInfo> MysteryMachineItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineItemScoreId, MysteryMachineItemScore> MysteryMachineItemScores
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineItemSetId, MysteryMachineItemSetInfo> MysteryMachineItemSets
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, MysteryMachineLeaderboardConfigInfo> MysteryMachineLeaderboardConfigs
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, IImmutableSet`1<PlayerSegmentId>> MysteryMachineLeaderboardRewardSegments
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineMultiplierId, MysteryMachineMultiplierInfo> MysteryMachineMultipliers
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo> MysteryMachineProgressionEventProgressItemChains
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineId, MysteryMachineInfo> MysteryMachines
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo> MysteryMachineSpecialItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MysteryMachineSpecialSaleId, MysteryMachineSpecialSaleInfo> MysteryMachineSpecialSales
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<OfferPlacementId, List`1<MetaOfferGroupId>> OfferGroupIdsByOfferPlacementId
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MetaOfferGroupId, MergeMansionOfferGroupInfo> OfferGroups
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<OfferPlacementId, List`1<OfferPlacementId>> OfferPlacementIds
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<OfferPopupTriggerId, OfferPopupTrigger> OfferPopupTriggers
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MetaOfferId, MergeMansionOfferInfo> Offers
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, List`1<HotspotId>> OpenMergeBoardHotspotsByMergeBoard
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<ConfigLookupValue`1<TemporaryCardCollectionEventInfo>> OrderedTemporaryCardCollectionEventInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<OrderRequirementsId, OrderRequirements> OrderRequirements
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ConfigLookupValue`1<ItemDefinition>, IOverrideSpawnChanceFeatures> OverrideSpawnChanceByItemDefinition
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<PetId, PetInfo> PetInfos
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<PitySystemId, PitySystemRuleRequirementsInfo> PitySystemRuleRequirements
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<PitySystemId, PitySystemRuleInfo> PitySystemRules
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, PlayerLevelData> PlayerLevels
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<PlayerSegmentId, PlayerSegmentInfo> PlayerSegments
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<String, MMPlaylist> Playlists
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<PortalPieceChainData> PortalPieceChains
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> ProducerInventorySlots
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<IReadOnlyList`1<Int32>> ProducerVariants
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<InAppProductId> ProgressionEventIAPs
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ProgressionEventId, ProgressionEventInfo> ProgressionEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ProgressionEventStreakId, ProgressionEventStreakRewards> ProgressionEventStreaks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ProgressionPackEventId, ProgressionPackEventInfo> ProgressionPackEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ProgressionPackId, ProgressionPack> ProgressionPacks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ProgressionTrackId, ProgressionTrackInfo> ProgressionTracks
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ReEngagementSettingsId, ReEngagementSettings> ReEngagementSettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<RentableInventorySettingsId, RentableInventorySettings> RentableInventorySettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<RequirementId, RequirementInfo> Requirements
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<RequirementSetId, RequirementSet> RequirementSets
	{
		 get { } //Length: 0
	}

	public RestoreCountryCodeSettings RestoreCountryCodeSettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<RewardContainerId, RewardContainerInfo> RewardContainers
	{
		 get { } //Length: 0
	}

	public IRollTheDiceConfig RollTheDiceConfig
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ScheduledActionId, ScheduledActionInfo> ScheduledActions
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SeasonId, SeasonInfo> Seasons
	{
		 get { } //Length: 0
	}

	public SharedGlobals SharedGlobals
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SharedProducerSettingsId, SharedProducerSettings> SharedProducerSettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShopItemId, ShopItemInfo> ShopItems
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShopLayoutId, ShopLayout> ShopLayouts
	{
		 get { } //Length: 0
	}

	public IImmutableSet<MergeBoardId> ShortLeaderboardEventBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShortLeaderboardEventId, ShortLeaderboardEventInfo> ShortLeaderboardEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<ShortLeaderboardEventStageId, ShortLeaderboardEventStageInfo> ShortLeaderboardEventStages
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SlideShowId, SlideShow> SlideShows
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<AuthenticationPlatform, SocialAuthenticationConfig> SocialAuthentication
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SocialAuthRewardId, SocialAuthRewardInfo> SocialAuthRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SocialMediaId, SocialMediaInfo> SocialMedia
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SoloMilestoneEventId, SoloMilestoneEventInfo> SoloMilestoneEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SoloMilestoneMilestonesId, SoloMilestoneMilestonesInfo> SoloMilestoneMilestones
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<SoloMilestoneTokenSpawnsId, SoloMilestoneTokenSpawnsInfo> SoloMilestoneTokenSpawns
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<StoryDefinitionId, StoryElementInfo> StoryElements
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, SuppressedBuildLogsInfo> SuppressedWarnings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<String, TagRewardsInfo> TagRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<TemporaryCardCollectionEventId, TemporaryCardCollectionEventInfo> TemporaryCardCollectionEvents
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, TimedMergeBoard> TimedMergeBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<VideoId, Video> Videos
	{
		 get { } //Length: 0
	}

	public WebShopSettings WebShopSettings
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeRewardId, MergeReward> XpMergeRewards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<AddressablesDownloadProcessId, AddressablesDownloadProcess> get_AddressablesDownloadProcesses() { }

	public IReadOnlyDictionary<AreaId, AreaInfo> get_Areas() { }

	public IReadOnlyDictionary<AreasGlobalUnlockRequirementId, AreasGlobalUnlockRequirementInfo> get_AreasGlobalUnlockRequirements() { }

	public IReadOnlyList<HotspotId> get_AreaUnlockHotspots() { }

	public AutoMergeSettings get_AutoMergeSettings() { }

	public IImmutableSet<MergeBoardId> get_AuxEnergyMergeBoards() { }

	public IReadOnlyDictionary<MergeBoardId, EventId> get_BoardEventBoards() { }

	public IReadOnlyDictionary<MergeBoardId, BoardInfo> get_Boards() { }

	public IReadOnlyDictionary<BoultonLeagueEventId, BoultonLeagueEventInfo> get_BoultonLeagueEvents() { }

	public IReadOnlyDictionary<BoultonLeagueStageId, BoultonLeagueStageInfo> get_BoultonLeagueStages() { }

	public IReadOnlyDictionary<BubblesSetupId, BubblesSetup> get_BubbleSetups() { }

	public IReadOnlyDictionary<BubbleVariationId, BubbleVariantsDefinition> get_BubbleVariations() { }

	public IBuilderEventConfig get_BuilderEventConfig() { }

	public IReadOnlyDictionary<CardCollectionBalanceId, CardCollectionBalanceInfo> get_CardCollectionBalanceInfos() { }

	public IReadOnlyDictionary<CardCollectionCardActivationId, CardCollectionCardActivationInfo> get_CardCollectionCardActivationInfos() { }

	public IReadOnlyDictionary<CardCollectionCardId, CardCollectionCardInfo> get_CardCollectionCardInfos() { }

	public IReadOnlyDictionary<CardCollectionCardSetId, CardCollectionCardSetInfo> get_CardCollectionCardSetInfos() { }

	public IReadOnlyDictionary<CardCollectionDuplicateRewardId, CardCollectionDuplicateRewardInfo> get_CardCollectionDuplicateCardRewards() { }

	public IReadOnlyDictionary<CardCollectionEvidenceBoxId, CardCollectionEvidenceBoxInfo> get_CardCollectionEvidenceBoxes() { }

	public IReadOnlyDictionary<CardCollectionHiddenRarityActivationId, CardCollectionHiddenRarityActivationInfo> get_CardCollectionHiddenRarityActivationInfos() { }

	public IReadOnlyDictionary<CardCollectionPackActivationId, CardCollectionPackActivationInfo> get_CardCollectionPackActivationInfos() { }

	public IReadOnlyDictionary<CardCollectionPackId, CardCollectionPackInfo> get_CardCollectionPackInfos() { }

	public IReadOnlyDictionary<CardCollectionSetActivationId, CardCollectionSetActivationInfo> get_CardCollectionSetActivationInfos() { }

	public IReadOnlyDictionary<CardCollectionSupportingEventId, CardCollectionSupportingEventInfo> get_CardCollectionSupportingEvents() { }

	public IReadOnlyDictionary<CardCollectionPackId, CardCollectionSupportingEventReplacementPackInfo> get_CardCollectionSupportingEventsReplacementPacks() { }

	public IImmutableSet<Int32> get_CardDeckItems() { }

	public IImmutableSet<Int32> get_CardItems() { }

	public IReadOnlyDictionary<Int32, CardCollectionPackId> get_CardPacksByItemId() { }

	public IReadOnlyDictionary<CardStackId, CardStackInfo> get_CardStacks() { }

	public IReadOnlyDictionary<DialogItemId, List`1<DialogCharacterType>> get_CharactersToForceDiscoverByNonHotspotDialogItemId() { }

	public IReadOnlyDictionary<ClassicRacesEventStageId, ClassicRacesEventStageInfo> get_ClassicRacesEventStages() { }

	public IReadOnlyDictionary<CoreSupportEventMinigameId, ClassicRacesMinigameInfo> get_ClassicRacesMinigames() { }

	public IReadOnlyDictionary<CodexCategoryId, CodexCategoryInfo> get_CodexCategories() { }

	public IReadOnlyDictionary<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo> get_CodexDiscoveryRewards() { }

	public IReadOnlyDictionary<MergeBoardId, List`1<CollectibleBoardEventId>> get_CollectibleBoardEventBoards() { }

	public IReadOnlyDictionary<CollectibleBoardEventId, CollectibleBoardEventInfo> get_CollectibleBoardEvents() { }

	public IReadOnlyDictionary<CollectibleDialoguesInfoId, CollectibleDialoguesInfo> get_CollectibleDialoguesInfo() { }

	public IReadOnlyDictionary<CoreSupportEventId, CoreSupportEventInfo> get_CoreSupportEvents() { }

	public IReadOnlyList<InAppProductId> get_CurrencyBankIAPs() { }

	public IReadOnlyDictionary<CurrencyBankId, CurrencyBankInfo> get_CurrencyBanks() { }

	public IReadOnlyDictionary<CustomHotspotTableId, CustomHotspotTablesInfo> get_CustomTables() { }

	public IReadOnlyDictionary<CutsceneId, CutsceneInfo> get_Cutscenes() { }

	public IDailyChallengesEventConfig get_DailyChallengesEventConfig() { }

	public IReadOnlyDictionary<DailyScoopDayId, DailyScoopDayData> get_DailyScoopDays() { }

	public IReadOnlyDictionary<DailyScoopEventId, DailyScoopEventInfo> get_DailyScoopEvents() { }

	public IReadOnlyDictionary<DailyScoopMilestoneId, DailyScoopMilestoneData> get_DailyScoopMilestones() { }

	public IReadOnlyDictionary<DailyScoopSpecialObjectiveId, DailyScoopSpecialObjectiveData> get_DailyScoopSpecialObjectives() { }

	public IReadOnlyDictionary<DailyScoopStandardObjectiveId, DailyScoopStandardObjectiveData> get_DailyScoopStandardObjectives() { }

	public IReadOnlyDictionary<DailyScoopWeekId, DailyScoopWeekData> get_DailyScoopWeeks() { }

	public IReadOnlyDictionary<DailyTaskId, DailyTaskDefinition> get_DailyTasks() { }

	public IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2Info> get_DailyTasksV2() { }

	public IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueInfo> get_DailyTasksV2BoultonLeague() { }

	public IReadOnlyDictionary<DailyTaskV2Id, DailyTaskV2BoultonLeagueUnlimitedInfo> get_DailyTasksV2BoultonLeagueUnlimited() { }

	public IReadOnlyDictionary<ItemTypeConstant, DailyTasksV2ItemBoultonLeagueInfo> get_DailyTasksV2ItemsBoultonLeague() { }

	public IReadOnlyDictionary<MergeChainId, DailyTasksV2MergeChainInfo> get_DailyTasksV2MergeChains() { }

	public DailyTasksV2Settings get_DailyTasksV2Settings() { }

	public IReadOnlyDictionary<DecorationId, DecorationInfo> get_Decorations() { }

	public IReadOnlyDictionary<DecorationShopItemId, DecorationShopItemInfo> get_DecorationShopItems() { }

	public IReadOnlyDictionary<DecorationShopId, DecorationShopInfo> get_DecorationShops() { }

	public IReadOnlyDictionary<MetaOfferId, DelayedOfferPurchaseRequirement> get_DelayedOfferPurchaseRequirements() { }

	public IReadOnlyDictionary<DialogItemId, DialogItemInfo> get_DialogItems() { }

	public IReadOnlyDictionary<DialogCharacterType, DialogueCharacterInfo> get_DialogueCharacters() { }

	public IReadOnlyDictionary<DigEventBoardId, DigEventBoards> get_DigEventBoards() { }

	public IReadOnlyDictionary<DigEventItemId, DigEventItemInfo> get_DigEventItemInfos() { }

	public IReadOnlyDictionary<MergeBoardId, List`1<CollectibleBoardEventId>> get_DigEventMergeBoards() { }

	public IReadOnlyDictionary<DigEventMuseumCollectionId, DigEventMuseumCollectionInfo> get_DigEventMuseumCollections() { }

	public IReadOnlyDictionary<DigEventId, DigEventInfo> get_DigEvents() { }

	public IReadOnlyDictionary<DigEventMuseumShelfId, DigEventMuseumShelfInfo> get_DigEventShelves() { }

	public IReadOnlyDictionary<DigEventShinyProgressionId, DigEventShinyProgression> get_DigEventShinyProgression() { }

	public IReadOnlyDictionary<ValueTuple`2<CardStars, TemporaryCardCollectionEventId>, DuplicateRewardPair> get_DuplicateRewards() { }

	public IReadOnlyDictionary<ShopItemId, DynamicPurchaseDefinition> get_DynamicPurchaseProducts() { }

	public IReadOnlyDictionary<EnergyModeEventId, EnergyModeEventInfo> get_EnergyModeEvents() { }

	public IReadOnlyDictionary<Int32, EnergyModeProgressionEventItemInfo> get_EnergyModeProgressionEventItems() { }

	public IReadOnlyDictionary<PlayerModeId, EnergyModeInfo> get_EnergyModes() { }

	public IReadOnlyDictionary<EnergyType, EnergySettingsConfig> get_EnergySettings() { }

	public IReadOnlyDictionary<EventCharacterId, EventCharacterInfo> get_EventCharacters() { }

	public IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> get_EventFlashSaleGroups() { }

	public IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> get_EventFlashSales() { }

	public IReadOnlyDictionary<EventLevelId, EventLevelInfo> get_EventLevels() { }

	public IReadOnlyDictionary<MergeBoardId, List`1<IStringId>> get_EventsByMergeBoard() { }

	public IReadOnlyDictionary<EventTaskId, EventTaskInfo> get_EventTasks() { }

	public IReadOnlyDictionary<CardStackId, ExtraSpawnCardStackValueInfo> get_ExtraSpawnCardStackValues() { }

	public IReadOnlyDictionary<Currencies, ExtraSpawnCurrencyValueInfo> get_ExtraSpawnCurrencyValues() { }

	public IReadOnlyDictionary<CustomHotspotTableId, ExtraSpawnIllustrationValueInfo> get_ExtraSpawnIllustrationValues() { }

	public IReadOnlyDictionary<Int32, ExtraSpawnItemValueInfo> get_ExtraSpawnItemValues() { }

	public IReadOnlyDictionary<String, ExtraSpawnInfo> get_ExtraSpawns() { }

	public IReadOnlyDictionary<ExtraSpawnTriggerType, OrderedSet`1<CoreSupportEventTokenId>> get_ExtraSpawnTriggerCoreSupportEventTokens() { }

	public IReadOnlyDictionary<Int32, ConfigLookupValue`1<FallbackItemInfo>> get_FallbackItemInfoByItemId() { }

	public IReadOnlyDictionary<FallbackPlayerRewardId, FallbackPlayerRewardInfo> get_FallbackPlayerRewards() { }

	public IReadOnlyDictionary<CollectibleBoardEventId, MergeBoardId> get_FishingEventBoards() { }

	public IReadOnlyList<ConfigLookupValue`1<IItemDefinition>> get_FishingRodItems() { }

	public IFishingSettings get_FishingSettings() { }

	public IReadOnlyList<ConfigLookupValue`1<IItemDefinition>> get_FishItems() { }

	public IReadOnlyDictionary<FlashSaleGroupId, ConfigLookupValue`1<FlashSaleGroupDefinition>> get_FlashSaleGroups() { }

	public IReadOnlyDictionary<FlashSaleShopSettingsId, FlashSaleShopSettings> get_FlashSaleShopSettings() { }

	public IReadOnlyDictionary<GameFeatureId, GameFeatureSetting> get_GameFeatures() { }

	public IReadOnlyDictionary<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo> get_GarageCleanupBoardRows() { }

	public IReadOnlyDictionary<GarageCleanupEventId, GarageCleanupEventInfo> get_GarageCleanupEvents() { }

	public IReadOnlyDictionary<GarageCleanupPatternRowId, GarageCleanupPatternRowInfo> get_GarageCleanupPatternRows() { }

	public IReadOnlyDictionary<GarageCleanupPatternSetId, GarageCleanupPatternSetInfo> get_GarageCleanupPatternSets() { }

	public IReadOnlyDictionary<GarageCleanupRewardId, GarageCleanupRewardInfo> get_GarageCleanupRewards() { }

	public IReadOnlyDictionary<FlashSaleGroupId, FlashSaleGroupDefinition> get_GarageFlashSaleGroups() { }

	public IReadOnlyDictionary<ShopItemId, FlashSaleDefinition> get_GarageFlashSales() { }

	public IReadOnlyDictionary<HotspotId, HotspotDefinition> get_HotspotDefinitions() { }

	public IReadOnlyDictionary<HotspotId, IEnumerable`1<HotspotDefinition>> get_HotspotOpensAfterCompletion() { }

	public IReadOnlyDictionary<InAppProductId, InAppProductInfo> get_InAppProducts() { }

	public IReadOnlyDictionary<Int32, CardCollectionCardId> get_InformantTipsByItemId() { }

	public IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> get_InventorySlots() { }

	public IReadOnlyDictionary<Int32, ConfigLookupValue`1<ItemInPocketInfo>> get_ItemInPocketInfoByItemId() { }

	public IReadOnlyDictionary<Int32, ItemDefinition> get_Items() { }

	public IImmutableSet<Int32> get_ItemsAcceptedBySinks() { }

	public IReadOnlyCollection<ConfigLookupValue`1<IItemDefinition>> get_ItemsAvailableOnlyDuringCardCollectionEvent() { }

	public IReadOnlyDictionary<LanguageId, LanguageInfo> get_Languages() { }

	public ILastNSegmentsConfig get_LastNSegmentsConfig() { }

	public IReadOnlyDictionary<LayeredDecorationSetId, LayeredDecorationSetInfo> get_LayeredDecorations() { }

	public IReadOnlyDictionary<MergeBoardId, LeaderboardEventId> get_LeaderboardEventBoards() { }

	public IReadOnlyDictionary<LeaderboardEventId, LeaderboardEventInfo> get_LeaderboardEvents() { }

	public IReadOnlyDictionary<EventLevelSetId, EventLevels> get_LevelSets() { }

	public IReadOnlyDictionary<LevelUpTutorialConfigId, LevelUpTutorialConfig> get_LevelUpTutorialConfig() { }

	public IReadOnlyDictionary<LocationId, LocationInfo> get_Locations() { }

	public IReadOnlyDictionary<LocationTravelId, LocationTravelInfo> get_LocationTravels() { }

	public IReadOnlyDictionary<MetaOfferId, MakeYourOwnOfferInfo> get_MakeYourOwnOffers() { }

	public IReadOnlyDictionary<MapCharacterEventId, MapCharacterEventDefinition> get_MapCharacterEvents() { }

	public IReadOnlyDictionary<MapSpotId, MapSpotInfo> get_MapSpots() { }

	public int get_MaxEnergyModeCount() { }

	public int get_MaxPlayerLevel() { }

	public IReadOnlyDictionary<MergeChainId, MergeChainDefinition> get_MergeChains() { }

	public IReadOnlyDictionary<LeaderboardEventId, List`1<ConfigLookupValue`1<MergeChainDefinition>>> get_MergeChainsByLeaderboardEventId() { }

	public IReadOnlyDictionary<OfferPlacementId, List`1<MetaOfferGroupInfoBase>> get_MetaOfferGroupsPerPlacementInMostImportantFirstOrder() { }

	public IReadOnlyDictionary<MiniEventId, MiniEventInfo> get_MiniEvents() { }

	public IReadOnlyDictionary<MixABoosterEventId, MixABoosterEventInfo> get_MixABoosterEvents() { }

	public IReadOnlyDictionary<MixABoosterIngredientId, MixABoosterIngredient> get_MixABoosterIngredients() { }

	public IReadOnlyDictionary<MixABoosterRecipeId, MixABoosterRecipe> get_MixABoosterRecipes() { }

	public IReadOnlyDictionary<MysteryMachineChainMultiplierId, MysteryMachineChainMultiplierInfo> get_MysteryMachineChainMultipliers() { }

	public IReadOnlyDictionary<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo> get_MysteryMachineCurrencyItemChains() { }

	public IReadOnlyDictionary<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo> get_MysteryMachineCurrencyItems() { }

	public IReadOnlyDictionary<MergeBoardId, MysteryMachineEventId> get_MysteryMachineEventBoards() { }

	public IReadOnlyDictionary<MysteryMachineEventId, MysteryMachineEventInfo> get_MysteryMachineEvents() { }

	public IReadOnlyDictionary<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo> get_MysteryMachineExtraItemGranting() { }

	public IReadOnlyList<Int32> get_MysteryMachineItemIds() { }

	public IReadOnlyDictionary<MysteryMachineItemId, MysteryMachineItemInfo> get_MysteryMachineItems() { }

	public IReadOnlyDictionary<MysteryMachineItemScoreId, MysteryMachineItemScore> get_MysteryMachineItemScores() { }

	public IReadOnlyDictionary<MysteryMachineItemSetId, MysteryMachineItemSetInfo> get_MysteryMachineItemSets() { }

	public IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, MysteryMachineLeaderboardConfigInfo> get_MysteryMachineLeaderboardConfigs() { }

	public IReadOnlyDictionary<MysteryMachineLeaderboardConfigId, IImmutableSet`1<PlayerSegmentId>> get_MysteryMachineLeaderboardRewardSegments() { }

	public IReadOnlyDictionary<MysteryMachineMultiplierId, MysteryMachineMultiplierInfo> get_MysteryMachineMultipliers() { }

	public IReadOnlyDictionary<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo> get_MysteryMachineProgressionEventProgressItemChains() { }

	public IReadOnlyDictionary<MysteryMachineId, MysteryMachineInfo> get_MysteryMachines() { }

	public IReadOnlyDictionary<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo> get_MysteryMachineSpecialItems() { }

	public IReadOnlyDictionary<MysteryMachineSpecialSaleId, MysteryMachineSpecialSaleInfo> get_MysteryMachineSpecialSales() { }

	public IReadOnlyDictionary<OfferPlacementId, List`1<MetaOfferGroupId>> get_OfferGroupIdsByOfferPlacementId() { }

	public IReadOnlyDictionary<MetaOfferGroupId, MergeMansionOfferGroupInfo> get_OfferGroups() { }

	public IReadOnlyDictionary<OfferPlacementId, List`1<OfferPlacementId>> get_OfferPlacementIds() { }

	public IReadOnlyDictionary<OfferPopupTriggerId, OfferPopupTrigger> get_OfferPopupTriggers() { }

	public IReadOnlyDictionary<MetaOfferId, MergeMansionOfferInfo> get_Offers() { }

	public IReadOnlyDictionary<MergeBoardId, List`1<HotspotId>> get_OpenMergeBoardHotspotsByMergeBoard() { }

	public IReadOnlyList<ConfigLookupValue`1<TemporaryCardCollectionEventInfo>> get_OrderedTemporaryCardCollectionEventInfos() { }

	public IReadOnlyDictionary<OrderRequirementsId, OrderRequirements> get_OrderRequirements() { }

	public IReadOnlyDictionary<ConfigLookupValue`1<ItemDefinition>, IOverrideSpawnChanceFeatures> get_OverrideSpawnChanceByItemDefinition() { }

	public IReadOnlyDictionary<PetId, PetInfo> get_PetInfos() { }

	public IReadOnlyDictionary<PitySystemId, PitySystemRuleRequirementsInfo> get_PitySystemRuleRequirements() { }

	public IReadOnlyDictionary<PitySystemId, PitySystemRuleInfo> get_PitySystemRules() { }

	public IReadOnlyDictionary<Int32, PlayerLevelData> get_PlayerLevels() { }

	public IReadOnlyDictionary<PlayerSegmentId, PlayerSegmentInfo> get_PlayerSegments() { }

	public IReadOnlyDictionary<String, MMPlaylist> get_Playlists() { }

	public IReadOnlyList<PortalPieceChainData> get_PortalPieceChains() { }

	public IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> get_ProducerInventorySlots() { }

	public IReadOnlyList<IReadOnlyList`1<Int32>> get_ProducerVariants() { }

	public IReadOnlyList<InAppProductId> get_ProgressionEventIAPs() { }

	public IReadOnlyDictionary<ProgressionEventId, ProgressionEventInfo> get_ProgressionEvents() { }

	public IReadOnlyDictionary<ProgressionEventStreakId, ProgressionEventStreakRewards> get_ProgressionEventStreaks() { }

	public IReadOnlyDictionary<ProgressionPackEventId, ProgressionPackEventInfo> get_ProgressionPackEvents() { }

	public IReadOnlyDictionary<ProgressionPackId, ProgressionPack> get_ProgressionPacks() { }

	public IReadOnlyDictionary<ProgressionTrackId, ProgressionTrackInfo> get_ProgressionTracks() { }

	public IReadOnlyDictionary<ReEngagementSettingsId, ReEngagementSettings> get_ReEngagementSettings() { }

	public IReadOnlyDictionary<RentableInventorySettingsId, RentableInventorySettings> get_RentableInventorySettings() { }

	public IReadOnlyDictionary<RequirementId, RequirementInfo> get_Requirements() { }

	public IReadOnlyDictionary<RequirementSetId, RequirementSet> get_RequirementSets() { }

	public RestoreCountryCodeSettings get_RestoreCountryCodeSettings() { }

	public IReadOnlyDictionary<RewardContainerId, RewardContainerInfo> get_RewardContainers() { }

	public IRollTheDiceConfig get_RollTheDiceConfig() { }

	public IReadOnlyDictionary<ScheduledActionId, ScheduledActionInfo> get_ScheduledActions() { }

	public IReadOnlyDictionary<SeasonId, SeasonInfo> get_Seasons() { }

	public SharedGlobals get_SharedGlobals() { }

	public IReadOnlyDictionary<SharedProducerSettingsId, SharedProducerSettings> get_SharedProducerSettings() { }

	public IReadOnlyDictionary<ShopItemId, ShopItemInfo> get_ShopItems() { }

	public IReadOnlyDictionary<ShopLayoutId, ShopLayout> get_ShopLayouts() { }

	public IImmutableSet<MergeBoardId> get_ShortLeaderboardEventBoards() { }

	public IReadOnlyDictionary<ShortLeaderboardEventId, ShortLeaderboardEventInfo> get_ShortLeaderboardEvents() { }

	public IReadOnlyDictionary<ShortLeaderboardEventStageId, ShortLeaderboardEventStageInfo> get_ShortLeaderboardEventStages() { }

	public IReadOnlyDictionary<SlideShowId, SlideShow> get_SlideShows() { }

	public IReadOnlyDictionary<AuthenticationPlatform, SocialAuthenticationConfig> get_SocialAuthentication() { }

	public IReadOnlyDictionary<SocialAuthRewardId, SocialAuthRewardInfo> get_SocialAuthRewards() { }

	public IReadOnlyDictionary<SocialMediaId, SocialMediaInfo> get_SocialMedia() { }

	public IReadOnlyDictionary<SoloMilestoneEventId, SoloMilestoneEventInfo> get_SoloMilestoneEvents() { }

	public IReadOnlyDictionary<SoloMilestoneMilestonesId, SoloMilestoneMilestonesInfo> get_SoloMilestoneMilestones() { }

	public IReadOnlyDictionary<SoloMilestoneTokenSpawnsId, SoloMilestoneTokenSpawnsInfo> get_SoloMilestoneTokenSpawns() { }

	public IReadOnlyDictionary<StoryDefinitionId, StoryElementInfo> get_StoryElements() { }

	public IReadOnlyDictionary<Int32, SuppressedBuildLogsInfo> get_SuppressedWarnings() { }

	public IReadOnlyDictionary<String, TagRewardsInfo> get_TagRewards() { }

	public IReadOnlyDictionary<TemporaryCardCollectionEventId, TemporaryCardCollectionEventInfo> get_TemporaryCardCollectionEvents() { }

	public IReadOnlyDictionary<MergeBoardId, TimedMergeBoard> get_TimedMergeBoards() { }

	public IReadOnlyDictionary<VideoId, Video> get_Videos() { }

	public WebShopSettings get_WebShopSettings() { }

	public IReadOnlyDictionary<MergeRewardId, MergeReward> get_XpMergeRewards() { }

	public IEnumerable<MergeChainDefinition> GetCodexMergeChains() { }

	public IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRequirementItemsDefault() { }

	public IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRequirementItemsInfinite() { }

	public IReadOnlyList<IItemDefinition> GetDailyTasksV2AllPossibleRewardItems() { }

	public EnergySettingsConfig GetEnergySettingsConfig(EnergyType energyType) { }

	public HotspotDefinition GetHotspotDefinition(HotspotId hotspotId) { }

	public IReadOnlyList<HotspotId> GetHotspotParentTree(HotspotId hotspotId) { }

	public IEnumerable<MergeChainDefinition> GetMergeChainsInCategory(CodexCategoryId categoryId) { }

}

