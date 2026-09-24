using System.Collections.Generic;
using TLF;
using UnityEngine;

public class ObjectManager
{
	private static ObjectManager _instance;

	public static bool ObjectManager_INIT;

	private bool mbInit;

	public bool mObjMgrInit;

	public bool mReloadModelInit;

	private bool mABTest2CanReload;

	public IapServerInfoModel iapServerInfoModel = new IapServerInfoModel();

	public AnalyticsPropertiesModel analyticsPropertiesModel = new AnalyticsPropertiesModel();

	public PlayerLevelModel playerLevelModel = new PlayerLevelModel();

	public RestaurantLevelModel restaurantLevelModel = new RestaurantLevelModel();

	public GameOrdersModel gameOrdersModel = new GameOrdersModel();

	public OrderWaveRewardModel orderWaveRewardModel = new OrderWaveRewardModel();

	public OrderWaveRewardRecordModel orderWaveRewardRecordModel = new OrderWaveRewardRecordModel();

	public TaskBuildModel taskBuildModel = new TaskBuildModel();

	public StarTreasureBoxModel starTreasureBoxModel = new StarTreasureBoxModel();

	public ABTestModel abTestModel = new ABTestModel();

	public ABTest2Model abTest2Model = new ABTest2Model();

	public UserDataModel userDataModel = new UserDataModel();

	public CommonFieldStorageModel commonFieldStorageModel = new CommonFieldStorageModel();

	public UserTagModel userTagModel = new UserTagModel();

	public UserHeadModel userHeadModel = new UserHeadModel();

	public UserGameDataModel userGameDataModel = new UserGameDataModel();

	public RoleClothModel roleClothModel = new RoleClothModel();

	public CharacterModel characterModel = new CharacterModel();

	public ItemDataModel itemDataModel = new ItemDataModel();

	public GameLevelModel gameLevelModel = new GameLevelModel();

	public ShopDataModel shopDataModel = new ShopDataModel();

	public AnalyticsModel analyticsModel = new AnalyticsModel();

	public TownModel townModel = new TownModel();

	public MailModel mailModel = new MailModel();

	public PushNoticeModel pushNoticeModel = new PushNoticeModel();

	public SignInModel signInModel = new SignInModel();

	public PopupModel PopupModel = new PopupModel();

	public IllustratedDataModel illustratedDataModel = new IllustratedDataModel();

	public DailyTriggerModel dailyTriggerModel = new DailyTriggerModel();

	public PlayerStateModel playerStateModel = new PlayerStateModel();

	public PlayerStatePushGiftModel playerStatePushGiftModel = new PlayerStatePushGiftModel();

	public FacebookModel facebookModel = new FacebookModel();

	public TaskPassModel taskPassModel = new TaskPassModel();

	public TaskPassModelV2 taskPassModelV2 = new TaskPassModelV2();

	public TaskThemePassModel taskThemePassModel = new TaskThemePassModel();

	public TaskThemePassModelV2 taskThemePassModelV2 = new TaskThemePassModelV2();

	public DailyChallengeModel dailyChallengeModel = new DailyChallengeModel();

	public AdvertisementPassModel adPassModel = new AdvertisementPassModel();

	public FiveStarRateModel fiveStarRateModel = new FiveStarRateModel();

	public DiamondPassModel diamondPassModel = new DiamondPassModel();

	public AdGiftModel adGiftModel = new AdGiftModel();

	public FestivalGiftModel festivalGiftModel = new FestivalGiftModel();

	public FestivalGiftV2.Model festivalGiftV2Model = new FestivalGiftV2.Model();

	public PigBankModel pigBankModel = new PigBankModel();

	public BagGiftModel bagGiftModel = new BagGiftModel();

	public DIYGiftModel diyGiftModel = new DIYGiftModel();

	public TurntableModel turntableModel = new TurntableModel();

	public LinkGiftModel linkGiftModel = new LinkGiftModel();

	public BagCircumModel bagCircumModel = new BagCircumModel();

	public BagGeneratorStorageModel bagGeneratorStorageModel = new BagGeneratorStorageModel();

	public BingoModel bingoModel = new BingoModel();

	public DailyGiftModel dailyGiftModel = new DailyGiftModel();

	public WeekPassModel weekPassModel = new WeekPassModel();

	public DiamondDiscountTicketModel diamondDiscountTicketModel = new DiamondDiscountTicketModel();

	public DiamondDiscountTicketV2Model diamondDiscountTicketV2Model = new DiamondDiscountTicketV2Model();

	public DiamondIceGiftModel diamondIceModel = new DiamondIceGiftModel();

	public Link2FacebookModel link2FacebookModel = new Link2FacebookModel();

	public Link2InstagramModel link2InstagramModel = new Link2InstagramModel();

	public DoubleConsumptionModel doubleConsumptionModel = new DoubleConsumptionModel();

	public GoodsCompensateModel goodsCompensateModel = new GoodsCompensateModel();

	public OrderReissueGoodsModel orderReissueGoodsModel = new OrderReissueGoodsModel();

	public GeneratorStopReissueModel generatorStopReissueModel = new GeneratorStopReissueModel();

	public TreasureHuntingModel treasureHuntingModel = new TreasureHuntingModel();

	public NewTreasureHuntingModel newTreasureHuntingModel = new NewTreasureHuntingModel();

	public NewTreasureHuntingV2Model newTreasureHuntingV2Model = new NewTreasureHuntingV2Model();

	public UserInitTagModel userInitTagModel = new UserInitTagModel();

	public ThreeChooseOneEnergyGiftModel threeChooseOneEnergyGiftModel = new ThreeChooseOneEnergyGiftModel();

	public ThreeChooseOneEnergyGift2Model threeChooseOneEnergyGift2Model = new ThreeChooseOneEnergyGift2Model();

	public MainRaceModel mainRaceModel = new MainRaceModel();

	public ReplaceGiftModel replaceGiftModel = new ReplaceGiftModel();

	public SurpriseGiftModel surpriseGiftModel = new SurpriseGiftModel();

	public NoviceGift2Model noviceGift2Model = new NoviceGift2Model();

	public NoviceGift3Model noviceGift3Model = new NoviceGift3Model();

	public BubbleDiscountModel bubbleDiscountModel = new BubbleDiscountModel();

	public CardCollectionModel cardCollectionModel = new CardCollectionModel();

	public CardCollectionGiftModel cardCollectionGiftModel = new CardCollectionGiftModel();

	public CardCollectionWildCardModel cardCollectionWildCardModel = new CardCollectionWildCardModel();

	public CardCollectionWildCardV2Model cardCollectionWildCardV2Model = new CardCollectionWildCardV2Model();

	public CCWildCardGiftPack.Model ccWildCardGiftPackModel = new CCWildCardGiftPack.Model();

	public NewTreasureHuntingGiftPack.Model newTreasureHuntingGiftPackModel = new NewTreasureHuntingGiftPack.Model();

	public CardCollectionTemporaryBagModel cardCollectionTempBagModel = new CardCollectionTemporaryBagModel();

	public CardCollectionV2Model cardCollectionV2Model = new CardCollectionV2Model();

	public CardCollectionV3Model cardCollectionV3Model = new CardCollectionV3Model();

