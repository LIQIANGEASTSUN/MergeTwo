using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TLF;
using UnityEngine;

public class StaticDataManager : StaticDataBase<StaticDataManager>
{
	[StaticDataListMetaLanguage("Lang_UI_")]
	public SerializableDataMap<string, ILangVO> UILangMap = new SerializableDataMap<string, ILangVO>("닢\u00af赴");

	[StaticDataListMetaLanguage("Lang_UI_Customer_Question_")]
	public SerializableDataMap<string, ILangVO> UILangCustomerQuestionMap = new SerializableDataMap<string, ILangVO>("닢\u00af赴");

	[StaticDataListMetaLanguage("Language_Story_")]
	public SerializableDataMap<string, ILangVO> LanguageStory = new SerializableDataMap<string, ILangVO>("닢\u00af赴");

	[StaticDataListMetaLanguage("Language_StoryVideo_")]
	public SerializableDataMap<string, ILangVO> LanguageStoryVideo = new SerializableDataMap<string, ILangVO>("닢\u00af赴");

	[StaticDataListMeta("LevelInit")]
	public SerializableDataMap<int, IGameInitVo> GameInitList = new SerializableDataMap<int, IGameInitVo>("녧繲㜼\0郴\ud972");

	[StaticDataListMeta("LevelGoodsBase")]
	public SerializableDataList<IGoodsBaseVo> GoodsBaseList = new SerializableDataList<IGoodsBaseVo>();

