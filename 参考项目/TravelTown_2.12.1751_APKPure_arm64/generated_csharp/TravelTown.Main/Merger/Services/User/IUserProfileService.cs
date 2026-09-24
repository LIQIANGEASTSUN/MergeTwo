using System.Collections.Generic;
using Framework.Core.Services.Backend.User;
using Merger.Audio.Data;
using Merger.BubbleSale.Configuration;
using Merger.Data.Assets;
using Merger.GameGeneralAssets.Data;
using Merger.MoonShop.Compatibility;
using Merger.Services.User.Data.Profile;
using Merger.Services.User.Data.Profile.AbTests;
using Merger.Services.User.Data.Profile.Ads;
using Merger.Services.User.Data.Profile.BubblesConfig;
using Merger.Services.User.Data.Profile.CharacterConfig;
using Merger.Services.User.Data.Profile.EventCenter;
using Merger.Services.User.Data.Profile.Inventory;
using Merger.Services.User.Data.Profile.Localization;

namespace Merger.Services.User
{
	public interface IUserProfileService : IUserProfileServiceBase
	{
		bool NativeStarterPackIsEnabled { get; }

		double ProgressUpdatePopupCountdown { get; }

		AdsConfig AdsConfig { get; }

		int MinLevelForLoadGameOnMeta { get; }

		bool ShouldLoadGameOnMeta { get; }

		string FirstGameStartVideoUrl { get; }

		bool IsFirstGameStartVideoOverLoadingScreen { get; }

		bool AllowFirstGameStartVideoOnBoard { get; }

		bool WaitForFirstGameStartVideoBeforeGameStart { get; }

		float VanityAreaWidth { get; }

		bool SpeakingCharacterHintsDisabled { get; }

		bool ShowBottomLeftOnBuilding { get; }

		bool IsNewCleanupOrdersFlowEnabled { get; }

		bool IsNewTreeOrdersFlowEnabled { get; }

		bool ActionsModelDebuggingEnabled { get; }

		bool SmarterBubblesEnabledCore { get; }

		bool SmarterBubblesEnabledEvent { get; }

		bool CoreBubblesGeneratedSaveEnabled { get; }

		bool EventBubblesGeneratedSaveEnabled { get; }

		bool IsFirstTwoMergeHighlightsToggleOn { get; }

		bool TutorialFirstThreeOrdersToggle { get; }

		bool JokerAndSplitterPopupEnabled { get; }

		bool SeasonalCardsUnlockBadgeEnabled { get; }

		bool OrderCompleteBlockItemInteractions { get; }

		int RemoveBubbleMinLevelCore { get; }

		bool PowerBoostMultiModesCoreToggle { get; }

		bool PowerBoostMultiModesBoardEventToggle { get; }

		bool CustomVanityCompensationAssetToggle { get; }

		bool LocalBackupsEnabled { get; }

		bool IsJokerInfoButtonEnabled { get; }

		bool DisableInvitePopupInTTFriendsActive { get; }

		int BubbleCompensationMaxLevel { get; }

		bool InventoryNewAbilitiesCoreToggle { get; }

		bool InventoryNewAbilitiesBoardEventToggle { get; }

		bool PowerBoostResetOnOOECore { get; }

		bool PowerBoostResetOnOOEEvent { get; }

		bool Store2ndTabThreeSlotsToggle { get; }

		bool NarrativeSkipEmptyMessagesEnabled { get; }

		int QueueSizeThresholdForAbuse { get; }

		bool DisableTTFriends { get; }

		bool CloseWebsocketOnGamePause { get; }

		bool UserProfileDuelTooltipEnabled { get; }

		bool UserProfileTTFriendsTooltipEnabled { get; }

		bool BoardItemAnimationsEnabled { get; }

		bool PowerBoostMaxIndicationIgnoreShortChains { get; }

		bool EventCenterEnabled { get; }

		bool EventCenterStickyToggle { get; }