	public LimitTimeCardCollectionModel limitTimeCardCollectionModel = new LimitTimeCardCollectionModel();

	public HighValueGoodsModel highValueGoodsModel = new HighValueGoodsModel();

	public IndependentMergeModel independentMergeModel = new IndependentMergeModel();

	public EnergyWeekcardModel energyWeekcardModel = new EnergyWeekcardModel();

	public ChefLikeModel chefLikeModel = new ChefLikeModel();

	public MergeFishing.Model mergeFishingModel = new MergeFishing.Model();

	public MergeFishingGameModel mergeFishingGameModel = new MergeFishingGameModel();

	public SceneActivityModel sceneActivityModel = new SceneActivityModel();

	public ChessboardBackgroundThemeModel chessboardBackgroundThemeModel = new ChessboardBackgroundThemeModel();

	public ChampionshipModel championshipModel = new ChampionshipModel();

	public IAPReplenishOrderModel iapReplenishOrderModel = new IAPReplenishOrderModel();

	public RaceWinnerModel raceWinnerModel = new RaceWinnerModel();

	public RaceWinnerOrderModel raceWinnerOrderModel = new RaceWinnerOrderModel();

	public CardTaskChainModel cardTaskChainModel = new CardTaskChainModel();

	public CCThreeChooseOneGiftModel ccThreeChooseOneGiftModel = new CCThreeChooseOneGiftModel();

	public StoryVideoModel storyVideoModel = new StoryVideoModel();

	public WhiteListModel whiteListModel = new WhiteListModel();

	public MiniGameStageModel miniGameStageModel = new MiniGameStageModel();

	public TaskChain.Model taskChainModel = new TaskChain.Model();

	public LuckyHuntModel luckyHuntModel = new LuckyHuntModel();

	public GoodsBuffModel goodsBuffModel = new GoodsBuffModel();

	public LimitTimeOrderModel limitTimeOrderModel = new LimitTimeOrderModel();

	public OnePlusNGift.Model onePlusNGiftModel = new OnePlusNGift.Model();

	public DailyGiftV2.Model dailyGiftModelV2 = new DailyGiftV2.Model();

	public EnergyGiftModel energyGiftModel = new EnergyGiftModel();

	public MergeFishingV2.Model mergeFishingV2Model = new MergeFishingV2.Model();

	public MergeFishingGameModelV2 mergeFishingV2GameModel = new MergeFishingGameModelV2();

	public MergeFishingV2Gift.Model mergeFishingV2GiftModel = new MergeFishingV2Gift.Model();

	public TreasureCraftingModel treasureCraftingModel = new TreasureCraftingModel();

	public NewMainRaceModel newRaceModel = new NewMainRaceModel();

	public PlayerLevelGiftModel playerLevelGiftModel = new PlayerLevelGiftModel();

	public PlayerLevelGiftV2.Model playerLevelGiftV2Model = new PlayerLevelGiftV2.Model();

	public PlayerAutoUpgradeV2Model playerAutoUpgradeV2Model = new PlayerAutoUpgradeV2Model();

	public NPCModel npcModel = new NPCModel();

	public FeverFlambeModel feverFlambeModel = new FeverFlambeModel();

	public FeverRelayModel feverRelayModel = new FeverRelayModel();

	public FeverFlambeV2Model feverFlambeV2Model = new FeverFlambeV2Model();

	public FeverRelayV2Model feverRelayV2Model = new FeverRelayV2Model();

	public FeverFlambeV3Model feverFlambeV3Model = new FeverFlambeV3Model();

	public FeverFlambeStageModel feverFlambeStageModel = new FeverFlambeStageModel();

	public AdCompensationModel adCompensationModel = new AdCompensationModel();

	public TimeLimited8MultModel timeLimited8MultModel = new TimeLimited8MultModel();

	public IceGiftModel iceGiftModel = new IceGiftModel();

	public IndependentStageMergeModel independentStageMergeModel = new IndependentStageMergeModel();

	public MGCookingModel mgCookingModel = new MGCookingModel();

	public EnergyDiscountTicket.Model energyDiscountTicketModel = new EnergyDiscountTicket.Model();

	public VersionUpdateModel versionUpdateModel = new VersionUpdateModel();

	public PuzzleModel puzzleModel = new PuzzleModel();

	public Temporary.Bubble.Model temporaryBubbleModel = new Temporary.Bubble.Model();

	public RaceVsModel raceVsModel = new RaceVsModel();

	public Race1v1CodeModel race1v1CodeModel = new Race1v1CodeModel();

	public RaceVsV2Model raceVsV2Model = new RaceVsV2Model();

	public FireHelperModel fireHelperModel = new FireHelperModel();

	public OrderReturnBackModel orderReturnBackModel = new OrderReturnBackModel();

	public MiniGameLevelModel miniGameLevelModel = new MiniGameLevelModel();

	public GeneratorRecycleModel generatorRecycleModel = new GeneratorRecycleModel();

	public NewGeneratorGiftModel generatorGiftModel = new NewGeneratorGiftModel();

	public NewGeneratorTemporaryBagModel generatorTemporaryBagModel = new NewGeneratorTemporaryBagModel();

	public IndependentFarmModel independentFarmModel = new IndependentFarmModel();

	public TimelimitMultModel timelimitMultModel = new TimelimitMultModel();

	public WaveOrderAnalyseModel waveOrderAnalyseModel = new WaveOrderAnalyseModel();

	public ReturnUserOrderModel returnUserOrderModel = new ReturnUserOrderModel();

	public DynamicBoxDropModel dynamicBoxDropModel = new DynamicBoxDropModel();

	public NewSurprisedBoxModel surprisedBoxModel = new NewSurprisedBoxModel();

	public GameLevelSortModel gameLevelSortModel = new GameLevelSortModel();

	public TaskSevenDayModel taskSevenDayModel = new TaskSevenDayModel();

	public MachineQuickHintModel machineQuickHintModel = new MachineQuickHintModel();

	public CardCollectionPayModel cardCollectionPayModel = new CardCollectionPayModel();

	public EnergyPassModel energyPassModel = new EnergyPassModel();

	public IndependentBasicModel independentBasicModel = new IndependentBasicModel();

	public IndependentStageBasicModel idnStageBasicModel = new IndependentStageBasicModel();

	public IndStageModel idnStageModel = new IndStageModel();

	public DiscoModel DiscoViewModel = new DiscoModel();

	public LuckyWheelModel luckyWheelModel = new LuckyWheelModel();

	public PeakOrderModel peakOrderModel = new PeakOrderModel();

	public IndependentPassModel IndependentPassModel = new IndependentPassModel();

	public IndependentMiningModel independentMiningModel = new IndependentMiningModel();

	public GauntletTreasure.Model GauntletTreasureModel = new GauntletTreasure.Model();

	public BoostRaceTaskChain.Model BoostRaceTaskChainModel = new BoostRaceTaskChain.Model();

	public ShopDailyLimitGiftModel ShopDailyLimitGiftModel = new ShopDailyLimitGiftModel();

	public AdStrateryModel adStrateryModel = new AdStrateryModel();

	public MailLocalModel mailLocalModel = new MailLocalModel();

	public CardCollectionDoubleGiftModel cardCollectionDoubleGiftModel = new CardCollectionDoubleGiftModel();

