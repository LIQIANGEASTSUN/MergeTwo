using System;
using System.Collections.Generic;
using System.Threading;
using Animations;
using Banks.Scripts.UI;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.DailyChallenges;
using Code.GameLogic.Player.Events.DailyScoopEvent;
using Cysharp.Threading.Tasks;
using Game.Cloud.Webshop;
using Game.Logic.Mail;
using GameLogic.Area;
using GameLogic.Banks;
using GameLogic.CardCollection;
using GameLogic.Config;
using GameLogic.Config.Costs;
using GameLogic.Config.DecorationShop;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Config.Shop.Items;
using GameLogic.Decorations;
using GameLogic.GameFeatures;
using GameLogic.Hotspots;
using GameLogic.Inventory;
using GameLogic.MergeChains;
using GameLogic.MiniEvents;
using GameLogic.MixABooster;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Events;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using GameLogic.Seasonality;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.InputController;
using Metacore.MergeMansion.UI.DailyTodo;
using Metacore.MergeMansion.UI.GarageCleanupEvent;
using Metacore.MergeMansion.UI.Libraries;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Offers;
using UI.DailyTasksV2;
using UI.GameEvents;
using UI.GameEvents.Decorations;
using UI.GameEvents.MergeBoards;
using UI.Inbox;
using UI.MixABooster;
using UI.Offers;
using UI.Popups;
using UI.Seasonality;
using UI.Shop;
using UI.States;
using UI.TemporaryCardCollectionEvent;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Webview;

namespace UI
{
	public interface IMenuController
	{
		ISafeRollback Rollback { get; }

		IMenuState OpenedPopupModel { get; }

		MergeBoardId PlayerActiveMergeBoardId { get; }

		bool IsMenuOpen { get; }

		bool IsInTransition { get; }

		string OpenMenuTag { get; }

		IIconLibrary DefaultIconLibrary { get; }

		IIconLibrary EventIconLibrary { get; }

		ProgressionPackEventPrefabLibrary ProgressionPackEventPrefabsLibrary { get; }

		AllCollectibleBoardEventsPrefabsLibrary CollectibleBoardEventPrefabsLibrary { get; }

		MysteryMachineEventPrefabsLibrary MysteryMachineEventPrefabsLibrary { get; }

		SoloMilestoneEventPrefabsLibrary SoloMilestoneEventPrefabsLibrary { get; }

		MiniEventPrefabsLibrary MiniEventPrefabsLibrary { get; }

		TemporaryCardCollectionEventPrefabsLibrary TemporaryCardCollectionEventPrefabsLibrary { get; }

		DecorationShopPrefabsLibrary DecorationShopPrefabsLibrary { get; }

		MergeBoardLibrary MergeBoardLibrary { get; }

		DecorationsLibrary DecorationsLibrary { get; }

		IOfferPopupsLibrary OfferPopupsLibrary { get; }

		IRewardsAnimations RewardsAnimations { get; }

		IInputController InputController { get; }

		CharacterLibrary CharacterLibrary { get; }

		ArtifactLibrary ArtifactLibrary { get; }

		CurrencyBankLibrary CurrencyBankLibrary { get; }

		SeasonalityPrefabsLibrary SeasonalityPrefabsLibrary { get; }

		DailyTasksV2Library DailyTasksV2Library { get; }

		BoultonLeagueStageLibrary BoultonLeagueStageLibrary { get; }

		EnergyModeEventPrefabsLibrary EnergyModeEventPrefabsLibrary { get; }

		IllustrationLibrary IllustrationLibrary { get; }

		DailyScoopEventPrefabsLibrary DailyScoopEventPrefabsLibrary { get; }

		TemporaryCardCollectionEventSpritesLibrary TemporaryCardCollectionEventSpritesLibrary { get; }

		ShortLeaderboardEventPrefabsLibrary ShortLeaderboardEventPrefabsLibrary { get; }

		CardCollectionSupportingEventPrefabsLibrary CardCollectionSupportingEventPrefabsLibrary { get; }

		CoreSupportingEventsPrefabsLibrary CoreSupportingEventsPrefabsLibrary { get; }

		CoreSupportEventPrefabsLibrary CoreSupportEventPrefabsLibrary { get; }

		AnimationConfigLibrary AnimationConfigLibrary { get; }

		MixABoosterEventPrefabsLibrary MixABoosterEventPrefabsLibrary { get; }

