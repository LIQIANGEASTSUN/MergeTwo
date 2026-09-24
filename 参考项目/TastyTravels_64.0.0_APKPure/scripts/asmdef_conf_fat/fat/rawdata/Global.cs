using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class Global : ProtoBaseProxy<Global>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int ActivityConsumeNum;

		public int ActivityMaxNum;

		public long AnnualSummaryDeadline;

		public bool BpGroupRankingHide;

		public bool BpRankingFriendHide;

		public bool BpRankingHide;

		public bool BpRankingWorldHide;

		public int Bpiconovertip1;

		public int Bpiconovertip2;

		public int CardShopRedRefreshUtc;

		public bool ClientHttpContinue;

		public int ClientHttpTimeout;

		public string DropProbability;

		public int EventEndPopupEventTheme;

		public int EventRoleShowAmount;

		public int EventRoleShowLimitation;

		public string FBCommunityWebsite;

		public bool GroupRankingHide;

		public int GuildAnnouncementLimit;

		public int GuildApplyCd;

		public int GuildApplyExpireDay;

		public int GuildApplyLimit;

		public int GuildCreatePrice;

		public int GuildJoinCd;

		public int GuildKickoutLimitation;

		public int GuildLeaderInactionDuration;

		public int GuildListNum;

		public int GuildMemberNum;

		public int GuildModifyNamePrice;

		public static readonly FieldCodec<string> _repeated_guildNameInvalidChar_codec;

		public readonly RepeatedField<string> GuildNameInvalidChar;

		public int GuildNameLenMax;

		public int GuildNameLenMin;

		public long GuildRefreshInterval;

		public int HobbitsName;

		public int HobbitsName2;

		public int LightLoadingInterval;

		public static readonly FieldCodec<string> _repeated_loadingImage_codec;

		public readonly RepeatedField<string> LoadingImage;

		public string MiniGameShareImgUrl;

		public int NoNetQuitTime;

		public int NoticeFetchIntervalSec;

		public static readonly FieldCodec<int> _repeated_noticeShowIntervalMinMaxSec_codec;

		public readonly RepeatedField<int> NoticeShowIntervalMinMaxSec;

		public int NoticeTimeoutSec;

		public int NotificationApplicationLevel;

		public int NotificationPopLimit;

		public int PacketDelateDays;

		public int PioneerIdx;

		public string PrivacyPolicy;

		public int RankingAnnounceDuration;

		public bool RankingAreaHide;

		public int RankingAreaHideInfo;

		public int RankingAreaShowLimitation;

		public bool RankingHide;

		public int RankingLevelAreaHideInfo;

		public int RankingLevelAreaShowLimitaion;

		public int RankingLevelHideInfo;

		public int RankingLevelShowLimitaion;

		public int RankingLevelWorldHideInfo;

		public int RankingLevelWorldShowLimitaion;

		public bool RankingWorldHide;

		public int RankingWorldHideInfo;

		public static readonly FieldCodec<int> _repeated_rankingWorldNormalAvatar_codec;

		public readonly RepeatedField<int> RankingWorldNormalAvatar;

		public int RankingWorldShowLimitaion;

		public static readonly FieldCodec<int> _repeated_rankingWorldTopAvatar_codec;

		public readonly RepeatedField<int> RankingWorldTopAvatar;

		public int RetentionPackRefreshUtc;

		public static readonly FieldCodec<int> _repeated_shopRefreshTime_codec;

		public readonly RepeatedField<int> ShopRefreshTime;

		public int SignCoinPrize;

		public int SignEnergyLimitPrize;

		public string TermsOfService;

		public float TrackSpeedup;

		public bool UMPSwitch;

		public int UnlockEventRoleShow;

		public int UserAvatarCount;

		public int UserTzOffset;

		public string WechatIOSDisablePayVersion;

		public static readonly FieldCodec<int> _repeated_yDSeq_codec;

		public readonly RepeatedField<int> YDSeq;

		public static readonly MapField<int, string>.Codec _map_abInfoAttributeDivide_codec;

		public readonly MapField<int, string> AbInfoAttributeDivide;

		public int ActivityCoolDown;

		public static readonly FieldCodec<string> _repeated_adIdAndroid_codec;

		public readonly RepeatedField<string> AdIdAndroid;

		public static readonly FieldCodec<string> _repeated_adIdAndroidAdmob_codec;

		public readonly RepeatedField<string> AdIdAndroidAdmob;

		public static readonly FieldCodec<string> _repeated_adIdAndroidAdmobAsia_codec;

		public readonly RepeatedField<string> AdIdAndroidAdmobAsia;

		public static readonly FieldCodec<string> _repeated_adIdIos_codec;

		public readonly RepeatedField<string> AdIdIos;

		public static readonly FieldCodec<string> _repeated_adIdIosAdmobAsia_codec;

		public readonly RepeatedField<string> AdIdIosAdmobAsia;

		public bool AdsCloseReward;

		public int AncCdTime;

		public static readonly FieldCodec<int> _repeated_ancNightStopTime_codec;

		public readonly RepeatedField<int> AncNightStopTime;

		public int AncSessionLimit;

		public bool AndoridTGAQueue;

		public int AndoridTGAQueueCountPerFrame;

		public int AutoDeliveryFetchDelay;

		public int AutoFingerTriggerTime;

		public int AvatarDefault;

		public int AvatarFrameDefault;

		public int BindSocialGem;

		public int BoardClearGem;

		public static readonly FieldCodec<string> _repeated_boardColors_codec;

		public readonly RepeatedField<string> BoardColors;

		public int BoostLevel;

		public int BoostLevel4X;

		public int BoostRate;

		public int BoostRate4X;

		public static readonly FieldCodec<int> _repeated_botColor_codec;

		public readonly RepeatedField<int> BotColor;

		public int BotFirstRankLevel;

		public int BoxPossibleOffset;

		public int BpTaskRefresh;

		public int BubbleAdId;

		public static readonly MapField<int, int>.Codec _map_bubbleBonus_codec;

		public readonly MapField<int, int> BubbleBonus;

		public int BubbleBonusProb;

		public int BubbleDeadItem;

		public static readonly FieldCodec<string> _repeated_bubbleDeadWeight_codec;

		public readonly RepeatedField<string> BubbleDeadWeight;

		public int BubbleExpired;

		public static readonly FieldCodec<string> _repeated_bubbleForceWt_codec;

		public readonly RepeatedField<string> BubbleForceWt;

		public int BubbleGuideItemId;

		public static readonly FieldCodec<float> _repeated_bubbleLevelDiffParam_codec;

		public readonly RepeatedField<float> BubbleLevelDiffParam;

		public int BubbleMaxNum;

		public int BuddyApplyLimitNum;

		public int BuddyApplyLimitTime;

		public int BuddyEnergyDailyLimit;

		public int BuddyEnergyEachSent;

		public int BuddyVisitExtraReward;

		public int BuddyVisitLimit;

		public static readonly FieldCodec<string> _repeated_buddyVisitReward_codec;

		public readonly RepeatedField<string> BuddyVisitReward;

		public string CardTradeGroupLink;

		public int DailyOrderReward;

		public static readonly MapField<int, int>.Codec _map_dailyTaskNums_codec;

		public readonly MapField<int, int> DailyTaskNums;

		public int DeRefreshUtc;

		public int DecoShopRefreshGem;

		public int DecoShopRefreshInterval;

		public static readonly FieldCodec<int> _repeated_defaultHome_codec;

		public readonly RepeatedField<int> DefaultHome;

		public static readonly FieldCodec<int> _repeated_defaultRolePart_codec;

		public readonly RepeatedField<int> DefaultRolePart;

		public int DemRefreshWeekday;

		public int DetectiveUnlockLevel;

		public int DiffApiTimeout;

		public string EnableAdType;

		public bool EnablePoolPolicy;

		public int ExitNewUser;

		public string EyeBaseColor;

		public int FishBoardRepeatNum;

		public string FloorDecoDisplay;

		public static readonly MapField<int, int>.Codec _map_freeBubbleCount_codec;

		public readonly MapField<int, int> FreeBubbleCount;

		public static readonly FieldCodec<int> _repeated_freeEnergyClaimCost_codec;

		public readonly RepeatedField<int> FreeEnergyClaimCost;

		public static readonly FieldCodec<int> _repeated_freeEnergyClaimNum_codec;

		public readonly RepeatedField<int> FreeEnergyClaimNum;

		public static readonly MapField<int, int>.Codec _map_freeEnergyClaimTime_codec;

		public readonly MapField<int, int> FreeEnergyClaimTime;

		public static readonly MapField<int, int>.Codec _map_freeEnergyNotification_codec;

		public readonly MapField<int, int> FreeEnergyNotification;

		public int FreeRechargeTimes;

		public static readonly FieldCodec<int> _repeated_freeRolePart_codec;

		public readonly RepeatedField<int> FreeRolePart;

		public int FreeSpeedUpTimes;

		public int FriendLimit;

		public int FriendOpinionFriendship;

		public static readonly FieldCodec<string> _repeated_frozenItemDeadWeight_codec;

		public readonly RepeatedField<string> FrozenItemDeadWeight;

		public int GalleryFingerLv;

		public int GcIntervalSec;

		public int GiftAutoRollingTime;

		public int GiftBoxStopShaking;

		public int GiveCardNum;

		public int GiveCardRefreshUtc;

		public string GuideMusic;

		public string HairBaseColor;

		public int HouseAdCloseTime;

		public static readonly FieldCodec<string> _repeated_hugeGem_codec;

		public readonly RepeatedField<string> HugeGem;

		public string InitIdleCoin;

		public int InventoryInitCap;

		public int InventoryProducerExtraGrid;

		public int InviteGemRewardNum;

		public int InvitedGemRewardNum;

		public bool IosTGABackground;

		public bool IsAdPreloading;

		public bool IsAndFacebook;

		public bool IsAndGoogle;

		public bool IsBubbleProbFixed;

		public bool IsFaq;

		public bool IsFixEnergy;

		public bool IsInAppReview;

		public bool IsIosApple;

		public bool IsIosFacebook;

		public bool IsIosGoogle;

		public bool IsNewFlyIcon;

		public bool IsNewOrderView;

		public bool IsOrderApiOnlyWhitelist;

		public bool IsOrderRefreshFix;

		public bool IsRFMFix;

		public bool IsSmartHelp;

		public bool IsSupportMerge;

		public static readonly FieldCodec<string> _repeated_islandChangeItemGold_codec;

		public readonly RepeatedField<string> IslandChangeItemGold;

		public static readonly MapField<int, int>.Codec _map_itemScaleTestB_codec;

		public readonly MapField<int, int> ItemScaleTestB;

		public static readonly FieldCodec<int> _repeated_luckyBoxCD_codec;

		public readonly RepeatedField<int> LuckyBoxCD;

		public int LuckyBoxLimit;

		public int LuckyBoxNum;

		public int LuckyWheelAdsCount;

		public int LuckyWheelFreeCount;

		public int LuckyWheelGemCost;

		public int LuckyWheelGemCount;

		public int LvPopupCardAlbum;

		public int LvPopupCloseDialog;

		public int LvPopupDE;

		public int LvPopupNewSession;

		public int LvPopupNewSessionId;

		public int MailSystemMax;

		public int MapBuildStartAim;

		public int MapBuildStopAim;

		public int MarketRefresh;

		public int MarketRefreshNum;

		public int MarketUtcClock;

		public int MaskTalkSafeCoordYDefault;

		public int MaskTalkSafeCoordYMax;

		public int MaskTalkSafeCoordYMin;

		public int MaxFameLevelToViewActivityFeed;

		public int MaxPullFriendInfoNum;

		public int MaxToastId;

		public int MaxToolCount;

		public int MergeBonus;

		public int MergeBonusLevel;

		public int MergeEnergyAutoMax;

		public int MergeEnergyAutoSec;

		public static readonly FieldCodec<int> _repeated_mergeEnergyPrice_codec;

		public readonly RepeatedField<int> MergeEnergyPrice;

		public int MergeRemindTriggerTime;

		public int MergeTutorialInterval;

		public int MergeTutorialStop;

		public string MouthBaseColor;

		public int MysteryStoreCustomNum;

		public int MysteryStoreCustomRate;

		public int MysteryStoreRefreshPrice;

		public static readonly FieldCodec<int> _repeated_mysteryStoreRefreshTime_codec;

		public readonly RepeatedField<int> MysteryStoreRefreshTime;

		public int NameMax;

		public int NameMin;

		public int NewUserGrandPrizeInviteNum;

		public static readonly MapField<int, int>.Codec _map_newUserGrandPrizeReward_codec;

		public readonly MapField<int, int> NewUserGrandPrizeReward;

		public int NewUserInviteeMaxLevel;

		public static readonly MapField<int, int>.Codec _map_newUserRewardForInvitee_codec;

		public readonly MapField<int, int> NewUserRewardForInvitee;

		public static readonly MapField<int, int>.Codec _map_newUserRewardForInvitor_codec;

		public readonly MapField<int, int> NewUserRewardForInvitor;

		public int NewUserRewardLevel;

		public string NicknameDefault;

		public int NicknameMaxLength;

		public int NicknameMinLength;

		public int NormalToastId;

		public int NoticeCombackTime;

		public int NoticeEventValidTime;

		public int NotifiPopupEventTheme;

		public int NotifiPopupShutdownLv;

		public static readonly FieldCodec<int> _repeated_notificationEnergyBonus_codec;

		public readonly RepeatedField<int> NotificationEnergyBonus;

		public int OldUserLetterDuration;

		public bool OnlineHotfixCheck;

		public int OnlineHotfixCheckInterval;

		public int OrderApiLiveopsGrade;

		public int OrderApiPastNum;

		public int OrderCtrlNum;

		public int OrderCtrlTooHigh;

		public int OrderCtrlTooHighTarget;

		public int OrderCtrlTooLow;

		public int OrderCtrlTooLowTarget;

		public int OrderEnterApiDelay;

		public int OrderEnterDelay;

		public int OrderLimitCount;

		public int PackApiTimeout;

		public int PetNPC;

		public int PopupLimit;

		public int PopupRefresh;

		public static readonly FieldCodec<float> _repeated_postCardIParamIsland1_codec;

		public readonly RepeatedField<float> PostCardIParamIsland1;

		public static readonly FieldCodec<float> _repeated_postCardParam_codec;

		public readonly RepeatedField<float> PostCardParam;

		public static readonly FieldCodec<string> _repeated_postcardGiftOthersReward_codec;

		public readonly RepeatedField<string> PostcardGiftOthersReward;

		public int PostcardMinNum;

		public int PreloadBufferSize;

		public int PullFriendInfoWaitTime;

		public static readonly FieldCodec<int> _repeated_pushShopCD_codec;

		public readonly RepeatedField<int> PushShopCD;

		public static readonly FieldCodec<int> _repeated_pushShopCDIce_codec;

		public readonly RepeatedField<int> PushShopCDIce;

		public int PushShopDuration;

		public static readonly MapField<int, int>.Codec _map_pushShopMaxNum_codec;

		public readonly MapField<int, int> PushShopMaxNum;

		public static readonly FieldCodec<int> _repeated_pushShopPopTimes_codec;

		public readonly RepeatedField<int> PushShopPopTimes;

		public int RankBotOrderLimitNum;

		public static readonly FieldCodec<int> _repeated_rankCoinsParam_codec;

		public readonly RepeatedField<int> RankCoinsParam;

		public static readonly FieldCodec<float> _repeated_rankCoinsParamNew_codec;

		public readonly RepeatedField<float> RankCoinsParamNew;

		public int RankMemberNum;

		public int RankOrderNum;

		public static readonly FieldCodec<string> _repeated_rankingWhitelist_codec;

		public readonly RepeatedField<string> RankingWhitelist;

		public static readonly FieldCodec<int> _repeated_rateBuildingBase_codec;

		public readonly RepeatedField<int> RateBuildingBase;

		public int RateRedirectLv;

		public static readonly FieldCodec<int> _repeated_rateTaskOpen_codec;

		public readonly RepeatedField<int> RateTaskOpen;

		public int RequireTypeADInit;

		public int RequireTypeLTInit;

		public int RequireTypeUtcClock;

		public int RestartTime;

		public int ServerTimeCheckRange;

		public int SettingFBFollowGem;

		public string SettingHelpshiftWebsite;

		public string SkinBaseColor;

		public int SpawnerExitLifetime;

		public int SpawnerExitLimt;

		public static readonly FieldCodec<int> _repeated_spawnerExitOutside_codec;

		public readonly RepeatedField<int> SpawnerExitOutside;

		public int SpdGemTips;

		public static readonly FieldCodec<int> _repeated_spdUpDivide_codec;

		public readonly RepeatedField<int> SpdUpDivide;

		public static readonly FieldCodec<int> _repeated_spdUpParam_codec;

		public readonly RepeatedField<int> SpdUpParam;

		public int SpecialStudentCdInterval;

		public static readonly FieldCodec<int> _repeated_studentAnchorPointAmount_codec;

		public readonly RepeatedField<int> StudentAnchorPointAmount;

		public static readonly FieldCodec<int> _repeated_studentGroupTotal_codec;

		public readonly RepeatedField<int> StudentGroupTotal;

		public static readonly FieldCodec<int> _repeated_studentShowInterval_codec;

		public readonly RepeatedField<int> StudentShowInterval;

		public int SunRankMemberNum;

		public int SunRankStopNewTime;

		public int SunRankTime;

		public static readonly FieldCodec<int> _repeated_surveyAdsPos_codec;

		public readonly RepeatedField<int> SurveyAdsPos;

		public static readonly MapField<int, int>.Codec _map_tapSourceTips_codec;

		public readonly MapField<int, int> TapSourceTips;

		public string TaskDailyFinalChest;

		public int TaskDailyHardRate;

		public int TaskDailyTotalNum;

		public static readonly FieldCodec<int> _repeated_taskPlotTime_codec;

		public readonly RepeatedField<int> TaskPlotTime;

		public int UpdateRemindPopupId;

		public int UserRecordMaxDay;

		public int UserRecordRefreshUtc;

		public int UserRecordWeekday;

		public int Version;

		public string WallPaperDisplay;

		public string WebclubAddress;

		public int WebclubPayMax;

		public int WebclubPayMin;

		public int WebpayHoldCD;

		public int WebpayInstallDay;

		public static readonly FieldCodec<int> _repeated_webpayOpenPayment_codec;

		public readonly RepeatedField<int> WebpayOpenPayment;

		public string WebshopAddress;

		public int WebshopShowPayment;

		public int WebshopShowPaymentMax;

		public int XXX_RowIdentifier { get; set; }

		public Global()
		{
		}

		public Global(Global other)
		{
		}

		public override Global Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