	public CCNChoose1CardGiftModel ccNChoose1CardGiftModel = new CCNChoose1CardGiftModel();

	public FiveRaceModel fiveRaceModel = new FiveRaceModel();

	public EnergyBackUp.Model energyBackUpModel = new EnergyBackUp.Model();

	public DiamondChainGiftModel diamondChainGiftModel = new DiamondChainGiftModel();

	public WeakUpdate.Model weakUpdateModel = new WeakUpdate.Model();

	public GameDataRecoveryModel gameDataRecoveryModel = new GameDataRecoveryModel();

	public OrderPartCommitBuffModel orderPartCommitBuffModel = new OrderPartCommitBuffModel();

	public Day3Pack.Model day3PackModel = new Day3Pack.Model();

	public AirPlaneModel airPlaneModel = new AirPlaneModel();

	public GemsPathModel gemsPathModel = new GemsPathModel();

	public SingleWaveOrderGiftThemeModel singleWaveOrderGiftThemeModel = new SingleWaveOrderGiftThemeModel();

	public PrivacyPolicyModel privacyPolicyModel = new PrivacyPolicyModel();

	public MGMakeCakeModel mgMakeCakeModel = new MGMakeCakeModel();

	public LoadingIPModel loadingIPModel = new LoadingIPModel();

	public CookFrenzyModel cookFrenzyModel = new CookFrenzyModel();

	private List<BaseModel> mTimingSaveModel = new List<BaseModel>();

	private float mTimingSaveInterval = 1f;

	private float mTimingSaveTimer;

	private float mSaveToDiskInterval = 60f;

	private float mSaveToDiskTimer;

	private bool mCanSaveToDisk = true;

	private bool mSaveDirty;

	public static ObjectManager Instance => _instance;

	public bool IsInit => mbInit;

	public bool ABTest2CanReload
	{
		get
		{
			return mABTest2CanReload;
		}
		set
		{
			mABTest2CanReload = value;
		}
	}

	public static ObjectManager GetInstance()
	{
		if (_instance == null)
		{
			_instance = new ObjectManager();
		}
		return _instance;
	}

	public void InitStoryModel()
	{
		commonFieldStorageModel.InitModel(timingSave: true);
		userDataModel.InitModel(timingSave: true);
		gameOrdersModel.InitModel(timingSave: true);
		restaurantLevelModel.InitModel();
		taskBuildModel.InitModel();
		characterModel.InitModel();
		townModel.InitModel();
		roleClothModel.InitModel();
		UserDefault.Instance.ParseDataFromDB();
		ObjectManager_INIT = true;
		mbInit = true;
	}

