using System;

namespace GameLogic.Player.Actions
{
	public static class MergeMansionActionCodes
	{
		public static class Basic
		{
			public const int MergeBoardMove = 11000;

			public const int MergeBoardSwap = 11001;

			public const int MergeBoardSink = 11032;

			public const int MergeBoardConsumeIn = 11033;

			public const int DirectorPauseMergeBoard = 11002;

			public const int DirectorUnpauseMergeBoard = 11003;

			public const int DirectorMakeReadyForActivation = 11004;

			public const int MakeHotspotVisible = 11006;

			public const int UpdateTrackingSessionsInTheLast240Hours = 11007;

			public const int StartChestOpening = 11013;

			public const int ClearUndoSellItem = 11014;

			public const int SetSoundEffectsOn = 11017;

			public const int SetMusicOn = 11018;

			public const int SetMasterNotificationsOn = 11019;

			public const int SetBlacklistedNotificationCategories = 11020;

			public const int SetDirectorEventGroupCompleted = 11021;

			public const int ReportCurrentTutorialStep = 11022;

			public const int UpdateStoredAnimationState = 11023;

			public const int UpdateStoredUnityAnimationState = 11024;

			public const int SetLastCalendarChangeDate = 11025;

			public const int SetPlayerLtvInEur = 11028;

			public const int SetShopOfferLastOpened = 11034;

			public const int SelectDecorationForSlot = 11036;

			public const int ClaimBoardEventLevelReward = 11037;

			public const int ClaimShopEventLevelReward = 11038;

			public const int UpdateBoardEventLastSeenState = 11041;

			public const int UpdateShopEventLastSeenState = 11042;

			public const int SetGameEventSeenState = 11043;

			public const int AcceptToSVersion2 = 11044;

			public const int IncrementBoardEventEnterMergeBoardCount = 11045;

			public const int UpdateDailyTasksLastSeenState = 11046;

			public const int TryClaimDailyTasksLevelReward = 11047;

			public const int PreparePurchaseGameEventExtension = 11048;

			public const int BoardEventPhaseNoted = 11049;

			public const int ResolveShopEvent = 11050;

			public const int ResolveBoardEvent = 11051;

			public const int SkipBoardEventExtension = 11052;

			public const int ScriptedEventsCompleted = 11053;

			public const int ThirdPartySurveyStarted = 11054;

			public const int VideoPlaybackFinished = 11055;

			public const int SlideShowPlaybackFinished = 11056;

			public const int DialoguePlaybackFinished = 11057;

			public const int GarageCleanupEventVisited = 11058;

			public const int RunStartupActions = 11059;

			public const int ProgressionEventPhaseNoted = 11060;

			public const int PreparePurchaseProgressionEventPremiumIAP = 11061;

			public const int SetLastAutoOfferPopupSeen = 11062;

			public const int GarageCleanupEventPhaseNoted = 11063;

			public const int UpdateBoardBoosterStates = 11064;

			public const int AcceptTermsOfService = 11065;

			public const int SetNewActiveAutoOfferInfoIfNeeded = 11066;

			public const int AcknowledgeShopEvent = 11067;

			public const int PreparePurchaseCurrencyBank = 11068;

			public const int CollectibleBoardEventPhaseNoted = 11069;

			public const int UpdateCollectibleBoardEventLastSeenState = 11070;

			public const int TriggerCollectibleBoardEventEnterBoardDialogue_DEPRECATED = 11071;

			public const int TriggerCollectibleBoardEventEndDialogue = 11072;

			public const int IncrementCollectibleBoardEventEnterMergeBoardCount_DEPRECATED = 11073;

			public const int LeaderboardEventPhaseNoted = 11074;

			public const int SetGarageShopLastOpened_DEPRECATED = 11075;

			public const int SetMusicVolume = 11076;

			public const int SetSoundVolume = 11077;

			public const int TriggerBoardEventEnterBoardDialogue = 11078;

			public const int DiscoverDialogueCharacter = 11079;

			public const int PlayerSetFlags = 11080;

			public const int TryJoinLeaderboardEvent = 11081;

			public const int SetShopLastOpened = 11082;

			public const int TriggerLeaderboardEventEndDialogue = 11083;

			public const int CollectibleBoardEventDecorationNoted = 11084;

			public const int TryTakePhoto = 11085;

			public const int NoteCollectibleBoardEventCamera = 11086;

			public const int SetFishCatchPopupSeen = 11087;

			public const int StartSeason = 11088;

			public const int ResetProgressionEventIAPStreak = 11089;

			public const int ResetPersistentDecayCycles = 11090;

			public const int SetCameraPosition = 11091;

			public const int MakeHotspotHidden = 11092;

			public const int DialogueItemStarted = 11093;

			public const int SetHaptics = 11094;

			public const int UnlockSong = 11095;

			public const int TutorialShopAction = 11096;

			public const int DiscoverSeason = 11097;

