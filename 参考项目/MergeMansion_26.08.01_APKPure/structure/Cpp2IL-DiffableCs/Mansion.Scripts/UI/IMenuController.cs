namespace UI;

public interface IMenuController
{

	public event Action<Boolean> OnMenuVisibilityChange
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public event Action OnStackedMenuPushed
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public AnimationConfigLibrary AnimationConfigLibrary
	{
		 get { } //Length: 0
	}

	public ArtifactLibrary ArtifactLibrary
	{
		 get { } //Length: 0
	}

	public BoultonLeagueStageLibrary BoultonLeagueStageLibrary
	{
		 get { } //Length: 0
	}

	public CardCollectionSupportingEventPrefabsLibrary CardCollectionSupportingEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public CharacterLibrary CharacterLibrary
	{
		 get { } //Length: 0
	}

	public AllCollectibleBoardEventsPrefabsLibrary CollectibleBoardEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public CoreSupportEventPrefabsLibrary CoreSupportEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public CoreSupportingEventsPrefabsLibrary CoreSupportingEventsPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public CurrencyBankLibrary CurrencyBankLibrary
	{
		 get { } //Length: 0
	}

	public DailyScoopEventPrefabsLibrary DailyScoopEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public DailyTasksV2Library DailyTasksV2Library
	{
		 get { } //Length: 0
	}

	public DecorationShopPrefabsLibrary DecorationShopPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public DecorationsLibrary DecorationsLibrary
	{
		 get { } //Length: 0
	}

	public IIconLibrary DefaultIconLibrary
	{
		 get { } //Length: 0
	}

	public EnergyModeEventPrefabsLibrary EnergyModeEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public IIconLibrary EventIconLibrary
	{
		 get { } //Length: 0
	}

	public IllustrationLibrary IllustrationLibrary
	{
		 get { } //Length: 0
	}

	public IInputController InputController
	{
		 get { } //Length: 0
	}

	public bool IsInTransition
	{
		 get { } //Length: 0
	}

	public bool IsMenuOpen
	{
		 get { } //Length: 0
	}

	public MergeBoardLibrary MergeBoardLibrary
	{
		 get { } //Length: 0
	}

	public MiniEventPrefabsLibrary MiniEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public MixABoosterEventPrefabsLibrary MixABoosterEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public MysteryMachineEventPrefabsLibrary MysteryMachineEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public IOfferPopupsLibrary OfferPopupsLibrary
	{
		 get { } //Length: 0
	}

	public IMenuState OpenedPopupModel
	{
		 get { } //Length: 0
	}

	public string OpenMenuTag
	{
		 get { } //Length: 0
	}

	public MergeBoardId PlayerActiveMergeBoardId
	{
		 get { } //Length: 0
	}

	public ProgressionPackEventPrefabLibrary ProgressionPackEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public IRewardsAnimations RewardsAnimations
	{
		 get { } //Length: 0
	}

	public ISafeRollback Rollback
	{
		 get { } //Length: 0
	}

	public SeasonalityPrefabsLibrary SeasonalityPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public ShortLeaderboardEventPrefabsLibrary ShortLeaderboardEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public SoloMilestoneEventPrefabsLibrary SoloMilestoneEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public TemporaryCardCollectionEventPrefabsLibrary TemporaryCardCollectionEventPrefabsLibrary
	{
		 get { } //Length: 0
	}

	public TemporaryCardCollectionEventSpritesLibrary TemporaryCardCollectionEventSpritesLibrary
	{
		 get { } //Length: 0
	}

	[CompilerGenerated]
	public void add_OnMenuVisibilityChange(Action<Boolean> value) { }

	[CompilerGenerated]
	public void add_OnStackedMenuPushed(Action value) { }

	public UniTask BatchRewardContainerClaimSequence(List<IPlayerReward> rewardsToClaim, IWalletState startingWalletState, List<RandomPCG> rewardContainerRandomCheckpoints, Action onStart, Action onComplete) { }

	public bool CloseCurrentMenu(object from) { }

	public bool CloseNoStackedMenu(IMenuSection from) { }

	public void CompleteTransition(string menuTag) { }

	public void DeleteInboxItem(IMailMessage inboxItem) { }