	public void InitModel()
	{
		MonoSingleton<ConditionAdvanceManager>.Instance.JudgeSaveLoadTableVersion_SaveLocal();
		ServerTimeManager.mCanUpdateServerTime = true;
		ServerTimeManager.UpdateServerTime();
		mTimingSaveModel.Clear();
		ProductModel.Instance.InitModel2();
		Singleton<ServerManager>.Instance.PushServerModelToTimingSave();
		commonFieldStorageModel.InitModel(timingSave: true);
		iapServerInfoModel.InitModel();
		analyticsPropertiesModel.InitModel();
		userDataModel.InitModel(timingSave: true);
		whiteListModel.InitModel();
		userTagModel.InitModel();
		dailyTriggerModel.InitModel();
		userGameDataModel.InitModel();
		playerLevelModel.InitModel();
		userHeadModel.InitModel();
		restaurantLevelModel.InitModel();
		gameOrdersModel.InitModel(timingSave: true);
		orderPartCommitBuffModel.InitModel(timingSave: true);
		raceWinnerOrderModel.InitModel(timingSave: true);
		limitTimeOrderModel.InitModel();
		returnUserOrderModel.InitModel();
		bagGeneratorStorageModel.InitModel();
		orderWaveRewardModel.InitModel();
		orderWaveRewardRecordModel.InitModel(timingSave: true);
		taskBuildModel.InitModel();
		starTreasureBoxModel.InitModel();
		characterModel.InitModel();
		itemDataModel.InitModel(timingSave: true);
		gameLevelModel.InitModel(timingSave: true);
		linkGiftModel.InitModel();
		bagCircumModel.InitModel();
		bingoModel.InitModel();
		dailyGiftModel.InitModel();
		dailyGiftModelV2.InitModel(timingSave: true);
		weekPassModel.InitModel();
		diamondDiscountTicketModel.InitModel();
		diamondDiscountTicketV2Model.InitModel();
		diamondIceModel.InitModel();
		link2FacebookModel.InitModel();
		link2InstagramModel.InitModel();
		replaceGiftModel.InitModel();
		iceGiftModel.InitModel();
		versionUpdateModel.InitModel();
		temporaryBubbleModel.InitModel();
		Singleton<GameLevelManager>.Instance.InitCacheData();
		shopDataModel.InitModel();
		townModel.InitModel();
		mailLocalModel.InitModel(timingSave: true);
		mailModel.InitModel();
		PopupModel.InitModel();
		roleClothModel.InitModel();
		analyticsModel.InitModel(timingSave: true);
		adStrateryModel.InitModel(timingSave: true);
		abTestModel.InitModel();
		abTest2Model.InitModel();
		userInitTagModel.InitModel();
		UpdateDataConfigReplace();
		pushNoticeModel.InitModel();
		illustratedDataModel.InitModel();
		signInModel.InitModel();
		facebookModel.InitModel();
		taskPassModel.InitModel(timingSave: true);
		taskPassModelV2.InitModel(timingSave: true);
		taskThemePassModel.InitModel(timingSave: true);
		taskThemePassModelV2.InitModel(timingSave: true);
		dailyChallengeModel.InitModel(timingSave: true);
		adPassModel.InitModel();
		UserDefault.Instance.ParseDataFromDB();
		userDataModel.InitUserData();
		fiveStarRateModel.InitModel();
		diamondPassModel.InitModel(timingSave: true);
		adGiftModel.InitModel(timingSave: true);
		festivalGiftV2Model.InitModel(timingSave: true);
		festivalGiftModel.InitModel(timingSave: true);
		pigBankModel.InitModel(timingSave: true);
		bagGiftModel.InitModel();
		diyGiftModel.InitModel();
		turntableModel.InitModel();
		doubleConsumptionModel.InitModel();
		goodsCompensateModel.InitModel();
		orderReissueGoodsModel.InitModel();
		generatorStopReissueModel.InitModel();
		threeChooseOneEnergyGiftModel.InitModel();
		threeChooseOneEnergyGift2Model.InitModel();
		surpriseGiftModel.InitModel(timingSave: true);
		noviceGift2Model.InitModel();
		noviceGift3Model.InitModel();
		singleWaveOrderGiftThemeModel.InitModel(timingSave: true);
		generatorGiftModel.InitModel();
		generatorTemporaryBagModel.InitModel();
		energyWeekcardModel.InitModel();
		iapReplenishOrderModel.InitModel();
		Singleton<GameLevelManager>.Instance.InitHintCondition();
		Singleton<GameLevelManager>.Instance.InitShowWeakTimeInterval();
		restaurantLevelModel.NserUserInitData();
		playerLevelModel.NserUserInitData();
		playerLevelGiftModel.InitModel();
		playerLevelGiftV2Model.InitModel(timingSave: true);
		playerAutoUpgradeV2Model.InitModel();
		starTreasureBoxModel.NserUserInitData();
		orderWaveRewardModel.InitModel2();
		taskBuildModel.InitModel2();
		orderWaveRewardModel.Fixbuy_MultiWaveDataIsNull();
		shopDataModel.CompatibleOldUser(syncServer: false);
		treasureHuntingModel.InitModel();
		newTreasureHuntingModel.InitModel();
		newTreasureHuntingV2Model.InitModel();
		mainRaceModel.InitModel();
		bubbleDiscountModel.InitModel();
		highValueGoodsModel.InitModel();
		independentMergeModel.InitModel(timingSave: true);
		replaceGiftModel.RecordGiftConsecutiveCloseCountByTime();
		cardCollectionModel.InitModel();
		cardCollectionV2Model.InitModel();
		cardCollectionV3Model.InitModel();
		limitTimeCardCollectionModel.InitModel();
		cardCollectionGiftModel.InitModel();
		cardCollectionWildCardModel.InitModel();
		cardCollectionWildCardV2Model.InitModel();
		ccWildCardGiftPackModel.InitModel(timingSave: true);
		newTreasureHuntingGiftPackModel.InitModel(timingSave: true);
		cardCollectionTempBagModel.InitModel();
		chefLikeModel.InitModel();
		mergeFishingModel.InitModel();
		mergeFishingGameModel.InitModel(timingSave: true);
		sceneActivityModel.InitModel(timingSave: true);
		playerStateModel.InitModel(timingSave: true);
		playerStatePushGiftModel.InitModel(timingSave: true);
		MonoSingleton<PlayerStateManager>.Instance.Startup();
		AssignIPThemeModel.Instance.InitModel(timingSave: true);
		chessboardBackgroundThemeModel.InitModel(timingSave: true);
		championshipModel.InitModel(timingSave: true);
		energyPassModel.InitModel(timingSave: true);
		raceWinnerModel.InitModel();
		cardTaskChainModel.InitModel(timingSave: true);
		ccThreeChooseOneGiftModel.InitModel();
		storyVideoModel.InitModel();
		mgCookingModel.InitModel();
		miniGameLevelModel.InitModel();
		miniGameStageModel.InitModel();
		taskChainModel.InitModel(timingSave: true);
		gameOrdersModel.OrderCache1Compatible();
		luckyHuntModel.InitModel();
		goodsBuffModel.InitModel();
		onePlusNGiftModel.InitModel();
		energyGiftModel.InitModel();
		mergeFishingV2Model.InitModel();
		mergeFishingV2GameModel.InitModel(timingSave: true);
		mergeFishingV2GiftModel.InitModel(timingSave: true);
		treasureCraftingModel.InitModel(timingSave: true);
		independentStageMergeModel.InitModel(timingSave: true);
		newRaceModel.InitModel(timingSave: true);
		fiveRaceModel.InitModel(timingSave: true);
		npcModel.InitModel();
		waveOrderAnalyseModel.InitModel(timingSave: true);
		feverFlambeModel.InitModel();
		feverRelayModel.InitModel();
		feverFlambeV2Model.InitModel(timingSave: true);
		feverRelayV2Model.InitModel(timingSave: true);
		feverFlambeV3Model.InitModel(timingSave: true);
		feverFlambeStageModel.InitModel(timingSave: true);
		energyDiscountTicketModel.InitModel(timingSave: true);
		adCompensationModel.InitModel();
		timeLimited8MultModel.InitModel(timingSave: true);
		generatorRecycleModel.InitModel();
		dynamicBoxDropModel.InitModel();
		puzzleModel.InitModel(timingSave: true);
		timelimitMultModel.InitModel(timingSave: true);
		surprisedBoxModel.InitModel(timingSave: true);
		gameLevelSortModel.InitModel();
		taskSevenDayModel.InitModel(timingSave: true);
		raceVsModel.InitModel(timingSave: true);
		race1v1CodeModel.InitModel(timingSave: true);
		raceVsV2Model.InitModel(timingSave: true);
		machineQuickHintModel.InitModel();
		independentBasicModel.InitModel(timingSave: true);
		cardCollectionPayModel.InitModel(timingSave: true);
		idnStageBasicModel.InitModel(timingSave: true);
		idnStageModel.InitModel(timingSave: true);
		DiscoViewModel.InitModel(timingSave: true);
		luckyWheelModel.InitModel(timingSave: true);
		peakOrderModel.InitModel();
		independentMiningModel.InitModel(timingSave: true);
		GauntletTreasureModel.InitModel(timingSave: true);
		BoostRaceTaskChainModel.InitModel(timingSave: true);
		independentFarmModel.InitModel(timingSave: true);
		IndependentPassModel.InitModel(timingSave: true);
		fireHelperModel.InitModel(timingSave: true);
		orderReturnBackModel.InitModel(timingSave: true);
		ShopDailyLimitGiftModel.InitModel(timingSave: true);
		cardCollectionDoubleGiftModel.InitModel(timingSave: true);
		ccNChoose1CardGiftModel.InitModel(timingSave: true);
		energyBackUpModel.InitModel(timingSave: true);
		diamondChainGiftModel.InitModel(timingSave: true);
		day3PackModel.InitModel(timingSave: true);
		airPlaneModel.InitModel(timingSave: true);
		gemsPathModel.InitModel(timingSave: true);
		weakUpdateModel.InitModel(timingSave: true);
		privacyPolicyModel.InitModel(timingSave: true);
		loadingIPModel.InitModel();
		gameDataRecoveryModel.InitModel();
		cookFrenzyModel.InitModel(timingSave: true);
		mgMakeCakeModel.InitModel();
		ObjectManager_INIT = true;
		mbInit = true;
		mObjMgrInit = true;
		EventManager.GetInstance().DispatchEvent(203207);
		ActivityOpenCheckerManager.RegisterAll(Singleton<HotUpdate.Manager>.Instance.ActivityOpenCheckerRegistry);
		ActivityThemeHotGroupTA.Init();
		userDataModel.CheckSaveToDisk();
		ReloadModel();
		SDKManager.Instance?.SetFirebaseErrorAttribute();
		gameOrdersModel.Debug_SetConfig();
		ReturnUserModel.GetInstance().CheckValid();
	}

	public void InitModel_After()
	{
		MonoSingleton<OrderActivityScoreManager>.Instance.PushAddOrderActivityScoreModel();
		MonoSingleton<OrderActivityScoreManager>.Instance.JudgeAddOrRemoveOrderScore();
		MonoSingleton<ConditionAdvanceManager>.Instance.TableStep_Event();
		MonoSingleton<ConditionAdvanceManager>.Instance.SaveEValue(EConditionAdvanceType.e_hardSwitchClose);
		festivalGiftModel.InitModel_After();
		gameLevelSortModel.InitModel_After();
		analyticsModel.JudgeAdjust90ActivityEvent();
		analyticsModel.JudgeAdjust90ActivityEvent2_30();
		analyticsModel.JudgeAdjust90ActivityEvent2_90();
		limitTimeOrderModel.ActivityGearChange2ThemeGear();
		limitTimeOrderModel.ReloadNormalOrder();
		machineQuickHintModel.InitModel_After();
		playerLevelModel.OnUAStatusEvent();
		illustratedDataModel.InitModel_After();
		taskSevenDayModel.PatchEnptyTask();
		mailLocalModel.InitModel_After();
		restaurantLevelModel.OnUAStatusEvent_UnlockRestaurantCount();
		analyticsModel.InitAfter();
		playerLevelGiftV2Model.InitModel_After();
		gameDataRecoveryModel.InitModel_After();
	}