			public const int UsePendingTimeSkips = 11098;

			public const int SetPlayerModeActive = 11099;

			public const int ChangePet = 11100;

			public const int UpdateVisibleHotspot = 11101;

			public const int UnlockLayeredPetHomeHotspot = 11102;

			public const int UsePendingCooldownRemover = 11103;

			public const int SideBoardEventPhaseNoted = 11104;

			public const int SideBoardEventLastUnlockedEventCharacterNotedEndPopup = 11105;

			public const int SideBoardEventLastUnlockedEventCharacterNotedProgressionPopup = 11106;

			public const int SetInventorySortMode = 11107;

			public const int ReportWebShopSignIn = 11108;

			public const int ProgressionEventPassPurchaseNoted = 11109;

			public const int ProgressionEventPassObtainedPopupNoted = 11110;

			public const int ManuallyActivateOfferGroup = 11111;

			public const int MysteryMachineEventPhaseNoted = 11112;

			public const int ReportSceneChange = 11113;

			public const int SetOfferPopupTriggerTotalActivationCount = 11114;

			public const int UpdateUnitySystemInfo = 11115;

			public const int SetProducerInventorySlotSeenState = 11120;

			public const int SetHasAds = 11121;

			public const int EnergyModeEventPhaseNoted = 11122;

			public const int PreparePurchaseMakeYourOwnOffer = 11123;

			public const int MiniEventPhaseNoted = 11124;

			public const int SoloMilestoneEventPhaseNoted = 11125;

			public const int SoloMilestoneProgressAction = 11126;

			public const int SoloMilestoneHotspotValueCalculation = 11127;

			public const int DailyScoopPopupDisplayedNoted = 11128;

			public const int SoloMilestoneEventCompletionPopupNoted = 11129;

			public const int ProgressionEventSetLastLevelNoted = 11130;

			public const int AcknowledgeMysteryMachineLeaderboardPosition = 11131;

			public const int BoultonLeagueEventPhaseNoted = 11132;

			public const int JoinBoultonLeagueEventDivisionRequest = 11133;

			public const int TemporaryCardCollectionEventPhaseNoted = 11134;

			public const int TemporaryCardCollectionCraftCard = 11135;

			public const int TemporaryCardCollectionBuyEvidenceBox = 11136;

			public const int TemporaryCardCollectionSkipEvidenceBoxCooldown = 11137;

			public const int TemporaryCardCollectionTryRefreshPurchaseCount = 11138;

			public const int TryActivatePrisonCell = 11139;

			public const int TryActivateGreatEscapeMinigame = 11140;

			public const int TheGreatEscapeMinigameFinished = 11141;

			public const int TrySinkToPostBox = 11142;

			public const int ReportShopOpening = 11143;

			public const int ShortLeaderboardEventPhaseNoted = 11144;

			public const int JoinShortLeaderboardEventStageRequest = 11145;

			public const int ReplayShortLeaderboardEventStage = 11146;

			public const int FinishShortLeaderboardEventIntro = 11147;

			public const int TriggerShortLeaderboardEventEndDialogue = 11148;

			public const int MarkShortLeaderboardEventStageCompletionDialogueTriggered = 11149;

			public const int StartShortLeaderboardEventStage = 11150;

			public const int ClaimShortLeaderboardEventStageStars = 11151;

			public const int MarkShortLeaderboardEventInfoPopupTriggered = 11152;

			public const int StartShortLeaderboardEventIntro = 11153;

			public const int NoteShortLeaderboardEventStageStarsClaim = 11154;

			public const int ProgressionPackEventPhaseNoted = 11170;

			public const int ProgressionPackEventPassPurchaseNoted_DEPRECATED = 11171;

			public const int PreparePurchaseProgressionPackEventPremiumIAP = 11172;

			public const int OfferPerGroupPurchasableNoted = 11173;

			public const int DigEventAddCollectionToMuseum = 11175;

			public const int DigEventMinigameFTUENoted = 11176;

			public const int SpecialItemFoundFlag = 11177;

			public const int CollectionItemFoundFlag = 11178;

			public const int CollectionFTUENoted = 11179;

			public const int OfferGroupPopupNoted = 11180;

			public const int CardCollectionSupportingEventPhaseNoted = 11181;

			public const int PlayerPreparePurchaseDynamicBasicOffer = 11182;

			public const int SetAutoActivatedRewardSeen = 11183;

			public const int CoreSupportEventPhaseNoted = 11184;

			public const int MixABoosterEventPhaseNoted = 11185;

			public const int AdStampCardEventPhaseNoted = 1186;

			public const int AdStampCardEventMarkStampAsWatched = 1187;

			public const int ClassicRacesMinigamePhaseNoted = 11188;

			public const int JoinClassicRacesEventStageRequest = 11189;

			public const int StartClassicRacesEventStage = 11190;

			public const int EndClassicRacesEventStage = 11191;

			public const int FinishClassicRacesEventIntro = 11192;

