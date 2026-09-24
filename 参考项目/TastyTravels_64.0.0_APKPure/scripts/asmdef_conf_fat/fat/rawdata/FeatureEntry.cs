using Google.Protobuf.Reflection;

namespace fat.rawdata
{
	public enum FeatureEntry
	{
		[OriginalName("FeatureNone")]
		FeatureNone = 0,
		[OriginalName("FeatureItemSale")]
		FeatureItemSale = 1,
		[OriginalName("FeatureBagItem")]
		FeatureBagItem = 2,
		[OriginalName("FeatureBagProducer")]
		FeatureBagProducer = 3,
		[OriginalName("FeatureBagTool")]
		FeatureBagTool = 4,
		[OriginalName("FeatureBubble")]
		FeatureBubble = 5,
		[OriginalName("FeatureMergeBonus")]
		FeatureMergeBonus = 6,
		[OriginalName("FeatureMapBuild")]
		FeatureMapBuild = 7,
		[OriginalName("FeatureShopGem")]
		FeatureShopGem = 8,
		[OriginalName("FeatureShopEnergy")]
		FeatureShopEnergy = 9,
		[OriginalName("FeatureShopChess")]
		FeatureShopChess = 10,
		[OriginalName("FeatureMapJump")]
		FeatureMapJump = 11,
		[OriginalName("FeatureHandbook")]
		FeatureHandbook = 12,
		[OriginalName("FeatureDE")]
		FeatureDe = 13,
		[OriginalName("FeatureDEM")]
		FeatureDem = 14,
		[OriginalName("FeatureOutputToast")]
		FeatureOutputToast = 15,
		[OriginalName("FeatureNewItemToast")]
		FeatureNewItemToast = 16,
		[OriginalName("FeatureOnePlusOne")]
		FeatureOnePlusOne = 17,
		[OriginalName("FeatureEndlessPack")]
		FeatureEndlessPack = 18,
		[OriginalName("FeatureErgBoost")]
		FeatureErgBoost = 19,
		[OriginalName("FeatureCardAlbum")]
		FeatureCardAlbum = 20,
		[OriginalName("FeatureMarketIAPGift")]
		FeatureMarketIapgift = 21,
		[OriginalName("FeatureFlashOrder")]
		FeatureFlashOrder = 22,
		[OriginalName("FeatureScore")]
		FeatureScore = 23,
		[OriginalName("FeatureStep")]
		FeatureStep = 24,
		[OriginalName("FeatureOrderExtra")]
		FeatureOrderExtra = 25,
		[OriginalName("FeatureLoginGift")]
		FeatureLoginGift = 26,
		[OriginalName("FeatureTreasure")]
		FeatureTreasure = 27,
		[OriginalName("FeatureDecorate")]
		FeatureDecorate = 28,
		[OriginalName("FeatureNotificationPopup")]
		FeatureNotificationPopup = 29,
		[OriginalName("FeatureAutoFinger")]
		FeatureAutoFinger = 30,
		[OriginalName("FeatureRace")]
		FeatureRace = 31,
		[OriginalName("FeatureOnePlusTwo")]
		FeatureOnePlusTwo = 32,
		[OriginalName("FeatureEndlessThreePack")]
		FeatureEndlessThreePack = 33,
		[OriginalName("FeatureProgressPack")]
		FeatureProgressPack = 34,
		[OriginalName("FeatureThreeForOnePack")]
		FeatureThreeForOnePack = 35,
		[OriginalName("FeatureSurvey")]
		FeatureSurvey = 36,
		[OriginalName("FeatureSettingsCommunity")]
		FeatureSettingsCommunity = 37,
		[OriginalName("FeatureRetentionPack")]
		FeatureRetentionPack = 38,
		[OriginalName("FeatureMiniBoard")]
		FeatureMiniBoard = 39,
		[OriginalName("FeatureMarketSlidePack")]
		FeatureMarketSlidePack = 40,
		[OriginalName("FeatureDigging")]
		FeatureDigging = 41,
		[OriginalName("FeatureAccountBind")]
		FeatureAccountBind = 42,
		[OriginalName("FeatureInvite")]
		FeatureInvite = 43,
		[OriginalName("FeatureMiniGame")]
		FeatureMiniGame = 44,
		[OriginalName("FeatureRank")]
		FeatureRank = 45,
		[OriginalName("FeatureGiveCard")]
		FeatureGiveCard = 46,
		[OriginalName("FeatureZeroQuest")]
		FeatureZeroQuest = 47,
		[OriginalName("FeatureGemEndlessThree")]
		FeatureGemEndlessThree = 48,
		[OriginalName("FeatureGemThreeForOne")]
		FeatureGemThreeForOne = 49,
		[OriginalName("FeatureShinnyGuarPack")]
		FeatureShinnyGuarPack = 50,
		[OriginalName("FeaturePachinko")]
		FeaturePachinko = 51,
		[OriginalName("FeatureEnergyMultiPack")]
		FeatureEnergyMultiPack = 52,
		[OriginalName("FeatureErgBoost4x")]
		FeatureErgBoost4X = 53,
		[OriginalName("FeatureMiniBoardMulti")]
		FeatureMiniBoardMulti = 54,
		[OriginalName("FeatureStamp")]
		FeatureStamp = 55,
		[OriginalName("FeatureWishing")]
		FeatureWishing = 56,
		[OriginalName("FeatureGuess")]
		FeatureGuess = 57,
		[OriginalName("FeatureDiscountPack")]
		FeatureDiscountPack = 58,
		[OriginalName("FeatureItemBingo")]
		FeatureItemBingo = 59,
		[OriginalName("FeatureMine")]
		FeatureMine = 60,
		[OriginalName("FeatureMineOnePlusOne")]
		FeatureMineOnePlusOne = 61,
		[OriginalName("FeatureOrderDash")]
		FeatureOrderDash = 62,
		[OriginalName("FeatureScoreDuel")]
		FeatureScoreDuel = 63,
		[OriginalName("FeatureOrderLike")]
		FeatureOrderLike = 64,
		[OriginalName("FeatureOrderRate")]
		FeatureOrderRate = 65,
		[OriginalName("FeatureFish")]
		FeatureFish = 66,
		[OriginalName("FeatureErgListPack")]
		FeatureErgListPack = 67,
		[OriginalName("FeatureLoginSign")]
		FeatureLoginSign = 68,
		[OriginalName("FeatureWeeklyTask")]
		FeatureWeeklyTask = 69,
		[OriginalName("FeatureOrderBonus")]
		FeatureOrderBonus = 70,
		[OriginalName("FeatureFight")]
		FeatureFight = 71,
		[OriginalName("FeatureFarmBoard")]
		FeatureFarmBoard = 72,
		[OriginalName("FeatureFarmEndlessPack")]
		FeatureFarmEndlessPack = 73,
		[OriginalName("FeatureRedeem")]
		FeatureRedeem = 74,
		[OriginalName("FeatureFightOnePlusOne")]
		FeatureFightOnePlusOne = 75,
		[OriginalName("FeatureThreeSign")]
		FeatureThreeSign = 76,
		[OriginalName("FeatureWeeklyRaffle")]
		FeatureWeeklyRaffle = 77,
		[OriginalName("FeatureWishBoard")]
		FeatureWishBoard = 78,
		[OriginalName("FeatureWishEndlessPack")]
		FeatureWishEndlessPack = 79,
		[OriginalName("FeatureNotifiPop")]
		FeatureNotifiPop = 80,
		[OriginalName("FeatureBp")]
		FeatureBp = 81,
		[OriginalName("FeatureSpinPack")]
		FeatureSpinPack = 82,
		[OriginalName("FeatureCastleMilestone")]
		FeatureCastleMilestone = 83,
		[OriginalName("FeatureDropProbability")]
		FeatureDropProbability = 84,
		[OriginalName("FeatureOrderStreak")]
		FeatureOrderStreak = 85,
		[OriginalName("FeatureEnergyBoost")]
		FeatureEnergyBoost = 86,
		[OriginalName("FeatureCommunity")]
		FeatureCommunity = 87,
		[OriginalName("FeatureBingoTask")]
		FeatureBingoTask = 88,
		[OriginalName("FeatureClawOrder")]
		FeatureClawOrder = 89,
		[OriginalName("FeatureMineCart")]
		FeatureMineCart = 90,
		[OriginalName("FeatureCartOnePlusOne")]
		FeatureCartOnePlusOne = 91,
		[OriginalName("FeatureMultiplierRanking")]
		FeatureMultiplierRanking = 92,
		[OriginalName("FeatureWishUpon")]
		FeatureWishUpon = 93,
		[OriginalName("FeatureTrainMission")]
		FeatureTrainMission = 94,
		[OriginalName("FeaturePuzzle")]
		FeaturePuzzle = 95,
		[OriginalName("FeatureLandmark")]
		FeatureLandmark = 96,
		[OriginalName("FeatureFrozenItem")]
		FeatureFrozenItem = 97,
		[OriginalName("FeatureLimitMerge")]
		FeatureLimitMerge = 98,
		[OriginalName("FeatureOnline")]
		FeatureOnline = 99,
		[OriginalName("FeatureLevelPack")]
		FeatureLevelPack = 100,
		[OriginalName("FeatureSevenDayTask")]
		FeatureSevenDayTask = 101,
		[OriginalName("FeatureGemVerify")]
		FeatureGemVerify = 102,
		[OriginalName("FeatureSkipRandomChest")]
		FeatureSkipRandomChest = 103,
		[OriginalName("FeatureSkipCardPack")]
		FeatureSkipCardPack = 104,
		[OriginalName("FeatureMicMilestone")]
		FeatureMicMilestone = 105,
		[OriginalName("FeatureSeaRace")]
		FeatureSeaRace = 106,
		[OriginalName("FeatureVineLeap")]
		FeatureVineLeap = 107,
		[OriginalName("FeatureCommunitySettingsRed")]
		FeatureCommunitySettingsRed = 108,
		[OriginalName("FeatureIndepenBingo")]
		FeatureIndepenBingo = 109,
		[OriginalName("FeatureCategroyInfo")]
		FeatureCategroyInfo = 110,
		[OriginalName("FeatureTapSourceInfo")]
		FeatureTapSourceInfo = 111,
		[OriginalName("FeatureMonopolyBoard")]
		FeatureMonopolyBoard = 112,
		[OriginalName("FeatureMonopolyOnePlusOne")]
		FeatureMonopolyOnePlusOne = 113,
		[OriginalName("FeatureWebshopEntrance")]
		FeatureWebshopEntrance = 114,
		[OriginalName("FeatureTicketUse")]
		FeatureTicketUse = 115,
		[OriginalName("FeatureRandomSeed")]
		FeatureRandomSeed = 116,
		[OriginalName("FeatureOrderDiffChoice")]
		FeatureOrderDiffChoice = 117,
		[OriginalName("FeatureAreaBoard")]
		FeatureAreaBoard = 118,
		[OriginalName("FeatureAreaEndlessPack")]
		FeatureAreaEndlessPack = 119,
		[OriginalName("FeaturePromptAreaItemLevelOpt")]
		FeaturePromptAreaItemLevelOpt = 120,
		[OriginalName("FeaturePromptAreaBubbleOpt")]
		FeaturePromptAreaBubbleOpt = 121,
		[OriginalName("FeaturePromptAreaTimerOpt")]
		FeaturePromptAreaTimerOpt = 122,
		[OriginalName("FeatureMysterious")]
		FeatureMysterious = 123,
		[OriginalName("FeatureRaceExtend")]
		FeatureRaceExtend = 124,
		[OriginalName("FeatureEnergyDelivery")]
		FeatureEnergyDelivery = 125,
		[OriginalName("FeatureUserEmail")]
		FeatureUserEmail = 126,
		[OriginalName("FeaturePiggyBank")]
		FeaturePiggyBank = 127,
		[OriginalName("FeatureOrderQuest")]
		FeatureOrderQuest = 128,
		[OriginalName("FeatureMagicCard")]
		FeatureMagicCard = 129,
		[OriginalName("FeatureDecorateExtra")]
		FeatureDecorateExtra = 130,
		[OriginalName("FeatureRewardRoad")]
		FeatureRewardRoad = 131,
		[OriginalName("FeatureSpawnerExit")]
		FeatureSpawnerExit = 132,
		[OriginalName("FeatureAgeGate")]
		FeatureAgeGate = 133,
		[OriginalName("FeatureBoardBP")]
		FeatureBoardBp = 134,
		[OriginalName("FeatureNotice")]
		FeatureNotice = 135,
		[OriginalName("FeatureBoostPack")]
		FeatureBoostPack = 136,
		[OriginalName("FeatureRaceMultiple")]
		FeatureRaceMultiple = 137,
		[OriginalName("FeatureExpress")]
		FeatureExpress = 138,
		[OriginalName("FeatureWebpay")]
		FeatureWebpay = 139,
		[OriginalName("FeatureServiceRedPoint")]
		FeatureServiceRedPoint = 140,
		[OriginalName("FeatureScoreShop")]
		FeatureScoreShop = 141,
		[OriginalName("FeatureEventOrganize")]
		FeatureEventOrganize = 142,
		[OriginalName("FeatureBuffOrganize")]
		FeatureBuffOrganize = 143,
		[OriginalName("FeatureOrderOrganize")]
		FeatureOrderOrganize = 144,
		[OriginalName("FeatureMainTileRwd")]
		FeatureMainTileRwd = 145,
		[OriginalName("FeatureSpinOnePlusOne")]
		FeatureSpinOnePlusOne = 146,
		[OriginalName("FeatureJokerFivePack")]
		FeatureJokerFivePack = 147,
		[OriginalName("FeatureMagicOrder")]
		FeatureMagicOrder = 148,
		[OriginalName("FeatureLoadingTips")]
		FeatureLoadingTips = 149,
		[OriginalName("FeatureLine")]
		FeatureLine = 150,
		[OriginalName("FeatureShopRefresh")]
		FeatureShopRefresh = 151,
		[OriginalName("FeatureToolImmediate")]
		FeatureToolImmediate = 152,
		[OriginalName("FeatureFestBoard")]
		FeatureFestBoard = 153,
		[OriginalName("FeatureFestEndlessPack")]
		FeatureFestEndlessPack = 154,
		[OriginalName("FeatureDEChoose")]
		FeatureDechoose = 155,
		[OriginalName("FeatureThiefOrder")]
		FeatureThiefOrder = 156,
		[OriginalName("FeatureOrderRwdChoice")]
		FeatureOrderRwdChoice = 157,
		[OriginalName("FeatureColorOrder")]
		FeatureColorOrder = 158,
		[OriginalName("FeatureScoreRaffle")]
		FeatureScoreRaffle = 159,
		[OriginalName("FeatureRescueBoard")]
		FeatureRescueBoard = 160,
		[OriginalName("FeatureRescueOnePlusOne")]
		FeatureRescueOnePlusOne = 161,
		[OriginalName("FeaturePopEnsure")]
		FeaturePopEnsure = 162,
		[OriginalName("FeatureEatTips")]
		FeatureEatTips = 163,
		[OriginalName("FeatureFoodVan")]
		FeatureFoodVan = 164,
		[OriginalName("FeatureMemory")]
		FeatureMemory = 165,
		[OriginalName("FeatureFirework")]
		FeatureFirework = 166,
		[OriginalName("FeatureOrderCoop")]
		FeatureOrderCoop = 167,
		[OriginalName("FeatureOnePlusFour")]
		FeatureOnePlusFour = 168,
		[OriginalName("FeatureBoardTokenMulti")]
		FeatureBoardTokenMulti = 169,
		[OriginalName("FeatureMedal")]
		FeatureMedal = 170,
		[OriginalName("FeatureSuperSpin")]
		FeatureSuperSpin = 171,
		[OriginalName("FeatureScoreBoard")]
		FeatureScoreBoard = 172,
		[OriginalName("FeatureScoreEndlessPack")]
		FeatureScoreEndlessPack = 173,
		[OriginalName("FeatureAccrueRewards")]
		FeatureAccrueRewards = 174,
		[OriginalName("FeatureLongOrder")]
		FeatureLongOrder = 175,
		[OriginalName("FeatureUnlockPreItem")]
		FeatureUnlockPreItem = 176,
		[OriginalName("FeaturePizzaParty")]
		FeaturePizzaParty = 177,
		[OriginalName("FeatureMultiSpin")]
		FeatureMultiSpin = 178,
		[OriginalName("FeatureCDOrder")]
		FeatureCdorder = 179,
		[OriginalName("FeatureEventEndLogin")]
		FeatureEventEndLogin = 180,
		[OriginalName("FeatureEventEndOnline")]
		FeatureEventEndOnline = 181,
		[OriginalName("FeatureEscapeQuest")]
		FeatureEscapeQuest = 182,
		[OriginalName("FeatureWebclubEntry")]
		FeatureWebclubEntry = 183,
		[OriginalName("FeatureWebclubERed")]
		FeatureWebclubEred = 184,
		[OriginalName("FeatureWebclubSill")]
		FeatureWebclubSill = 185,
		[OriginalName("FeatureNickname")]
		FeatureNickname = 186,
		[OriginalName("FeatureAvatar")]
		FeatureAvatar = 187,
		[OriginalName("FeatureAvatarFrame")]
		FeatureAvatarFrame = 188,
		[OriginalName("FeatureCustomBot")]
		FeatureCustomBot = 189,
		[OriginalName("FeaturePiggyOrder")]
		FeaturePiggyOrder = 190,
		[OriginalName("FeatureMoreGames")]
		FeatureMoreGames = 191,
		[OriginalName("FeatureAgeAssurance")]
		FeatureAgeAssurance = 192,
		[OriginalName("FeatureClearFog")]
		FeatureClearFog = 193,
		[OriginalName("FeatureClearFogScore")]
		FeatureClearFogScore = 194,
		[OriginalName("FeatureHoldDiff")]
		FeatureHoldDiff = 195,
		[OriginalName("FeatureOrderLikeMS")]
		FeatureOrderLikeMs = 196,
		[OriginalName("FeatureScoreCoop")]
		FeatureScoreCoop = 197,
		[OriginalName("FeatureBindTutorial")]
		FeatureBindTutorial = 198,
		[OriginalName("FeatureTileBingo")]
		FeatureTileBingo = 199,
		[OriginalName("FeatureMultiOrder")]
		FeatureMultiOrder = 200,
		[OriginalName("FeatureDecorateBP")]
		FeatureDecorateBp = 201,
		[OriginalName("FeatureFestLoginGift")]
		FeatureFestLoginGift = 202,
		[OriginalName("FeatureDiningBoard")]
		FeatureDiningBoard = 203,
		[OriginalName("FeatureDiningEndlessPack")]
		FeatureDiningEndlessPack = 204,
		[OriginalName("FeatureChoiceScore")]
		FeatureChoiceScore = 205,
		[OriginalName("FeatureSlideMerge")]
		FeatureSlideMerge = 206,
		[OriginalName("FeatureDuelPromo")]
		FeatureDuelPromo = 207,
		[OriginalName("FeaturePairMatching")]
		FeaturePairMatching = 208,
		[OriginalName("FeatureScoreChal")]
		FeatureScoreChal = 209,
		[OriginalName("FeatureTeamBattle")]
		FeatureTeamBattle = 210,
		[OriginalName("FeatureOrderDashItem")]
		FeatureOrderDashItem = 211,
		[OriginalName("FeatureScoreProm")]
		FeatureScoreProm = 212,
		[OriginalName("FeatureFishNew")]
		FeatureFishNew = 213,
		[OriginalName("FeatureFishEndlessNew")]
		FeatureFishEndlessNew = 214,
		[OriginalName("FeatureMakeupBoard")]
		FeatureMakeupBoard = 215,
		[OriginalName("FeatureMakeupEndlessPack")]
		FeatureMakeupEndlessPack = 216,
		[OriginalName("FeatureGachaSticker")]
		FeatureGachaSticker = 217,
		[OriginalName("FeatureBigGift")]
		FeatureBigGift = 218
	}
}