	private void UpdateDataConfigReplace()
	{
		ReplaceConfigHelper.ReloadReplaceConfig();
		abTestModel.LoadReplaceConfig();
		itemDataModel.ReloadItemConfig();
	}

	public void SyncServerData()
	{
		MonoSingleton<ConditionAdvanceManager>.Instance.SyncServerDataToLocal();
		iapServerInfoModel.SyncServerDataToLocal();
		analyticsPropertiesModel.SyncServerDataToLocal();
		analyticsModel.SyncServerDataToLocal();
		dailyTriggerModel.SyncServerDataToLocal();
		commonFieldStorageModel.SyncServerDataToLocal();
		userDataModel.SyncServerDataToLocal();
		userTagModel.SyncServerDataToLocal();
		whiteListModel.SyncServerDataToLocal();
		userGameDataModel.SyncServerDataToLocal();
		townModel.SyncServerData();
		playerLevelModel.SyncServerDataToLocal();
		bagGeneratorStorageModel.SyncServerDataToLocal();
		gameLevelModel.SyncServerData();
		gameOrdersModel.SyncServerDataToLocal();
		orderPartCommitBuffModel.SyncServerDataToLocal();
		raceWinnerOrderModel.SyncServerDataToLocal();
		limitTimeOrderModel.SyncServerDataToLocal();
		returnUserOrderModel.SyncServerDataToLocal();
		taskBuildModel.SyncServerDataToLocal();
		userHeadModel.SyncServerDataToLocal();
		restaurantLevelModel.SyncServerDataToLocal();
		shopDataModel.SyncServerDataToLocal();
		MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.SyncServerDataToLocal();
		starTreasureBoxModel.SyncServerDataToLocal();
		illustratedDataModel.SyncServerDataToLocal();
		adStrateryModel.SyncServerDataToLocal();
		abTestModel.SyncServerDataToLocal();
		abTest2Model.SyncServerDataToLocal();
		userInitTagModel.SyncServerDataToLocal();
		UpdateDataConfigReplace();
		orderWaveRewardModel.SyncServerDataToLocal();
		orderWaveRewardRecordModel.SyncServerDataToLocal();
		taskPassModel.SyncServerDataToLocal();
		taskPassModelV2.SyncServerDataToLocal();
		taskThemePassModel.SyncServerDataToLocal();
		taskThemePassModelV2.SyncServerDataToLocal();
		signInModel.SyncServerData();
		adPassModel.SyncServerDataToLocal();
		diamondPassModel.SyncServerDataToLocal();
		PopupModel.SyncServerDataToLocal();
		adGiftModel.SyncServerDataToLocal();
		festivalGiftModel.SyncServerDataToLocal();
		festivalGiftV2Model.SyncServerDataToLocal();
		pigBankModel.SyncServerDataToLocal();
		bagGiftModel.SyncServerDataToLocal();
		turntableModel.SyncServerDataToLocal();
		linkGiftModel.SyncServerDataToLocal();
		bagCircumModel.SyncServerDataToLocal();
		bingoModel.SyncServerDataToLocal();
		diyGiftModel.SyncServerDataToLocal();
		dailyGiftModel.SyncServerDataToLocal();
		dailyGiftModelV2.SyncServerDataToLocal();
		weekPassModel.SyncServerDataToLocal();
		diamondDiscountTicketModel.SyncServerDataToLocal();
		diamondDiscountTicketV2Model.SyncServerDataToLocal();
		diamondIceModel.SyncServerDataToLocal();
		link2FacebookModel.SyncServerDataToLocal();
		link2InstagramModel.SyncServerDataToLocal();
		dailyChallengeModel.SyncServerDataToLocal();
		doubleConsumptionModel.SyncServerDataToLocal();
		orderWaveRewardModel.Fixbuy_MultiWaveDataIsNull();
		shopDataModel.CompatibleOldUser(syncServer: true);
		goodsCompensateModel.SyncServerDataToLocal();
		orderReissueGoodsModel.SyncServerDataToLocal();
		generatorStopReissueModel.SyncServerDataToLocal();
		treasureHuntingModel.SyncServerDataToLocal();
		newTreasureHuntingModel.SyncServerDataToLocal();
		newTreasureHuntingV2Model.SyncServerDataToLocal();
		threeChooseOneEnergyGiftModel.SyncServerDataToLocal();
		threeChooseOneEnergyGift2Model.SyncServerDataToLocal();
		mainRaceModel.SyncServerDataToLocal();
		replaceGiftModel.SyncServerDataToLocal();
		surpriseGiftModel.SyncServerDataToLocal();
		noviceGift2Model.SyncServerDataToLocal();
		noviceGift3Model.SyncServerDataToLocal();
		singleWaveOrderGiftThemeModel.SyncServerDataToLocal();
		bubbleDiscountModel.SyncServerDataToLocal();
		taskBuildModel.InitModel2();
		cardCollectionModel.SyncServerDataToLocal();
		cardCollectionV2Model.SyncServerDataToLocal();
		cardCollectionV3Model.SyncServerDataToLocal();
		cardCollectionGiftModel.SyncServerDataToLocal();
		cardCollectionWildCardModel.SyncServerDataToLocal();
		cardCollectionWildCardV2Model.SyncServerDataToLocal();
		ccWildCardGiftPackModel.SyncServerDataToLocal();
		cardCollectionTempBagModel.SyncServerDataToLocal();
		limitTimeCardCollectionModel.SyncServerDataToLocal();
		highValueGoodsModel.SyncServerDataToLocal();
		independentMergeModel.SyncServerDataToLocal();
		energyWeekcardModel.SyncServerDataToLocal();
		chefLikeModel.SyncServerDataToLocal();
		mergeFishingModel.SyncServerDataToLocal();
		mergeFishingGameModel.SyncServerDataToLocal();
		sceneActivityModel.SyncServerDataToLocal();
		playerStateModel.SyncServerDataToLocal();
		playerStatePushGiftModel.SyncServerDataToLocal();
		MonoSingleton<PlayerStateManager>.Instance.Startup();
		AssignIPThemeModel.Instance.SyncServerDataToLocal();
		chessboardBackgroundThemeModel.SyncServerDataToLocal();
		championshipModel.SyncServerDataToLocal();
		energyPassModel.SyncServerDataToLocal();
		raceWinnerModel.SyncServerDataToLocal();
		cardTaskChainModel.SyncServerDataToLocal();
		ccThreeChooseOneGiftModel.SyncServerDataToLocal();
		storyVideoModel.SyncServerData();
		mgCookingModel.SyncServerData();
		miniGameLevelModel.SyncServerData();
		miniGameStageModel.SyncServerDataToLocal();
		taskChainModel.SyncServerDataToLocal();
		playerLevelGiftModel.SyncServerDataToLocal();
		playerLevelGiftV2Model.SyncServerDataToLocal();
		playerAutoUpgradeV2Model.SyncServerDataToLocal();
		gameOrdersModel.OrderCache1Compatible();
		luckyHuntModel.SyncServerDataToLocal();
		goodsBuffModel.SyncServerDataToLocal();
		onePlusNGiftModel.SyncServerDataToLocal();
		energyGiftModel.SyncServerDataToLocal();
		mergeFishingV2Model.SyncServerDataToLocal();
		mergeFishingV2GameModel.SyncServerDataToLocal();
		mergeFishingV2GiftModel.SyncServerDataToLocal();
		waveOrderAnalyseModel.SyncServerDataToLocal();
		feverFlambeModel.SyncServerDataToLocal();
		feverRelayModel.SyncServerDataToLocal();
		feverFlambeV2Model.SyncServerDataToLocal();
		feverRelayV2Model.SyncServerDataToLocal();
		feverFlambeV3Model.SyncServerDataToLocal();
		feverFlambeStageModel.SyncServerDataToLocal();
		treasureCraftingModel.SyncServerDataToLocal();
		newRaceModel.SyncServerDataToLocal();
		fiveRaceModel.SyncServerDataToLocal();
		adCompensationModel.SyncServerDataToLocal();
		timeLimited8MultModel.SyncServerDataToLocal();
		iceGiftModel.SyncServerDataToLocal();
		independentStageMergeModel.SyncServerDataToLocal();
		energyDiscountTicketModel.SyncServerDataToLocal();
		versionUpdateModel.SyncServerDataToLocal();
		fiveStarRateModel.SyncServerDataToLocal();
		puzzleModel.SyncServerDataToLocal();
		temporaryBubbleModel.SyncServerDataToLocal();
		generatorRecycleModel.SyncServerDataToLocal();
		generatorGiftModel.SyncServerDataToLocal();
		timelimitMultModel.SyncServerDataToLocal();
		generatorTemporaryBagModel.SyncServerDataToLocal();
		dynamicBoxDropModel.SyncServerDataToLocal();
		surprisedBoxModel.SyncServerDataToLocal();
		gameLevelSortModel.SyncServerDataToLocal();
		taskSevenDayModel.SyncServerDataToLocal();
		raceVsModel.SyncServerDataToLocal();
		race1v1CodeModel.SyncServerDataToLocal();
		raceVsV2Model.SyncServerDataToLocal();
		machineQuickHintModel.SyncServerDataToLocal();
		independentBasicModel.SyncServerDataToLocal();
		cardCollectionPayModel.SyncServerDataToLocal();
		idnStageBasicModel.SyncServerDataToLocal();
		idnStageModel.SyncServerDataToLocal();
		DiscoViewModel.SyncServerDataToLocal();
		luckyWheelModel.SyncServerDataToLocal();
		peakOrderModel.SyncServerDataToLocal();
		independentMiningModel.SyncServerDataToLocal();
		GauntletTreasureModel.SyncServerDataToLocal();
		BoostRaceTaskChainModel.SyncServerDataToLocal();
		independentFarmModel.SyncServerDataToLocal();
		IndependentPassModel.SyncServerDataToLocal();
		fireHelperModel.SyncServerDataToLocal();
		orderReturnBackModel.SyncServerDataToLocal();
		ShopDailyLimitGiftModel.SyncServerDataToLocal();
		mailLocalModel.SyncServerDataToLocal();
		cardCollectionDoubleGiftModel.SyncServerDataToLocal();
		ccNChoose1CardGiftModel.SyncServerDataToLocal();
		energyBackUpModel.SyncServerDataToLocal();
		diamondChainGiftModel.SyncServerDataToLocal();
		airPlaneModel.SyncServerDataToLocal();
		gemsPathModel.SyncServerDataToLocal();
		privacyPolicyModel.SyncServerDataToLocal();
		gameDataRecoveryModel.SyncServerDataToLocal();
		day3PackModel.SyncServerDataToLocal();
		loadingIPModel.SyncServerDataToLocal();
		newTreasureHuntingGiftPackModel.SyncServerDataToLocal();
		cookFrenzyModel.SyncServerDataToLocal();
		MonoSingleton<OrderActivityScoreManager>.Instance.PushAddOrderActivityScoreModel();
		MonoSingleton<OrderActivityScoreManager>.Instance.JudgeAddOrRemoveOrderScore();
		npcModel.SyncServerDataToLocal();
		mgMakeCakeModel.SyncServerData();
		SaveDirtyModels();
		ReloadModel();
		SDKManager.Instance?.SetFirebaseErrorAttribute();
		mObjMgrInit = true;
		EventManager.GetInstance().DispatchEvent(203207);
	}

