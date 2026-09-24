using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using TLF;
using UnityEngine;
using UnityEngine.UI;

public class GameLevelManager : Singleton<GameLevelManager>
{
	public struct ShowWeakGuideTimeInterval
	{
		public int minOrderNum;

		public int maxOrderNum;

		public int timeInterval;
	}

	public static int Rows = 9;

	public static int Columns = 7;

	public static bool GeneratorAnimation = true;

	public static bool MachineAnimation = true;

	public static bool BubbleBreak = false;

	public static int[] PlayDownEffecGoods = new int[2] { 300106, 200786 };

	public static int[] PlaySpecialProduceGoods = new int[1] { 300096 };

	public static int[] PlayIdleEffectGoods = new int[2] { 300098, 300099 };

	private Dictionary<int, IGoodsBaseVo> goodsBaseVoDic = new Dictionary<int, IGoodsBaseVo>();

	private Dictionary<int, Dictionary<int, IGoodsBaseVo>> goodsBaseSeriesDic;

	private Dictionary<int, List<IGoodsBaseVo>> goodsBaseSeriesList;

	private Dictionary<int, IGoodsBaseVo> mMaxGoodsConfigDic;

	private Dictionary<int, GameGoodsVo> levelMap;

	private Stack<int> mDetailViews;

	private Dictionary<int, IGoodsBaseVo> mMaxLvGoodsDic;

	private Dictionary<int, IGoodsBaseVo> mMinGeneratorDic;

	private Dictionary<int, IGoodsBaseVo> mMinMachineDic;

	private Dictionary<int, int> mGoodsMakingTimeDic;

	private Dictionary<int, float> mGoodsMakingPowerDic;

	private Dictionary<int, float> mGoodsMakingClicksDic;

	private Dictionary<int, int> mDerivativeGoodsDic;

	private Dictionary<int, IGoodsBaseVo> _derivativeGoodsConfigDic;

	private Dictionary<int, List<int>> mGoodsMaterialSeriesDic;

	private Dictionary<int, List<int>> mGoodsInstrumentSeriesDic;

	private Dictionary<int, List<int>> mGoodsIncludeSourceInstrumentSeriesDic;

	private Dictionary<int, List<int>> mGoodsGeneratorDic;

	private Dictionary<int, List<int>> mGoodsSeriesGeneratorDic;

	private Dictionary<int, List<int>> mGeneratorProduceDic;

	private Dictionary<int, List<int>> mGeneratorSeriesProduceDic;

	private Dictionary<int, List<int>> mGeneratorSeriesLinealProduces;

	private Dictionary<int, Dictionary<int, int>> mGoodsMakeRelevantSeriesLevelDic;

	private Dictionary<int, int> mSpecialCookingDic;

	private Dictionary<int, int> mOwnerGoodsDic;

	private Dictionary<int, int> mChessboardOwnerGoodsDic;

	private Dictionary<int, Dictionary<int, IDynamicBoxGoodsVo>> mDynamicGoodsDic;

	private Dictionary<int, List<IDynamicBoxGoodsVo>> mDynamicGoodsByTypeDic;

	private Dictionary<int, bool> mCanRepeatUseInstrumentSeriesDic;

	private List<GameGoodsVo> mOwnerMachines;

	private List<GameGoodsVo> mOwnerCreators;

	private HashSet<int> mOwnerMachinesBySeries = new HashSet<int>();

	private HashSet<int> mOwnerCreatorsBySeries = new HashSet<int>();

	private List<int> mSpecialGoodsSeries;

	private List<int> mSpecialDetailSeries;

	private List<int> mAnalyticGoodsIDs;

	private Camera uiCamera;

	private int mBubbleConversionID = -1;

	private int mBubbleLife = 60;

	private int mMergeHintInterval = 5;

	private int mBubbleGoodsLimit = 2;

	private int mCurrentBubbleNum;

	private int mCurrentActivityBubbleNum;

	private int mBagMaximum;

	private int mActivityBagMaximum;

	private int mSellAlertLevel = 6;

	private int mImmediatelyHintOrderId;

	private float mPowerRecoveryRate;

	private float mPowerRecoveryTime;

	private int mImmediatelyHintStartOrderId;

	private int mShowAdDiamondMin = 6;

	public int ExtraDropCostEnergy = 100;

	public int ExtraDropLimit = 100;

	public bool ShowDebug;

	public bool BubbleDebug;

	public bool BubbleDebug2;

	public bool IsSendGetEvent;

	public bool IsPreloadView;

	private bool IsPreloadGridRes;

	private int mBubbleBreakOpenType;

	private GameGoodsVo mCurrentOpenBox;

	private List<IBagVo> mBagUnlock_lv = new List<IBagVo>();

	private List<IBagVo> mBagUnlock_coin = new List<IBagVo>();

	private Dictionary<int, bool> mGeneratorSeries;

	private Dictionary<int, bool> mGeneratorSeries_initiative;

	private Dictionary<int, bool> mGeneratorSeries_passive;

	private Dictionary<int, bool> mGeneratorSeries_initiative_passive;

	private HashSet<int> mMachineSeries;

	public Dictionary<int, int> gridUnlockDic = new Dictionary<int, int>();

	private ResLoader mGoodsIconResloader;

	public GameLevelViewLogic mGameLevelViewLogic;

	public List<ShowWeakGuideTimeInterval> mShowWeakGuideTimeIntervalList = new List<ShowWeakGuideTimeInterval>();

	private List<BaseData3VO> mBubbleConversions;

	private string lastGoodsMassLayerLvStr = string.Empty;

	private int[] lastLvLayer;

	private List<GameGoodsVo> result = new List<GameGoodsVo>();

	private const int goodsLevelLayer1 = 15;

	private const int goodsLevelLayer2 = 35;

	private Dictionary<int, List<MakeRecipeVO>> mMachineMakeRecipes;

	public bool IsCloseFromBagView;

	private static string mGoodsLockRequestId = "";

	private static string mGoodsLockFrom = "";

	private static int mGoodsLockGoodsId = 0;

	private static bool mGoodsLockHasOperation = false;

	private static List<int> mGoodsLockTargetSeries = null;

	private static int mGoodsLockTargetGridId = -1;

	private static Stopwatch mGoodsLockStopwatch = null;

	public int BubbleConversionID => mBubbleConversionID;

	public BaseData3VO BubbleConversion
	{
		get
		{
			if (mBubbleConversions == null || mBubbleConversions.Count == 0)
			{
				return null;
			}
			List<int> list = new List<int>();
			List<int> list2 = new List<int>();
			for (int i = 0; i < mBubbleConversions.Count; i++)
			{
				list.Add(i);
				list2.Add(mBubbleConversions[i].type);
			}
			int randomValue = GameLevelDefine.GetRandomValue(list, list2);
			if (randomValue > -1 && mBubbleConversions.Count > randomValue)
			{
				return mBubbleConversions[randomValue];
			}
			return null;
		}
	}

	public int BubbleLife => mBubbleLife;

	public int MergeHintInterval => mMergeHintInterval;

	public int BubbleGoodsLimit => mBubbleGoodsLimit;

	public int BubbleBreakOpenType => mBubbleBreakOpenType;

	public int CurrentBubbleNum
	{
		get
		{
			return mCurrentBubbleNum;
		}
		set
		{
			mCurrentBubbleNum = value;
			if (mCurrentBubbleNum < 0)
			{
				mCurrentBubbleNum = 0;
			}
		}
	}

	public int BagMaximum
	{
		get
		{
			return mBagMaximum;
		}
		set
		{
			mBagMaximum = value;
		}
	}

	public int ActivityBagMaximum => mActivityBagMaximum;

	public int ImmediatelyHintOrderId => mImmediatelyHintOrderId;

	public int ImmediatelyHintStartOrderId => mImmediatelyHintStartOrderId;

	public int ShowAdDiamondMin => mShowAdDiamondMin;

	public Camera UICamera
	{
		get
		{
			if ((Object)(object)uiCamera == (Object)null)
			{
				uiCamera = GameObject.Find("숋끳犚愌啙7Î反").GetComponent<Camera>();
			}
			return uiCamera;
		}
	}

	public GameGoodsVo CurrentOpenBox
	{
		get
		{
			return mCurrentOpenBox;
		}
		set
		{
			mCurrentOpenBox = value;
		}
	}

	public Dictionary<int, IGoodsBaseVo> MaxGoodsConfigDic => mMaxGoodsConfigDic;

	public Dictionary<int, int> OwnerGoodsDic => mOwnerGoodsDic;

	public Dictionary<int, int> ChessboardOwnerGoodsDic => mChessboardOwnerGoodsDic;

	public Dictionary<int, List<int>> GetGeneratorSeriesDic => mGoodsSeriesGeneratorDic;

	private GameLevelManager()
	{
	}

	public void InitShowWeakTimeInterval()
	{
		string gameInitValue = StaticDataBase<StaticDataManager>.GetInstance().GetGameInitValue("숞끔垰攟楕>b卡숟끑斞椠慝6\u009a厙睮t4끲x\ud833俄");
		if (gameInitValue.IsNullOrEmpty())
		{
			return;
		}
		string[] array = gameInitValue.Split(';');
		foreach (string text in array)
		{
			if (!text.IsNullOrEmpty())
			{
				string[] array2 = text.Split('|');
				if (array2.Length == 3)
				{
					ShowWeakGuideTimeInterval item = new ShowWeakGuideTimeInterval
					{
						timeInterval = array2[0].ToInt(),
						minOrderNum = array2[1].ToInt(),
						maxOrderNum = array2[2].ToInt()
					};
					mShowWeakGuideTimeIntervalList.Add(item);
				}
			}
		}
	}

	public void Init()
	{
		InitConfig();
		InitGridLock();
		InitDynamicBoxConfig();
		InitMachineConfig();
		ResetPlayTag();
		EventManager.GetInstance().AddEventListener(100197, ResetPlayTag);
	}