		event Action<bool> OnMenuVisibilityChange;

		event Action OnStackedMenuPushed;

		void StartTransition(string menuTag);

		void CompleteTransition(string menuTag);

		void SetBackButtonEnabled(bool enabled);

		IMenuSection GetCurrentMenu();

		TMenu TryGetMenu<TMenu>() where TMenu : IMenuSection;

		void ShowSettingsPopupMenu();

		void ShowWebViewPopup(IWebViewTarget webTarget);

		void ShowInboxMainView();

		void ShowInboxItem(IMailMessage inboxItem, IInboxVisualElementLibrary visualElementLibrary);

		void DeleteInboxItem(IMailMessage inboxItem);

		void ShowToDoPopupMenu(Option<DailyTodoPopupFocusTarget> focusTargetOption = default(Option<DailyTodoPopupFocusTarget>), bool allowOpeningOnTopOfAnother = false, bool hideCurrentFirst = false, Action onPopupShown = null);

		void ShowDailyTasksRefreshPurchaseConfirmationPopup();

		void ShowDailyTasksV2RefreshPurchaseConfirmationPopup(int taskIndex, Action tryToPurchase);

		void ShowDailyTasksV2TimeExtensionOfferPopup();

		void ShowDailyTasksV2InfoPopup();

		void ShowCustomItemInfoPopupMenu(IItemDefinition itemDefinition, bool hideCurrentFirst = false);

		void ShowItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false);