	public void SyncServerData_After()
	{
		MonoSingleton<ConditionAdvanceManager>.Instance.TableStep_Event();
		festivalGiftModel.SyncServerData_After();
		analyticsModel.JudgeAdjust90ActivityEvent();
		analyticsModel.JudgeAdjust90ActivityEvent2_30();
		analyticsModel.JudgeAdjust90ActivityEvent2_90();
		limitTimeOrderModel.ActivityGearChange2ThemeGear();
		limitTimeOrderModel.ReloadNormalOrder();
		playerLevelModel.OnUAStatusEvent();
		taskSevenDayModel.PatchEnptyTask();
		restaurantLevelModel.OnUAStatusEvent_UnlockRestaurantCount();
		analyticsModel.InitAfter();
		playerLevelGiftV2Model.SyncServerData_After();
		privacyPolicyModel.OnEvent_PrivacyPolicyVersionChange();
		ReturnUserModel.GetInstance().CheckValid(forceCheck: true);
	}

	public void SaveToDisk()
	{
		if (mCanSaveToDisk)
		{
			SaveDirtyModels();
			PlayerPrefs.Save();
			MMKVSave.Save();
			mCanSaveToDisk = false;
			mSaveDirty = false;
			mSaveToDiskTimer = 0f;
		}
		else
		{
			mSaveDirty = true;
		}
	}

	public void SaveToDiskForce()
	{
		mCanSaveToDisk = true;
		SaveToDisk();
	}

	public void Update(float dt)
	{
		if (mbInit)
		{
			mTimingSaveTimer += dt;
			if (mTimingSaveTimer >= mTimingSaveInterval)
			{
				mTimingSaveTimer = 0f;
				SaveDirtyModels();
			}
			userDataModel?.UpdateLogic(dt);
			itemDataModel?.UpdateItemEvents();
			mSaveToDiskTimer += dt;
			if (mSaveToDiskTimer >= mSaveToDiskInterval && mSaveDirty)
			{
				SaveToDiskForce();
			}
		}
	}

	public void OnApplicationPause()
	{
		if (mbInit)
		{
			SaveToDiskForce();
			itemDataModel?.SendItemGetEvent();
		}
	}