	public void ForceCloseAllPopups() { }

	public AnimationConfigLibrary get_AnimationConfigLibrary() { }

	public ArtifactLibrary get_ArtifactLibrary() { }

	public BoultonLeagueStageLibrary get_BoultonLeagueStageLibrary() { }

	public CardCollectionSupportingEventPrefabsLibrary get_CardCollectionSupportingEventPrefabsLibrary() { }

	public CharacterLibrary get_CharacterLibrary() { }

	public AllCollectibleBoardEventsPrefabsLibrary get_CollectibleBoardEventPrefabsLibrary() { }

	public CoreSupportEventPrefabsLibrary get_CoreSupportEventPrefabsLibrary() { }

	public CoreSupportingEventsPrefabsLibrary get_CoreSupportingEventsPrefabsLibrary() { }

	public CurrencyBankLibrary get_CurrencyBankLibrary() { }

	public DailyScoopEventPrefabsLibrary get_DailyScoopEventPrefabsLibrary() { }

	public DailyTasksV2Library get_DailyTasksV2Library() { }

	public DecorationShopPrefabsLibrary get_DecorationShopPrefabsLibrary() { }

	public DecorationsLibrary get_DecorationsLibrary() { }

	public IIconLibrary get_DefaultIconLibrary() { }

	public EnergyModeEventPrefabsLibrary get_EnergyModeEventPrefabsLibrary() { }

	public IIconLibrary get_EventIconLibrary() { }

	public IllustrationLibrary get_IllustrationLibrary() { }

	public IInputController get_InputController() { }

	public bool get_IsInTransition() { }

	public bool get_IsMenuOpen() { }

	public MergeBoardLibrary get_MergeBoardLibrary() { }

	public MiniEventPrefabsLibrary get_MiniEventPrefabsLibrary() { }

	public MixABoosterEventPrefabsLibrary get_MixABoosterEventPrefabsLibrary() { }

	public MysteryMachineEventPrefabsLibrary get_MysteryMachineEventPrefabsLibrary() { }

	public IOfferPopupsLibrary get_OfferPopupsLibrary() { }

	public IMenuState get_OpenedPopupModel() { }

	public string get_OpenMenuTag() { }

	public MergeBoardId get_PlayerActiveMergeBoardId() { }

	public ProgressionPackEventPrefabLibrary get_ProgressionPackEventPrefabsLibrary() { }

	public IRewardsAnimations get_RewardsAnimations() { }

	public ISafeRollback get_Rollback() { }

	public SeasonalityPrefabsLibrary get_SeasonalityPrefabsLibrary() { }

	public ShortLeaderboardEventPrefabsLibrary get_ShortLeaderboardEventPrefabsLibrary() { }

	public SoloMilestoneEventPrefabsLibrary get_SoloMilestoneEventPrefabsLibrary() { }

	public TemporaryCardCollectionEventPrefabsLibrary get_TemporaryCardCollectionEventPrefabsLibrary() { }

	public TemporaryCardCollectionEventSpritesLibrary get_TemporaryCardCollectionEventSpritesLibrary() { }

	public IMenuSection GetCurrentMenu() { }

	public void HideAllMenus(HideMenuReason reason = 4) { }

	public bool IsAnyMenuInStack(Type[] menuTypes) { }

	public bool IsDebugStatePreventing() { }

	public bool IsMenuInStack() { }

	public bool IsSpecificMenuInStack(string menuTag) { }

	public bool NavigateBack(object from, Action onFinish) { }

	public bool NavigateBack(object from, bool showAllPrevious = false, bool showPreviousImmediately = false) { }

	public void PopMenuAndShowAll() { }

	public void PopMenuAndShowPrevious(bool showPreviousImmediately = false) { }