			public const int FinalizeClassicRacesEvent = 11193;

			public const int FinishClassicRacesEventRaceLostDialog = 11194;

			public const int UpdateClassicRacesEventSeenProgress = 11195;

			public const int SetClassicRacesEventExtraRacesDisplayed = 11196;

			public const int FinishClassicRacesEventRaceWonDialog = 11197;

			public const int FinishCollectibleBoardEventBoard = 11198;

			public const int SetupCollectibleBoardEventBoard = 11200;

			public const int UsePendingOnFire = 11201;

			public const int ClaimProgressionTrackFinalRewards = 11202;

			public const int WildItemConsume = 11203;

			public const int ReportMergeGoalUnlocked = 11204;

			public const int SetLeaderBoardEventEndPopupSeen = 11205;

			public const int RemoveDiscoveredSeason = 11206;
		}

		public static class Debug
		{
			public const int ForceSynchronizationFailure = 1900;

			public const int MakeHotspotVisible = 20000;

			public const int ForceCompleteHotspot = 20004;

			public const int SkipGameTime = 20001;

			public const int AddItemToBoard = 20002;

			public const int RemoveItemFromBoard = 20003;

			public const int ResetBoard = 20006;

			public const int RestoreGarageBoard = 20008;

			public const int AddCurrency = 20005;

			public const int AddDebugMail = 20007;

			public const int RemoveResources = 20009;

			public const int RemoveAllCurrency = 20012;

			public const int ReduceEventTimeLeft = 20010;

			public const int ActivateItem = 20011;

			public const int AddCurrentEventProgress = 20013;

			public const int StartBoardEvent = 20015;

			public const int StartShopEvent = 20016;

			public const int EndBoardEvent = 20022;

			public const int EndShopEvent = 20023;

			public const int CompleteCurrentEventTask = 20017;

			public const int ReachTargetBoardEventLevel = 20018;

			public const int ReachTargetShopEventLevel = 20019;

			public const int PurchaseEventShopOffer = 20020;

			public const int ExpireEventShopOffer = 20021;

			public const int AddAllDecorationsFromGameConfig = 20024;

			public const int AddEventPoints = 20026;

			public const int ChangePlayerLevelTo = 20027;

			public const int AddChestsToPocket = 20028;

			public const int AddNeededItemsFromActiveBoardEventsToBoard = 20029;

			public const int TryExtendShopEventAndHintedBoard = 20030;

			public const int TryCompleteCurrentAvailableGameEventTasks = 20031;

			public const int ReplaceItemsOnBoard = 20032;

			public const int ForceCompleteGameFeatureUnlocks = 20033;

			public const int DiscoverAllItems = 20034;

			public const int UndiscoverAllItems = 20035;

			public const int DeclaimItemDiscoveryRewards = 20036;

			public const int FillRandomGarageCleanupBoardSlot = 20037;

			public const int ClearGarageCleanupBoard = 20038;

			public const int ResetGarageCleanupLevel = 20039;

			public const int AddDecoration = 20040;

			public const int RemoveDecoration = 20041;

			public const int ForceHotspotVisible = 20050;

			public const int ForceHideHotspot = 20051;

			public const int AddProgressionEventProgress = 20060;

			public const int ResetProgressionEventProgress = 20061;

			public const int SetProgressionEventPremiumIAP = 20062;

			public const int ResetProgressionEventPassPurchaseNoted = 20063;

			public const int ResetProgressionPackEventProgress = 20064;

			public const int AddInboxMail = 20070;

			public const int ResetEventOfferSetRewardClaim = 20080;

			public const int ResetEventOffer = 20081;

			public const int ForgetDirectorEventGroup = 20090;

			public const int MoveItemToPocket = 20100;

			public const int ClearPocket = 20101;

			public const int MoveMergeItemToPocket = 20102;

			public const int SetTimezone = 20110;

			public const int DeacknowledgeShopEvent = 20111;

			public const int ClearInventory = 21110;

			public const int RestartDailyTasks = 21111;

			public const int ResetBoardExceptCoordinates = 21112;

			public const int ForceAreaState = 21113;

			public const int AddDailyTask = 21114;

			public const int RemoveDailyTask = 21115;

			public const int AddBankCurrency = 21120;

			public const int ApplyBankReward = 21121;

			public const int ClearBankCurrency = 21122;

			public const int AddBankCurrencyOnCompleteTask = 21123;

			public const int AddBankCurrencyOnMerge = 21124;

			public const int AddBankCurrencyOnSpawnItemUsingEnergy = 21125;

			public const int AddCollectibleBoardEventEventProgress = 21130;

			public const int ResetCollectibleBoardEventProgressDebug = 21131;

			public const int SetMergeChainLevel = 21140;

			public const int ResetFlashSales = 21150;

			public const int AddLeaderboardEventScore = 21160;

			public const int ResetLeaderboardEventProgress = 21161;

