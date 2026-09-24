using Google.Protobuf.Reflection;

namespace fat.rawdata
{
	public enum Toast
	{
		[OriginalName("ToastEmpty")]
		Empty = 0,
		[OriginalName("ToastBoardFull")]
		BoardFull = 1,
		[OriginalName("ToastNewItem")]
		NewItem = 2,
		[OriginalName("ToastProdMediumItem")]
		ProdMediumItem = 3,
		[OriginalName("ToastProdHighItem")]
		ProdHighItem = 4,
		[OriginalName("ToastMergeMediumItem")]
		MergeMediumItem = 5,
		[OriginalName("ToastMergeHighItem")]
		MergeHighItem = 6,
		[OriginalName("ToastUseItemBagInMeta")]
		UseItemBagInMeta = 7,
		[OriginalName("ToastUseProdBagInMeta")]
		UseProdBagInMeta = 8,
		[OriginalName("ToastConnectTimeOut")]
		ConnectTimeOut = 9,
		[OriginalName("ToastIapDeviceError")]
		IapDeviceError = 10,
		[OriginalName("ToastIapCancel")]
		IapCancel = 11,
		[OriginalName("ToastIapNetworkError")]
		IapNetworkError = 12,
		[OriginalName("ToastIapPurchaseError")]
		IapPurchaseError = 13,
		[OriginalName("ToastIapPurchasing")]
		IapPurchasing = 14,
		[OriginalName("ToastIapAccountError")]
		IapAccountError = 15,
		[OriginalName("ToastIaaLoadingFail")]
		IaaLoadingFail = 16,
		[OriginalName("ToastIaaPlayingFail")]
		IaaPlayingFail = 17,
		[OriginalName("ToastIaaNotComplete")]
		IaaNotComplete = 18,
		[OriginalName("ToastIaaUnknownError")]
		IaaUnknownError = 19,
		[OriginalName("ToastBoardFullUI")]
		BoardFullUi = 20,
		[OriginalName("ToastOutOfDiamond")]
		OutOfDiamond = 21,
		[OriginalName("ToastCopySuccess")]
		CopySuccess = 22,
		[OriginalName("ToastBagFull")]
		BagFull = 23,
		[OriginalName("ToastBagIllegal")]
		BagIllegal = 24,
		[OriginalName("ToastItemInfoUpgrade")]
		ItemInfoUpgrade = 25,
		[OriginalName("ToastItemInfoMaxLv")]
		ItemInfoMaxLv = 26,
		[OriginalName("ToastItemLocked")]
		ItemLocked = 27,
		[OriginalName("ToastBoardLevel")]
		BoardLevel = 28,
		[OriginalName("ToastCharging")]
		Charging = 29,
		[OriginalName("ToastIapRequestFail")]
		IapRequestFail = 30,
		[OriginalName("ToastIapUnknownError")]
		IapUnknownError = 31,
		[OriginalName("ToastRateFirst")]
		RateFirst = 32,
		[OriginalName("ToastEndlessClaim")]
		EndlessClaim = 33,
		[OriginalName("ToastLackItem")]
		LackItem = 34,
		[OriginalName("ToastEventEndTrans")]
		EventEndTrans = 35,
		[OriginalName("ToastBuildingLocked")]
		BuildingLocked = 36,
		[OriginalName("ToastShinyJokerRequire")]
		ShinyJokerRequire = 37,
		[OriginalName("ToastTreasureEmpty")]
		TreasureEmpty = 38,
		[OriginalName("ToastTreasureNoKey")]
		TreasureNoKey = 39,
		[OriginalName("ToastNotificationOn")]
		NotificationOn = 40,
		[OriginalName("ToastUnknownError")]
		UnknownError = 41,
		[OriginalName("ToastBindError")]
		BindError = 42,
		[OriginalName("ToastAlreadyBound")]
		AlreadyBound = 43,
		[OriginalName("ToastDiggingNoShovel")]
		DiggingNoShovel = 44,
		[OriginalName("ToastCardNoStar")]
		CardNoStar = 45,
		[OriginalName("ToastCardExchangeCD")]
		CardExchangeCd = 46,
		[OriginalName("ToastGiveCardLimit")]
		GiveCardLimit = 47,
		[OriginalName("ToastNoDuplicateCard")]
		NoDuplicateCard = 48,
		[OriginalName("ToastNeedChooseFriend")]
		NeedChooseFriend = 49,
		[OriginalName("ToastGemThreeForOne")]
		GemThreeForOne = 50,
		[OriginalName("ToastPachinkoNoToken")]
		PachinkoNoToken = 51,
		[OriginalName("ToastMax")]
		Max = 52,
		[OriginalName("ToastMiniBoardMultiEndItem")]
		MiniBoardMultiEndItem = 53,
		[OriginalName("ToastMiniBoardMultiDoorTip")]
		MiniBoardMultiDoorTip = 54,
		[OriginalName("ToastMiniBoardMultiGiftBoxTip")]
		MiniBoardMultiGiftBoxTip = 55,
		[OriginalName("ToastGuessNoToken")]
		GuessNoToken = 56,
		[OriginalName("ToastGuessRecordTap")]
		GuessRecordTap = 57,
		[OriginalName("ToastGuessDuplicate")]
		GuessDuplicate = 58,
		[OriginalName("ToastItemBingoChoose")]
		ItemBingoChoose = 59,
		[OriginalName("ToastItemBingoSpawnerSent")]
		ItemBingoSpawnerSent = 60,
		[OriginalName("ToastItemBingoNoItem")]
		ItemBingoNoItem = 61,
		[OriginalName("ToastGiveCardChooseFriend")]
		GiveCardChooseFriend = 62,
		[OriginalName("ToastMineNoToken")]
		MineNoToken = 63,
		[OriginalName("ToastFishNoHave")]
		FishNoHave = 64,
		[OriginalName("ToastLoginSign")]
		LoginSign = 65,
		[OriginalName("ToastFarmNoToken")]
		FarmNoToken = 66,
		[OriginalName("ToastRedeemNoToken")]
		RedeemNoToken = 67,
		[OriginalName("ToastRedeemLocked")]
		RedeemLocked = 68,
		[OriginalName("ToastFarmCloudLocked")]
		FarmCloudLocked = 69,
		[OriginalName("ToastBattery")]
		Battery = 70,
		[OriginalName("ToastNoMerge")]
		NoMerge = 71,
		[OriginalName("ToastNoPieces")]
		NoPieces = 72,
		[OriginalName("ToastWishNoToken")]
		WishNoToken = 73,
		[OriginalName("ToastAreaNoToken")]
		AreaNoToken = 74,
		[OriginalName("ToastAreaCloudKey")]
		AreaCloudKey = 75,
		[OriginalName("ToastGainResource")]
		GainResource = 76,
		[OriginalName("ToastDecorateRwdNoToken")]
		DecorateRwdNoToken = 77,
		[OriginalName("ToastRaceMultiBonus")]
		RaceMultiBonus = 78,
		[OriginalName("ToastRaceMultiBroken")]
		RaceMultiBroken = 79,
		[OriginalName("ToastRaceMultiMaximum")]
		RaceMultiMaximum = 80,
		[OriginalName("ToastTileUnlock")]
		TileUnlock = 81,
		[OriginalName("ToastFestNoToken")]
		FestNoToken = 82,
		[OriginalName("ToastOrderRwdPickNoPick")]
		OrderRwdPickNoPick = 83,
		[OriginalName("ToastRescueNotoken")]
		RescueNotoken = 84,
		[OriginalName("ToastRescueNoKey")]
		RescueNoKey = 85,
		[OriginalName("ToastNoMaterials")]
		NoMaterials = 86,
		[OriginalName("ToastRescueItem")]
		RescueItem = 87,
		[OriginalName("ToastMemoryNoToken")]
		MemoryNoToken = 88,
		[OriginalName("ToastCoopUnlock")]
		CoopUnlock = 89,
		[OriginalName("ToastMetaComing")]
		MetaComing = 90,
		[OriginalName("ToastScoreBoardNoToken")]
		ScoreBoardNoToken = 91,
		[OriginalName("ToastMedalEventEnded")]
		MedalEventEnded = 92,
		[OriginalName("ToastMultiSpinNoToken")]
		MultiSpinNoToken = 93,
		[OriginalName("ToastWebSDKError1")]
		WebSdkerror1 = 94,
		[OriginalName("ToastWebSDKError2")]
		WebSdkerror2 = 95,
		[OriginalName("ToastWebSDKError3")]
		WebSdkerror3 = 96,
		[OriginalName("ToastWebSDKError4")]
		WebSdkerror4 = 97,
		[OriginalName("ToastPiggyOrderNoToken")]
		PiggyOrderNoToken = 98,
		[OriginalName("ToastAvatarTransform")]
		AvatarTransform = 99,
		[OriginalName("ToastAvatarFrameTransform")]
		AvatarFrameTransform = 100,
		[OriginalName("ToastNicknameEmpty")]
		NicknameEmpty = 101,
		[OriginalName("ToastNicknameIllegal")]
		NicknameIllegal = 102,
		[OriginalName("ToastNicknameFail")]
		NicknameFail = 103,
		[OriginalName("ToastClearFogNoToken")]
		ClearFogNoToken = 104,
		[OriginalName("ToastClearFogFirst")]
		ClearFogFirst = 105,
		[OriginalName("ToastScoreCoopInvite")]
		ScoreCoopInvite = 106,
		[OriginalName("ToastScoreCoopSuccess")]
		ScoreCoopSuccess = 107,
		[OriginalName("ToastDecorateBPTask")]
		DecorateBptask = 108,
		[OriginalName("ToastDecorateBPBuy")]
		DecorateBpbuy = 109,
		[OriginalName("ToastDiningNoToken")]
		DiningNoToken = 110,
		[OriginalName("ToastDiningTableClose")]
		DiningTableClose = 111,
		[OriginalName("ToastDiningDragToBox")]
		DiningDragToBox = 112,
		[OriginalName("ToastBpClaimAll")]
		BpClaimAll = 113,
		[OriginalName("ToastStackNum")]
		StackNum = 114,
		[OriginalName("ToastPairMatchingToken")]
		PairMatchingToken = 115,
		[OriginalName("ToastSlideMergeNewLevel")]
		SlideMergeNewLevel = 116,
		[OriginalName("ToastGachaStickerNoToken")]
		GachaStickerNoToken = 117
	}
}
