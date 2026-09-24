using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Newtonsoft.Json;
using TLF;
using UnityEngine;

public class IndependentMergeModel : BaseModel, IOrderActivityScore_ActivityScoreObj
{
	private SerializableDataList<IIndependentGoodsBaseVo> mIndependentGoodsBaseList = new SerializableDataList<IIndependentGoodsBaseVo>();

	private SerializableDataList<IIndependentGoodsMergeVo> mIndependentGoodsMergeList = new SerializableDataList<IIndependentGoodsMergeVo>();

	private SerializableDataMap<int, IIndependentGoodsCollectVo> mIndependentGoodsCollectList = new SerializableDataMap<int, IIndependentGoodsCollectVo>("瑧o4끤u휛䳬");

	public SerializableDataMap<int, IIndependentProduceVo> mIndependentGoodsProduceMap = new SerializableDataMap<int, IIndependentProduceVo>("瑧o4끤u휛䳬");

	private SerializableDataList<IIndependentAutoConversionVO> mGoodsAutoConversionList = new SerializableDataList<IIndependentAutoConversionVO>();

	private SerializableDataMap<int, IGameInitVo> mIndependentInitMap = new SerializableDataMap<int, IGameInitVo>("녧繲㜼\0郴\ud972");

	private SerializableDataList<IIndependentDropConfigVo> mIndependentDropConfigVos = new SerializableDataList<IIndependentDropConfigVo>();

	private SerializableDataList<IIndependentRewardListVO> mIndependentRewardListVos = new SerializableDataList<IIndependentRewardListVO>();

	private SerializableDataMap<int, IIndependentIllustrateRewardVO> mIndependentIllustrateRewardMap = new SerializableDataMap<int, IIndependentIllustrateRewardVO>("숃끟䦫䐄獑!*匩");

	private SerializableDataMap<int, IIndependentOrderDropLevel> mIndependentDropLevelMap = new SerializableDataMap<int, IIndependentOrderDropLevel>("숏끕澲漐瑚\u0015Â叁勺䳷\ud9ccŰ");

	private List<int> orderDropGoods;

	private readonly string mIndependentMergeKey = "숯끴亝䐰䥤\u0017>匽숵끴劍䜶䕹\u0017N卍숤끥徐䬥䕲\u001d\u0082厁ଗạ";

	public IndependentMergeModelVo mIndependentMergeVo;

	private IIndependentDropConfigVo mIndependentDropConfig;

	public List<BaseData3VO> mSettleRewardList = new List<BaseData3VO>();

	private Dictionary<int, IIndependentGoodsBaseVo> mIndependentGoodsDic = new Dictionary<int, IIndependentGoodsBaseVo>();

	private Dictionary<int, Dictionary<int, IIndependentGoodsBaseVo>> mIndependentGoodsSeriesDic;

	private Dictionary<int, IIndependentGoodsMergeVo> mGoodsMergeVoDic;

	private Dictionary<int, Dictionary<int, IIndependentGoodsMergeVo>> mIndependentMergeIapDic;

	private Dictionary<int, List<IIndependentAutoConversionVO>> mAutoConversionVoDic;

	private Dictionary<int, IIndependentRewardListVO> mPassLevelVoDic;

	private RandomRewardListData mUpgradeRewardData;

	private int mTargetMaxLevel;

	private Dictionary<int, Dictionary<int, IndependentIllustratedData>> illusratedInfo;

	private long mergeViewOpenDateTime;

	private Dictionary<int, int> orderDropCost;

	private Queue<IndependentShowData> mShowDataQueue = new Queue<IndependentShowData>();

	public bool DebugSupportCard
	{
		get
		{
			if (mIndependentMergeVo != null)
			{
				return mIndependentMergeVo.supportCardReward;
			}
			return false;
		}
		set
		{
			mIndependentMergeVo.supportCardReward = value;
		}
	}