			public const int ForceDiscoveredCharacters = 21170;

			public const int AddItemAttachment = 21180;

			public const int SetDaysSinceLastLogin = 21181;

			public const int RemoveSocialAuthRewardCollected = 21182;

			public const int AddPlayerReward = 21183;

			public const int AddLayeredDecorationProgress_DEPRECATED = 22184;

			public const int SetLayeredDecorationProgressToMax_DEPRECATED = 21185;

			public const int ClearLayeredDecorationProgress_DEPRECATED = 21186;

			public const int StartCollectibleBoardEvent = 21187;

			public const int SkipGameTimeOnPlayer = 21188;

			public const int EmptyItemStorage = 21190;

			public const int AddFishingRod = 21191;

			public const int ResetPlayerName = 21192;

			public const int ExpireRentableInventory = 21194;

			public const int ClearRentableInventory = 21195;

			public const int AddTimeToRentableInventory = 21196;

			public const int IncrementProgressionEventStreak = 21197;

			public const int ClearProgressionEventStreak = 21198;

			public const int AddInventorySlots = 21199;

			public const int CompleteThirdPartySurvey = 21200;

			public const int DoReEngagementCleanup = 21201;

			public const int DoSessionStartCleanup = 21202;

			public const int SetMergeBoardHasEnded = 21203;

			public const int AddPet = 21204;

			public const int RemovePet = 21205;

			public const int AddSideBoardEventEventProgress = 21206;

			public const int ResetSideBoardEventProgressDebug = 21207;

			public const int AlmostFinishSideBoardEvent = 21208;

			public const int AddSideBoardEventResourceItem = 21209;

			public const int AddOverrideSpawnItemRecord = 21210;

			public const int SetItemActivationState = 21211;

			public const int SetActivablesPhase = 21212;

			public const int SpawnItemIntoMysteryMachineContainer = 21213;

			public const int CompleteMysteryMachineTasks = 21214;

			public const int MysteryMachineHeatLevelUp = 21215;

			public const int MarkMysteryMachineTasksCompleted = 21216;

			public const int MysteryMachineLevelUp = 21217;

			public const int SkipMysteryMachineFTUE = 21218;

			public const int AddMysteryMachineScore = 21219;

			public const int SetAverageEnergySpent = 21220;

			public const int SetTransactionsDataDebug = 21221;

			public const int AddTransactionsValueDebug = 21222;

			public const int ClearMysteryMachine = 21223;

			public const int MarkMysteryMachineAllTasksCompletedRewardClaimed = 21224;

			public const int IncrementDailyTasksV2StreakCount = 21225;

			public const int ResetDailyTasksV2StreakCount = 21226;

			public const int RestartDailyTasksV2 = 21227;

			public const int StepDailyTaskV2 = 21228;

			public const int ClearDailyTasksV2AlgorithmLogContent = 21229;

			public const int RollDailyTasksV2Algorithm = 21230;

			public const int StartMiniEvent = 21231;

			public const int EndMiniEvent = 21232;

			public const int StatisticsAddItemMergeDebug = 21233;

			public const int StatisticsAddResourceGainedDebug = 21234;

			public const int StatisticsAddResourceSpentDebug = 21235;

			public const int ForceResetDailyScoopWeeklyProgress = 21236;

			public const int ForceResetDailyScoopDailyProgress = 21237;

			public const int AddDailyScoopEventProgress = 21238;

			public const int CompleteDailyScoopTask = 21239;

			public const int NearlyCompleteDailyScoopTasks = 21240;

			public const int IncreaseAllStatProgress = 21241;

			public const int ForceResetSoloMilestoneDebug = 21242;

			public const int AddSoloMilestoneEventTokensDebug = 21243;

			public const int SellItemsFromPocketDebug = 21244;

			public const int SellItemsFromInventoriesDebug = 21245;

			public const int EnqueueMysteryMachineSpawnItemsDebug = 21246;

			public const int SubmitMysteryMachineLeaderboardDummyScoresDebug = 21247;

			public const int ClearMysteryMachineLeaderboardDebug = 21248;

			public const int SubmitMysteryMachineLeaderboardScoreDebug = 21249;

			public const int AddBoultonLeagueEventScore = 21250;

			public const int ClearBoultonLeagueEventFtue = 21251;

			public const int EndBoultonLeagueEvent = 21252;

			public const int ResetBoultonLeagueEventProgress = 21253;

			public const int SetBoultonLeagueStage = 21254;

			public const int StartBoultonLeagueEvent = 21255;

			public const int AddBoultonLeagueDummyPlayer = 21256;

			public const int OpenCardCollectionPackAction = 21257;

			public const int RollCardCollectionGachaAlgorithmDebug = 21258;

			public const int ReceiveInformantDebug = 21259;

			public const int GainStarsAsCurrencyDebug = 21260;

			public const int OpenCardCollectionOnlyNewCardsPackAction = 21261;