	private void InitConfig()
	{
		string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏咻爉托7V单灡n4끦q夢䣅");
		mBubbleConversionID = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏咻爉托7V单숌끔涪㈍慛 º厹");
		mBubbleConversions = BaseData3VO.GetBaseData3VOList(configConstant);
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䲻椉托76匵渶䅽");
		mBubbleLife = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숍끟榫渎浑\u001aª厩숞끳皷感瑑 Þ叝뻰");
		mMergeHintInterval = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䞻漉䉘7\"匡숦끞榪琧潝?ª厩");
		if (configConstant.IsNotNullAndEmpty())
		{
			mBubbleGoodsLimit = configConstant.ToInt();
		}
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䊻爉䉘7\u000e匍숥끛溲否敄7¾厽ꃦû赴");
		if (configConstant.IsNotNullAndEmpty())
		{
			mBubbleBreakOpenType = configConstant.ToInt();
		}
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숧끛榾洨䉕*ª厩嬧乵");
		mBagMaximum = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숃끙璭礄䅂;Ö叕숣끛璾椤䉚;Ö叕匥橬ā试뙭");
		mActivityBagMaximum = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숆끟枵吇獝<¢厡숦끊斪氧楑$\u009a厙");
		mSellAlertLevel = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숝끒䒶椞獵6\u0016匕숄끗榶清慐\u001fª厩");
		mShowAdDiamondMin = configConstant.ToInt();
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("수끔劼攙敓+N卍녣䝯㘂\0逩\ud970");
		if (configConstant != null)
		{
			string[] array = configConstant.Split('|');
			if (array.Length == 2)
			{
				mPowerRecoveryTime = array[1].ToInt();
				mPowerRecoveryRate = 1f / mPowerRecoveryTime;
			}
		}
		goodsBaseVoDic = new Dictionary<int, IGoodsBaseVo>();
		goodsBaseSeriesDic = new Dictionary<int, Dictionary<int, IGoodsBaseVo>>();
		goodsBaseSeriesList = new Dictionary<int, List<IGoodsBaseVo>>();
		mMaxGoodsConfigDic = new Dictionary<int, IGoodsBaseVo>();
		List<IGoodsBaseVo> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseList.list;
		for (int i = 0; i < list.Count; i++)
		{
			IGoodsBaseVo goodsBaseVo = list[i];
			if (!goodsBaseVoDic.ContainsKey(goodsBaseVo.goodsID))
			{
				goodsBaseVoDic.Add(goodsBaseVo.goodsID, goodsBaseVo);
			}
			if (goodsBaseVo.series <= 0 || goodsBaseVo.level <= 0)
			{
				continue;
			}
			if (goodsBaseSeriesDic.ContainsKey(goodsBaseVo.series))
			{
				if (!goodsBaseSeriesDic[goodsBaseVo.series].ContainsKey(goodsBaseVo.level))
				{
					goodsBaseSeriesDic[goodsBaseVo.series].Add(goodsBaseVo.level, goodsBaseVo);
				}
			}
			else
			{
				Dictionary<int, IGoodsBaseVo> dictionary = new Dictionary<int, IGoodsBaseVo>();
				dictionary.Add(goodsBaseVo.level, goodsBaseVo);
				goodsBaseSeriesDic.Add(goodsBaseVo.series, dictionary);
			}
			if (!goodsBaseSeriesList.ContainsKey(goodsBaseVo.series))
			{
				goodsBaseSeriesList.Add(goodsBaseVo.series, new List<IGoodsBaseVo>());
			}
			goodsBaseSeriesList[goodsBaseVo.series].Add(goodsBaseVo);
			if (mMaxGoodsConfigDic.ContainsKey(goodsBaseVo.series))
			{
				if (mMaxGoodsConfigDic[goodsBaseVo.series].level < goodsBaseVo.level)
				{
					mMaxGoodsConfigDic[goodsBaseVo.series] = goodsBaseVo;
				}
			}
			else
			{
				mMaxGoodsConfigDic.Add(goodsBaseVo.series, goodsBaseVo);
			}
		}
		mSpecialCookingDic = new Dictionary<int, int>();
		ISpecialGoodsCooking specialGoodsCooking = null;
		List<IGoodsCookingVO> list2 = StaticDataBase<StaticDataManager>.GetInstance().GoodsCookingList.list;
		for (int j = 0; j < list2.Count; j++)
		{
			if (list2[j] == null || list2[j].specialType <= 0)
			{
				continue;
			}
			specialGoodsCooking = StaticDataBase<StaticDataManager>.GetInstance().SpecialGoodsCookings.GetItem(list2[j].goodsID);
			if (specialGoodsCooking == null)
			{
				continue;
			}
			List<BaseData2VO> produceVos = specialGoodsCooking.GetProduceVos();
			for (int k = 0; k < produceVos.Count; k++)
			{
				if (!mSpecialCookingDic.ContainsKey(produceVos[k].id))
				{
					mSpecialCookingDic.Add(produceVos[k].id, list2[j].goodsID);
				}
			}
		}
		InitGeneratorCache();
	}

	public void InitGridLock()
	{
		List<IGameInitVo> list = StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list;
		gridUnlockDic.Clear();
		for (int i = 0; i < list.Count; i++)
		{
			if (!gridUnlockDic.ContainsKey(list[i].unlockLv))
			{
				gridUnlockDic.Add(list[i].unlockLv, 1);
			}
		}
	}

	public void ReloadConfig()
	{
		string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䞻漉䉘7\"匡숦끞榪琧潝?ª厩");
		if (configConstant.IsNotNullAndEmpty())
		{
			mBubbleGoodsLimit = configConstant.ToInt();
		}
		configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䊻爉䉘7\u000e匍숥끛溲否敄7¾厽ꃦû赴");
		if (configConstant.IsNotNullAndEmpty())
		{
			mBubbleBreakOpenType = configConstant.ToInt();
		}
	}

	public void InitDynamicBoxConfig()
	{
		mDynamicGoodsDic = new Dictionary<int, Dictionary<int, IDynamicBoxGoodsVo>>();
		mDynamicGoodsByTypeDic = new Dictionary<int, List<IDynamicBoxGoodsVo>>();
		List<IDynamicBoxGoodsVo> list = StaticDataBase<StaticDataManager>.GetInstance().DynamicBoxGoodsList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (mDynamicGoodsDic.ContainsKey(list[i].dropType))
			{
				if (!mDynamicGoodsDic[list[i].dropType].ContainsKey(list[i].goodsID))
				{
					mDynamicGoodsDic[list[i].dropType].Add(list[i].goodsID, list[i]);
				}
			}
			else
			{
				Dictionary<int, IDynamicBoxGoodsVo> dictionary = new Dictionary<int, IDynamicBoxGoodsVo>();
				dictionary.Add(list[i].goodsID, list[i]);
				mDynamicGoodsDic.Add(list[i].dropType, dictionary);
			}
			if (!mDynamicGoodsByTypeDic.ContainsKey(list[i].dropType))
			{
				mDynamicGoodsByTypeDic.Add(list[i].dropType, new List<IDynamicBoxGoodsVo>());
			}
			mDynamicGoodsByTypeDic[list[i].dropType].Add(list[i]);
		}
	}

	private void ResetPlayTag()
	{
		ObjectManager.GetInstance().userTagModel.GetEnergyTagConfig();
	}

	public void InitCacheData()
	{
		RefreshMaxLvGoods();
		mGoodsMakingTimeDic = new Dictionary<int, int>();
		mGoodsMakingPowerDic = new Dictionary<int, float>();
		mGoodsMakingClicksDic = new Dictionary<int, float>();
		mGoodsMaterialSeriesDic = new Dictionary<int, List<int>>();
		mGoodsInstrumentSeriesDic = new Dictionary<int, List<int>>();
		mGoodsIncludeSourceInstrumentSeriesDic = new Dictionary<int, List<int>>();
		mGoodsGeneratorDic = new Dictionary<int, List<int>>();
		mGoodsSeriesGeneratorDic = new Dictionary<int, List<int>>();
		mGeneratorProduceDic = new Dictionary<int, List<int>>();
		mGeneratorSeriesProduceDic = new Dictionary<int, List<int>>();
		mGeneratorSeriesLinealProduces = new Dictionary<int, List<int>>();
		mSpecialGoodsSeries = new List<int>();
		mSpecialDetailSeries = new List<int>();
		mAnalyticGoodsIDs = new List<int>();
		mCanRepeatUseInstrumentSeriesDic = new Dictionary<int, bool>();
		List<IGoodsBaseVo> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseList.list;
		for (int i = 0; i < list.Count; i++)
		{
			IGoodsBaseVo goodsBaseVo = list[i];
			switch (goodsBaseVo.type)
			{
			case 8:
				mCanRepeatUseInstrumentSeriesDic[goodsBaseVo.series] = true;
				break;
			case 1:
			{
				int goodsMakingTime = GetGoodsMakingTime(goodsBaseVo);
				mGoodsMakingTimeDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingTime);
				float goodsMakingFloatPower = GetGoodsMakingFloatPower(goodsBaseVo);
				mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingFloatPower);
				float goodsMakingFloatClicks = GetGoodsMakingFloatClicks(goodsBaseVo);
				mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingFloatClicks);
				List<int> materialSeriesByGoodsId = GetMaterialSeriesByGoodsId(goodsBaseVo.goodsID);
				mGoodsMaterialSeriesDic.TryChangeValue(goodsBaseVo.goodsID, materialSeriesByGoodsId);
				List<int> instrumentSeriesByGoodsId = GetInstrumentSeriesByGoodsId(goodsBaseVo.goodsID);
				mGoodsInstrumentSeriesDic.TryChangeValue(goodsBaseVo.goodsID, instrumentSeriesByGoodsId);
				List<int> instrumentSeriesByGoodsIdIncludeSource = GetInstrumentSeriesByGoodsIdIncludeSource(goodsBaseVo.goodsID);
				mGoodsIncludeSourceInstrumentSeriesDic.TryChangeValue(goodsBaseVo.goodsID, instrumentSeriesByGoodsIdIncludeSource);
				List<int> generatorSeriesByGoodsId = GetGeneratorSeriesByGoodsId(goodsBaseVo.goodsID);
				mGoodsGeneratorDic.TryChangeValue(goodsBaseVo.goodsID, generatorSeriesByGoodsId);
				List<int> list5 = new List<int>();
				for (int m = 0; m < generatorSeriesByGoodsId.Count; m++)
				{
					list5.Add(generatorSeriesByGoodsId[m]);
				}
				if (mGoodsSeriesGeneratorDic.ContainsKey(goodsBaseVo.series))
				{
					List<int> list6 = mGoodsSeriesGeneratorDic[goodsBaseVo.series];
					if (list6 == null)
					{
						list6 = new List<int>();
					}
					for (int n = 0; n < list5.Count; n++)
					{
						if (!list6.Contains(list5[n]))
						{
							list6.Add(list5[n]);
						}
					}
					mGoodsSeriesGeneratorDic[goodsBaseVo.series] = list6;
				}
				else
				{
					mGoodsSeriesGeneratorDic.Add(goodsBaseVo.series, list5);
				}
				break;
			}
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			{
				List<int> produceSeriesByGoodsId = GetProduceSeriesByGoodsId(goodsBaseVo.goodsID);
				mGeneratorProduceDic.TryChangeValue(goodsBaseVo.goodsID, produceSeriesByGoodsId);
				List<int> list2 = new List<int>();
				for (int j = 0; j < produceSeriesByGoodsId.Count; j++)
				{
					list2.Add(produceSeriesByGoodsId[j]);
				}
				if (mGeneratorSeriesProduceDic.ContainsKey(goodsBaseVo.series))
				{
					List<int> list3 = mGeneratorSeriesProduceDic[goodsBaseVo.series];
					if (list3 == null)
					{
						list3 = new List<int>();
					}
					for (int k = 0; k < list2.Count; k++)
					{
						if (!list3.Contains(list2[k]))
						{
							list3.Add(list2[k]);
						}
					}
					mGeneratorSeriesProduceDic[goodsBaseVo.series] = list3;
				}
				else
				{
					mGeneratorSeriesProduceDic.Add(goodsBaseVo.series, list2);
				}
				List<int> linealProduceByGenerator = GameLevelDefine.GetLinealProduceByGenerator(goodsBaseVo.goodsID);
				if (mGeneratorSeriesLinealProduces.ContainsKey(goodsBaseVo.series))
				{
					List<int> list4 = mGeneratorSeriesLinealProduces[goodsBaseVo.series];
					if (list4 == null)
					{
						list4 = new List<int>();
					}
					for (int l = 0; l < linealProduceByGenerator.Count; l++)
					{
						if (!list4.Contains(linealProduceByGenerator[l]))
						{
							list4.Add(linealProduceByGenerator[l]);
						}
					}
					mGeneratorSeriesLinealProduces[goodsBaseVo.series] = list4;
				}
				else
				{
					mGeneratorSeriesLinealProduces.Add(goodsBaseVo.series, linealProduceByGenerator);
				}
				break;
			}
			case 9:
				if (!mSpecialGoodsSeries.Contains(goodsBaseVo.series))
				{
					IGoodsCollectVo goodsCollectVoById = GetGoodsCollectVoById(goodsBaseVo.goodsID);
					if (goodsCollectVoById != null && IGoodsBaseVo.IsLimitedGoods(goodsCollectVoById.itemId))
					{
						mSpecialGoodsSeries.Add(goodsBaseVo.series);
					}
				}
				if (!mSpecialDetailSeries.Contains(goodsBaseVo.series))
				{
					IGoodsCollectVo goodsCollectVoById2 = GetGoodsCollectVoById(goodsBaseVo.goodsID);
					if (goodsCollectVoById2 != null && (goodsCollectVoById2.itemId == 1005 || goodsCollectVoById2.itemId == 1012 || goodsCollectVoById2.itemId == 1013 || goodsCollectVoById2.itemId == 1026 || goodsCollectVoById2.itemId == 1027))
					{
						mSpecialDetailSeries.Add(goodsBaseVo.series);
					}
				}
				break;
			case 15:
			case 16:
			case 23:
			case 24:
			case 27:
			case 29:
				if (!mSpecialGoodsSeries.Contains(goodsBaseVo.series))
				{
					mSpecialGoodsSeries.Add(goodsBaseVo.series);
				}
				if (!mSpecialDetailSeries.Contains(goodsBaseVo.series))
				{
					mSpecialDetailSeries.Add(goodsBaseVo.series);
				}
				break;
			}
		}
		if (!mSpecialGoodsSeries.Contains(6001))
		{
			mSpecialGoodsSeries.Add(6001);
		}
		if (!mSpecialDetailSeries.Contains(6001))
		{
			mSpecialDetailSeries.Add(6001);
		}
		if (!mSpecialGoodsSeries.Contains(6002))
		{
			mSpecialGoodsSeries.Add(6002);
		}
		if (!mSpecialDetailSeries.Contains(6002))
		{
			mSpecialDetailSeries.Add(6002);
		}
		if (!mSpecialGoodsSeries.Contains(6003))
		{
			mSpecialGoodsSeries.Add(6003);
		}
		if (!mSpecialDetailSeries.Contains(6003))
		{
			mSpecialDetailSeries.Add(6003);
		}
		List<ILevelAnalyticGoodsVo> list7 = StaticDataBase<StaticDataManager>.GetInstance().analyticGoods.list;
		for (int num = 0; num < list7.Count; num++)
		{
			mAnalyticGoodsIDs.Add(list7[num].goodsID);
		}
	}

	public void InitMakingCache()
	{
		mGoodsMakingTimeDic = new Dictionary<int, int>();
		mGoodsMakingPowerDic = new Dictionary<int, float>();
		mGoodsMakingClicksDic = new Dictionary<int, float>();
		List<IGoodsBaseVo> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseList.list;
		for (int i = 0; i < list.Count; i++)
		{
			IGoodsBaseVo goodsBaseVo = list[i];
			if (goodsBaseVo.type == 1)
			{
				int goodsMakingTime = GetGoodsMakingTime(goodsBaseVo);
				mGoodsMakingTimeDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingTime);
				float goodsMakingFloatPower = GetGoodsMakingFloatPower(goodsBaseVo);
				mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingFloatPower);
				float goodsMakingFloatClicks = GetGoodsMakingFloatClicks(goodsBaseVo);
				mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingFloatClicks);
			}
		}
	}

	public void InitHintCondition()
	{
		string gameInitValue = StaticDataBase<StaticDataManager>.GetInstance().GetGameInitValue("숏끗憴琐䥐;\u008a厉숢끖璠伣敝<Ö叕녲繤ℤ\0途\ud992");
		if (gameInitValue.IsNotNullAndEmpty())
		{
			string[] array = gameInitValue.Split('|');
			if (array.Length == 2)
			{
				mImmediatelyHintStartOrderId = array[0].ToInt();
				mImmediatelyHintOrderId = array[1].ToInt();
			}
		}
	}

	public void PreGameLevelView()
	{
		Singleton<GameLevelManager>.Instance.IsPreloadView = true;
		GameObject val = ViewManager.GetInstance().ShowView<GameLevelViewLogic>(new GameLevelViewData
		{
			IsPreload = true
		}, ViewManager.ViewLayer.BACKGROUND);
		if ((Object)(object)val != (Object)null)
		{
			val.GetComponent<BaseViewLogic>().CloseView();
		}
		Singleton<GameLevelManager>.Instance.IsPreloadView = false;
	}

	public void ShowGameLevelView()
	{
		ObjectManager.GetInstance().gameLevelModel.CheckGameBagLimitOpenNum();
		MonoSingleton<CommonDefaultIconManager>.Instance.TriggerUpdate(isAutoEvent: false);
		ViewManager.GetInstance().ShowView<GameLevelViewLogic>(null, ViewManager.ViewLayer.BACKGROUND);
		Singleton<TaskManager>.Instance.ClearAllDishesBubble();
		MonoSingleton<MiniGameManager>.Instance.ClearMiniGameBubble();
		MonoSingleton<GuideWeakManager>.Instance.InitJudgeOrderMakeGuideCD();
		MonoSingleton<GuideWeakManager>.Instance.SetJudgeOrderMakeDelay_opt();
		Singleton<TownStateCtrl>.Instance.ChangeState(TownStateType.LeaveTown);
		MonoSingleton<GuideWeakManager>.Instance.SwitchViewConsumeTimes();
		MonoSingleton<GuideWeakManager>.Instance.OnlyRemoveShowingFingerByGuideWeakEnumID(GuideWeakEnumID.ID_MainUIViewTaskGuideBtn);
	}

	public Dictionary<int, GameGoodsVo> GetLevelMap(bool copyData = true)
	{
		return ObjectManager.GetInstance().gameLevelModel.GetGameLevelMap(copyData);
	}

	public void ChangeMapById(int gridId, GameGoodsVo goodsVo)
	{
		ObjectManager.GetInstance().gameLevelModel.ChangeGameLevelMap(gridId, goodsVo);
	}

	public void SaveGameMapToDisk()
	{
		ObjectManager.GetInstance().gameLevelModel.SaveLevelMapData(bforce: true);
	}

	public Dictionary<int, GameGoodsVo> GetGameBagMap(bool copyData = true)
	{
		return ObjectManager.GetInstance().gameLevelModel.GetGameBagMap(copyData);
	}

	public void UpateGameBag()
	{
		ObjectManager.GetInstance().gameLevelModel.SetGameBagMap();
	}

	public void AddBagOpenNum(int num, int eventFrom = 0)
	{
		int num2 = num;
		if (eventFrom == 28)
		{
			ObjectManager.GetInstance().gameLevelModel.AddBagOpenNumCanSurpassMax(num);
			Singleton<GameLevelManager>.Instance.AddBagBuyNum_Iap(num);
			ObjectManager.GetInstance().gameLevelModel.BagAnalytics("냙¿赴", 0);
		}
		else
		{
			int gameBagOpenNum = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenNum();
			if (gameBagOpenNum + num > Singleton<GameLevelManager>.Instance.BagMaximum)
			{
				num2 = Singleton<GameLevelManager>.Instance.BagMaximum - gameBagOpenNum;
			}
			ObjectManager.GetInstance().gameLevelModel.AddBagOpenNum(num);
		}
		ObjectManager.GetInstance().userDataModel.ShowBagTotal += num2;
		ObjectManager.GetInstance().userDataModel.UnlockBagTotal += num2;
		EventManager.GetInstance().DispatchEvent(100047);
		CheckLimitBagRefresh();
	}

	private void CheckLimitBagRefresh()
	{
		if ((Object)(object)ViewManager.GetInstance().GetView("橂a4끖k\udd37䋟") == (Object)null)
		{
			ObjectManager.GetInstance().gameLevelModel.CheckGameBagLimitOpenNum();
		}
	}

	public void AddLimitBagOpenNum(int num)
	{
		int gameBagLimitOpenNum = ObjectManager.GetInstance().gameLevelModel.GetGameBagLimitOpenNum();
		if (num > gameBagLimitOpenNum)
		{
			int num2 = num - gameBagLimitOpenNum;
			ObjectManager.GetInstance().userDataModel.ShowLimitBagTotal += num2;
			ObjectManager.GetInstance().userDataModel.UnlockLimitBagTotal += num2;
		}
		ObjectManager.GetInstance().gameLevelModel.SetBagLimitOpenNum(num);
		EventManager.GetInstance().DispatchEvent(100047);
	}

	public void AddBagBuyNum_Diamond(int num)
	{
		ObjectManager.GetInstance().gameLevelModel.AddBagBuyNum_Diamond(num);
	}

	public void AddBagBuyNum_Lv(int num)
	{
		int num2 = num;
		int gameBagOpenNum = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenNum();
		if (gameBagOpenNum + num > Singleton<GameLevelManager>.Instance.BagMaximum)
		{
			num2 = Singleton<GameLevelManager>.Instance.BagMaximum - gameBagOpenNum;
		}
		ObjectManager.GetInstance().gameLevelModel.AddBagBuyNum_Lv(num2);
	}

	public void AddBagBuyNum_Coin(int num)
	{
		ObjectManager.GetInstance().gameLevelModel.AddBagBuyNum_Coin(num);
	}

	public void AddBagBuyNum_Iap(int num)
	{
		ObjectManager.GetInstance().gameLevelModel.AddBagBuyNum_Iap(num);
	}

	public int GetBagMaxinum()
	{
		return mBagMaximum;
	}

	public void ChangeBagMapById(int gridId, GameGoodsVo goodsVo)
	{
		ObjectManager.GetInstance().gameLevelModel.ChangeBagMap(gridId, goodsVo);
	}

	public int GetGameBagOpenNum()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenNum();
	}

	public int GetGameBagLimitOpenNum()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetGameBagLimitOpenNum();
	}

	public int GetGameBagBuyNum_Diamond()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Diamond();
	}

	public int GetGameBagBuyNum_Lv_Coin()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Lv() + ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Coin();
	}

	public bool GameBagOpenLimit()
	{
		return GetGameBagOpenNum() >= mBagMaximum;
	}

	public int GetGoodsNumById(int id)
	{
		if (mOwnerGoodsDic == null || mChessboardOwnerGoodsDic == null)
		{
			RefreshMaxLvGoods();
		}
		if (mOwnerGoodsDic.TryGetValue(id, out var value))
		{
			return value;
		}
		return 0;
	}

	public int GetChessboardGoodsNumById(int id)
	{
		if (mOwnerGoodsDic == null || mChessboardOwnerGoodsDic == null)
		{
			RefreshMaxLvGoods();
		}
		if (mChessboardOwnerGoodsDic.TryGetValue(id, out var value))
		{
			return value;
		}
		return 0;
	}

	public long GetAllCreatorReadyTime()
	{
		long num = -1L;
		if (mOwnerCreators == null)
		{
			return num;
		}
		for (int i = 0; i < mOwnerCreators.Count; i++)
		{
			if (mOwnerCreators[i].GoodsState != GameGoodsState.CoolDown)
			{
				continue;
			}
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mOwnerCreators[i].goodsID);
			if (initiativeProduceById == null)
			{
				continue;
			}
			long num2 = initiativeProduceById.GetCDTime(mOwnerCreators[i].InitiativeCDIndex) - (ServerTimeManager.CurrentTime() - mOwnerCreators[i].InitiativeCDStarTime);
			if (num2 > 0)
			{
				if (num < 0)
				{
					num = num2;
				}
				else if (num2 > num)
				{
					num = num2;
				}
			}
		}
		return num;
	}

	public long GetWorkingMachinesMaxTimeByIds(Dictionary<int, int> goodsIds)
	{
		long num = -1L;
		Dictionary<int, List<long>> dictionary = new Dictionary<int, List<long>>();
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i].GoodsState != GameGoodsState.Working || !goodsIds.ContainsKey(mOwnerMachines[i].MakingGoodsID) || Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(mOwnerMachines[i].goodsID) == null)
			{
				continue;
			}
			long num2 = GetMakingTimeByGameGoods(mOwnerMachines[i]) - (ServerTimeManager.CurrentTime() - mOwnerMachines[i].MakingStarTime);
			if (num2 > 0)
			{
				if (!dictionary.TryGetValue(mOwnerMachines[i].MakingGoodsID, out var value))
				{
					value = new List<long>();
					dictionary.Add(mOwnerMachines[i].MakingGoodsID, value);
				}
				value.Add(num2);
			}
		}
		foreach (int key in goodsIds.Keys)
		{
			if (dictionary.ContainsKey(key))
			{
				dictionary[key].Sort();
				long num3 = dictionary[key].LastOrDefault();
				if (num3 > num)
				{
					num = num3;
				}
			}
		}
		return num;
	}

	public void CompleteAllMachinesworking(string reason, Action callBack)
	{
		if ((Object)(object)GetGameLevelViewLogic() != (Object)null)
		{
			GetGameLevelViewLogic().CompleteMachineImmidiately(reason, callBack);
			FinishAllMachineFinish("숁끕状攂捫4Î反럢Ó赴");
		}
	}

	public List<GameLevelGrid> GetAllWorkingMachinesGrid()
	{
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		if ((Object)(object)GetGameLevelViewLogic() != (Object)null)
		{
			List<GameLevelGrid> list2 = GetGameLevelViewLogic().GridObjectDic.Values.ToList();
			for (int i = 0; i < list2.Count; i++)
			{
				GameLevelGrid gameLevelGrid = list2[i];
				IGoodsBaseVo goodsBaseVo = gameLevelGrid.GetGoodsBaseVo();
				GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (gameGoodsVo != null && goodsBaseVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type) && gameGoodsVo.GoodsState == GameGoodsState.Working && Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(gameGoodsVo.MakingGoodsID) != null)
				{
					list.Add(gameLevelGrid);
				}
			}
		}
		return list;
	}

	public long GetWorkingMachinesLastestTime()
	{
		long num = -1L;
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i].GoodsState != GameGoodsState.Working || Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(mOwnerMachines[i].goodsID) == null)
			{
				continue;
			}
			long num2 = GetMakingTimeByGameGoods(mOwnerMachines[i]) - (ServerTimeManager.CurrentTime() - mOwnerMachines[i].MakingStarTime);
			if (num2 > 0)
			{
				if (num < 0)
				{
					num = num2;
				}
				else if (num2 < num)
				{
					num = num2;
				}
			}
		}
		return num;
	}

	public int GetWorkingGoodsNumByGoodsId(int goodsId)
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i].GoodsState == GameGoodsState.Working && mOwnerMachines[i].MakingGoodsID == goodsId)
			{
				list.Add(mOwnerMachines[i]);
			}
		}
		return list.Count;
	}

	public Dictionary<int, int> GetOwnerGoodsNum()
	{
		if (mOwnerGoodsDic == null)
		{
			RefreshMaxLvGoods();
		}
		return mOwnerGoodsDic;
	}

	public void RemoveGoodsById(int id, int num)
	{
		ObjectManager.GetInstance().gameLevelModel.RemoveGoodsById(id, num);
	}

	public List<GameGoodsVo> GetGameBagGoodsList(bool copyData = true)
	{
		Dictionary<int, GameGoodsVo> gameBagMap = GetGameBagMap(copyData);
		if (gameBagMap != null)
		{
			return gameBagMap.Values.ToList();
		}
		return new List<GameGoodsVo>();
	}

	public bool IsHaveGameGoodsInBag(int goodsID)
	{
		List<GameGoodsVo> gameBagGoodsList = GetGameBagGoodsList();
		for (int i = 0; i < gameBagGoodsList.Count; i++)
		{
			if (gameBagGoodsList[i] != null)
			{
				if (gameBagGoodsList[i].goodsID == goodsID)
				{
					return true;
				}
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(gameBagGoodsList[i].goodsID);
				if (goodsBaseVoById != null && IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) && gameBagGoodsList[i].MakeMaterials.Exists((MakingMaterialVo a) => a.goodsID == goodsID) && gameBagGoodsList[i].GoodsState != GameGoodsState.Working)
				{
					return true;
				}
			}
		}
		return false;
	}

	public int GetBagGoodsNum()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetBagGoodsNum();
	}

	public bool AddItemToGameBag(GameGoodsVo goodsVo)
	{
		if (ObjectManager.GetInstance().bagGeneratorStorageModel.CheckCanAddGood(goodsVo))
		{
			ObjectManager.GetInstance().bagGeneratorStorageModel.AddGameGoodsVo(goodsVo);
			return true;
		}
		return ObjectManager.GetInstance().gameLevelModel.AddItemToBag(goodsVo);
	}

	public bool MoveGoodsByPageIndex(GameGoodsVo goodsVo, int pageIndex)
	{
		return ObjectManager.GetInstance().gameLevelModel.MoveGoodsToPageindex(goodsVo, pageIndex);
	}

	public IGoodsBaseVo GetGoodsBaseVoById(int id)
	{
		IGoodsBaseVo value = null;
		if (goodsBaseVoDic.TryGetValue(id, out value))
		{
			return value;
		}
		return null;
	}

	public IGoodsBaseVo GetMaxGoodsConfigBySeries(int seriesID)
	{
		IGoodsBaseVo value = null;
		if (mMaxGoodsConfigDic.TryGetValue(seriesID, out value))
		{
			return value;
		}
		return null;
	}

	public ILevelItemEffectVo GetLevelItemEffectVoById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().LevelItemEffectList.GetItem(id);
	}

	public int GetOriginalCookingByID(int goodsID)
	{
		if (mSpecialCookingDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		return -1;
	}

	public IDynamicBoxGoodsVo GetDynamicBoxGoodsVo(int type, int id)
	{
		Dictionary<int, IDynamicBoxGoodsVo> value = null;
		if (mDynamicGoodsDic.TryGetValue(type, out value))
		{
			IDynamicBoxGoodsVo value2 = null;
			if (value.TryGetValue(id, out value2))
			{
				return value2;
			}
		}
		return null;
	}

	public List<IDynamicBoxGoodsVo> GetDynamicListByType(int type)
	{
		List<IDynamicBoxGoodsVo> value = null;
		if (mDynamicGoodsByTypeDic.TryGetValue(type, out value))
		{
			return value;
		}
		return null;
	}

	public int GetDropTypeByGoodsID(int goodsID, Dictionary<int, int> dropTypeDic)
	{
		foreach (KeyValuePair<int, int> item in dropTypeDic)
		{
			Dictionary<int, IDynamicBoxGoodsVo> value = null;
			if (mDynamicGoodsDic.TryGetValue(item.Key, out value))
			{
				IDynamicBoxGoodsVo value2 = null;
				if (value.TryGetValue(goodsID, out value2))
				{
					return value2.dropType;
				}
			}
		}
		return -1;
	}

	public bool DynamicBoxCanDrop(int goodsId)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.type == 9 || IGoodsBaseVo.IsAdditionalCard(goodsBaseVoById.type))
		{
			return true;
		}
		if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
		{
			if (GetMaxLvGoodsBySeries(goodsBaseVoById.series, 1) != null)
			{
				return true;
			}
			return false;
		}
		if (IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
		{
			if (GetMaxLvGoodsBySeries(goodsBaseVoById.series, 2) != null)
			{
				return true;
			}
			return false;
		}
		if (IsCreatorMaterial(goodsId))
		{
			if (GetMaxLvGoodsBySeries(goodsBaseVoById.series, 1) != null)
			{
				return true;
			}
			return false;
		}
		if (IsInstrumentMaterial(goodsId))
		{
			if (GetMaxLvGoodsBySeries(goodsBaseVoById.series, 2) != null)
			{
				return true;
			}
			return false;
		}
		if (GetGoodsMakingTime(goodsBaseVoById) > 0)
		{
			return true;
		}
		if (goodsBaseVoById.productionType == 0 && goodsBaseVoById.GetSource.Count == 0)
		{
			return true;
		}
		return false;
	}

	public bool IsCreatorMaterial(int goodsId)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.type != 1)
		{
			return false;
		}
		int level = goodsBaseVoById.level;
		IGoodsBaseVo goodsBaseVo = null;
		while (true)
		{
			goodsBaseVo = GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, level);
			if (goodsBaseVo == null)
			{
				break;
			}
			level = goodsBaseVo.level + 1;
			if (IGoodsBaseVo.IsCreator(goodsBaseVo.type))
			{
				return true;
			}
		}
		return false;
	}

	public bool IsInstrumentMaterial(int goodsId)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.type != 1)
		{
			return false;
		}
		int level = goodsBaseVoById.level;
		IGoodsBaseVo goodsBaseVo = null;
		while (true)
		{
			goodsBaseVo = GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, level);
			if (goodsBaseVo == null)
			{
				break;
			}
			level = goodsBaseVo.level + 1;
			if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type))
			{
				return true;
			}
		}
		return false;
	}

	public List<int> GenerateInitiativeProduceList(int goodsId, int sequenceID)
	{
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		List<BaseData2VO> produceVos = null;
		IMultiDropProduceVo multiDropProduce = GameLevelDefine.GetMultiDropProduce(goodsId, sequenceID);
		if (multiDropProduce != null)
		{
			if (multiDropProduce.fixedProductions != null && multiDropProduce.fixedProductions.Length != 0)
			{
				list2 = multiDropProduce.fixedProductions.ToList();
			}
			else
			{
				produceVos = multiDropProduce.GetProduceVos(sequenceID);
			}
		}
		else
		{
			IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsId);
			if (initiativeProduceById == null)
			{
				return list;
			}
			if (initiativeProduceById.fixedProductions != null && initiativeProduceById.fixedProductions.Length != 0)
			{
				list2 = initiativeProduceById.fixedProductions.ToList();
			}
			else
			{
				produceVos = initiativeProduceById.GetProducesBySequenceID(sequenceID);
			}
		}
		list = ((list2.Count <= 0) ? GetDropListByDropWeight(produceVos) : list2);
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			GameLevelDefine.OutPutList(goodsId, 1, list);
		}
		return list;
	}

	public List<int> GeneratePassiveProduceList(int goodsId, int sequenceID)
	{
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		IGoodsProduceVo passiveProduceById = GetPassiveProduceById(goodsId);
		if (passiveProduceById == null)
		{
			return list;
		}
		List<BaseData2VO> producesBySequenceID = passiveProduceById.GetProducesBySequenceID(sequenceID);
		if (passiveProduceById.fixedProductions != null && passiveProduceById.fixedProductions.Length != 0)
		{
			list2 = passiveProduceById.fixedProductions.ToList();
		}
		list = ((list2.Count <= 0) ? GetDropListByDropWeight(producesBySequenceID) : list2);
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			GameLevelDefine.OutPutList(goodsId, 2, list);
		}
		return list;
	}

	public List<int> DynamicBoxFixedDropList(List<BaseData2VO> produceVos)
	{
		new List<int>();
		return GetDropListByDropWeight(produceVos);
	}

	public List<int> GetDropListByDropWeight(List<BaseData2VO> produceVos)
	{
		List<int> sourceList = new List<int>();
		if (produceVos == null)
		{
			return sourceList;
		}
		produceVos.Sort((BaseData2VO vo1, BaseData2VO vo2) => vo2.num - vo1.num);
		for (int num = 0; num < produceVos.Count; num++)
		{
			sourceList = GameLevelDefine.InsertToList(sourceList, produceVos[num]);
		}
		return sourceList;
	}

	public List<int> GetMaterialSeriesByGoodsId(int goodsID, bool canRepeat = false)
	{
		if (mGoodsMaterialSeriesDic == null)
		{
			mGoodsMaterialSeriesDic = new Dictionary<int, List<int>>();
		}
		if (mGoodsMaterialSeriesDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			int derivativeSourceID = GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				List<int> materialSeriesByGoodsId = GetMaterialSeriesByGoodsId(derivativeSourceID);
				list.AddRange(materialSeriesByGoodsId);
			}
			else if (!list.Contains(goodsBaseVoById.series) && goodsBaseVoById.series > 0)
			{
				list.Add(goodsBaseVoById.series);
			}
		}
		else
		{
			IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVoById.goodsID);
			if (goodsCookingVO == null)
			{
				return list;
			}
			List<int> list2 = new List<int>();
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int i = 0; i < materials.Count; i++)
			{
				List<int> materialSeriesByGoodsId2 = GetMaterialSeriesByGoodsId(materials[i].id, canRepeat);
				list2.AddRange(materialSeriesByGoodsId2);
			}
			list.AddRange(list2);
		}
		if (!canRepeat)
		{
			list.DeleteRepeat();
		}
		mGoodsMaterialSeriesDic.TryChangeValue(goodsID, list);
		return list;
	}

	public Dictionary<int, int> GetMakeSeriesAndLevelByGoodsId(int goodsID)
	{
		if (mGoodsMakeRelevantSeriesLevelDic == null)
		{
			mGoodsMakeRelevantSeriesLevelDic = new Dictionary<int, Dictionary<int, int>>();
		}
		if (mGoodsMakeRelevantSeriesLevelDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return dictionary;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			if (dictionary.ContainsKey(goodsBaseVoById.series))
			{
				if (goodsBaseVoById.level > dictionary[goodsBaseVoById.series])
				{
					dictionary[goodsBaseVoById.series] = goodsBaseVoById.level;
				}
			}
			else
			{
				dictionary.Add(goodsBaseVoById.series, goodsBaseVoById.level);
			}
			int derivativeSourceID = GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				Dictionary<int, int> makeSeriesAndLevelByGoodsId = GetMakeSeriesAndLevelByGoodsId(derivativeSourceID);
				dictionary = MergeDictionary(dictionary, makeSeriesAndLevelByGoodsId);
			}
		}
		else
		{
			IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVoById.goodsID);
			if (goodsCookingVO == null)
			{
				return dictionary;
			}
			Dictionary<int, int> dictionary2 = new Dictionary<int, int>();
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int i = 0; i < materials.Count; i++)
			{
				Dictionary<int, int> makeSeriesAndLevelByGoodsId2 = GetMakeSeriesAndLevelByGoodsId(materials[i].id);
				dictionary2 = MergeDictionary(dictionary2, makeSeriesAndLevelByGoodsId2);
			}
			dictionary = MergeDictionary(dictionary, dictionary2);
		}
		if (!mGoodsMakeRelevantSeriesLevelDic.ContainsKey(goodsID))
		{
			mGoodsMakeRelevantSeriesLevelDic.Add(goodsID, dictionary);
		}
		return dictionary;
	}

	public List<int> GetProduceSeriesBySeries(int series)
	{
		if (mGeneratorSeriesProduceDic == null)
		{
			mGeneratorSeriesProduceDic = new Dictionary<int, List<int>>();
		}
		if (mGeneratorSeriesProduceDic.TryGetValue(series, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		List<IGoodsBaseVo> goodsBaseVosBySeries = GetGoodsBaseVosBySeries(series);
		if (goodsBaseVosBySeries != null && goodsBaseVosBySeries.Count > 0)
		{
			for (int i = 0; i < goodsBaseVosBySeries.Count; i++)
			{
				IGoodsBaseVo goodsBaseVo = goodsBaseVosBySeries[i];
				List<int> list2 = new List<int>();
				if (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsConversion(goodsBaseVo.type))
				{
					list2 = GetProduceSeriesByGoodsId(goodsBaseVo.goodsID);
				}
				for (int j = 0; j < list2.Count; j++)
				{
					if (!list.Contains(list2[i]))
					{
						list.Add(list2[i]);
					}
				}
			}
		}
		if (!mGeneratorSeriesProduceDic.ContainsKey(series))
		{
			mGeneratorSeriesProduceDic.Add(series, list);
		}
		return list;
	}

	public List<int> GetLinealProudceBySeries(int series)
	{
		if (mGeneratorSeriesLinealProduces == null)
		{
			mGeneratorSeriesLinealProduces = new Dictionary<int, List<int>>();
		}
		if (mGeneratorSeriesLinealProduces.TryGetValue(series, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		List<IGoodsBaseVo> goodsBaseVosBySeries = GetGoodsBaseVosBySeries(series);
		if (goodsBaseVosBySeries == null)
		{
			return list;
		}
		for (int i = 0; i < goodsBaseVosBySeries.Count; i++)
		{
			List<int> linealProduceByGenerator = GameLevelDefine.GetLinealProduceByGenerator(goodsBaseVosBySeries[i].goodsID);
			for (int j = 0; j < linealProduceByGenerator.Count; j++)
			{
				if (!list.Contains(linealProduceByGenerator[j]))
				{
					list.Add(linealProduceByGenerator[j]);
				}
			}
		}
		if (!mGeneratorSeriesLinealProduces.ContainsKey(series))
		{
			mGeneratorSeriesLinealProduces.Add(series, list);
		}
		return list;
	}

	public List<int> GetProduceSeriesByGoodsId(int goodsID)
	{
		if (mGeneratorProduceDic == null)
		{
			mGeneratorProduceDic = new Dictionary<int, List<int>>();
		}
		if (mGeneratorProduceDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
		{
			IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				List<int> proudceSeriesByGoodsAndType = GameLevelDefine.GetProudceSeriesByGoodsAndType(initiativeProduceById, 1);
				list.AddRange(proudceSeriesByGoodsAndType);
			}
			initiativeProduceById = GetPassiveProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				List<int> proudceSeriesByGoodsAndType2 = GameLevelDefine.GetProudceSeriesByGoodsAndType(initiativeProduceById, 1);
				list.AddRange(proudceSeriesByGoodsAndType2);
			}
		}
		else if (IGoodsBaseVo.IsConversion(goodsBaseVoById.type))
		{
			IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				List<int> proudceSeriesByGoodsAndType3 = GameLevelDefine.GetProudceSeriesByGoodsAndType(initiativeProduceById, 2);
				list.AddRange(proudceSeriesByGoodsAndType3);
			}
			initiativeProduceById = GetPassiveProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				List<int> proudceSeriesByGoodsAndType4 = GameLevelDefine.GetProudceSeriesByGoodsAndType(initiativeProduceById, 2);
				list.AddRange(proudceSeriesByGoodsAndType4);
			}
		}
		list.DeleteRepeat();
		if (!mGeneratorProduceDic.ContainsKey(goodsID))
		{
			mGeneratorProduceDic.Add(goodsID, list);
		}
		return list;
	}

	public List<int> GetDirectProduceSeriesByGeneratorID(int generatorID)
	{
		List<int> list = new List<int>();
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(generatorID);
		if (initiativeProduceById != null)
		{
			list = initiativeProduceById.GetDirectProduceSeriesList();
		}
		return list;
	}

	public List<int> GetGeneratorSeriesByGoodsId(int goodsID, bool canRepeat = false)
	{
		if (mGoodsGeneratorDic == null)
		{
			mGoodsGeneratorDic = new Dictionary<int, List<int>>();
		}
		if (mGoodsGeneratorDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			int derivativeSourceID = GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				List<int> generatorSeriesByGoodsId = GetGeneratorSeriesByGoodsId(derivativeSourceID, canRepeat);
				list.AddRange(generatorSeriesByGoodsId);
			}
			else
			{
				for (int i = 0; i < goodsBaseVoById.GetSource.Count; i++)
				{
					IGoodsBaseVo goodsBaseVoById2 = GetGoodsBaseVoById(goodsBaseVoById.GetSource[i]);
					if (goodsBaseVoById2 != null && IGoodsBaseVo.IsCreator(goodsBaseVoById2.type) && !list.Contains(goodsBaseVoById2.series) && goodsBaseVoById2.series > 0)
					{
						list.Add(goodsBaseVoById2.series);
					}
				}
			}
		}
		else
		{
			IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVoById.goodsID);
			if (goodsCookingVO == null)
			{
				return list;
			}
			List<int> list2 = new List<int>();
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int j = 0; j < materials.Count; j++)
			{
				List<int> generatorSeriesByGoodsId2 = GetGeneratorSeriesByGoodsId(materials[j].id, canRepeat);
				list2.AddRange(generatorSeriesByGoodsId2);
			}
			list.AddRange(list2);
		}
		if (!canRepeat)
		{
			list.DeleteRepeat();
		}
		if (!mGoodsGeneratorDic.ContainsKey(goodsID))
		{
			mGoodsGeneratorDic.Add(goodsID, list);
		}
		return list;
	}

	public List<int> GetGeneratorSeriesByGoodsSeries(int series)
	{
		if (mGoodsSeriesGeneratorDic == null)
		{
			mGoodsSeriesGeneratorDic = new Dictionary<int, List<int>>();
		}
		if (mGoodsSeriesGeneratorDic.TryGetValue(series, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		List<IGoodsBaseVo> goodsBaseVosBySeries = GetGoodsBaseVosBySeries(series);
		if (goodsBaseVosBySeries == null)
		{
			return list;
		}
		for (int i = 0; i < goodsBaseVosBySeries.Count; i++)
		{
			List<int> generatorSeriesByGoodsId = GetGeneratorSeriesByGoodsId(goodsBaseVosBySeries[i].goodsID);
			for (int j = 0; j < generatorSeriesByGoodsId.Count; j++)
			{
				if (!list.Contains(generatorSeriesByGoodsId[j]))
				{
					list.Add(generatorSeriesByGoodsId[j]);
				}
			}
		}
		if (!mGoodsSeriesGeneratorDic.ContainsKey(series))
		{
			mGoodsSeriesGeneratorDic.Add(series, list);
		}
		return list;
	}

	public List<int> GetInstrumentSeriesByGoodsId(int goodsID, bool canRepeat = false)
	{
		if (mGoodsInstrumentSeriesDic == null)
		{
			mGoodsInstrumentSeriesDic = new Dictionary<int, List<int>>();
		}
		if (mGoodsInstrumentSeriesDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			return list;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVoById.goodsID);
		if (goodsCookingVO == null)
		{
			return list;
		}
		if (!list.Contains(goodsCookingVO.instrumentType) && goodsCookingVO.instrumentType > 0)
		{
			list.Add(goodsCookingVO.instrumentType);
		}
		List<int> list2 = new List<int>();
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		for (int i = 0; i < materials.Count; i++)
		{
			List<int> instrumentSeriesByGoodsId = GetInstrumentSeriesByGoodsId(materials[i].id, canRepeat);
			list2.AddRange(instrumentSeriesByGoodsId);
		}
		list.AddRange(list2);
		if (!canRepeat)
		{
			list.DeleteRepeat();
		}
		if (!mGoodsInstrumentSeriesDic.ContainsKey(goodsID))
		{
			mGoodsInstrumentSeriesDic.Add(goodsID, list);
		}
		return list;
	}

	public List<int> GetInstrumentSeriesByGoodsIdIncludeSource(int goodsID, bool canRepeat = false)
	{
		if (mGoodsIncludeSourceInstrumentSeriesDic == null)
		{
			mGoodsIncludeSourceInstrumentSeriesDic = new Dictionary<int, List<int>>();
		}
		if (mGoodsIncludeSourceInstrumentSeriesDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0 && goodsBaseVoById.GetSource.Count <= 0)
		{
			return list;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVoById.goodsID);
		if (goodsCookingVO != null)
		{
			if (!list.Contains(goodsCookingVO.instrumentType) && goodsCookingVO.instrumentType > 0)
			{
				list.Add(goodsCookingVO.instrumentType);
			}
			List<int> list2 = new List<int>();
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int i = 0; i < materials.Count; i++)
			{
				List<int> instrumentSeriesByGoodsIdIncludeSource = GetInstrumentSeriesByGoodsIdIncludeSource(materials[i].id, canRepeat);
				list2.AddRange(instrumentSeriesByGoodsIdIncludeSource);
			}
			list.AddRange(list2);
		}
		else
		{
			if (goodsBaseVoById.GetSource.Count <= 0)
			{
				return list;
			}
			for (int j = 0; j < goodsBaseVoById.GetSource.Count; j++)
			{
				IGoodsBaseVo goodsBaseVoById2 = GetGoodsBaseVoById(goodsBaseVoById.GetSource[j]);
				if (goodsBaseVoById2 != null)
				{
					List<int> instrumentSeriesByGoodsIdIncludeSource2 = GetInstrumentSeriesByGoodsIdIncludeSource(goodsBaseVoById2.goodsID, canRepeat);
					list.AddRange(instrumentSeriesByGoodsIdIncludeSource2);
				}
			}
		}
		if (!canRepeat)
		{
			list.DeleteRepeat();
		}
		if (!mGoodsIncludeSourceInstrumentSeriesDic.ContainsKey(goodsID))
		{
			mGoodsIncludeSourceInstrumentSeriesDic.Add(goodsID, list);
		}
		return list;
	}

	public bool CheckGoodsDynamicOrderRangeById(int goodsId, bool ignoreMin = false)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.productionType == 1)
		{
			IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVoById.goodsID);
			if (goodsCookingVO == null)
			{
				return false;
			}
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int i = 0; i < materials.Count; i++)
			{
				if (!CheckGoodsDynamicOrderRangeById(materials[i].id, materials.Count > 1))
				{
					return false;
				}
			}
			return true;
		}
		int goodsMakingTime = GetGoodsMakingTime(goodsBaseVoById);
		if (goodsMakingTime <= 0)
		{
			return false;
		}
		IGoodsBaseVo maxGeneratorBySeries = GetMaxGeneratorBySeries(goodsBaseVoById.series);
		if (maxGeneratorBySeries == null)
		{
			return false;
		}
		IDynamicOrderRangeVO dynamicOrderRangeBySeriesAndLevel = ObjectManager.GetInstance().gameOrdersModel.GetDynamicOrderRangeBySeriesAndLevel(goodsBaseVoById.series, maxGeneratorBySeries.level);
		if (dynamicOrderRangeBySeriesAndLevel == null)
		{
			return true;
		}
		if (goodsMakingTime > dynamicOrderRangeBySeriesAndLevel.cookingTimeMax)
		{
			return false;
		}
		if (!ignoreMin && goodsMakingTime < dynamicOrderRangeBySeriesAndLevel.cookingTimeMin)
		{
			return false;
		}
		return true;
	}

	public int GetGoodsMakingTime(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0;
		}
		if (mGoodsMakingTimeDic == null)
		{
			mGoodsMakingTimeDic = new Dictionary<int, int>();
		}
		if (mGoodsMakingTimeDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		int num = 0;
		if (goodsBaseVo.productionType == 0)
		{
			int derivativeSourceID = GetDerivativeSourceID(goodsBaseVo);
			num = ((derivativeSourceID <= 0) ? GetNormalGoodsMakingTime(goodsBaseVo) : GetDerivativeGoodsMakingTime(goodsBaseVo, derivativeSourceID));
		}
		else
		{
			num = GetProcessedGoodsMakingTime(goodsBaseVo);
		}
		mGoodsMakingTimeDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private int GetNormalGoodsMakingTime(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0;
		}
		if (mGoodsMakingTimeDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		int num = 0;
		IGoodsBaseVo maxGeneratorById = GetMaxGeneratorById(goodsBaseVo);
		if (maxGeneratorById == null)
		{
			return num;
		}
		float productionEfficiency = GetProductionEfficiency(maxGeneratorById.goodsID, goodsBaseVo.series);
		if (productionEfficiency <= 0f)
		{
			return num;
		}
		num = (int)((float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) / productionEfficiency);
		mGoodsMakingTimeDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private int GetDerivativeGoodsMakingTime(IGoodsBaseVo goodsBaseVo, int derivativeID)
	{
		if (mGoodsMakingTimeDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		int num = 0;
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return num;
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(derivativeID);
		if (goodsBaseVoById == null)
		{
			return num;
		}
		int goodsMakingTime = GetGoodsMakingTime(goodsBaseVoById);
		num = ((goodsMakingTime > 0) ? ((goodsBaseVoById.type != 3) ? (GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * goodsMakingTime) : (GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * (goodsMakingTime + (int)mPowerRecoveryTime))) : 0);
		mGoodsMakingTimeDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private int GetProcessedGoodsMakingTime(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0;
		}
		if (mGoodsMakingTimeDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		int num = 0;
		IGoodsBaseVo goodsBaseVo2 = ((goodsBaseVo.level <= 1) ? goodsBaseVo : GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, 1));
		if (goodsBaseVo2 == null)
		{
			return num;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVo2.goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		bool flag = false;
		IGoodsBaseVo goodsBaseVo3 = null;
		int num2 = 0;
		Dictionary<int, IGoodsBaseVo> goodsBySeries = GetGoodsBySeries(goodsCookingVO.instrumentType);
		if (goodsBySeries == null)
		{
			return num;
		}
		if (goodsBySeries.Count > 0)
		{
			foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
			{
				if (item.Value.type == 12 || item.Value.type == 13)
				{
					flag = true;
					goodsBaseVo3 = item.Value;
					break;
				}
			}
		}
		IGoodsBaseVo goodsBaseVo4 = null;
		if (flag)
		{
			num2 = GetGoodsMakingTime(goodsBaseVo3);
			if (num2 > 0)
			{
				goodsBaseVo4 = goodsBaseVo3;
			}
		}
		else
		{
			goodsBaseVo4 = GetMaxLvGoodsBySeries(goodsCookingVO.instrumentType, 2);
		}
		if (goodsBaseVo4 == null)
		{
			return num;
		}
		IGoodsInstrumentVO goodsInstrumentVO = GetGoodsInstrumentVO(goodsBaseVo4.goodsID);
		if (goodsInstrumentVO == null)
		{
			return num;
		}
		MakeRecipeVO makeRecipeVo = goodsInstrumentVO.GetMakeRecipeVo(goodsBaseVo2.goodsID);
		if (makeRecipeVo == null)
		{
			return num;
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		int num3 = 0;
		bool flag2 = false;
		for (int i = 0; i < materials.Count; i++)
		{
			int goodsMakingTime = GetGoodsMakingTime(GetGoodsBaseVoById(materials[i].id));
			if (goodsMakingTime <= 0)
			{
				flag2 = true;
				break;
			}
			num3 += goodsMakingTime;
		}
		num = ((!flag2) ? ((goodsBaseVo.level <= 1) ? (num3 + makeRecipeVo.makingTime + num2) : (GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * (num3 + makeRecipeVo.makingTime) + num2)) : 0);
		mGoodsMakingTimeDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	public int GetGoodsMakingClicks(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0;
		}
		if (mGoodsMakingClicksDic == null)
		{
			mGoodsMakingClicksDic = new Dictionary<int, float>();
		}
		if (mGoodsMakingClicksDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			if (value > 0f && value < 1f)
			{
				return 1;
			}
			return Mathf.RoundToInt(value);
		}
		float goodsMakingFloatClicks = GetGoodsMakingFloatClicks(goodsBaseVo);
		mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingFloatClicks);
		if (goodsMakingFloatClicks > 0f && goodsMakingFloatClicks < 1f)
		{
			return 1;
		}
		return Mathf.RoundToInt(goodsMakingFloatClicks);
	}

	private float GetGoodsMakingFloatClicks(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingClicksDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float num = 0f;
		if (goodsBaseVo.productionType == 0)
		{
			int derivativeSourceID = GetDerivativeSourceID(goodsBaseVo);
			num = ((derivativeSourceID <= 0) ? GetNormalGoodsMakingClicks(goodsBaseVo) : GetDerivativeGoodsMakingClicks(goodsBaseVo, derivativeSourceID));
		}
		else
		{
			num = GetProcessedGoodsMakingClicks(goodsBaseVo);
		}
		mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private float GetNormalGoodsMakingClicks(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingClicksDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float num = 0f;
		IGoodsBaseVo workableMaxGenerator = GetWorkableMaxGenerator(goodsBaseVo);
		if (workableMaxGenerator == null)
		{
			return num;
		}
		if (IsPassiveProduce(workableMaxGenerator.goodsID, goodsBaseVo))
		{
			return num;
		}
		float dropEfficiency = GetDropEfficiency(workableMaxGenerator.goodsID, goodsBaseVo.series);
		if (dropEfficiency <= 0f)
		{
			return num;
		}
		num = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) / dropEfficiency;
		mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private float GetDerivativeGoodsMakingClicks(IGoodsBaseVo goodsBaseVo, int derivativeID)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingClicksDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float value2 = 0f;
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(derivativeID);
		if (goodsBaseVoById == null)
		{
			return value2;
		}
		IGoodsProduceVo goodsProduceVo = GetInitiativeProduceById(goodsBaseVoById.goodsID);
		if (goodsProduceVo == null)
		{
			goodsProduceVo = GetPassiveProduceById(goodsBaseVoById.goodsID);
		}
		if (goodsProduceVo == null)
		{
			return value2;
		}
		if (goodsProduceVo.GetConversionList() == null || goodsProduceVo.GetConversionList().Count == 0)
		{
			if (goodsProduceVo.GetProduceList() != null && goodsProduceVo.GetProduceList().Count > 0)
			{
				float num = 0f;
				float goodsMakingFloatPower = GetGoodsMakingFloatPower(goodsBaseVoById);
				num = ((goodsBaseVoById.type != 3) ? (goodsMakingFloatPower / (float)goodsProduceVo.capacity) : ((goodsMakingFloatPower + 1f) / (float)goodsProduceVo.capacity));
				value2 = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * num;
			}
			mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, value2);
			return value2;
		}
		float num2 = 0f;
		float goodsMakingFloatClicks = GetGoodsMakingFloatClicks(goodsBaseVoById);
		num2 = ((goodsBaseVoById.type != 3) ? (goodsMakingFloatClicks / (float)goodsProduceVo.GetConversionList().Count) : ((goodsMakingFloatClicks + 1f) / (float)goodsProduceVo.GetConversionList().Count));
		value2 = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * num2;
		mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, value2);
		return value2;
	}

	private float GetProcessedGoodsMakingClicks(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingClicksDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float num = 0f;
		IGoodsBaseVo goodsBaseVo2 = ((goodsBaseVo.level <= 1) ? goodsBaseVo : GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, 1));
		if (goodsBaseVo2 == null)
		{
			return num;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVo2.goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		IGoodsBaseVo workableMaxMachine = GetWorkableMaxMachine(goodsCookingVO.instrumentType);
		if (workableMaxMachine == null)
		{
			return num;
		}
		IGoodsInstrumentVO goodsInstrumentVO = GetGoodsInstrumentVO(workableMaxMachine.goodsID);
		if (goodsInstrumentVO == null)
		{
			return num;
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		float num2 = 0f;
		for (int i = 0; i < materials.Count; i++)
		{
			float goodsMakingFloatClicks = GetGoodsMakingFloatClicks(GetGoodsBaseVoById(materials[i].id));
			num2 += goodsMakingFloatClicks;
		}
		num = num2;
		List<ItemVO> costItemList = goodsInstrumentVO.GetCostItemList();
		for (int j = 0; j < costItemList.Count; j++)
		{
			if (costItemList[j].id == 1004)
			{
				num += (float)(int)costItemList[j].num;
			}
		}
		if (goodsBaseVo.level > 1)
		{
			num = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * num;
		}
		mGoodsMakingClicksDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	public int GetGoodsMakingPower(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0;
		}
		if (mGoodsMakingPowerDic == null)
		{
			mGoodsMakingPowerDic = new Dictionary<int, float>();
		}
		if (mGoodsMakingPowerDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			if (value > 0f && value < 1f)
			{
				return 1;
			}
			return Mathf.RoundToInt(value);
		}
		float goodsMakingFloatPower = GetGoodsMakingFloatPower(goodsBaseVo);
		mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, goodsMakingFloatPower);
		if (goodsMakingFloatPower > 0f && goodsMakingFloatPower < 1f)
		{
			return 1;
		}
		return Mathf.RoundToInt(goodsMakingFloatPower);
	}

	private float GetGoodsMakingFloatPower(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingPowerDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float num = 0f;
		if (goodsBaseVo.productionType == 0)
		{
			int derivativeSourceID = GetDerivativeSourceID(goodsBaseVo);
			num = ((derivativeSourceID <= 0) ? GetNormalGoodsMakingPower(goodsBaseVo) : GetDerivativeGoodsMakingPower(goodsBaseVo, derivativeSourceID));
		}
		else
		{
			num = GetProcessedGoodsMakingPower(goodsBaseVo);
		}
		mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private float GetNormalGoodsMakingPower(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingPowerDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float num = 0f;
		IGoodsBaseVo workableMaxGenerator = GetWorkableMaxGenerator(goodsBaseVo);
		if (workableMaxGenerator == null)
		{
			return num;
		}
		if (IsPassiveProduce(workableMaxGenerator.goodsID, goodsBaseVo))
		{
			return num;
		}
		float dropEfficiency = GetDropEfficiency(workableMaxGenerator.goodsID, goodsBaseVo.series);
		if (dropEfficiency <= 0f)
		{
			return num;
		}
		num = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) / dropEfficiency * GetDropCorrected(workableMaxGenerator.goodsID, goodsBaseVo.series);
		mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private float GetDerivativeGoodsMakingPower(IGoodsBaseVo goodsBaseVo, int derivativeID)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingPowerDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float value2 = 0f;
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(derivativeID);
		if (goodsBaseVoById == null)
		{
			return value2;
		}
		IGoodsProduceVo goodsProduceVo = GetInitiativeProduceById(goodsBaseVoById.goodsID);
		if (goodsProduceVo == null)
		{
			goodsProduceVo = GetPassiveProduceById(goodsBaseVoById.goodsID);
		}
		if (goodsProduceVo == null)
		{
			return value2;
		}
		if (goodsProduceVo.GetConversionList() == null || goodsProduceVo.GetConversionList().Count == 0)
		{
			if (goodsProduceVo.GetProduceList() != null && goodsProduceVo.GetProduceList().Count > 0)
			{
				float num = 0f;
				float goodsMakingFloatPower = GetGoodsMakingFloatPower(goodsBaseVoById);
				num = ((goodsBaseVoById.type != 3) ? (goodsMakingFloatPower / (float)goodsProduceVo.capacity) : ((goodsMakingFloatPower + 1f) / (float)goodsProduceVo.capacity));
				value2 = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * num;
			}
			mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, value2);
			return value2;
		}
		float num2 = 0f;
		float goodsMakingFloatPower2 = GetGoodsMakingFloatPower(goodsBaseVoById);
		num2 = ((goodsBaseVoById.type != 3) ? (goodsMakingFloatPower2 / (float)goodsProduceVo.GetConversionList().Count) : ((goodsMakingFloatPower2 + 1f) / (float)goodsProduceVo.GetConversionList().Count));
		value2 = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * num2;
		mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, value2);
		return value2;
	}

	private float GetProcessedGoodsMakingPower(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0f;
		}
		if (mGoodsMakingPowerDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		float num = 0f;
		IGoodsBaseVo goodsBaseVo2 = ((goodsBaseVo.level <= 1) ? goodsBaseVo : GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, 1));
		if (goodsBaseVo2 == null)
		{
			return num;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsBaseVo2.goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		IGoodsBaseVo workableMaxMachine = GetWorkableMaxMachine(goodsCookingVO.instrumentType);
		if (workableMaxMachine == null)
		{
			return num;
		}
		IGoodsInstrumentVO goodsInstrumentVO = GetGoodsInstrumentVO(workableMaxMachine.goodsID);
		if (goodsInstrumentVO == null)
		{
			return num;
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		float num2 = 0f;
		for (int i = 0; i < materials.Count; i++)
		{
			float goodsMakingFloatPower = GetGoodsMakingFloatPower(GetGoodsBaseVoById(materials[i].id));
			num2 += goodsMakingFloatPower;
		}
		num = num2;
		List<ItemVO> costItemList = goodsInstrumentVO.GetCostItemList();
		for (int j = 0; j < costItemList.Count; j++)
		{
			if (costItemList[j].id == 1004)
			{
				num += (float)(int)costItemList[j].num;
			}
		}
		if (goodsBaseVo.level > 1)
		{
			num = (float)GameLevelDefine.TwoPower(goodsBaseVo.level - 1) * num;
		}
		mGoodsMakingPowerDic.TryChangeValue(goodsBaseVo.goodsID, num);
		return num;
	}

	private bool IsPassiveProduce(int generatorId, IGoodsBaseVo goodsBaseVo)
	{
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(generatorId);
		if (initiativeProduceById != null && initiativeProduceById.IsDropBySeries(goodsBaseVo.series))
		{
			return false;
		}
		return true;
	}

	public bool IsProduceGoods(int generatorId, int series)
	{
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(generatorId);
		if (initiativeProduceById != null && initiativeProduceById.IsDropBySeries(series))
		{
			return true;
		}
		initiativeProduceById = GetPassiveProduceById(generatorId);
		if (initiativeProduceById != null && initiativeProduceById.IsDropBySeries(series))
		{
			return true;
		}
		return false;
	}

	public float GetProductionEfficiency(int generator, int series)
	{
		float num = 0f;
		IGoodsProduceVo goodsProduceVo = GetInitiativeProduceById(generator);
		if (goodsProduceVo != null)
		{
			if (!goodsProduceVo.IsDropBySeries(series))
			{
				goodsProduceVo = GetPassiveProduceById(generator);
			}
		}
		else
		{
			goodsProduceVo = GetPassiveProduceById(generator);
		}
		if (goodsProduceVo == null)
		{
			return num;
		}
		if (!goodsProduceVo.IsDropBySeries(series))
		{
			return num;
		}
		float num2 = 0f;
		if (goodsProduceVo.GetMinCDTime() > 0)
		{
			num2 = (float)goodsProduceVo.frequency / (float)goodsProduceVo.GetMinCDTime();
		}
		float dropEfficiency = GetDropEfficiency(generator, series);
		if (num2 > mPowerRecoveryRate)
		{
			return dropEfficiency / mPowerRecoveryTime;
		}
		return num2 * dropEfficiency;
	}

	public float GetDropEfficiency(int generatorId, int series)
	{
		float num = 0f;
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(generatorId);
		if (initiativeProduceById != null)
		{
			num = GetDropEfficiencyByProduce(initiativeProduceById, series);
		}
		if (num == 0f)
		{
			initiativeProduceById = GetPassiveProduceById(generatorId);
			if (initiativeProduceById != null)
			{
				num = GetDropEfficiencyByProduce(initiativeProduceById, series);
			}
		}
		return num;
	}

	public float GetDropEfficiencyByProduce(IGoodsProduceVo produceVo, int series)
	{
		float num = 0f;
		float num2 = 0f;
		float num3 = 0f;
		List<BaseData2VO> canProduceVos = produceVo.GetCanProduceVos();
		if (canProduceVos == null && canProduceVos.Count <= 0)
		{
			return num;
		}
		for (int i = 0; i < canProduceVos.Count; i++)
		{
			num2 += (float)canProduceVos[i].num;
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(canProduceVos[i].id);
			if (goodsBaseVoById != null && goodsBaseVoById.series == series)
			{
				num3 += (float)canProduceVos[i].num * GetGoodsMergeConsume(canProduceVos[i].id);
			}
		}
		num = num3 / num2;
		return (float)Mathf.RoundToInt(num * 1000f) / 1000f;
	}

	public float GetGoodsMergeConsume(int goodsId)
	{
		float num = 0f;
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return num;
		}
		return GameLevelDefine.TwoPower(goodsBaseVoById.level - 1);
	}

	public float GetDropCorrected(int generator, int series)
	{
		float num = 0f;
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(generator);
		if (initiativeProduceById != null)
		{
			num = GetDropCorrectedByProduce(initiativeProduceById, series);
		}
		if (num == 0f)
		{
			initiativeProduceById = GetPassiveProduceById(generator);
			if (initiativeProduceById != null)
			{
				num = GetDropCorrectedByProduce(initiativeProduceById, series);
			}
		}
		return num;
	}

	public float GetDropCorrectedByProduce(IGoodsProduceVo produceVo, int series)
	{
		float num = 0f;
		float num2 = 0f;
		float num3 = 0f;
		List<BaseData2VO> canProduceVos = produceVo.GetCanProduceVos();
		if (canProduceVos == null && canProduceVos.Count <= 0)
		{
			return num;
		}
		for (int i = 0; i < canProduceVos.Count; i++)
		{
			num2 += (float)canProduceVos[i].num;
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(canProduceVos[i].id);
			if (goodsBaseVoById != null && goodsBaseVoById.series == series)
			{
				num3 += (float)canProduceVos[i].num;
			}
		}
		num = num3 / num2;
		return (float)Mathf.RoundToInt(num * 1000f) / 1000f;
	}

	public int GetDerivativeSourceID(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return 0;
		}
		if (mDerivativeGoodsDic == null)
		{
			mDerivativeGoodsDic = new Dictionary<int, int>();
		}
		if (mDerivativeGoodsDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		int value2 = 0;
		for (int i = 0; i < goodsBaseVo.GetSource.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsBaseVo.GetSource[i]);
			if (goodsBaseVoById != null)
			{
				if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
				{
					value2 = 0;
					break;
				}
				if (IGoodsBaseVo.IsConversion(goodsBaseVoById.type))
				{
					value2 = goodsBaseVoById.goodsID;
				}
			}
		}
		if (!mDerivativeGoodsDic.ContainsKey(goodsBaseVo.goodsID))
		{
			mDerivativeGoodsDic.Add(goodsBaseVo.goodsID, value2);
		}
		return value2;
	}

	public IGoodsBaseVo GetDerivativeBaseVo(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return null;
		}
		if (_derivativeGoodsConfigDic == null)
		{
			_derivativeGoodsConfigDic = new Dictionary<int, IGoodsBaseVo>();
		}
		if (_derivativeGoodsConfigDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		IGoodsBaseVo value2 = null;
		for (int i = 0; i < goodsBaseVo.GetSource.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsBaseVo.GetSource[i]);
			if (goodsBaseVoById != null)
			{
				if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
				{
					break;
				}
				if (IGoodsBaseVo.IsConversion(goodsBaseVoById.type))
				{
					value2 = goodsBaseVoById;
					break;
				}
			}
		}
		if (!_derivativeGoodsConfigDic.ContainsKey(goodsBaseVo.goodsID))
		{
			_derivativeGoodsConfigDic.Add(goodsBaseVo.goodsID, value2);
		}
		return value2;
	}

	public void ChangeGeneratorOrMachine(GameGoodsVo goods, int changeType = 0)
	{
		switch (changeType)
		{
		case 1:
			RefreshMaxLvGoods();
			if (goods != null && mMaxLvGoodsDic != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goods.goodsID);
				if (goodsBaseVoById != null && mMaxLvGoodsDic.TryGetValue(goodsBaseVoById.series, out var value) && goodsBaseVoById.level > value.level)
				{
					InitMakingCache();
				}
			}
			return;
		case 2:
		{
			Temporary.Bubble.ShowList.NotifyReorder();
			RefreshMaxLvGoods();
			if (goods == null || mMaxLvGoodsDic == null)
			{
				return;
			}
			IGoodsBaseVo goodsBaseVoById2 = GetGoodsBaseVoById(goods.goodsID);
			if (goodsBaseVoById2 == null)
			{
				return;
			}
			if (mMaxLvGoodsDic.TryGetValue(goodsBaseVoById2.series, out var value2))
			{
				if (goodsBaseVoById2.level >= value2.level)
				{
					mMaxLvGoodsDic[goodsBaseVoById2.series] = goodsBaseVoById2;
					InitMakingCache();
				}
			}
			else
			{
				mMaxLvGoodsDic.Add(goodsBaseVoById2.series, goodsBaseVoById2);
				InitMakingCache();
			}
			return;
		}
		}
		if (goods == null || mMaxLvGoodsDic == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById3 = GetGoodsBaseVoById(goods.goodsID);
		if (goodsBaseVoById3 == null)
		{
			return;
		}
		Temporary.Bubble.ShowList.NotifyReorder();
		if (mOwnerMachines != null && IGoodsBaseVo.IsInstrument(goodsBaseVoById3.type))
		{
			mOwnerMachines.Add(goods);
		}
		if (mOwnerCreators != null && IGoodsBaseVo.IsCreator(goodsBaseVoById3.type))
		{
			mOwnerCreators.Add(goods);
		}
		if (mMaxLvGoodsDic.TryGetValue(goodsBaseVoById3.series, out var value3))
		{
			if (value3.level < goodsBaseVoById3.level)
			{
				mMaxLvGoodsDic[goodsBaseVoById3.series] = goodsBaseVoById3;
				InitMakingCache();
			}
		}
		else
		{
			mMaxLvGoodsDic.Add(goodsBaseVoById3.series, goodsBaseVoById3);
			InitMakingCache();
		}
	}

	private void AddToChessboardOwnerGoods(int goodsID, int num)
	{
		if (mChessboardOwnerGoodsDic == null)
		{
			mChessboardOwnerGoodsDic = new Dictionary<int, int>();
		}
		if (mChessboardOwnerGoodsDic.ContainsKey(goodsID))
		{
			mChessboardOwnerGoodsDic[goodsID] += num;
			if (mChessboardOwnerGoodsDic[goodsID] <= 0)
			{
				mChessboardOwnerGoodsDic.Remove(goodsID);
			}
		}
		else if (num > 0)
		{
			mChessboardOwnerGoodsDic.Add(goodsID, num);
		}
	}

	private void AddToOwnerGoods(int goodsID, int num)
	{
		if (mOwnerGoodsDic == null)
		{
			mOwnerGoodsDic = new Dictionary<int, int>();
		}
		if (mOwnerGoodsDic.ContainsKey(goodsID))
		{
			mOwnerGoodsDic[goodsID] += num;
			if (mOwnerGoodsDic[goodsID] <= 0)
			{
				mOwnerGoodsDic.Remove(goodsID);
			}
		}
		else if (num > 0)
		{
			mOwnerGoodsDic.Add(goodsID, num);
		}
	}

	public void ChangeOwnerGoodsNum(int goodsID, int changeNum, GameGoodsVo gameGoodsVo = null, bool bagGoods = false)
	{
		if (mOwnerGoodsDic == null || mChessboardOwnerGoodsDic == null)
		{
			RefreshMaxLvGoods();
		}
		else
		{
			AddToOwnerGoods(goodsID, changeNum);
			if (!bagGoods)
			{
				AddToChessboardOwnerGoods(goodsID, changeNum);
			}
		}
		if (GameLevelDefine.NeedLowLevelGoods.Contains(goodsID) || GameLevelDefine.OrderLowLevelCookGoods.Contains(goodsID))
		{
			GameLevelDefine.ClearOrderNeedLowLevelGoods();
		}
		GameLevelDefine.ChangeUUIDCache(gameGoodsVo, changeNum);
		ObjectManager.GetInstance().gameLevelModel.RefreshGridNum = true;
	}

	public void ChangeChessboardOwnerGoodsNum(int goodsID, int changeNum)
	{
		if (mOwnerGoodsDic == null || mChessboardOwnerGoodsDic == null)
		{
			RefreshMaxLvGoods();
		}
		else
		{
			AddToChessboardOwnerGoods(goodsID, changeNum);
		}
	}

	public void RefreshMaxLvGoods()
	{
		mMaxLvGoodsDic = new Dictionary<int, IGoodsBaseVo>();
		mOwnerGoodsDic = new Dictionary<int, int>();
		mChessboardOwnerGoodsDic = new Dictionary<int, int>();
		if (mOwnerMachines == null)
		{
			mOwnerMachines = new List<GameGoodsVo>();
		}
		else
		{
			mOwnerMachines.Clear();
		}
		if (mOwnerCreators == null)
		{
			mOwnerCreators = new List<GameGoodsVo>();
		}
		else
		{
			mOwnerCreators.Clear();
		}
		mCurrentOpenBox = null;
		int num = 0;
		foreach (KeyValuePair<int, GameGoodsVo> item in GetLevelMap(copyData: false))
		{
			if (item.Value != null && item.Value.goodsID > 0)
			{
				GameLevelDefine.ChangeUUIDCache(item.Value, 1);
			}
			if (!GridUnlock(item.Key))
			{
				continue;
			}
			GameGoodsVo value = item.Value;
			if (value == null || value.goodsID <= 0)
			{
				continue;
			}
			if (value.GoodsState == GameGoodsState.Bubble)
			{
				num++;
			}
			else
			{
				if (IGoodsBaseVo.CannotDrag(value.GoodsState))
				{
					continue;
				}
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById == null)
				{
					continue;
				}
				if (IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
				{
					mOwnerMachines.Add(value);
				}
				else if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
				{
					mOwnerCreators.Add(value);
				}
				if (mMaxLvGoodsDic.ContainsKey(goodsBaseVoById.series))
				{
					if (mMaxLvGoodsDic[goodsBaseVoById.series].level < goodsBaseVoById.level)
					{
						mMaxLvGoodsDic[goodsBaseVoById.series] = goodsBaseVoById;
					}
				}
				else
				{
					mMaxLvGoodsDic.Add(goodsBaseVoById.series, goodsBaseVoById);
				}
				int num2 = ((value.GoodsUses <= 1) ? 1 : value.GoodsUses);
				AddToOwnerGoods(value.goodsID, num2);
				AddToChessboardOwnerGoods(value.goodsID, num2);
				if ((goodsBaseVoById.type == 8 || goodsBaseVoById.type == 13) && value.GoodsState != GameGoodsState.Working && value.MakeMaterials.Count > 0)
				{
					for (int i = 0; i < value.MakeMaterials.Count; i++)
					{
						AddToOwnerGoods(value.MakeMaterials[i].goodsID, 1);
						AddToChessboardOwnerGoods(value.MakeMaterials[i].goodsID, 1);
					}
					if (IGoodsBaseVo.IsTreasureBox(goodsBaseVoById.type) && value.GoodsState == GameGoodsState.CoolDown)
					{
						mCurrentOpenBox = value;
					}
				}
			}
		}
		mCurrentBubbleNum = num;
		foreach (KeyValuePair<int, GameGoodsVo> item2 in GetGameBagMap(copyData: false))
		{
			if (item2.Value != null && item2.Value.goodsID > 0)
			{
				GameLevelDefine.ChangeUUIDCache(item2.Value, 1);
			}
			GameGoodsVo value = item2.Value;
			if (value == null || value.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
			{
				mOwnerMachines.Add(value);
			}
			else if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
			{
				mOwnerCreators.Add(value);
			}
			if (mMaxLvGoodsDic.ContainsKey(goodsBaseVoById.series))
			{
				if (mMaxLvGoodsDic[goodsBaseVoById.series].level < goodsBaseVoById.level)
				{
					mMaxLvGoodsDic[goodsBaseVoById.series] = goodsBaseVoById;
				}
			}
			else
			{
				mMaxLvGoodsDic.Add(goodsBaseVoById.series, goodsBaseVoById);
			}
			int num3 = ((value.GoodsUses <= 1) ? 1 : value.GoodsUses);
			AddToOwnerGoods(value.goodsID, num3);
			if ((goodsBaseVoById.type == 8 || goodsBaseVoById.type == 13) && value.GoodsState != GameGoodsState.Working && value.MakeMaterials.Count > 0)
			{
				for (int j = 0; j < value.MakeMaterials.Count; j++)
				{
					AddToOwnerGoods(value.MakeMaterials[j].goodsID, 1);
				}
				if (IGoodsBaseVo.IsTreasureBox(goodsBaseVoById.type) && value.GoodsState == GameGoodsState.CoolDown)
				{
					mCurrentOpenBox = value;
				}
			}
		}
		foreach (KeyValuePair<int, List<GameGoodsVo>> item3 in ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagGeneratorStorageDic())
		{
			List<GameGoodsVo> value2 = item3.Value;
			if (value2 == null || value2.Count <= 0)
			{
				continue;
			}
			for (int k = 0; k < value2.Count; k++)
			{
				if (value2[k] != null && value2[k].goodsID > 0)
				{
					GameLevelDefine.ChangeUUIDCache(value2[k], 1);
				}
				GameGoodsVo value = value2[k];
				if (value == null || value.goodsID <= 0)
				{
					continue;
				}
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById == null)
				{
					continue;
				}
				if (IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
				{
					mOwnerMachines.Add(value);
				}
				else if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
				{
					mOwnerCreators.Add(value);
				}
				if (mMaxLvGoodsDic.ContainsKey(goodsBaseVoById.series))
				{
					if (mMaxLvGoodsDic[goodsBaseVoById.series].level < goodsBaseVoById.level)
					{
						mMaxLvGoodsDic[goodsBaseVoById.series] = goodsBaseVoById;
					}
				}
				else
				{
					mMaxLvGoodsDic.Add(goodsBaseVoById.series, goodsBaseVoById);
				}
				AddToOwnerGoods(value.goodsID, 1);
			}
		}
	}

	public IGoodsBaseVo GetMaxLvGoodsBySeries(int generatorSeries, int goodsType = 0)
	{
		if (mMaxLvGoodsDic == null)
		{
			RefreshMaxLvGoods();
		}
		Dictionary<int, IGoodsBaseVo> debugMaxLvGoodsDic = mMaxLvGoodsDic;
		if (DebugAllLevelDynamicOrderLogic.Debug)
		{
			debugMaxLvGoodsDic = ObjectManager.GetInstance().gameOrdersModel.GetDebugMaxLvGoodsDic(debugMaxLvGoodsDic);
		}
		if (debugMaxLvGoodsDic.TryGetValue(generatorSeries, out var value))
		{
			switch (goodsType)
			{
			case 1:
				if (IGoodsBaseVo.IsCreator(value.type) || IGoodsBaseVo.IsConversion(value.type))
				{
					return value;
				}
				break;
			case 2:
				if (IGoodsBaseVo.IsInstrument(value.type))
				{
					return value;
				}
				break;
			default:
				return value;
			}
		}
		return null;
	}

	public IGoodsBaseVo GetMaxGeneratorById(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return null;
		}
		List<int> getSource = goodsBaseVo.GetSource;
		int num = 0;
		for (int i = 0; i < getSource.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(getSource[i]);
			if (goodsBaseVoById != null && goodsBaseVoById.series > 0)
			{
				int type = goodsBaseVoById.type;
				if (type == 2 || (uint)(type - 4) <= 1u)
				{
					num = goodsBaseVoById.series;
				}
			}
		}
		if (num > 0)
		{
			return GetMaxLvGoodsBySeries(num, 1);
		}
		return null;
	}

	public IGoodsBaseVo GetMaxGeneratorBySeries(int series)
	{
		Dictionary<int, IGoodsBaseVo> goodsBySeries = GetGoodsBySeries(series);
		if (goodsBySeries == null)
		{
			return null;
		}
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
		{
			int derivativeSourceID = GetDerivativeSourceID(item.Value);
			goodsBaseVo = ((derivativeSourceID <= 0) ? item.Value : GetGoodsBaseVoById(derivativeSourceID));
			if (goodsBaseVo != null)
			{
				break;
			}
		}
		IGoodsBaseVo maxGeneratorById = GetMaxGeneratorById(goodsBaseVo);
		if (maxGeneratorById != null)
		{
			return maxGeneratorById;
		}
		return null;
	}

	public IGoodsBaseVo GetWorkableMaxGenerator(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return null;
		}
		IGoodsBaseVo maxGeneratorById = GetMaxGeneratorById(goodsBaseVo);
		if (maxGeneratorById != null && IsProduceGoods(maxGeneratorById.goodsID, goodsBaseVo.series))
		{
			return maxGeneratorById;
		}
		return GetMinGenerator(goodsBaseVo);
	}

	public IGoodsBaseVo GetMinGenerator(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return null;
		}
		if (mMinGeneratorDic == null)
		{
			mMinGeneratorDic = new Dictionary<int, IGoodsBaseVo>();
		}
		if (mMinGeneratorDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		IGoodsBaseVo goodsBaseVo2 = null;
		int derivativeSourceID = GetDerivativeSourceID(goodsBaseVo);
		if (derivativeSourceID > 0)
		{
			goodsBaseVo2 = GetMinGenerator(GetGoodsBaseVoById(derivativeSourceID));
		}
		else
		{
			List<int> getSource = goodsBaseVo.GetSource;
			for (int i = 0; i < getSource.Count; i++)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(getSource[i]);
				if (!IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
				{
					continue;
				}
				Dictionary<int, IGoodsBaseVo> goodsBySeries = GetGoodsBySeries(goodsBaseVoById.series);
				if (goodsBySeries == null || goodsBySeries.Values.Count <= 0)
				{
					return goodsBaseVo2;
				}
				List<IGoodsBaseVo> list = goodsBySeries.Values.ToList();
				for (int j = 0; j < list.Count; j++)
				{
					if (IGoodsBaseVo.IsCreator(list[j].type) && IsProduceGoods(list[j].goodsID, goodsBaseVo.series))
					{
						if (goodsBaseVo2 == null)
						{
							goodsBaseVo2 = list[j];
						}
						else if (list[j].level < goodsBaseVo2.level)
						{
							goodsBaseVo2 = list[j];
						}
					}
				}
				if (goodsBaseVo2 != null)
				{
					break;
				}
			}
		}
		if (!mMinGeneratorDic.ContainsKey(goodsBaseVo.goodsID) && goodsBaseVo2 != null)
		{
			mMinGeneratorDic.Add(goodsBaseVo.goodsID, goodsBaseVo2);
		}
		return goodsBaseVo2;
	}

	public IGoodsBaseVo GetWorkableMaxMachine(int series)
	{
		IGoodsBaseVo maxLvGoodsBySeries = GetMaxLvGoodsBySeries(series, 2);
		if (maxLvGoodsBySeries != null)
		{
			return maxLvGoodsBySeries;
		}
		if (mMinMachineDic == null)
		{
			mMinMachineDic = new Dictionary<int, IGoodsBaseVo>();
		}
		if (mMinMachineDic.TryGetValue(series, out var value))
		{
			return value;
		}
		IGoodsBaseVo goodsBaseVo = null;
		Dictionary<int, IGoodsBaseVo> goodsBySeries = GetGoodsBySeries(series);
		if (goodsBySeries == null || goodsBySeries.Values.Count <= 0)
		{
			return goodsBaseVo;
		}
		List<IGoodsBaseVo> list = goodsBySeries.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (IGoodsBaseVo.IsInstrument(list[i].type))
			{
				if (goodsBaseVo == null)
				{
					goodsBaseVo = list[i];
				}
				else if (list[i].level < goodsBaseVo.level)
				{
					goodsBaseVo = list[i];
				}
			}
		}
		if (goodsBaseVo != null && !mMinMachineDic.ContainsKey(goodsBaseVo.goodsID))
		{
			mMinMachineDic.Add(series, goodsBaseVo);
		}
		return goodsBaseVo;
	}

	public IGoodsProduceVo GetProduceById(int id)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(id);
		if (goodsBaseVoById == null)
		{
			return null;
		}
		if (goodsBaseVoById.type == 5 || goodsBaseVoById.type == 6)
		{
			return StaticDataBase<StaticDataManager>.GetInstance().PassiveProduceList.GetItem(id);
		}
		return StaticDataBase<StaticDataManager>.GetInstance().InitiativeProduceList.GetItem(id);
	}

	public IGoodsProduceVo GetInitiativeProduceById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().InitiativeProduceList.GetItem(id);
	}

	public bool IsShowProbGoods(int goodsID)
	{
		ILevelGoodsShowProbVo item;
		return StaticDataBase<StaticDataManager>.GetInstance().LevelGoodsShowProbMap.TryGetItem(goodsID, out item);
	}

	public IGoodsShapeVo GetGoodsShapeById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsShapeList.GetItem(id);
	}

	public IGoodsProduceVo GetPassiveProduceById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().PassiveProduceList.GetItem(id);
	}

	public IGoodsPriceVo GetGoodsPriceVoById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsPriceList.GetItem(id);
	}

	public IGoodsMergeVo GetGoodsMergeVoById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsMergeList.GetItem(id);
	}

	public IGoodsCollectVo GetGoodsCollectVoById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsCollectList.GetItem(id);
	}

	public IGoodsBaseVo GetGoodsBaseVoBySeriesAndLevel(int series, int level)
	{
		if (goodsBaseSeriesDic.TryGetValue(series, out var value) && value.TryGetValue(level, out var value2))
		{
			return value2;
		}
		return null;
	}

	public IGoodsInstrumentVO GetGoodsInstrumentVO(int goodsId)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsInstrumentList.GetItem(goodsId);
	}

	public string GetInstrumentSound(IGoodsBaseVo goodsBaseVo)
	{
		string text = "";
		if (goodsBaseVo == null)
		{
			return text;
		}
		if (goodsBaseVo.type == 12 || goodsBaseVo.type == 13)
		{
			return goodsBaseVo.icon + "녟幭\u2004\0逓\ud971";
		}
		return Regex.Replace(goodsBaseVo.icon, "瀐㝼", "") + "녟幭\u2004\0逓\ud971";
	}

	public IGoodsCookingVO GetGoodsCookingVO(int goodsId)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsCookingList.GetItem(goodsId);
	}

	public ISpecialGoodsCooking GetSpecialGoodsCookingVo(int goodsId)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().SpecialGoodsCookings.GetItem(goodsId);
	}

	public IGoodsSeriesVO GetGoodsSeriesVO(int seriesId)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GoodsSeriesList.GetItem(seriesId);
	}

	public string GetGoodsSeriesName(int goodsId)
	{
		string text = "";
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return text;
		}
		IGoodsSeriesVO goodsSeriesVO = Singleton<GameLevelManager>.Instance.GetGoodsSeriesVO(goodsBaseVoById.series);
		if (goodsSeriesVO != null)
		{
			text = LocalizedLang.GetUIValueByKey(goodsSeriesVO.GetSeriesName());
		}
		return text;
	}

	public GameGoodsBase GetGameGoodsBaseById(int id, GameLevelGrid grid, GameGoodsVo initialVo = null, int initiativeProduce = 0, int passiveProduce = 0, int InitiativeAdditional = 0, bool excludeZero = true, bool addMergeDrop = false, List<int> mergeTotalDrops = null)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(id);
		if (goodsBaseVoById == null)
		{
			if (!excludeZero && initialVo != null && IGoodsBaseVo.CannotMerge(initialVo.GoodsState))
			{
				return new GoodsNormal(initialVo, grid);
			}
			return null;
		}
		GameGoodsBase gameGoodsBase = null;
		GameGoodsVo gameGoodsVo = initialVo;
		if (gameGoodsVo == null)
		{
			gameGoodsVo = new GameGoodsVo();
			gameGoodsVo.goodsID = goodsBaseVoById.goodsID;
			gameGoodsVo.GoodsState = GameGoodsState.Normal;
			GameLevelDefine.SetResidualValue(gameGoodsVo);
		}
		if (gameGoodsVo.UUID.IsNullOrEmpty())
		{
			gameGoodsVo.SetUUID();
		}
		if (mergeTotalDrops != null && mergeTotalDrops.Count > 0)
		{
			gameGoodsVo.MergeDropList.AddRange(mergeTotalDrops);
		}
		if (addMergeDrop)
		{
			IGoodsMergeVo goodsMergeVoById = GetGoodsMergeVoById(gameGoodsVo.goodsID);
			if (goodsMergeVoById != null)
			{
				List<BaseData2VO> certainDrops = goodsMergeVoById.GetCertainDrops();
				for (int i = 0; i < certainDrops.Count; i++)
				{
					if (gameGoodsVo.MergeDropList == null)
					{
						gameGoodsVo.MergeDropList = new List<int>();
					}
					for (int j = 0; j < certainDrops[i].num; j++)
					{
						gameGoodsVo.MergeDropList.Add(certainDrops[i].id);
					}
				}
			}
		}
		switch (goodsBaseVoById.type)
		{
		case 1:
		case 15:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 27:
			gameGoodsBase = new GoodsNormal(gameGoodsVo, grid);
			break;
		case 2:
			gameGoodsBase = new GoodsInitiativeProduce(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeAdditionalNumber += InitiativeAdditional;
			}
			break;
		case 3:
			gameGoodsBase = new GoodsInitiativeConversion(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeAdditionalNumber += InitiativeAdditional;
			}
			break;
		case 4:
			gameGoodsBase = new GoodsInitiativeAndPassiveProduce(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeAdditionalNumber += InitiativeAdditional;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.PassiveSurplusNumber += passiveProduce;
			}
			break;
		case 5:
			gameGoodsBase = new GoodsPassiveProduce(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.PassiveSurplusNumber += passiveProduce;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeAdditionalNumber += InitiativeAdditional;
			}
			break;
		case 6:
			gameGoodsBase = new GoodsPassiveConversion(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.PassiveSurplusNumber += passiveProduce;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeAdditionalNumber += InitiativeAdditional;
			}
			break;
		case 7:
			gameGoodsBase = new GoodsSingleInstrument(gameGoodsVo, grid);
			break;
		case 8:
			gameGoodsBase = new GoodsManyInstrument(gameGoodsVo, grid);
			break;
		case 9:
			gameGoodsBase = new GoodsCollection(gameGoodsVo, grid);
			break;
		case 10:
			gameGoodsBase = new GoodsTreasureBox(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			break;
		case 11:
			gameGoodsBase = new GoodsLockGoodsBox(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			break;
		case 12:
			gameGoodsBase = new GoodsDisposableSingle(gameGoodsVo, grid);
			break;
		case 13:
			gameGoodsBase = new GoodsDisposableMany(gameGoodsVo, grid);
			break;
		case 14:
			gameGoodsBase = new GoodsDynamicTreasureBox(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			break;
		case 18:
			gameGoodsBase = new GoodsChoiceBox(gameGoodsVo, grid);
			break;
		case 19:
			gameGoodsBase = new GoodsTransferGate(gameGoodsVo, grid);
			break;
		case 25:
			gameGoodsBase = new GoodsAutoConversion(gameGoodsVo, grid);
			break;
		case 28:
			gameGoodsBase = new GoodsCleverBox(gameGoodsVo, grid);
			break;
		case 29:
			gameGoodsBase = new GoodsAutoCollection(gameGoodsVo, grid);
			break;
		case 30:
			gameGoodsBase = new GoodsLimitedProducer(gameGoodsVo, grid);
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeSurplusNumber += initiativeProduce;
			}
			if (gameGoodsBase.GameGoods != null)
			{
				gameGoodsBase.GameGoods.InitiativeAdditionalNumber += InitiativeAdditional;
			}
			break;
		}
		if (gameGoodsBase == null)
		{
			gameGoodsBase = new GoodsNormal(gameGoodsVo, grid);
		}
		return gameGoodsBase;
	}

	public GameGoodsState GetGameGoodsState(int status)
	{
		return status switch
		{
			1 => GameGoodsState.Normal, 
			2 => GameGoodsState.Lock, 
			3 => GameGoodsState.Covered, 
			4 => GameGoodsState.FakeCovered, 
			5 => GameGoodsState.SpecialLock, 
			6 => GameGoodsState.SpecialCovered, 
			7 => GameGoodsState.Obstacle, 
			_ => GameGoodsState.Normal, 
		};
	}

	public Dictionary<int, IGoodsBaseVo> GetGoodsBySeries(int series)
	{
		if (series == 0)
		{
			return null;
		}
		if (goodsBaseSeriesDic.TryGetValue(series, out var value))
		{
			return value;
		}
		return null;
	}

	public List<int> GetGoodsIdListBySeries(int series)
	{
		Dictionary<int, IGoodsBaseVo> goodsBySeries = GetGoodsBySeries(series);
		if (goodsBySeries != null && goodsBySeries.Values.Count > 0)
		{
			List<int> list = new List<int>();
			List<IGoodsBaseVo> list2 = goodsBySeries.Values.ToList();
			list2.Sort((IGoodsBaseVo vo1, IGoodsBaseVo vo2) => vo1.level.CompareTo(vo2.level));
			for (int num = 0; num < list2.Count; num++)
			{
				if (list2[num].level > 0)
				{
					list.Add(list2[num].goodsID);
				}
			}
			return list;
		}
		return null;
	}

	public List<IGoodsBaseVo> GetGoodsBaseVosBySeries(int series)
	{
		if (goodsBaseSeriesList.TryGetValue(series, out var value))
		{
			return value;
		}
		return null;
	}

	public float GetGoodsGoalByGoodsId(int goodsId, int lv = -1)
	{
		IGoodsMassVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsMassDic.GetItem(goodsId);
		if (item != null)
		{
			if (lv == -1)
			{
				lv = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
			}
			string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숎끕憶猏䝇\u001f\u008a厉숓끶䲸瘔獑 6匵", "\ue919Ë赴");
			if (lastGoodsMassLayerLvStr != configConstant)
			{
				lastGoodsMassLayerLvStr = configConstant;
				if (!string.IsNullOrEmpty(lastGoodsMassLayerLvStr))
				{
					try
					{
						lastLvLayer = lastGoodsMassLayerLvStr.Split('|').Select(int.Parse).ToArray();
					}
					catch (Exception)
					{
						lastLvLayer = null;
					}
				}
				else
				{
					lastLvLayer = null;
				}
			}
			if (lastLvLayer != null && lastLvLayer.Length >= 2)
			{
				if (lv < lastLvLayer[0])
				{
					return item.mass1;
				}
				if (lv < lastLvLayer[1])
				{
					return item.mass2;
				}
				return item.mass3;
			}
			return item.mass1;
		}
		return 300f;
	}

	public int GetInitiativeProduceGoodsID(GameGoodsVo goodsVo)
	{
		int num = -1;
		if (goodsVo == null)
		{
			return num;
		}
		if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsVo.goodsID) == null)
		{
			return num;
		}
		num = GetBaseProduceGoodsID(goodsVo.goodsID);
		if (num == -1)
		{
			if (goodsVo.InitiativeProduceList == null || goodsVo.InitiativeProduceList.Count == 0)
			{
				if (goodsVo.InitiativeSequenceList == null || goodsVo.InitiativeSequenceList.Count == 0)
				{
					goodsVo.InitiativeSequenceList = GeneratorInitiativeSequenceList(goodsVo.goodsID);
				}
				if (goodsVo.InitiativeSequenceList.Count > 0)
				{
					int index = Random.Range(0, goodsVo.InitiativeSequenceList.Count);
					goodsVo.InitiativeSequenceID = goodsVo.InitiativeSequenceList[index];
					goodsVo.InitiativeSequenceList.Remove(goodsVo.InitiativeSequenceID);
				}
				goodsVo.InitiativeProduceList = GenerateInitiativeProduceList(goodsVo.goodsID, goodsVo.InitiativeSequenceID);
			}
			if (goodsVo.InitiativeProduceList.Count > 0)
			{
				num = goodsVo.InitiativeProduceList[0];
				goodsVo.InitiativeProduceList.RemoveAt(0);
			}
		}
		return num;
	}

	public int GetInitiativeConversionGoodsID(GameGoodsVo goodsVo)
	{
		int num = -1;
		if (goodsVo == null)
		{
			return num;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return num;
		}
		num = GetBaseProduceGoodsID(goodsVo.goodsID);
		if (num == -1)
		{
			IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				if (goodsBaseVoById.type == 14 || goodsBaseVoById.type == 30)
				{
					IDynamicBoxGoodsVo dynamicProduceGoodsId = initiativeProduceById.GetDynamicProduceGoodsId(goodsVo.DropoutList);
					if (dynamicProduceGoodsId != null)
					{
						num = ((dynamicProduceGoodsId.dropType != 1 && dynamicProduceGoodsId.dropType != 2) ? dynamicProduceGoodsId.goodsID : ObjectManager.GetInstance().dynamicBoxDropModel.GetDropGoodsID(dynamicProduceGoodsId));
					}
				}
				else
				{
					num = initiativeProduceById.GetProduceGoodsId(initiativeProduceById.capacity - goodsVo.InitiativeSurplusNumber);
				}
			}
		}
		return num;
	}

	public int GetPassiveProduceGoodsID(GameGoodsVo goodsVo)
	{
		int num = -1;
		if (goodsVo == null)
		{
			return num;
		}
		if (goodsVo.PassiveProduceList == null || goodsVo.PassiveProduceList.Count == 0)
		{
			if (goodsVo.PassiveSequenceList == null || goodsVo.PassiveSequenceList.Count == 0)
			{
				goodsVo.PassiveSequenceList = GeneratorPassiveSequenceList(goodsVo.goodsID);
			}
			if (goodsVo.PassiveSequenceList.Count > 0)
			{
				int index = Random.Range(0, goodsVo.PassiveSequenceList.Count);
				goodsVo.PassiveSequenceID = goodsVo.PassiveSequenceList[index];
				goodsVo.PassiveSequenceList.Remove(goodsVo.PassiveSequenceID);
			}
			goodsVo.PassiveProduceList = GeneratePassiveProduceList(goodsVo.goodsID, goodsVo.PassiveSequenceID);
		}
		if (goodsVo.PassiveProduceList.Count > 0)
		{
			num = goodsVo.PassiveProduceList[0];
			goodsVo.PassiveProduceList.RemoveAt(0);
		}
		return num;
	}

	public int GetPassiveConversionGoodsID(GameGoodsVo goodsVo)
	{
		int num = -1;
		IGoodsProduceVo passiveProduceById = GetPassiveProduceById(goodsVo.goodsID);
		if (passiveProduceById != null)
		{
			num = passiveProduceById.GetProduceGoodsId(passiveProduceById.capacity - goodsVo.PassiveSurplusNumber);
		}
		return num;
	}

	public int GetBaseProduceGoodsID(int goodsID)
	{
		ILevelBaseProduceVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseProduceList.GetItem(goodsID);
		if (item != null)
		{
			int produceNumBySeries = ObjectManager.GetInstance().gameLevelModel.GetProduceNumBySeries(goodsID);
			return item.GetProduceGoodsId(produceNumBySeries);
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return -1;
		}
		item = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseProduceList.GetItem(goodsBaseVoById.series);
		if (item != null)
		{
			int produceNumBySeries2 = ObjectManager.GetInstance().gameLevelModel.GetProduceNumBySeries(goodsBaseVoById.series);
			return item.GetProduceGoodsId(produceNumBySeries2);
		}
		return -1;
	}

	public int GetSpecialCookingGoodsID(GameGoodsVo goodsVo, int cookingID)
	{
		int num = -1;
		if (goodsVo == null)
		{
			return num;
		}
		if (goodsVo.SpecialCookingDic == null)
		{
			goodsVo.SpecialCookingDic = new Dictionary<int, List<int>>();
		}
		if (goodsVo.SpecialCookingDic.ContainsKey(cookingID))
		{
			if (goodsVo.SpecialCookingDic[cookingID].Count <= 0)
			{
				goodsVo.SpecialCookingDic[cookingID] = InstrumentSpecialCookingList(cookingID);
			}
		}
		else
		{
			goodsVo.SpecialCookingDic.Add(cookingID, InstrumentSpecialCookingList(cookingID));
		}
		if (goodsVo.SpecialCookingDic[cookingID].Count > 0)
		{
			num = goodsVo.SpecialCookingDic[cookingID][0];
			goodsVo.SpecialCookingDic[cookingID].RemoveAt(0);
		}
		return num;
	}

	private List<int> InstrumentSpecialCookingList(int cookingId)
	{
		List<int> list = new List<int>();
		ISpecialGoodsCooking specialGoodsCookingVo = GetSpecialGoodsCookingVo(cookingId);
		if (specialGoodsCookingVo == null)
		{
			return list;
		}
		List<BaseData2VO> produceVos = specialGoodsCookingVo.GetProduceVos();
		list = GetDropListByDropWeight(produceVos);
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			GameLevelDefine.OutPutList(cookingId, 3, list);
		}
		return list;
	}

	public List<BaseData3VO> GetRandomItemBoxProduce(int goodsID)
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsID);
		if (initiativeProduceById != null)
		{
			int num = 0;
			List<BaseData2VO> canProduceVos = initiativeProduceById.GetCanProduceVos();
			for (int i = 0; i < canProduceVos.Count; i++)
			{
				num += canProduceVos[i].num;
			}
			List<int> list2 = new List<int>();
			for (int j = 0; j < num; j++)
			{
				IDynamicBoxGoodsVo dynamicProduceGoodsId = initiativeProduceById.GetDynamicProduceGoodsId(list2);
				if (dynamicProduceGoodsId != null)
				{
					list2.Add(dynamicProduceGoodsId.goodsID);
					list.Add(new BaseData3VO
					{
						type = dynamicProduceGoodsId.type,
						id = dynamicProduceGoodsId.goodsID,
						num = dynamicProduceGoodsId.dropNum
					});
				}
			}
		}
		return list;
	}

	public List<BaseData3VO> GetChoiceItemBoxProduce(int goodsID)
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsID);
		if (initiativeProduceById != null)
		{
			int num = 0;
			List<BaseData2VO> canProduceVos = initiativeProduceById.GetCanProduceVos();
			for (int i = 0; i < canProduceVos.Count; i++)
			{
				if (canProduceVos[i].id > 10000)
				{
					list.Add(new BaseData3VO
					{
						type = 2,
						id = canProduceVos[i].id,
						num = canProduceVos[i].num
					});
				}
				else
				{
					num += canProduceVos[i].num;
				}
			}
			List<int> list2 = new List<int>();
			for (int j = 0; j < num; j++)
			{
				IDynamicBoxGoodsVo dynamicProduceGoodsId = initiativeProduceById.GetDynamicProduceGoodsId(list2, excludeSeries: true);
				if (dynamicProduceGoodsId != null)
				{
					list2.Add(dynamicProduceGoodsId.goodsID);
					list.Add(new BaseData3VO
					{
						type = dynamicProduceGoodsId.type,
						id = dynamicProduceGoodsId.goodsID,
						num = dynamicProduceGoodsId.dropNum
					});
				}
			}
		}
		return list;
	}

	public void SetBaseProduceNum(int goodsID, int num)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById != null)
		{
			if (StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseProduceList.GetItem(goodsBaseVoById.goodsID) != null)
			{
				ObjectManager.GetInstance().gameLevelModel.SetProduceNumBySeries(goodsBaseVoById.goodsID, Mathf.Abs(num));
			}
			else if (StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseProduceList.GetItem(goodsBaseVoById.series) != null)
			{
				ObjectManager.GetInstance().gameLevelModel.SetProduceNumBySeries(goodsBaseVoById.series, Mathf.Abs(num));
			}
		}
	}

	public bool WhetherSatisfiesCost(List<ItemVO> costs, int dropRate = 1)
	{
		if (costs == null)
		{
			return true;
		}
		for (int i = 0; i < costs.Count; i++)
		{
			if ((costs[i].id == 1004 && ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState()) || ObjectManager.GetInstance().itemDataModel.GetItemNum(costs[i].id) >= costs[i].num * dropRate)
			{
				continue;
			}
			if (costs[i].id == 1004)
			{
				MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.EnergyNotEnough);
				if (!ObjectManager.GetInstance().diamondChainGiftModel.OpenActivityView(DiamondChainGiftOpenSource.EnergyNotEnough))
				{
					if (ObjectManager.GetInstance().energyDiscountTicketModel.CanOpenNewSectionActivity())
					{
						ObjectManager.GetInstance().energyDiscountTicketModel.OpenNewSectionActivity();
					}
					else
					{
						ViewManager.GetInstance().ShowView<ShopEnergyView_DLogic>(new ShopEnergyViewData
						{
							isEnergyNotEnoughPop = true,
							isAutoPop = true
						}, ViewManager.ViewLayer.POP, animate: true);
					}
				}
			}
			else if (costs[i].id == 1032)
			{
				ViewManager.GetInstance().ShowView<ShopActivityEnergyViewLogic>(null, ViewManager.ViewLayer.POP, animate: true);
			}
			return false;
		}
		return true;
	}

	public void DeductionOfConsumption(List<ItemVO> costs, GameLevelGrid clickGrid, int dropRate = 1)
	{
		int generatorSeries = 0;
		if ((Object)(object)clickGrid != (Object)null && clickGrid.GetGoodsBaseVo() != null)
		{
			generatorSeries = clickGrid.GetGoodsBaseVo().series;
		}
		bool flag = false;
		for (int i = 0; i < costs.Count; i++)
		{
			if (costs[i].id == 1004)
			{
				if (ObjectManager.GetInstance().userDataModel.IsDropActivityEnergy())
				{
					ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1032, 1L, needNotice: true, 75);
					BaseData3VO rewardData = new BaseData3VO
					{
						type = 1,
						id = 1032,
						num = 1
					};
					ViewManager.GetInstance().ShowRewardTip(rewardData, clickGrid.GameItemParent);
					EventManager.GetInstance().DispatchEvent(200005);
				}
				if (ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
				{
					ObjectManager.GetInstance().itemDataModel.AddUnlimitedCostEnergy((int)costs[i].num);
					continue;
				}
				if ((Object)(object)clickGrid != (Object)null && IGoodsBaseVo.IsConversion(clickGrid.GetGoodsBaseVo().type))
				{
					IGoodsProduceVo produceById = GetProduceById(clickGrid.GetGoodsBaseVo().goodsID);
					if (produceById != null && produceById.initialNumber < 2 && produceById.frequency < 2)
					{
						ObjectManager.GetInstance().airPlaneModel.AddTokenByEnergy((int)(costs[i].num * dropRate), clickGrid.GameItemParent);
						ObjectManager.GetInstance().airPlaneModel.CheckOpenActivity();
					}
				}
				flag = true;
			}
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(costs[i].id, -costs[i].num * dropRate, needNotice: true, -1, initialize: false, generatorSeries);
		}
		if (ObjectManager.GetInstance().energyDiscountTicketModel.CanOpenNewSectionActivity())
		{
			ObjectManager.GetInstance().energyDiscountTicketModel.OpenNewSectionActivity();
		}
		bool flag2 = MonoSingleton<GuideManager>.Instance.IsFinishByID(1034) || MonoSingleton<GuideManager>.Instance.IsFinishByID(20);
		if (flag && ObjectManager.GetInstance().itemDataModel.GetItemNum(1004) <= 0 && !flag2)
		{
			ShopEnergyViewData shopEnergyViewData = new ShopEnergyViewData();
			shopEnergyViewData.isAutoPop = true;
			ViewManager.GetInstance().ShowView<ShopEnergyView_DLogic>(shopEnergyViewData, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public IGoodsBaseVo GetNextLevelGoods(GameGoodsVo goodsVo1, GameGoodsVo goodsVo2, bool showTip = false, Transform tipLocation = null)
	{
		if (goodsVo1 == null || goodsVo2 == null)
		{
			return null;
		}
		if (goodsVo1.goodsID != goodsVo2.goodsID)
		{
			return null;
		}
		if (IGoodsBaseVo.CannotMerge(goodsVo1.GoodsState) || IGoodsBaseVo.CannotMerge(goodsVo2.GoodsState) || goodsVo1.GoodsState == GameGoodsState.Bubble || goodsVo2.GoodsState == GameGoodsState.Bubble)
		{
			return null;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsVo1.goodsID);
		if (goodsBaseVoById == null)
		{
			return null;
		}
		IGoodsBaseVo goodsBaseVoBySeriesAndLevel = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level + 1);
		if (goodsBaseVoBySeriesAndLevel == null)
		{
			return null;
		}
		if (IGoodsBaseVo.IsTreasureBox(goodsBaseVoById.type) && (goodsVo1.InitiativeUseTotal > 0 || goodsVo2.InitiativeUseTotal > 0))
		{
			if (showTip)
			{
				ViewManager.Instance.ShowTip("숙끒涼攚捀\rº厹숵끝榼氶牒3ª厩", null, tipLocation);
			}
			return null;
		}
		if (goodsBaseVoById.type == 30)
		{
			return null;
		}
		return goodsBaseVoBySeriesAndLevel;
	}

	public (List<int>, List<int>, List<int>, List<int>) GetAllBaseSeriesByGoodsId(int goodsId)
	{
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		List<int> list3 = new List<int>();
		List<int> list4 = new List<int>();
		if (goodsId <= 0)
		{
			return (list2, list, list3, list4);
		}
		HashSet<int> hashSet = new HashSet<int>();
		HashSet<int> hashSet2 = new HashSet<int>();
		Queue<int> queue = new Queue<int>();
		queue.Enqueue(goodsId);
		while (queue.Count > 0)
		{
			int num = queue.Dequeue();
			if (num <= 0 || hashSet2.Contains(num))
			{
				continue;
			}
			hashSet2.Add(num);
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(num);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (GoodsConfigTool.IsBaseSeries(goodsBaseVoById.series) && hashSet.Add(goodsBaseVoById.series))
			{
				list.Add(goodsBaseVoById.series);
				list2.Add(goodsBaseVoById.series);
				List<int> getSource = goodsBaseVoById.GetSource;
				if (getSource == null || getSource.Count <= 0)
				{
					continue;
				}
				for (int i = 0; i < getSource.Count; i++)
				{
					if (getSource[i] > 0)
					{
						queue.Enqueue(getSource[i]);
					}
					IGoodsBaseVo goodsBaseVoById2 = GetGoodsBaseVoById(getSource[i]);
					if (goodsBaseVoById2 != null && list4 != null && !list4.Contains(goodsBaseVoById2.series))
					{
						list4.Add(goodsBaseVoById2.series);
					}
				}
				continue;
			}
			if (goodsBaseVoById.series > 0 && !list2.Contains(goodsBaseVoById.series))
			{
				list2.Add(goodsBaseVoById.series);
			}
			if (goodsBaseVoById.productionType == 0)
			{
				List<int> getSource2 = goodsBaseVoById.GetSource;
				if (getSource2 == null || getSource2.Count == 0)
				{
					continue;
				}
				for (int j = 0; j < getSource2.Count; j++)
				{
					if (getSource2[j] > 0)
					{
						queue.Enqueue(getSource2[j]);
					}
					IGoodsBaseVo goodsBaseVoById3 = GetGoodsBaseVoById(getSource2[j]);
					if (goodsBaseVoById3 != null && list4 != null && !list4.Contains(goodsBaseVoById3.series))
					{
						list4.Add(goodsBaseVoById3.series);
					}
				}
				continue;
			}
			IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(num);
			if (goodsCookingVO == null || goodsCookingVO.GetMaterialGoodsIDs() == null || goodsCookingVO.GetMaterialGoodsIDs().Count == 0)
			{
				continue;
			}
			if (list3 != null && !list3.Contains(goodsCookingVO.instrumentType))
			{
				list3.Add(goodsCookingVO.instrumentType);
			}
			for (int k = 0; k < goodsCookingVO.GetMaterialGoodsIDs().Count; k++)
			{
				if (goodsCookingVO.GetMaterialGoodsIDs()[k] > 0)
				{
					queue.Enqueue(goodsCookingVO.GetMaterialGoodsIDs()[k]);
				}
			}
		}
		return (list2, list, list3, list4);
	}

	public IBagVo GetBagVo(int index)
	{
		IBagVo bagVo = StaticDataBase<StaticDataManager>.GetInstance().LevelBagMap.GetItem(index);
		if (bagVo == null)
		{
			List<IBagVo> list = StaticDataBase<StaticDataManager>.GetInstance().LevelBagMap.list;
			bagVo = list[list.Count - 1];
		}
		return bagVo;
	}

	public bool CheckGoodsUnlock(int id)
	{
		return ObjectManager.GetInstance().gameLevelModel.CheckUnlockById(id);
	}

	public void AddGoodsToUnlock(int id)
	{
		if (!CheckGoodsUnlock(id))
		{
			ObjectManager.GetInstance().gameLevelModel.AddUnlockGoods(id);
			ObjectManager.GetInstance().illustratedDataModel.UnlockIllustrateByGoodsId(id);
		}
	}

	public bool CanDropBubble(int dropGoodsId)
	{
		if (!MonoSingleton<ConditionManager>.Instance.IsLegal(6))
		{
			return false;
		}
		if (Singleton<GameLevelManager>.Instance.CurrentBubbleNum >= Singleton<GameLevelManager>.Instance.BubbleGoodsLimit)
		{
			return false;
		}
		if (ObjectManager.GetInstance().itemDataModel.GetItemNum(1009) <= 0)
		{
			return false;
		}
		if (ABTestSwitchDefine.BubbleGoodsSwitch())
		{
			IGoodsPriceVo goodsPriceVoById = Singleton<GameLevelManager>.Instance.GetGoodsPriceVoById(dropGoodsId);
			if (goodsPriceVoById == null || goodsPriceVoById.buy <= 0)
			{
				return false;
			}
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(dropGoodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (!ObjectManager.GetInstance().gameOrdersModel.CanDropBubbleDic.ContainsKey(goodsBaseVoById.series))
		{
			return false;
		}
		if (goodsBaseVoById.level > ObjectManager.GetInstance().gameOrdersModel.CanDropBubbleDic[goodsBaseVoById.series])
		{
			return false;
		}
		return true;
	}

	public bool CanBuyBubbleByAd()
	{
		if (ObjectManager.GetInstance().adStrateryModel.IsAdBlack(AdStratery.AdScenePos.MAIN_BUBBLE))
		{
			return false;
		}
		if (ObjectManager.GetInstance().userDataModel.userDataVo.AdBubbleTotal >= ObjectManager.GetInstance().itemDataModel.BubbleTotalMax)
		{
			return false;
		}
		return true;
	}

	public void BuyBubbleSuccessRefresh(int goodsID)
	{
		MonoSingleton<PlayerStateManager>.Instance.MarkStrongSignal("\ua956汪窛");
		if (ObjectManager.GetInstance().itemDataModel.GetItemNum(1009) < ObjectManager.GetInstance().itemDataModel.BubbleDropMax)
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1009, 1L, needNotice: true, 0);
		}
		if (GameLevelDefine.MustbeBubbleList.Contains(goodsID))
		{
			GameLevelDefine.MustbeBubbleList.Remove(goodsID);
		}
		else
		{
			Singleton<GameLevelManager>.Instance.CurrentBubbleNum--;
		}
	}

	public int GetAdShareNum()
	{
		return (int)ObjectManager.GetInstance().itemDataModel.GetItemNum(1010);
	}

	public void ChangeAdShareNum(int num)
	{
		ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1010, num, needNotice: true, 0);
	}

	public bool CanSpeedupByAd(int cost)
	{
		if (ObjectManager.GetInstance().adStrateryModel.IsAdBlack(AdStratery.AdScenePos.MAIN_SHARE))
		{
			return false;
		}
		if (ObjectManager.GetInstance().itemDataModel.GetItemNum(1010) <= 0)
		{
			return false;
		}
		if (ObjectManager.GetInstance().userDataModel.userDataVo.AdShareTotal >= ObjectManager.GetInstance().itemDataModel.AdShareTotalMax)
		{
			return false;
		}
		if (cost < mShowAdDiamondMin)
		{
			return false;
		}
		return true;
	}

	public bool CheckGoodsCanSell(int goodsID, bool showAlert = true)
	{
		IGoodsPriceVo goodsPriceVoById = GetGoodsPriceVoById(goodsID);
		if (goodsPriceVoById == null || goodsPriceVoById.sell < 0 || goodsPriceVoById.ItemID < 0)
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById != null && goodsBaseVoById.directSelling > 0)
		{
			return true;
		}
		if (CheckNeedToUseMaterial(goodsID))
		{
			if (showAlert)
			{
				string uIValueByKey = LocalizedLang.GetUIValueByKey("숏끥循洐员>\u0082厁橡t4끲k\ud833䋄", new List<string> { Singleton<GameLevelManager>.Instance.GetGoodsSeriesName(goodsID) });
				ShowConfirmToSell(goodsID, uIValueByKey, null, null, OnlyShowSureBtn: true);
			}
			return false;
		}
		if (CheckIsLastGoods(goodsID))
		{
			if (showAlert)
			{
				string item = "";
				IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
				if (goodsBaseVoById2 != null)
				{
					string uIValueByKey2 = LocalizedLang.GetUIValueByKey(goodsBaseVoById2.name);
					item = LocalizedLang.GetUIValueByKey("숎끕䦶渏䝇\r*匩扦o4끎c\udd3f㫍", new List<string>
					{
						uIValueByKey2,
						goodsBaseVoById2.level.ToString()
					});
				}
				string uIValueByKey3 = LocalizedLang.GetUIValueByKey("숏끥循氐员>\u0082厁룕÷赴", new List<string> { item });
				ShowConfirmToSell(goodsID, uIValueByKey3, null, null, OnlyShowSureBtn: true);
			}
			return false;
		}
		return true;
	}

	public bool CheckNeedToUseMaterial(int goodsId)
	{
		bool flag = false;
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById != null && goodsBaseVoById.type == 1)
		{
			int level = goodsBaseVoById.level + 1;
			IGoodsBaseVo goodsBaseVo = null;
			while (true)
			{
				goodsBaseVo = GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, level);
				if (goodsBaseVo == null)
				{
					break;
				}
				level = goodsBaseVo.level + 1;
				if (goodsBaseVo.type == 2 || goodsBaseVo.type == 3 || goodsBaseVo.type == 4 || goodsBaseVo.type == 5 || goodsBaseVo.type == 6 || goodsBaseVo.type == 7 || goodsBaseVo.type == 8 || goodsBaseVo.type == 12 || goodsBaseVo.type == 13)
				{
					flag = true;
					if (CheckGoodsUnlock(goodsBaseVo.goodsID))
					{
						flag = false;
						break;
					}
				}
			}
		}
		return flag;
	}

	public bool CheckIsLastGoods(int goodsId)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.type == 1)
		{
			return false;
		}
		if (goodsBaseVoById.type == 9)
		{
			return false;
		}
		if (goodsBaseVoById.type == 10)
		{
			return false;
		}
		if (goodsBaseVoById.type == 11)
		{
			return false;
		}
		if (goodsBaseVoById.type == 14)
		{
			return false;
		}
		if (goodsBaseVoById.type == 30)
		{
			return false;
		}
		if (goodsBaseVoById.type == 15)
		{
			return false;
		}
		if (goodsBaseVoById.type == 16)
		{
			return false;
		}
		if (goodsBaseVoById.type == 23)
		{
			return false;
		}
		if (goodsBaseVoById.type == 24)
		{
			return false;
		}
		if (goodsBaseVoById.type == 27)
		{
			return false;
		}
		IGoodsBaseVo value = null;
		if (mMaxLvGoodsDic.TryGetValue(goodsBaseVoById.series, out value))
		{
			if (goodsBaseVoById.level < value.level)
			{
				return false;
			}
			if (goodsBaseVoById.level == value.level)
			{
				int value2 = 0;
				if (mOwnerGoodsDic.TryGetValue(value.goodsID, out value2) && value2 > 1)
				{
					return false;
				}
			}
		}
		return true;
	}

	public bool CheckSellAlert(int goodsId)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.rareItem > 0)
		{
			return true;
		}
		int type = goodsBaseVoById.type;
		if ((uint)(type - 2) <= 6u || (uint)(type - 12) <= 1u || type == 30)
		{
			return true;
		}
		if (goodsBaseVoById.level >= mSellAlertLevel)
		{
			return true;
		}
		return false;
	}

	public void UnlockGridById(int gridId)
	{
		ObjectManager.GetInstance().gameLevelModel.AddUnlockGrid(gridId);
	}

	public IGameInitVo GetGameInitVoByID(int gridID)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GameInitList.GetItem(gridID);
	}

	public List<IGameInitVo> GetGameInitVoList()
	{
		return StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list;
	}

	public bool GridUnlock(int gridID)
	{
		Dictionary<int, int> gameGridUnlockDic = ObjectManager.GetInstance().gameLevelModel.GameGridUnlockDic;
		if (gameGridUnlockDic != null && gameGridUnlockDic.ContainsKey(gridID) && gameGridUnlockDic[gridID] > 0)
		{
			return true;
		}
		if (ObjectManager.GetInstance().mReloadModelInit)
		{
			IGameInitVo gameInitVoByID = GetGameInitVoByID(gridID);
			if (gameInitVoByID != null)
			{
				if (Singleton<GameLevelManager>.Instance.GetGridUnlockCondition() >= gameInitVoByID.unlockLv)
				{
					UnlockGridById(gridID);
					return true;
				}
				return false;
			}
			return true;
		}
		return false;
	}

	public bool IsUnlockGrid(int gridID)
	{
		if (ObjectManager.GetInstance().gameLevelModel.GameGridUnlockDic == null)
		{
			return false;
		}
		if (ObjectManager.GetInstance().gameLevelModel.GameGridUnlockDic.TryGetValue(gridID, out var value))
		{
			return value > 0;
		}
		return false;
	}

	public int GetGridUnlockCondition()
	{
		return ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
	}

	public bool IsResetGameMap()
	{
		if (ObjectManager.GetInstance().userDataModel.LastLevelUp <= 0)
		{
			return GameLevelViewLogic.ResetGameMap;
		}
		return true;
	}

	public int GetChessboardLastLevel()
	{
		return ObjectManager.GetInstance().userDataModel.LastLevelUp;
	}

	public void SetChessboardLastLevel(int level)
	{
		ObjectManager.GetInstance().userDataModel.LastLevelUp = level;
	}

	public void ShowItemDetails(int itemID)
	{
		GameItemDetailsViewData data = new GameItemDetailsViewData
		{
			showItem = new BaseData3VO
			{
				type = 1,
				id = itemID
			}
		};
		ViewManager.GetInstance().ShowView<GameItemDetailsViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
	}

	public void ShowGoodsDetails(int goodsID, bool playAnim = true, bool analytic = true, Transform nodeTrans = null, bool showShop = false, bool showFind = false, OrderFromData FromOrderData = null, bool isAutoPop = false)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById != null && (IGoodsBaseVo.IsSpecialTip(goodsBaseVoById.type) || goodsBaseVoById.series == -1))
		{
			GameItemDetailsViewData data = new GameItemDetailsViewData
			{
				showItem = new BaseData3VO
				{
					type = 2,
					id = goodsID
				}
			};
			ViewManager.GetInstance().ShowView<GameItemDetailsViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
			return;
		}
		if (goodsBaseVoById != null && goodsBaseVoById.type == 17)
		{
			if (IsShowProbGoods(goodsID))
			{
				ViewManager.GetInstance().ShowView<HandbookShowProbabilityViewLogic>(null, ViewManager.ViewLayer.POP, animate: true);
				return;
			}
			CommonBubbleTipViewData data2 = new CommonBubbleTipViewData
			{
				Tip = goodsBaseVoById.desc,
				NodeTransform = nodeTrans
			};
			ViewManager.GetInstance().ShowView<CommonBubbleTipViewLogic>(data2, ViewManager.ViewLayer.POP);
			return;
		}
		if (mDetailViews == null)
		{
			mDetailViews = new Stack<int>();
		}
		mDetailViews.Push(goodsID);
		if (mDetailViews.Count > 3)
		{
			List<int> list = new List<int>();
			for (int i = 0; i < 3; i++)
			{
				list.Add(mDetailViews.Pop());
			}
			mDetailViews.Clear();
			for (int num = list.Count - 1; num >= 0; num--)
			{
				mDetailViews.Push(list[num]);
			}
		}
		if (analytic)
		{
			GameLevelDefine.GoodsDetailsAnalytic(goodsID);
		}
		if (Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsID) != null)
		{
			GameGoodsCookingInfoData data3 = new GameGoodsCookingInfoData
			{
				goodsId = goodsID,
				showShop = showShop,
				showFind = showFind,
				isAutoPop = isAutoPop,
				orderFromData = FromOrderData
			};
			if (ABTestSwitchDefine.GoodsDetailsSwitch())
			{
				ViewManager.GetInstance().ShowView<GameGoodsCookingInfo_newLogic>(data3, ViewManager.ViewLayer.POP, playAnim);
			}
			else
			{
				ViewManager.GetInstance().ShowView<GameGoodsCookingInfoLogic>(data3, ViewManager.ViewLayer.POP, playAnim);
			}
			return;
		}
		HandbookViewData data4 = new HandbookViewData
		{
			goodsId = goodsID,
			showShop = showShop,
			showFind = showFind,
			isAutoPop = isAutoPop,
			orderFromData = FromOrderData
		};
		if (goodsBaseVoById != null && goodsBaseVoById.type == 18)
		{
			if (ABTestSwitchDefine.GoodsDetailsSwitch())
			{
				ViewManager.GetInstance().ShowView<HandbookChoiceView_newLogic>(data4, ViewManager.ViewLayer.POP, playAnim);
			}
			else
			{
				ViewManager.GetInstance().ShowView<HandbookViewLogic>(data4, ViewManager.ViewLayer.POP, playAnim);
			}
		}
		else if (ABTestSwitchDefine.GoodsDetailsSwitch())
		{
			ViewManager.GetInstance().ShowView<HandbookView_newLogic>(data4, ViewManager.ViewLayer.POP, playAnim);
		}
		else
		{
			ViewManager.GetInstance().ShowView<HandbookViewLogic>(data4, ViewManager.ViewLayer.POP, playAnim);
		}
	}

	public bool AutoOpenDetailView(int closeGoodsId, bool showShop, bool showFind = false, OrderFromData fromData = null)
	{
		int num = 0;
		if (mDetailViews != null && mDetailViews.Count > 0)
		{
			num = mDetailViews.Pop();
			if (num == closeGoodsId)
			{
				num = 0;
				if (mDetailViews.Count > 0)
				{
					num = mDetailViews.Pop();
				}
			}
		}
		if (num > 0)
		{
			ShowGoodsDetails(num, playAnim: false, analytic: false, null, showShop, showFind, fromData, isAutoPop: true);
			return true;
		}
		return GameLevelOrderMatLogic.ShowOrderDetailView(fromClickOrder: false, GameLevelOrderMatLogic.mGameLevelOrderMatData, analytic: false, fromData?.fromTrans);
	}

	public void ClearDetailViews()
	{
		if (mDetailViews != null)
		{
			mDetailViews.Clear();
		}
	}

	public void ShowConfirmToSell(int goodsID, string Content, Action SureCallback, Action CancelCallback, bool OnlyShowSureBtn = false)
	{
		SellAlertViewData data = new SellAlertViewData
		{
			goodID = goodsID,
			Content = Content,
			OnlyShowSureBtn = OnlyShowSureBtn,
			SureCallback = SureCallback,
			CancelCallback = CancelCallback
		};
		if (ABTestSwitchDefine.GoodsDetailsSwitch())
		{
			ViewManager.GetInstance().ShowView<SellAlertView_newLogic>(data, ViewManager.ViewLayer.POP, animate: true);
		}
		else
		{
			ViewManager.GetInstance().ShowView<SellAlertViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public void ShowFristUnlock(int goodsID, Transform tipLocation = null, Action closeCallBack = null)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			closeCallBack?.Invoke();
			return;
		}
		int type;
		if (!ABTestSwitchDefine.GuideOptimizeSwitch())
		{
			type = goodsBaseVoById.type;
			if ((uint)(type - 2) <= 6u || (uint)(type - 12) <= 1u)
			{
				GameGoodsUnlockHintData data = new GameGoodsUnlockHintData
				{
					goodsId = goodsID,
					closeCallBack = closeCallBack
				};
				if (!MonoSingleton<DynamicOrderDebugManager>.Instance.IsOpen())
				{
					if (ABTestSwitchDefine.GoodsDetailsSwitch())
					{
						ViewManager.GetInstance().ShowView<GameGoodsUnlockHint_newLogic>(data, ViewManager.ViewLayer.POP, animate: true);
					}
					else
					{
						ViewManager.GetInstance().ShowView<GameGoodsUnlockHintLogic>(data, ViewManager.ViewLayer.POP, animate: true);
					}
					EventManager.GetInstance().DispatchEvent(100065);
				}
			}
			else if (ObjectManager.GetInstance().userDataModel.IllustratedOpenState)
			{
				ViewManager.Instance.ShowTip("숵끟斮洶湝&\u009a厙뻯", null, tipLocation);
				closeCallBack?.Invoke();
				EventManager.GetInstance().DispatchEvent(100065);
			}
		}
		type = goodsBaseVoById.type;
		if (type == 2 || (uint)(type - 4) <= 1u)
		{
			ObjectManager.GetInstance().gameOrdersModel.JudgeNewProduceMainlineOrder(goodsBaseVoById);
		}
	}

	public void SetGameGoodsCDTime(GameGoodsVo gameGoodsVo, long time)
	{
		if (gameGoodsVo == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById != null)
		{
			switch (goodsBaseVoById.type)
			{
			case 2:
			case 3:
			case 30:
				gameGoodsVo.InitiativeCDStarTime = time;
				break;
			case 5:
			case 6:
				gameGoodsVo.PassiveCDStarTime = time;
				break;
			case 4:
				gameGoodsVo.InitiativeCDStarTime = time;
				gameGoodsVo.PassiveCDStarTime = time;
				break;
			case 10:
			case 14:
				gameGoodsVo.InitiativeCDStarTime = time;
				break;
			}
		}
	}

	public void RreduceGameGoodsCDTime(GameGoodsVo gameGoodsVo, int time)
	{
		if (gameGoodsVo == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById != null)
		{
			switch (goodsBaseVoById.type)
			{
			case 2:
			case 3:
			case 10:
			case 14:
			case 30:
				gameGoodsVo.InitiativeCDStarTime -= time;
				break;
			case 5:
			case 6:
				gameGoodsVo.PassiveCDStarTime -= time;
				break;
			case 4:
				gameGoodsVo.InitiativeCDStarTime -= time;
				gameGoodsVo.PassiveCDStarTime -= time;
				break;
			}
		}
	}

	public void SetGoodsIcon(Image icon, IGoodsBaseVo goodsBaseVo, ResLoader resLoader = null, bool original = true)
	{
		//IL_0070: Unknown result type (might be due to invalid IL or missing references)
		if (mGoodsIconResloader == null)
		{
			mGoodsIconResloader = new ResLoader();
		}
		if ((Object)(object)icon != (Object)null && goodsBaseVo != null)
		{
			string assetName = goodsBaseVo.GetIcon();
			if (original && GetGoodsShapeById(goodsBaseVo.goodsID) != null)
			{
				assetName = goodsBaseVo.GetIcon() + "숃끕溫愄当;¾厽뻰";
			}
			icon.sprite = mGoodsIconResloader.LoadSync<Sprite>(assetName);
			((Component)icon).transform.localScale = new Vector3(0.565f, 0.565f, 1f);
			((Graphic)icon).SetNativeSize();
		}
	}

	public void SetGoodsIcon(Image icon, IGoodsBaseVo goodsBaseVo, ResLoader resLoader, Vector3 scale, bool original = true)
	{
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		if (mGoodsIconResloader == null)
		{
			mGoodsIconResloader = new ResLoader();
		}
		if ((Object)(object)icon != (Object)null && goodsBaseVo != null)
		{
			string assetName = goodsBaseVo.GetIcon();
			if (original && GetGoodsShapeById(goodsBaseVo.goodsID) != null)
			{
				assetName = goodsBaseVo.GetIcon() + "숃끕溫愄当;¾厽뻰";
			}
			icon.sprite = mGoodsIconResloader.LoadSync<Sprite>(assetName);
			((Component)icon).transform.localScale = scale;
			((Graphic)icon).SetNativeSize();
		}
	}

	public void LoadGoodsIcon(string iconName)
	{
		if (mGoodsIconResloader == null)
		{
			mGoodsIconResloader = new ResLoader();
		}
		mGoodsIconResloader.LoadSync<Sprite>(iconName);
	}

	public GameGoodsVo GetGameGoodsByMaterialVo(MakingMaterialVo materialVo)
	{
		if (materialVo == null)
		{
			return null;
		}
		return new GameGoodsVo
		{
			goodsID = materialVo.goodsID,
			GoodsState = materialVo.GoodsState,
			InitiativeSurplusNumber = materialVo.InitaitveSurplusNumber,
			InitiativeUseTotal = materialVo.InitaitveUseTotal,
			InitiativeCDStarTime = materialVo.InitaitveCDStarTime,
			PassiveSurplusNumber = materialVo.PassiveSurplusNumber,
			PassiveUseTotal = materialVo.PassiveUseTotal,
			PassiveCDStarTime = materialVo.PassiveCDStarTime
		};
	}

	public MakingMaterialVo GetMaterialVoByGameGoods(GameGoodsVo goodsVo)
	{
		if (goodsVo == null)
		{
			return null;
		}
		return new MakingMaterialVo
		{
			goodsID = goodsVo.goodsID,
			GoodsState = goodsVo.GoodsState,
			InitaitveSurplusNumber = goodsVo.InitiativeSurplusNumber,
			InitaitveUseTotal = goodsVo.InitiativeUseTotal,
			InitaitveCDStarTime = goodsVo.InitiativeCDStarTime,
			PassiveSurplusNumber = goodsVo.PassiveSurplusNumber,
			PassiveUseTotal = goodsVo.PassiveUseTotal,
			PassiveCDStarTime = goodsVo.PassiveCDStarTime
		};
	}

	public string GetStringByGameGoodsVo(GameGoodsVo goodsVo, bool excludeZero = true)
	{
		string text = "";
		if (goodsVo == null)
		{
			return text;
		}
		if (excludeZero && goodsVo.goodsID <= 0)
		{
			return text;
		}
		List<object> list = new List<object>();
		list.Add(goodsVo.goodsID);
		list.Add((int)goodsVo.GoodsState);
		list.Add(goodsVo.InitiativeSurplusNumber);
		list.Add(goodsVo.InitiativeUseTotal);
		list.Add(goodsVo.InitiativeCDStarTime);
		list.Add(goodsVo.PassiveSurplusNumber);
		list.Add(goodsVo.PassiveUseTotal);
		list.Add(goodsVo.PassiveCDStarTime);
		list.Add(goodsVo.MakingGoodsID);
		list.Add(goodsVo.MakingStarTime);
		List<List<object>> list2 = new List<List<object>>();
		if (goodsVo.MakeMaterials.Count > 0)
		{
			List<object> list3 = null;
			for (int i = 0; i < goodsVo.MakeMaterials.Count; i++)
			{
				list3 = new List<object>();
				list3.Add(goodsVo.MakeMaterials[i].goodsID);
				list3.Add((int)goodsVo.MakeMaterials[i].GoodsState);
				list3.Add(goodsVo.MakeMaterials[i].InitaitveSurplusNumber);
				list3.Add(goodsVo.MakeMaterials[i].InitaitveUseTotal);
				list3.Add(goodsVo.MakeMaterials[i].InitaitveCDStarTime);
				list3.Add(goodsVo.MakeMaterials[i].PassiveSurplusNumber);
				list3.Add(goodsVo.MakeMaterials[i].PassiveUseTotal);
				list3.Add(goodsVo.MakeMaterials[i].PassiveCDStarTime);
				list2.Add(list3);
			}
		}
		string item = JsonConvert.SerializeObject((object)list2);
		list.Add(item);
		string item2 = goodsVo.CollectList.ToJson((Formatting)0);
		list.Add(item2);
		list.Add(goodsVo.InitiativeCDIndex);
		list.Add(goodsVo.PassiveCDIndex);
		string item3 = goodsVo.DropoutList.ToJson((Formatting)0);
		list.Add(item3);
		list.Add(goodsVo.InitiativeAdditionalNumber);
		List<List<object>> list4 = new List<List<object>>();
		if (goodsVo.ChoiceRewards.Count > 0)
		{
			List<object> list5 = null;
			for (int j = 0; j < goodsVo.ChoiceRewards.Count; j++)
			{
				list5 = new List<object>();
				list5.Add(goodsVo.ChoiceRewards[j].type);
				list5.Add(goodsVo.ChoiceRewards[j].id);
				list5.Add(goodsVo.ChoiceRewards[j].num);
				list4.Add(list5);
			}
		}
		string item4 = JsonConvert.SerializeObject((object)list4);
		list.Add(item4);
		string item5 = goodsVo.MergeDropList.ToJson((Formatting)0);
		list.Add(item5);
		list.Add(goodsVo.UUID);
		list.Add(goodsVo.BubbleDiscount);
		list.Add(goodsVo.BuffValue);
		list.Add(goodsVo.BuffStarTime);
		list.Add(goodsVo.BuffEndTime);
		list.Add(goodsVo.BuffTotalTime);
		list.Add(goodsVo.ResetBuyCDTime);
		list.Add(goodsVo.BuyCdTotal);
		list.Add(goodsVo.GoodsUses);
		list.Add(goodsVo.BubbleGoodsOpt);
		list.Add(goodsVo.MakingTime);
		list.Add(goodsVo.residualValue);
		list.Add(goodsVo.StackID);
		return list.ToJson((Formatting)0);
	}

	public GameGoodsVo GetGameGoodsVoByString(string goodsStr)
	{
		if (goodsStr.IsNullOrEmpty())
		{
			return null;
		}
		List<object> list = goodsStr.FromJson<List<object>>();
		GameGoodsVo gameGoodsVo = new GameGoodsVo();
		if (list.Count > 0)
		{
			gameGoodsVo.goodsID = Convert.ToInt32(list[0]);
		}
		if (list.Count > 1)
		{
			gameGoodsVo.GoodsState = (GameGoodsState)Convert.ToInt32(list[1]);
		}
		if (list.Count > 2)
		{
			gameGoodsVo.InitiativeSurplusNumber = Convert.ToInt32(list[2]);
		}
		if (list.Count > 3)
		{
			gameGoodsVo.InitiativeUseTotal = Convert.ToInt32(list[3]);
		}
		if (list.Count > 4)
		{
			gameGoodsVo.InitiativeCDStarTime = Convert.ToInt64(list[4]);
		}
		if (list.Count > 5)
		{
			gameGoodsVo.PassiveSurplusNumber = Convert.ToInt32(list[5]);
		}
		if (list.Count > 6)
		{
			gameGoodsVo.PassiveUseTotal = Convert.ToInt32(list[6]);
		}
		if (list.Count > 7)
		{
			gameGoodsVo.PassiveCDStarTime = Convert.ToInt64(list[7]);
		}
		if (list.Count > 8)
		{
			gameGoodsVo.MakingGoodsID = Convert.ToInt32(list[8]);
		}
		if (list.Count > 9)
		{
			gameGoodsVo.MakingStarTime = Convert.ToInt64(list[9]);
		}
		if (list.Count > 10)
		{
			string text = list[10].ToString();
			if (text.IsNotNullAndEmpty())
			{
				gameGoodsVo.MakeMaterials = new List<MakingMaterialVo>();
				List<List<object>> list2 = new List<List<object>>();
				try
				{
					list2 = JsonConvert.DeserializeObject<List<List<object>>>(text);
				}
				catch
				{
				}
				if (list2 != null)
				{
					for (int i = 0; i < list2.Count; i++)
					{
						if (list2[i] != null && list2[i].Count == 8)
						{
							MakingMaterialVo item = new MakingMaterialVo
							{
								goodsID = Convert.ToInt32(list2[i][0]),
								GoodsState = (GameGoodsState)Convert.ToInt32(list2[i][1]),
								InitaitveSurplusNumber = Convert.ToInt32(list2[i][2]),
								InitaitveUseTotal = Convert.ToInt32(list2[i][3]),
								InitaitveCDStarTime = Convert.ToInt64(list2[i][4]),
								PassiveSurplusNumber = Convert.ToInt32(list2[i][5]),
								PassiveUseTotal = Convert.ToInt32(list2[i][6]),
								PassiveCDStarTime = Convert.ToInt64(list2[i][7])
							};
							gameGoodsVo.MakeMaterials.Add(item);
						}
					}
				}
			}
		}
		if (list.Count > 11)
		{
			string text2 = list[11].ToString();
			if (text2.IsNotNullAndEmpty())
			{
				try
				{
					gameGoodsVo.CollectList = JsonConvert.DeserializeObject<List<int>>(text2);
					if (gameGoodsVo.CollectList == null)
					{
						gameGoodsVo.CollectList = new List<int>();
					}
				}
				catch
				{
					try
					{
						gameGoodsVo.CollectList = ListFromJson<int>(text2);
						if (gameGoodsVo.CollectList == null)
						{
							gameGoodsVo.CollectList = new List<int>();
						}
					}
					catch
					{
						gameGoodsVo.CollectList = new List<int>();
					}
				}
			}
		}
		if (list.Count > 12)
		{
			gameGoodsVo.InitiativeCDIndex = Convert.ToInt32(list[12]);
		}
		if (list.Count > 13)
		{
			gameGoodsVo.PassiveCDIndex = Convert.ToInt32(list[13]);
		}
		if (list.Count > 14)
		{
			string text3 = list[14].ToString();
			if (text3.IsNotNullAndEmpty())
			{
				try
				{
					gameGoodsVo.DropoutList = JsonConvert.DeserializeObject<List<int>>(text3);
					if (gameGoodsVo.DropoutList == null)
					{
						gameGoodsVo.DropoutList = new List<int>();
					}
				}
				catch
				{
					try
					{
						gameGoodsVo.DropoutList = ListFromJson<int>(text3);
						if (gameGoodsVo.DropoutList == null)
						{
							gameGoodsVo.DropoutList = new List<int>();
						}
					}
					catch
					{
						gameGoodsVo.DropoutList = new List<int>();
					}
				}
			}
		}
		if (list.Count > 15)
		{
			gameGoodsVo.InitiativeAdditionalNumber = Convert.ToInt32(list[15]);
		}
		if (list.Count > 16)
		{
			string text4 = list[16].ToString();
			if (text4.IsNotNullAndEmpty())
			{
				gameGoodsVo.ChoiceRewards = new List<BaseData3VO>();
				List<List<object>> list3 = new List<List<object>>();
				try
				{
					list3 = JsonConvert.DeserializeObject<List<List<object>>>(text4);
				}
				catch
				{
				}
				if (list3 != null)
				{
					for (int j = 0; j < list3.Count; j++)
					{
						if (list3[j] != null && list3[j].Count == 3)
						{
							BaseData3VO item2 = new BaseData3VO
							{
								type = Convert.ToInt32(list3[j][0]),
								id = Convert.ToInt32(list3[j][1]),
								num = Convert.ToInt32(list3[j][2])
							};
							gameGoodsVo.ChoiceRewards.Add(item2);
						}
					}
				}
			}
		}
		if (list.Count > 17)
		{
			string text5 = list[17].ToString();
			if (text5.IsNotNullAndEmpty())
			{
				try
				{
					gameGoodsVo.MergeDropList = JsonConvert.DeserializeObject<List<int>>(text5);
					if (gameGoodsVo.MergeDropList == null)
					{
						gameGoodsVo.MergeDropList = new List<int>();
					}
				}
				catch
				{
					try
					{
						gameGoodsVo.MergeDropList = ListFromJson<int>(text5);
						if (gameGoodsVo.MergeDropList == null)
						{
							gameGoodsVo.MergeDropList = new List<int>();
						}
					}
					catch
					{
						gameGoodsVo.MergeDropList = new List<int>();
					}
				}
			}
		}
		if (list.Count > 18)
		{
			gameGoodsVo.UUID = list[18].ToString();
		}
		if (list.Count > 19)
		{
			gameGoodsVo.BubbleDiscount = Convert.ToInt32(list[19]);
		}
		if (list.Count > 20)
		{
			gameGoodsVo.BuffValue = Convert.ToInt32(list[20]);
		}
		if (list.Count > 21)
		{
			gameGoodsVo.BuffStarTime = Convert.ToInt64(list[21]);
		}
		if (list.Count > 22)
		{
			gameGoodsVo.BuffEndTime = Convert.ToInt64(list[22]);
		}
		if (list.Count > 23)
		{
			gameGoodsVo.BuffTotalTime = Convert.ToInt32(list[23]);
		}
		if (list.Count > 24)
		{
			gameGoodsVo.ResetBuyCDTime = Convert.ToInt32(list[24]);
		}
		if (list.Count > 25)
		{
			gameGoodsVo.BuyCdTotal = Convert.ToInt32(list[25]);
		}
		if (list.Count > 26)
		{
			gameGoodsVo.GoodsUses = Convert.ToInt32(list[26]);
		}
		if (list.Count > 27)
		{
			gameGoodsVo.BubbleGoodsOpt = Convert.ToInt32(list[27]);
		}
		if (list.Count > 28)
		{
			gameGoodsVo.MakingTime = Convert.ToInt32(list[28]);
		}
		if (list.Count > 29)
		{
			gameGoodsVo.residualValue = list[29].ToFloat();
		}
		if (list.Count > 30)
		{
			gameGoodsVo.StackID = Convert.ToInt32(list[30]);
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById != null && IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) && gameGoodsVo.GoodsState == GameGoodsState.InitiativeProduce && (gameGoodsVo.CollectList == null || gameGoodsVo.CollectList.Count == 0))
		{
			gameGoodsVo.GoodsState = GameGoodsState.CanWork;
		}
		return gameGoodsVo;
	}

	public string ListToJson<T>(List<T> l)
	{
		return JsonUtility.ToJson((object)new Serialization<T>(l));
	}

	public List<T> ListFromJson<T>(string str)
	{
		return JsonUtility.FromJson<Serialization<T>>(str).ToList();
	}

	public bool CanOpenBox()
	{
		Dictionary<int, GameGoodsVo>.Enumerator enumerator = GetLevelMap(copyData: false).GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameGoodsVo value = enumerator.Current.Value;
			if (value != null)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById != null && IGoodsBaseVo.IsTreasureBox(goodsBaseVoById.type) && value.GoodsState == GameGoodsState.CoolDown)
				{
					return false;
				}
			}
		}
		List<GameGoodsVo> gameBagGoodsList = GetGameBagGoodsList(copyData: false);
		for (int i = 0; i < gameBagGoodsList.Count; i++)
		{
			GameGoodsVo value = gameBagGoodsList[i];
			if (value != null)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById != null && IGoodsBaseVo.IsTreasureBox(goodsBaseVoById.type) && value.GoodsState == GameGoodsState.CoolDown)
				{
					return false;
				}
			}
		}
		return true;
	}

	public void PlayAudio(int triggerType, int triggerParameter = 0, IndependentType independentType = IndependentType.None, int goodsID = 0)
	{
		if (IsPreloadView)
		{
			return;
		}
		string text = null;
		switch (triggerType)
		{
		case 1:
			if (goodsID > 0)
			{
				BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsID, EBoardAudioAction.Merge);
				int num = triggerParameter - 1;
				if (num < 1)
				{
					num = 1;
				}
				if (num > 12)
				{
					num = 12;
				}
				BoardAudioHelper.PlayMergeScale(num);
			}
			else
			{
				int num2 = triggerParameter - 1;
				if (num2 < 1)
				{
					num2 = 1;
				}
				if (num2 > 12)
				{
					num2 = 12;
				}
				text = "녭剥㐊\0透\ud961" + num2;
			}
			break;
		case 2:
			BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsID, EBoardAudioAction.Product);
			break;
		case 3:
			BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsID, EBoardAudioAction.Product);
			break;
		case 4:
			text = "숈끏徻按托7\u0082厁뛫\u009f赴";
			break;
		case 5:
			if (independentType == IndependentType.MergeIndependent && ObjectManager.GetInstance().independentMergeModel.ThemeID == 2)
			{
				text = "숏끔溽搐楄7¾厽숵끔碭弶敖=æ句녢割㠰\0逞\ud970";
				break;
			}
			if (independentType == IndependentType.MergeIndependent && ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
			{
				text = "숏끔溽搐楄7¾厽숵끔炭收敄3Æ叅숃끥炽瀄片3Æ叅숵끛沫昶敜3¶厵";
				break;
			}
			switch (independentType)
			{
			case IndependentType.DiggingTreasure:
				text = "숋끈犼攌瑇'Î反수끙榸渙归&ª厩숃끥榽渄杓5ª厩뻻";
				break;
			case IndependentType.StageMergeIndependent:
				text = "숍끎涸攎獑\rº厹숵끝玼愶牐;Ò发숋끊梼愌灆\r¦厥恀䝾";
				break;
			case IndependentType.Independent_Basic:
				text = ObjectManager.GetInstance().independentBasicModel.GetUIResourceName(IndependentBasicResName.Basic_Covered_Sound.ToString());
				AudioManager.Instance.StopEffect(text);
				break;
			case IndependentType.StageMergeBasic:
				text = "숍끎涸攎獑\rº厹숵끝玼愶牐;Ò发숋끊梼愌灆\r¦厥恀䝾";
				if (ObjectManager.GetInstance().idnStageBasicModel.ThemeID != 1)
				{
					text = "숵끏碽弶慇4æ句숅끔徵瘆畗9\u0082厁숄끖溼攅慀;¾厽";
				}
				break;
			case IndependentType.IndStageMerge:
				text = "숵끏碽弶慇4æ句숙끒㖸㜚灑6Ù变灟u4끬q就䣃";
				break;
			case IndependentType.Independent_Mining:
				text = ObjectManager.GetInstance().independentMiningModel.GetUIResourceName(IndependentMiningResName.Mining_Aud_Iceunlock.ToString());
				break;
			case IndependentType.Independent_Farm:
				text = "숵끏碽弶慇4æ句숇끎溼氈楫'¾厽숵끙溲朶潙7¾厽朣䩱";
				break;
			default:
				text = "숵끕疡猶扗 Ú叙뻴";
				break;
			}
			break;
		case 6:
			text = "숉끞憆爊捘7\u008a厉";
			break;
		case 7:
			text = "숅끕璺弆捚'Ö叕녢割㠰\0逞\ud970";
			break;
		case 8:
			text = "숎끓榫猏扫6ª厩划撯\ud9d8ņ";
			break;
		case 9:
			text = "숅끈璫椆敆\rÖ叕뻬";
			break;
		case 10:
			text = "숆끞犺弇捑3Î反듲\u009f赴";
			break;
		case 11:
			BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsID, EBoardAudioAction.Put);
			break;
		case 12:
			text = "숇끎殼攈楀3²厱뛕ï赴";
			break;
		case 13:
			text = "숇끎憼搈楆7\u008a厉뻥";
			break;
		case 14:
			text = "숏끔澯爐楚&Â叁匝橯ā讕衮";
			break;
		case 15:
			text = "숏끔澯爐楚&Â叁녹䡣㰶\0逕\ud95d";
			break;
		case 16:
			text = "숋끥掴栌浓;\u0092厑숇끎榆挈慁!ª厩뺭";
			break;
		case 17:
			text = "숋끥掴栌浓;\u0092厑숇끎榆挈慁!ª厩뺮";
			break;
		case 18:
			text = "숅끥涵愆浂7º厹숇끖榆挈楁!ª厩";
			break;
		case 19:
			text = "숟끥撺张浄;\u0096厕匩橵ā讥譣";
			break;
		case 20:
			text = "숏끓掴欐瑖3\u0092厑녟幭\u2004\0逓\ud971";
			break;
		case 21:
			text = "숂끛斺弃浝<\u009a厙숵끞施洶慝&\u009a厙";
			break;
		case 22:
			text = "숂끛斺弃浝<\u009a厙扣a4끭c䀹㫍";
			break;
		case 23:
			BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsID, EBoardAudioAction.Drop);
			break;
		}
		if (text.IsNotNullAndEmpty())
		{
			AudioManager.Instance.PlayEffect(text);
		}
	}

	public List<int> GetOwnedCreatorSeries()
	{
		List<int> list = new List<int>();
		foreach (KeyValuePair<int, IGoodsBaseVo> item in mMaxLvGoodsDic)
		{
			if (item.Value != null && IGoodsBaseVo.IsCreator(item.Value.type))
			{
				list.Add(item.Key);
			}
		}
		list.DeleteRepeat();
		return list;
	}

	public List<int> GetCookingMatsInInstrument(int cookingGoodsID)
	{
		List<int> list = new List<int>();
		if (mOwnerMachines == null)
		{
			return list;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(cookingGoodsID);
		if (goodsCookingVO == null)
		{
			return list;
		}
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerMachines[i].goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			List<int> list2 = new List<int>();
			if (goodsBaseVoById.series == goodsCookingVO.instrumentType && mOwnerMachines[i].GoodsState == GameGoodsState.CanWork)
			{
				for (int j = 0; j < mOwnerMachines[i].MakeMaterials.Count; j++)
				{
					if (goodsCookingVO.CheckContainByGoodsId(mOwnerMachines[i].MakeMaterials[j].goodsID))
					{
						list2.Add(mOwnerMachines[i].MakeMaterials[j].goodsID);
					}
				}
			}
			if (list2.Count > list.Count)
			{
				list = list2;
			}
		}
		return list;
	}

	public bool HasCookingUnTakeout(int cookingGoodsID)
	{
		bool flag = false;
		if (mOwnerMachines == null)
		{
			return flag;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(cookingGoodsID);
		if (goodsCookingVO == null)
		{
			return flag;
		}
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerMachines[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType && mOwnerMachines[i].GoodsState == GameGoodsState.InitiativeProduce && mOwnerMachines[i].MakingGoodsID == cookingGoodsID)
				{
					flag = true;
				}
			}
		}
		return flag;
	}

	public bool IsCooking(int cookingGoodsID)
	{
		bool flag = false;
		if (mOwnerMachines == null)
		{
			return flag;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(cookingGoodsID);
		if (goodsCookingVO == null)
		{
			return flag;
		}
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerMachines[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType && mOwnerMachines[i].GoodsState == GameGoodsState.Working && mOwnerMachines[i].MakingGoodsID == cookingGoodsID)
				{
					flag = true;
				}
			}
		}
		return flag;
	}

	public int GetWorkingGoodsNum(int goodsID)
	{
		int num = 0;
		if (mOwnerMachines == null)
		{
			return num;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerMachines[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType && mOwnerMachines[i].MakingGoodsID == goodsID && (mOwnerMachines[i].GoodsState == GameGoodsState.InitiativeProduce || mOwnerMachines[i].GoodsState == GameGoodsState.Working))
				{
					num++;
				}
			}
		}
		return num;
	}

	public int GetCookedGoodsNumWaitTakeoutNum(int goodsID)
	{
		int num = 0;
		if (mOwnerMachines == null)
		{
			return num;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerMachines[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType && mOwnerMachines[i].MakingGoodsID == goodsID && mOwnerMachines[i].GoodsState == GameGoodsState.InitiativeProduce)
				{
					num++;
				}
			}
		}
		return num;
	}

	public (int, int) GetWorkingAndCookedGoodsNum(int goodsID)
	{
		int num = 0;
		int num2 = 0;
		if (mOwnerMachines == null)
		{
			return (num, num2);
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return (num, num2);
		}
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerMachines[i].goodsID);
			if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType && mOwnerMachines[i].MakingGoodsID == goodsID)
			{
				if (mOwnerMachines[i].GoodsState == GameGoodsState.Working)
				{
					num++;
				}
				if (mOwnerMachines[i].GoodsState == GameGoodsState.InitiativeProduce)
				{
					num2++;
				}
			}
		}
		return (num, num2);
	}

	public Dictionary<int, int> GetWorkingGoodsNumDic()
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int i = 0; i < mOwnerMachines.Count; i++)
		{
			if (mOwnerMachines[i] != null && (mOwnerMachines[i].GoodsState == GameGoodsState.InitiativeProduce || mOwnerMachines[i].GoodsState == GameGoodsState.Working))
			{
				if (!dictionary.ContainsKey(mOwnerMachines[i].MakingGoodsID))
				{
					dictionary.Add(mOwnerMachines[i].MakingGoodsID, 0);
				}
				dictionary[mOwnerMachines[i].MakingGoodsID]++;
			}
		}
		return dictionary;
	}

	public Dictionary<int, int> GetOwnAndWorkingGoodsNumDic()
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (KeyValuePair<int, int> item in Singleton<GameLevelManager>.Instance.GetOwnerGoodsNum())
		{
			if (!dictionary.ContainsKey(item.Key))
			{
				dictionary.Add(item.Key, item.Value);
			}
			else
			{
				dictionary[item.Key] += item.Value;
			}
		}
		foreach (KeyValuePair<int, int> item2 in Singleton<GameLevelManager>.Instance.GetWorkingGoodsNumDic())
		{
			if (!dictionary.ContainsKey(item2.Key))
			{
				dictionary.Add(item2.Key, item2.Value);
			}
			else
			{
				dictionary[item2.Key] += item2.Value;
			}
		}
		return dictionary;
	}

	public string GetGoodsDescription(IGoodsBaseVo goodsBaseVo, int stackNum = 1)
	{
		IGoodsCollectVo goodsCollectVoById = GetGoodsCollectVoById(goodsBaseVo.goodsID);
		if (goodsCollectVoById != null && (goodsCollectVoById.itemId == 1005 || goodsCollectVoById.itemId == 1012 || goodsCollectVoById.itemId == 1013))
		{
			string text = LocalizedLang.GetUIValueByKey(goodsBaseVo.desc, new List<string> { TimeManager.Instance.GetTimeFormatByDHMS(goodsCollectVoById.amount) });
			if (GameLevelDefine.IsGoodsStackable(goodsBaseVo))
			{
				text = ((stackNum < 99) ? (text + LocalizedLang.GetUIValueByKey("숚끈炶攛火!Æ叅숚끞榬減敫!ª厩쉟끖於獠杫6\u009a厙⑤\u0b49")) : (text + LocalizedLang.GetUIValueByKey("숚끈炶氛火!Æ叅숵끎班〶楐7Ò发뺮")));
			}
			return text;
		}
		string text2 = LocalizedLang.GetUIValueByKey(goodsBaseVo.desc);
		if (GameLevelDefine.IsGoodsStackable(goodsBaseVo))
		{
			text2 = ((stackNum < 99) ? (text2 + LocalizedLang.GetUIValueByKey("숚끈炶攛火!Æ叅숚끞榬減敫!ª厩쉟끖於獠杫6\u009a厙⑤\u0b49")) : (text2 + LocalizedLang.GetUIValueByKey("숚끈炶氛火!Æ叅숵끎班〶楐7Ò发뺮")));
		}
		return text2;
	}

	public Dictionary<int, int> MergeDictionary(Dictionary<int, int> dictionary, Dictionary<int, int> mergeDic)
	{
		foreach (KeyValuePair<int, int> item in mergeDic)
		{
			if (dictionary.ContainsKey(item.Key))
			{
				if (item.Value > dictionary[item.Key])
				{
					dictionary[item.Key] = item.Value;
				}
			}
			else
			{
				dictionary.Add(item.Key, item.Value);
			}
		}
		return dictionary;
	}

	public float GetMakingRemainingTime(GameGoodsVo gameGoodsVo)
	{
		float num = -1f;
		if (gameGoodsVo == null)
		{
			return num;
		}
		return GetMakingTimeByGameGoods(gameGoodsVo) - (ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime);
	}

	public IDynamicBoxGoodsVo GetRandomDynamicVo(List<IDynamicBoxGoodsVo> dropList, int dynamicType = 0)
	{
		if (dropList == null || dropList.Count == 0)
		{
			return null;
		}
		List<int> list = new List<int>();
		if (dynamicType > 0)
		{
			Dictionary<int, int> lackMaterialNumDic = ObjectManager.GetInstance().gameOrdersModel.LackMaterialNumDic;
			if (lackMaterialNumDic != null)
			{
				foreach (KeyValuePair<int, int> item in lackMaterialNumDic)
				{
					if (GetGoodsNumById(item.Key) >= item.Value)
					{
						continue;
					}
					IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(item.Key);
					if (goodsBaseVoById == null)
					{
						continue;
					}
					if (!list.Contains(goodsBaseVoById.series))
					{
						list.Add(goodsBaseVoById.series);
					}
					int derivativeSourceID = GetDerivativeSourceID(goodsBaseVoById);
					if (derivativeSourceID > 0)
					{
						IGoodsBaseVo goodsBaseVoById2 = GetGoodsBaseVoById(derivativeSourceID);
						if (goodsBaseVoById2 != null && !list.Contains(goodsBaseVoById2.series))
						{
							list.Add(goodsBaseVoById2.series);
						}
					}
				}
			}
		}
		List<int> list2 = new List<int>();
		for (int i = 0; i < dropList.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById3 = GetGoodsBaseVoById(dropList[i].goodsID);
			switch (dynamicType)
			{
			case 1:
				if (goodsBaseVoById3 != null && list.Contains(goodsBaseVoById3.series))
				{
					list2.Add(dropList[i].highWeight);
				}
				else
				{
					list2.Add(dropList[i].weight);
				}
				break;
			case 2:
				if (goodsBaseVoById3 != null && list.Contains(goodsBaseVoById3.series))
				{
					list2.Add(dropList[i].weight);
				}
				else
				{
					list2.Add(dropList[i].highWeight);
				}
				break;
			default:
				list2.Add(dropList[i].weight);
				break;
			}
		}
		Random random = new Random(GameLevelDefine.GetRandomSeed());
		int num = GameLevelDefine.WeightsSum(list2);
		if (num == 0)
		{
			return null;
		}
		int num2 = random.Next(1, num);
		int num3 = 0;
		for (int j = 0; j < list2.Count; j++)
		{
			num3 += list2[j];
			if (num3 >= num2)
			{
				return dropList[j];
			}
		}
		return null;
	}

	public IDynamicBoxGoodsVo GetDynamicBoxFixedDrop(int boxID, List<IDynamicBoxGoodsVo> dropList)
	{
		if (dropList == null || dropList.Count == 0)
		{
			return null;
		}
		bool flag = false;
		int dropType = 0;
		int num = -1;
		for (int i = 0; i < dropList.Count; i++)
		{
			dropType = dropList[i].dropType;
			if (dropList[i].fixedDropNum > 0)
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			return null;
		}
		num = ObjectManager.GetInstance().gameLevelModel.GetDynamicBoxDropGoods(boxID, dropType);
		if (num <= 0)
		{
			List<BaseData2VO> list = new List<BaseData2VO>();
			for (int j = 0; j < dropList.Count; j++)
			{
				int num2 = ((dropList[j].fixedDropNum <= 0) ? 1 : dropList[j].fixedDropNum);
				list.Add(new BaseData2VO
				{
					id = dropList[j].goodsID,
					num = num2
				});
			}
			List<int> dropList2 = Singleton<GameLevelManager>.Instance.DynamicBoxFixedDropList(list);
			ObjectManager.GetInstance().gameLevelModel.SetDynamicBoxDropGoods(boxID, dropType, dropList2);
			num = ObjectManager.GetInstance().gameLevelModel.GetDynamicBoxDropGoods(boxID, dropType);
		}
		if (num > 0)
		{
			for (int k = 0; k < dropList.Count; k++)
			{
				if (dropList[k].goodsID == num)
				{
					return dropList[k];
				}
			}
		}
		return null;
	}

	public void GetTakeoutInstrumentUnOrderMat(ref GameLevelGrid CurrentMachine, ref int CurrentUnconformityGoods)
	{
		GameLevelGrid gameLevelGrid = null;
		int num = 0;
		List<IGoodsCookingVO> orderNeedCookingVOs = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedCookingVOs();
		GameObject val = GameObject.Find("숏끛皴攐䝸7Þ叝숏끬䎰氐汃z\u0012匑刖梃\ud9c7ĝ");
		if ((Object)(object)val == (Object)null)
		{
			return;
		}
		Dictionary<int, GameLevelGrid>.Enumerator enumerator = val.GetComponent<GameLevelViewLogic>().GridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameLevelGrid value = enumerator.Current.Value;
			int resultExcessGoods = 0;
			CheckOrderTakeoutMat(value, orderNeedCookingVOs, ref resultExcessGoods);
			if (resultExcessGoods > 0)
			{
				gameLevelGrid = value;
				num = resultExcessGoods;
				break;
			}
		}
		if ((Object)(object)gameLevelGrid != (Object)null && num > 0)
		{
			CurrentMachine = gameLevelGrid;
			CurrentUnconformityGoods = num;
		}
		else
		{
			CurrentMachine = null;
			CurrentUnconformityGoods = 0;
		}
	}

	public void CheckOrderTakeoutMat(GameLevelGrid tempGrid, List<IGoodsCookingVO> cookingGoods, ref int resultExcessGoods)
	{
		if ((Object)(object)tempGrid == (Object)null || tempGrid.IsLock)
		{
			return;
		}
		GameGoodsVo gameGoodsVo = tempGrid.GetGameGoodsVo();
		if (gameGoodsVo == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVo = tempGrid.GetGoodsBaseVo();
		if (goodsBaseVo == null || !IGoodsBaseVo.IsInstrument(goodsBaseVo.type) || gameGoodsVo.GoodsState != GameGoodsState.CanWork || gameGoodsVo.MakeMaterials.Count <= 0 || cookingGoods.Count <= 0)
		{
			return;
		}
		List<int> makeMaterialIDs = gameGoodsVo.GetMakeMaterialIDs();
		foreach (IGoodsCookingVO cookingGood in cookingGoods)
		{
			_ = cookingGood;
		}
		foreach (int item in makeMaterialIDs)
		{
			_ = item;
		}
		bool flag = true;
		int num = 0;
		for (int i = 0; i < cookingGoods.Count; i++)
		{
			if (cookingGoods[i] == null || cookingGoods[i].instrumentType != goodsBaseVo.series)
			{
				continue;
			}
			if (cookingGoods[i].CheckContainByMaterials(makeMaterialIDs))
			{
				flag = false;
				break;
			}
			if (num != 0)
			{
				continue;
			}
			List<int> list = new List<int>();
			for (int j = 0; j < cookingGoods[i].GetMaterials().Count; j++)
			{
				list.Add(cookingGoods[i].GetMaterials()[j].id);
			}
			for (int k = 0; k < makeMaterialIDs.Count; k++)
			{
				if (!list.Contains(makeMaterialIDs[k]))
				{
					num = makeMaterialIDs[k];
					break;
				}
			}
		}
		if (flag && num > 0)
		{
			resultExcessGoods = num;
		}
	}

	public void GetInstrumentCanOrderCookingData(ref GameLevelGrid CurrentMachine)
	{
		GameLevelViewLogic gameLevelViewLogic = GetGameLevelViewLogic();
		if ((Object)(object)gameLevelViewLogic == (Object)null)
		{
			return;
		}
		GameLevelGrid gameLevelGrid = null;
		List<IGoodsCookingVO> orderNeedCookingVOs_onlySingleLayer = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedCookingVOs_onlySingleLayer();
		if (orderNeedCookingVOs_onlySingleLayer.Count == 0)
		{
			return;
		}
		Dictionary<int, GameLevelGrid>.Enumerator enumerator = gameLevelViewLogic.GridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameLevelGrid value = enumerator.Current.Value;
			if ((Object)(object)value == (Object)null || value.IsLock)
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = value.GetGameGoodsVo();
			if (gameGoodsVo == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVo = value.GetGoodsBaseVo();
			if (goodsBaseVo == null || !IGoodsBaseVo.IsInstrument(goodsBaseVo.type) || gameGoodsVo.GoodsState != GameGoodsState.CanWork || gameGoodsVo.MakeMaterials.Count <= 0)
			{
				continue;
			}
			List<int> list = new List<int>();
			new List<int>();
			for (int i = 0; i < gameGoodsVo.MakeMaterials.Count; i++)
			{
				if (gameGoodsVo.MakeMaterials[i] != null)
				{
					list.Add(gameGoodsVo.MakeMaterials[i].goodsID);
				}
			}
			bool flag = false;
			for (int j = 0; j < orderNeedCookingVOs_onlySingleLayer.Count; j++)
			{
				if (orderNeedCookingVOs_onlySingleLayer[j].goodsID == gameGoodsVo.MakingGoodsID)
				{
					flag = true;
					break;
				}
			}
			if (flag)
			{
				gameLevelGrid = value;
				break;
			}
		}
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			CurrentMachine = gameLevelGrid;
		}
		else
		{
			CurrentMachine = null;
		}
	}

	public static GameLevelViewLogic GetGameLevelViewLogic()
	{
		GameObject val = GameObject.Find("숏끛皴攐䝸7Þ叝숏끬䎰氐汃z\u0012匑刖梃\ud9c7ĝ");
		if ((Object)(object)val == (Object)null)
		{
			return null;
		}
		GameLevelViewLogic component = val.GetComponent<GameLevelViewLogic>();
		if ((Object)(object)component == (Object)null)
		{
			return null;
		}
		return component;
	}

	public bool IsMaxLevelGoods(int goodsID)
	{
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		return GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level + 1) == null;
	}

	public int GetOwnGeneratorSeriesNum()
	{
		Dictionary<int, bool> dictionary = new Dictionary<int, bool>();
		for (int i = 0; i < mOwnerCreators.Count; i++)
		{
			if (mOwnerCreators[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerCreators[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.activityType <= 0 && !dictionary.ContainsKey(goodsBaseVoById.series))
				{
					dictionary.Add(goodsBaseVoById.series, value: true);
				}
			}
		}
		return dictionary.Count;
	}

	public int EmptyGridNum()
	{
		int num = 0;
		foreach (KeyValuePair<int, GameGoodsVo> item in GetLevelMap(copyData: false))
		{
			if (item.Key > 0 && GridUnlock(item.Key) && item.Value == null)
			{
				num++;
			}
		}
		return num;
	}

	public int GetEmptyGridNum()
	{
		Dictionary<int, GameGoodsVo> dictionary = GetLevelMap(copyData: false);
		int num = 0;
		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= 7; j++)
			{
				int num2 = i * 10 + j;
				if (IsUnlockGrid(num2))
				{
					dictionary.TryGetValue(num2, out var value);
					if (value == null || value.goodsID <= 0)
					{
						num++;
					}
				}
			}
		}
		return num;
	}

	public List<int> GetOwnerCreatorSeries()
	{
		List<int> list = new List<int>();
		for (int i = 0; i < mOwnerCreators.Count; i++)
		{
			if (mOwnerCreators[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(mOwnerCreators[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.activityType == 0 && (goodsBaseVoById.type == 2 || goodsBaseVoById.type == 4))
				{
					list.Add(goodsBaseVoById.series);
				}
			}
		}
		list.DeleteRepeat();
		return list;
	}

	public void InitBagList()
	{
		mBagUnlock_lv.Clear();
		mBagUnlock_coin.Clear();
		List<IBagVo> list = StaticDataBase<StaticDataManager>.GetInstance().LevelBagMap.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].coinLv >= 0)
			{
				if (list[i].coin > 0)
				{
					mBagUnlock_coin.Add(list[i]);
				}
				else
				{
					mBagUnlock_lv.Add(list[i]);
				}
			}
		}
		if (mBagUnlock_lv.Count > 1)
		{
			mBagUnlock_lv.Sort((IBagVo bag1, IBagVo bag2) => bag1.index - bag2.index);
		}
		if (mBagUnlock_coin.Count > 1)
		{
			mBagUnlock_coin.Sort((IBagVo bag1, IBagVo bag2) => bag1.index - bag2.index);
		}
		JudgeUnlockGridByUpLv();
		SetNextBagUnlockLv();
	}

	public IBagVo FindNextCoinBagVO()
	{
		int gameBagBuyNum_Coin = ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Coin();
		if (gameBagBuyNum_Coin >= mBagUnlock_coin.Count)
		{
			return null;
		}
		return mBagUnlock_coin[gameBagBuyNum_Coin];
	}

	public void JudgeUnlockGridByUpLv()
	{
		int gameBagBuyNum_Lv = ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Lv();
		int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
		int num = 0;
		for (int i = 0; i < mBagUnlock_lv.Count; i++)
		{
			if (i >= gameBagBuyNum_Lv)
			{
				IBagVo bagVo = mBagUnlock_lv[i];
				if (bagVo.coinLv <= playerLevel && bagVo.coin <= 0)
				{
					num++;
				}
			}
		}
		if (num > 0)
		{
			AddBagBuyNum_Lv(num);
			AddBagOpenNum(num);
			ObjectManager.GetInstance().gameLevelModel.BagAnalytics("獬v4끦t\ud937䯍", 0);
		}
		int num2 = 0;
		for (int j = 0; j < mBagUnlock_lv.Count; j++)
		{
			IBagVo bagVo = mBagUnlock_lv[j];
			if (bagVo.coinLv <= playerLevel && bagVo.coin <= 0)
			{
				num2++;
			}
		}
		int gameBagBuyNum_Lv2 = ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Lv();
		if (num2 > gameBagBuyNum_Lv2)
		{
			AddBagBuyNum_Lv(num2 - num);
			AddBagOpenNum(num2 - num);
			ObjectManager.GetInstance().gameLevelModel.BagAnalytics("獬v4끦t\ud937䯍", 0);
		}
	}

	public void SetNextBagUnlockLv()
	{
		if (ObjectManager.GetInstance().userDataModel.NextBagUnlockLv == -1)
		{
			int gameBagOpenNum = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenNum();
			int bagMaxinum = GetBagMaxinum();
			if (gameBagOpenNum >= bagMaxinum || ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Lv() >= mBagUnlock_lv.Count)
			{
				return;
			}
			int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
			IBagVo bagVo = null;
			for (int i = 0; i < mBagUnlock_lv.Count; i++)
			{
				IBagVo bagVo2 = mBagUnlock_lv[i];
				if (bagVo2 != null && bagVo2.coin <= 0 && bagVo2.coinLv > playerLevel)
				{
					if (bagVo == null)
					{
						bagVo = bagVo2;
					}
					else if (bagVo.coinLv > bagVo2.coinLv)
					{
						bagVo = bagVo2;
					}
				}
			}
			if (bagVo == null)
			{
				return;
			}
			int num = 0;
			for (int j = 0; j < mBagUnlock_lv.Count; j++)
			{
				IBagVo bagVo2 = mBagUnlock_lv[j];
				if (bagVo2 != null && bagVo2.coin <= 0 && bagVo2.coinLv == bagVo.coinLv)
				{
					num++;
				}
			}
			ObjectManager.GetInstance().userDataModel.SetNextBagUnlock(bagVo.coinLv, num);
		}
		else
		{
			ResetBagUnlockUpLv();
		}
	}

	private void ResetBagUnlockUpLv()
	{
		if (ObjectManager.GetInstance().userDataModel.NextBagUnlockLv <= -1)
		{
			return;
		}
		int gameBagOpenNum = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenNum();
		int bagMaxinum = GetBagMaxinum();
		if (gameBagOpenNum >= bagMaxinum)
		{
			ObjectManager.GetInstance().userDataModel.SetNextBagUnlock(-1, 1);
			return;
		}
		if (ObjectManager.GetInstance().gameLevelModel.GetGameBagBuyNum_Lv() >= mBagUnlock_lv.Count)
		{
			ObjectManager.GetInstance().userDataModel.SetNextBagUnlock(-1, 1);
			return;
		}
		int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
		IBagVo bagVo = null;
		for (int i = 0; i < mBagUnlock_lv.Count; i++)
		{
			IBagVo bagVo2 = mBagUnlock_lv[i];
			if (bagVo2 != null && bagVo2.coin <= 0 && bagVo2.coinLv > playerLevel)
			{
				if (bagVo == null)
				{
					bagVo = bagVo2;
				}
				else if (bagVo.coinLv > bagVo2.coinLv)
				{
					bagVo = bagVo2;
				}
			}
		}
		if (bagVo != null)
		{
			if (bagVo.coinLv >= ObjectManager.GetInstance().userDataModel.NextBagUnlockLv)
			{
				return;
			}
			int num = 0;
			for (int j = 0; j < mBagUnlock_lv.Count; j++)
			{
				IBagVo bagVo2 = mBagUnlock_lv[j];
				if (bagVo2 != null && bagVo2.coin <= 0 && bagVo2.coinLv == bagVo.coinLv)
				{
					num++;
				}
			}
			ObjectManager.GetInstance().userDataModel.SetNextBagUnlock(bagVo.coinLv, num);
		}
		else
		{
			ObjectManager.GetInstance().userDataModel.SetNextBagUnlock(-1, 1);
		}
	}

	public void UnlockBagByUpLv()
	{
		int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
		if (ObjectManager.GetInstance().userDataModel.NextBagUnlockLv <= -1 || playerLevel < ObjectManager.GetInstance().userDataModel.NextBagUnlockLv)
		{
			return;
		}
		int num = 0;
		for (int i = 0; i < mBagUnlock_lv.Count; i++)
		{
			IBagVo bagVo = mBagUnlock_lv[i];
			if (bagVo != null && bagVo.coin <= 0 && bagVo.coinLv == ObjectManager.GetInstance().userDataModel.NextBagUnlockLv)
			{
				num++;
			}
		}
		int num2 = ObjectManager.GetInstance().userDataModel.NextBagUnlockNum;
		if (num2 != num)
		{
			num2 = num;
		}
		if (num2 <= 0)
		{
			num2 = 1;
		}
		AddBagBuyNum_Lv(num2);
		AddBagOpenNum(num2);
		ObjectManager.GetInstance().gameLevelModel.BagAnalytics("獬v4끦t\ud937䯍", 0);
		ObjectManager.GetInstance().userDataModel.SetNextBagUnlock(-1, 1);
		SetNextBagUnlockLv();
	}

	private IBagVo GetNextBagByLv()
	{
		int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
		IBagVo bagVo = null;
		for (int i = 0; i < mBagUnlock_lv.Count; i++)
		{
			IBagVo bagVo2 = mBagUnlock_lv[i];
			if (bagVo2 != null && bagVo2.coin <= 0 && bagVo2.coinLv > playerLevel)
			{
				if (bagVo == null)
				{
					bagVo = bagVo2;
				}
				else if (bagVo.coinLv > bagVo2.coinLv)
				{
					bagVo = bagVo2;
				}
			}
		}
		return bagVo;
	}

	public GameLevelGrid FindGridByGameGoodsVo(GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return null;
		}
		if ((Object)(object)mGameLevelViewLogic == (Object)null)
		{
			return null;
		}
		if (mGameLevelViewLogic.mGridObjectDic == null)
		{
			return null;
		}
		string uUID = gameGoodsVo.UUID;
		foreach (KeyValuePair<int, GameLevelGrid> item in mGameLevelViewLogic.mGridObjectDic)
		{
			GameLevelGrid value = item.Value;
			if ((Object)(object)value == (Object)null)
			{
				continue;
			}
			GameGoodsVo gameGoodsVo2 = value.GetGameGoodsVo();
			if (gameGoodsVo2 != null)
			{
				if (!uUID.IsNullOrEmpty() && gameGoodsVo2.UUID == uUID)
				{
					return value;
				}
				if (gameGoodsVo2 == gameGoodsVo)
				{
					return value;
				}
			}
		}
		return null;
	}

	public List<GameGoodsVo> GetHighestLevelCookedInstrumentListByMachineId(int machineGoodsId)
	{
		if (result != null)
		{
			result.Clear();
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(machineGoodsId);
			if (goodsBaseVoById == null)
			{
				return result;
			}
			if (!IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
			{
				return result;
			}
			int series = goodsBaseVoById.series;
			if (mOwnerMachines == null)
			{
				return result;
			}
			int num = -1;
			for (int i = 0; i < mOwnerMachines.Count; i++)
			{
				GameGoodsVo gameGoodsVo = mOwnerMachines[i];
				if (gameGoodsVo == null || gameGoodsVo.GoodsState != GameGoodsState.InitiativeProduce || gameGoodsVo.CollectList == null || gameGoodsVo.CollectList.Count <= 0 || (Object)(object)FindGridByGameGoodsVo(gameGoodsVo) == (Object)null)
				{
					continue;
				}
				IGoodsBaseVo goodsBaseVoById2 = GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVoById2 != null && goodsBaseVoById2.series == series)
				{
					if (goodsBaseVoById2.level > num)
					{
						num = goodsBaseVoById2.level;
						result.Clear();
						result.Add(gameGoodsVo);
					}
					else if (goodsBaseVoById2.level == num)
					{
						result.Add(gameGoodsVo);
					}
				}
			}
		}
		return result;
	}

	public List<GameGoodsVo> GetHighestLevelCookedInstrumentList(int cookingGoodsID)
	{
		if (result != null)
		{
			result.Clear();
			if (mOwnerMachines == null)
			{
				return result;
			}
			IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(cookingGoodsID);
			if (goodsCookingVO == null)
			{
				return result;
			}
			int num = -1;
			for (int i = 0; i < mOwnerMachines.Count; i++)
			{
				GameGoodsVo gameGoodsVo = mOwnerMachines[i];
				if (gameGoodsVo == null || gameGoodsVo.GoodsState != GameGoodsState.InitiativeProduce || gameGoodsVo.MakingGoodsID != cookingGoodsID || gameGoodsVo.CollectList == null || gameGoodsVo.CollectList.Count <= 0 || (Object)(object)FindGridByGameGoodsVo(gameGoodsVo) == (Object)null)
				{
					continue;
				}
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType)
				{
					if (goodsBaseVoById.level > num)
					{
						num = goodsBaseVoById.level;
						result.Clear();
						result.Add(gameGoodsVo);
					}
					else if (goodsBaseVoById.level == num)
					{
						result.Add(gameGoodsVo);
					}
				}
			}
		}
		return result;
	}

	public bool TakeOutOneCookedFromInstrument(GameGoodsVo machineVo, out bool gridIsFull, bool checkPlayerState = false)
	{
		gridIsFull = false;
		if (machineVo == null)
		{
			return false;
		}
		if (machineVo.GoodsState != GameGoodsState.InitiativeProduce)
		{
			return false;
		}
		if (machineVo.CollectList == null || machineVo.CollectList.Count <= 0)
		{
			return false;
		}
		GameLevelGrid gameLevelGrid = FindGridByGameGoodsVo(machineVo);
		if ((Object)(object)gameLevelGrid == (Object)null)
		{
			return false;
		}
		if ((Object)(object)gameLevelGrid.GetNearbyEmptyGrid(gameLevelGrid.GetGridId(), showEnoughTip: false, 0, checkPlayerState) == (Object)null)
		{
			gridIsFull = true;
			return false;
		}
		GameGoodsBase gameGoodsBase = gameLevelGrid.GetGameGoodsBase();
		if (gameGoodsBase == null)
		{
			return false;
		}
		int count = machineVo.CollectList.Count;
		gameGoodsBase.Use();
		if (machineVo.CollectList.Count >= count)
		{
			gridIsFull = true;
			return false;
		}
		return true;
	}

	public bool GoodsCanSplit(GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.banSplit == 1)
		{
			return false;
		}
		if (goodsBaseVoById.type != 1 && goodsBaseVoById.type != 3)
		{
			return false;
		}
		if (goodsBaseVoById.level <= 1)
		{
			return false;
		}
		return true;
	}

	public bool GoodsCanCopy(GameGoodsVo gameGoodsVo, IGoodsBaseVo copyCard)
	{
		if (gameGoodsVo == null || copyCard == null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
		{
			return false;
		}
		ILevelItemEffectVo levelItemEffectVoById = Singleton<GameLevelManager>.Instance.GetLevelItemEffectVoById(gameGoodsVo.goodsID);
		if (levelItemEffectVoById == null)
		{
			return false;
		}
		if (levelItemEffectVoById.CopyItemMinLevel <= 0)
		{
			return false;
		}
		if (levelItemEffectVoById.CopyItemMinLevel > copyCard.level || levelItemEffectVoById.CopyItemMaxLevel < copyCard.level)
		{
			return false;
		}
		return true;
	}

	public bool GoodsCanUpgrade(GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
		{
			return false;
		}
		if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type))
		{
			return false;
		}
		if (IGoodsBaseVo.IsTreasureBox(goodsBaseVoById.type))
		{
			return false;
		}
		if (IsMaxLevelGoods(goodsBaseVoById.goodsID))
		{
			return false;
		}
		if (goodsBaseVoById.canUpgrade == 0)
		{
			return false;
		}
		return true;
	}

	public bool IsGuideSpecialGoods(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
		{
			return true;
		}
		if (IGoodsBaseVo.IsConversion(goodsBaseVo.type))
		{
			return true;
		}
		if (goodsBaseVo.type == 16)
		{
			return true;
		}
		if (goodsBaseVo.type == 27)
		{
			return true;
		}
		IGoodsCollectVo goodsCollectVoById = GetGoodsCollectVoById(goodsBaseVo.goodsID);
		if (goodsCollectVoById == null)
		{
			return false;
		}
		if (goodsCollectVoById.itemId == 1005 || goodsCollectVoById.itemId == 1012 || goodsCollectVoById.itemId == 1013)
		{
			return true;
		}
		return false;
	}

	public List<GameGoodsVo> GetOwnerCreators()
	{
		return mOwnerCreators;
	}

	public bool IsInstrumentSeriesCanRepeatUse(int series)
	{
		return mCanRepeatUseInstrumentSeriesDic.ContainsKey(series);
	}

	public float GetGoodsScore(int goodsID)
	{
		IGoodsMassVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsMassDic.GetItem(goodsID);
		if (item == null)
		{
			return 0f;
		}
		int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
		if (playerLevel < 15)
		{
			return item.mass1;
		}
		if (playerLevel < 35)
		{
			return item.mass2;
		}
		return item.mass3;
	}

	public bool IsOwnGridGoods(GameLevelGrid grid)
	{
		if ((Object)(object)grid == (Object)null)
		{
			return false;
		}
		if (grid.IsLock)
		{
			return false;
		}
		if ((Object)(object)grid.GetGameLevelItem() == (Object)null)
		{
			return false;
		}
		GameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
		if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
		{
			return false;
		}
		if (gameGoodsVo.GoodsState == GameGoodsState.Bubble)
		{
			return false;
		}
		if (IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			return false;
		}
		if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID) == null)
		{
			return false;
		}
		return true;
	}

	public List<GameLevelGrid> GetOwnGridGoods()
	{
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		GameLevelViewLogic gameLevelViewLogic = Singleton<GameLevelManager>.Instance.mGameLevelViewLogic;
		if ((Object)(object)gameLevelViewLogic == (Object)null)
		{
			return list;
		}
		Dictionary<int, GameLevelGrid>.Enumerator enumerator = gameLevelViewLogic.GridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameLevelGrid value = enumerator.Current.Value;
			if (IsOwnGridGoods(value))
			{
				list.Add(value);
			}
		}
		return list;
	}

	public bool FinishAllMachineFinish(string reason)
	{
		if (mOwnerMachines == null || mOwnerMachines.Count == 0)
		{
			return false;
		}
		int num = 0;
		foreach (GameGoodsVo mOwnerMachine in mOwnerMachines)
		{
			if (mOwnerMachine.GoodsState == GameGoodsState.Working)
			{
				int makingTimeByGameGoods = GetMakingTimeByGameGoods(mOwnerMachine);
				mOwnerMachine.DoneType = reason;
				mOwnerMachine.SpeedupTotalTime += makingTimeByGameGoods;
				mOwnerMachine.MakingStarTime -= makingTimeByGameGoods;
				num++;
			}
		}
		if (num > 0)
		{
			ObjectManager.GetInstance().gameLevelModel.SaveLevelMapData();
		}
		return num > 0;
	}

	public bool IsGeneratorSeriesByGoodsID(int goodsID)
	{
		bool flag = false;
		if (GetGoodsBaseVoById(goodsID) != null)
		{
			int series = GetGoodsBaseVoById(goodsID).series;
			IGoodsBaseVo goodsBaseVo = null;
			for (int i = 1; i < 50; i++)
			{
				goodsBaseVo = GetGoodsBaseVoBySeriesAndLevel(series, i);
				if (goodsBaseVo == null)
				{
					break;
				}
				flag = IGoodsBaseVo.IsCreator(goodsBaseVo.type);
				if (flag)
				{
					break;
				}
			}
		}
		return flag;
	}

	public bool IsInstrumentSeriesByGoodsID(int goodsID)
	{
		bool flag = false;
		if (GetGoodsBaseVoById(goodsID) != null)
		{
			int series = GetGoodsBaseVoById(goodsID).series;
			IGoodsBaseVo goodsBaseVo = null;
			for (int i = 1; i < 50; i++)
			{
				goodsBaseVo = GetGoodsBaseVoBySeriesAndLevel(series, i);
				if (goodsBaseVo == null)
				{
					break;
				}
				flag = IGoodsBaseVo.IsInstrument(goodsBaseVo.type);
				if (flag)
				{
					break;
				}
			}
		}
		return flag;
	}

	public bool IsPermanentlyInstrumentSeriesByGoodsID(int goodsID)
	{
		bool flag = false;
		if (GetGoodsBaseVoById(goodsID) != null)
		{
			int series = GetGoodsBaseVoById(goodsID).series;
			IGoodsBaseVo goodsBaseVo = null;
			for (int i = 1; i < 50; i++)
			{
				goodsBaseVo = GetGoodsBaseVoBySeriesAndLevel(series, i);
				if (goodsBaseVo == null)
				{
					break;
				}
				flag = IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type);
				if (flag)
				{
					break;
				}
			}
		}
		return flag;
	}

	public int GetCooldownCreator()
	{
		int num = 0;
		Dictionary<int, GameGoodsVo> dictionary = GetLevelMap(copyData: false);
		if (dictionary == null)
		{
			return num;
		}
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary)
		{
			if (GridUnlock(item.Key) && IsEnterCooldownOfGenerator(item.Value))
			{
				num++;
			}
		}
		return num;
	}

	public bool IsEnterCooldownOfGenerator(GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (!IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
		{
			return false;
		}
		return gameGoodsVo.GoodsState == GameGoodsState.CoolDown;
	}

	public bool HasCanWorkGeneratorOfShowingOrders()
	{
		Dictionary<int, GameGoodsVo> dictionary = GetLevelMap(copyData: false);
		if (dictionary == null)
		{
			return false;
		}
		List<int> showingOrderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedGeneratorSeries();
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && showingOrderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series) && IsCanWorkGenerator(item.Value))
				{
					return true;
				}
			}
		}
		return false;
	}

	public bool IsCanWorkGenerator(GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (!IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
		{
			return false;
		}
		if (gameGoodsVo.GoodsState != GameGoodsState.InitiativeProduce && gameGoodsVo.GoodsState != GameGoodsState.AutoProduce)
		{
			return gameGoodsVo.GoodsState == GameGoodsState.HideCoolDown;
		}
		return true;
	}

	public bool IsHaveGoodsInMap(int goodsId)
	{
		Dictionary<int, GameGoodsVo> dictionary = GetLevelMap(copyData: false);
		if (dictionary == null)
		{
			return false;
		}
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary)
		{
			if (GridUnlock(item.Key) && item.Value != null && item.Value.GoodsState != GameGoodsState.Lock && item.Value.GoodsState != GameGoodsState.Covered && item.Value.GoodsState != GameGoodsState.FakeCovered && item.Value.GoodsState != GameGoodsState.Bubble && item.Value.goodsID == goodsId)
			{
				return true;
			}
		}
		return false;
	}

	public int GetGeneratorOfShowingOrdersCount()
	{
		int num = 0;
		Dictionary<int, GameGoodsVo> dictionary = GetLevelMap(copyData: false);
		if (dictionary == null)
		{
			return num;
		}
		List<int> showingOrderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedGeneratorSeries();
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && IGoodsBaseVo.IsCreator(tempGoods.type) && showingOrderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series))
				{
					num++;
				}
			}
		}
		return num;
	}

	public int GetCooldownGeneratorOfShowingOrdersCount()
	{
		int num = 0;
		Dictionary<int, GameGoodsVo> dictionary = GetLevelMap(copyData: false);
		if (dictionary == null)
		{
			return num;
		}
		List<int> showingOrderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedGeneratorSeries();
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && showingOrderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series) && IsEnterCooldownOfGenerator(item.Value))
				{
					num++;
				}
			}
		}
		return num;
	}

	public bool IsShowIdleAnim(IGoodsBaseVo goodsBaseVo)
	{
		IGoodsCollectVo goodsCollectVoById = GetGoodsCollectVoById(goodsBaseVo.goodsID);
		if (goodsBaseVo.type != 19 && goodsBaseVo.type != 23 && goodsBaseVo.type != 9 && goodsBaseVo.type != 27 && !Enumerable.Contains(PlayIdleEffectGoods, goodsBaseVo.goodsID))
		{
			if (goodsCollectVoById != null)
			{
				if (goodsCollectVoById.itemId != 1026)
				{
					return goodsCollectVoById.itemId == 1027;
				}
				return true;
			}
			return false;
		}
		return true;
	}

	public bool IsSpecialGoods(int goodsID)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (mSpecialGoodsSeries.Contains(goodsBaseVoById.series))
		{
			return true;
		}
		return false;
	}

	public bool IsSpecialDetail(int goodsID)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (mSpecialDetailSeries.Contains(goodsBaseVoById.series))
		{
			return true;
		}
		return false;
	}

	public bool IsAnalyticGoodsBySeries(int seriesID)
	{
		if (mAnalyticGoodsIDs == null)
		{
			return false;
		}
		if (mAnalyticGoodsIDs.Contains(seriesID))
		{
			return true;
		}
		return false;
	}

	private void InitGeneratorCache()
	{
		mMachineSeries = new HashSet<int>();
		mGeneratorSeries = new Dictionary<int, bool>();
		mGeneratorSeries_initiative = new Dictionary<int, bool>();
		mGeneratorSeries_passive = new Dictionary<int, bool>();
		mGeneratorSeries_initiative_passive = new Dictionary<int, bool>();
		List<IGoodsBaseVo> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseList.list;
		IGoodsBaseVo goodsBaseVo = null;
		for (int i = 0; i < list.Count; i++)
		{
			goodsBaseVo = list[i];
			if (goodsBaseVo.type == 2)
			{
				mGeneratorSeries_initiative[goodsBaseVo.series] = true;
				mGeneratorSeries[goodsBaseVo.series] = true;
			}
			else if (goodsBaseVo.type == 5)
			{
				mGeneratorSeries_passive[goodsBaseVo.series] = true;
				mGeneratorSeries[goodsBaseVo.series] = true;
			}
			else if (goodsBaseVo.type == 4)
			{
				mGeneratorSeries_initiative_passive[goodsBaseVo.series] = true;
				mGeneratorSeries[goodsBaseVo.series] = true;
			}
			else if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type))
			{
				mMachineSeries.Add(goodsBaseVo.series);
			}
		}
	}

	public bool IsGeneratorSeries(int series)
	{
		return mGeneratorSeries.ContainsKey(series);
	}

	public bool IsGeneratorSeries_Initiative(int series)
	{
		return mGeneratorSeries_initiative.ContainsKey(series);
	}

	public bool IsGeneratorSeries_Passive(int series)
	{
		return mGeneratorSeries_passive.ContainsKey(series);
	}

	public bool IsGeneratorSeries_Initiative_Passive(int series)
	{
		return mGeneratorSeries_initiative_passive.ContainsKey(series);
	}

	public bool IsMachineSeries(int series)
	{
		if (mMachineSeries == null)
		{
			return false;
		}
		return mMachineSeries.Contains(series);
	}

	public RandomRewardListData GetRandomRewardByReward(List<BaseData3VO> rewards)
	{
		RandomRewardListData randomRewardListData = new RandomRewardListData
		{
			hasRandomGoodsReward = false,
			originReward = new List<BaseData3VO>(),
			reward = new List<BaseData3VO>(),
			RandomGoodsRewardIndexs = new List<int>()
		};
		IGoodsBaseVo goodsBaseVo = null;
		if (rewards != null)
		{
			for (int i = 0; i < rewards.Count; i++)
			{
				if (rewards[i].type.IsGoods())
				{
					goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewards[i].id);
					if (goodsBaseVo != null && FestivalGiftV2.Box.IsFestivalGiftBox(goodsBaseVo.goodsID))
					{
						int festivalGiftBoxID = FestivalGiftV2.Box.GetFestivalGiftBoxID(goodsBaseVo.goodsID);
						BaseData3VO item = new BaseData3VO
						{
							type = rewards[i].type,
							id = festivalGiftBoxID,
							num = rewards[i].num
						};
						randomRewardListData.originReward.Add(item);
						continue;
					}
				}
				randomRewardListData.originReward.Add(rewards[i]);
			}
		}
		if (rewards != null)
		{
			for (int j = 0; j < rewards.Count; j++)
			{
				if (rewards[j].type.IsGoods())
				{
					goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewards[j].id);
					if (goodsBaseVo != null && goodsBaseVo.type == 17)
					{
						randomRewardListData.hasRandomGoodsReward = true;
						for (int k = 0; k < rewards[j].num; k++)
						{
							List<BaseData3VO> randomItemBoxProduce = Singleton<GameLevelManager>.Instance.GetRandomItemBoxProduce(goodsBaseVo.goodsID);
							for (int l = 0; l < randomItemBoxProduce.Count; l++)
							{
								randomRewardListData.RandomGoodsRewardIndexs.Add(randomRewardListData.reward.Count);
								randomRewardListData.reward.Add(randomItemBoxProduce[l]);
							}
						}
						continue;
					}
					if (goodsBaseVo != null && FestivalGiftV2.Box.IsFestivalGiftBox(goodsBaseVo.goodsID))
					{
						int festivalGiftBoxID2 = FestivalGiftV2.Box.GetFestivalGiftBoxID(goodsBaseVo.goodsID);
						BaseData3VO item2 = new BaseData3VO
						{
							type = rewards[j].type,
							id = festivalGiftBoxID2,
							num = rewards[j].num
						};
						randomRewardListData.reward.Add(item2);
						continue;
					}
				}
				randomRewardListData.reward.Add(rewards[j]);
			}
		}
		return randomRewardListData;
	}

	public List<int> GetDropBubblePreGoodsList()
	{
		return ObjectManager.GetInstance().gameOrdersModel.DropBubbleNeedPreGoodsList;
	}

	public Dictionary<int, int> GetOwnGeneratorNumDic()
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		if (mOwnerCreators != null)
		{
			list.AddRange(mOwnerCreators);
		}
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		IGoodsBaseVo goodsBaseVo = null;
		foreach (GameGoodsVo item in list)
		{
			if (item == null)
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.goodsID);
			if (goodsBaseVo != null && goodsBaseVo.type == 2)
			{
				if (dictionary.ContainsKey(item.goodsID))
				{
					dictionary[item.goodsID]++;
				}
				else
				{
					dictionary.Add(item.goodsID, 1);
				}
			}
		}
		Stack<int> temporaryItems = ObjectManager.GetInstance().gameLevelModel.GetTemporaryItems();
		if (temporaryItems != null)
		{
			foreach (int item2 in temporaryItems)
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item2);
				if (goodsBaseVo != null && goodsBaseVo.type == 2)
				{
					if (dictionary.ContainsKey(item2))
					{
						dictionary[item2]++;
					}
					else
					{
						dictionary.Add(item2, 1);
					}
				}
			}
		}
		return dictionary;
	}

	public void Dispatcher_RefreshGameGrid()
	{
		EventManager.GetInstance().DispatchEvent(202096);
	}

	public void Dispatcher_UpdateOrderViewList()
	{
		EventManager.GetInstance().DispatchEvent(100049, 0, 0);
	}

	public bool NeedPassiveGoodsLv(IGoodsBaseVo goods, int needPassiveGoodsLv)
	{
		if (goods == null)
		{
			return false;
		}
		if (goods.productionType == 0)
		{
			int derivativeSourceID = GetDerivativeSourceID(goods);
			if (derivativeSourceID > 0)
			{
				if (NeedPassiveGoodsLv(GetGoodsBaseVoById(derivativeSourceID), needPassiveGoodsLv))
				{
					return true;
				}
			}
			else if (NeedPassiveGoodsLv_Normal(goods, needPassiveGoodsLv))
			{
				return true;
			}
		}
		else if (NeedPassiveGoodsLv_Cooking(goods, needPassiveGoodsLv))
		{
			return true;
		}
		return false;
	}

	public bool NeedPassiveGoodsLv_Cooking(IGoodsBaseVo goods, int needPassiveGoodsLv)
	{
		if (goods == null)
		{
			return false;
		}
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goods.goodsID);
		if (goodsCookingVO == null)
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVo = null;
		foreach (int item in from _tempGoods in goodsCookingVO.GetMaterials()
			select _tempGoods.id)
		{
			goodsBaseVo = GetGoodsBaseVoById(item);
			if (goodsBaseVo != null && goodsBaseVo.goodsID != goods.goodsID && NeedPassiveGoodsLv(goodsBaseVo, needPassiveGoodsLv))
			{
				return true;
			}
		}
		return false;
	}

	public bool NeedPassiveGoodsLv_Normal(IGoodsBaseVo goods, int needPassiveGoodsLv)
	{
		if (goods == null || goods.level < needPassiveGoodsLv)
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVo = null;
		foreach (int item in goods.GetSource)
		{
			goodsBaseVo = GetGoodsBaseVoById(item);
			if (goodsBaseVo != null && (goodsBaseVo.type == 5 || goodsBaseVo.type == 6))
			{
				return true;
			}
		}
		return false;
	}

	public bool HasOwnerMachinesBySeries(int seriesId)
	{
		if (mOwnerMachines == null)
		{
			return false;
		}
		if (mOwnerMachinesBySeries == null)
		{
			mOwnerMachinesBySeries = new HashSet<int>();
		}
		if (mOwnerMachinesBySeries.Contains(seriesId))
		{
			return true;
		}
		bool flag = mOwnerMachines.Exists((GameGoodsVo x) =>
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(x.goodsID);
			return goodsBaseVoById != null && goodsBaseVoById.series == seriesId;
		});
		if (flag)
		{
			mOwnerMachinesBySeries.Add(seriesId);
		}
		return flag;
	}

	public bool HasOwnerCreatorsBySeries(int seriesId)
	{
		if (mOwnerCreators == null)
		{
			return false;
		}
		if (mOwnerCreatorsBySeries == null)
		{
			mOwnerCreatorsBySeries = new HashSet<int>();
		}
		if (mOwnerCreatorsBySeries.Contains(seriesId))
		{
			return true;
		}
		bool flag = mOwnerCreators.Exists((GameGoodsVo x) =>
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(x.goodsID);
			return goodsBaseVoById != null && goodsBaseVoById.series == seriesId;
		});
		if (flag)
		{
			mOwnerCreatorsBySeries.Add(seriesId);
		}
		return flag;
	}

	public void InitMachineConfig()
	{
		mMachineMakeRecipes = new Dictionary<int, List<MakeRecipeVO>>();
		List<IInstrumentMakingVo> list = StaticDataBase<StaticDataManager>.GetInstance().InstrumentMakingList.list;
		for (int i = 0; i < list.Count; i++)
		{
			IInstrumentMakingVo instrumentMakingVo = list[i];
			if (instrumentMakingVo == null)
			{
				continue;
			}
			if (instrumentMakingVo.instrumentLevel == null)
			{
				Log.E(string.Format("꺮\u1733芧筛ꅝ犓\u0085取숽끇棹냯。刎⮦㬛杅ꍰ", instrumentMakingVo.goodsID));
				continue;
			}
			for (int j = 0; j < instrumentMakingVo.instrumentLevel.Length; j++)
			{
				if (!mMachineMakeRecipes.ContainsKey(instrumentMakingVo.instrumentLevel[j]))
				{
					mMachineMakeRecipes.Add(instrumentMakingVo.instrumentLevel[j], new List<MakeRecipeVO>());
				}
				int num = 0;
				if (instrumentMakingVo.makingTime.Length > j)
				{
					num = instrumentMakingVo.makingTime[j];
				}
				else
				{
					num = 100;
					Log.E(string.Format("꺮\u1733芧筛ꅝ犓\u0085取쉫끇냹‖〜町㓇匕슜뀋\ue5a4\uf64b箰盲꺜㚛襨", instrumentMakingVo.goodsID, instrumentMakingVo.instrumentLevel[j]));
				}
				mMachineMakeRecipes[instrumentMakingVo.instrumentLevel[j]].Add(new MakeRecipeVO
				{
					goodsID = instrumentMakingVo.goodsID,
					num = 1,
					makingTime = num
				});
			}
		}
		List<IGoodsInstrumentVO> list2 = StaticDataBase<StaticDataManager>.GetInstance().GoodsInstrumentList.list;
		for (int k = 0; k < list2.Count; k++)
		{
			if (list2[k] != null)
			{
				list2[k].ClearCache();
			}
		}
	}

	public List<MakeRecipeVO> GetMakeRecipesByMachineID(int machineID)
	{
		if (mMachineMakeRecipes == null)
		{
			return new List<MakeRecipeVO>();
		}
		if (mMachineMakeRecipes.TryGetValue(machineID, out var value))
		{
			return value;
		}
		return new List<MakeRecipeVO>();
	}

	public Dictionary<int, GameGoodsVo> GetAllShowingOrderNeedGenerators()
	{
		Dictionary<int, GameGoodsVo> dictionary = new Dictionary<int, GameGoodsVo>();
		Dictionary<int, GameGoodsVo> dictionary2 = GetLevelMap(copyData: false);
		if (dictionary2 == null)
		{
			return dictionary;
		}
		List<int> showingOrderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedGeneratorSeries();
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary2)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && IGoodsBaseVo.IsInitiativeCreator(tempGoods.type) && showingOrderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series) && !dictionary.ContainsKey(item.Key))
				{
					dictionary.Add(item.Key, item.Value);
				}
			}
		}
		return dictionary;
	}

	public Dictionary<int, GameGoodsVo> GetAllShowingOrderNeedGeneratorsAndInstrument()
	{
		Dictionary<int, GameGoodsVo> dictionary = new Dictionary<int, GameGoodsVo>();
		Dictionary<int, GameGoodsVo> dictionary2 = GetLevelMap(copyData: false);
		if (dictionary2 == null)
		{
			return dictionary;
		}
		List<int> showingOrderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedGeneratorSeries();
		List<int> orderNeedInstrumentSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedInstrumentSeries();
		showingOrderNeedGeneratorSeries.AddRange(orderNeedInstrumentSeries);
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary2)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && (IGoodsBaseVo.IsCreator(tempGoods.type) || IGoodsBaseVo.IsInstrument(tempGoods.type)) && showingOrderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series) && !dictionary.ContainsKey(item.Key))
				{
					dictionary.Add(item.Key, item.Value);
				}
			}
		}
		return dictionary;
	}

	public Dictionary<int, GameGoodsVo> GetAllNeedGeneratorsAndInstrumentByOrder(int orderIndex)
	{
		Dictionary<int, GameGoodsVo> dictionary = new Dictionary<int, GameGoodsVo>();
		Dictionary<int, GameGoodsVo> dictionary2 = GetLevelMap(copyData: false);
		if (dictionary2 == null)
		{
			return dictionary;
		}
		List<int> orderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedGeneratorSeries(orderIndex);
		List<int> orderNeedInstrumentSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedInstrumentSeries(orderIndex);
		orderNeedGeneratorSeries.AddRange(orderNeedInstrumentSeries);
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary2)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && (IGoodsBaseVo.IsInitiativeCreator(tempGoods.type) || IGoodsBaseVo.IsInstrument(tempGoods.type)) && orderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series) && !dictionary.ContainsKey(item.Key))
				{
					dictionary.Add(item.Key, item.Value);
				}
			}
		}
		return dictionary;
	}

	public Dictionary<int, GameGoodsVo> GetAllNeedCreatorsAndInstrumentByOrder(int orderIndex)
	{
		Dictionary<int, GameGoodsVo> dictionary = new Dictionary<int, GameGoodsVo>();
		Dictionary<int, GameGoodsVo> dictionary2 = GetLevelMap(copyData: false);
		if (dictionary2 == null)
		{
			return dictionary;
		}
		List<int> orderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedGeneratorSeries(orderIndex);
		List<int> orderNeedInstrumentSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedInstrumentSeries(orderIndex);
		List<int> orderNeedPassiveGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedPassiveGeneratorSeries(orderIndex);
		orderNeedGeneratorSeries.AddRange(orderNeedInstrumentSeries);
		orderNeedGeneratorSeries.AddRange(orderNeedPassiveGeneratorSeries);
		IGoodsBaseVo tempGoods;
		foreach (KeyValuePair<int, GameGoodsVo> item in dictionary2)
		{
			if (GridUnlock(item.Key) && item.Value != null)
			{
				tempGoods = GetGoodsBaseVoById(item.Value.goodsID);
				if (tempGoods != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && (IGoodsBaseVo.IsCreator(tempGoods.type) || IGoodsBaseVo.IsInstrument(tempGoods.type)) && orderNeedGeneratorSeries.Exists((int orderSeries) => orderSeries == tempGoods.series) && !dictionary.ContainsKey(item.Key))
				{
					dictionary.Add(item.Key, item.Value);
				}
			}
		}
		return dictionary;
	}

	public bool IsAllGeneratorCooldown()
	{
		foreach (GameGoodsVo mOwnerCreator in mOwnerCreators)
		{
			if (mOwnerCreator != null && mOwnerCreator.GoodsState != GameGoodsState.CoolDown)
			{
				return false;
			}
		}
		return true;
	}

	public List<int> GeneratorInitiativeSequenceList(int goodsId)
	{
		List<int> list = new List<int>();
		IGoodsProduceVo initiativeProduceById = GetInitiativeProduceById(goodsId);
		if (initiativeProduceById == null)
		{
			return list;
		}
		List<List<BaseData2VO>> produceSequenceVos = initiativeProduceById.GetProduceSequenceVos();
		for (int i = 0; i < produceSequenceVos.Count; i++)
		{
			list.Add(i);
		}
		return list;
	}

	public List<int> GeneratorPassiveSequenceList(int goodsId)
	{
		List<int> list = new List<int>();
		IGoodsProduceVo passiveProduceById = GetPassiveProduceById(goodsId);
		if (passiveProduceById == null)
		{
			return list;
		}
		List<List<BaseData2VO>> produceSequenceVos = passiveProduceById.GetProduceSequenceVos();
		for (int i = 0; i < produceSequenceVos.Count; i++)
		{
			list.Add(i);
		}
		return list;
	}

	public ICleverBoxDropGoodsVo GetCleverBoxDropGoodsID(GameGoodsVo goodsVo)
	{
		if (goodsVo == null)
		{
			return null;
		}
		ICleverBoxConfigVo item = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxConfigDic.GetItem(goodsVo.goodsID);
		if (item == null)
		{
			return null;
		}
		float residualValue = goodsVo.residualValue;
		List<int> orderNeedGoods = GetOrderNeedGoods();
		List<ICleverBoxDropGoodsVo> list = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list2 = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list3 = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list4 = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list5 = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxDropGoods.list;
		for (int i = 0; i < list5.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(list5[i].goodsID);
			int goodsMakingTime = GetGoodsMakingTime(goodsBaseVoById);
			if (list5[i].value <= residualValue && list5[i].value >= item.materialValueMin && list5[i].value <= item.materialValueMax && orderNeedGoods.Contains(list5[i].goodsID))
			{
				list2.Add(list5[i]);
				if (goodsMakingTime > 0)
				{
					list4.Add(list5[i]);
				}
			}
			if (list5[i].value <= residualValue && list5[i].value >= item.materialValueMin && list5[i].value <= item.materialValueMax)
			{
				list.Add(list5[i]);
				if (goodsMakingTime > 0)
				{
					list3.Add(list5[i]);
				}
			}
		}
		if (list4.Count > 0)
		{
			int index = Random.Range(0, list4.Count);
			return list4[index];
		}
		if (list2.Count > 0)
		{
			int index2 = Random.Range(0, list2.Count);
			return list2[index2];
		}
		if (list3.Count > 0)
		{
			int index3 = Random.Range(0, list3.Count);
			return list3[index3];
		}
		if (list.Count > 0)
		{
			int index4 = Random.Range(0, list.Count);
			return list[index4];
		}
		return null;
	}

	public ICleverBoxDropGoodsVo GetCleverBoxDropByGoodsIDAndValue(int goodsID, float residualValue)
	{
		ICleverBoxConfigVo item = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxConfigDic.GetItem(goodsID);
		if (item == null)
		{
			return null;
		}
		List<int> orderNeedGoods = GetOrderNeedGoods();
		List<ICleverBoxDropGoodsVo> list = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list2 = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list3 = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list4 = new List<ICleverBoxDropGoodsVo>();
		List<ICleverBoxDropGoodsVo> list5 = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxDropGoods.list;
		for (int i = 0; i < list5.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(list5[i].goodsID);
			int goodsMakingTime = GetGoodsMakingTime(goodsBaseVoById);
			if (list5[i].value <= residualValue && list5[i].value >= item.materialValueMin && list5[i].value <= item.materialValueMax && orderNeedGoods.Contains(list5[i].goodsID))
			{
				list2.Add(list5[i]);
				if (goodsMakingTime > 0)
				{
					list4.Add(list5[i]);
				}
			}
			if (list5[i].value <= residualValue && list5[i].value >= item.materialValueMin && list5[i].value <= item.materialValueMax)
			{
				list.Add(list5[i]);
				if (goodsMakingTime > 0)
				{
					list3.Add(list5[i]);
				}
			}
		}
		if (list4.Count > 0)
		{
			int index = Random.Range(0, list4.Count);
			return list4[index];
		}
		if (list2.Count > 0)
		{
			int index2 = Random.Range(0, list2.Count);
			return list2[index2];
		}
		if (list3.Count > 0)
		{
			int index3 = Random.Range(0, list3.Count);
			return list3[index3];
		}
		if (list.Count > 0)
		{
			int index4 = Random.Range(0, list.Count);
			return list[index4];
		}
		return null;
	}

	private List<int> GetOrderNeedGoods()
	{
		List<int> list = new List<int>();
		List<int> gameLevelOrdersStillNeedGoodsIDs = ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersStillNeedGoodsIDs;
		if (gameLevelOrdersStillNeedGoodsIDs != null)
		{
			for (int i = 0; i < gameLevelOrdersStillNeedGoodsIDs.Count; i++)
			{
				List<int> splitGoodsByID = GameLevelDefine.GetSplitGoodsByID(gameLevelOrdersStillNeedGoodsIDs[i]);
				list.AddRange(splitGoodsByID);
			}
		}
		List<int> gameLevelOrdersStillNeedGoodsIDs2 = ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersStillNeedGoodsIDs;
		if (gameLevelOrdersStillNeedGoodsIDs2 != null)
		{
			for (int j = 0; j < gameLevelOrdersStillNeedGoodsIDs2.Count; j++)
			{
				List<int> splitGoodsByID2 = GameLevelDefine.GetSplitGoodsByID(gameLevelOrdersStillNeedGoodsIDs2[j]);
				list.AddRange(splitGoodsByID2);
			}
		}
		List<int> goodsID_TotalOrder_StillNeed = MonoSingleton<OrderActivityCacheManager>.Instance.GetGoodsID_TotalOrder_StillNeed();
		if (goodsID_TotalOrder_StillNeed != null)
		{
			for (int k = 0; k < goodsID_TotalOrder_StillNeed.Count; k++)
			{
				List<int> splitGoodsByID3 = GameLevelDefine.GetSplitGoodsByID(goodsID_TotalOrder_StillNeed[k]);
				list.AddRange(splitGoodsByID3);
			}
		}
		return list;
	}

	public List<int> GetCleverBoxDropList(int goodsID)
	{
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		ICleverBoxConfigVo item = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxConfigDic.GetItem(goodsID);
		if (item == null)
		{
			return list;
		}
		List<ICleverBoxDropGoodsVo> list3 = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxDropGoods.list;
		for (int i = 0; i < list3.Count; i++)
		{
			if (list3[i].value <= item.value && list3[i].value >= item.materialValueMin && list3[i].value <= item.materialValueMax)
			{
				list.Add(list3[i].goodsID);
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(list3[i].goodsID);
				if (GetGoodsMakingTime(goodsBaseVoById) > 0)
				{
					list2.Add(list3[i].goodsID);
				}
			}
		}
		if (list2.Count > 0)
		{
			return list2;
		}
		return list;
	}

	public int GetChessboardWorkingGoodsNum(int goodsID)
	{
		int num = 0;
		IGoodsCookingVO goodsCookingVO = GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		foreach (KeyValuePair<int, GameGoodsVo> item in GetLevelMap(copyData: false))
		{
			if (!GridUnlock(item.Key))
			{
				continue;
			}
			GameGoodsVo value = item.Value;
			if (value != null && value.goodsID > 0 && value.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotDrag(value.GoodsState))
			{
				IGoodsBaseVo goodsBaseVoById = GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById != null && IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) && goodsBaseVoById.series == goodsCookingVO.instrumentType && value.MakingGoodsID == goodsID && (value.GoodsState == GameGoodsState.InitiativeProduce || value.GoodsState == GameGoodsState.Working))
				{
					num++;
				}
			}
		}
		return num;
	}

	public void RemoveGoodsInLevel(int goodsID)
	{
		ObjectManager.GetInstance().gameLevelModel.RemoveGoodsInLevel(goodsID);
	}

	public void RemoveGoodsInBag(int goodsID)
	{
		ObjectManager.GetInstance().gameLevelModel.RemoveGoodsInBag(goodsID);
	}

	public int GetMachineMakingTimeByGoodsID(int machineID, int goodsID)
	{
		IGoodsInstrumentVO goodsInstrumentVO = GetGoodsInstrumentVO(machineID);
		if (goodsInstrumentVO == null)
		{
			return 0;
		}
		return goodsInstrumentVO.GetMakeRecipeVo(goodsID)?.makingTime ?? 0;
	}

	public int GetMakingTimeByGameGoods(GameGoodsVo goodsVO)
	{
		if (goodsVO == null)
		{
			return 1;
		}
		if (goodsVO.MakingTime > 0)
		{
			return goodsVO.MakingTime;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(goodsVO.goodsID);
		if (goodsInstrumentVO != null)
		{
			MakeRecipeVO makeRecipeVo = goodsInstrumentVO.GetMakeRecipeVo(goodsVO.MakingGoodsID);
			if (makeRecipeVo != null)
			{
				goodsVO.MakingTime = makeRecipeVo.makingTime;
				return makeRecipeVo.makingTime;
			}
		}
		return 1;
	}

	public void OnAnalyticBagView(string action)
	{
		try
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숞끃循渟獑?\u0082厁룦\u008f赴", "숋끥榻渌杓\rª厩渶䅷");
			dictionary.Add("숃끙徭渄慛<\u0082厁룦\u008f赴", action);
			string value = TimeManager.GetInstance().GetDateTimeByTimeSpan(GameLevelViewLogic.LastShowBagViewTime).ToString("숓끃䶠ⴔ礙\u001f:匹숢끞淹洣摼hº厹机s4뀮h䜶㿎");
			dictionary.Add("숃끙徭瀄慛<\u0082厁숇끈玸琈愅\rÒ发뻮", value);
			AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dictionary);
		}
		catch (Exception)
		{
		}
	}

	public void ClickGoodsExisting(string action, int goodsId, string from, int buyGoodsID = 0, int price = 0)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary["숞끃循渟獑?\u0082厁룦\u008f赴"] = "숏끥榽氐杀3ª厩숋끥復渌獓7\u0082厁嬧乵";
		dictionary["숃끙徭渄慛<\u0082厁룦\u008f赴"] = action;
		dictionary["숃끙徭琄慛<\u0082厁녹幰త\0途\ud972"] = goodsId;
		dictionary["숃끙徭琄慛<\u0082厁숵끊涼收祚3º厹"] = from;
		if (buyGoodsID > 0)
		{
			dictionary["숏끘徳琐潗&\u0082厁녹幰త\0途\ud972"] = buyGoodsID;
		}
		if (price > 0)
		{
			dictionary["숏끘徳渐潗&\u0082厁嬧乵"] = price;
		}
		if (action == "匧橬ā讍酫" && !string.IsNullOrEmpty(mGoodsLockRequestId))
		{
			dictionary["숉끈玶弊灑!Ò发숋끛徫猌灙c\u0082厁堨侊"] = mGoodsLockRequestId;
			dictionary["숉끈玶弊灑!Ò发숋끛徫猌灙`\u0082厁堨侊"] = GoodsLockGuideType();
		}
		AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dictionary);
	}

	public static string GoodsLockGuideType()
	{
		if (!ABTestSwitchDefine.GoodsLockSwitch())
		{
			return "北橣ā讱饥";
		}
		return "刔暇\ud9c4ş";
	}

	public static void BeginGoodsLockGuide(int goodsId, string from)
	{
		mGoodsLockGoodsId = goodsId;
		mGoodsLockFrom = from;
		mGoodsLockRequestId = Guid.NewGuid().ToString("뻒");
		mGoodsLockTargetSeries = GetTargetInstrumentSeries(goodsId);
		mGoodsLockTargetGridId = -1;
		if (mGoodsLockStopwatch == null)
		{
			mGoodsLockStopwatch = new Stopwatch();
		}
		mGoodsLockStopwatch.Restart();
		mGoodsLockHasOperation = false;
	}

	public static void SetGoodsLockTargetGridId(int gridId)
	{
		mGoodsLockTargetGridId = gridId;
	}

	public static void ResetGoodsLockGuide()
	{
		mGoodsLockRequestId = "";
		mGoodsLockFrom = "";
		mGoodsLockGoodsId = 0;
		mGoodsLockHasOperation = false;
		mGoodsLockTargetSeries = null;
		mGoodsLockTargetGridId = -1;
		if (mGoodsLockStopwatch != null)
		{
			mGoodsLockStopwatch.Stop();
		}
	}

	public static bool IsGoodsLockGuideActive(int goodsId = 0)
	{
		if (string.IsNullOrEmpty(mGoodsLockRequestId))
		{
			return false;
		}
		if (goodsId > 0 && goodsId != mGoodsLockGoodsId)
		{
			return false;
		}
		return true;
	}

	public static bool IsTargetInstrumentSeries(int series)
	{
		if (mGoodsLockTargetSeries != null)
		{
			return mGoodsLockTargetSeries.Contains(series);
		}
		return false;
	}

	public static List<int> GetTargetInstrumentSeries(int goodsId)
	{
		List<int> list = new List<int>();
		if (goodsId <= 0)
		{
			return list;
		}
		try
		{
			List<SingleDynamicOrder> showingOrders = ObjectManager.GetInstance().gameOrdersModel.ShowingOrders;
			if (showingOrders == null)
			{
				return list;
			}
			for (int i = 0; i < showingOrders.Count; i++)
			{
				SingleDynamicOrder singleDynamicOrder = showingOrders[i];
				if (singleDynamicOrder == null)
				{
					continue;
				}
				List<RecipeGroup> list2 = singleDynamicOrder.RecipeGroups();
				if (list2 == null)
				{
					continue;
				}
				for (int j = 0; j < list2.Count; j++)
				{
					RecipeGroup recipeGroup = list2[j];
					if (recipeGroup == null || recipeGroup.recipeVo == null)
					{
						continue;
					}
					ILevelRecipeVO recipeVo = recipeGroup.recipeVo;
					if (!IsGoodsDirectMaterialOfRecipe(recipeVo, goodsId))
					{
						continue;
					}
					List<BaseData2VO> deliverables = recipeVo.Deliverables;
					if (deliverables == null)
					{
						continue;
					}
					for (int k = 0; k < deliverables.Count; k++)
					{
						int id = deliverables[k].id;
						if (id > 0)
						{
							IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(id);
							if (goodsCookingVO != null && goodsCookingVO.instrumentType > 0 && !list.Contains(goodsCookingVO.instrumentType))
							{
								list.Add(goodsCookingVO.instrumentType);
							}
						}
					}
				}
			}
		}
		catch (Exception)
		{
		}
		return list;
	}

	private static bool IsGoodsDirectMaterialOfRecipe(ILevelRecipeVO recipeVo, int goodsId)
	{
		if (recipeVo == null || goodsId <= 0)
		{
			return false;
		}
		List<BaseData2VO> deliverables = recipeVo.Deliverables;
		if (deliverables == null || deliverables.Count == 0)
		{
			return false;
		}
		for (int i = 0; i < deliverables.Count; i++)
		{
			int id = deliverables[i].id;
			if (id <= 0)
			{
				continue;
			}
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(id);
			if (goodsCookingVO == null)
			{
				continue;
			}
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			if (materials == null)
			{
				continue;
			}
			for (int j = 0; j < materials.Count; j++)
			{
				if (materials[j].id == goodsId)
				{
					return true;
				}
			}
		}
		return false;
	}

	public static void GoodsLockGuideAnalytic(string action, string lockObjectType = "", int lockObjectId = 0, string failReason = "", int operationObjectId = 0, string operationObjectType = "")
	{
		try
		{
			if (string.IsNullOrEmpty(mGoodsLockRequestId))
			{
				return;
			}
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary["숞끃循渟獑?\u0082厁룦\u008f赴"] = "숏끥榽氐杀3ª厩숋끥復渌獓7\u0082厁嬧乵";
			dictionary["숃끙徭渄慛<\u0082厁룦\u008f赴"] = action;
			dictionary["숃끙徭琄慛<\u0082厁녹幰త\0途\ud972"] = mGoodsLockGoodsId;
			dictionary["숃끙徭琄慛<\u0082厁숵끊涼收祚3º厹"] = mGoodsLockFrom;
			dictionary["숉끈玶弊灑!Ò发숋끛徫猌灙c\u0082厁堨侊"] = mGoodsLockRequestId;
			dictionary["숉끈玶弊灑!Ò发숋끛徫猌灙`\u0082厁堨侊"] = GoodsLockGuideType();
			switch (action)
			{
			case "숎끏现栏村\rÒ发愽䢏":
				if (lockObjectId > 0)
				{
					dictionary["숏끘徳瀐潗&\u0082厁숇끈溸甈愆\r¾厽뻱"] = lockObjectId;
				}
				if (!string.IsNullOrEmpty(lockObjectType))
				{
					dictionary["숏끘徳瀐潗&\u0082厁숇끈玸琈愅\rÒ发뻮"] = lockObjectType;
				}
				break;
			case "숎끏暰意村\r\u009e厝漻䉴":
				if (!string.IsNullOrEmpty(failReason))
				{
					dictionary["숉끈玶弊灑!Ò发숋끛徫猌灙a\u0082厁堨侊"] = failReason;
				}
				break;
			case "숎끏澰瀏村\rÂ叁橥r4끴k\udd3d䋆":
				if (operationObjectId > 0)
				{
					dictionary["숏끘徳瀐潗&\u0082厁숇끈溸甈愇\r¾厽뻱"] = operationObjectId;
				}
				if (!string.IsNullOrEmpty(operationObjectType))
				{
					dictionary["숏끘徳瀐潗&\u0082厁숇끈玸琈愆\rÒ发뻮"] = operationObjectType;
				}
				if (mGoodsLockStopwatch != null && mGoodsLockStopwatch.IsRunning)
				{
					mGoodsLockStopwatch.Stop();
					dictionary["숉끈玶弊灑!Ò发刞炟\ud9dcő"] = mGoodsLockStopwatch.ElapsedMilliseconds;
				}
				break;
			}
			AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dictionary);
		}
		catch (Exception)
		{
		}
	}

	public static void TryReportGoodsLockOperation(GameGoodsVo operationGoods, IGoodsBaseVo operationGoodsBase, int operationGridId = -1)
	{
		try
		{
			if (operationGoods != null && operationGoodsBase != null && !string.IsNullOrEmpty(mGoodsLockRequestId) && !mGoodsLockHasOperation)
			{
				bool flag = operationGoods.goodsID == mGoodsLockGoodsId;
				string operationObjectType;
				if (!ABTestSwitchDefine.GoodsLockSwitch())
				{
					operationObjectType = ((!flag && !IsGoodsLockMachineContainsTarget(operationGoods, operationGoodsBase)) ? "숏끎榱琐潆\rª厩欷㹵" : "수끕榸琙扐\rª厩欷㹵");
				}
				else
				{
					bool flag2 = mGoodsLockTargetGridId > 0 && operationGridId == mGoodsLockTargetGridId;
					if (IGoodsBaseVo.IsInstrument(operationGoodsBase.type))
					{
						if (flag2 && IsTargetInstrumentSeries(operationGoodsBase.series))
						{
							operationObjectType = "숍끛徫洎瑑&\u0082厁녡季㨾\0逕\ud970";
						}
						else
						{
							operationObjectType = ((!flag2) ? "숏끎榱琐潆\rª厩欷㹵" : "숏끎涱愐潆\rº厹匧橨ā讹酥");
						}
					}
					else
					{
						operationObjectType = ((flag2 & flag) ? "수끕榸琙扐\rª厩欷㹵" : "숏끎榱琐潆\rª厩欷㹵");
					}
				}
				mGoodsLockHasOperation = true;
				GoodsLockGuideAnalytic("숎끏澰瀏村\rÂ叁橥r4끴k\udd3d䋆", "", 0, "", operationGoods.goodsID, operationObjectType);
			}
		}
		catch (Exception)
		{
		}
	}

	private static bool IsGoodsLockMachineContainsTarget(GameGoodsVo operationGoods, IGoodsBaseVo operationGoodsBase)
	{
		try
		{
			if (operationGoods == null || operationGoodsBase == null)
			{
				return false;
			}
			if (mGoodsLockGoodsId <= 0)
			{
				return false;
			}
			if (!IGoodsBaseVo.IsInstrument(operationGoodsBase.type))
			{
				return false;
			}
			if (operationGoods.GoodsState != GameGoodsState.CanWork)
			{
				return false;
			}
			if (operationGoods.MakeMaterials == null || operationGoods.MakeMaterials.Count == 0)
			{
				return false;
			}
			for (int i = 0; i < operationGoods.MakeMaterials.Count; i++)
			{
				if (operationGoods.MakeMaterials[i] != null && operationGoods.MakeMaterials[i].goodsID == mGoodsLockGoodsId)
				{
					return true;
				}
			}
		}
		catch (Exception)
		{
		}
		return false;
	}

	public string GetGoodsDetialFrom(bool isFromOrder = false)
	{
		if (isFromOrder)
		{
			return "匫橲ā讕鱲";
		}
		if ((Object)(object)ViewManager.Instance.GetFristViewLogic<BagViewLogic>() != (Object)null)
		{
			return "믤¿赴";
		}
		if ((Object)(object)GameObject.Find("숚끒斶眛卢;\u009a厙漨C4끯p䈷䞁") != (Object)null)
		{
			return "删犛\ud9dbń";
		}
		if ((Object)(object)GameObject.Find("숚끒斶眛卢;\u009a厙숆뀒斚⤇ㅛ<\u009a厙") != (Object)null)
		{
			return "删犛\ud9dbń";
		}
		return "숙끒澼愚捇0Â叁娢䵼";
	}

	public void StackUseAnalytic(GameGoodsVo gameGoods, int changeNum)
	{
		if (gameGoods != null)
		{
			GoodsStackAnalytic("숵끉澼搶畓=Â叁뻯", gameGoods.goodsID, gameGoods.StackID, changeNum, gameGoods.GoodsUses + 1, gameGoods.GoodsUses);
		}
	}

	public void GoodsStackAnalytic(string action, int goodsID, int stackID, int changeNum, int beforeNum, int afterNum)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary["숞끃循渟獑?\u0082厁룦\u008f赴"] = "숞끥殪弟杕1²厱匣橯ā讑靳";
		dictionary["숃끙徭渄慛<\u0082厁룦\u008f赴"] = action;
		dictionary["숃끙徭瀄慛<\u0082厁숇끈溸甈愅\r¾厽뻱"] = goodsID;
		dictionary["숃끙徭瀄慛<\u0082厁숇끈溸甈愆\r¾厽뻱"] = stackID;
		dictionary["숃끙徭瀄慛<\u0082厁숇끈溸甈愇\r¾厽뻱"] = changeNum;
		dictionary["숃끙徭瀄慛<\u0082厁숇끈溸甈愀\r¾厽뻱"] = beforeNum;
		dictionary["숃끙徭瀄慛<\u0082厁숇끈溸甈愁\r¾厽뻱"] = afterNum;
		dictionary["숃끙徭瀄慛<\u0082厁숇끈溸甈愂\r¾厽뻱"] = ObjectManager.GetInstance().gameLevelModel.GetStackTotal();
		dictionary["숃끙徭瀄慛<\u0082厁숇끈玸琈愅\rÒ发뻮"] = ObjectManager.GetInstance().gameLevelModel.GetStackGoods();
		AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dictionary);
	}
}