	public void JudgeHardCloseActivity()
	{
		if (mbInit)
		{
			bingoModel.JudgeHardCloseActivity();
			dailyChallengeModel.JudgeHardCloseActivity();
			doubleConsumptionModel.JudgeHardCloseActivity();
			pigBankModel.JudgeHardCloseActivity();
			pigBankModel.JudgeHardCloseSkin();
			turntableModel.JudgeHardCloseActivity();
			dailyGiftModel.JudgeHardCloseActivity();
			dailyGiftModelV2.JudgeHardCloseActivity();
			linkGiftModel.JudgeHardCloseActivity();
			diyGiftModel.JudgeHardCloseActivity();
			shopDataModel.JudgeHardCloseActivity_DayWeekMonthGift();
			diamondPassModel.JudgeHardCloseActivity();
			taskPassModel.JudgeHardCloseActivity();
			taskPassModelV2.JudgeHardCloseActivity();
			taskThemePassModel.JudgeHardCloseActivity();
			taskThemePassModelV2.JudgeHardCloseActivity();
			adPassModel.JudgeHardCloseActivity();
			festivalGiftModel.JudgeHardCloseActivity();
			festivalGiftV2Model.JudgeHardCloseActivity();
			treasureHuntingModel.JudgeHardCloseActivity();
			newTreasureHuntingModel.JudgeHardCloseActivity();
			newTreasureHuntingV2Model.JudgeHardCloseActivity();
			mainRaceModel.JudgeHardCloseActivity();
			surpriseGiftModel.JudgeHardCloseActivity();
			bubbleDiscountModel.JudgeHardCloseActivity();
			cardCollectionModel.JudgeHardCloseActivity();
			cardCollectionV2Model.JudgeHardCloseActivity();
			cardCollectionV3Model.JudgeHardCloseActivity();
			limitTimeCardCollectionModel.JudgeHardCloseActivity();
			highValueGoodsModel.JudgeHardCloseActivity();
			independentMergeModel.JudgeHardCloseActivity();
			chefLikeModel.JudgeHardCloseActivity();
			mergeFishingModel.JudgeHardCloseActivity();
			sceneActivityModel.JudgeHardCloseActivity();
			chessboardBackgroundThemeModel.JudgeHardCloseActivity();
			championshipModel.JudgeHardCloseActivity();
			energyPassModel.JudgeHardCloseActivity();
			IndependentPassModel.JudgeHardCloseActivity();
			raceWinnerModel.JudgeHardCloseActivity();
			cardTaskChainModel.JudgeHardCloseActivity();
			ccThreeChooseOneGiftModel.JudgeHardCloseActivity();
			miniGameStageModel.JudgeHardCloseActivity();
			taskChainModel.JudgeHardCloseActivity();
			luckyHuntModel.JudgeHardCloseActivity();
			limitTimeOrderModel.JudgeHardCloseActivity();
			onePlusNGiftModel.JudgeHardCloseActivity();
			mergeFishingV2Model.JudgeHardCloseActivity();
			mergeFishingV2GiftModel.JudgeHardCloseActivity();
			feverFlambeModel.JudgeHardCloseActivity();
			feverRelayModel.JudgeHardCloseActivity();
			feverFlambeV3Model.JudgeHardCloseActivity();
			feverFlambeV2Model.JudgeHardCloseActivity();
			feverRelayV2Model.JudgeHardCloseActivity();
			feverFlambeStageModel.JudgeHardCloseActivity();
			treasureCraftingModel.JudgeHardCloseActivity();
			energyDiscountTicketModel.JudgeHardCloseActivity();
			newRaceModel.JudgeHardCloseActivity();
			fiveRaceModel.JudgeHardCloseActivity();
			timeLimited8MultModel.JudgeHardCloseActivity();
			puzzleModel.JudgeHardCloseActivity();
			independentStageMergeModel.JudgeHardCloseActivity();
			timelimitMultModel.JudgeHardCloseActivity();
			surprisedBoxModel.JudgeHardCloseActivity();
			gameLevelSortModel.JudgeHardCloseActivity();
			taskSevenDayModel.JudgeHardCloseActivity();
			raceVsModel.JudgeHardCloseActivity();
			race1v1CodeModel.JudgeHardCloseActivity();
			raceVsV2Model.JudgeHardCloseActivity();
			machineQuickHintModel.JudgeHardCloseActivity();
			independentBasicModel.JudgeHardCloseActivity();
			cardCollectionPayModel.JudgeHardCloseActivity();
			idnStageBasicModel.JudgeHardCloseActivity();
			idnStageModel.JudgeHardCloseActivity();
			DiscoViewModel.JudgeHardCloseActivity();
			luckyWheelModel.JudgeHardCloseActivity();
			peakOrderModel.JudgeHardCloseActivity();
			independentMiningModel.JudgeHardCloseActivity();
			GauntletTreasureModel.JudgeHardCloseActivity();
			BoostRaceTaskChainModel.JudgeHardCloseActivity();
			independentFarmModel.JudgeHardCloseActivity();
			threeChooseOneEnergyGift2Model.JudgeHardCloseActivity();
			playerLevelGiftV2Model.JudgeHardCloseActivitySkin();
			playerLevelGiftV2Model.JudgeHardCloseActivity();
			fireHelperModel.JudgeHardCloseActivity();
			orderReturnBackModel.JudgeHardCloseActivity();
			cardCollectionDoubleGiftModel.JudgeHardCloseActivity();
			ccNChoose1CardGiftModel.JudgeHardCloseActivity();
			energyBackUpModel.JudgeHardCloseActivity();
			diamondChainGiftModel.JudgeHardCloseActivity();
			energyBackUpModel.JudgeHardCloseActivitySkin();
			airPlaneModel.JudgeHardCloseActivity();
			gemsPathModel.JudgeHardCloseActivity();
			ccWildCardGiftPackModel.JudgeHardCloseActivity();
			day3PackModel.JudgeHardCloseActivity();
			day3PackModel.JudgeHardCloseActivitySkin();
			Temporary.Bubble.JudgeSoftAndHardCloseActivity();
			newTreasureHuntingGiftPackModel.JudgeHardCloseActivity();
			cookFrenzyModel.JudgeHardCloseActivity();
		}
	}

	public void UpdateConstConfig()
	{
		AssignIPThemeModel.Instance.UpdateConstConfig();
		MonoSingleton<PlayerStateManager>.Instance.RefreshFeatureEnabled();
		MonoSingleton<PlayerStatePushGiftManager>.Instance.RefreshFeatureEnabled();
	}

	public void OnApplicationResume()
	{
		_ = mbInit;
	}

	public void Destroy()
	{
		_instance = null;
		Singleton<ShopManager>.Instance.ClearIapSuccessRewardRegistry();
		ActivityOpenResult.Clear();
		MonoSingleton<PlayerStatePushGiftManager>.Instance.ClearHandlers();
	}