	public bool IsOpenSoftSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_IndependentMerge);

	public bool IsOpenHardSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_IndependentMerge);

	public bool OpenState => mIndependentMergeVo.OpenState;

	public int ThemeID => mIndependentMergeVo.ThemeID;

	public int GiftShopType
	{
		get
		{
			if (mIndependentMergeVo.GiftShopType <= 0)
			{
				IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
				if (independentMergeTheme != null)
				{
					mIndependentMergeVo.GiftShopType = independentMergeTheme.shopType;
					ChangeIndependentSaveData();
				}
			}
			return mIndependentMergeVo.GiftShopType;
		}
	}

	public int GiftDynamicIndex => mIndependentMergeVo.GiftDynamicIndex;

	public bool GetGiftOpenState => GiftState();

	public Dictionary<int, Dictionary<int, IndependentIllustratedData>> IllusratedInfo => illusratedInfo;

	public int UplevelExp => GetPassLevelVo(CurrentLevel)?.exp ?? 0;

	public int CurrentExp => mIndependentMergeVo.PassExp;

	public int CurrentLevel => mIndependentMergeVo.PassLevel;

	public int LastAnimPassLevel => mIndependentMergeVo.LastAnimPassLevel;

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		mIndependentMergeVo = new IndependentMergeModelVo();
		string item = GetItem(mIndependentMergeKey);
		if (!string.IsNullOrEmpty(item))
		{
			mIndependentMergeVo = JsonConvert.DeserializeObject<IndependentMergeModelVo>(item);
		}
		RepairTimeAnomaly();
		ReloadConfig();
		TomorrowResetData();
		EventManager.GetInstance().AddEventListener(100003, TomorrowResetData);
		EventManager.GetInstance().AddEventListener(100197, ResetIndependentDropConfig);
		EventManager.GetInstance().AddEventListener(100002, TimeUpdate);
		EventManager.GetInstance().AddEventListener(202039, _OnCardCollectionCloseActivity);
		EventManager.GetInstance().AddEventListener<string>(202009, GuideEvent);
	}

	public void UserCompatible()
	{
		if (mIndependentMergeVo == null || !mIndependentMergeVo.OpenState)
		{
			return;
		}
		int giftShopType = GiftShopType;
		if (!mIndependentMergeVo.GiftOpenState)
		{
			return;
		}
		IShopDynamicGift dynamicGiftByTypeAndIndex = MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByTypeAndIndex((ShopType)giftShopType, mIndependentMergeVo.GiftDynamicIndex);
		if (dynamicGiftByTypeAndIndex == null)
		{
			mIndependentMergeVo.GiftOpenState = false;
			mIndependentMergeVo.LastPopGiftTime = 0L;
			SaveIndependentMergeData();
			return;
		}
		int buyCountByShopVO = ObjectManager.GetInstance().shopDataModel.GetBuyCountByShopVO(dynamicGiftByTypeAndIndex.TempShopVo, 3);
		if (dynamicGiftByTypeAndIndex.TempShopVo.limitBuyNum > 0 && buyCountByShopVO >= dynamicGiftByTypeAndIndex.TempShopVo.limitBuyNum)
		{
			mIndependentMergeVo.GiftOpenState = false;
			mIndependentMergeVo.LastPopGiftTime = 0L;
			SaveIndependentMergeData();
		}
	}

	private void RepairTimeAnomaly()
	{
		if (mIndependentMergeVo.OpenState)
		{
			int todayDateNumber = ServerTimeManager.TodayDateNumber;
			if (mIndependentMergeVo.LastResetDayID > todayDateNumber)
			{
				mIndependentMergeVo.LastResetDayID = todayDateNumber;
				SaveIndependentMergeData();
			}
		}
	}

	private void InitConfig()
	{
		mIndependentGoodsDic = new Dictionary<int, IIndependentGoodsBaseVo>();
		mIndependentGoodsSeriesDic = new Dictionary<int, Dictionary<int, IIndependentGoodsBaseVo>>();
		List<IIndependentGoodsBaseVo> list = mIndependentGoodsBaseList.list;
		for (int i = 0; i < list.Count; i++)
		{
			IIndependentGoodsBaseVo independentGoodsBaseVo = list[i];
			if (!mIndependentGoodsDic.ContainsKey(independentGoodsBaseVo.goodsID))
			{
				mIndependentGoodsDic.Add(independentGoodsBaseVo.goodsID, independentGoodsBaseVo);
			}
			if (independentGoodsBaseVo.series <= 0 || independentGoodsBaseVo.level <= 0)
			{
				continue;
			}
			if (mIndependentGoodsSeriesDic.ContainsKey(independentGoodsBaseVo.series))
			{
				if (!mIndependentGoodsSeriesDic[independentGoodsBaseVo.series].ContainsKey(independentGoodsBaseVo.level))
				{
					mIndependentGoodsSeriesDic[independentGoodsBaseVo.series].Add(independentGoodsBaseVo.level, independentGoodsBaseVo);
				}
			}
			else
			{
				Dictionary<int, IIndependentGoodsBaseVo> dictionary = new Dictionary<int, IIndependentGoodsBaseVo>();
				dictionary.Add(independentGoodsBaseVo.level, independentGoodsBaseVo);
				mIndependentGoodsSeriesDic.Add(independentGoodsBaseVo.series, dictionary);
			}
		}
		IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		mTargetMaxLevel = 0;
		if (independentMergeTheme == null)
		{
			return;
		}
		Dictionary<int, IIndependentGoodsBaseVo> value = null;
		if (!mIndependentGoodsSeriesDic.TryGetValue(independentMergeTheme.themeSeriesID, out value))
		{
			return;
		}
		foreach (KeyValuePair<int, IIndependentGoodsBaseVo> item in value)
		{
			if (mTargetMaxLevel < item.Value.level)
			{
				mTargetMaxLevel = item.Value.level;
			}
		}
	}

	private void ReloadConfig()
	{
		LoadConfig();
		InitConfig();
		InitRewardConfig();
		mIndependentDropConfig = null;
		ResetIndependentDropConfig();
	}

	private void InitRewardConfig()
	{
		if (mIndependentMergeVo.RewardListVos == null || mIndependentMergeVo.RewardListVos.Count == 0)
		{
			mIndependentMergeVo.RewardListVos = mIndependentRewardListVos.list;
			ChangeIndependentSaveData();
		}
		mPassLevelVoDic = new Dictionary<int, IIndependentRewardListVO>();
		for (int i = 0; i < mIndependentMergeVo.RewardListVos.Count; i++)
		{
			mPassLevelVoDic[mIndependentMergeVo.RewardListVos[i].level] = mIndependentMergeVo.RewardListVos[i];
		}
	}

	private void LoadConfig()
	{
		_InitGoodsConfig();
		_InitMergeConfig();
		_InitCollectConfig();
		_InitProduceConfig();
		_InitConversionConfig();
		_InitInitConfig();
		_InitDropConfig();
		_InitRewardListConfig();
		if (ThemeID == 4)
		{
			_InitIllustrateConfig();
			_InitOrderDropItemConfig();
		}
	}

	private void _InitOrderDropItemConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숥끔断爦敆6\u009a厙숚끈皶攛䑸7Þ叝뻰" + GetConfigSuffix();
		ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		mIndependentDropLevelMap = new SerializableDataMap<int, IIndependentOrderDropLevel>("숏끕澲漐瑚\u0015Â叁勺䳷\ud9ccŰ");
		if (mIndependentDropLevelMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentDropLevelMap);
		}
		mIndependentDropLevelMap.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		orderDropGoods = new List<int>();
		foreach (IIndependentOrderDropLevel item in mIndependentDropLevelMap.list)
		{
			if (!orderDropGoods.Contains(item.tokenGoodsID))
			{
				orderDropGoods.Add(item.tokenGoodsID);
			}
		}
		orderDropGoods.Sort((int a, int b) => a - b);
		orderDropCost = new Dictionary<int, int>();
		foreach (IIndependentOrderDropLevel item2 in mIndependentDropLevelMap.list)
		{
			if (!orderDropCost.ContainsKey(item2.tokenGoodsID) && item2.InIapTag(mIndependentMergeVo.OpenIap3Tag))
			{
				orderDropCost.Add(item2.tokenGoodsID, item2.tokenCost);
			}
		}
	}

	private void _InitGoodsConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕判皿\ud9eaő" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsBaseList = new SerializableDataList<IIndependentGoodsBaseVo>();
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentGoodsBaseList, clean: true);
		}
		if (mIndependentGoodsBaseList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsBaseList);
		}
		if (ThemeID == 4)
		{
			mIndependentGoodsBaseList.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		}
	}

	private void _InitMergeConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕叉橥ā讝詥" + GetConfigSuffix();
		Dictionary<string, string> abGroupDic = ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string> { text });
		if (ThemeID == 4)
		{
			abGroupDic = mIndependentMergeVo.OpenABGroup;
		}
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsMergeList = new SerializableDataList<IIndependentGoodsMergeVo>();
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentGoodsMergeList, clean: true);
		}
		if (mIndependentGoodsMergeList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsMergeList);
		}
		mIndependentGoodsMergeList.AddReplaceItemByABTestGroup(text, abGroupDic);
		mIndependentMergeIapDic = new Dictionary<int, Dictionary<int, IIndependentGoodsMergeVo>>();
		List<IIndependentGoodsMergeVo> list = mIndependentGoodsMergeList.list;
		for (int i = 0; i < list.Count; i++)
		{
			IIndependentGoodsMergeVo independentGoodsMergeVo = list[i];
			if (!mIndependentMergeIapDic.ContainsKey(independentGoodsMergeVo.iapTag))
			{
				mIndependentMergeIapDic.Add(independentGoodsMergeVo.iapTag, new Dictionary<int, IIndependentGoodsMergeVo>());
			}
			if (mIndependentMergeIapDic[independentGoodsMergeVo.iapTag].ContainsKey(independentGoodsMergeVo.goodsID))
			{
				mIndependentMergeIapDic[independentGoodsMergeVo.iapTag][independentGoodsMergeVo.goodsID] = independentGoodsMergeVo;
			}
			else
			{
				mIndependentMergeIapDic[independentGoodsMergeVo.iapTag].Add(independentGoodsMergeVo.goodsID, independentGoodsMergeVo);
			}
		}
	}

	private void _InitCollectConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕晃o4끬g崱㻜" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsCollectList = new SerializableDataMap<int, IIndependentGoodsCollectVo>("瑧o4끤u휛䳬");
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentGoodsCollectList, clean: true);
		}
		if (mIndependentGoodsCollectList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsCollectList);
		}
		if (ThemeID == 4)
		{
			mIndependentGoodsCollectList.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		}
	}

	private void _InitProduceConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕癐r4끤w\udc31仍" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsProduceMap = new SerializableDataMap<int, IIndependentProduceVo>("瑧o4끤u휛䳬");
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentGoodsProduceMap, clean: true);
		}
		if (mIndependentGoodsProduceMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsProduceMap);
		}
		if (ThemeID == 4)
		{
			mIndependentGoodsProduceMap.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		}
	}

	private void _InitConversionConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숫끔澭䌬敁&Â叁숏끔榯漐潆!ª厩뻲" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mGoodsAutoConversionList = new SerializableDataList<IIndependentAutoConversionVO>();
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mGoodsAutoConversionList, clean: true);
		}
		if (mGoodsAutoConversionList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mGoodsAutoConversionList);
		}
	}

	private void _InitInitConfig()
	{
		string text = "숏끔溽搐䥄7¾厽潥n4끉p䐻䟜" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentInitMap = new SerializableDataMap<int, IGameInitVo>("녧繲㜼\0郴\ud972");
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentInitMap, clean: true);
		}
		if (mIndependentInitMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentInitMap);
		}
		if (ThemeID == 4)
		{
			mIndependentInitMap.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		}
	}

	private void _InitDropConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숮끔炭䌯敆=Æ叅匫橮ā讥鹧" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentDropConfigVos = new SerializableDataList<IIndependentDropConfigVo>();
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentDropConfigVos, clean: true);
		}
		if (mIndependentDropConfigVos.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentDropConfigVos);
		}
		if (ThemeID == 4)
		{
			mIndependentDropConfigVos.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		}
	}

	private void _InitRewardListConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숸끔憭爹救%\u008a厉숙끶新朚摀\r\u009a厙ꃕû赴";
		Dictionary<string, string> curGroupByBaseTable = ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string> { text });
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentRewardListVos = new SerializableDataList<IIndependentRewardListVO>();
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentRewardListVos, clean: true);
		}
		if (mIndependentRewardListVos.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentRewardListVos);
		}
		mIndependentRewardListVos.AddReplaceItemByABTestGroup(text, curGroupByBaseTable);
	}

	public List<BaseData3VO> GetLevelRewardList(int level)
	{
		if (mPassLevelVoDic.TryGetValue(level, out var value))
		{
			bool isCCActive = SupportCardReward();
			return BaseData3VO.GetBaseData3VOListConvert(value.rewardList, isCCActive);
		}
		return null;
	}

	public RandomRewardListData GetUpgradeRewardData()
	{
		return mUpgradeRewardData;
	}

	public List<IIndependentRewardListVO> GetRewardsVO()
	{
		return mIndependentMergeVo.RewardListVos;
	}

	public IIndependentGoodsBaseVo GetGoodsConfigById(int id)
	{
		IIndependentGoodsBaseVo value = null;
		if (mIndependentGoodsDic.TryGetValue(id, out value))
		{
			return value;
		}
		return null;
	}

	public IIndependentGoodsBaseVo GetGoodsConfigBySeriesAndLevel(int series, int level)
	{
		if (mIndependentGoodsSeriesDic.ContainsKey(series) && mIndependentGoodsSeriesDic[series].ContainsKey(level))
		{
			return mIndependentGoodsSeriesDic[series][level];
		}
		return null;
	}

	public List<IIndependentGoodsBaseVo> GetGoodsListBySeriesID(int seriesID)
	{
		if (mIndependentGoodsSeriesDic.TryGetValue(seriesID, out var value))
		{
			List<IIndependentGoodsBaseVo> list = value.Values.ToList();
			list.Sort((IIndependentGoodsBaseVo vo1, IIndependentGoodsBaseVo vo2) => vo1.level.CompareTo(vo2.level));
			return list;
		}
		return null;
	}

	public IIndependentGoodsMergeVo GetGoodsMergeVoById(int id)
	{
		if (mIndependentMergeIapDic == null)
		{
			return null;
		}
		if (mIndependentMergeIapDic.TryGetValue(mIndependentMergeVo.OpenIap2Tag, out var value) && value.TryGetValue(id, out var value2))
		{
			return value2;
		}
		if (mIndependentMergeIapDic.TryGetValue(-1, out var value3) && value3.TryGetValue(id, out var value4))
		{
			return value4;
		}
		return null;
	}

	public IIndependentGoodsCollectVo GetGoodsCollectVoById(int id)
	{
		return mIndependentGoodsCollectList.GetItem(id);
	}

	public IIndependentProduceVo GetProduceVoById(int id)
	{
		return mIndependentGoodsProduceMap.GetItem(id);
	}

	public IIndependentGoodsBaseVo GetNextIndependentGoods(IndependentGameGoodsVo goodsVo1, IndependentGameGoodsVo goodsVo2)
	{
		if (goodsVo1 == null || goodsVo2 == null)
		{
			return null;
		}
		if (goodsVo1.goodsID != goodsVo2.goodsID)
		{
			return null;
		}
		if (IIndependentGoodsBaseVo.CannotMerge(goodsVo1.GoodsState) || IIndependentGoodsBaseVo.CannotMerge(goodsVo2.GoodsState))
		{
			return null;
		}
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsVo1.goodsID);
		if (goodsConfigById == null)
		{
			return null;
		}
		IIndependentGoodsBaseVo goodsConfigBySeriesAndLevel = GetGoodsConfigBySeriesAndLevel(goodsConfigById.series, goodsConfigById.level + 1);
		if (goodsConfigBySeriesAndLevel == null)
		{
			return null;
		}
		return goodsConfigBySeriesAndLevel;
	}

	public IndGoodsBase GetIndGameBaseById(int id, IndependentGrid grid, IndependentGameGoodsVo initialVo = null, List<int> mergeTotalDrops = null, bool addMergeDrop = false, List<BaseData2VO> mergeItemDrops = null)
	{
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(id);
		if (goodsConfigById == null)
		{
			return null;
		}
		IndGoodsBase indGoodsBase = null;
		IndependentGameGoodsVo independentGameGoodsVo = initialVo;
		if (independentGameGoodsVo == null)
		{
			independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = goodsConfigById.goodsID;
			independentGameGoodsVo.GoodsState = IndependentGoodsState.Normal;
		}
		if (mergeTotalDrops != null && mergeTotalDrops.Count > 0)
		{
			independentGameGoodsVo.MergeDropList.AddRange(mergeTotalDrops);
		}
		if (mergeItemDrops != null && mergeItemDrops.Count > 0)
		{
			independentGameGoodsVo.MergeDropItemList.AddRange(mergeItemDrops);
		}
		if (addMergeDrop)
		{
			IIndependentGoodsMergeVo goodsMergeVoById = GetGoodsMergeVoById(independentGameGoodsVo.goodsID);
			if (goodsMergeVoById != null)
			{
				if (independentGameGoodsVo.MergeDropList == null)
				{
					independentGameGoodsVo.MergeDropList = new List<int>();
				}
				if (independentGameGoodsVo.MergeDropItemList == null)
				{
					independentGameGoodsVo.MergeDropItemList = new List<BaseData2VO>();
				}
				List<BaseData3VO> certainDrops = goodsMergeVoById.GetCertainDrops();
				for (int i = 0; i < certainDrops.Count; i++)
				{
					if (certainDrops[i].type == 1)
					{
						independentGameGoodsVo.MergeDropItemList.Add(new BaseData2VO
						{
							id = certainDrops[i].id,
							num = certainDrops[i].num
						});
					}
					else if (certainDrops[i].type == 2)
					{
						for (int j = 0; j < certainDrops[i].num; j++)
						{
							independentGameGoodsVo.MergeDropList.Add(certainDrops[i].id);
						}
					}
				}
			}
		}
		switch (goodsConfigById.type)
		{
		case 1:
			indGoodsBase = new IndGoodsNormal(independentGameGoodsVo, grid);
			break;
		case 2:
			indGoodsBase = new IndGoodsCollection(independentGameGoodsVo, grid);
			break;
		case 3:
			indGoodsBase = new IndGoodsCollectionBubble(independentGameGoodsVo, grid);
			break;
		case 4:
			indGoodsBase = new IndGoodsConversion(independentGameGoodsVo, grid);
			break;
		case 5:
			indGoodsBase = new IndGoodsAutoConversion(independentGameGoodsVo, grid);
			break;
		case 6:
			indGoodsBase = new IndGoodsAutoConversionMaterial(independentGameGoodsVo, grid);
			break;
		case 7:
			indGoodsBase = new IndGoodsAutoConversion2(independentGameGoodsVo, grid);
			break;
		}
		if (indGoodsBase == null)
		{
			indGoodsBase = new IndGoodsNormal(independentGameGoodsVo, grid);
		}
		return indGoodsBase;
	}

	private IndependentGoodsState GetIndependentGoodsState(int status)
	{
		return status switch
		{
			1 => IndependentGoodsState.Normal, 
			2 => IndependentGoodsState.Lock, 
			3 => IndependentGoodsState.Covered, 
			4 => IndependentGoodsState.FakeCovered, 
			_ => IndependentGoodsState.Normal, 
		};
	}

	public string GetConfigSuffix()
	{
		IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		string result = "";
		if (independentMergeTheme != null)
		{
			result = independentMergeTheme.suffix;
		}
		return result;
	}

	public void ResetIndependentDropConfig()
	{
		if (ThemeID == 3)
		{
			int openIap3Tag = mIndependentMergeVo.OpenIap3Tag;
			if (mIndependentDropConfig != null && mIndependentDropConfig.InIapTag3(openIap3Tag))
			{
				return;
			}
			mIndependentDropConfig = null;
			List<IIndependentDropConfigVo> list = mIndependentDropConfigVos.list;
			for (int i = 0; i < list.Count; i++)
			{
				if (list[i].InIapTag3(openIap3Tag))
				{
					mIndependentDropConfig = list[i];
					break;
				}
			}
		}
		else if (ThemeID == 4)
		{
			int openIap3Tag2 = mIndependentMergeVo.OpenIap3Tag;
			if (mIndependentDropConfig != null && mIndependentDropConfig.InIapTag3(openIap3Tag2))
			{
				return;
			}
			mIndependentDropConfig = null;
			List<IIndependentDropConfigVo> list2 = mIndependentDropConfigVos.list;
			for (int j = 0; j < list2.Count; j++)
			{
				if (list2[j].InIapTag3(openIap3Tag2))
				{
					mIndependentDropConfig = list2[j];
					break;
				}
			}
		}
		else
		{
			if (mIndependentDropConfig != null && mIndependentDropConfig.InDropSection(mIndependentMergeVo.TodayDropTotal) && mIndependentDropConfig.iapTag == mIndependentMergeVo.OpenIap2Tag)
			{
				return;
			}
			mIndependentDropConfig = null;
			IIndependentDropConfigVo independentDropConfigVo = null;
			List<IIndependentDropConfigVo> list3 = mIndependentDropConfigVos.list;
			for (int k = 0; k < list3.Count; k++)
			{
				if (list3[k].InDropSection(mIndependentMergeVo.TodayDropTotal))
				{
					if (list3[k].iapTag == -1)
					{
						independentDropConfigVo = list3[k];
					}
					if (list3[k].iapTag == mIndependentMergeVo.OpenIap2Tag)
					{
						mIndependentDropConfig = list3[k];
						break;
					}
				}
			}
			if (mIndependentDropConfig == null)
			{
				mIndependentDropConfig = independentDropConfigVo;
			}
		}
	}

	public List<IIndependentAutoConversionVO> GetAutoConversionVoByID(int goodsID)
	{
		if (mAutoConversionVoDic == null)
		{
			mAutoConversionVoDic = new Dictionary<int, List<IIndependentAutoConversionVO>>();
			List<IIndependentAutoConversionVO> list = mGoodsAutoConversionList.list;
			List<int> list2 = null;
			for (int i = 0; i < list.Count; i++)
			{
				if (!mAutoConversionVoDic.ContainsKey(list[i].goodsID))
				{
					mAutoConversionVoDic.Add(list[i].goodsID, new List<IIndependentAutoConversionVO>());
				}
				mAutoConversionVoDic[list[i].goodsID].Add(list[i]);
				list2 = list[i].GetMaterialIDs();
				for (int j = 0; j < list2.Count; j++)
				{
					if (!mAutoConversionVoDic.ContainsKey(list2[j]))
					{
						mAutoConversionVoDic.Add(list2[j], new List<IIndependentAutoConversionVO>());
					}
					mAutoConversionVoDic[list2[j]].Add(list[i]);
				}
			}
		}
		List<IIndependentAutoConversionVO> value = null;
		mAutoConversionVoDic.TryGetValue(goodsID, out value);
		return value;
	}

	public int GetInitiativeProduceGoodsID(IndependentGameGoodsVo gameGoodsVo)
	{
		int result = -1;
		if (gameGoodsVo == null)
		{
			return result;
		}
		if (mIndependentMergeVo.GoodsProduceDic.TryGetValue(gameGoodsVo.goodsID, out var value))
		{
			if (value.Count <= 0)
			{
				mIndependentMergeVo.GoodsProduceDic[gameGoodsVo.goodsID] = GenerateProduceList(gameGoodsVo.goodsID);
			}
		}
		else
		{
			mIndependentMergeVo.GoodsProduceDic[gameGoodsVo.goodsID] = GenerateProduceList(gameGoodsVo.goodsID);
		}
		if (mIndependentMergeVo.GoodsProduceDic.TryGetValue(gameGoodsVo.goodsID, out var value2) && value2.Count > 0)
		{
			result = value2[0];
			value2.RemoveAt(0);
		}
		return result;
	}

	public List<int> GenerateProduceList(int goodsId)
	{
		List<int> result = new List<int>();
		IIndependentProduceVo produceVoById = GetProduceVoById(goodsId);
		if (produceVoById == null)
		{
			return result;
		}
		List<BaseData2VO> produceVos = produceVoById.GetProduceVos();
		result = Singleton<GameLevelManager>.Instance.GetDropListByDropWeight(produceVos);
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			GameLevelDefine.OutPutList(goodsId, 1, result);
		}
		return result;
	}

	private void _OnCardCollectionCloseActivity()
	{
		if (IsInActivity() && mIndependentMergeVo != null && mIndependentMergeVo.supportCardReward)
		{
			mIndependentMergeVo.supportCardReward = false;
			SaveIndependentMergeData();
		}
	}

	public bool OpenIndependentMerge()
	{
		if (mIndependentMergeVo == null)
		{
			mIndependentMergeVo = new IndependentMergeModelVo();
		}
		if (!CanOpenIndependentMerge())
		{
			return false;
		}
		OpenIndependentMergeActivity();
		OpenStartView();
		return true;
	}

	public bool CanOpenIndependentMerge()
	{
		if (mIndependentMergeVo.OpenState)
		{
			return false;
		}
		if (Singleton<ServerManager>.Instance.ServerTime <= 0)
		{
			return false;
		}
		if (!MonoSingleton<ConditionManager>.Instance.IsLegal(122))
		{
			return false;
		}
		if (!IsOpenSoftSwitch)
		{
			return false;
		}
		if (!IsOpenHardSwitch)
		{
			return false;
		}
		if (!MonoSingleton<ActivityMutexManager>.Instance.IsLegalActivityMutex(ActivityMutexID.AMID_Independent))
		{
			return false;
		}
		IIndependentMergeTheme openTheme = GetOpenTheme();
		if (openTheme == null)
		{
			return false;
		}
		if (!HasActivityRes(openTheme.themeID))
		{
			return false;
		}
		if ((long)ServerTimeManager.TodayDateServerNumberV3 > (long)mIndependentMergeVo.endDayID)
		{
			return true;
		}
		return false;
	}

	private IIndependentMergeTheme GetOpenTheme()
	{
		IIndependentMergeTheme result = null;
		int num = -1;
		int num2 = -1;
		int num3 = -1;
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.IndependentMerge);
		if (activityConfigConstantData != null)
		{
			num = activityConfigConstantData.startDayID;
			num2 = activityConfigConstantData.endDayID;
			num3 = activityConfigConstantData.themeID;
		}
		if (num > 0 && num2 > 0 && num3 > 0)
		{
			result = StaticDataBase<StaticDataManager>.GetInstance().IndependentMergeThemes.GetItem(num3);
		}
		return result;
	}

	private void OpenIndependentMergeActivity()
	{
		IIndependentMergeTheme openTheme = GetOpenTheme();
		if (openTheme == null)
		{
			return;
		}
		int todayDateServerNumberV = ServerTimeManager.TodayDateServerNumberV3;
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.IndependentMerge);
		if (activityConfigConstantData == null)
		{
			return;
		}
		try
		{
			mIndependentMergeVo.ResetData();
			ResetShopData(openTheme.shopType);
			mIndependentMergeVo.ThemeID = openTheme.themeID;
			mIndependentMergeVo.OpenState = true;
			mIndependentMergeVo.startDayID = activityConfigConstantData.startDayID;
			mIndependentMergeVo.endDayID = activityConfigConstantData.endDayID;
			mIndependentMergeVo.OpenTime = activityConfigConstantData.startTimeStamp;
			mIndependentMergeVo.CloseTime = activityConfigConstantData.endTimeStamp;
			mIndependentMergeVo.LastResetDayID = todayDateServerNumberV;
			mIndependentMergeVo.OpenIap2Tag = ObjectManager.GetInstance().userTagModel.GetUserIap2Tag();
			mIndependentMergeVo.OpenIap3Tag = ObjectManager.GetInstance().userTagModel.GetUserIap3Tag();
			if (ThemeID == 4)
			{
				mIndependentMergeVo.TokenDropType = ABTestSwitchDefine.MergeIndependentTokenDropSwitch();
			}
			else
			{
				mIndependentMergeVo.TokenDropType = 0;
			}
			mIndependentMergeVo.supportCardReward = ObjectManager.GetInstance().cardCollectionV2Model.IsInActivity() || ObjectManager.GetInstance().cardCollectionV3Model.IsInActivity();
			mIndependentMergeVo.GiftShopType = openTheme.shopType;
			mIndependentMergeVo.OpenABGroup = ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string>
			{
				"숏끔溽搐䥄7¾厽숮끔炭䌯敆=Æ叅匫橮ā讥鹧" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숥끔断爦敆6\u009a厙숚끈皶攛䑸7Þ叝뻰" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕叉橥ā讝詥" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숃끔疭猄敘>Ú叙숞끈劸攟瑑6N卍刣疿\ud9dfŐ" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕癐r4끤w\udc31仍" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽潥n4끉p䐻䟜" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕判皿\ud9eaő" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕晃o4끬g崱㻜" + GetConfigSuffix()
			});
			if (mIndependentMergeVo.GiftShopType == 114)
			{
				mIndependentMergeVo.GiftDynamicIndex = openTheme.themeID;
			}
			else if (ThemeID == 4)
			{
				List<IShopDynamicGift> dynamicGiftsByShopType = MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftsByShopType((ShopType)mIndependentMergeVo.GiftShopType, 3, -1, EUserIapTagType.e_iapTag3);
				if (dynamicGiftsByShopType.Count > 0)
				{
					mIndependentMergeVo.GiftDynamicIndex = dynamicGiftsByShopType[0].dynamicGiftIndex;
				}
				else
				{
					mIndependentMergeVo.GiftDynamicIndex = -1;
				}
			}
			else
			{
				List<IShopDynamicGift> dynamicGiftsByShopType2 = MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftsByShopType((ShopType)mIndependentMergeVo.GiftShopType, 3, -1, EUserIapTagType.e_iapTag2);
				if (dynamicGiftsByShopType2.Count > 0)
				{
					mIndependentMergeVo.GiftDynamicIndex = dynamicGiftsByShopType2[0].dynamicGiftIndex;
				}
				else
				{
					mIndependentMergeVo.GiftDynamicIndex = -1;
				}
			}
			ReloadConfig();
			InitialIndependentMap();
			SaveIndependentMergeData();
			if (GetTokenDropType() == 1)
			{
				IOpenActivityAddOrderScore();
			}
			ActivityAnalytic("刖棻\ud9c7Ś");
			EventManager.GetInstance().DispatchEvent(202015);
		}
		catch (Exception)
		{
		}
	}

	private void InitialIndependentMap()
	{
		mIndependentMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		if (mIndependentInitMap == null)
		{
			return;
		}
		List<IGameInitVo> list = mIndependentInitMap.list;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		for (int i = 0; i < list.Count; i++)
		{
			independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = list[i].goodsID;
			independentGameGoodsVo.GoodsState = GetIndependentGoodsState(list[i].status);
			mIndependentMergeVo.IndependentMap[list[i].gridID] = independentGameGoodsVo;
		}
		IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		if (independentMergeTheme == null)
		{
			return;
		}
		string[] array = independentMergeTheme.initialData.Split(';');
		for (int j = 0; j < array.Length; j++)
		{
			string[] array2 = array[j].Split('|');
			if (array2.Length != 3)
			{
				continue;
			}
			int num = array2[0].ToInt();
			int num2 = array2[1].ToInt();
			int num3 = array2[2].ToInt();
			if (num == 0 || num2 == 0 || num3 == 0)
			{
				continue;
			}
			switch (num)
			{
			case 1:
				ObjectManager.GetInstance().itemDataModel.ChangeItemNum(num2, num3, needNotice: true, 103);
				break;
			case 2:
				if (mIndependentMergeVo.IndependentTemporary == null)
				{
					mIndependentMergeVo.IndependentTemporary = new List<int>();
				}
				if (mIndependentMergeVo.IndependentTopTemporary == null)
				{
					mIndependentMergeVo.IndependentTopTemporary = new List<int>();
				}
				AddIndependentGoods(num2, num3, "숄끌璼愅敀\u0001Ö叕娢䶌", null, isTotalDrop: false, isTop: true);
				break;
			}
		}
	}

	public bool CanCloseIndependentMerge()
	{
		if (mIndependentMergeVo == null)
		{
			return false;
		}
		if (!mIndependentMergeVo.OpenState)
		{
			return false;
		}
		if (Singleton<ServerManager>.Instance.ServerTime <= 0)
		{
			return false;
		}
		if (!HasActivityBaseResByThemeID())
		{
			return false;
		}
		int todayDateServerNumberV = ServerTimeManager.TodayDateServerNumberV3;
		if (mIndependentMergeVo.endDayID > 0 && todayDateServerNumberV > mIndependentMergeVo.endDayID)
		{
			return true;
		}
		return false;
	}

	public bool CloseIndependentMerge()
	{
		if (!CanCloseIndependentMerge())
		{
			return false;
		}
		CloseActivity();
		OpenEndView();
		return true;
	}

	private void CloseActivity()
	{
		if (mIndependentMergeVo.OpenState)
		{
			IndependentSettleup();
			ActivityAnalytic("匧橬ā词靥");
			if (GetTokenDropType() == 1)
			{
				ICloseActivityRemoveOrderScore();
			}
			mIndependentMergeVo.OpenState = false;
			mIndependentMergeVo.ResetData();
			SaveIndependentMergeData();
			EventManager.GetInstance().DispatchEvent(202015);
			EventManager.GetInstance().DispatchEvent(203095, SevenDayTaskType.MergeCatLevel);
			EventManager.GetInstance().DispatchEvent(203095, SevenDayTaskType.MergeCatArtLevel);
		}
	}

	private void IndependentSettleup()
	{
		mSettleRewardList = new List<BaseData3VO>();
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IIndependentGoodsCollectVo independentGoodsCollectVo = null;
		List<int> list = new List<int>();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		int num = 0;
		foreach (KeyValuePair<int, IndependentGameGoodsVo> item in mIndependentMergeVo.IndependentMap)
		{
			if (item.Value == null || IIndependentGoodsBaseVo.CannotDrag(item.Value.GoodsState))
			{
				continue;
			}
			independentGoodsBaseVo = GetGoodsConfigById(item.Value.goodsID);
			if (independentGoodsBaseVo == null || (independentGoodsBaseVo.type != 2 && independentGoodsBaseVo.type != 3))
			{
				continue;
			}
			independentGoodsCollectVo = mIndependentGoodsCollectList.GetItem(independentGoodsBaseVo.goodsID);
			if (independentGoodsCollectVo == null)
			{
				continue;
			}
			if (independentGoodsCollectVo.itemId == 1050)
			{
				num += independentGoodsCollectVo.amount;
			}
			if (independentGoodsCollectVo.itemType == 1 && independentGoodsCollectVo.itemId != 1050)
			{
				if (dictionary.ContainsKey(independentGoodsCollectVo.itemId))
				{
					dictionary[independentGoodsCollectVo.itemId] += independentGoodsCollectVo.amount;
				}
				else
				{
					dictionary.Add(independentGoodsCollectVo.itemId, independentGoodsCollectVo.amount);
				}
			}
			else if (independentGoodsCollectVo.itemType == 2)
			{
				for (int i = 0; i < independentGoodsCollectVo.amount; i++)
				{
					list.Add(independentGoodsCollectVo.itemId);
				}
			}
			else
			{
				if (independentGoodsCollectVo.itemType != 12)
				{
					continue;
				}
				bool isCCActive = SupportCardReward();
				List<BaseData3VO> baseData3VOListConvert = BaseData3VO.GetBaseData3VOListConvert(independentGoodsCollectVo.GetBaseData3String(), isCCActive);
				for (int j = 0; j < baseData3VOListConvert.Count; j++)
				{
					if (baseData3VOListConvert[j] == null)
					{
						continue;
					}
					if (baseData3VOListConvert[j].type == 1)
					{
						if (dictionary.ContainsKey(baseData3VOListConvert[j].id))
						{
							dictionary[baseData3VOListConvert[j].id] += baseData3VOListConvert[j].num;
						}
						else
						{
							dictionary.Add(baseData3VOListConvert[j].id, baseData3VOListConvert[j].num);
						}
					}
					else
					{
						mSettleRewardList.Add(baseData3VOListConvert[j]);
					}
				}
			}
		}
		List<BaseData3VO> collection = SettleUpReward(num);
		mSettleRewardList.AddRange(collection);
		foreach (KeyValuePair<int, int> item2 in dictionary)
		{
			mSettleRewardList.Add(new BaseData3VO
			{
				type = 1,
				id = item2.Key,
				num = item2.Value
			});
		}
		for (int k = 0; k < list.Count; k++)
		{
			mSettleRewardList.Add(new BaseData3VO
			{
				type = 2,
				id = list[k],
				num = 1
			});
		}
		_ = GameConst.GAME_MODE;
		ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(mSettleRewardList, notice: true, 103);
	}

	public bool HasActivityRes(int themeID)
	{
		bool result = false;
		switch (themeID)
		{
		case 1:
			result = MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.independentMerge);
			break;
		case 2:
			result = MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.independentMerge_2);
			break;
		case 3:
			result = MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.independentMerge_3);
			break;
		case 4:
			result = MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.independentMerge_4);
			break;
		}
		return result;
	}

	public bool HasActivityBaseResByThemeID()
	{
		return HasActivityRes(mIndependentMergeVo.ThemeID);
	}

	public ActivityOpenDateConfig GetActivityConfigConstantData(ActivitySwitchConfigID activitySwitch)
	{
		return MonoSingleton<ActivitySwitchManager>.Instance.GetActivityOpenDateConfig(activitySwitch, ActivitySwitchTimeType.AST_ServerOnly);
	}

	public IIndependentDropConfigVo GetIndependentDropConfig()
	{
		return mIndependentDropConfig;
	}

	public bool SupportCardReward()
	{
		if (mIndependentMergeVo == null)
		{
			return false;
		}
		return mIndependentMergeVo.supportCardReward;
	}

	public bool IsInActivity()
	{
		if (mIndependentMergeVo == null || !mIndependentMergeVo.OpenState)
		{
			return false;
		}
		return true;
	}

	public void JudgeHardCloseActivity()
	{
		if (IsInActivity() && !IsOpenHardSwitch && mIndependentMergeVo != null)
		{
			try
			{
				mIndependentMergeVo.CloseTime = mIndependentMergeVo.OpenTime - ServerTimeManager.TimeDiff - 10;
				mIndependentMergeVo.endDayID = TimeManager.GetDateIDByTime(mIndependentMergeVo.CloseTime);
				SaveIndependentMergeData();
			}
			catch (Exception)
			{
			}
		}
	}

	public int GetActivityTimedown()
	{
		if (!mIndependentMergeVo.OpenState)
		{
			return 0;
		}
		long num = ServerTimeManager.CurrentServerTime3();
		int num2 = (int)(mIndependentMergeVo.CloseTime - num);
		if (num2 < 0)
		{
			num2 = 0;
		}
		return num2;
	}

	public IIndependentMergeTheme GetIndependentMergeTheme()
	{
		return StaticDataBase<StaticDataManager>.GetInstance().IndependentMergeThemes.GetItem(ThemeID);
	}

	public void CheckOpenGift()
	{
		if (!mIndependentMergeVo.OpenState || mIndependentMergeVo.GiftOpenState || mIndependentMergeVo.GiftShopType <= 0 || MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByTypeAndIndex((ShopType)mIndependentMergeVo.GiftShopType, mIndependentMergeVo.GiftDynamicIndex) == null)
		{
			return;
		}
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.IndependentGift);
		if (activityConfigConstantData == null || activityConfigConstantData.themeID != ThemeID)
		{
			return;
		}
		try
		{
			if (mIndependentMergeVo.GiftCloseTime <= activityConfigConstantData.startTimeStamp)
			{
				ResetShopData(mIndependentMergeVo.GiftShopType);
				mIndependentMergeVo.GiftOpenState = true;
				mIndependentMergeVo.GiftOpenTime = activityConfigConstantData.startTimeStamp;
				mIndependentMergeVo.GiftCloseTime = activityConfigConstantData.endTimeStamp;
				mIndependentMergeVo.LastPopGiftTime = ServerTimeManager.CurrentServerTime3();
				SaveIndependentMergeData();
				OpenActivityGiftView(0.5f, autoAlert: true);
				if (ThemeID == 4)
				{
					EventManager.GetInstance().DispatchEvent(202017);
				}
			}
		}
		catch (Exception)
		{
		}
	}

	public void CheckCloseGift()
	{
		if (mIndependentMergeVo.GiftOpenState && Singleton<ServerManager>.Instance.ServerTime > 0 && ServerTimeManager.CurrentServerTime3() > mIndependentMergeVo.GiftCloseTime)
		{
			mIndependentMergeVo.GiftOpenState = false;
			mIndependentMergeVo.LastPopGiftTime = 0L;
			SaveIndependentMergeData();
			EventManager.GetInstance().DispatchEvent(202017);
		}
	}

	public void CheckPopGiftView()
	{
		if (ThemeID != 2 && mIndependentMergeVo.OpenState && mIndependentMergeVo.GiftOpenState)
		{
			IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null && ServerTimeManager.CurrentServerTime3() - mIndependentMergeVo.LastPopGiftTime >= independentMergeTheme.giftCd)
			{
				mIndependentMergeVo.LastPopGiftTime = ServerTimeManager.CurrentServerTime3();
				ChangeIndependentSaveData();
				OpenActivityGiftView(0.5f, autoAlert: true);
			}
		}
	}

	private bool GiftState()
	{
		if (ThemeID == 2)
		{
			bool flag = ObjectManager.GetInstance().onePlusNGiftModel.IsInGift();
			if (!flag)
			{
				return false;
			}
			if (flag)
			{
				return ObjectManager.GetInstance().onePlusNGiftModel.GetShowData().themeId == OnePlusNGift.EThemeId.MergeEgypt;
			}
			return false;
		}
		return mIndependentMergeVo.GiftOpenState;
	}

	public int GetGiftTimedown()
	{
		if (ThemeID == 2)
		{
			return ObjectManager.GetInstance().onePlusNGiftModel.GetGiftTimedown();
		}
		if (!mIndependentMergeVo.OpenState)
		{
			return 0;
		}
		if (!mIndependentMergeVo.GiftOpenState)
		{
			return 0;
		}
		long num = ServerTimeManager.CurrentServerTime3();
		int num2 = (int)(mIndependentMergeVo.GiftCloseTime - num);
		if (num2 < 0)
		{
			num2 = 0;
		}
		return num2;
	}

	public void VerifyOrderCallback(ShopVO shopVO)
	{
		if (shopVO != null && mIndependentMergeVo != null && mIndependentMergeVo.GiftShopType > 0 && shopVO.type == mIndependentMergeVo.GiftShopType && MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByCanBuy((ShopType)mIndependentMergeVo.GiftShopType, mIndependentMergeVo.GiftDynamicIndex) == null)
		{
			mIndependentMergeVo.GiftOpenState = false;
			mIndependentMergeVo.LastPopGiftTime = 0L;
			SaveIndependentMergeData();
			EventManager.GetInstance().DispatchEvent(202017);
		}
	}

	public static void ResetShopData(int shopType)
	{
		List<ShopVO> iAPShopList = Singleton<ShopManager>.Instance.GetIAPShopList();
		for (int i = 0; i < iAPShopList.Count; i++)
		{
			if (iAPShopList[i].type == shopType)
			{
				ObjectManager.GetInstance().shopDataModel.ResetShopBuyCount(iAPShopList[i]);
			}
		}
	}

	public Dictionary<int, IndependentGameGoodsVo> GetIndependentMap()
	{
		return mIndependentMergeVo.IndependentMap;
	}

	public void ChangeIndependentMap(int gridId, IndependentGameGoodsVo goodsVo)
	{
		if (mIndependentMergeVo == null)
		{
			mIndependentMergeVo = new IndependentMergeModelVo();
		}
		if (mIndependentMergeVo.IndependentMap == null)
		{
			mIndependentMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		}
		mIndependentMergeVo.IndependentMap[gridId] = goodsVo;
		ChangeIndependentSaveData();
	}

	public void UnlockNewGoods(int goodsID)
	{
		if (mIndependentMergeVo.UnlockGoodsList == null)
		{
			mIndependentMergeVo.UnlockGoodsList = new List<int>();
		}
		if (!mIndependentMergeVo.UnlockGoodsList.Contains(goodsID))
		{
			mIndependentMergeVo.UnlockGoodsList.Add(goodsID);
			IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsID);
			IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (goodsConfigById != null && independentMergeTheme != null)
			{
				List<IIndependentGoodsBaseVo> goodsListBySeriesID = GetGoodsListBySeriesID(goodsConfigById.series);
				if (goodsListBySeriesID != null && goodsListBySeriesID.Count > 0)
				{
					for (int i = 0; i < goodsListBySeriesID.Count; i++)
					{
						if (goodsListBySeriesID[i].level < goodsConfigById.level && !mIndependentMergeVo.UnlockGoodsList.Contains(goodsListBySeriesID[i].goodsID))
						{
							mIndependentMergeVo.UnlockGoodsList.Add(goodsListBySeriesID[i].goodsID);
						}
					}
				}
				if (goodsConfigById.series == independentMergeTheme.themeSeriesID && goodsConfigById.level > mIndependentMergeVo.UnlockMaxLevel)
				{
					mIndependentMergeVo.UnlockMaxLevel = goodsConfigById.level;
					EventManager.GetInstance().DispatchEvent(202016, goodsConfigById.goodsID);
					if (ThemeID == 3)
					{
						ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.MergeCatLevel, goodsConfigById.level);
					}
					else if (ThemeID == 4)
					{
						ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.MergeCatArtLevel, goodsConfigById.level);
					}
				}
				if (mIndependentMergeVo.BranchMaxLevel == null)
				{
					mIndependentMergeVo.BranchMaxLevel = new Dictionary<int, int>();
				}
				if (goodsConfigById.series > 0)
				{
					if (mIndependentMergeVo.BranchMaxLevel.ContainsKey(goodsConfigById.series))
					{
						if (mIndependentMergeVo.BranchMaxLevel[goodsConfigById.series] < goodsConfigById.level)
						{
							mIndependentMergeVo.BranchMaxLevel[goodsConfigById.series] = goodsConfigById.level;
						}
					}
					else
					{
						mIndependentMergeVo.BranchMaxLevel[goodsConfigById.series] = goodsConfigById.level;
					}
					if (mIndependentMergeVo.IllustratedUnlockState.ContainsKey(goodsConfigById.series))
					{
						mIndependentMergeVo.IllustratedUnlockState[goodsConfigById.series][goodsConfigById.goodsID] = 1;
						EventManager.GetInstance().DispatchEvent(203061);
					}
				}
			}
		}
		else
		{
			IIndependentGoodsBaseVo goodsConfigById2 = GetGoodsConfigById(goodsID);
			if (mIndependentMergeVo.IllustratedUnlockState.ContainsKey(goodsConfigById2.series) && mIndependentMergeVo.IllustratedUnlockState[goodsConfigById2.series][goodsConfigById2.goodsID] == 0)
			{
				mIndependentMergeVo.IllustratedUnlockState[goodsConfigById2.series][goodsConfigById2.goodsID] = 1;
				EventManager.GetInstance().DispatchEvent(203061);
			}
		}
		ChangeIndependentSaveData();
	}

	public int GetUnlockMaxLevel()
	{
		return mIndependentMergeVo.UnlockMaxLevel;
	}

	public int GetTargetMaxLevel()
	{
		return mTargetMaxLevel;
	}

	public bool GetUnlockStateByGoodsID(int goodsID)
	{
		if (mIndependentMergeVo.UnlockGoodsList == null)
		{
			return false;
		}
		if (mIndependentMergeVo.UnlockGoodsList.Contains(goodsID))
		{
			return true;
		}
		return false;
	}

	private void InitIllustrateInfo()
	{
		if (mIndependentMergeVo.IllustratedUnlockState == null)
		{
			mIndependentMergeVo.IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();
		}
		if (mIndependentMergeVo.IllustratedUnlockState.Count > 0)
		{
			return;
		}
		foreach (int key in illusratedInfo.Keys)
		{
			if (mIndependentMergeVo.IllustratedUnlockState.ContainsKey(key))
			{
				continue;
			}
			mIndependentMergeVo.IllustratedUnlockState[key] = new Dictionary<int, int>();
			foreach (int key2 in illusratedInfo[key].Keys)
			{
				mIndependentMergeVo.IllustratedUnlockState[key][key2] = 0;
			}
		}
	}

	public IIndependentGoodsBaseVo GetGoodsBaseVOById(int goodsID)
	{
		IIndependentGoodsBaseVo result = null;
		foreach (IIndependentGoodsBaseVo item in mIndependentGoodsBaseList.list)
		{
			if (item.goodsID == goodsID)
			{
				result = item;
			}
		}
		return result;
	}

	private void _InitIllustrateConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숃끔疭猄敘>Ú叙숞끈劸攟瑑6N卍刣疿\ud9dfŐ" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string item3 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentIllustrateRewardMap = new SerializableDataMap<int, IIndependentIllustrateRewardVO>("숃끟䦫䐄獑!*匩");
		if (item)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + item3, mIndependentIllustrateRewardMap, clean: true);
		}
		if (mIndependentIllustrateRewardMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentIllustrateRewardMap);
		}
		mIndependentIllustrateRewardMap.AddReplaceItemByABTestGroup(text, mIndependentMergeVo.OpenABGroup);
		illusratedInfo = new Dictionary<int, Dictionary<int, IndependentIllustratedData>>();
		foreach (IIndependentIllustrateRewardVO item4 in mIndependentIllustrateRewardMap.list)
		{
			if (!illusratedInfo.ContainsKey(item4.seriesID))
			{
				illusratedInfo.Add(item4.seriesID, new Dictionary<int, IndependentIllustratedData>());
			}
			if (!illusratedInfo[item4.seriesID].ContainsKey(item4.goodsID))
			{
				IIndependentGoodsBaseVo goodsBaseVOById = ObjectManager.GetInstance().independentMergeModel.GetGoodsBaseVOById(item4.goodsID);
				illusratedInfo[item4.seriesID].Add(item4.goodsID, new IndependentIllustratedData(item4, goodsBaseVOById));
			}
		}
	}

	public bool GetGoodsIsShowInfoRedPoint(int goodsBaseVo)
	{
		return !mIndependentMergeVo.ShowedInfoList.Contains(goodsBaseVo);
	}

	public void ShowGoodsInfo(int goodsID)
	{
		if (!mIndependentMergeVo.ShowedInfoList.Contains(goodsID))
		{
			mIndependentMergeVo.ShowedInfoList.Add(goodsID);
			SaveIndependentMergeData();
		}
	}

	public IndependentIllustratedData GetIllustratedData(int goodsID)
	{
		IndependentIllustratedData result = null;
		foreach (int key in illusratedInfo.Keys)
		{
			if (illusratedInfo[key].ContainsKey(goodsID))
			{
				result = illusratedInfo[key][goodsID];
				break;
			}
		}
		return result;
	}

	public bool IsCompleteSeriesCollect(int seriesID)
	{
		if (mIndependentMergeVo.IllustratedUnlockState.ContainsKey(seriesID))
		{
			foreach (KeyValuePair<int, int> item in mIndependentMergeVo.IllustratedUnlockState[seriesID])
			{
				if (item.Value != 2)
				{
					return false;
				}
			}
			return true;
		}
		return false;
	}

	public bool IsIllustratedWaitingReward()
	{
		bool result = false;
		foreach (KeyValuePair<int, Dictionary<int, int>> item in mIndependentMergeVo.IllustratedUnlockState)
		{
			foreach (KeyValuePair<int, int> item2 in item.Value)
			{
				if (item2.Value == 1)
				{
					result = true;
					return result;
				}
			}
		}
		return result;
	}

	public int GetUnlockIllsustratedCount()
	{
		int num = 0;
		InitIllustrateInfo();
		foreach (KeyValuePair<int, Dictionary<int, int>> item in mIndependentMergeVo.IllustratedUnlockState)
		{
			foreach (KeyValuePair<int, int> item2 in item.Value)
			{
				if (item2.Value != 0)
				{
					num++;
				}
			}
		}
		return num;
	}

	public int GetAllIllsustratedCount()
	{
		int num = 0;
		foreach (int key in illusratedInfo.Keys)
		{
			num += illusratedInfo[key].Count;
		}
		return num;
	}

	public int GetGoodsUnlockState(IIndependentGoodsBaseVo goodsBaseVo)
	{
		if (mIndependentMergeVo.IllustratedUnlockState.ContainsKey(goodsBaseVo.series))
		{
			if (mIndependentMergeVo.IllustratedUnlockState[goodsBaseVo.series].ContainsKey(goodsBaseVo.goodsID))
			{
				return mIndependentMergeVo.IllustratedUnlockState[goodsBaseVo.series][goodsBaseVo.goodsID];
			}
			return -1;
		}
		return -1;
	}

	public int GetCompleteIllsustratedCount()
	{
		int num = 0;
		InitIllustrateInfo();
		foreach (KeyValuePair<int, Dictionary<int, int>> item in mIndependentMergeVo.IllustratedUnlockState)
		{
			foreach (KeyValuePair<int, int> item2 in item.Value)
			{
				if (item2.Value == 2)
				{
					num++;
				}
			}
		}
		return num;
	}

	public List<BaseData3VO> GetIllustrateBigRewardList()
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		list.AddRange(mIndependentIllustrateRewardMap.list[0].GetFinalReward(SupportCardReward()));
		return list;
	}

	public bool GetRewardCliamed(int seriesID)
	{
		if (mIndependentMergeVo.IllustratedUnlockState == null || mIndependentMergeVo.IllustratedUnlockState.Count <= 0)
		{
			return false;
		}
		int num = 0;
		foreach (KeyValuePair<int, int> item in mIndependentMergeVo.IllustratedUnlockState[seriesID])
		{
			if (item.Value == 2)
			{
				num++;
			}
		}
		return num == illusratedInfo[seriesID].Count;
	}

	public void OpenCommonRewardView(List<BaseData3VO> rewards, List<BaseData3VO> changeToRewardList = null, List<int> randomGoodsRewardIndexs = null)
	{
		if (rewards == null || rewards.Count <= 0)
		{
			return;
		}
		ViewManager.GetInstance().ShowView<BuySuccessNormalGiftLogic>(new BuySuccessNormalGiftData
		{
			mRewards = MergeSettleRewardList(rewards),
			mChangeToRewardList = changeToRewardList,
			RandomGoodsRewardIndexs = randomGoodsRewardIndexs,
			TitleName = "숝끓撆弞畛 \u0096厕숍끕璷甎捆3Ö叕숃끛玭弄汛<Ò发" + GameConst.GetLanguage(),
			ShowLbTips = false,
			CloseCall = () =>
			{
				int allIllsustratedCount = GetAllIllsustratedCount();
				if (GetCompleteIllsustratedCount() == allIllsustratedCount && !mIndependentMergeVo.IsPopedBigRewardState)
				{
					ClaimBigReward(GetIllustrateBigRewardList());
					IllustratedAnalytic(0, -1);
					mIndependentMergeVo.IsPopedBigRewardState = true;
					ChangeIndependentSaveData();
				}
			},
			ClaimCall = () =>
			{
				MainUIPlayBtnAniViewLogic.Show(0f, 0.3f);
			}
		}, ViewManager.ViewLayer.POP, animate: true);
	}

	private void ClaimBigReward(List<BaseData3VO> rewards, List<BaseData3VO> changeToRewardList = null)
	{
		if (ThemeID == 4 && rewards != null && rewards.Count > 0)
		{
			ViewManager.GetInstance().ShowView<IndependentRewardBoxLogic_cat>(new BuySuccessNormalGiftData
			{
				mRewards = MergeSettleRewardList(rewards),
				mChangeToRewardList = changeToRewardList,
				RandomGoodsRewardIndexs = null,
				TitleName = "숝끓撆弞畛 \u0096厕숍끕璷甎捆3Ö叕숃끛玭弄汛<Ò发" + GameConst.GetLanguage(),
				ShowLbTips = false,
				ClaimCall = () =>
				{
					MainUIPlayBtnAniViewLogic.Show(0f, 0.3f);
				}
			}, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public void RefreshIllustratedUnlockState(int seriesID, int goodsID, int state)
	{
		if (mIndependentMergeVo.IllustratedUnlockState == null)
		{
			mIndependentMergeVo.IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();
			InitIllustrateInfo();
		}
		mIndependentMergeVo.IllustratedUnlockState[seriesID][goodsID] = state;
		ChangeIndependentSaveData();
	}

	public void OpenActivityIllustrationView()
	{
		string viewName = "숏끔溽搐䥄7¾厽숣끔疭猤敘>Ú叙숏끛榭攐牐\u0004ª厩뻫" + GetConfigSuffix();
		ViewManager.GetInstance().ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
	}

	public void OpenStartView()
	{
		string viewName = "숏끔溽搐䥄7¾厽숹끔犭琺敀3Î反橅n4끖k帷䋟" + GetConfigSuffix();
		IndependentStartEndViewData data = new IndependentStartEndViewData
		{
			OpenType = 0
		};
		ViewManager.GetInstance().ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
	}

	public void OpenEndView()
	{
		OpenCloseActView(() =>
		{
			if (mSettleRewardList != null && mSettleRewardList.Count > 0)
			{
				if (ThemeID == 3)
				{
					ViewManager.GetInstance().ShowView<IndependentRewardRessiueViewLogic>(new IndependentRewardRessiueViewData
					{
						mRewards = MergeSettleRewardList(mSettleRewardList),
						mChangeToRewardList = null,
						RandomGoodsRewardIndexs = new List<int>(),
						CloseCall = () =>
						{
							if (mSettleRewardList != null)
							{
								mSettleRewardList.Clear();
							}
						}
					}, ViewManager.ViewLayer.POP, animate: true);
				}
				else if (ThemeID == 4)
				{
					ViewManager.GetInstance().ShowView<IndependentRewardRessiueViewLogic_cat>(new IndependentRewardRessiueViewData
					{
						mRewards = MergeSettleRewardList(mSettleRewardList),
						mChangeToRewardList = null,
						RandomGoodsRewardIndexs = new List<int>(),
						CloseCall = () =>
						{
							if (mSettleRewardList != null)
							{
								mSettleRewardList.Clear();
							}
						}
					}, ViewManager.ViewLayer.POP, animate: true);
				}
				else
				{
					string tipsKey = "숵끷斕渶䥑$\u009a厙숎끿斷眏瑫 \u009a厙敡r4끟f帷㷛" + GetConfigSuffix();
					ViewManager.GetInstance().ShowView<BuySuccessNormalGiftLogic>(new BuySuccessNormalGiftData
					{
						TitleName = "숝끓撆弞畛 \u0096厕숍끕璷甎捆3Ö叕숃끛玭弄汛<Ò发" + GameConst.GetLanguage(),
						TipsKey = tipsKey,
						mRewards = mSettleRewardList,
						mChangeToRewardList = null,
						RandomGoodsRewardIndexs = new List<int>(),
						CloseCall = () =>
						{
							if (mSettleRewardList != null)
							{
								mSettleRewardList.Clear();
							}
						}
					}, ViewManager.ViewLayer.POP, animate: true);
				}
			}
		});
	}

	private void OpenCloseActView(Action callback = null)
	{
		string viewName = "숏끔溽搐䥄7¾厽숹끔犭琺敀3Î反橅n4끖k帷䋟" + GetConfigSuffix();
		IndependentStartEndViewData data = new IndependentStartEndViewData
		{
			OpenType = 1,
			CloseAction = callback
		};
		ViewManager.GetInstance().ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
	}

	private List<BaseData3VO> MergeSettleRewardList(List<BaseData3VO> originList)
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		foreach (BaseData3VO vo in originList)
		{
			if (list.Exists((BaseData3VO a) => a.id == vo.id && a.type == vo.type))
			{
				list[list.FindIndex((BaseData3VO a) => a.id == vo.id && a.type == vo.type)].num += vo.num;
			}
			else
			{
				list.Add(vo);
			}
		}
		return list;
	}

	public void OpenIndependentMergeView()
	{
		if (Singleton<ServerManager>.Instance.ServerTime <= 0 && GetActivityTimedown() <= 0)
		{
			CommonNetErrorViewLogic.Show(new CommonNetErrorViewData
			{
				EnterCallback = () =>
				{
					Singleton<ServerManager>.Instance.GetTimeFromServer();
				},
				tipsKey = "숄끕璷弅捑1Ö叕순끟徫昝獑 \u0082厁匥橩ā讕鑤"
			});
			MonoSingleton<GuideManager>.Instance.FinishPlayingGuide();
		}
		else if (Singleton<ServerManager>.Instance.ServerTime > 0 && GetActivityTimedown() <= 0 && CanCloseIndependentMerge())
		{
			CloseIndependentMerge();
			MonoSingleton<GuideManager>.Instance.FinishPlayingGuide();
		}
		else
		{
			string viewName = "숏끔溽搐䥄7¾厽숧끔枭攨救 ¢厡刖梟\ud9feŃ" + GetConfigSuffix();
			ViewManager.GetInstance().ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public void ShowUnlockGoodsView(int goodsID)
	{
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsID);
		if (goodsConfigById != null && goodsConfigById.level >= GetUnlockMaxLevel())
		{
			IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null && goodsConfigById.series == independentMergeTheme.themeSeriesID && goodsConfigById.level >= independentMergeTheme.popLevel)
			{
				string viewName = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕숅끔嚵椆啗9^卝欷㺏" + GetConfigSuffix();
				ViewManager.GetInstance().ShowView(viewName, new IndependentGoodsUnlockData
				{
					goodsBaseVo = goodsConfigById
				}, ViewManager.ViewLayer.POP, animate: true);
			}
		}
	}

	public void OpenIndependentHelpView()
	{
		IndependentHelpViewData independentHelpViewData = new IndependentHelpViewData();
		independentHelpViewData.isOpenGuiding = false;
		Debug.Log((object)("슞끂⢠ᕋ稛晴ꮥತ\u0898\ue541简쒴\uf31a" + MonoSingleton<GuideManager>.Instance.IsInGuide() + "뺼" + MonoSingleton<GuideManager>.Instance.CurrentGuideName()));
		IGuideVo guideDataById = MonoSingleton<GuideManager>.Instance.GetGuideDataById(GuideId_1());
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() && MonoSingleton<GuideManager>.Instance.CurrentGuideName() == guideDataById.FileName)
		{
			independentHelpViewData.isOpenGuiding = true;
		}
		string viewName = "숏끔溽搐䥄7¾厽숢끔炭嘣救>Æ叅냔\u00af赴" + GetConfigSuffix();
		ViewManager.GetInstance().ShowView(viewName, independentHelpViewData, ViewManager.ViewLayer.POP, animate: true);
	}

	public void OpenActivityGiftView(float delay = 0f, bool autoAlert = false)
	{
		if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 2)
		{
			OnePlusNGift.ShowData showData = ObjectManager.GetInstance().onePlusNGiftModel.GetShowData();
			bool ignoreGiftOpen = showData.giftData.isPurchase && !showData.giftData.isClaimedFreeGiftAll;
			ObjectManager.GetInstance().onePlusNGiftModel.OpenGiftView(auto: false, ignoreGiftOpen);
		}
		else
		{
			if (!mIndependentMergeVo.GiftOpenState || MonoSingleton<GuideManager>.Instance.IsInGuide())
			{
				return;
			}
			if (delay > 0f)
			{
				TimeManager.Instance.Schedule(this, (float arg0) =>
				{
					IndependentGiftViewData data2 = new IndependentGiftViewData
					{
						autoAlert = autoAlert
					};
					if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 3)
					{
						ViewManager.GetInstance().ShowView<IndependentGiftViewLogic_pet>(data2, ViewManager.ViewLayer.POP, animate: true);
					}
					else if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
					{
						ViewManager.GetInstance().ShowView<IndependentGiftViewLogic_cat>(data2, ViewManager.ViewLayer.POP, animate: true);
					}
					else
					{
						ViewManager.GetInstance().ShowView<IndependentGiftViewLogic>(data2, ViewManager.ViewLayer.POP, animate: true);
					}
				}, delay, 1);
			}
			else
			{
				IndependentGiftViewData data = new IndependentGiftViewData
				{
					autoAlert = autoAlert
				};
				if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 3)
				{
					ViewManager.GetInstance().ShowView<IndependentGiftViewLogic_pet>(data, ViewManager.ViewLayer.POP, animate: true);
				}
				else if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
				{
					ViewManager.GetInstance().ShowView<IndependentGiftViewLogic_cat>(data, ViewManager.ViewLayer.POP, animate: true);
				}
				else
				{
					ViewManager.GetInstance().ShowView<IndependentGiftViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
				}
			}
		}
	}

	public void ShowGoodsInfoView(IndependentGoodsInfoViewData data)
	{
		if (data != null)
		{
			IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null && independentMergeTheme.themeID == 4)
			{
				string viewName = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕列榃\ud9e1ś" + GetConfigSuffix();
				ViewManager.GetInstance().ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
			}
		}
	}

	public string GetGameIconName()
	{
		if (ThemeID == 2)
		{
			return "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕禷瀶捑5ê叩뻨";
		}
		if (ThemeID == 3)
		{
			return "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙煣o4끟r䄷䧜";
		}
		if (ThemeID == 4)
		{
			return "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙摣o4끟e䌳㳜";
		}
		return "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙뫫\u0087赴";
	}

	public string GetMainIconName()
	{
		if (ThemeID == 2)
		{
			return "숏끔溽搐䥄7¾厽숧끔溭䤨敕;¾厽숵끕禷瀶捑5ê叩뻨";
		}
		if (ThemeID == 3)
		{
			return "숏끔溽搐䥄7¾厽숧끔溭䤨敕;¾厽煣o4끟r䄷䧜";
		}
		if (ThemeID == 4)
		{
			return "숏끔溽搐䥄7¾厽숧끔溭䤨敕;¾厽摣o4끟e䌳㳜";
		}
		return "숏끔溽搐䥄7¾厽숧끔溭䤨敕;¾厽뫫\u0087赴";
	}

	public string GetMainGiftIconName()
	{
		if (ThemeID == 4)
		{
			return "숏끔溽搐䥄7¾厽숧끔溭䜨敕;¾厽숣끜溭弤楗=¾厽뫕¿赴";
		}
		return string.Empty;
	}

	private void TimeUpdate()
	{
		TomorrowResetData();
		CheckCloseGift();
		CheckActivityOrderScore();
	}

	private void TomorrowResetData()
	{
		if (IsInActivity())
		{
			int todayDateServerNumberV = ServerTimeManager.TodayDateServerNumberV3;
			if (todayDateServerNumberV != mIndependentMergeVo.LastResetDayID && mIndependentMergeVo.LastResetDayID < todayDateServerNumberV)
			{
				mIndependentMergeVo.LastResetDayID = todayDateServerNumberV;
				mIndependentMergeVo.TodayDropTotal = 0;
				mIndependentDropConfig = null;
				ChangeIndependentSaveData();
				ResetIndependentDropConfig();
			}
		}
	}

	public List<int> GetTemporaryGoods()
	{
		List<int> list = new List<int>();
		if (mIndependentMergeVo.IndependentTopTemporary != null && mIndependentMergeVo.IndependentTopTemporary.Count > 0)
		{
			list = list.Concat(mIndependentMergeVo.IndependentTopTemporary).ToList();
		}
		if (mIndependentMergeVo.IndependentTemporary != null && mIndependentMergeVo.IndependentTemporary.Count > 0)
		{
			list = list.Concat(mIndependentMergeVo.IndependentTemporary).ToList();
		}
		return list;
	}

	public int GetTemporaryGoodsID()
	{
		if (mIndependentMergeVo.IndependentTopTemporary != null && mIndependentMergeVo.IndependentTopTemporary.Count > 0)
		{
			return mIndependentMergeVo.IndependentTopTemporary[0];
		}
		if (mIndependentMergeVo.IndependentTemporary != null && mIndependentMergeVo.IndependentTemporary.Count > 0)
		{
			return mIndependentMergeVo.IndependentTemporary[mIndependentMergeVo.IndependentTemporary.Count - 1];
		}
		return 0;
	}

	public void RemoveTemporaryItem()
	{
		if (mIndependentMergeVo.IndependentTopTemporary != null && mIndependentMergeVo.IndependentTopTemporary.Count > 0)
		{
			mIndependentMergeVo.IndependentTopTemporary.RemoveAt(0);
			ChangeIndependentSaveData();
		}
		else if (mIndependentMergeVo.IndependentTemporary != null && mIndependentMergeVo.IndependentTemporary.Count > 0)
		{
			int index = mIndependentMergeVo.IndependentTemporary.Count - 1;
			mIndependentMergeVo.IndependentTemporary.RemoveAt(index);
			ChangeIndependentSaveData();
		}
	}

	public int GetTemporaryCount()
	{
		int num = 0;
		if (mIndependentMergeVo.IndependentTopTemporary != null)
		{
			num += mIndependentMergeVo.IndependentTopTemporary.Count;
		}
		if (mIndependentMergeVo.IndependentTemporary != null)
		{
			num += mIndependentMergeVo.IndependentTemporary.Count;
		}
		return num;
	}

	public IndependentShowData GetShowData()
	{
		if (mShowDataQueue.Count > 0)
		{
			return mShowDataQueue.Dequeue();
		}
		return null;
	}

	public void ChangePassExp(int _exp)
	{
		if (!IsInActivity() || ThemeID != 2)
		{
			return;
		}
		if (mShowDataQueue == null)
		{
			mShowDataQueue = new Queue<IndependentShowData>();
		}
		IndependentShowData independentShowData = new IndependentShowData();
		independentShowData.animExpDatas = new List<IndependentShowExpData>();
		independentShowData.animLevel = mIndependentMergeVo.PassLevel;
		IndependentShowExpData item = new IndependentShowExpData
		{
			level = mIndependentMergeVo.PassLevel,
			currentExp = mIndependentMergeVo.PassExp,
			maxExp = UplevelExp
		};
		independentShowData.animExpDatas.Add(item);
		mIndependentMergeVo.PassExp += _exp;
		if (mIndependentMergeVo.PassExp < 0)
		{
			mIndependentMergeVo.PassExp = 0;
		}
		if (!IsMaxLevel())
		{
			while (CurrentExp >= UplevelExp)
			{
				mIndependentMergeVo.PassExp -= UplevelExp;
				if (mIndependentMergeVo.PassExp < 0)
				{
					mIndependentMergeVo.PassExp = 0;
				}
				mIndependentMergeVo.PassLevel++;
				IndependentShowExpData item2 = new IndependentShowExpData
				{
					level = mIndependentMergeVo.PassLevel,
					currentExp = mIndependentMergeVo.PassExp,
					maxExp = UplevelExp
				};
				independentShowData.animExpDatas.Add(item2);
				List<BaseData3VO> levelRewardList = GetLevelRewardList(mIndependentMergeVo.PassLevel - 1);
				mUpgradeRewardData = Singleton<GameLevelManager>.Instance.GetRandomRewardByReward(levelRewardList);
				if (mUpgradeRewardData != null)
				{
					ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(mUpgradeRewardData.reward, notice: false, 103);
				}
				if (IsMaxLevel())
				{
					break;
				}
			}
		}
		independentShowData.currentExp = mIndependentMergeVo.PassExp;
		independentShowData.currentLevel = mIndependentMergeVo.PassLevel;
		mShowDataQueue.Enqueue(independentShowData);
		ChangeIndependentSaveData();
	}

	private List<BaseData3VO> SettleUpReward(int _exp)
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		mIndependentMergeVo.PassExp += _exp;
		if (mIndependentMergeVo.PassExp < 0)
		{
			mIndependentMergeVo.PassExp = 0;
		}
		if (!IsMaxLevel())
		{
			while (CurrentExp >= UplevelExp)
			{
				mIndependentMergeVo.PassExp -= UplevelExp;
				if (mIndependentMergeVo.PassExp < 0)
				{
					mIndependentMergeVo.PassExp = 0;
				}
				mIndependentMergeVo.PassLevel++;
				List<BaseData3VO> levelRewardList = GetLevelRewardList(mIndependentMergeVo.PassLevel - 1);
				RandomRewardListData randomRewardByReward = Singleton<GameLevelManager>.Instance.GetRandomRewardByReward(levelRewardList);
				if (randomRewardByReward != null)
				{
					list.AddRange(randomRewardByReward.reward);
				}
				if (IsMaxLevel())
				{
					break;
				}
			}
		}
		return list;
	}

	public bool IsMaxLevel()
	{
		if (mIndependentMergeVo.RewardListVos == null || mIndependentMergeVo.RewardListVos.Count == 0)
		{
			return true;
		}
		return mIndependentMergeVo.PassLevel - 1 == mIndependentMergeVo.RewardListVos[mIndependentMergeVo.RewardListVos.Count - 1].level;
	}

	public IIndependentRewardListVO GetMaxLevelConfig()
	{
		if (mIndependentMergeVo.RewardListVos == null || mIndependentMergeVo.RewardListVos.Count == 0)
		{
			return null;
		}
		return mIndependentMergeVo.RewardListVos[mIndependentMergeVo.RewardListVos.Count - 1];
	}

	public void SetLastAnimLevel(int level)
	{
		mIndependentMergeVo.LastAnimPassLevel = level;
		ChangeIndependentSaveData();
	}

	public IIndependentRewardListVO GetPassLevelVo(int _level)
	{
		if (mPassLevelVoDic.TryGetValue(_level, out var value))
		{
			return value;
		}
		return null;
	}

	public void AddIndependentGoods(int goodsID, int num, string getType = "", Transform starTransform = null, bool isTotalDrop = true, bool isTop = false)
	{
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		if (isTotalDrop)
		{
			mIndependentMergeVo.TodayDropTotal += num;
		}
		mIndependentMergeVo.TotalDropNum += num;
		mIndependentMergeVo.TotalDropLevel1Num += GameLevelDefine.TwoPower(goodsConfigById.level - 1) * num;
		if (mIndependentMergeVo.IndependentTemporary == null)
		{
			mIndependentMergeVo.IndependentTemporary = new List<int>();
		}
		if (mIndependentMergeVo.IndependentTopTemporary == null)
		{
			mIndependentMergeVo.IndependentTopTemporary = new List<int>();
		}
		if (isTop)
		{
			for (int i = 0; i < num; i++)
			{
				mIndependentMergeVo.IndependentTopTemporary.Add(goodsID);
			}
		}
		else
		{
			for (int j = 0; j < num; j++)
			{
				mIndependentMergeVo.IndependentTemporary.Add(goodsID);
			}
		}
		ChangeIndependentSaveData();
		DropAnalytic(goodsConfigById.level, getType);
		ResetIndependentDropConfig();
		if ((Object)(object)starTransform != (Object)null)
		{
			PlayDropGoodsAnim(starTransform, goodsConfigById.GetIcon());
		}
	}

	public int GetProduceDropGoodsID()
	{
		if (mIndependentMergeVo == null)
		{
			return 0;
		}
		if (!IsInActivity())
		{
			return 0;
		}
		if (GetActivityTimedown() <= 0)
		{
			return 0;
		}
		if (!HasActivityBaseResByThemeID())
		{
			return 0;
		}
		if (mIndependentDropConfig == null)
		{
			return 0;
		}
		if (mIndependentMergeVo.TodayDropTotal >= mIndependentDropConfig.dropLimit)
		{
			return 0;
		}
		int result = 0;
		if (mIndependentMergeVo.IndependentDropList == null || mIndependentMergeVo.IndependentDropList.Count == 0)
		{
			int num = new Random().Next(2, mIndependentDropConfig.energyCost);
			mIndependentMergeVo.IndependentDropList = new List<int>();
			for (int i = 0; i < mIndependentDropConfig.energyCost; i++)
			{
				if (i == num)
				{
					int randomIndependentGoodsID = GetRandomIndependentGoodsID();
					if (randomIndependentGoodsID > 0)
					{
						mIndependentMergeVo.IndependentDropList.Add(randomIndependentGoodsID);
					}
					else
					{
						mIndependentMergeVo.IndependentDropList.Add(0);
					}
				}
				else
				{
					mIndependentMergeVo.IndependentDropList.Add(0);
				}
			}
			_ = GameConst.GAME_MODE;
		}
		if (mIndependentMergeVo.IndependentDropList.Count > 0)
		{
			result = mIndependentMergeVo.IndependentDropList[0];
			mIndependentMergeVo.IndependentDropList.RemoveAt(0);
			ChangeIndependentSaveData();
		}
		return result;
	}

	private int GetRandomIndependentGoodsID()
	{
		int result = -1;
		if (mIndependentMergeVo.IndependentTokenList == null || mIndependentMergeVo.IndependentTokenList.Count == 0)
		{
			int newDropIndex = 0;
			mIndependentMergeVo.IndependentTokenList = GetIndependentDropList(mIndependentDropConfig, mIndependentMergeVo.IndependentDropIndex, out newDropIndex);
			mIndependentMergeVo.IndependentDropIndex = newDropIndex;
		}
		if (mIndependentMergeVo.IndependentTokenList != null && mIndependentMergeVo.IndependentTokenList.Count > 0)
		{
			result = mIndependentMergeVo.IndependentTokenList[0];
			mIndependentMergeVo.IndependentTokenList.RemoveAt(0);
			ChangeIndependentSaveData();
		}
		return result;
	}

	private List<int> GetIndependentDropList(IIndependentDropConfigVo dropConfig, int dropIndex, out int newDropIndex)
	{
		List<int> list = new List<int>();
		if (dropConfig == null)
		{
			newDropIndex = dropIndex;
			return list;
		}
		List<BaseData2VO> dropListByIndex = dropConfig.GetDropListByIndex(dropIndex, out newDropIndex);
		if (dropListByIndex == null)
		{
			return list;
		}
		dropListByIndex.Sort((BaseData2VO vo1, BaseData2VO vo2) => vo2.num - vo1.num);
		for (int num = 0; num < dropListByIndex.Count; num++)
		{
			list = GameLevelDefine.InsertToList(list, dropListByIndex[num]);
		}
		_ = GameConst.GAME_MODE;
		return list;
	}

	private void PlayDropGoodsAnim(Transform starTransform, string iconName)
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0048: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0059: Unknown result type (might be due to invalid IL or missing references)
		//IL_005e: Unknown result type (might be due to invalid IL or missing references)
		CollectAnimationData arg = new CollectAnimationData
		{
			num = 1,
			endFlyType = RewardFlyIconType.IndependentActivity,
			iconName = iconName,
			iconScale = 0.45f,
			toScale = 0.8f,
			starTransform = starTransform,
			effectBg_Position = Vector3.zero,
			effectBg_Scale = Vector3.one * 2f
		};
		EventManager.GetInstance().DispatchEvent(202101, arg);
	}

	public int GetTokenDropType()
	{
		return mIndependentMergeVo.TokenDropType;
	}

	public int GetTokenItemID(int exp)
	{
		List<IIndependentOrderDropLevel> list = mIndependentDropLevelMap.list.FindAll((IIndependentOrderDropLevel item) => item.InIapTag(mIndependentMergeVo.OpenIap3Tag));
		list.Sort((IIndependentOrderDropLevel a, IIndependentOrderDropLevel b) => a.tokenGoodsID - a.tokenGoodsID);
		foreach (IIndependentOrderDropLevel item in list)
		{
			if (item.getExp[0] <= exp && item.getExp[item.getExp.Length - 1] > exp)
			{
				return item.tokenGoodsID;
			}
		}
		return 0;
	}

	public EOrderScoreActivityType IGetOrderScoreActivityType()
	{
		return EOrderScoreActivityType.e_independent;
	}

	public int IScoreItemType()
	{
		return 9;
	}

	public List<int> IScoreItemID()
	{
		return orderDropGoods;
	}

	public bool IInActivityAndHasRes()
	{
		if (IsInActivity() && HasActivityBaseResByThemeID())
		{
			return GetActivityTimedown() > 0;
		}
		return false;
	}

	public void IOpenActivityAddOrderScore()
	{
		if (ThemeID == 4)
		{
			MonoSingleton<OrderActivityScoreManager>.Instance.OpenActivityAddOrderScore(IGetOrderScoreActivityType());
		}
	}

	public void ICloseActivityRemoveOrderScore()
	{
		if (ThemeID == 4)
		{
			MonoSingleton<OrderActivityScoreManager>.Instance.CloseActivityRemoveOrderScore(IGetOrderScoreActivityType());
		}
	}

	private void CheckActivityOrderScore()
	{
		if (IsInActivity() && GetTokenDropType() != 0 && ThemeID == 4 && GetActivityTimedown() <= 0 && MonoSingleton<OrderActivityScoreManager>.Instance.IsShowingOrderActivityScore(IGetOrderScoreActivityType()))
		{
			ICloseActivityRemoveOrderScore();
		}
	}

	public void IAddOrderScore(List<ISingleOrderForScore> orders, EAddOrderScoreFrom orderFrom, EOrderModelType orderModelType)
	{
		try
		{
			if (GetTokenDropType() != 0)
			{
				switch (orderModelType)
				{
				case EOrderModelType.e_mainlineOrderModel:
				{
					List<SingleDynamicOrder> showingOrders = orders.TryCast<ISingleOrderForScore, SingleDynamicOrder>();
					_AddMainLineOrderToken(showingOrders, orderFrom);
					break;
				}
				case EOrderModelType.e_raceWinnerOrderModel:
				{
					List<RaceWinnerSingleOrder> orders3 = orders.TryCast<ISingleOrderForScore, RaceWinnerSingleOrder>();
					_AddRaceWinnerOrderToken(orders3, orderFrom);
					break;
				}
				case EOrderModelType.e_limitTimeOrderModel:
				{
					List<SingleLimitTimeOrder> orders2 = orders.TryCast<ISingleOrderForScore, SingleLimitTimeOrder>();
					_AddLimitTimeOrderToken(orders2, orderFrom);
					break;
				}
				}
			}
		}
		catch (Exception ex)
		{
			Log.E(string.Format("신⋖휒ﭣ嬤拭z㻍郢㮘碌㪊ꀵ幣욙另쉆뀊犤片笔7Î反녯ٲ⢮\0逮\ud933", orderModelType, ex.Message));
		}
	}

	public bool ICanShowMergeViewActivityEntry()
	{
		return IInActivityAndHasRes();
	}

	private void _AddMainLineOrderToken(List<SingleDynamicOrder> showingOrders, EAddOrderScoreFrom orderFrom)
	{
		if (ThemeID != 4)
		{
			return;
		}
		foreach (SingleDynamicOrder showingOrder in showingOrders)
		{
			int numByTypeAndID = showingOrder.rewards.GetNumByTypeAndID(1, 1001);
			int tokenItemID = GetTokenItemID(numByTypeAndID);
			int num = CalculateOrderToken(tokenItemID, numByTypeAndID);
			int type = IScoreItemType();
			if (num > 0)
			{
				showingOrder.rewards.Add(new BaseData3VO
				{
					type = type,
					id = tokenItemID,
					num = num
				});
			}
		}
		CheckTokenGet(showingOrders);
		if (orderFrom == EAddOrderScoreFrom.e_CreateNewOrder)
		{
			AddMainExtraOrderToken(ref showingOrders);
		}
	}

	private void _AddLimitTimeOrderToken(List<SingleLimitTimeOrder> orders, EAddOrderScoreFrom orderFrom)
	{
		if (ThemeID != 4 || !IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || orders == null || orders.Count <= 0)
		{
			return;
		}
		int itemType = IScoreItemType();
		foreach (SingleLimitTimeOrder order in orders)
		{
			int initMakingPower = ObjectManager.GetInstance().limitTimeOrderModel.m_VO.mOrder.GetInitMakingPower();
			int tokenItemID = GetTokenItemID(initMakingPower);
			int level = ((GetGoodsConfigById(tokenItemID) == null) ? 1 : GetGoodsConfigById(tokenItemID).level);
			float tokenValueCoe = GetTokenValueCoe(level);
			int num = 0;
			if (ThemeID == 4)
			{
				num = (int)Math.Round((float)order.score_independent_4 / tokenValueCoe, MidpointRounding.AwayFromZero);
			}
			_ = GameConst.GAME_MODE;
			_ = 2;
			if (num > 0 && order.rewards.Find((BaseData3VO a) => a.type == itemType) == null)
			{
				order.rewards.Add(new BaseData3VO
				{
					type = itemType,
					id = tokenItemID,
					num = num
				});
			}
		}
	}

	private void _AddRaceWinnerOrderToken(List<RaceWinnerSingleOrder> orders, EAddOrderScoreFrom orderFrom)
	{
		if (ThemeID != 4 || !IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || orders == null || orders.Count <= 0)
		{
			return;
		}
		int itemType = IScoreItemType();
		foreach (RaceWinnerSingleOrder order in orders)
		{
			int initMakingPower = ObjectManager.GetInstance().raceWinnerOrderModel.m_VO.showingOrder.GetInitMakingPower();
			int tokenItemID = GetTokenItemID(initMakingPower);
			int level = ((GetGoodsConfigById(tokenItemID) == null) ? 1 : GetGoodsConfigById(tokenItemID).level);
			float tokenValueCoe = GetTokenValueCoe(level);
			int num = 0;
			if (ThemeID == 4)
			{
				num = (int)Math.Round((float)order.score_independent_4 / tokenValueCoe, MidpointRounding.AwayFromZero);
			}
			_ = GameConst.GAME_MODE;
			_ = 2;
			if (num > 0 && order.rewards.Find((BaseData3VO a) => a.type == itemType) == null)
			{
				order.rewards.Add(new BaseData3VO
				{
					type = itemType,
					id = tokenItemID,
					num = num
				});
			}
		}
	}

	private float GetTokenValueCoe(int level)
	{
		float result = 1f;
		if (level == 1)
		{
			return result;
		}
		List<IIndependentOrderDropLevel> list = mIndependentDropLevelMap.list.FindAll((IIndependentOrderDropLevel item) => item.InIapTag(mIndependentMergeVo.OpenIap3Tag));
		list.Sort((IIndependentOrderDropLevel a, IIndependentOrderDropLevel b) => a.tokenGoodsID - a.tokenGoodsID);
		float num = list[0].tokenCost;
		return (float)list[level - 1].tokenCost / num;
	}

	public int CalculateOrderToken(int goodsID, int expCount)
	{
		if (mIndependentDropLevelMap == null || mIndependentDropLevelMap.GetItem(goodsID) == null)
		{
			return 0;
		}
		List<IIndependentOrderDropLevel> list = mIndependentDropLevelMap.list.FindAll((IIndependentOrderDropLevel item) => item.InIapTag(mIndependentMergeVo.OpenIap3Tag));
		list.Sort((IIndependentOrderDropLevel a, IIndependentOrderDropLevel b) => a.tokenGoodsID - a.tokenGoodsID);
		int num = list.FindIndex((IIndependentOrderDropLevel item) => item.tokenGoodsID == goodsID);
		if (num < 0)
		{
			return 0;
		}
		int maxNum = list[num].maxNum;
		return Mathf.Min((int)Math.Round((double)expCount / (double)list[num].tokenCost, MidpointRounding.AwayFromZero), maxNum);
	}

	public void AddMainExtraOrderToken(ref List<SingleDynamicOrder> mShowingOrders2)
	{
		if (!IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || mShowingOrders2 == null || mShowingOrders2.Count <= 0 || mIndependentDropLevelMap == null)
		{
			return;
		}
		int num = mIndependentMergeVo.MainOrderExp - mIndependentMergeVo.MainOrderTotalDrop;
		if (orderDropGoods == null || orderDropGoods.Count <= 0 || orderDropCost == null || orderDropCost.Count <= 0 || mIndependentDropLevelMap.GetItem(orderDropGoods[0]) == null)
		{
			return;
		}
		if (num <= -1 * orderDropCost[orderDropGoods[0]])
		{
			List<SingleDynamicOrder> list = (from o in mShowingOrders2.FindAll((SingleDynamicOrder o) => o.rewards.FindAll((BaseData3VO r) => orderDropGoods.Contains(r.id)).Count > 0)
				orderby o.rewards.GetNumByTypeAndID(1, 1001) descending
				select o).ToList();
			for (int num2 = list.Count - 1; num2 >= 0; num2--)
			{
				int num3 = list[num2].rewards.FindIndex((BaseData3VO o) => orderDropGoods.Contains(o.id));
				if (num3 > -1 && list[num2].rewards[num3].num > 0)
				{
					int num4 = orderDropCost[list[num2].rewards[num3].id];
					if (num + num4 <= 0)
					{
						list[num2].rewards[num3].num--;
						num += num4;
						if (list[num2].rewards[num3].num == 0)
						{
							list[num2].rewards.RemoveAt(num3);
						}
					}
				}
			}
		}
		else if (num >= orderDropCost[orderDropGoods[0]])
		{
			List<SingleDynamicOrder> list2 = mShowingOrders2.OrderByDescending((SingleDynamicOrder o) => o.rewards.GetNumByTypeAndID(1, 1001)).ToList();
			for (int num5 = 0; num5 < list2.Count; num5++)
			{
				int num6 = list2[num5].rewards.FindIndex((BaseData3VO o) => orderDropGoods.Contains(o.id));
				if (num6 > -1 && list2[num5].rewards[num6].num > 0)
				{
					int num7 = orderDropCost[list2[num5].rewards[num6].id];
					if (num - num7 >= 0)
					{
						list2[num5].rewards[num6].num++;
						num -= num7;
					}
					continue;
				}
				int num8 = orderDropGoods[0];
				if (num8 > 0 && num - orderDropCost[num8] >= 0)
				{
					list2[num5].rewards.Add(new BaseData3VO
					{
						type = IScoreItemType(),
						id = num8,
						num = 1
					});
					num -= orderDropCost[num8];
				}
			}
		}
		CheckTokenGet(mShowingOrders2);
	}

	public void CheckTokenGet(List<SingleDynamicOrder> mShowingOrders2)
	{
		int num = 0;
		SingleDynamicOrder singleDynamicOrder = null;
		foreach (SingleDynamicOrder item in mShowingOrders2)
		{
			bool flag = false;
			for (int i = 0; i < item.rewards.Count; i++)
			{
				if (orderDropGoods.Contains(item.rewards[i].id))
				{
					flag = true;
					break;
				}
			}
			if (flag)
			{
				singleDynamicOrder = null;
				break;
			}
			int numByTypeAndID = item.rewards.GetNumByTypeAndID(1, 1001);
			if (numByTypeAndID > num)
			{
				num = numByTypeAndID;
				singleDynamicOrder = item;
			}
		}
		singleDynamicOrder?.rewards.Add(new BaseData3VO
		{
			type = IScoreItemType(),
			id = GetTokenItemID(num),
			num = 1
		});
	}

	public void CompleteMainOrder(List<BaseData3VO> rewardlist)
	{
		if (!IsInActivity() || GetTokenDropType() != 1)
		{
			return;
		}
		bool flag = false;
		int num = 0;
		for (int i = 0; i < rewardlist.Count; i++)
		{
			BaseData3VO baseData3VO = rewardlist[i];
			int num2 = baseData3VO.num;
			if (orderDropGoods.Contains(baseData3VO.id))
			{
				mIndependentMergeVo.TotalDropNum += num2;
				mIndependentMergeVo.TodayDropTotal += num2;
				mIndependentMergeVo.MainOrderTotalDrop += num2 * orderDropCost[baseData3VO.id];
				num += num2;
				flag = true;
			}
			else if (baseData3VO.id == 1001)
			{
				mIndependentMergeVo.MainOrderExp += num2;
				flag = true;
			}
		}
		if (flag)
		{
			ChangeIndependentSaveData();
		}
	}

	public void CompleteLimitOrder(List<BaseData3VO> rewardlist)
	{
		if (!IsInActivity() || GetTokenDropType() != 1)
		{
			return;
		}
		bool flag = false;
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int i = 0; i < rewardlist.Count; i++)
		{
			BaseData3VO baseData3VO = rewardlist[i];
			int num = baseData3VO.num;
			if (orderDropGoods.Contains(baseData3VO.id))
			{
				mIndependentMergeVo.TotalDropNum += num;
				mIndependentMergeVo.TodayDropTotal += num;
				mIndependentMergeVo.LimitTimeOrderTotalDrop += num * orderDropCost[baseData3VO.id];
				flag = true;
			}
			else if (baseData3VO.id == 1001)
			{
				mIndependentMergeVo.LimitTimeOrderExp += num;
				flag = true;
			}
			IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(baseData3VO.id);
			if (goodsConfigById != null)
			{
				if (dictionary.ContainsKey(baseData3VO.id))
				{
					dictionary[baseData3VO.id] = goodsConfigById.level;
				}
				else
				{
					dictionary.Add(baseData3VO.id, goodsConfigById.level);
				}
			}
		}
		if (flag)
		{
			ChangeIndependentSaveData();
		}
		foreach (int key in dictionary.Keys)
		{
			DropAnalytic(dictionary[key], "匫橲ā讕鱲");
		}
	}

	public void CompleteRaceOrder(List<BaseData3VO> rewardlist)
	{
		if (!IsInActivity() || GetTokenDropType() != 1)
		{
			return;
		}
		bool flag = false;
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int i = 0; i < rewardlist.Count; i++)
		{
			BaseData3VO baseData3VO = rewardlist[i];
			int num = baseData3VO.num;
			if (orderDropGoods.Contains(baseData3VO.id))
			{
				mIndependentMergeVo.TotalDropNum += num;
				mIndependentMergeVo.TodayDropTotal += num;
				mIndependentMergeVo.RaceWinnerTotalDrop += num * orderDropCost[baseData3VO.id];
				flag = true;
			}
			else if (baseData3VO.id == 1001)
			{
				mIndependentMergeVo.RaceWinnerOrderExp += num;
				flag = true;
			}
			IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(baseData3VO.id);
			if (goodsConfigById != null)
			{
				if (dictionary.ContainsKey(baseData3VO.id))
				{
					dictionary[baseData3VO.id] = goodsConfigById.level;
				}
				else
				{
					dictionary.Add(baseData3VO.id, goodsConfigById.level);
				}
			}
		}
		if (flag)
		{
			ChangeIndependentSaveData();
		}
		foreach (int key in dictionary.Keys)
		{
			DropAnalytic(dictionary[key], "匫橲ā讕鱲");
		}
	}

	public int GuideId_1()
	{
		if (ThemeID == 2)
		{
			return 198;
		}
		if (ThemeID == 3)
		{
			return 215;
		}
		if (ThemeID == 4)
		{
			return 230;
		}
		return 159;
	}

	public int GuideId_2()
	{
		if (ThemeID == 2)
		{
			return 199;
		}
		if (ThemeID == 3)
		{
			return 216;
		}
		if (ThemeID == 4)
		{
			return 231;
		}
		return 161;
	}

	public int GuideId_3()
	{
		if (ThemeID == 2)
		{
			return 200;
		}
		if (ThemeID == 3)
		{
			return 217;
		}
		if (ThemeID == 4)
		{
			return 232;
		}
		return -1;
	}

	public int GuideId_4()
	{
		if (ThemeID == 2)
		{
			return 201;
		}
		return -1;
	}

	public int GuideId_5()
	{
		if (ThemeID == 2)
		{
			return 202;
		}
		return -1;
	}

	public int GuideId_6()
	{
		if (ThemeID == 4)
		{
			return 233;
		}
		return -1;
	}

	public int GuideId_7()
	{
		if (ThemeID == 4)
		{
			return 234;
		}
		return -1;
	}

	public bool DragGuideFinish()
	{
		if (!IsInActivity())
		{
			return true;
		}
		if (ThemeID == 2)
		{
			if (MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_2()) && MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_4()))
			{
				return MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_5());
			}
			return false;
		}
		if (ThemeID == 4)
		{
			if (MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_2()) && MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_6()))
			{
				return MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_7());
			}
			return false;
		}
		return MonoSingleton<GuideManager>.Instance.IsFinishByID(GuideId_2());
	}

	private void GuideEvent(string eventName)
	{
		if (eventName == "숄끊澼搅佤 Â叁숩끙撼弪畕 \u0096厕初澯\ud9e0ń")
		{
			if (!((Object)(object)ViewManager.GetInstance().GetView("숏끔溽搐䥄7¾厽숮끔憭椯救&\u008a厉녬剳㩂\0逧\ud979") != (Object)null))
			{
				int goodsId = 100540;
				IndependentDetailsViewData data = new IndependentDetailsViewData
				{
					goodsId = goodsId
				};
				ViewManager.GetInstance().ShowView<IndependentDetailsViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
			}
		}
		else if (eventName == "숄끊澼欅佷=Â叁숩끔撾弪楕 \u0096厕初澯\ud9e0ń" && !((Object)(object)ViewManager.GetInstance().GetView("숏끔溽搐䥄7¾厽숮끔憭椯救&\u008a厉녬剳㩂\0逧\ud979") != (Object)null))
		{
			int goodsId2 = 100530;
			IndependentDetailsViewData data2 = new IndependentDetailsViewData
			{
				goodsId = goodsId2
			};
			ViewManager.GetInstance().ShowView<IndependentDetailsViewLogic>(data2, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public void ActivityAnalytic(string action)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		dictionary.Add("숞끥䶰感村?:匹노剌┤\0逜\ud96e", mIndependentMergeVo.UnlockMaxLevel);
		List<BranchGoodsAnalyticVo> branchGoodsAnalytic = getBranchGoodsAnalytic();
		if (branchGoodsAnalytic != null && branchGoodsAnalytic.Count > 0)
		{
			dictionary.Add("숞끥䶰感村?:匹순끶徼攝硑>\u0082厁숋끎犫爌硫3Î反", branchGoodsAnalytic.ToArray());
		}
		dictionary.Add("숟끥斺渠杆 \u009a厙숏끳疭洐瑙\u001cÚ叙", GetTemporaryCount());
		dictionary.Add("숅끥沭䤆杀3¶厵녴䉥ᴴ\0逝\ud95f", mIndependentMergeVo.TotalDropNum);
		dictionary.Add("숅끥沭䈆杀3¶厵숣끉涼两慀7º厹嬧乵", mIndependentMergeVo.TotalDropLevel1Num);
		dictionary.Add("순끥璼弝村<Ö叕漻䉼", ActivitySwitchConfigID.IndependentMerge);
		dictionary.Add("숂끥断弃村?\u009a厙漻䉼", mIndependentMergeVo.ThemeID);
		dictionary.Add("숚끥徶琛村<\u0082厁냦\u008f赴", mIndependentMergeVo.startDayID);
		if (action == "匧橬ā词靥")
		{
			dictionary.Add("숆끥斺弇杛!\u009a厙刡珟\ud9dcő", "灴i4끥q\uda27䣜");
		}
		AnalyticInit.OnEvent("숄끥新䴅材;\u009a厙숏끈溾攐數;¾厽", dictionary);
	}

	public void DropAnalytic(int goodsLv, string getType)
	{
		if (!getType.IsNullOrEmpty())
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숞끥䲰攟村?6匵꿭\u00af赴", goodsLv);
			dictionary.Add("숞끥䶰感村?:匹노剌┤\0逜\ud96e", mIndependentMergeVo.UnlockMaxLevel);
			List<BranchGoodsAnalyticVo> branchGoodsAnalytic = getBranchGoodsAnalytic();
			if (branchGoodsAnalytic != null && branchGoodsAnalytic.Count > 0)
			{
				dictionary.Add("숞끥䶰感村?:匹순끶徼攝硑>\u0082厁숋끎犫爌硫3Î反", branchGoodsAnalytic.ToArray());
			}
			dictionary.Add("숟끥斺渠杆 \u009a厙숏끳疭洐瑙\u001cÚ叙", GetTemporaryCount());
			dictionary.Add("숅끥沭䤆杀3¶厵녴䉥ᴴ\0逝\ud95f", mIndependentMergeVo.TotalDropNum);
			dictionary.Add("숅끥沭䈆杀3¶厵숣끉涼两慀7º厹嬧乵", mIndependentMergeVo.TotalDropLevel1Num);
			dictionary.Add("순끥璼弝村<Ö叕漻䉼", ActivitySwitchConfigID.IndependentMerge);
			dictionary.Add("숂끥断弃村?\u009a厙漻䉼", mIndependentMergeVo.ThemeID);
			dictionary.Add("숚끥徶琛村<\u0082厁냦\u008f赴", mIndependentMergeVo.startDayID);
			dictionary.Add("숏끥禾瀐杀\u0006ê叩뻹", getType);
			AnalyticInit.OnEvent("숄끥新䴅材;\u009a厙숏끈溾攐數;¾厽숞끝於洟彽&\u009a厙", dictionary);
		}
	}

	public void PlayerActionAnalytic(bool isOpen)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("匣機ā讍饴", isOpen ? "刖棻\ud9c7Ś" : "匧橬ā词靥");
		dictionary.Add("숅끥溭丆束7¾厽嬧乵", mIndependentMergeVo.TotalDropLevel1Num);
		dictionary.Add("숋끥䲴攌杝<6匵꿭\u00af赴", mIndependentMergeVo.UnlockMaxLevel);
		BranchGoodsAnalyticVo subGoodsAnalytic = getSubGoodsAnalytic();
		if (subGoodsAnalytic != null)
		{
			dictionary.Add("수끥掻栙杕<\u0092厑又橥ā讕蹬", subGoodsAnalytic.g_level);
		}
		if (isOpen)
		{
			dictionary.Add("숄끥犼吅杀7Î反냦\u008f赴", mIndependentMergeVo.MergeViewOpenTiems);
		}
		else
		{
			long num = TimeManager.Instance.GetTimeStamp() - mergeViewOpenDateTime;
			dictionary.Add("숞끥咪椟杕+V单挿䙽", (num > 0) ? num : 0);
		}
		AnalyticInit.OnEvent("숄끥新䴅材;\u009a厙숏끈溾攐數;¾厽刔暿\ud9f7ŀ", dictionary);
	}

	public void IllustratedAnalytic(int series, int rewardID)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숅끥沺攆杙\"¶厵匐橥ā讕ꭴ", series);
		dictionary.Add("숅끥斺挆杘>\u009a厙뻨", rewardID);
		AnalyticInit.OnEvent("숄끥新䴅材;\u009a厙숏끈溾攐數;¾厽숆끙掶琇彘7\u0092厑냫\u0087赴", dictionary);
	}

	private List<BranchGoodsAnalyticVo> getBranchGoodsAnalytic()
	{
		List<BranchGoodsAnalyticVo> list = new List<BranchGoodsAnalyticVo>();
		if (mIndependentMergeVo.BranchMaxLevel != null && mIndependentMergeVo.BranchMaxLevel.Count > 0)
		{
			int num = 0;
			IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null)
			{
				num = independentMergeTheme.themeSeriesID;
			}
			foreach (KeyValuePair<int, int> item in mIndependentMergeVo.BranchMaxLevel)
			{
				if (item.Key != num)
				{
					BranchGoodsAnalyticVo branchGoodsAnalyticVo = new BranchGoodsAnalyticVo();
					branchGoodsAnalyticVo.g_series_id = item.Key;
					branchGoodsAnalyticVo.g_level = item.Value;
					list.Add(branchGoodsAnalyticVo);
				}
			}
		}
		return list;
	}

	private BranchGoodsAnalyticVo getSubGoodsAnalytic()
	{
		BranchGoodsAnalyticVo result = null;
		if (mIndependentMergeVo.BranchMaxLevel != null && mIndependentMergeVo.BranchMaxLevel.Count > 0)
		{
			int num = 0;
			IIndependentMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null)
			{
				num = independentMergeTheme.branchSeriesID;
			}
			foreach (KeyValuePair<int, int> item in mIndependentMergeVo.BranchMaxLevel)
			{
				if (item.Key == num)
				{
					result = new BranchGoodsAnalyticVo
					{
						g_series_id = item.Key,
						g_level = item.Value
					};
				}
			}
		}
		return result;
	}

	public void AddOpenMergeViewTimes()
	{
		mergeViewOpenDateTime = TimeManager.Instance.GetTimeStamp();
		mIndependentMergeVo.MergeViewOpenTiems++;
		SaveIndependentMergeData();
	}

	public void BoardFullAnalytic()
	{
		if (mIndependentMergeVo.OpenState)
		{
			mIndependentMergeVo.FullItemTimes++;
			int count = GetTemporaryGoods().Count;
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숟끥徿琠杘>\u0082厁냦\u008f赴", mIndependentMergeVo.FullItemTimes);
			dictionary.Add("숞끥徰渟村?\u0082厁匑橭ā讕驲", count);
			AnalyticInit.OnEvent("숄끥新䴅材;\u009a厙숏끈溾攐數;¾厽숋끘䚶甌彆6\u001e匝恀䝴", dictionary);
		}
	}

	public void DeleteItemAnalytic(int deleteID)
	{
		if (mIndependentMergeVo.OpenState)
		{
			mIndependentMergeVo.DeleteItemTimes++;
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숏끥璽攐杘7Ö叕湟i4끥o君䛬", deleteID);
			dictionary.Add("숏끥璽攐杘7Ö叕医橴ā讵酥", mIndependentMergeVo.DeleteItemTimes);
			AnalyticInit.OnEvent("숄끥新䴅材;\u009a厙숏끈溾攐數;¾厽숆끞於䤇彑&\u009a厙귮\u00af赴", dictionary);
		}
	}

	public void SyncServerDataToLocal()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(mIndependentMergeKey);
		if (serverItem.IsNullOrEmpty())
		{
			mIndependentMergeVo = new IndependentMergeModelVo();
		}
		else
		{
			try
			{
				IndependentMergeModelVo independentMergeModelVo = JsonConvert.DeserializeObject<IndependentMergeModelVo>(serverItem);
				if (independentMergeModelVo != null)
				{
					mIndependentMergeVo = independentMergeModelVo;
				}
			}
			catch (Exception)
			{
			}
		}
		RepairTimeAnomaly();
		ReloadConfig();
		ChangeIndependentSaveData();
		TomorrowResetData();
	}

	public override void SaveDataToDB()
	{
		SaveIndependentMergeData();
	}

	private void ChangeIndependentSaveData()
	{
		SaveData = true;
	}

	private void SaveIndependentMergeData()
	{
		if (mIndependentMergeVo != null)
		{
			string value = JsonConvert.SerializeObject((object)mIndependentMergeVo);
			SaveItem(mIndependentMergeKey, value);
			Singleton<ServerManager>.Instance.SaveServerItem(mIndependentMergeKey, value);
		}
	}

	public void ResetTodayDropDebug(int count)
	{
		mIndependentMergeVo.TodayDropTotal = count;
		mIndependentDropConfig = null;
		ResetIndependentDropConfig();
		ChangeIndependentSaveData();
	}

	public void ResetActivityDebug()
	{
		ICloseActivityRemoveOrderScore();
		mIndependentMergeVo.OpenState = false;
		mIndependentMergeVo.ResetData();
		mIndependentMergeVo.startDayID = 0;
		mIndependentMergeVo.endDayID = 0;
		mIndependentMergeVo.OpenTime = 0L;
		mIndependentMergeVo.CloseTime = 0L;
		ChangeIndependentSaveData();
	}

	public void DebugCloseActivity()
	{
		if (IsInActivity() && mIndependentMergeVo != null)
		{
			mIndependentMergeVo.CloseTime = mIndependentMergeVo.OpenTime - ServerTimeManager.TimeDiff - 10;
			mIndependentMergeVo.endDayID = TimeManager.GetDateIDByTime(mIndependentMergeVo.CloseTime);
			ChangeIndependentSaveData();
		}
	}

	public void DebugClearMap()
	{
		mIndependentMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		ChangeIndependentSaveData();
	}

	public void UnlockCollectionDebug()
	{
		if (mIndependentMergeVo.IllustratedUnlockState == null)
		{
			return;
		}
		foreach (Dictionary<int, int> value in mIndependentMergeVo.IllustratedUnlockState.Values)
		{
			foreach (int item in value.Keys.ToList())
			{
				if (value[item] == 0)
				{
					value[item] = 1;
				}
			}
		}
	}

	public IndependentMergeModelVo GetIndependentMergeVo()
	{
		return mIndependentMergeVo;
	}

	public string GetMainLineItemIconByLevel(int level, int themeID)
	{
		string result = string.Empty;
		if (!HasActivityRes(themeID))
		{
			return result;
		}
		if (mIndependentMergeVo == null)
		{
			return result;
		}
		if (ThemeID != themeID)
		{
			return result;
		}
		IIndependentMergeTheme item = StaticDataBase<StaticDataManager>.GetInstance().IndependentMergeThemes.GetItem(themeID);
		if (item == null)
		{
			return result;
		}
		int themeSeriesID = item.themeSeriesID;
		IIndependentGoodsBaseVo goodsConfigBySeriesAndLevel = GetGoodsConfigBySeriesAndLevel(themeSeriesID, level);
		if (goodsConfigBySeriesAndLevel != null)
		{
			result = goodsConfigBySeriesAndLevel.GetIcon();
		}
		return result;
	}

	public string DebugGetTagInfo()
	{
		StringBuilder stringBuilder = new StringBuilder();
		string value = ObjectManager.GetInstance().abTest2Model.GetGroup("쉘끟㢭ㅙ倁bå古뺭");
		int value2 = mIndependentMergeVo.OpenIap2Tag;
		if (ThemeID == 4)
		{
			value2 = mIndependentMergeVo.OpenIap3Tag;
		}
		stringBuilder.Append("\udf1f縩躝").Append(value).Append("뺖");
		stringBuilder.Append("刯脦ꉂȎ").Append(value2).Append("뺖");
		return stringBuilder.ToString();
	}
}