		bool HandleDropMessageRewardsEnabled { get; }

		float MergeAnimationSpeed { get; }

		float ProduceAnimationSpeed { get; }

		bool DisableEventCenterScrollToggle { get; }

		bool DynamicSkipCooldownPriceEnabled { get; }

		bool UseNewOrderViewInfrastructure { get; }

		int PBSpawnLowLvlItemOutOfPercentCoreValue { get; }

		int PBSpawnLowLvlItemOutOfPercentEventValue { get; }

		int PBBoardStateLowLvlItemCoreValue { get; }

		int PBBoardStateLowLvlItemEventValue { get; }

		bool MaterialKeywordConversionToggle { get; }

		bool FetchPromotionsOnSeasonActivationToggle { get; }

		bool MegaOEREnabled { get; }

		bool BlockOldRateUsPopupFlowToggle { get; }

		string RateUsPopupContactUrl { get; }

		bool UseThreadToParseState { get; }

		bool ProducerHighlightEnabled { get; }

		float HiddenGamePermanentFtueSeconds { get; }

		bool TownChallengeIconDisplayAnalyticsToggle { get; }

		string SurpriseBoxInfoPopupUrl { get; }

		bool RewardCalendarLogsToggle { get; }

		bool ImmediateToolsAlgoFixEnabledToggle { get; }

		bool DuelDynamicBarToggle { get; }

		bool IconsCenterEnabled { get; }

		int IconsCenterAutoOpenIdleDuration { get; }

		int IconsCenterCarouselDuration { get; }

		int IconsCenterMinLevelRequirement { get; }

		bool TournamentGetStateLogsToggle { get; }

		bool FlyingAccumulationEnabled { get; }

		bool LuckyJackpotFlyingAccumulationEnabled { get; }

		int DirectPurchaseTimeoutDuration { get; }

		string DirectPurchaseUrl { get; }

		bool EnableAndroidMoonshopFlowStore { get; }

		bool EnableAndroidMoonshopFlowCardsInbox { get; }

		bool EnableDirectPurchaseNewDesign { get; }

		int VanityBsFtueBoughtItemsThreshold { get; }

		bool BoardMiniGameTransitionAnalyticsEnabled { get; }

		int MinLevelBackgroundMusic { get; }

		bool UnloadResourcesOn { get; }

		bool ShouldAnimateEnvironment { get; }

		bool ShouldAnimateBuildings { get; }

		bool OrderCharacterRichBehaviourEnabled { get; }

		int VietnamBadgeAutoCloseDurationSeconds { get; }

		int VietnamBadgeAutoOpenIntervalSeconds { get; }

		bool InventoryChainBadgesEnabled { get; }

		bool GoogleLevelUpEnabled { get; }

		bool ForceOpenVodOnNewEpisodeUnlocked { get; }

		T GetUserDefaultsValue<T>(string key, T fallbackValue = default(T));

		List<AbTestAssetOverrides> GetAbTestAssetOverridesList();

		ZendeskLanguages GetZendeskLanguages();

		RemoteLocalizationData GetLocalizationAssets();

		GCItemsBubbleConfig GetItemsBubbleConfig();

		List<GCCharacterConfig> GetCoreAvailableCharactersConfig();

		RealCurrencyProduct[] GetProducts();

		InventoryConfig GetInventoryConfig();

		BubbleSaleBundledAssets GetBubbleSaleAssets();

		List<BubbleSaleTheme> GetBubbleSaleThemes();

		MoonShopConfiguration GetMoonShopConfig();

		BackgroundMusicTheme GetBackgroundMusicTheme();

		ExportedAssetBank GetBackgroundMusicAssets();

		Merger.GameGeneralAssets.Data.GameGeneralAssets GetGameGeneralAssets();

		GameGeneralAssetsConfig GetGameGeneralAssetsConfig();

		EventCenterSchemaConfiguration GetEventCenterConfig();
	}
}