			public const int ResetTemporaryCardCollectionEventDebug = 21262;

			public const int ResetTemporaryCardCollectionDailyEvidenceBoxes = 21263;

			public const int GetAllMissingCardsButOneDebug = 21264;

			public const int AddItemOnTopOfPlayerPocketDebug = 21265;

			public const int GetAllEvidenceDebug = 21266;

			public const int OpenCardCollectionOnlyRepeatedCardsPackAction = 21267;

			public const int GetCardPackDebug = 21268;

			public const int TryFillCardCollectionSequenceDebug = 21269;

			public const int ClearPlayerStepsDebug = 21270;

			public const int OfferForceFinalize = 21271;

			public const int OfferForceActivate = 21272;

			public const int TGEMinigameReset = 21273;

			public const int TGEMinigameComplete = 21274;

			public const int TGECompleteCodex = 21275;

			public const int TGEUnlockSingleBadge = 21276;

			public const int ResetLastTimezoneUpdateTimestampDebug = 21277;

			public const int EndAllMiniEvents = 21278;

			public const int AddTestCollectionToMuseum = 21279;

			public const int EmptyMuseum = 21280;

			public const int SetShortLeaderboardEventDivisionMatchmakingDuration = 21281;

			public const int ClaimShortLeaderboardEventStageStarsDebug = 21282;

			public const int AddShortLeaderboardEventScoreDebug = 21283;

			public const int AddShortLeaderboardEventStarsDebug = 21284;

			public const int SetBaseProgressionEventPremiumIAP = 21285;

			public const int StartProgressionPackEvent = 21286;

			public const int EndProgressionPackEvent = 21287;

			public const int AddProgressionPackEventProgress = 21288;

			public const int AddMoneySpentDebug = 21289;

			public const int SimulateLeaderboardInactivity = 21290;

			public const int AddLeaderboardEventDummyPlayersDebug = 21291;

			public const int DigEventAddItemToMuseumCollection = 21292;

			public const int ForceCompletePlayerRequirementDebug = 21293;

			public const int UseAreaGlobalRequirementsDebug = 21294;

			public const int ResetCoreSupportEventProgressDebug = 21296;

			public const int MixABoosterSetIngredientAmounts = 21298;

			public const int MixABoosterForgetRecipe = 21299;

			public const int MixABoosterResetFTUE = 21300;

			public const int AddAdStampCardEventProgress = 21301;

			public const int ResetAdStampCardEventProgress = 21302;

			public const int DigEventAutoCompleteLevel = 21303;

			public const int AddClassicRacesEventScoreDebug = 21304;

			public const int LeaveClassicRacesDivision = 21305;

			public const int AddLeaderboardParticipantEventPoints = 21306;

			public const int ClassicRacesEventSetRacesWon = 21307;

			public const int AddItemsToPocketDebug = 21308;

			public const int PurchaseIAPDebug = 21309;

			public const int CompleteCardSetsAndClaimRewards = 21310;

			public const int OverrideTasksTabStyleDebug = 21311;

			public const int ReactivateAutoMergeEvent = 21312;

			public const int AddProgressionTrackProgress = 21313;

			public const int ResetProgressionTrack = 21314;

			public const int ChangeCoreSupportEventCurrencies = 21315;

			public const int RollTheDiceCompleteCurrentLevel = 21316;

			public const int AddReEngagementTickToActivable = 21317;

			public const int ResetReEngagementInActivableDebug = 21318;

			public const int AddBuilderEventTokensDebug = 21400;

			public const int ResetBuilderEventProgressDebug = 21401;

			public const int OverrideBuilderEventModeDebug = 21402;

			public const int ResetBuilderEventFTUEProgressDebug = 21403;

			public const int AddCustomMergeBoardDebug = 21319;

			public const int AddWildItems = 21320;

			public const int UseWildItems = 21321;

			public const int FillInventoryDebug = 21322;

			public const int ResetDailyChallengesWeek = 21323;

			public const int ResetDailyChallengesDay = 21324;

			public const int ResetDailyChallengesActivation = 21325;

			public const int SetDailyChallengesDay = 21326;

			public const int NearlyCompleteDailyChallengesObjectives = 21327;

			public const int IncreaseFirstDailyChallengesUncompletedObjectiveProgress = 21328;

			public const int CompleteFirstDailyChallengesUncompletedObjective = 21329;

			public const int SetDailyChallengesPreviousWeekIdDebug = 21330;

			public const int SimulateCardPackOpeningDebug = 21331;

			public const int RemovePendingBoultonLeagueResultDebug = 21332;

			public const int ForceSetAllActivablesPhaseDebug = 21333;

			public const int ForceMissingHotspotsVisibleDebug = 21334;

			public const int ResetHotspotProgressDebug = 21335;

			public const int IncreaseSinkProgressDebug = 21336;

			public const int ResetStoredUnityAnimationStatesDebug = 21337;

			public const int ForceEndAutoMergeBooster = 21338;
		}