	public void PopMenuAndShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod) { }

	public void PopMenusBeforeShow(string menuTag, int maxPopCount = -1) { }

	public void PromptBuyConfirmation(Action confirmationAction, ICost cost) { }

	public void PromptCollectConfirmation(Action confirmationAction, string questionLocalizationIdPrefix = null) { }

	public void PromptCraftCardConfirmation(TemporaryCardCollectionEventModel eventModel, TemporaryCardCollectionCardHolder cardHolder, bool discovered, bool wildcardIsSpecial) { }

	public void PromptMergeConfirmation(MergeResult mergeResult, MergeItem fromItem, MergeItem toItem, Action confirmationAction, Action cancelAction, bool isAutoMergeEnabled) { }

	public void PromptSellConfirmation(Action confirmationAction) { }

	public void RefreshProducerInventoryIndicators() { }

	public void RegisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string popupToClose) { }

	[CompilerGenerated]
	public void remove_OnMenuVisibilityChange(Action<Boolean> value) { }

	[CompilerGenerated]
	public void remove_OnStackedMenuPushed(Action value) { }

	public void SetBackButtonEnabled(bool enabled) { }

	public void SetTab(string targetId, int tabIndex) { }

	public void ShowAccountDeleteInformationPopup() { }

	public void ShowAccountDeleteScheduledPopup(bool userInitiated, bool fromGameLoading) { }

	public void ShowAccountResetPopup() { }

	public void ShowAccountSuccessfullyResettedPopup(Action confirmationAction) { }

	public void ShowActivateWildCardPopup(TemporaryCardCollectionEventModel eventModel, bool isSpecial, Action onTap) { }

	public void ShowAreaCompleteRewardPopup(IAreaInfo area, IWalletState walletState, RandomPCG rewardContainerRandom) { }

	public void ShowAreaHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource, Action showHotspotFinished = null) { }

	public void ShowAreaHotspotPopupMenuInventorySinkConfirmationPopup(Action<IHotspotDefinition> confirmationAction, IHotspotDefinition hotspot, ValueTuple<IItemDefinition, Int32>[] sinkItems) { }

	public void ShowAreaInfoPopupMenu(IAreaInfo area, AreaInfoStyle areaInfoStyle, bool showIsNavigateBack, TaskSource taskSource) { }

	public void ShowAreaLockedHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public void ShowAreaUnlockedPopupMenu(IAreaInfo area) { }

	public void ShowAutoMergeBoosterPopup(MetaDuration durationSeconds) { }

	public void ShowAutoMergeEventInfoPopup(ICoreSupportEventModel eventModel) { }

	public void ShowAutoMergeEventStartPopup(CoreSupportEventModel eventModel) { }

	public void ShowAutoMergeFeatureFTUEPopup(bool force = false) { }

	public void ShowBoardShop(ShopMenuContentBlock shopContext, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true) { }

	public void ShowBoultonLeagueDeterminingLeaderboardPlacementRewardsPopup() { }

	public void ShowBoultonLeagueEventEndPopup(BoultonLeagueEventModel eventModel, BoultonLeagueEventEndPopupShowParams showParams = null) { }

	public void ShowBoultonLeagueEventInfoPopup(BoultonLeagueEventModel eventModel) { }

	public void ShowBoultonLeagueEventProgressionPopup(BoultonLeagueEventModel eventModel) { }

	public void ShowBoultonLeagueEventStartPopup(BoultonLeagueEventModel eventModel) { }

	public void ShowBuilderEventAllBuildsCompletedPopup(string titleText, string descriptionText, string buttonText) { }

	public void ShowBuilderEventCompletionRewardPopup(IBuilderEventMinigame minigameModel, ICoreSupportEventModel eventModel, Action onCompletedCallback) { }

	public void ShowBuilderEventInfoPopup(ICoreSupportEventModel eventModel) { }

	public void ShowBuilderEventMinigamePopup(BuilderEventMinigameModel minigameModel, ICoreSupportEventModel eventModel) { }

	public void ShowBuilderEventOutOfTokensPopup(ICoreSupportEventModel eventModel) { }

	public void ShowBuilderEventScreenTransitionEffect(ICoreSupportEventModel eventModel) { }

	public UniTask ShowCameraTutorialPopup(CollectibleBoardEventId relatedEventId, CancellationToken ct) { }

	public void ShowCardCollectionSupportingEventPopup(CardCollectionSupportingEventModel eventModel) { }

	public void ShowCardGamePopupMenu(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public void ShowCelebrationPopup(Action onRestart, string type) { }

	public void ShowChooseLanguagePopupMenu() { }

	public void ShowClassicRacesEventInfoPopup(ClassicRacesMinigameModel minigameModel, Action onClosedCallback) { }

	public void ShowClassicRacesEventProgressionPopup(ClassicRacesMinigameModel minigameModel, ICoreSupportEventModel eventModel) { }

	public void ShowClassicRacesExtraRacesPopup(ClassicRacesMinigameModel minigameModel) { }

	public void ShowClassicRacesRaceResultPopup(ClassicRacesMinigameModel minigameModel, CoreSupportEventModel eventModel, Action onCompletedCallback) { }

	public void ShowCloudTransitionEffect() { }

	public void ShowCollectEventProgressRewardPopupMenu(bool hideCurrentFirst = false) { }

	public UniTask ShowCollectibleBoardEventEndPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowCollectibleBoardEventExtendPopup(CollectibleBoardEventModel eventModel, Nullable<MetaTime> reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct) { }

	public UniTask ShowCollectibleBoardEventInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowCollectibleBoardEventIntroPopup(CollectibleBoardEventInfo eventInfo, InPreview inPreview, CancellationToken ct) { }

	public UniTask ShowCollectibleBoardEventProgressionPopup(CollectibleBoardEventModel eventModel, CancellationToken ct, bool hideCurrentFirst = false) { }

	public UniTask ShowCollectibleBoardEventStartPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public void ShowCollectibleBoardEventTaskPopup(CollectibleBoardEventModel eventModel) { }

	public UniTask ShowCollectibleBoardEventTeasePopup(CollectibleBoardEventInfo eventInfo, CancellationToken ct) { }

	public void ShowConfirmationDialogPopup(string titleTextLocId, string questionTextLocId, string confirmButtonTextLocId, string cancelButtonTextLocId, Action confirmAction, Action cancelAction, ConfirmationDialogExtra extra) { }

	public void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	public void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction, Func<String> livingError) { }

	public void ShowCooldownRemoverRewardPopup(MetaDuration duration, Action onClose) { }

	public void ShowCoreSupportEventEndPopup(CoreSupportEventModel eventModel) { }

	public void ShowCoreSupportEventIntroPopup(ICoreSupportEventInfo eventInfo, InPreview inPreview) { }

	public void ShowCoreSupportEventStartPopup(CoreSupportEventModel eventModel) { }

	public void ShowCoreSupportEventTeasePopup(CoreSupportEventModel eventModel) { }

	public void ShowCurrencyBankInfoPopup(CurrencyBankModel currencyBankModel) { }

	public void ShowCurrencyBankPopup() { }

	public void ShowCustomItemInfoPopupMenu(IItemDefinition itemDefinition, bool hideCurrentFirst = false) { }

	public void ShowDailyChallengesEventInfoPopup(bool isAuto, ICoreSupportEventModel eventModel) { }

	public void ShowDailyChallengesMinigamePopup(IPlayer player, IDailyChallengesMinigameModel minigameModel, ICoreSupportEventModel eventModel) { }

	public void ShowDailyScoopEventStartPopup(DailyScoopEventModel eventModel, bool isAuto = false) { }

	public void ShowDailyScoopInfoPopup(bool isAuto = false) { }

	public void ShowDailyTasksRefreshPurchaseConfirmationPopup() { }

	public void ShowDailyTasksV2InfoPopup() { }

	public void ShowDailyTasksV2RefreshPurchaseConfirmationPopup(int taskIndex, Action tryToPurchase) { }

	public void ShowDailyTasksV2TimeExtensionOfferPopup() { }

	public UniTask ShowDecorationOwnedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public void ShowDecorationSelectionMenu(DecorationSelectionMenuState wantedState = null) { }

	public void ShowDecorationShopPopup(DecorationShopModel decorationShopModel) { }

	public void ShowDeleteAccountConfirmation(Action confirmationAction) { }

	public void ShowDigEventCollectionCompletePopup(CoreSupportEventModel eventModel) { }

	public void ShowDigEventItemDiscoveryPopup(CoreSupportEventModel eventModel, string treasureId, Vector2 spriteSize, bool isShinyItem, Action onPopupClosed) { }

	public void ShowDigEventMinigameInfoPopup(ICoreSupportEventModel eventModel) { }

	public void ShowDigEventMuseumPopup(DigEventId digEventId, CoreSupportEventModel eventModel) { }

	public void ShowDigEventPrototype(ICoreSupportEventModel eventModel, bool enabled) { }

	public void ShowDownloadErrorPopup(Action retryAction, Action cancelAction, string titleLocalizationId = "DownloadError_Popup_Title", string descriptionLocalizationId = "DownloadError_Popup_Description", string positiveButtonLocalizationId = "DownloadError_Popup_Retry", string negativeButtonTextLocalizationId = "DownloadError_Popup_Cancel") { }

	public void ShowEndOfContentPopupMenu() { }

	public void ShowEnergyModeEventEndPopup(EnergyModeEventModel eventModel) { }

	public void ShowEnergyModeEventStartPopup(EnergyModeEventModel eventModel) { }

	public void ShowEnergyModeFTUEPopup(EnergyModeEventModel eventModel) { }

	public void ShowEnergyPopupMenu(EnergyType type, bool tryShowOfferFirst, bool isMinigameLayerVisible = false) { }

	public void ShowEventCalendarPopupMenu(bool hideCurrentFirst = false, EventCalendarPopupMenuFlags flags = 0) { }

	public void ShowEventEnergyMainBoardInfoPopup(EnergyType energyType) { }

	public UniTask ShowExtendGameEventPopup(IBoardEventModel boardEvent, Nullable<MetaTime> reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct) { }

	public void ShowFallbackRewardInfoPopup(CollectibleBoardEventModel eventModel, PlayerModel playerModel, PlayerClientContext playerContext, int level, LevelEventLevelType levelType, IPlayerReward reward, IPlayerReward fallbackReward, IIconLibrary iconLibrary, Action<List`1<IPlayerReward>> onClaimed, IBoardController boardController, ITitleBarRewardWidgets titleBarRewardWidgets, Action claimCallback) { }

	public UniTask ShowGarageCleanupEndPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowGarageCleanupEventPopup(GarageCleanupEventModel eventModel, string source, CancellationToken ct) { }

	public UniTask ShowGarageCleanupInfoPopup(GarageCleanupEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowGarageCleanupStartPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct) { }

	public void ShowGenericRewardPopup(IPlayerReward reward, string headerLocalizationId, Object[] headerLocalizationArgs, Action onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null) { }

	public void ShowGoToAppStoreOrGooglePlayMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	public void ShowHotspotPopupForType(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public void ShowIllustrationPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public void ShowInboxItem(IMailMessage inboxItem, IInboxVisualElementLibrary visualElementLibrary) { }

	public void ShowInboxMainView() { }

	public void ShowInfiniteEnergyPopup(MetaDuration duration, bool showAfterMenusClosed = false, bool animateRewardClaim = true, Action onClosed = null) { }

	public void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst = false) { }

	public void ShowItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst, ItemInfoPopupFlags flags) { }

	public void ShowItemObtainedPopup(IEnumerable<IPlayerReward> rewards) { }

	public UniTask ShowLayeredDecorationInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowLayeredDecorationLockedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public void ShowLayeredDecorationMaxLevelPopup(DecorationInfo decoration, string headerLocId, string descriptionLocId) { }

	public void ShowLeaderboardEventDeterminingRewardsPopup() { }

	public UniTask ShowLeaderboardEventEndPopup(LeaderboardEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowLeaderboardEventInfoPopup(LeaderboardEventModel eventModel, CancellationToken ct) { }

	public UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, CancellationToken ct, Action buttonActionOverride = null) { }

	public UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, ValueTuple<List`1<LeaderboardEventPlayerRankingEntry>, Int32> rankingsAndRankingPosition, CancellationToken ct, Action buttonActionOverride = null) { }

	public UniTask ShowLeaderboardEventStartPopup(LeaderboardEventModel eventModel, CancellationToken ct) { }

	public void ShowLevelUpMergeChainPopup(IMergeChainDefinition mergeChain, int level) { }

	public void ShowLimitedOfferInfoPopup() { }

	public void ShowLocationTravelConfirmationPopup(LocationId locationId, bool forceTravel, string eventLocId = "", Action onTravel = null, IAreaInfo areaInfo = null, bool isAreaTeaser = false) { }

	public void ShowLocationTravelPopup(LocationTravelInfo locationTravelInfo, TaskSource taskSource, Action onTravel = null, bool allowNegativeActions = true) { }

	public void ShowMakeYourOwnOfferInfoPopup() { }

	public void ShowMergeGoalsPopupMenu(HotspotId hotspotId, TaskSource taskSource) { }

	public void ShowMergeGridInventoryPopupMenu() { }

	public void ShowMergeGridShopPopupMenu(string shopOpeningSource, RedDotStatus redDotStatus, string showMethod, ShopMenuContentBlock focusCurrencies = 0, bool openedFromTitleBar = false, bool forceOpenCoinsAndGemsShop = false, bool forceOpenGarageShop = false, bool forceOpenAnyBoardShop = false) { }

	public void ShowMergeItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public void ShowMiniEventInfoPopup(MiniEventModel eventModel) { }

	public void ShowMiniEventStartPopup(MiniEventModel eventModel) { }

	public void ShowMiniGameCompletedPopup(Action positiveButtonAction) { }

	public void ShowMixABoosterEventPopup(MixABoosterEventModel eventModel, bool autoPopup) { }

	public void ShowMixABoosterInfoPopup(MixABoosterEventModel eventModel, bool autoPopup) { }

	public void ShowMixABoosterStartPopup(MixABoosterEventModel eventModel, bool showEndVariant, bool autoPopup) { }

	public void ShowMuseumInfoPopup(CoreSupportEventModel eventModel) { }

	public void ShowMysteryMachineConfirmationPopup(MysteryMachineEventModel eventModel, MysteryMachineConfirmationData data, Action onComplete) { }

	public void ShowMysteryMachineEventDeterminingRewardsPopup() { }

	public void ShowMysteryMachineEventEndOfRunPopup(MysteryMachineEventModel eventModel, MysteryMachineScoreView scoreView, Action onClose) { }

	public void ShowMysteryMachineEventEndPopup(MysteryMachineEventModel eventModel) { }

	public void ShowMysteryMachineEventInfoPopup(MysteryMachineEventModel eventModel, bool enteringFirstTime = false) { }

	public void ShowMysteryMachineEventStartPopup(MysteryMachineEventModel eventModel) { }

	public void ShowMysteryMachineEventTaskProgressionPopup(MysteryMachineEventModel eventModel) { }

	public void ShowMysteryMachineItemOddsPopup(MysteryMachineEventModel eventModel) { }

	public void ShowMysteryMachineLevelInfoPopup(MysteryMachineEventModel eventModel, bool levelingUp) { }

	public void ShowNoInternetConnectionPopup(Action positiveButtonAction) { }

	public void ShowNotEnoughCurrencyPopup(ICost cost, int missingAmount) { }

	public void ShowNotEnoughSomethingMultiplesPopupMenu(List<ValueTuple`2<Currencies, Int32>> costs) { }

	public void ShowNotEnoughSomethingPopupMenu(ICost cost, int missingAmount) { }

	public void ShowNotEnoughSomethingPopupMenu(ValueTuple<Currencies, Int32> missing, bool hideCurrentFirst = false) { }

	public void ShowNotificationWhitelistPopupMenu() { }

	public void ShowOfferGroupPopup(IActiveOfferGroup activeOfferGroup, bool wasShownAutomatically, string showMethod, Option<OfferPlacementId> overrideOfferPlacementId) { }

	public void ShowOnFireInfoPopup(Action onImpact) { }

	public void ShowOnFireRewardPopup(MetaDuration duration, Action onClose) { }

	public void ShowOrderItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public void ShowOutOfCSETokensMenu(CoreSupportEventTokenId tokenId, AuxEnergyMenuLocalisationState localisationState, bool isMinigameLayerVisible = false) { }

	public void ShowPetRewardPopup(PetInfo petInfo, Action onClose) { }

	public void ShowPetSelectionMenu(PetSelectionMode petSelectionMode, PetId previewPetId, DecorationId previewDecorationId, int decorationLayer) { }

	public void ShowPlayerLevelPopupMenu(bool closeCurrentPopup = false) { }

	public void ShowPlayerNameNotificationPopup(IPlayer playerModel, PlayerNamePopupFlags playerNamePopupFlags) { }

	public void ShowPlayerNamePopup(IPlayer playerModel, bool hideCurrentFirst = false, PlayerNamePopupFlags flags = 0) { }

	public void ShowPlayerRewardInfoPopupMenu(IPlayerReward playerReward, bool hideCurrentFirst = false, ItemInfoPopupFlags flags = 0) { }

	public void ShowProgressionEventBackToBackPopup(ProgressionEventModel eventModel) { }

	public UniTask ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction, CancellationToken ct) { }

	public void ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction) { }

	public void ShowProgressionEventEndPopup(ProgressionEventModel eventModel) { }

	public UniTask ShowProgressionEventEndPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public void ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel) { }

	public UniTask ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public void ShowProgressionEventPassObtainedPopup(ProgressionEventModel eventModel, ProgressionEventTrack previousActiveTrack, ProgressionEventTrack purchasedTrack) { }

	public void ShowProgressionEventProgressionPopup(ProgressionEventModel eventModel) { }

	public void ShowProgressionEventPurchasePassPopup(ProgressionEventModel eventModel, string triggerType, ProgressionEventPurchasePassStyle style) { }

	public UniTask ShowProgressionEventStartPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public void ShowProgressionPackAfterPurchasePopup(ProgressionPackEventModel eventModel) { }

	public void ShowProgressionPackEventInfoPopup(ProgressionPackEventModel eventModel) { }

	public void ShowProgressionPackEventProgressionPopup(ProgressionPackEventModel eventModel) { }

	public void ShowProgressionPackEventStartPopup(ProgressionPackEventModel eventModel) { }

	public void ShowRatingPopupMenu() { }

	public void ShowReEngagementRewardPopup(ReEngagementSettings settings) { }

	public void ShowRentableInventoryAdvertisementPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel) { }

	public void ShowRentableInventoryExtensionPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel) { }

	public void ShowReportPlayerPopup(Nullable<Int32> participantIdxToReport, Nullable<EntityId> entityIdToReport, string reportedPlayerName, bool hideCurrentFirst = false) { }

	public void ShowResetAccountConfirmation(Action confirmationAction) { }

	public void ShowRewardContainerInfoPopup(RewardContainerInfo rewardContainer) { }

	public void ShowRewardContainerPopup(RewardContainerInfo rewardContainer, List<IPlayerReward> rewards, Option<Action> onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null) { }

	public void ShowRollTheDiceMinigameInfoPopup(ICoreSupportEventModel eventModel) { }

	public void ShowRollTheDiceMinigamePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel) { }

	public void ShowRollTheDiceRecipeCompletePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel, AssetReferenceSprite dishSpriteRef, string dishName, Action onCompletedCallback) { }

	public void ShowSeasonStartPopup(SeasonInfo season, Action completeAction) { }

	public void ShowSettingsPopupMenu() { }

	public void ShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true) { }

	public void ShowShopItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool forceShowOdds, bool hideCurrentFirst = false) { }

	public void ShowShopOffersPopupMenu(bool hideCurrentFirst = false, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null) { }

	public void ShowShopRefreshMessage(Action positiveAction, OfferPlacementId placementId) { }

	public void ShowShopWarningOrErrorPopupMenu(string title, string description, string button) { }

	public void ShowShortLeaderboardEventEndPopup(ShortLeaderboardEventModel eventModel) { }

	public void ShowShortLeaderboardEventInfoPopup(ShortLeaderboardEventModel eventModel) { }

	public void ShowShortLeaderboardEventProgressionPopup(ShortLeaderboardEventModel eventModel) { }

	public void ShowShortLeaderboardEventStartPopup(ShortLeaderboardEventModel eventModel) { }

	public void ShowShortLeaderboardEventTeasePopup(ShortLeaderboardEventModel eventModel) { }

	public void ShowSkipTimePopup(MetaDuration skipDuration, Action onClosed) { }

	public void ShowSocialLoginAlreadyLoggedInMessage(AuthenticationPlatform authenticationPlatform) { }

	public void ShowSocialLoginFailedMessage(string error) { }

	public void ShowSocialLoginSelectGameStateMessage(PlayerData localPlayerData, PlayerData remotePlayerData, Action<PlayerData> selectAction) { }

	public void ShowSocialMediaPopupMenu(SocialMediaPlatform socialMediaPlatform, string source) { }

	public void ShowSoloMilestoneEventEndPopup(SoloMilestoneEventModel eventModel) { }

	public void ShowSoloMilestoneEventStartPopup(SoloMilestoneEventModel eventModel, bool isAuto) { }

	public void ShowSystemNotificationsPopupMenu() { }

	public void ShowTemporaryCardCollectionCardPopup(TemporaryCardCollectionEventModel eventModel, List<CardCollectionCardId> cardIds, CardCollectionCardId currentCardId) { }

	public void ShowTemporaryCardCollectionCardSetPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardSetId cardCollectionCardSetId, bool hideCurrentFirst) { }

	public void ShowTemporaryCardCollectionCollectedAllCardsPopup(TemporaryCardCollectionEventModel eventModel) { }

	public void ShowTemporaryCardCollectionEvidenceBoxOpening(CardCollectionEvidenceBoxInfo boxInfo) { }

	public void ShowTemporaryCardCollectionEvidenceRoomPopup(TemporaryCardCollectionEventModel eventModel) { }

	public void ShowTemporaryCardCollectionInfoPopup(TemporaryCardCollectionEventModel eventModel) { }

	public void ShowTemporaryCardCollectionOddsPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionPackId packId, bool hideCurrentFirst = false) { }

	public void ShowTemporaryCardCollectionOpenCardPackPopup(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List`1<ValueTuple`2<CardCollectionCardId, Boolean>>> cardsPerPack) { }

	public void ShowTemporaryCardCollectionPrestigePopup(TemporaryCardCollectionEventModel eventModel, bool hideCurrentFirst, bool goToProgressionPopupOnDismiss = false) { }

	public void ShowTemporaryCardCollectionProgressionPopup(TemporaryCardCollectionEventModel eventModel) { }

	public void ShowTemporaryCardCollectionRewardPopup(TemporaryCardCollectionEventModel eventModel, bool debug = false) { }

	public void ShowThirdPartySurveyInboxItem(IMailMessage obj) { }

	public void ShowTieredOffersEndPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	public void ShowToDoPopupMenu(Option<DailyTodoPopupFocusTarget> focusTargetOption = null, bool allowOpeningOnTopOfAnother = false, bool hideCurrentFirst = false, Action onPopupShown = null) { }

	public void ShowTOSv3PopupMenu() { }

	public void ShowTransformWildCardPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardId cardId, bool discovered, bool wildCardIsSpecial) { }

	public void ShowWebShopPurchasePopupMenu(WebshopPurchase webShopPurchase) { }

	public void ShowWebShopSecureCodePopupMenu() { }

	public void ShowWebShopSignInPopupMenu(string mergeMansionUrl, string code) { }

	public void ShowWebViewPopup(IWebViewTarget webTarget) { }

	public void ShowWildItemInfoPopup(Action onPopupClosed = null) { }

	public void StartTransition(string menuTag) { }

	public LeaderboardEventRankingPopup TryGetExistingLeaderboardEventRankingPopup(LeaderboardEventModel eventModel) { }

	public TMenu TryGetMenu() { }

	public bool TryHideCurrentMenuWithTag(string menuTag) { }

	public void TryShowAutoPopupAppLoading() { }

	public void TryShowAutoPopupLobbyReturn() { }

	public void TryShowAutoPopupMergeBoardEnter(MergeBoardId mergeBoardId) { }

	public void TryShowAutoPopupPopupClose(OfferPopupTriggerPopupId id, IMenuSection closingPopup) { }

	public void TryShowAutoPopupPopupOpen(OfferPopupTriggerPopupId id) { }

	public void TryShowBoardEventAreaHotspotPopup(string eventId) { }

	public bool TryShowTriggerActivatedOutOfEnergyOfferPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, bool wasTriggeredFirst) { }

	public void UnregisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string popupToClose) { }

}