	[StaticDataListMeta("LevelGoodsShape")]
	public SerializableDataMap<int, IGoodsShapeVo> GoodsShapeList = new SerializableDataMap<int, IGoodsShapeVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelGoodsCollect")]
	public SerializableDataMap<int, IGoodsCollectVo> GoodsCollectList = new SerializableDataMap<int, IGoodsCollectVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelGoodsMerge")]
	public SerializableDataMap<int, IGoodsMergeVo> GoodsMergeList = new SerializableDataMap<int, IGoodsMergeVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelGoodsPrice")]
	public SerializableDataMap<int, IGoodsPriceVo> GoodsPriceList = new SerializableDataMap<int, IGoodsPriceVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelInitiativeProduce")]
	public SerializableDataMap<int, IGoodsProduceVo> InitiativeProduceList = new SerializableDataMap<int, IGoodsProduceVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("MultiDropInitiativeProduce")]
	public SerializableDataList<IMultiDropProduceVo> MultiDropInitiativeProduceList = new SerializableDataList<IMultiDropProduceVo>();

	[StaticDataListMeta("LevelPassiveProduce")]
	public SerializableDataMap<int, IGoodsProduceVo> PassiveProduceList = new SerializableDataMap<int, IGoodsProduceVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelBaseProduce")]
	public SerializableDataMap<int, ILevelBaseProduceVO> GoodsBaseProduceList = new SerializableDataMap<int, ILevelBaseProduceVO>("숃끟䦫䐄獑!*匩");

	[StaticDataListMeta("LevelInstrument")]
	public SerializableDataMap<int, IGoodsInstrumentVO> GoodsInstrumentList = new SerializableDataMap<int, IGoodsInstrumentVO>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelInstrumentMaking")]
	public SerializableDataList<IInstrumentMakingVo> InstrumentMakingList = new SerializableDataList<IInstrumentMakingVo>();

	[StaticDataListMeta("LevelGoodsCooking")]
	public SerializableDataMap<int, IGoodsCookingVO> GoodsCookingList = new SerializableDataMap<int, IGoodsCookingVO>("瑧o4끤u휛䳬");

	[StaticDataListMeta("SpecialGoodsCooking")]
	public SerializableDataMap<int, ISpecialGoodsCooking> SpecialGoodsCookings = new SerializableDataMap<int, ISpecialGoodsCooking>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelGoodsSeries")]
	public SerializableDataMap<int, IGoodsSeriesVO> GoodsSeriesList = new SerializableDataMap<int, IGoodsSeriesVO>("숃끟䦫䐄獑!*匩");

	[StaticDataListMeta("LevelGoodsRevocation")]
	public SerializableDataMap<int, IGoodsRevocationVo> GoodsRevocationList = new SerializableDataMap<int, IGoodsRevocationVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelItemEffect")]
	public SerializableDataMap<int, ILevelItemEffectVo> LevelItemEffectList = new SerializableDataMap<int, ILevelItemEffectVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelGoodsStack")]
	public SerializableDataMap<int, ILevelGoodsStackVo> LevelGoodsStackDic = new SerializableDataMap<int, ILevelGoodsStackVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("GameMapReplace")]
	public SerializableDataList<IGameMapReplaceVo> GameMapReplaceList = new SerializableDataList<IGameMapReplaceVo>();

	[StaticDataListMeta("DynamicBoxGoods")]
	public SerializableDataList<IDynamicBoxGoodsVo> DynamicBoxGoodsList = new SerializableDataList<IDynamicBoxGoodsVo>();

	[StaticDataListMeta("ExpiredGoodsRemoveList")]
	public SerializableDataMap<int, IExpiredGoodsVo> ExpiredGoodsList = new SerializableDataMap<int, IExpiredGoodsVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("LevelGoodsShowProb")]
	public SerializableDataMap<int, ILevelGoodsShowProbVo> LevelGoodsShowProbMap = new SerializableDataMap<int, ILevelGoodsShowProbVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("RestaurantMap")]
	public SerializableDataList<IRestaurantMapVo> RestaurantMapList = new SerializableDataList<IRestaurantMapVo>();

	[StaticDataListMeta("LevelGoodsIllustrated")]
	public SerializableDataList<IGoodsIllustratedVo> GoodsIllustratedList = new SerializableDataList<IGoodsIllustratedVo>();

	[StaticDataListMeta("LevelGoodsAutoConversion")]
	public SerializableDataList<IGoodsAutoConversionVO> GoodsAutoConversionList = new SerializableDataList<IGoodsAutoConversionVO>();

	[StaticDataListMeta("LevelGoodsMass")]
	public SerializableDataMap<int, IGoodsMassVO> GoodsMassDic = new SerializableDataMap<int, IGoodsMassVO>("瑧o4끤u휛䳬");

	[StaticDataListMeta("CleverBoxConfig")]
	public SerializableDataMap<int, ICleverBoxConfigVo> CleverBoxConfigDic = new SerializableDataMap<int, ICleverBoxConfigVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("CleverBoxDropGoods")]
	public SerializableDataList<ICleverBoxDropGoodsVo> CleverBoxDropGoods = new SerializableDataList<ICleverBoxDropGoodsVo>();

	[StaticDataListMeta("RestaurantLevel")]
	public SerializableDataList<IRestaurantLevelVO> RestaurantLevelVOList = new SerializableDataList<IRestaurantLevelVO>();

	[StaticDataListMeta("LevelBag")]
	public SerializableDataMap<int, IBagVo> LevelBagMap = new SerializableDataMap<int, IBagVo>("匭橮ā讕鱸");

	[StaticDataListMeta("LevelExclusionSeries")]
	public SerializableDataList<ILevelExclusionSeriesVO> ExclusionSeriesVOList = new SerializableDataList<ILevelExclusionSeriesVO>();

	[StaticDataListMeta("BagSortConfig")]
	public SerializableDataList<IBagSortConfigVo> BagSortConfigVos = new SerializableDataList<IBagSortConfigVo>();

	[StaticDataListMeta("Item")]
	public SerializableDataMap<int, IItemVO> ItemMap = new SerializableDataMap<int, IItemVO>("漻䉼");

	[StaticDataListMeta("PlayerLevel")]
	public SerializableDataMap<int, IPlayerLevelVO> LevelMap = new SerializableDataMap<int, IPlayerLevelVO>("匨橥ā讕蹬");

	[StaticDataListMeta("MainlineOrder")]
	public SerializableDataList<IMainlineOrder> MainlineOrderList = new SerializableDataList<IMainlineOrder>();

	[StaticDataListMeta("LevelRecipe")]
	public SerializableDataMap<int, ILevelRecipeVO> LevelRecipeMap = new SerializableDataMap<int, ILevelRecipeVO>("漻䉼");

	[StaticDataListMeta("Cuisine")]
	public SerializableDataMap<int, ICuisineVO> CuisineMap = new SerializableDataMap<int, ICuisineVO>("숙끏新䤚捝<\u009a厙뻘");

	[StaticDataListMeta("DynamicOrderSwitch")]
	public SerializableDataMap<int, IDynamicOrderSwitch> DynamicOrderSwitchMap = new SerializableDataMap<int, IDynamicOrderSwitch>("숞끟犪感牕'Î反勺䳫\ud9c6Ő");

	[StaticDataListMeta("DynamicOrderRange")]
	public SerializableDataList<IDynamicOrderRangeVO> DynamicOrderRangeList = new SerializableDataList<IDynamicOrderRangeVO>();

	[StaticDataListMeta("DynamicOrderConfig")]
	public SerializableDataList<IDynamicOrderConfig> DynamicOrderConfigMap = new SerializableDataList<IDynamicOrderConfig>();

	[StaticDataListMeta("OrderSingleWaveReward")]
	public SerializableDataList<IOrderSingleWaveRewardVO> OrderSingleWaveRewardList = new SerializableDataList<IOrderSingleWaveRewardVO>();

	[StaticDataListMeta("OrderMultiWaveReward")]
	public SerializableDataList<IOrderMultiWaveRewardVO> OrderMultiWaveRewardList = new SerializableDataList<IOrderMultiWaveRewardVO>();

	[StaticDataListMeta("DebugGeneratorInstrument")]
	public SerializableDataMap<int, IDebugGeneratorInstrument> DebugGeneratorInstrumentMap = new SerializableDataMap<int, IDebugGeneratorInstrument>("숓끖䲸瘔灑 6匵");

	[StaticDataListMeta("ResetAssignRestaurant")]
	public SerializableDataMap<int, IResetAssignRestaurant> ResetAssignRestaurantMap = new SerializableDataMap<int, IResetAssignRestaurant>("숞끟犪感牕'Î反勺䳫\ud9c6Ű");

	[StaticDataListMeta("OrderHeadPortrait")]
	public SerializableDataMap<int, IOrderHeadPortrait> OrderHeadPortraitMap = new SerializableDataMap<int, IOrderHeadPortrait>("녨繥㜬\0郴\ud972");

	[StaticDataListMeta("ConfigConstant")]
	public SerializableDataList<IConfigConstant> configConstant = new SerializableDataList<IConfigConstant>();

	[StaticDataListMeta("ConfigReplace")]
	public SerializableDataList<IReplaceConfig> configReplaceList = new SerializableDataList<IReplaceConfig>();

	[StaticDataListMeta("UserAdTag")]
	public SerializableDataList<IUserAdTagVo> userAdTagList = new SerializableDataList<IUserAdTagVo>();

	[StaticDataListMeta("GameInitConfig")]
	public SerializableDataMap<string, IGameInitConfigVo> mGameInitConfig = new SerializableDataMap<string, IGameInitConfigVo>("닢\u00af赴");

	[StaticDataListMeta("TaskDrawing")]
	public SerializableDataList<ITaskDrawingVO> TaskDrawingList = new SerializableDataList<ITaskDrawingVO>();

	[StaticDataListMeta("StarTreasureBox")]
	public SerializableDataMap<int, IStarTreasureBoxVO> StarTreasureBoxMap = new SerializableDataMap<int, IStarTreasureBoxVO>("숣끕斡砤扚6\u009a厙");

	[StaticDataListMeta("TaskConomic")]
	public SerializableDataMap<int, ITaskConomic> TaskConomicMap = new SerializableDataMap<int, ITaskConomic>("匭橮ā讕鱸");

	[StaticDataListMeta("ShopConfig")]
	public SerializableDataMap<int, IShopConfigVO> ShopConfigMap = new SerializableDataMap<int, IShopConfigVO>("녺繯㘲\0郴\ud972");

	[StaticDataListMeta("ShopRandomGoods")]
	public SerializableDataMap<int, IShopRandomGoods> ShopRandomGoodsMap = new SerializableDataMap<int, IShopRandomGoods>("漻䉼");

	[StaticDataListMeta("ShopGoodsBox")]
	public SerializableDataList<IShopGoodsBox> ShopGoodsBoxList = new SerializableDataList<IShopGoodsBox>();

	[StaticDataListMeta("ShopNormalBar")]
	public SerializableDataList<IShopNormalBar> ShopNormalBarItemList = new SerializableDataList<IShopNormalBar>();

	[StaticDataListMeta("ShopNormalBarDebris")]
	public SerializableDataList<IShopNormalBarDebris> ShopNormalBarDebrisList = new SerializableDataList<IShopNormalBarDebris>();

	[StaticDataListMeta("ShopGiftConfig")]
	public SerializableDataMap<int, IShopGiftConfig> ShopGiftConfigMap = new SerializableDataMap<int, IShopGiftConfig>("숞끓炿攟杠+Æ叅");

	[StaticDataListMeta("SingleWaveGiftConfig")]
	public SerializableDataMap<int, ISingleWaveGiftConfig> SingleWaveGiftConfigMap = new SerializableDataMap<int, ISingleWaveGiftConfig>("划擫\ud9ddœ");

	[StaticDataListMeta("ReplaceGiftConfig")]
	public SerializableDataMap<int, IReplaceGiftConfig> ReplaceGiftConfigMap = new SerializableDataMap<int, IReplaceGiftConfig>("숟끕䦩搠偄!*匩");

	[StaticDataListMeta("ShopMultiBuyTypeGift")]
	public SerializableDataList<IShopMultiBuyTypeGift> ShopMultiBuyTypeGiftList = new SerializableDataList<IShopMultiBuyTypeGift>();

	[StaticDataListMeta("CheckShop")]
	public SerializableDataMap<string, ICheckShop> CheckShopMap = new SerializableDataMap<string, ICheckShop>("匭橡ā謥衄");

	[StaticDataListMeta("ShopBuyOnceGifts")]
	public SerializableDataList<IShopBuyOnceGiftVo> ShopBuyOnceGiftList = new SerializableDataList<IShopBuyOnceGiftVo>();

	[StaticDataListMeta("PigBank")]
	public SerializableDataMap<int, IPigBank> PigBankMap = new SerializableDataMap<int, IPigBank>("녢繡㠲\0郴\ud972");

	[StaticDataListMeta("PigBank_ios")]
	public SerializableDataMap<int, IPigBank> PigBankMap_ios = new SerializableDataMap<int, IPigBank>("녢繡㠲\0郴\ud972");

	[StaticDataListMeta("PigBankTheme")]
	public SerializableDataMap<int, IPigBankTheme> PigBankThemeMap = new SerializableDataMap<int, IPigBankTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("ShopDynamicGift")]
	public SerializableDataMap<int, IShopDynamicGift> ShopDynamicGiftMap = new SerializableDataMap<int, IShopDynamicGift>("녧繩✢\0郴\ud972");

	[StaticDataListMeta("GiftDisplayTheme")]
	public SerializableDataMap<int, GiftDisplayTheme> GiftDisplayThemeMap = new SerializableDataMap<int, GiftDisplayTheme>("晴h4끭g갛㻌");

	[StaticDataListMeta("EveryDaySign")]
	public SerializableDataList<ISignInVO> SignInList = new SerializableDataList<ISignInVO>();

	[StaticDataListMeta("PopupsOrder")]
	public SerializableDataList<IPopupsOrderVO> popupsOrderList = new SerializableDataList<IPopupsOrderVO>();

	[StaticDataListMeta("Condition")]
	public SerializableDataMap<int, IConditionVO> ConditionMap = new SerializableDataMap<int, IConditionVO>("숎끕榷漏捝&ª厩뜅\u001f赴");

	[StaticDataListMeta("TaskPassQuestsPool")]
	public SerializableDataList<ITaskPassQuestVO> TaskPassQuestsPool = new SerializableDataList<ITaskPassQuestVO>();

	[StaticDataListMeta("TaskPassLevel")]
	public SerializableDataMap<int, ITaskPassLevelVo> TaskPassLevel = new SerializableDataMap<int, ITaskPassLevelVo>("匨橥ā讕蹬");

	[StaticDataListMeta("AdvertisementPass")]
	public SerializableDataList<IAdvertisementPassVO> advertisementPass = new SerializableDataList<IAdvertisementPassVO>();

	[StaticDataListMeta("AdvertisementPassConstant")]
	public SerializableDataMap<string, IAdvertisementPassConstantVO> advertisementPassConstant = new SerializableDataMap<string, IAdvertisementPassConstantVO>("닢\u00af赴");

	[StaticDataListMeta("DiamondPassLevel")]
	public SerializableDataList<IDiamondPassLevelVO> DiamondPassLevel = new SerializableDataList<IDiamondPassLevelVO>();

	[StaticDataListMeta("LanguageInfo")]
	public SerializableDataList<ILanguageInfo> LanguageInfoList = new SerializableDataList<ILanguageInfo>();

	[StaticDataListMeta("UserEnergyTag")]
	public SerializableDataMap<int, IEnergyTagVO> UserEnergyTags = new SerializableDataMap<int, IEnergyTagVO>("수끔咼愙敓+V单뻻");

	[StaticDataListMeta("UserTagSectionConfig")]
	public SerializableDataList<IUserTagSectionVo> tagSectionConfig = new SerializableDataList<IUserTagSectionVo>();

	[StaticDataListMeta("UserEcpm")]
	public SerializableDataMap<int, IUserEcpm> UserEcpmMap = new SerializableDataMap<int, IUserEcpm>("摵t4끥e判㳅");

	[StaticDataListMeta("UserAdGiftConfig")]
	public SerializableDataList<IAdGiftConfigVo> adGiftConfig = new SerializableDataList<IAdGiftConfigVo>();

	[StaticDataListMeta("OrderHeadPool")]
	public SerializableDataMap<int, IOrderHeadPoolVO> OrderHeadPoolMap = new SerializableDataMap<int, IOrderHeadPoolVO>("숞끟犪感牕'Î反勺䳫\ud9c6Ű");

	[StaticDataListMeta("OrderHeadExclusionPool")]
	public SerializableDataMap<int, IOrderHeadExclusionPoolVO> OrderHeadExclusionPoolMap = new SerializableDataMap<int, IOrderHeadExclusionPoolVO>("녲繵㘶\0郴\ud972");

	[StaticDataListMeta("UserHead")]
	public SerializableDataList<IUserHeadVo> UserHeadList = new SerializableDataList<IUserHeadVo>();

	[StaticDataListMeta("ActivityEnergyDropConfig")]
	public SerializableDataMap<int, IActivityEnergyDropVo> activityEnergyDropList = new SerializableDataMap<int, IActivityEnergyDropVo>("漻䉼");

	[StaticDataListMeta("DiscoPayLevelConfig")]
	public SerializableDataList<IDiscoPayLevelVO> DiscoPayLevelConfig = new SerializableDataList<IDiscoPayLevelVO>();

	[StaticDataListMeta("DiscoSpinRewardCfg")]
	public SerializableDataList<IDiscoPayItemVO> DiscoSpinRewardCfg = new SerializableDataList<IDiscoPayItemVO>();

	[StaticDataListMeta("DiscoSpinPriceCfg")]
	public SerializableDataList<DiscoSpinPriceVO> DiscoSpinPriceCfg = new SerializableDataList<DiscoSpinPriceVO>();

	[StaticDataListMeta("DiscoTheme")]
	public SerializableDataMap<int, IDiscoTheme> DiscoThemeMap = new SerializableDataMap<int, IDiscoTheme>("숃끙璭礄慂;Ö叕༛⊜");

	[StaticDataListMeta("DIYGiftConfig")]
	public SerializableDataList<IDIYGiftVO> DIYGiftList = new SerializableDataList<IDIYGiftVO>();

	[StaticDataListMeta("LinkGiftActivity")]
	public SerializableDataList<ILinkGiftActivityVO> linkGiftActivityList = new SerializableDataList<ILinkGiftActivityVO>();

	[StaticDataListMeta("LinkGift")]
	public SerializableDataList<ILinkGiftVO> linkGiftList = new SerializableDataList<ILinkGiftVO>();

	[StaticDataListMeta("LinkGiftBonusBox")]
	public SerializableDataList<ILinkGiftBonusVO> linkGiftBonusList = new SerializableDataList<ILinkGiftBonusVO>();

	[StaticDataListMeta("LinkGiftGroup")]
	public SerializableDataList<ILinkGiftGroupVO> linkGiftGroupList = new SerializableDataList<ILinkGiftGroupVO>();

	[StaticDataListMeta("TurntableConfig")]
	public SerializableDataMap<int, ITurntableConfig> TurntableConfigMap = new SerializableDataMap<int, ITurntableConfig>("刐拫\ud9ddņ");

	[StaticDataListMeta("TurntableContent")]
	public SerializableDataMap<int, ITurntableContent> TurntableContentMap = new SerializableDataMap<int, ITurntableContent>("숄끏披氅瑀3\u008e厍밅\u001f赴");

	[StaticDataListMeta("BingoTheme")]
	public SerializableDataMap<int, IBingoTheme> BingoThemeMap = new SerializableDataMap<int, IBingoTheme>("숃끙璭礄慂;Ö叕༛⊜");

	[StaticDataListMeta("BadWords")]
	public SerializableDataList<IBadWordsVO> badWordsVOList = new SerializableDataList<IBadWordsVO>();

	[StaticDataListMeta("DailyGift")]
	public SerializableDataList<IDailyGift> DailyGiftList = new SerializableDataList<IDailyGift>();

	[StaticDataListMeta("WeekPassReward")]
	public SerializableDataList<IWeekPassReward> WeekPassRewardList = new SerializableDataList<IWeekPassReward>();

	[StaticDataListMeta("LevelAnalyticGoods")]
	public SerializableDataList<ILevelAnalyticGoodsVo> analyticGoods = new SerializableDataList<ILevelAnalyticGoodsVo>();

	[StaticDataListMeta("HelpShiftLevel")]
	public SerializableDataList<IHelpShiftParam_vipLevel> helpShiftLevelList = new SerializableDataList<IHelpShiftParam_vipLevel>();

	[StaticDataListMeta("DailyChallengeTaskTag")]
	public SerializableDataList<IDailyChallengeTaskTagVo> dailyChallengeTaskTag = new SerializableDataList<IDailyChallengeTaskTagVo>();

	[StaticDataListMeta("ABTestCampaignConfig")]
	public SerializableDataList<IABTestCampaign> ABTestCampaignConfigList = new SerializableDataList<IABTestCampaign>();

	[StaticDataListMeta("DailyChallenge_Theme")]
	public SerializableDataList<IDailyChallengeThemeVo> dailyChallengeTheme = new SerializableDataList<IDailyChallengeThemeVo>();

	[StaticDataListMeta("DailyChallengeTaskPool")]
	public SerializableDataList<IDailyChallengeTaskVo> dailyChallengeTask = new SerializableDataList<IDailyChallengeTaskVo>();

	[StaticDataListMeta("DailyChallengeCycleTask")]
	public SerializableDataMap<int, IDailyChallengeCycleTaskVo> dailyChallengeCycleTask = new SerializableDataMap<int, IDailyChallengeCycleTaskVo>("漻䉼");

	[StaticDataListMeta("DailyChallengeRemoveGoods")]
	public SerializableDataList<IDailyChallengeRemoveVo> dailyChallengeRemoveGoods = new SerializableDataList<IDailyChallengeRemoveVo>();

	[StaticDataListMeta("DCTaskReward_Card")]
	public SerializableDataList<IDCTaskRewardReplaceVo> dcTaskRewardReplaces = new SerializableDataList<IDCTaskRewardReplaceVo>();

	[StaticDataListMeta("TaskThemePassQuestsPool")]
	public SerializableDataList<ITaskThemePassQuestVO> TaskThemePassQuestsPool = new SerializableDataList<ITaskThemePassQuestVO>();

	[StaticDataListMeta("TaskThemePassLevel")]
	public SerializableDataMap<int, ITaskThemePassLevelVo> TaskThemePassLevel = new SerializableDataMap<int, ITaskThemePassLevelVo>("匨橥ā讕蹬");

	[StaticDataListMeta("TaskThemeABGroup")]
	public SerializableDataMap<string, ITaskThemeABGroupVO> TaskThemeABGroup = new SerializableDataMap<string, ITaskThemeABGroupVO>("匣橲ā试靰");

	[StaticDataListMeta("TaskThemePassActivity")]
	public SerializableDataMap<int, ITaskThemePassConfigVO> TaskThemePassActivityMap = new SerializableDataMap<int, ITaskThemePassConfigVO>("숃끙璭礄慂;Ö叕༛⊜");

	[StaticDataListMeta("GoodsCompensate")]
	public SerializableDataList<IGoodsCompensateVo> goodsCompensateVos = new SerializableDataList<IGoodsCompensateVo>();

	[StaticDataListMeta("OrderReissueGoods")]
	public SerializableDataList<IReissueGoodsVo> orderReissueGoodsVos = new SerializableDataList<IReissueGoodsVo>();

	[StaticDataListMeta("GeneratorReissueStandard")]
	public SerializableDataList<IGeneratorReissueStandardVo> generatorReissueStandardVos = new SerializableDataList<IGeneratorReissueStandardVo>();

	[StaticDataListMeta("DynamicDiscountTicket")]
	public SerializableDataList<IDynamicDiscountTicket> dynamicDiscountTicket = new SerializableDataList<IDynamicDiscountTicket>();

	[StaticDataListMeta("TreasureHuntingTheme")]
	public SerializableDataMap<int, ITreasureHuntingTheme> treasureHuntingThemeMap = new SerializableDataMap<int, ITreasureHuntingTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("TreasureHuntingPurchaseConfig")]
	public SerializableDataList<ITreasureHuntingPurchaseConfig> treasureHuntingPurchaseConfig = new SerializableDataList<ITreasureHuntingPurchaseConfig>();

	[StaticDataListMeta("NewTreasureHuntingTheme")]
	public SerializableDataMap<int, INewTreasureHuntingTheme> newTreasureHuntingThemeMap = new SerializableDataMap<int, INewTreasureHuntingTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("NewTreasureHuntingPurchaseConfig")]
	public SerializableDataList<INewTreasureHuntingPurchaseConfig> newTreasureHuntingPurchaseConfig = new SerializableDataList<INewTreasureHuntingPurchaseConfig>();

	[StaticDataListMeta("NewTreasureHuntingThemeV2")]
	public SerializableDataMap<int, INewTreasureHuntingTheme> newTreasureHuntingThemeMapV2 = new SerializableDataMap<int, INewTreasureHuntingTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("UserInitAdjustKey")]
	public SerializableDataMap<int, IAdjustKey> adjustKeys = new SerializableDataMap<int, IAdjustKey>("漻䉼");

	[StaticDataListMeta("UserInitCountryTag")]
	public SerializableDataMap<int, ICountryTag> countryTag = new SerializableDataMap<int, ICountryTag>("漻䉼");

	[StaticDataListMeta("UserInitTag")]
	public SerializableDataList<IUserInitTag> userInitTag = new SerializableDataList<IUserInitTag>();

	[StaticDataListMeta("UserInitTagSM")]
	public SerializableDataList<IUserInitTagSM> userInitTagSM = new SerializableDataList<IUserInitTagSM>();

	[StaticDataListMeta("UserInitTagSM_NewCondition")]
	public SerializableDataList<IUserInitTagSM_NewCondition> userInitTagSM_NewCondition = new SerializableDataList<IUserInitTagSM_NewCondition>();

	[StaticDataListMeta("ABTestConfigKey1")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey1Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey2")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey2Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey3")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey3Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey4")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey4Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey5")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey5Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey6")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey6Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey7")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey7Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey8")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey8Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey9")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey9Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey10")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey10Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey11")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey11Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey12")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey12Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey13")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey13Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey14")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey14Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey15")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey15Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey16")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey16Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey17")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey17Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey18")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey18Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey19")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey19Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey20")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey20Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey21")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey21Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey22")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey22Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey24")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey24Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey23")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey23Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey25")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey25Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey27")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey27Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey38")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey38Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey29")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey29Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey30")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey30Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey31")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey31Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey32")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey32Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey33")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey33Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey35")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey35Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey36")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey36Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey37")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey37Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey39")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey39Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey40")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey40Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey41")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey41Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey42")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey42Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey43")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey43Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey44")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey44Map = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ABTestConfigKey1AddBase")]
	public SerializableDataMap<string, IABTestConfigKey1> abTestConfigKey1AddBaseMap = new SerializableDataMap<string, IABTestConfigKey1>("닢\u00af赴");

	[StaticDataListMeta("ThreeChooseOneGiftMap")]
	public SerializableDataMap<int, IThreeChooseOneGiftMap> threeChooseOneGiftMap = new SerializableDataMap<int, IThreeChooseOneGiftMap>("닢\u00af赴");

	[StaticDataListMeta("FestivalGiftConfig")]
	public SerializableDataMap<string, IFestivalGiftConfig> festivalGiftConfig = new SerializableDataMap<string, IFestivalGiftConfig>("닢\u00af赴");

	[StaticDataListMeta("BagGiftABGroup")]
	public SerializableDataList<IBagGiftABGroupVO> bagGiftABGroupVO = new SerializableDataList<IBagGiftABGroupVO>();

	[StaticDataListMeta("BagGiftABGroup_BagABTest0315_B")]
	public SerializableDataList<IBagGiftABGroupVO> bagGiftABGroupVO_b = new SerializableDataList<IBagGiftABGroupVO>();

	[StaticDataListMeta("BagGiftABGroup_BagABTest0315_C")]
	public SerializableDataList<IBagGiftABGroupVO> bagGiftABGroupVO_c = new SerializableDataList<IBagGiftABGroupVO>();

	[StaticDataListMeta("BubbleDiscount")]
	public SerializableDataList<IBubbleDiscount> bubbleDiscount = new SerializableDataList<IBubbleDiscount>();

	[StaticDataListMeta("SurpriseGiftConfig")]
	public SerializableDataList<ISurpriseGiftConfigVo> surpriseGiftConfigVos = new SerializableDataList<ISurpriseGiftConfigVo>();

	[StaticDataListMeta("SurpriseGiftRewardConfig")]
	public SerializableDataMap<int, ISurpriseGiftRewardVo> surpriseGiftRewardMap = new SerializableDataMap<int, ISurpriseGiftRewardVo>("漻䉼");

	[StaticDataListMeta("OrderSubmitIndex")]
	public SerializableDataMap<int, IOrderSubmitIndexVo> orderSubmitIndexMap = new SerializableDataMap<int, IOrderSubmitIndexVo>("匭橮ā讕鱸");

	[StaticDataListMeta("CardCollectionTheme")]
	public SerializableDataMap<int, ICardCollectionTheme> cardCollectionThemeMap = new SerializableDataMap<int, ICardCollectionTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("CardPackCovertGoods")]
	public SerializableDataMap<int, ICardPackCovertGoods> cardPackCovertGoodsMap = new SerializableDataMap<int, ICardPackCovertGoods>("숎끛掫欏捤3\u0092厑༛≼");

	[StaticDataListMeta("CardFreePackBaseConfig")]
	public SerializableDataList<ICardFreePackBaseConfig> cardFreePackBaseConfigList = new SerializableDataList<ICardFreePackBaseConfig>();

	[StaticDataListMeta("ShopHighValueGoodsSellConfig")]
	public SerializableDataMap<int, IHighValueGoodsVO> highValueGoodsConfigMap = new SerializableDataMap<int, IHighValueGoodsVO>("漻䉼");

	[StaticDataListMeta("IndependentTheme")]
	public SerializableDataMap<int, IIndependentMergeTheme> IndependentMergeThemes = new SerializableDataMap<int, IIndependentMergeTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("ShopHighValueGoodsSellConfig")]
	public SerializableDataMap<int, ChefLike.ICheckLikeThemeVO> chefLikeThemeMap = new SerializableDataMap<int, ChefLike.ICheckLikeThemeVO>("漻䉼");

	[StaticDataListMeta("BoostPackConfig")]
	public SerializableDataList<IBoostPackConfig> boostPackConfigList = new SerializableDataList<IBoostPackConfig>();

	[StaticDataListMeta("MiniGameStage")]
	public SerializableDataMap<int, IMiniGameStage> miniGameStageMap = new SerializableDataMap<int, IMiniGameStage>("北橴ā讝饥");

	[StaticDataListMeta("MiniGameOrder")]
	public SerializableDataList<IMiniGameOrder> miniGameOrderList = new SerializableDataList<IMiniGameOrder>();

	[StaticDataListMeta("MiniGameCombo")]
	public SerializableDataList<IMiniGameCombo> miniGameComboList = new SerializableDataList<IMiniGameCombo>();

	[StaticDataListMeta("MiniGameGoods")]
	public SerializableDataMap<int, IMiniGameGoodsVo> miniGameGoodsMap = new SerializableDataMap<int, IMiniGameGoodsVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("MiniGameKitchenWare")]
	public SerializableDataMap<int, IMiniGameKitchenWareVo> miniGameKitchenWareMap = new SerializableDataMap<int, IMiniGameKitchenWareVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("MiniGameCooking")]
	public SerializableDataMap<int, IMiniGameCookingVo> miniGameCookingMap = new SerializableDataMap<int, IMiniGameCookingVo>("瑧o4끤u휛䳬");

	[StaticDataListMeta("SceneActivityTheme")]
	public SerializableDataMap<int, ISceneActivityTheme> sceneActivityThemeMap = new SerializableDataMap<int, ISceneActivityTheme>("숃끙璭礄慂;Ö叕༛⊜");

	[StaticDataListMeta("ChessboardBackgroundTheme")]
	public SerializableDataMap<int, IChessboardBackgroundTheme> chessboardBackgroundThemeMap = new SerializableDataMap<int, IChessboardBackgroundTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("RaceWinnerTheme")]
	public SerializableDataMap<int, IRaceWinnerTheme> raceWinnerThemeMap = new SerializableDataMap<int, IRaceWinnerTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("RaceWinnerOrder")]
	public SerializableDataMap<int, IRaceWinnerOrder> raceWinnerOrder = new SerializableDataMap<int, IRaceWinnerOrder>("獯r4끥tⰛ䯬");

	[StaticDataListMeta("RaceWinnerGoods")]
	public SerializableDataMap<int, IRaceWinnerGoods> raceWinnerGoods = new SerializableDataMap<int, IRaceWinnerGoods>("瑧o4끤u휛䳬");

	[StaticDataListMeta("RaceWinnerOrderConfig")]
	public SerializableDataList<IRaceWinnerOrderConfig> raceWinnerOrderConfig = new SerializableDataList<IRaceWinnerOrderConfig>();

	[StaticDataListMeta("RaceWinnerRoundConfig")]
	public SerializableDataList<IRaceWinnerRoundConfig> raceWinnerRoundConfig = new SerializableDataList<IRaceWinnerRoundConfig>();

	[StaticDataListMeta("ActivityMutexConfig")]
	public SerializableDataList<IActivityMutexConfig> activityMutexConfig = new SerializableDataList<IActivityMutexConfig>();

	[StaticDataListMeta("LimitTimeOrderActivityTheme")]
	public SerializableDataMap<int, ILimitTimeOrderTheme> limitTimeOrderTheme = new SerializableDataMap<int, ILimitTimeOrderTheme>("숃끙璭礄慂;Ö叕༛⊜");

	[StaticDataListMeta("LimitTimeRecycleOrderConfig")]
	public SerializableDataList<ILimitTimeRecycleOrderConfig> limitTimeRecycleOrderConfig = new SerializableDataList<ILimitTimeRecycleOrderConfig>();

	[StaticDataListMeta("LimitTimeRecycleOrderExtraRewardConfig")]
	public SerializableDataList<ILimitTimeRecycleOrderExtraRewardConfig> limitTimeRecycleOrderExtraRewardConfig = new SerializableDataList<ILimitTimeRecycleOrderExtraRewardConfig>();

	[StaticDataListMeta("PlayerStateConfig")]
	public SerializableDataList<IPlayerStateConfig> playerStateConfig = new SerializableDataList<IPlayerStateConfig>();

	[StaticDataListMeta("PlayerStatePushGiftConfig")]
	public SerializableDataList<IPlayerStatePushGiftConfig> playerStatePushGiftConfig = new SerializableDataList<IPlayerStatePushGiftConfig>();

	[StaticDataListMeta("PlayerStatePushGiftRuleConfig")]
	public SerializableDataList<IPlayerStatePushGiftRuleConfig> playerStatePushGiftRuleConfig = new SerializableDataList<IPlayerStatePushGiftRuleConfig>();

	[StaticDataListMeta("PlayerStatePushGiftTriggerConfig")]
	public SerializableDataList<IPlayerStatePushGiftTriggerConfig> playerStatePushGiftTriggerConfig = new SerializableDataList<IPlayerStatePushGiftTriggerConfig>();

	[StaticDataListMeta("ConditionJudgeType")]
	public SerializableDataMap<int, IConditionJudgeType> conditionJudgeTypeMap = new SerializableDataMap<int, IConditionJudgeType>("晪u4끧gⰛ㻌");

	[StaticDataListMeta("RandomGoodsCondition")]
	public SerializableDataList<IRandomGoodsCondition> randomGoodsConditionList = new SerializableDataList<IRandomGoodsCondition>();

	[StaticDataListMeta("RandomGoodsGroup")]
	public SerializableDataList<IRandomGoodsGroup> randomGoodsGroupList = new SerializableDataList<IRandomGoodsGroup>();

	[StaticDataListMeta("Pack3To1GiftConfig")]
	public SerializableDataMap<string, IPack3To1GiftConfig> pack3To1GiftConfig = new SerializableDataMap<string, IPack3To1GiftConfig>("닢\u00af赴");

	[StaticDataListMeta("Pack3To1GiftControlConfig")]
	public SerializableDataMap<string, IPack3To1GiftConfig> pack3To1GiftControlConfig = new SerializableDataMap<string, IPack3To1GiftConfig>("닢\u00af赴");

	[StaticDataListMeta("Pack3To1GiftTheme")]
	public SerializableDataList<IPack3To1GiftTheme> pack3To1GiftThemeList = new SerializableDataList<IPack3To1GiftTheme>();

	[StaticDataListMeta("Pack3To1GiftScheme")]
	public SerializableDataList<IPack3To1GiftScheme> pack3To1GiftSchemeList = new SerializableDataList<IPack3To1GiftScheme>();

	[StaticDataListMeta("CardTaskChainTheme")]
	public SerializableDataMap<int, CardTaskChain.ICardTaskChainThemeVO> cardTaskChainthemeMap = new SerializableDataMap<int, CardTaskChain.ICardTaskChainThemeVO>("晴h4끭g갛㻌");

	[StaticDataListMeta("DynamicOrderABTestCondition")]
	public SerializableDataMap<int, IDynamicOrderABTestCondition> dynamicOrderABTestConditionMap = new SerializableDataMap<int, IDynamicOrderABTestCondition>("숎끕榷漏捝&ª厩뜅\u001f赴");

	[StaticDataListMeta("BuildTaskDynamicPrice")]
	public SerializableDataMap<int, IBuildTaskDynamicPrice> buildTaskDynamicPriceMap = new SerializableDataMap<int, IBuildTaskDynamicPrice>("숞끟犪感牕'Î反勺䳫\ud9c6Ű");

	[StaticDataListMeta("LuckyHuntTheme")]
	public SerializableDataMap<int, ILuckyHuntTheme> luckyHuntThemeMap = new SerializableDataMap<int, ILuckyHuntTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("DailyGiftV2ThemeConfig")]
	public SerializableDataMap<string, DailyGiftV2.IDailyGiftV2ThemeVO> dailyGiftV2themeMap = new SerializableDataMap<string, DailyGiftV2.IDailyGiftV2ThemeVO>("닢\u00af赴");

	[StaticDataListMeta("DailyGiftV2GiftConfig")]
	public SerializableDataList<DailyGiftV2.IDailyGiftV2GiftVO> dailyGiftV2giftConfig = new SerializableDataList<DailyGiftV2.IDailyGiftV2GiftVO>();

	[StaticDataListMeta("TreasureCraftingTheme")]
	public SerializableDataMap<int, ITreasureCraftingTheme> TreasureCraftingThemes = new SerializableDataMap<int, ITreasureCraftingTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("MonchiMergeTheme")]
	public SerializableDataMap<int, IIndependentFarmTheme> MonchiMergeThemes = new SerializableDataMap<int, IIndependentFarmTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("IndependentStageTheme")]
	public SerializableDataMap<int, IIndependentStageMergeTheme> StageIndependentMergeThemes = new SerializableDataMap<int, IIndependentStageMergeTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("StageBasicTheme")]
	public SerializableDataMap<int, IIndependentStageBasicTheme> StageIndependentBasicThemes = new SerializableDataMap<int, IIndependentStageBasicTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("IndStageTheme")]
	public SerializableDataMap<int, IIndStageTheme> IndStageThemes = new SerializableDataMap<int, IIndStageTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("FireHelperTheme")]
	public SerializableDataMap<int, IFireHelperThemeVO> FireHelperThemeMap = new SerializableDataMap<int, IFireHelperThemeVO>("匐橨ā讵鵥");

	[StaticDataListMeta("OrderReturnBackTheme")]
	public SerializableDataMap<int, IOrderReturnBackThemeVO> OrderReturnBackThemeMap = new SerializableDataMap<int, IOrderReturnBackThemeVO>("匐橨ā讵鵥");

	[StaticDataListMeta("OrderReturnBackTokenCoe")]
	public SerializableDataList<IOrderReturnBackTokenCoeVO> OrderReturnBackTokenCoes = new SerializableDataList<IOrderReturnBackTokenCoeVO>();

	[StaticDataListMeta("AirPlaneTheme")]
	public SerializableDataMap<int, AirPlaneTheme> AirPlaneThemeMap = new SerializableDataMap<int, AirPlaneTheme>("匐橨ā讵鵥");

	[StaticDataListMeta("FiveRaceTheme")]
	public SerializableDataMap<int, FiveRaceTheme> FiveRaceThemeMap = new SerializableDataMap<int, FiveRaceTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("FiveRaceTheme_day")]
	public SerializableDataMap<int, FiveRaceTheme> FiveRaceThemeDayMap = new SerializableDataMap<int, FiveRaceTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("BagItemShowList")]
	public SerializableDataMap<int, BagItemShowVo> BagItemShowMap = new SerializableDataMap<int, BagItemShowVo>("漻䉼");

	[StaticDataListMeta("PlayerLevelGiftConfig")]
	public SerializableDataList<IPlayerLevelGiftConfig> playerLevelGiftConfigList = new SerializableDataList<IPlayerLevelGiftConfig>();

	[StaticDataListMeta("FeverModeConfig")]
	public SerializableDataList<IPlayerLevelGiftConfig> feverModeConfigMap = new SerializableDataList<IPlayerLevelGiftConfig>();

	[StaticDataListMeta("FeverModeV2Config")]
	public SerializableDataList<IPlayerLevelGiftConfig> feverModeV2ConfigMap = new SerializableDataList<IPlayerLevelGiftConfig>();

	[StaticDataListMeta("FeverModeWaveConfig")]
	public SerializableDataList<IFeverModeWaveConfig> feverModeWaveConfigMap = new SerializableDataList<IFeverModeWaveConfig>();

	[StaticDataListMeta("FeverModeStageWaveConfig")]
	public SerializableDataList<IFeverModeWaveConfig> feverModeStageWaveConfigMap = new SerializableDataList<IFeverModeWaveConfig>();

	[StaticDataListMeta("FeverModeSkinConfig")]
	public SerializableDataMap<int, IFeverModeSkinConfig> feverModeSkinConfigMap = new SerializableDataMap<int, IFeverModeSkinConfig>("녳繫㴼\0途\ud992");

	[StaticDataListMeta("TimeLimited8BetConfig")]
	public SerializableDataList<ITimeLimited8MultConfig> timeLimited8BetConfig = new SerializableDataList<ITimeLimited8MultConfig>();

	[StaticDataListMeta("GuideList")]
	public SerializableDataList<IGuideVo> mGuideList = new SerializableDataList<IGuideVo>();

	[StaticDataListMeta("GuideWeakList")]
	public SerializableDataList<IGuideWeakVO> mGuideWeakList = new SerializableDataList<IGuideWeakVO>();

	[StaticDataListMeta("DynamicOrderRecycleGoods")]
	public SerializableDataMap<int, IDynamicOrderRecycleGoods> recycleOrderPool = new SerializableDataMap<int, IDynamicOrderRecycleGoods>("瑧o4끤u휛䳬");

	[StaticDataListMeta("AdCompensationConfig")]
	public SerializableDataList<IAdCompensationConfigVO> adCompensationConfigList = new SerializableDataList<IAdCompensationConfigVO>();

	[StaticDataListMeta("VersionUpdateConfig")]
	public SerializableDataMap<string, IVersionUpdateConfigVo> mVersionUpdateConfig = new SerializableDataMap<string, IVersionUpdateConfigVo>("닢\u00af赴");

	[StaticDataListMeta("PuzzleThemeConfig")]
	public SerializableDataMap<int, IPuzzleTheme> PuzzleThemes = new SerializableDataMap<int, IPuzzleTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("TaskPassV2Base")]
	public SerializableDataList<IBattlePassBaseConfigVO> TaskPassV2BaseConfig = new SerializableDataList<IBattlePassBaseConfigVO>();

	[StaticDataListMeta("TaskPassV2Task")]
	public SerializableDataMap<int, IBattlePassTaskConfigVO> TaskPassV2TaskConfig = new SerializableDataMap<int, IBattlePassTaskConfigVO>("숤끛抠攥摁?\u008e厍뻮");

	[StaticDataListMeta("TaskPassV2Level")]
	public SerializableDataMap<int, IBattlePassLevelConfigVO> TaskPassV2LevelConfig = new SerializableDataMap<int, IBattlePassLevelConfigVO>("匨橥ā讕蹬");

	[StaticDataListMeta("TaskPassV2TaskPool")]
	public SerializableDataMap<int, ITaskPoolConfigVO> TaskPassV2TaskPoolConfig = new SerializableDataMap<int, ITaskPoolConfigVO>("녔繡㠈\0郴\ud972");

	[StaticDataListMeta("TaskThemePassV2Base")]
	public SerializableDataList<IBattlePassBaseConfigVO> TaskThemePassV2BaseConfig = new SerializableDataList<IBattlePassBaseConfigVO>();

	[StaticDataListMeta("TaskThemePassV2Task")]
	public SerializableDataMap<int, IBattlePassTaskConfigVO> TaskThemePassV2TaskConfig = new SerializableDataMap<int, IBattlePassTaskConfigVO>("숤끛抠攥摁?\u008e厍뻮");

	[StaticDataListMeta("TaskThemePassV2Level")]
	public SerializableDataMap<int, IBattlePassLevelConfigVO> TaskThemePassV2LevelConfig = new SerializableDataMap<int, IBattlePassLevelConfigVO>("匨橥ā讕蹬");

	[StaticDataListMeta("TaskThemePassV2TaskPool")]
	public SerializableDataMap<int, ITaskPoolConfigVO> TaskThemePassV2TaskPoolConfig = new SerializableDataMap<int, ITaskPoolConfigVO>("녔繡㠈\0郴\ud972");

	[StaticDataListMeta("TaskThemePassV2Close")]
	public SerializableDataList<ITaskThemePassCloseVO> TaskThemePassV2CloseConfig = new SerializableDataList<ITaskThemePassCloseVO>();

	[StaticDataListMeta("TimeLimited2BetConfig")]
	public SerializableDataList<ITimeLimited2BetConfig> timeLimited2BetConfig = new SerializableDataList<ITimeLimited2BetConfig>();

	[StaticDataListMeta("NotificationGPPay")]
	public SerializableDataList<INotificationGPPayVO> NotificationGPPayConfig = new SerializableDataList<INotificationGPPayVO>();

	[StaticDataListMeta("SurpriseBoxTheme")]
	public SerializableDataMap<int, ISurprisedBoxThemeConfigVo> surprisedBoxTheme = new SerializableDataMap<int, ISurprisedBoxThemeConfigVo>("匐橨ā讵鵥");

	[StaticDataListMeta("AdjustUAJumpToken")]
	public SerializableDataMap<string, IAdjustUAJumpToken> AdjustUAJumpTokenMap = new SerializableDataMap<string, IAdjustUAJumpToken>("숄끌憼洅敀\u001c\u008a厉뻹");

	[StaticDataListMeta("Independent_Basic_Theme")]
	public SerializableDataMap<int, IIndependentMergeTheme> independentBasicTheme = new SerializableDataMap<int, IIndependentMergeTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("TaskPassSkinBase")]
	public SerializableDataMap<int, TaskPassSkinBase> TaskPassSkinBase = new SerializableDataMap<int, TaskPassSkinBase>("晴h4끭g갛㻌");

	[StaticDataListMeta("CardCollectPayConfig")]
	public SerializableDataList<ICardCollectPayConfig> CardCollectPayConfig = new SerializableDataList<ICardCollectPayConfig>();

	[StaticDataListMeta("TaskFinishTipOrder")]
	public SerializableDataMap<int, ITaskFinishTipOrder> TaskFinishTipOrderMap = new SerializableDataMap<int, ITaskFinishTipOrder>("숃끙璭礄慂;Ö叕녔繩㘴\0郴\ud972");

	[StaticDataListMeta("Independent_Mining_Theme")]
	public SerializableDataMap<int, ITreasureCraftingTheme> independentMiningTheme = new SerializableDataMap<int, ITreasureCraftingTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("Independent_Farm_Theme")]
	public SerializableDataMap<int, IIndependentFarmTheme> independentFarmTheme = new SerializableDataMap<int, IIndependentFarmTheme>("晴h4끭g갛㻬");

	[StaticDataListMeta("CardCollectionDoubleGiftConfig")]
	public SerializableDataList<IPlayerLevelGiftConfig> cardCollectionDoubleGiftConfig = new SerializableDataList<IPlayerLevelGiftConfig>();

	[StaticDataListMeta("DynamicGiftUseNewReward")]
	public SerializableDataList<DynamicGiftUseNewReward> DynamicGiftUseNewRewardConfig = new SerializableDataList<DynamicGiftUseNewReward>();

	[StaticDataListMeta("CommonDefaultIconConfig")]
	public SerializableDataList<ICommonDefaultIconVO> commonDefaultIconConfig = new SerializableDataList<ICommonDefaultIconVO>();

	public UserConfigModel userConfigModel = new UserConfigModel();

	private bool isServerConfigUpdate;

	private StaticDataManager()
	{
	}

	public override void LoadAllStaticData(bool dispose = true, bool clean = false)
	{
		base.LoadAllStaticData(dispose);
		InitConfigConstant();
	}

	public void SyncLoadAllStaticData(bool dispose = true)
	{
		base.LoadAllStaticData(dispose, clean: true);
	}

	private bool conditionCompare(object data, List<ReplaceDataVO> cList)
	{
		for (int i = 0; i < cList.Count; i++)
		{
			object fieldByReflect = data.GetFieldByReflect(cList[i].key);
			if (fieldByReflect == null)
			{
				return false;
			}
			if (fieldByReflect.ToString() != cList[i].value)
			{
				return false;
			}
		}
		return true;
	}

	private object stringToType(Type type, string value)
	{
		object result = null;
		if (value.IsNullOrEmpty())
		{
			return result;
		}
		if (type == typeof(string))
		{
			result = value;
		}
		else if (type == typeof(int))
		{
			int result2 = 0;
			if (int.TryParse(value, out result2))
			{
				result = result2;
			}
		}
		else if (type == typeof(long))
		{
			long result3 = 0L;
			if (long.TryParse(value, out result3))
			{
				result = result3;
			}
		}
		else if (type == typeof(float))
		{
			float result4 = 0f;
			if (float.TryParse(value, out result4))
			{
				result = result4;
			}
		}
		else if (type == typeof(bool))
		{
			result = Convert.ToBoolean(value);
		}
		return result;
	}

	private bool replaceData(object data, IReplaceConfig replace, bool ignoreDevice)
	{
		//IL_0025: Unknown result type (might be due to invalid IL or missing references)
		//IL_002b: Invalid comparison between Unknown and I4
		if (data == null)
		{
			return false;
		}
		if (replace == null)
		{
			return false;
		}
		List<ReplaceDataVO> cList = replace.ConditionList();
		if (!conditionCompare(data, cList))
		{
			return false;
		}
		List<ReplaceDataVO> list = replace.AndroidValueList(ignoreDevice);
		if ((int)Application.platform == 8)
		{
			list = replace.IOSValueList(ignoreDevice);
		}
		for (int i = 0; i < list.Count; i++)
		{
			FieldInfo field = data.GetType().GetField(list[i].key);
			if (field != null)
			{
				object obj = stringToType(field.FieldType, list[i].value);
				if (obj != null)
				{
					field.SetValue(data, obj);
				}
			}
		}
		return true;
	}

	public void ReplaceConfigData()
	{
		if (!ReplaceConfigHelper.IsAdLevelReloadType && ObjectManager.GetInstance().IsInit)
		{
			ReplaceConfigDataIgnoreADLevel();
		}
	}

	public void ReplaceConfigDataIgnoreADLevel(bool ignoreDevice = false)
	{
		int tag = ObjectManager.GetInstance().userTagModel.GetUserIapAbilityTag();
		if (ObjectManager.GetInstance().userDataModel.UserNonAds)
		{
			tag = -1;
		}
		List<IReplaceConfig> replaceListByTag = GetReplaceListByTag(tag);
		replaceListByTag = GetReplaceListByPlayDay(replaceListByTag);
		ReplaceDataByIReplaceList(replaceListByTag, ignoreDevice);
	}

	public void ReplaceDataByIReplaceList(List<IReplaceConfig> replaceList, bool ignoreDevice)
	{
		//IL_006f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0075: Invalid comparison between Unknown and I4
		if (replaceList == null || replaceList.Count <= 0)
		{
			return;
		}
		bool flag = false;
		bool flag2 = false;
		bool flag3 = false;
		for (int i = 0; i < replaceList.Count; i++)
		{
			IReplaceConfig replaceConfig = replaceList[i];
			if (replaceConfig.tableName == "숌끕䎷漍䍝5\u0012匑녮孳㈆\0逤\ud97f")
			{
				List<ReplaceDataVO> list = replaceConfig.ConditionList();
				if (list != null && list.Count > 0)
				{
					string value = list[0].value;
					List<ReplaceDataVO> list2 = replaceConfig.AndroidValueList(ignoreDevice);
					if ((int)Application.platform == 8)
					{
						list2 = replaceConfig.IOSValueList(ignoreDevice);
					}
					if (list2 != null && list2.Count > 0)
					{
						userConfigModel.replaceConfig[value] = list2[0].value;
						flag3 = true;
					}
				}
			}
			else if (replaceConfig.tableName == "숚끒状洛卺=Î反匥橬ā讅멲")
			{
				List<IShopNormalBar> list3 = ShopNormalBarItemList.list;
				for (int j = 0; j < list3.Count; j++)
				{
					if (replaceData(list3[j], replaceConfig, ignoreDevice))
					{
						flag = true;
						break;
					}
				}
			}
			else if (replaceConfig.tableName == "숚끒溶昛卷=¾厽漻䉿")
			{
				List<IShopConfigVO> list4 = ShopConfigMap.list;
				for (int k = 0; k < list4.Count && !replaceData(list4[k], replaceConfig, ignoreDevice); k++)
				{
				}
			}
			else if (replaceConfig.tableName == "숚끒暶琛即;\u009e厝녃幯㔲\0逗\ud975")
			{
				List<IShopGiftConfig> list5 = ShopGiftConfigMap.list;
				for (int l = 0; l < list5.Count && !replaceData(list5[l], replaceConfig, ignoreDevice); l++)
				{
				}
			}
			else if (replaceConfig.tableName == "숎끕榷漏䍝&ª厩뻲")
			{
				List<IConditionVO> list6 = ConditionMap.list;
				for (int m = 0; m < list6.Count && !replaceData(list6[m], replaceConfig, ignoreDevice); m++)
				{
				}
			}
			else if (replaceConfig.tableName == "숄끏披氅呀3\u008e厍来C4끮h윻㿏")
			{
				List<ITurntableConfig> list7 = TurntableConfigMap.list;
				for (int n = 0; n < list7.Count && !replaceData(list7[n], replaceConfig, ignoreDevice); n++)
				{
				}
			}
			else if (replaceConfig.tableName == "숟끕侩爠偄!B十뷗\u00af赴")
			{
				List<IPopupsOrderVO> list8 = popupsOrderList.list;
				for (int num = 0; num < list8.Count && !replaceData(list8[num], replaceConfig, ignoreDevice); num++)
				{
				}
			}
			else
			{
				if (!(replaceConfig.tableName == "숚끒溶愛印+¾厽橭i4끇k弶䋜"))
				{
					continue;
				}
				List<IShopDynamicGift> list9 = ShopDynamicGiftMap.list;
				for (int num2 = 0; num2 < list9.Count; num2++)
				{
					if (replaceData(list9[num2], replaceConfig, ignoreDevice))
					{
						flag2 = true;
						break;
					}
				}
			}
		}
		if (flag)
		{
			ObjectManager.GetInstance().shopDataModel.InitConfig();
		}
		if (flag3)
		{
			ObjectManager.GetInstance().adPassModel.InitAdMode();
			ObjectManager.GetInstance().link2FacebookModel.InitCondition();
		}
		if (flag2)
		{
			MonoSingleton<DynamicRewardGiftManager>.Instance.ClearDynamicGiftDic();
			MonoSingleton<DynamicRewardGiftManager>.Instance.InitDynamicGiftDic();
		}
	}

	private List<IReplaceConfig> GetReplaceListByTag(int tag)
	{
		List<IReplaceConfig> list = new List<IReplaceConfig>();
		for (int i = 0; i < configReplaceList.list.Count; i++)
		{
			if (configReplaceList.list[i].iapTag == tag)
			{
				list.Add(configReplaceList.list[i]);
			}
		}
		return list;
	}

	private List<IReplaceConfig> GetReplaceListByPlayDay(List<IReplaceConfig> replaceList_singleTag)
	{
		List<IReplaceConfig> list = new List<IReplaceConfig>();
		if (replaceList_singleTag == null)
		{
			return list;
		}
		Dictionary<string, List<IReplaceConfig>> dictionary = new Dictionary<string, List<IReplaceConfig>>();
		string text = "";
		foreach (IReplaceConfig item in replaceList_singleTag)
		{
			text = item.tableName + "뻃" + item.condition;
			if (!dictionary.ContainsKey(text))
			{
				dictionary.Add(text, new List<IReplaceConfig>());
			}
			dictionary[text].Add(item);
		}
		bool isForceSpendVersion = ObjectManager.GetInstance().userTagModel.IsForceSpendVersion;
		int _playDay = (int)ObjectManager.GetInstance().userDataModel.PlayDay;
		IReplaceConfig replaceConfig = null;
		foreach (KeyValuePair<string, List<IReplaceConfig>> item2 in dictionary)
		{
			replaceConfig = null;
			if (isForceSpendVersion)
			{
				replaceConfig = item2.Value.Find((IReplaceConfig __config) => Enumerable.Contains(__config.playDay, _playDay));
			}
			if (replaceConfig == null)
			{
				replaceConfig = item2.Value.Find((IReplaceConfig __config) => Enumerable.Contains(__config.playDay, -1));
			}
			if (replaceConfig != null)
			{
				list.Add(replaceConfig);
			}
		}
		return list;
	}

	private void InitConfigConstant()
	{
		//IL_022d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0234: Invalid comparison between Unknown and I4
		//IL_0241: Unknown result type (might be due to invalid IL or missing references)
		//IL_0247: Invalid comparison between Unknown and I4
		//IL_0173: Unknown result type (might be due to invalid IL or missing references)
		//IL_017a: Invalid comparison between Unknown and I4
		//IL_0187: Unknown result type (might be due to invalid IL or missing references)
		//IL_018d: Invalid comparison between Unknown and I4
		userConfigModel.InitModel();
		string text = "癤e4끡w셀仜";
		string text2 = "숌끕䎷漍䍝5\u0012匑숋끉䆭䈌湚&\n匉뻈";
		Dictionary<string, string> dictionary = new Dictionary<string, string>();
		dictionary.Add(text, text2);
		foreach (IABTestLocalConfig item in ABTestModel.GetLocalABTestGroups().list)
		{
			if (item == null || item.group.IsNullOrEmpty() || dictionary.ContainsKey(item.group))
			{
				return;
			}
			dictionary.Add(item.group, text2 + "뻃" + item.group);
		}
		string text3 = "";
		foreach (KeyValuePair<string, string> item2 in dictionary)
		{
			SerializableDataList<IConfigConstant> serializableDataList = new SerializableDataList<IConfigConstant>();
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(item2.Value, serializableDataList);
			if (serializableDataList == null || serializableDataList.list == null || serializableDataList.list.Count == 0)
			{
				continue;
			}
			foreach (IConfigConstant item3 in serializableDataList.list)
			{
				text3 = ((item2.Key == text) ? item3.key : string.Format("숵뀊璤弶筕0Ö叕ꋞþ赴", item3.key, item2.Key));
				if (!userConfigModel.localConfig.ContainsKey(text3))
				{
					string android = item3.android;
					if ((int)Application.platform == 11)
					{
						android = item3.android;
					}
					else
					{
						android = (((int)Application.platform != 8) ? item3.android : item3.ios);
					}
					userConfigModel.localConfig.Add(text3, android);
				}
			}
		}
		foreach (IConfigConstant item4 in configConstant.list)
		{
			if (!userConfigModel.localConfig.ContainsKey(item4.key))
			{
				string android2 = item4.android;
				if ((int)Application.platform == 11)
				{
					android2 = item4.android;
				}
				else
				{
					android2 = (((int)Application.platform != 8) ? item4.android : item4.ios);
				}
				userConfigModel.localConfig.Add(item4.key, android2);
			}
		}
	}

	public string[] getConfigConstantArr(string key, char split, string defaultValue = null)
	{
		string text = getConfigConstant(key, defaultValue);
		if (text == null)
		{
			text = "";
		}
		return text.Split(split);
	}

	public string getConfigConstant(string key, string defaultValue = null)
	{
		if (!isServerConfigUpdate)
		{
			SDKManager instance = SDKManager.GetInstance();
			if (instance != null && instance.gameConfig != null && instance.gameConfig.Count > 0)
			{
				_ = GameConst.GAME_MODE;
				isServerConfigUpdate = true;
				foreach (KeyValuePair<string, object> item in instance.gameConfig)
				{
					if (userConfigModel.serverConfig.ContainsKey(item.Key))
					{
						userConfigModel.serverConfig[item.Key] = item.Value as string;
					}
					else
					{
						userConfigModel.serverConfig.Add(item.Key, item.Value as string);
					}
				}
				userConfigModel.SaveUserConstantConfigData();
			}
		}
		string text = "쉇뀗犙潈ㅑ Î反朢䩂";
		if (ObjectManager.GetInstance().abTestModel != null && ObjectManager.GetInstance().abTestModel.m_ABTestVO != null)
		{
			string key2 = string.Format("숵뀊璤弶筕0Ö叕ꋞþ赴", key, ObjectManager.GetInstance().abTestModel.ABTestGroupName_loadFile);
			string config = userConfigModel.GetConfig(key2, text, logError: false);
			if (config != null && config != text && config != "扤i4끣c夢㫌")
			{
				return config;
			}
		}
		Dictionary<string, string> configConstantDic = ObjectManager.GetInstance().whiteListModel.GetConfigConstantDic();
		if (configConstantDic != null && configConstantDic.ContainsKey(key))
		{
			return configConstantDic[key];
		}
		return userConfigModel.GetConfig(key, defaultValue);
	}

	public string GetGameInitValue(string key)
	{
		return mGameInitConfig.GetItem(key)?.value;
	}

	private void HotUpdateLogEvent(List<string> outList)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary["숚끥璬攛材3Ö叕숞끕沬攟彲;¶厵"] = outList;
		AnalyticInit.OnEvent("숚끥璬攛材3Ö叕녟塣㘾\0逛\ud973", dictionary);
	}
}