		public static class Bot
		{
			public const int StartBotSession = 12000;

			public const int EndBotSession = 12001;

			public const int SetBotInstanceId = 12010;

			public const int ClearBotInstanceId = 12011;

			public const int StartTest = 12020;

			public const int EndTest = 12021;
		}

		public static class Multi
		{
			public const int MergeBoardMerge = 10900;

			public const int ProcessActivation = 10901;

			public const int ProcessChestClick = 10902;

			public const int SetActiveMergeBoard = 10903;

			public const int MovePocketItemToBoard = 10905;

			public const int LevelUpPlayer = 10906;

			public const int FastOpenChest = 10907;

			public const int CollectItemFromBoard = 10908;

			public const int SellItemFromBoard = 10909;

			public const int UndoSellItem = 10910;

			public const int SpeedUpItem = 10911;

			public const int BuyWithToyCurrency = 10912;

			public const int MoveToInventory = 10913;

			public const int MoveFromInventory = 10914;

			public const int BuyInventorySlot = 10915;

			public const int BuyEnergy = 10916;

			public const int RollShopItems = 10917;

			public const int BubblePurchased = 10920;

			public const int UnlockItem = 10921;

			public const int CompleteHotspot = 10922;

			public const int CompleteCurrentSideBoardEventTask = 10923;

			public const int StartNewEventBoard = 10930;

			public const int SetCurrentEventBoardToCollection = 10931;

			public const int EndCurrentEventBoard = 10932;

			public const int StartNewDailyTasks = 10933;

			public const int InputWantedDailyTaskItem = 10934;

			public const int ClaimTotalCompletionDailyTaskReward = 10935;

			public const int ForceRotationOfShopOffers = 10936;

			public const int PurchaseEventShopOffer = 10937;

			public const int CompleteCurrentEventTask = 10938;

			public const int PreparePurchaseOfShopOffer = 1201;

			public const int ClearLingeringOffers = 1202;

			public const int PlayerPreparePurchaseSoftCurrencyMetaOffer = 1203;

			public const int ClaimItemDiscoveryReward = 10939;

			public const int ClaimItemDiscoveryCompletionReward = 10940;

			public const int PlayerOfferImpression = 1204;

			public const int PlayerGeneralImpression = 1205;

			public const int PlayerFlashSaleImpression = 1206;

			public const int StartGarageCleanupLevelAction = 1301;

			public const int FillGarageCleanupBoardSlot = 1302;

			public const int ClaimGarageCleanupSpawnerItemAction = 1304;

			public const int BuyGarageCleanupLevelAction = 1305;

			public const int SendAnalyticsSocialMediaPopupAction = 1306;

			public const int TryToBuyRefreshDailyTasksAction = 1307;

			public const int BubbleDismissed = 10941;

			public const int GiveSideBoardEventPortalItem = 10945;

			public const int ClaimSideBoardEventLevel = 10946;

			public const int ClaimEndOfSideBoardEventLevels = 10947;

			public const int CompleteArea = 10950;

			public const int NoteTeasedArea = 10951;

			public const int ClaimProgressionEventReward = 10960;

			public const int ClaimRemainingProgressionEventRewards = 10961;

			public const int TriggerProgressionEventEndDialogue = 10962;

			public const int TriggerProgressionEventEndFlow = 10963;

			public const int RemoveProgressionEventExtraInventory = 10964;

			public const int ClaimEventOfferSetRewards = 10970;

			public const int CollectAllItemsFromBoard = 10971;

			public const int SellItemFromInventory = 10972;

			public const int SellItemFromPocket = 10973;

			public const int AutoSellItemsFromBoard = 10974;

			public const int GiveCollectibleBoardEventPortalItem = 10975;

			public const int ClaimCollectibleBoardEventLevel = 10976;

			public const int ClaimEndOfCollectibleBoardEventLevels = 10977;

			public const int CurrencyBankImpressionDiscovered = 10980;

			public const int InitialiseBanks = 10981;

			public const int CurrencyBankBadgeInteractionAction = 10982;

			public const int GiveLeaderboardEventPortalItem = 10990;

			public const int TryFinalizePlayerDivision = 10991;

			public const int FinishReEngagement = 10992;

			public const int DailyTasksFirstImpression = 10993;

			public const int ClaimLeaderboardEventLevel = 10994;

			public const int ClaimLeaderboardEventRankingRewards = 10995;

			public const int GiveBoardEventPortalItem = 10996;

			public const int CompleteCurrentCollectibleBoardEventTask = 10997;

			public const int ProcessFishingRodTap = 10998;

			public const int SetMergeHints = 10999;

			public const int ClaimWorldRecordFishReward = 30000;

			public const int ClaimWeightStarReward = 30001;

			public const int ExpireRentableInventory = 30002;

			public const int TryToPurchaseRentableInventorySlotBatch = 30003;

			public const int SetRentableInventoryExtensionPopupSeen = 30004;