		void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst = false);

		void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst, ItemInfoPopupFlags flags);

		void ShowOrderItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false);

		void ShowShopItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool forceShowOdds, bool hideCurrentFirst = false);

		void ShowMergeItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false);

		void ShowMergeGoalsPopupMenu(HotspotId hotspotId, TaskSource taskSource);

		void ShowEndOfContentPopupMenu();

		void ShowEnergyPopupMenu(EnergyType type, bool tryShowOfferFirst, bool isMinigameLayerVisible = false);

		void ShowOutOfCSETokensMenu(CoreSupportEventTokenId tokenId, AuxEnergyMenuLocalisationState localisationState, bool isMinigameLayerVisible = false);

		void ShowEventEnergyMainBoardInfoPopup(EnergyType energyType);

		bool TryShowTriggerActivatedOutOfEnergyOfferPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, bool wasTriggeredFirst);

		void ShowEventCalendarPopupMenu(bool hideCurrentFirst = false, EventCalendarPopupMenuFlags flags = EventCalendarPopupMenuFlags.None);

		void ShowCollectEventProgressRewardPopupMenu(bool hideCurrentFirst = false);

		void ShowShopOffersPopupMenu(bool hideCurrentFirst = false, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null);

		void TryShowAutoPopupAppLoading();

		void TryShowAutoPopupLobbyReturn();

		void TryShowAutoPopupMergeBoardEnter(MergeBoardId mergeBoardId);

		void TryShowAutoPopupPopupOpen(OfferPopupTriggerPopupId id);

		void TryShowAutoPopupPopupClose(OfferPopupTriggerPopupId id, IMenuSection closingPopup);

		void ShowPlayerRewardInfoPopupMenu(IPlayerReward playerReward, bool hideCurrentFirst = false, ItemInfoPopupFlags flags = ItemInfoPopupFlags.None);

		void ShowMergeGridShopPopupMenu(string shopOpeningSource, RedDotStatus redDotStatus, string showMethod, ShopMenuContentBlock focusCurrencies = ShopMenuContentBlock.None, bool openedFromTitleBar = false, bool forceOpenCoinsAndGemsShop = false, bool forceOpenGarageShop = false, bool forceOpenAnyBoardShop = false);

		void ShowMergeGridInventoryPopupMenu();

		void ShowDecorationSelectionMenu(DecorationSelectionMenuState wantedState = null);

		void ShowPetSelectionMenu(PetSelectionMenuState.PetSelectionMode petSelectionMode, PetId previewPetId, DecorationId previewDecorationId, int decorationLayer);

		void ShowPlayerLevelPopupMenu(bool closeCurrentPopup = false);

		void ShowSocialLoginFailedMessage(string error);

		void ShowSocialLoginSelectGameStateMessage(ResolveSocialAuthConflictPopupMenuState.PlayerData localPlayerData, ResolveSocialAuthConflictPopupMenuState.PlayerData remotePlayerData, Action<ResolveSocialAuthConflictPopupMenuState.PlayerData> selectAction);

		void ShowSocialLoginAlreadyLoggedInMessage(AuthenticationPlatform authenticationPlatform);

		void ShowNotificationWhitelistPopupMenu();

		void ShowSystemNotificationsPopupMenu();

		void ShowChooseLanguagePopupMenu();

		void ShowShopRefreshMessage(Action positiveAction, OfferPlacementId placementId);

		void ShowShopWarningOrErrorPopupMenu(string title, string description, string button);

		void ShowNotEnoughSomethingPopupMenu((Currencies currency, int amount) missing, bool hideCurrentFirst = false);

		void ShowNotEnoughSomethingPopupMenu(ICost cost, int missingAmount);

		void ShowNotEnoughSomethingMultiplesPopupMenu(List<(Currencies, int)> costs);

		void ShowNotEnoughCurrencyPopup(ICost cost, int missingAmount);

		UniTask ShowGarageCleanupEventPopup(GarageCleanupEventModel eventModel, string source, CancellationToken ct);

		UniTask ShowGarageCleanupInfoPopup(GarageCleanupEventModel eventModel, CancellationToken ct);

		UniTask ShowGarageCleanupStartPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct);

		UniTask ShowGarageCleanupEndPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct);

		void ShowCurrencyBankPopup();

		void ShowCurrencyBankInfoPopup(CurrencyBankModel currencyBankModel);

		void PopMenuAndShowAll();

		void PopMenuAndShowPrevious(bool showPreviousImmediately = false);

		void PopMenuAndShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod);

		void ShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true);

		void ShowBoardShop(ShopMenuContentBlock shopContext, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true);

		void ShowItemObtainedPopup(IEnumerable<IPlayerReward> rewards);

		void PopMenusBeforeShow(string menuTag, int maxPopCount = -1);

		void ForceCloseAllPopups();

		bool TryHideCurrentMenuWithTag(string menuTag);

		void HideAllMenus(HideMenuReason reason = HideMenuReason.HideAllMenus);

		bool IsSpecificMenuInStack(string menuTag);

		bool IsMenuInStack<TMenu>() where TMenu : IMenuSection;

		bool IsAnyMenuInStack(Type[] menuTypes);

		void ShowRatingPopupMenu();

		void ShowSocialMediaPopupMenu(SocialMediaPlatform socialMediaPlatform, string source);

		void ShowTOSv3PopupMenu();

		void ShowAccountResetPopup();

		void ShowAccountSuccessfullyResettedPopup(Action confirmationAction);

		void ShowAccountDeleteInformationPopup();

		void ShowAccountDeleteScheduledPopup(bool userInitiated, bool fromGameLoading);

		void ShowGoToAppStoreOrGooglePlayMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction);

		void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction);

		void ShowTieredOffersEndPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction);

		void ShowMakeYourOwnOfferInfoPopup();

		void ShowNoInternetConnectionPopup(Action positiveButtonAction);

		void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction, Func<string> livingError);

		void PromptSellConfirmation(Action confirmationAction);

		void PromptCollectConfirmation(Action confirmationAction, string questionLocalizationIdPrefix = null);

		void PromptBuyConfirmation(Action confirmationAction, ICost cost);

		void ShowDeleteAccountConfirmation(Action confirmationAction);

		void ShowResetAccountConfirmation(Action confirmationAction);

		UniTask ShowExtendGameEventPopup(IBoardEventModel boardEvent, MetaTime? reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct);

		void ShowOfferGroupPopup(IActiveOfferGroup activeOfferGroup, bool wasShownAutomatically, string showMethod, Option<OfferPlacementId> overrideOfferPlacementId);

		void RegisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string popupToClose);

		void UnregisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string popupToClose);

		void ShowHotspotPopupForType(IHotspotDefinition hotspot, TaskSource taskSource);

		void ShowAreaLockedHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource);

		void ShowAreaHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource, Action showHotspotFinished = null);

		void ShowAreaUnlockedPopupMenu(IAreaInfo area);

		void ShowAreaInfoPopupMenu(IAreaInfo area, AreaInfoStyle areaInfoStyle, bool showIsNavigateBack, TaskSource taskSource);

		void ShowAreaCompleteRewardPopup(IAreaInfo area, IWalletState walletState, RandomPCG rewardContainerRandom);

		bool CloseCurrentMenu(UnityEngine.Object from);

		bool CloseNoStackedMenu(IMenuSection from);

		bool NavigateBack(UnityEngine.Object from, Action onFinish);

		bool NavigateBack(UnityEngine.Object from, bool showAllPrevious = false, bool showPreviousImmediately = false);

		void ShowThirdPartySurveyInboxItem(IMailMessage obj);

		void PromptMergeConfirmation(MergeResult mergeResult, MergeItem fromItem, MergeItem toItem, Action confirmationAction, Action cancelAction, bool isAutoMergeEnabled);

		void ShowAreaHotspotPopupMenuInventorySinkConfirmationPopup(Action<IHotspotDefinition> confirmationAction, IHotspotDefinition hotspot, (IItemDefinition Item, int Requirement)[] sinkItems);

		void ShowRentableInventoryAdvertisementPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel);

		void ShowRentableInventoryExtensionPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel);

		void ShowLayeredDecorationMaxLevelPopup(DecorationInfo decoration, string headerLocId, string descriptionLocId);

		void ShowProgressionEventProgressionPopup(ProgressionEventModel eventModel);

		UniTask ShowProgressionEventStartPopup(ProgressionEventModel eventModel, CancellationToken ct);

		void ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel);

		UniTask ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel, CancellationToken ct);

		void ShowProgressionEventEndPopup(ProgressionEventModel eventModel);

		UniTask ShowProgressionEventEndPopup(ProgressionEventModel eventModel, CancellationToken ct);

		void ShowProgressionEventPurchasePassPopup(ProgressionEventModel eventModel, string triggerType, ProgressionEventPurchasePassStyle style);

		void ShowProgressionEventPassObtainedPopup(ProgressionEventModel eventModel, ProgressionEventTrack previousActiveTrack, ProgressionEventTrack purchasedTrack);

		void ShowProgressionEventBackToBackPopup(ProgressionEventModel eventModel);

		void ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction);

		UniTask ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction, CancellationToken ct);

		void ShowProgressionPackEventStartPopup(ProgressionPackEventModel eventModel);

		void ShowProgressionPackEventProgressionPopup(ProgressionPackEventModel eventModel);

		void ShowProgressionPackEventInfoPopup(ProgressionPackEventModel eventModel);

		void ShowProgressionPackAfterPurchasePopup(ProgressionPackEventModel eventModel);

		UniTask ShowCollectibleBoardEventStartPopup(CollectibleBoardEventModel eventModel, CancellationToken ct);

		UniTask ShowCollectibleBoardEventEndPopup(CollectibleBoardEventModel eventModel, CancellationToken ct);

		UniTask ShowCollectibleBoardEventProgressionPopup(CollectibleBoardEventModel eventModel, CancellationToken ct, bool hideCurrentFirst = false);

		UniTask ShowCollectibleBoardEventInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct);

		UniTask ShowCollectibleBoardEventTeasePopup(CollectibleBoardEventInfo eventInfo, CancellationToken ct);

		UniTask ShowCollectibleBoardEventExtendPopup(CollectibleBoardEventModel eventModel, MetaTime? reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct);

		void ShowCollectibleBoardEventTaskPopup(CollectibleBoardEventModel eventModel);

		UniTask ShowCollectibleBoardEventIntroPopup(CollectibleBoardEventInfo eventInfo, MetaActivableVisibleStatus.InPreview inPreview, CancellationToken ct);

		UniTask ShowLayeredDecorationInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct);

		void ShowFallbackRewardInfoPopup(CollectibleBoardEventModel eventModel, PlayerModel playerModel, PlayerClientContext playerContext, int level, LevelEventLevelType levelType, IPlayerReward reward, IPlayerReward fallbackReward, IIconLibrary iconLibrary, Action<List<IPlayerReward>> onClaimed, IBoardController boardController, ITitleBarRewardWidgets titleBarRewardWidgets, Action claimCallback);

		UniTask ShowDecorationOwnedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct);

		void TryShowBoardEventAreaHotspotPopup(string eventId);

		UniTask ShowLayeredDecorationLockedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct);

		void ShowLevelUpMergeChainPopup(IMergeChainDefinition mergeChain, int level);

		UniTask ShowLeaderboardEventStartPopup(LeaderboardEventModel eventModel, CancellationToken ct);

		UniTask ShowLeaderboardEventInfoPopup(LeaderboardEventModel eventModel, CancellationToken ct);

		UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, CancellationToken ct, Action buttonActionOverride = null);

		UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, (List<LeaderboardEventPlayerRankingEntry>, int) rankingsAndRankingPosition, CancellationToken ct, Action buttonActionOverride = null);

		UniTask ShowLeaderboardEventEndPopup(LeaderboardEventModel eventModel, CancellationToken ct);

		LeaderboardEventRankingPopup TryGetExistingLeaderboardEventRankingPopup(LeaderboardEventModel eventModel);

		void ShowLeaderboardEventDeterminingRewardsPopup();

		void ShowMiniEventStartPopup(MiniEventModel eventModel);

		void ShowMiniEventInfoPopup(MiniEventModel eventModel);

		void ShowBoultonLeagueEventStartPopup(BoultonLeagueEventModel eventModel);

		void ShowBoultonLeagueEventInfoPopup(BoultonLeagueEventModel eventModel);

		void ShowBoultonLeagueEventProgressionPopup(BoultonLeagueEventModel eventModel);

		void ShowBoultonLeagueEventEndPopup(BoultonLeagueEventModel eventModel, BoultonLeagueEventEndPopupShowParams showParams = null);

		void ShowBoultonLeagueDeterminingLeaderboardPlacementRewardsPopup();

		void ShowPlayerNameNotificationPopup(IPlayer playerModel, PlayerNamePopupFlags playerNamePopupFlags);

		void ShowPlayerNamePopup(IPlayer playerModel, bool hideCurrentFirst = false, PlayerNamePopupFlags flags = PlayerNamePopupFlags.None);

		void ShowReportPlayerPopup(int? participantIdxToReport, Metaplay.Core.EntityId? entityIdToReport, string reportedPlayerName, bool hideCurrentFirst = false);

		void ShowGenericRewardPopup(IPlayerReward reward, string headerLocalizationId, object[] headerLocalizationArgs, Action onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null);

		void ShowReEngagementRewardPopup(ReEngagementSettings settings);

		UniTask ShowCameraTutorialPopup(CollectibleBoardEventId relatedEventId, CancellationToken ct);

		void ShowSeasonStartPopup(SeasonInfo season, Action completeAction);

		void SetTab(string targetId, int tabIndex);

		bool IsDebugStatePreventing();

		void ShowPetRewardPopup(PetInfo petInfo, Action onClose);

		void ShowDecorationShopPopup(DecorationShopModel decorationShopModel);

		void ShowInfiniteEnergyPopup(MetaDuration duration, bool showAfterMenusClosed = false, bool animateRewardClaim = true, Action onClosed = null);

		void ShowAutoMergeBoosterPopup(MetaDuration durationSeconds);

		void ShowSkipTimePopup(MetaDuration skipDuration, Action onClosed);

		void ShowCooldownRemoverRewardPopup(MetaDuration duration, Action onClose);

		void ShowOnFireRewardPopup(MetaDuration duration, Action onClose);

		void ShowOnFireInfoPopup(Action onImpact);

		void ShowCelebrationPopup(Action onRestart, string type);

		void ShowCardGamePopupMenu(IHotspotDefinition hotspot, TaskSource taskSource);

		void ShowWebShopPurchasePopupMenu(WebshopPurchase webShopPurchase);

		void ShowWebShopSecureCodePopupMenu();

		void ShowWebShopSignInPopupMenu(string mergeMansionUrl, string code);

		void ShowConfirmationDialogPopup(string titleTextLocId, string questionTextLocId, string confirmButtonTextLocId, string cancelButtonTextLocId, Action confirmAction, Action cancelAction, ConfirmationDialogExtra extra);

		void ShowLocationTravelPopup(LocationTravelInfo locationTravelInfo, TaskSource taskSource, Action onTravel = null, bool allowNegativeActions = true);

		void ShowLocationTravelConfirmationPopup(LocationId locationId, bool forceTravel, string eventLocId = "", Action onTravel = null, IAreaInfo areaInfo = null, bool isAreaTeaser = false);

		void ShowIllustrationPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource);

		void ShowMysteryMachineEventStartPopup(MysteryMachineEventModel eventModel);

		void ShowMysteryMachineEventInfoPopup(MysteryMachineEventModel eventModel, bool enteringFirstTime = false);

		void ShowMysteryMachineLevelInfoPopup(MysteryMachineEventModel eventModel, bool levelingUp);

		void ShowMysteryMachineConfirmationPopup(MysteryMachineEventModel eventModel, MysteryMachineConfirmationData data, Action onComplete);

		void ShowMysteryMachineEventTaskProgressionPopup(MysteryMachineEventModel eventModel);

		void ShowMysteryMachineEventEndOfRunPopup(MysteryMachineEventModel eventModel, MysteryMachineScoreView scoreView, Action onClose);

		void ShowMysteryMachineEventEndPopup(MysteryMachineEventModel eventModel);

		void ShowMysteryMachineItemOddsPopup(MysteryMachineEventModel eventModel);

		void ShowMysteryMachineEventDeterminingRewardsPopup();

		void RefreshProducerInventoryIndicators();

		void ShowSoloMilestoneEventStartPopup(SoloMilestoneEventModel eventModel, bool isAuto);

		void ShowSoloMilestoneEventEndPopup(SoloMilestoneEventModel eventModel);

		void ShowDailyScoopEventStartPopup(DailyScoopEventModel eventModel, bool isAuto = false);

		void ShowDailyScoopInfoPopup(bool isAuto = false);

		void ShowLimitedOfferInfoPopup();

		void ShowMiniGameCompletedPopup(Action positiveButtonAction);

		void ShowDownloadErrorPopup(Action retryAction, Action cancelAction, string titleLocalizationId = "DownloadError_Popup_Title", string descriptionLocalizationId = "DownloadError_Popup_Description", string positiveButtonLocalizationId = "DownloadError_Popup_Retry", string negativeButtonTextLocalizationId = "DownloadError_Popup_Cancel");

		void ShowEnergyModeFTUEPopup(EnergyModeEventModel eventModel);

		void ShowEnergyModeEventStartPopup(EnergyModeEventModel eventModel);

		void ShowEnergyModeEventEndPopup(EnergyModeEventModel eventModel);

		void ShowTemporaryCardCollectionOpenCardPackPopup(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List<(CardCollectionCardId cardId, bool duplicate)>> cardsPerPack);

		void ShowTemporaryCardCollectionCardPopup(TemporaryCardCollectionEventModel eventModel, List<CardCollectionCardId> cardIds, CardCollectionCardId currentCardId);

		void ShowTemporaryCardCollectionCardSetPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardSetId cardCollectionCardSetId, bool hideCurrentFirst);

		void ShowTemporaryCardCollectionCollectedAllCardsPopup(TemporaryCardCollectionEventModel eventModel);

		void ShowTemporaryCardCollectionOddsPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionPackId packId, bool hideCurrentFirst = false);

		void ShowTemporaryCardCollectionProgressionPopup(TemporaryCardCollectionEventModel eventModel);

		void ShowTemporaryCardCollectionRewardPopup(TemporaryCardCollectionEventModel eventModel, bool debug = false);

		void ShowTemporaryCardCollectionInfoPopup(TemporaryCardCollectionEventModel eventModel);

		void ShowTemporaryCardCollectionPrestigePopup(TemporaryCardCollectionEventModel eventModel, bool hideCurrentFirst, bool goToProgressionPopupOnDismiss = false);

		void ShowActivateWildCardPopup(TemporaryCardCollectionEventModel eventModel, bool isSpecial, Action onTap);

		void ShowTransformWildCardPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardId cardId, bool discovered, bool wildCardIsSpecial);

		void PromptCraftCardConfirmation(TemporaryCardCollectionEventModel eventModel, TemporaryCardCollectionCardHolder cardHolder, bool discovered, bool wildcardIsSpecial);

		void ShowTemporaryCardCollectionEvidenceBoxOpening(CardCollectionEvidenceBoxInfo boxInfo);

		void ShowTemporaryCardCollectionEvidenceRoomPopup(TemporaryCardCollectionEventModel eventModel);

		void ShowCardCollectionSupportingEventPopup(CardCollectionSupportingEventModel eventModel);

		void ShowRewardContainerInfoPopup(RewardContainerInfo rewardContainer);

		void ShowRewardContainerPopup(RewardContainerInfo rewardContainer, List<IPlayerReward> rewards, Option<Action> onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null);

		void ShowShortLeaderboardEventStartPopup(ShortLeaderboardEventModel eventModel);

		void ShowShortLeaderboardEventEndPopup(ShortLeaderboardEventModel eventModel);

		void ShowShortLeaderboardEventInfoPopup(ShortLeaderboardEventModel eventModel);

		void ShowShortLeaderboardEventProgressionPopup(ShortLeaderboardEventModel eventModel);

		void ShowShortLeaderboardEventTeasePopup(ShortLeaderboardEventModel eventModel);

		void ShowDigEventPrototype(ICoreSupportEventModel eventModel, bool enabled);

		void ShowCloudTransitionEffect();

		void ShowDigEventMuseumPopup(DigEventId digEventId, CoreSupportEventModel eventModel);

		void ShowMuseumInfoPopup(CoreSupportEventModel eventModel);

		void ShowDigEventMinigameInfoPopup(ICoreSupportEventModel eventModel);

		void ShowDigEventItemDiscoveryPopup(CoreSupportEventModel eventModel, string treasureId, Vector2 spriteSize, bool isShinyItem, Action onPopupClosed);

		void ShowDigEventCollectionCompletePopup(CoreSupportEventModel eventModel);

		void ShowClassicRacesEventProgressionPopup(ClassicRacesMinigameModel minigameModel, ICoreSupportEventModel eventModel);

		void ShowClassicRacesEventInfoPopup(ClassicRacesMinigameModel minigameModel, Action onClosedCallback);

		void ShowClassicRacesExtraRacesPopup(ClassicRacesMinigameModel minigameModel);

		void ShowClassicRacesRaceResultPopup(ClassicRacesMinigameModel minigameModel, CoreSupportEventModel eventModel, Action onCompletedCallback);

		void ShowAutoMergeEventInfoPopup(ICoreSupportEventModel eventModel);

		void ShowAutoMergeEventStartPopup(CoreSupportEventModel eventModel);

		void ShowAutoMergeFeatureFTUEPopup(bool force = false);

		UniTask BatchRewardContainerClaimSequence(List<IPlayerReward> rewardsToClaim, IWalletState startingWalletState, List<RandomPCG> rewardContainerRandomCheckpoints, Action onStart, Action onComplete);

		void ShowRollTheDiceMinigamePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel);

		void ShowRollTheDiceMinigameInfoPopup(ICoreSupportEventModel eventModel);

		void ShowRollTheDiceRecipeCompletePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel, AssetReferenceSprite dishSpriteRef, string dishName, Action onCompletedCallback);

		void ShowBuilderEventMinigamePopup(BuilderEventMinigameModel minigameModel, ICoreSupportEventModel eventModel);

		void ShowBuilderEventInfoPopup(ICoreSupportEventModel eventModel);

		void ShowBuilderEventScreenTransitionEffect(ICoreSupportEventModel eventModel);

		void ShowBuilderEventAllBuildsCompletedPopup(string titleText, string descriptionText, string buttonText);

		void ShowBuilderEventOutOfTokensPopup(ICoreSupportEventModel eventModel);

		void ShowBuilderEventCompletionRewardPopup(IBuilderEventMinigame minigameModel, ICoreSupportEventModel eventModel, Action onCompletedCallback);

		void ShowCoreSupportEventStartPopup(CoreSupportEventModel eventModel);

		void ShowCoreSupportEventEndPopup(CoreSupportEventModel eventModel);

		void ShowCoreSupportEventTeasePopup(CoreSupportEventModel eventModel);

		void ShowCoreSupportEventIntroPopup(ICoreSupportEventInfo eventInfo, MetaActivableVisibleStatus.InPreview inPreview);

		void ShowMixABoosterEventPopup(MixABoosterEventModel eventModel, bool autoPopup);

		void ShowMixABoosterStartPopup(MixABoosterEventModel eventModel, bool showEndVariant, bool autoPopup);

		void ShowMixABoosterInfoPopup(MixABoosterEventModel eventModel, bool autoPopup);

		void ShowDailyChallengesMinigamePopup(IPlayer player, IDailyChallengesMinigameModel minigameModel, ICoreSupportEventModel eventModel);

		void ShowDailyChallengesEventInfoPopup(bool isAuto, ICoreSupportEventModel eventModel);

		void ShowWildItemInfoPopup(Action onPopupClosed = null);
	}
}