	public void ReloadModel()
	{
		if (mbInit)
		{
			if (!ABTest2CanReload)
			{
				mReloadModelInit = true;
				return;
			}
			ProductModel.Instance.ReloadModel();
			MonoSingleton<GuideManager>.Instance.ReloadModel();
			MonoSingleton<GuideWeakManager>.Instance.ReloadModel();
			commonFieldStorageModel.ReloadModel();
			userDataModel.ReloadModel();
			userTagModel.ReloadModel();
			whiteListModel.ReloadModel();
			dailyTriggerModel.ReloadModel();
			userGameDataModel.ReloadModel();
			playerLevelModel.ReloadModel();
			userHeadModel.ReloadModel();
			restaurantLevelModel.ReloadModel();
			gameOrdersModel.ReloadModel();
			raceWinnerOrderModel.ReloadModel();
			limitTimeOrderModel.ReloadModel();
			returnUserOrderModel.ReloadModel();
			orderWaveRewardModel.ReloadModel();
			taskBuildModel.ReloadModel();
			starTreasureBoxModel.ReloadModel();
			characterModel.ReloadModel();
			itemDataModel.ReloadModel();
			gameLevelModel.ReloadModel();
			linkGiftModel.ReloadModel();
			bagCircumModel.ReloadModel();
			bagGeneratorStorageModel.ReloadModel();
			bingoModel.ReloadModel();
			dailyGiftModel.ReloadModel();
			dailyGiftModelV2.ReloadModel();
			weekPassModel.ReloadModel();
			diamondDiscountTicketModel.ReloadModel();
			diamondDiscountTicketV2Model.ReloadModel();
			diamondIceModel.ReloadModel();
			link2FacebookModel.ReloadModel();
			link2InstagramModel.ReloadModel();
			shopDataModel.ReloadModel();
			townModel.ReloadModel();
			mailLocalModel.ReloadModel();
			mailModel.ReloadModel();
			PopupModel.ReloadModel();
			roleClothModel.ReloadModel();
			analyticsPropertiesModel.ReloadModel();
			analyticsModel.ReloadModel();
			pushNoticeModel.ReloadModel();
			illustratedDataModel.ReloadModel();
			signInModel.ReloadModel();
			facebookModel.ReloadModel();
			taskPassModel.ReloadModel();
			taskPassModelV2.ReloadModel();
			taskThemePassModel.ReloadModel();
			taskThemePassModelV2.ReloadModel();
			dailyChallengeModel.ReloadModel();
			adPassModel.ReloadModel();
			userDataModel.ReloadModel();
			fiveStarRateModel.ReloadModel();
			diamondPassModel.ReloadModel();
			adGiftModel.ReloadModel();
			festivalGiftModel.ReloadModel();
			festivalGiftV2Model.ReloadModel();
			pigBankModel.ReloadModel();
			bagGiftModel.ReloadModel();
			diyGiftModel.ReloadModel();
			turntableModel.ReloadModel();
			doubleConsumptionModel.ReloadModel();
			goodsCompensateModel.ReloadModel();
			generatorStopReissueModel.ReloadModel();
			restaurantLevelModel.ReloadModel();
			playerLevelModel.ReloadModel();
			starTreasureBoxModel.ReloadModel();
			orderWaveRewardModel.ReloadModel();
			taskBuildModel.ReloadModel();
			orderWaveRewardModel.ReloadModel();
			shopDataModel.ReloadModel();
			threeChooseOneEnergyGiftModel.ReloadModel();
			orderWaveRewardRecordModel.ReloadModel();
			playerLevelGiftModel.ReloadModel();
			playerLevelGiftV2Model.ReloadModel();
			treasureHuntingModel.ReloadModel();
			newTreasureHuntingModel.ReloadModel();
			newTreasureHuntingV2Model.ReloadModel();
			replaceGiftModel.ReloadModel();
			cardCollectionModel.ReloadModel();
			cardCollectionV2Model.ReloadModel();
			cardCollectionV3Model.ReloadModel();
			cardCollectionGiftModel.ReloadModel();
			cardCollectionWildCardModel.ReloadModel();
			cardCollectionWildCardV2Model.ReloadModel();
			ccWildCardGiftPackModel.ReloadModel();
			cardCollectionTempBagModel.ReloadModel();
			highValueGoodsModel.ReloadModel();
			chefLikeModel.ReloadModel();
			sceneActivityModel.ReloadModel();
			playerStateModel.ReloadModel();
			playerStatePushGiftModel.ReloadModel();
			chessboardBackgroundThemeModel.ReloadModel();
			cardTaskChainModel.ReloadModel();
			mergeFishingModel.ReloadModel();
			mergeFishingGameModel.ReloadModel();
			ccThreeChooseOneGiftModel.ReloadModel();
			storyVideoModel.ReloadModel();
			mgCookingModel.ReloadModel();
			miniGameLevelModel.ReloadModel();
			taskChainModel.ReloadModel();
			luckyHuntModel.ReloadModel();
			onePlusNGiftModel.ReloadModel();
			energyGiftModel.ReloadModel();
			mergeFishingV2Model.ReloadModel();
			mergeFishingV2GameModel.ReloadModel();
			mergeFishingV2GiftModel.ReloadModel();
			newRaceModel.ReloadModel();
			fiveRaceModel.ReloadModel();
			npcModel.ReloadModel();
			feverFlambeModel.ReloadModel();
			feverRelayModel.ReloadModel();
			feverFlambeV3Model.ReloadModel();
			feverFlambeV2Model.ReloadModel();
			feverRelayV2Model.ReloadModel();
			feverFlambeStageModel.ReloadModel();
			adCompensationModel.ReloadModel();
			iceGiftModel.ReloadModel();
			energyDiscountTicketModel.ReloadModel();
			versionUpdateModel.ReloadModel();
			temporaryBubbleModel.ReloadModel();
			taskSevenDayModel.ReloadModel();
			raceVsModel.ReloadModel();
			race1v1CodeModel.ReloadModel();
			raceVsV2Model.ReloadModel();
			cardCollectionPayModel.ReloadModel();
			luckyWheelModel.ReloadModel();
			peakOrderModel.ReloadModel();
			ShopDailyLimitGiftModel.ReloadModel();
			adStrateryModel.ReloadModel();
			fireHelperModel.ReloadModel();
			orderReturnBackModel.ReloadModel();
			cardCollectionDoubleGiftModel.ReloadModel();
			ccNChoose1CardGiftModel.ReloadModel();
			energyBackUpModel.ReloadModel();
			diamondChainGiftModel.ReloadModel();
			day3PackModel.ReloadModel();
			airPlaneModel.ReloadModel();
			gemsPathModel.ReloadModel();
			cookFrenzyModel.ReloadModel();
			weakUpdateModel.ReloadModel();
			Singleton<PopupManager>.Instance.ReloadData();
			mReloadModelInit = true;
			Singleton<GameLevelManager>.Instance.InitBagList();
			MonoSingleton<DynamicOrdersManager>.Instance.UpdateABTestConfig_DynamicOrderConfig();
			MonoSingleton<DynamicOrdersManager_mergeInn>.Instance.ResetDyanmicOrderConfig();
			MonoSingleton<LimitTimeRecycleOrderManager>.Instance.ResetConfig();
			mgMakeCakeModel.ReloadModel();
		}
	}

	private void SaveDirtyModels()
	{
		for (int i = 0; i < mTimingSaveModel.Count; i++)
		{
			BaseModel baseModel = mTimingSaveModel[i];
			if (baseModel.SaveData)
			{
				baseModel?.SaveDataToDB();
				baseModel.SaveData = false;
			}
		}
	}

	public void PushTimingSaveModel(BaseModel baseModel)
	{
		if (!mTimingSaveModel.Contains(baseModel))
		{
			mTimingSaveModel.Add(baseModel);
		}
	}
}