			public const int TryToMoveRentableInventoryItemsToBoard = 30005;

			public const int SetSinktooltipState = 30006;

			public const int BuyDecorationShopItem = 30007;

			public const int ChangeCollectibleBoardEventBoard = 30008;

			public const int RunCompleteHotspotVisualActions = 30009;

			public const int FinalizeSideBoardEvent = 30010;

			public const int ClaimLevelEventLevel = 30011;

			public const int SetAnimatedTextState = 30012;

			public const int TryMergeCardStack = 30013;

			public const int PlayerClaimPendingWebShopPurchase = 30014;

			public const int AdPlacementShown = 30015;

			public const int AdStarted = 30016;

			public const int AdFinished = 30017;

			public const int AdImpression = 30018;

			public const int UpdateFlashSaleItemAdPlacements = 30019;

			public const int BuyItemsWithAds = 30020;

			public const int ForceRotationOfShopOffersFromAds = 30021;

			public const int BuyEnergyAds = 30022;

			public const int SetupMysteryMachineEvent = 30023;

			public const int MergeMysteryMachineContainerItems = 30024;

			public const int PurchaseMysteryMachineSpecialSale = 30025;

			public const int StartMysteryMachine = 30026;

			public const int FinishMysteryMachine = 30027;

			public const int CompleteMysteryMachineTasks = 30028;

			public const int ClaimMysteryMachineAllTasksCompletedReward = 30029;

			public const int EnqueueMysteryMachineSpawnItems = 30030;

			public const int DequeueMysteryMachineSpawnItem = 30031;

			public const int SetMysteryMachinePrepared = 30032;

			public const int PurchaseMysteryMachineContinue = 30033;

			public const int BubblesAds = 30034;

			public const int AdsRewardForceResetFlashSale = 30035;

			public const int PurchaseForceResetFlashSale = 30036;

			public const int UnlockProducerInventorySlot = 30040;

			public const int PlayerShopItemIapImpression = 30041;

			public const int DeclineDailyTasksV2TimeExtension = 30042;

			public const int FillDailyTaskV2StepWithPurchase = 30043;

			public const int FillDailyTaskV2StepWithTrade = 30044;

			public const int PurchaseDailyTasksV2TimeExtension = 30045;

			public const int RefreshDailyTasksV2 = 30046;

			public const int RegisterDailyTasksV2FirstImpression = 30047;

			public const int RegisterDailyTasksV2DidOpenPopupAtLeastOnce = 30048;

			public const int TryToBuyRefreshDailyTaskV2Action = 30049;

			public const int AdvanceStatsObjective = 30050;

			public const int ClaimDailyScoopDailyReward = 30051;

			public const int ClaimDailyScoopMilestoneReward = 30052;

			public const int UpdateDailyScoopPopupDetails = 30053;

			public const int UnlockDailyScoopSpecialObjectives = 30054;

			public const int SendDailyScoopProgressAnalytics = 30055;

			public const int ClaimGemWeightReward = 30056;

			public const int ClaimWorldRecordGemReward = 30057;

			public const int SendDailyScoopTaskStatusAnalytics = 30058;

			public const int CacheBubbleAdsPlacement = 30059;

			public const int ClaimMysteryMachineLeaderboardRewards = 30061;

			public const int SocialMediaButtonAnalytics = 30062;

			public const int ClaimBoultonLeagueEventLeaderboardPlacementRewards = 30063;

			public const int GenerateAllDailyTasksV2Customizations = 30064;

			public const int RegisterBoultonLeagueEventDailyTasksV2FtueInspection = 30065;

			public const int RegisterBoultonLeagueEventFtueInspection = 30066;

			public const int SpeedUpItemAds = 30067;

			public const int ClaimCardCollectionCardSetReward = 30068;

			public const int TryToRunActionsFromPocket = 30069;

			public const int ClaimCardCollectionEventRewards = 30070;

			public const int GoCardCollectionPrestige = 30071;

			public const int NoteCardCollectionPrestige = 30072;

			public const int PlayerAdRewardClient = 30073;

			public const int ClaimEndOfTemporaryCardCollectionEventRewards = 30074;

			public const int CompletePlayerStep = 30075;

			public const int ClaimPrisonerLetterReward = 30076;

			public const int ClaimPrisonerBadgeReward = 30077;

			public const int ClaimMinigameReward = 30078;

			public const int ClaimShortLeaderboardEventStageCompletionRewards = 30079;

			public const int ClaimShortLeaderboardEventLevel = 30080;

			public const int ClaimShortLeaderboardEventFinalReward = 30081;

			public const int ClaimRemainingProgressionPackEventRewards = 30082;

			public const int ClaimProgressionPackEventReward = 30083;

			public const int ProgressionPackEventProgressEventPoints = 30084;

			public const int DailyAdReward = 30085;

			public const int SetDailyAdReward = 30086;

			public const int DigEventStartMinigame = 30087;

			public const int DigEventDeleteMinigame = 30088;

			public const int DigEventSyncTreasuresOnStart = 30089;

			public const int DigEventClaimMuseumShelfReward = 30090;

			public const int DigEventClaimLevelReward = 30091;

			public const int DigEventCloseMinigame = 30092;

			public const int DigEventRevealAndCollect = 30093;

			public const int DigEventClaimCollectionReward = 30094;

			public const int PlayerOutOfCurrency = 30095;

			public const int TGEv2CompleteBoardEvent = 30096;

			public const int GiveCoreSupportEventPortalItem = 30097;

			public const int InitCoreSupportEventMinigameModel = 30098;

			public const int ClaimEndOfCoreSupportEventRewards = 30099;

			public const int ClaimCoreSupportEventMinigameReward = 30100;

			public const int PlayerMixABoosterPurchase = 30101;

			public const int ForceHotspotCompletion = 30107;

			public const int MetaJourneyClient = 30109;

			public const int DigEventMarkMuseumItemSeen = 30110;

			public const int DigEventSubmitTileClick = 30112;

			public const int TryNoteUnlockableArea = 30114;

			[Obsolete("Use AutoMergeSetUserToggle instead")]
			public const int AutoMergeEventToggle = 30115;

			public const int ClaimAllProgressionTrackRewards = 30116;

			public const int RollTheDiceTryMakeServerRoll = 30117;

			public const int RollTheDiceClaimLevelReward = 30118;

			public const int RollTheDiceLoadNextLevel = 30119;

			public const int RollTheDiceDoMultiplierChange = 30120;

			public const int RollTheDiceCompleteFtueStep = 30122;

			public const int CoreSupportEventMarkEarlyEndPopupSeen = 30123;

			public const int BuilderEventConsumeMilestonesRewards = 30200;

			public const int BuilderEventModeUseToolForPoints = 30201;

			public const int BuilderEventStartNewBuild = 30202;

			public const int BuilderEventModeUseWheelForPoints = 30203;

			public const int BuilderEventWheelModeChangeMultiplier = 30204;

			public const int BuilderEventClaimFreeTimedReward = 30205;

			public const int BuilderEventClaimEventEndReward = 30206;

			public const int BuilderEventClaimBuild = 30207;

			public const int BuilderEventDequeueClaimedLevel = 30208;

			public const int BuilderEventWheelModeRefreshMultiplierIndex = 30209;

			public const int UpdateDailyChallengesSeenProgress = 30124;

			public const int AdvanceAndPayoutDailyChallengesObjective = 30125;

			public const int ClaimDailyChallengesMilestoneReward = 30126;

			public const int ClaimDailyChallengesDailyReward = 30127;

			public const int SetDailyChallengesEventPreviousWeekCompletionRatio = 30128;

			public const int AddHotspotMergeBoard = 30131;

			public const int AutoMergeSetUserToggle = 30132;

			public const int EventsOnBoardPriorityAnalytics = 30133;
		}

		public static class Server
		{
			public const int SocialMediaReward = 20202;

			public const int ForceEndPlayerStoryEvent = 20204;

			public const int ThirdPartySurveyCompletedAction = 20205;

			public const int RemoveForcedSegmentAction = 20206;

			public const int AddForcedSegmentAction = 20207;

			public const int ForceFeatureUnlockedAction = 20208;

			public const int PlayerInitiatedNameChangeValidationCompleted = 20209;

			public const int SetDivisionToPlayerLeaderboardEvent = 20210;

			public const int CollectSocialAuthenticationReward = 20211;

			public const int DisableAnalyticsAction = 20212;

			public const int PlayerTogglePremiumIAPPurchaseAction = 20214;

			public const int PlayerBanAction = 20215;

			public const int PlayerDisableNameChangeAction = 20216;

			public const int HandleWebshopPurchaseAction = 20217;

			public const int ChangeDailyTasksV2StreakCount = 20218;

			public const int PlayerAdReward = 20220;

			public const int RequestMysteryMachineLeaderboardRewardsResult = 20221;

			public const int JoinBoultonLeagueEventDivisionResponse = 20222;

			public const int AdStartedServer = 20223;

			public const int JoinShortLeaderboardEventStageResponse = 20224;

			public const int UpdateSegmentorSegments = 20226;

			public const int PutItemIntoInventoryOrPocket = 20227;

			public const int MetaJourneyServer = 20228;

			public const int DigEventServerRevealTileClick = 20229;

			public const int JoinClassicRacesEventStageResponse = 20230;

			public const int RollTheDiceMakeServerRoll = 20231;

			public const int RemoveForcedSegmentorAction = 20232;

			public const int AddForcedSegmentorAction = 20233;

			public const int BuilderEventServerRoll = 20234;
		}

		public static class Division
		{
			public const int DivisionMatchmakingEnded = 40000;

			public const int ClassicRacesSetWinner = 40001;
		}
	}
}
