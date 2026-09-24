using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using TLF;
using UnityEngine;

public class IndependentStageMergeModel : BaseModel, IOrderActivityScore_ActivityScoreObj, IActivityIconSwtich
{
	private SerializableDataList<IIndependentGoodsBaseVo> mIndependentGoodsBaseList = new SerializableDataList<IIndependentGoodsBaseVo>();

	private SerializableDataList<IIndependentGoodsMergeVo> mIndependentGoodsMergeList = new SerializableDataList<IIndependentGoodsMergeVo>();

	private SerializableDataMap<int, IIndependentGoodsCollectVo> mIndependentGoodsCollectList = new SerializableDataMap<int, IIndependentGoodsCollectVo>("瑧o4끤u휛䳬");

	public SerializableDataMap<int, IIndependentProduceVo> mIndependentGoodsProduceMap = new SerializableDataMap<int, IIndependentProduceVo>("瑧o4끤u휛䳬");

	private SerializableDataList<IIndependentAutoConversionVO> mGoodsAutoConversionList = new SerializableDataList<IIndependentAutoConversionVO>();

	private SerializableDataList<IIndependentDropConfigVo> mIndependentDropConfigVos = new SerializableDataList<IIndependentDropConfigVo>();

	private SerializableDataMap<int, IIndependentStageStageConfigVO> mIndependentStageConfigMap = new SerializableDataMap<int, IIndependentStageStageConfigVO>("北橴ā讝饥");

	private SerializableDataMap<int, IIndependentStageIllustrateRewardVO> mIndependentStageIllustrateRewardMap = new SerializableDataMap<int, IIndependentStageIllustrateRewardVO>("숃끟䦫䐄獑!*匩");

	private SerializableDataMap<int, IStageIndependentOrderDropLevel> mIndependentStageDropLevelMap = new SerializableDataMap<int, IStageIndependentOrderDropLevel>("숏끕澲漐瑚\u0015Â叁勺䳷\ud9ccŰ");

	private readonly string mIndependentMergeKey = "숭끮䦘丮危\r*匩숯끿䖉丰䑺\u0016\u001a匙숯끥䖔弰呦\u0015\u001a匙숥끴䖟夦䥫\u0019\u001a匙";

	private readonly string EnergyCountFieldKey = "숍끎溸搎卑\u001b¾厽숄끊溼琅敐7¾厽";

	private readonly string EnergyCountKey = "숋끕溭攌员\u0017¾厽숹끝溠琺牄7¾厽";

	public IndependentStageMergeModelVo mIndependentStageMergeVo;

	private IIndependentDropConfigVo mIndependentDropConfig;

	public List<BaseData3VO> mSettleRewardList = new List<BaseData3VO>();

	private Dictionary<int, IIndependentGoodsBaseVo> mIndependentGoodsDic = new Dictionary<int, IIndependentGoodsBaseVo>();

	private Dictionary<int, Dictionary<int, IIndependentGoodsBaseVo>> mIndependentGoodsSeriesDic;

	private Dictionary<int, IIndependentGoodsMergeVo> mGoodsMergeVoDic;

	private Dictionary<int, Dictionary<int, IIndependentGoodsMergeVo>> mIndependentMergeIapDic;

	private Dictionary<int, List<IIndependentAutoConversionVO>> mAutoConversionVoDic;

	private int mTargetMaxLevel;

	private Dictionary<int, Dictionary<int, IIndependentStageInitVo>> mStageInitDic;

	private Dictionary<int, Dictionary<int, StageIndependentIllustratedData>> illusratedInfo;

	private List<int> orderDropGoods;

	private Dictionary<int, int> orderDropCost;

	public bool DebugSupportCard
	{
		get
		{
			if (mIndependentStageMergeVo != null)
			{
				return mIndependentStageMergeVo.supportCardReward;
			}
			return false;
		}
		set
		{
			mIndependentStageMergeVo.supportCardReward = value;
		}
	}

	public Dictionary<int, Dictionary<int, StageIndependentIllustratedData>> IllusratedInfo => illusratedInfo;

	public List<int> OrderDropGoods => orderDropGoods;

	public bool IsOpenSoftSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_StageIndependentMerge);

	public bool IsOpenHardSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_StageIndependentMerge);

	public bool OpenState => mIndependentStageMergeVo.OpenState;

	public int ThemeID => mIndependentStageMergeVo.ThemeID;

	public int GiftShopType
	{
		get
		{
			if (mIndependentStageMergeVo.GiftShopType <= 0)
			{
				IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
				if (independentMergeTheme != null)
				{
					mIndependentStageMergeVo.GiftShopType = independentMergeTheme.shopType;
					ChangeIndependentSaveData();
				}
			}
			return mIndependentStageMergeVo.GiftShopType;
		}
	}

	public int GiftDynamicIndex => mIndependentStageMergeVo.GiftDynamicIndex;

	public bool IsPlayKeyAnimtion
	{
		get
		{
			return mIndependentStageMergeVo.isPlayKeyAnimtion;
		}
		set
		{
			mIndependentStageMergeVo.isPlayKeyAnimtion = value;
			SaveIndependentMergeData();
		}
	}

	public bool GetGiftOpenState => GiftState();

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		mIndependentStageMergeVo = new IndependentStageMergeModelVo();
		string item = GetItem(mIndependentMergeKey);
		var (text, list) = FixIndependentTemporary(item);
		if (!string.IsNullOrEmpty(text))
		{
			mIndependentStageMergeVo = JsonConvert.DeserializeObject<IndependentStageMergeModelVo>(text);
			if (list != null && list.Count > 0 && (mIndependentStageMergeVo.IndependentTemporaryInfo == null || mIndependentStageMergeVo.IndependentTemporaryInfo.Count == 0))
			{
				mIndependentStageMergeVo.IndependentTemporaryInfo = list;
				SaveIndependentMergeData();
			}
		}
		InitConfig();
		ReloadConfig();
		CheckActivityRes();
		TomorrowResetData();
		EventManager.GetInstance().AddEventListener(100003, TomorrowResetData);
		EventManager.GetInstance().AddEventListener(100197, ResetIndependentDropConfig);
		EventManager.GetInstance().AddEventListener(100002, TimeUpdate);
		EventManager.GetInstance().AddEventListener(202039, _OnCardCollectionCloseActivity);
		EventManager.GetInstance().AddEventListener(203190, NoticeCheckActivityRes);
		EventManager.GetInstance().AddEventListener<CommonDefaultIconUpdateMsg>(203192, _OnCommonUpdateMsg);
		EventManager.GetInstance().AddEventListener<CommonDefaultIconClickMsg>(203193, _OnCommonClickBtn);
	}

	private (string, List<IndependentTemporaryInfo>) FixIndependentTemporary(string saveStr)
	{
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0020: Expected Obj, but got Unknown
		if (string.IsNullOrEmpty(saveStr))
		{
			return (saveStr, new List<IndependentTemporaryInfo>());
		}
		JObject val = (JObject)JsonConvert.DeserializeObject(saveStr);
		if (val != null && val.Property("숏끔溽搐䥄7¾厽숾끔炭漿救?Æ叅刣疿\ud9daō") != null)
		{
			try
			{
				List<IndependentTemporaryInfo> list = new List<IndependentTemporaryInfo>();
				list = IndependentDefine.TemporaryToMergeInfo(val["숏끔溽搐䥄7¾厽숾끔炭漿救?Æ叅刣疿\ud9daō"].ToObject<List<IndependentGameGoodsVo>>());
				val.Remove("숏끔溽搐䥄7¾厽숾끔炭漿救?Æ叅刣疿\ud9daō");
				return (((object)val).ToString(), list);
			}
			catch (Exception)
			{
				return (saveStr, new List<IndependentTemporaryInfo>());
			}
		}
		return (saveStr, new List<IndependentTemporaryInfo>());
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
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
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
		mIndependentDropConfig = null;
		ResetIndependentDropConfig();
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
		_InitStageConfig();
		_InitIllustrateConfig();
		_InitOrderDropItemConfig();
	}

	private void _InitOrderDropItemConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숏끈犽漐但\u0016Î反녰剌┤\0逜\ud96e" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentStageDropLevelMap = new SerializableDataMap<int, IStageIndependentOrderDropLevel>("숏끕澲漐瑚\u0015Â叁勺䳷\ud9ccŰ");
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentStageDropLevelMap, clean: true);
		}
		if (mIndependentStageDropLevelMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentStageDropLevelMap);
		}
		orderDropGoods = new List<int>();
		foreach (IStageIndependentOrderDropLevel item3 in mIndependentStageDropLevelMap.list)
		{
			if (!orderDropGoods.Contains(item3.tokenGoodsID))
			{
				orderDropGoods.Add(item3.tokenGoodsID);
			}
		}
		orderDropGoods.Sort((int a, int b) => a - b);
		orderDropCost = new Dictionary<int, int>();
		foreach (IStageIndependentOrderDropLevel item4 in mIndependentStageDropLevelMap.list)
		{
			if (!orderDropCost.ContainsKey(item4.tokenGoodsID) && item4.InIapTag(mIndependentStageMergeVo.OpenIapTag))
			{
				orderDropCost.Add(item4.tokenGoodsID, item4.tokenCost);
			}
		}
	}

	private void _InitStageConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡녃幯㔲\0逗\ud975" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentStageConfigMap = new SerializableDataMap<int, IIndependentStageStageConfigVO>("北橴ā讝饥");
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentStageConfigMap, clean: true);
		}
		if (mIndependentStageConfigMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentStageConfigMap);
		}
	}

	private void _InitIllustrateConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숃끔疭猄敘>Ú叙숞끈劸攟瑑6N卍刣疿\ud9dfŐ" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentStageIllustrateRewardMap = new SerializableDataMap<int, IIndependentStageIllustrateRewardVO>("숃끟䦫䐄獑!*匩");
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentStageIllustrateRewardMap, clean: true);
		}
		if (mIndependentStageIllustrateRewardMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentStageIllustrateRewardMap);
		}
		ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string> { text });
		mIndependentStageIllustrateRewardMap.AddReplaceItemByABTestGroup(text, mIndependentStageMergeVo.OpenCardGroup);
		illusratedInfo = new Dictionary<int, Dictionary<int, StageIndependentIllustratedData>>();
		foreach (IIndependentStageIllustrateRewardVO item3 in mIndependentStageIllustrateRewardMap.list)
		{
			if (!illusratedInfo.ContainsKey(item3.seriesID))
			{
				illusratedInfo.Add(item3.seriesID, new Dictionary<int, StageIndependentIllustratedData>());
			}
			if (!illusratedInfo[item3.seriesID].ContainsKey(item3.goodsID))
			{
				illusratedInfo[item3.seriesID].Add(item3.goodsID, new StageIndependentIllustratedData(item3));
			}
		}
	}

	private void _InitGoodsConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕判皿\ud9eaő" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsBaseList = new SerializableDataList<IIndependentGoodsBaseVo>();
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentGoodsBaseList, clean: true);
		}
		if (mIndependentGoodsBaseList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsBaseList);
		}
	}

	private void _InitMergeConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕叉橥ā讝詥" + GetConfigSuffix();
		ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string> { text });
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsMergeList = new SerializableDataList<IIndependentGoodsMergeVo>();
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentGoodsMergeList, clean: true);
		}
		if (mIndependentGoodsMergeList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsMergeList);
		}
		mIndependentGoodsMergeList.AddReplaceItemByABTestGroup(text, mIndependentStageMergeVo.OpenCardGroup);
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
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsCollectList = new SerializableDataMap<int, IIndependentGoodsCollectVo>("瑧o4끤u휛䳬");
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentGoodsCollectList, clean: true);
		}
		if (mIndependentGoodsCollectList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsCollectList);
		}
	}

	private void _InitProduceConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕癐r4끤w\udc31仍" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentGoodsProduceMap = new SerializableDataMap<int, IIndependentProduceVo>("瑧o4끤u휛䳬");
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentGoodsProduceMap, clean: true);
		}
		if (mIndependentGoodsProduceMap.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentGoodsProduceMap);
		}
		ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string> { text });
		mIndependentGoodsProduceMap.AddReplaceItemByABTestGroup(text, mIndependentStageMergeVo.OpenCardGroup);
	}

	private void _InitConversionConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숫끔澭䌬敁&Â叁숏끔榯漐潆!ª厩뻲" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mGoodsAutoConversionList = new SerializableDataList<IIndependentAutoConversionVO>();
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mGoodsAutoConversionList, clean: true);
		}
		if (mGoodsAutoConversionList.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mGoodsAutoConversionList);
		}
	}

	private void _InitInitConfig()
	{
		mStageInitDic = new Dictionary<int, Dictionary<int, IIndependentStageInitVo>>();
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		if (independentMergeTheme == null)
		{
			return;
		}
		for (int i = 0; i < independentMergeTheme.totalStage; i++)
		{
			string text = string.Format("숏끔溽搐䥄7¾厽숣끔璭笤敚;Ö叕넰ٽ⡐\0逭\ud933", GetConfigSuffix(), i + 1);
			(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
			bool item = aBTestIdAndGroupByConfigFilename.Item1;
			string item2 = aBTestIdAndGroupByConfigFilename.Item2;
			string text2 = aBTestIdAndGroupByConfigFilename.Item3;
			SerializableDataMap<int, IIndependentStageInitVo> serializableDataMap = new SerializableDataMap<int, IIndependentStageInitVo>("녧繲㜼\0郴\ud972");
			if (item)
			{
				if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
				{
					text2 = mIndependentStageMergeVo.OpenGroupValue;
				}
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, serializableDataMap, clean: true);
			}
			if (serializableDataMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, serializableDataMap);
			}
			serializableDataMap.AddReplaceItemByABTestGroup(text, mIndependentStageMergeVo.OpenCardGroup);
			mStageInitDic[i + 1] = serializableDataMap.map;
		}
	}

	private void _InitDropConfig()
	{
		string text = "숏끔溽搐䥄7¾厽숮끔炭䌯敆=Æ叅匫橮ā讥鹧" + GetConfigSuffix();
		(bool, string, string) aBTestIdAndGroupByConfigFilename = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(text);
		bool item = aBTestIdAndGroupByConfigFilename.Item1;
		string item2 = aBTestIdAndGroupByConfigFilename.Item2;
		string text2 = aBTestIdAndGroupByConfigFilename.Item3;
		mIndependentDropConfigVos = new SerializableDataList<IIndependentDropConfigVo>();
		if (item)
		{
			if (mIndependentStageMergeVo.OpenGroupValue.IsNotNullAndEmpty())
			{
				text2 = mIndependentStageMergeVo.OpenGroupValue;
			}
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text + "뻃" + item2 + "뻃" + text2, mIndependentDropConfigVos, clean: true);
		}
		if (mIndependentDropConfigVos.list.Count == 0)
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(text, mIndependentDropConfigVos);
		}
	}

	public Dictionary<int, IIndependentStageInitVo> GetStageInitDicByID(int stageID)
	{
		if (mStageInitDic == null)
		{
			return null;
		}
		if (mStageInitDic.TryGetValue(stageID, out var value))
		{
			return value;
		}
		return null;
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

	public List<IIndependentGoodsBaseVo> GetGoodsListBySeriesIDAndStage(int seriesID)
	{
		if (mIndependentGoodsSeriesDic.TryGetValue(seriesID, out var value))
		{
			List<IIndependentGoodsBaseVo> list = value.Values.ToList();
			list.Sort((IIndependentGoodsBaseVo vo1, IIndependentGoodsBaseVo vo2) => vo1.level.CompareTo(vo2.level));
			IIndependentGoodsBaseVo targetGoods = GetGoodsConfigById(GetStageConfig().targetGoodsID);
			if (targetGoods == null)
			{
				return list;
			}
			return list.FindAll((IIndependentGoodsBaseVo vo) => vo.level <= targetGoods.level);
		}
		return null;
	}

	public bool IsMaxStage()
	{
		if (mIndependentStageMergeVo == null || mIndependentStageMergeVo.stage <= 0)
		{
			return false;
		}
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		if (independentMergeTheme == null)
		{
			return false;
		}
		return mIndependentStageMergeVo.stage >= independentMergeTheme.totalStage;
	}

	public IIndependentGoodsMergeVo GetGoodsMergeVoById(int id)
	{
		if (mIndependentMergeIapDic == null)
		{
			return null;
		}
		if (mIndependentMergeIapDic.TryGetValue(mIndependentStageMergeVo.OpenIapTag, out var value) && value.TryGetValue(id, out var value2))
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
		case 10:
			indGoodsBase = new IndGoodsTransferGate(independentGameGoodsVo, grid);
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
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		string result = "";
		if (independentMergeTheme != null)
		{
			result = independentMergeTheme.suffix;
		}
		return result;
	}

	public void ResetIndependentDropConfig()
	{
		int openIapTag = mIndependentStageMergeVo.OpenIapTag;
		if (mIndependentDropConfig != null && mIndependentDropConfig.InIapTag3(openIapTag))
		{
			return;
		}
		mIndependentDropConfig = null;
		List<IIndependentDropConfigVo> list = mIndependentDropConfigVos.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].InIapTag3(openIapTag))
			{
				mIndependentDropConfig = list[i];
				break;
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
		if (mIndependentStageMergeVo.GoodsProduceDic.TryGetValue(gameGoodsVo.goodsID, out var value))
		{
			if (value.Count <= 0)
			{
				mIndependentStageMergeVo.GoodsProduceDic[gameGoodsVo.goodsID] = GenerateProduceList(gameGoodsVo.goodsID);
			}
		}
		else
		{
			mIndependentStageMergeVo.GoodsProduceDic[gameGoodsVo.goodsID] = GenerateProduceList(gameGoodsVo.goodsID);
		}
		if (mIndependentStageMergeVo.GoodsProduceDic.TryGetValue(gameGoodsVo.goodsID, out var value2) && value2.Count > 0)
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
		if (IsInActivity() && mIndependentStageMergeVo != null && mIndependentStageMergeVo.supportCardReward)
		{
			mIndependentStageMergeVo.supportCardReward = false;
			SaveIndependentMergeData();
		}
	}

	public void NoticeCheckActivityRes()
	{
		if (CheckActivityRes())
		{
			MonoSingleton<CommonDefaultIconManager>.Instance.IsIconUpdate = true;
		}
	}

	public bool IsInActivityWithoutRes()
	{
		if (mIndependentStageMergeVo == null || mIndependentStageMergeVo.OpenState)
		{
			return !HasActivityBaseResByThemeID();
		}
		return false;
	}

	private void _OnCommonClickBtn(CommonDefaultIconClickMsg msg)
	{
		if (msg.activityID != ActivitySwitchConfigID.StageIndependentMerge && msg.activityID != ActivitySwitchConfigID.StageIndependentMergeGift)
		{
			return;
		}
		if (!HasActivityBaseResByThemeID())
		{
			ViewManager.GetInstance().ShowTip("숅끟措攆牁 \u0092厑숃끍澸爄彀4Â叁划撇\ud9c4Ő");
			return;
		}
		bool isResCanUse = CheckActivityRes();
		msg.isResCanUse = isResCanUse;
		if (msg.activityID == ActivitySwitchConfigID.StageIndependentMerge)
		{
			OpenIndependentMergeView();
		}
		else if (msg.activityID == ActivitySwitchConfigID.StageIndependentMergeGift)
		{
			OpenActivityGiftView();
		}
	}

	private void _OnCommonUpdateMsg(CommonDefaultIconUpdateMsg msg)
	{
		if (msg.activityID == ActivitySwitchConfigID.StageIndependentMerge)
		{
			msg.timeStamp = GetActivityTimedown();
		}
		else if (msg.activityID == ActivitySwitchConfigID.StageIndependentMergeGift)
		{
			msg.timeStamp = GetGiftTimedown();
		}
	}

	private bool CheckActivityRes()
	{
		if (mIndependentStageMergeVo == null)
		{
			return false;
		}
		if (!mIndependentStageMergeVo.OpenState)
		{
			return false;
		}
		if (HasActivityBaseResByThemeID())
		{
			if (!mIndependentStageMergeVo.isResComplete)
			{
				mIndependentStageMergeVo.isResComplete = true;
				ChangeIndependentSaveData();
				return true;
			}
		}
		else
		{
			mIndependentStageMergeVo.isResComplete = false;
		}
		ChangeIndependentSaveData();
		return false;
	}

	public bool OpenIndependentMerge()
	{
		if (mIndependentStageMergeVo == null)
		{
			mIndependentStageMergeVo = new IndependentStageMergeModelVo();
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
		if (mIndependentStageMergeVo.OpenState)
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
		if (!MonoSingleton<ActivityMutexManager>.Instance.IsLegalActivityMutex(ActivityMutexID.AMID_StageIndependent))
		{
			return false;
		}
		IIndependentStageMergeTheme openTheme = GetOpenTheme();
		if (openTheme == null)
		{
			return false;
		}
		if (!HasActivityRes(openTheme.themeID))
		{
			return false;
		}
		if ((long)ServerTimeManager.TodayDateServerNumberV3 > (long)mIndependentStageMergeVo.endDayID)
		{
			return true;
		}
		return false;
	}

	private IIndependentStageMergeTheme GetOpenTheme()
	{
		IIndependentStageMergeTheme result = null;
		int num = -1;
		int num2 = -1;
		int num3 = -1;
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.StageIndependentMerge);
		if (activityConfigConstantData != null)
		{
			num = activityConfigConstantData.startDayID;
			num2 = activityConfigConstantData.endDayID;
			num3 = activityConfigConstantData.themeID;
		}
		if (num > 0 && num2 > 0 && num3 > 0)
		{
			result = StaticDataBase<StaticDataManager>.GetInstance().StageIndependentMergeThemes.GetItem(num3);
		}
		return result;
	}

	private void OpenIndependentMergeActivity()
	{
		IIndependentStageMergeTheme openTheme = GetOpenTheme();
		if (openTheme == null)
		{
			return;
		}
		int todayDateServerNumberV = ServerTimeManager.TodayDateServerNumberV3;
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.StageIndependentMerge);
		try
		{
			mIndependentStageMergeVo.ResetData();
			ResetShopData(openTheme.shopType);
			mIndependentStageMergeVo.ThemeID = openTheme.themeID;
			mIndependentStageMergeVo.OpenState = true;
			mIndependentStageMergeVo.startDayID = activityConfigConstantData.startDayID;
			mIndependentStageMergeVo.endDayID = activityConfigConstantData.endDayID;
			mIndependentStageMergeVo.OpenTime = activityConfigConstantData.startTimeStamp;
			mIndependentStageMergeVo.CloseTime = activityConfigConstantData.endTimeStamp;
			mIndependentStageMergeVo.LastResetDayID = todayDateServerNumberV;
			mIndependentStageMergeVo.OpenIapTag = ObjectManager.GetInstance().userTagModel.GetUserIap3Tag();
			mIndependentStageMergeVo.supportCardReward = ObjectManager.GetInstance().cardCollectionV2Model.IsInActivity() || ObjectManager.GetInstance().cardCollectionV3Model.IsInActivity();
			mIndependentStageMergeVo.GiftShopType = openTheme.shopType;
			mIndependentStageMergeVo.OpenGroupValue = GetOldTestGroup();
			mIndependentStageMergeVo.participateTime++;
			mIndependentStageMergeVo.OpenCardGroup = ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string>
			{
				"숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕叉橥ā讝詥" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숭끔播献敛=\u0096厕癐r4끤w\udc31仍" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽숃끔疭猄敘>Ú叙숞끈劸攟瑑6N卍刣疿\ud9dfŐ" + GetConfigSuffix(),
				"숏끔溽搐䥄7¾厽潥n4끉p䐻䟜" + GetConfigSuffix() + "焍㡉",
				"숏끔溽搐䥄7¾厽潥n4끉p䐻䟜" + GetConfigSuffix() + "焍㡊",
				"숏끔溽搐䥄7¾厽潥n4끉p䐻䟜" + GetConfigSuffix() + "焍㡋",
				"숏끔溽搐䥄7¾厽潥n4끉p䐻䟜" + GetConfigSuffix() + "焍㡌"
			});
			List<IShopDynamicGift> dynamicGiftsByShopType = MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftsByShopType((ShopType)mIndependentStageMergeVo.GiftShopType, 3, -1, EUserIapTagType.e_iapTag3);
			if (dynamicGiftsByShopType.Count > 0)
			{
				mIndependentStageMergeVo.GiftDynamicIndex = dynamicGiftsByShopType[0].dynamicGiftIndex;
			}
			else
			{
				mIndependentStageMergeVo.GiftDynamicIndex = -1;
			}
			ObjectManager.GetInstance().commonFieldStorageModel.SetStorageField(EnergyCountFieldKey, EnergyCountKey, "뺬");
			ReloadConfig();
			InitialIndependentMap();
			SaveIndependentMergeData();
			if (GetTokenDropType() == 1)
			{
				IOpenActivityAddOrderScore();
			}
			ActivityAnalytic("刖棻\ud9c7Ś");
			EventManager.GetInstance().DispatchEvent(203054);
		}
		catch (Exception)
		{
		}
	}

	private string GetOldTestGroup()
	{
		string result = string.Empty;
		string text = ObjectManager.GetInstance().abTest2Model.GetGroup("숩끕炾椪䑕?Æ叅쉟끝ル㝠渄eÅ叄");
		string text2 = ObjectManager.GetInstance().abTest2Model.GetGroup("숩끕炾椪䑕?Æ叅쉟끝㋫ㅠ渄jÍ双");
		if (text.IsNotNullAndEmpty())
		{
			result = text;
		}
		if (text2.IsNotNullAndEmpty())
		{
			result = text2;
		}
		return result;
	}

	private void InitialIndependentMap()
	{
		mIndependentStageMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		Dictionary<int, IIndependentStageInitVo> stageInitDicByID = GetStageInitDicByID(mIndependentStageMergeVo.stage);
		if (stageInitDicByID == null)
		{
			return;
		}
		IndependentGameGoodsVo independentGameGoodsVo = null;
		foreach (KeyValuePair<int, IIndependentStageInitVo> item in stageInitDicByID)
		{
			independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = item.Value.goodsID;
			independentGameGoodsVo.GoodsState = GetIndependentGoodsState(item.Value.status);
			mIndependentStageMergeVo.IndependentMap[item.Value.gridID] = independentGameGoodsVo;
		}
		InitIllustrateInfo();
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		if (independentMergeTheme == null)
		{
			return;
		}
		string[] array = independentMergeTheme.initialData.Split(';');
		for (int i = 0; i < array.Length; i++)
		{
			string[] array2 = array[i].Split('|');
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
				if (mIndependentStageMergeVo.IndependentTemporary == null)
				{
					mIndependentStageMergeVo.IndependentTemporary = new List<IndependentGameGoodsVo>();
				}
				if (mIndependentStageMergeVo.IndependentTopTemporary == null)
				{
					mIndependentStageMergeVo.IndependentTopTemporary = new List<IndependentGameGoodsVo>();
				}
				if (mIndependentStageMergeVo.IndependentTemporaryInfo == null)
				{
					mIndependentStageMergeVo.IndependentTemporaryInfo = new List<IndependentTemporaryInfo>();
				}
				AddIndependentGoods(num2, num3, "숄끌璼愅敀\u0001Ö叕娢䶌", null, isTotalDrop: false, isTop: true);
				break;
			}
		}
	}

	public bool CanCloseIndependentMerge()
	{
		if (mIndependentStageMergeVo == null)
		{
			return false;
		}
		if (!mIndependentStageMergeVo.OpenState)
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
		if (mIndependentStageMergeVo.endDayID > 0 && todayDateServerNumberV > mIndependentStageMergeVo.endDayID)
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
		if (mIndependentStageMergeVo.OpenState)
		{
			IndependentSettleup();
			ActivityAnalytic("匧橬ā词靥");
			if (GetTokenDropType() == 1)
			{
				ICloseActivityRemoveOrderScore();
			}
			mIndependentStageMergeVo.OpenState = false;
			mIndependentStageMergeVo.ResetData();
			SaveIndependentMergeData();
			EventManager.GetInstance().DispatchEvent(203054);
			EventManager.GetInstance().DispatchEvent(203060);
			EventManager.GetInstance().DispatchEvent(203095, SevenDayTaskType.MergeStageIndieLevel);
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
		foreach (KeyValuePair<int, IndependentGameGoodsVo> item in mIndependentStageMergeVo.IndependentMap)
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
		for (int k = 0; k < mIndependentStageMergeVo.IndependentTemporaryInfo.Count; k++)
		{
			independentGoodsBaseVo = GetGoodsConfigById(mIndependentStageMergeVo.IndependentTemporaryInfo[k].GetGameGoodsVo().goodsID);
			if (independentGoodsBaseVo == null || (independentGoodsBaseVo.type != 2 && independentGoodsBaseVo.type != 3))
			{
				continue;
			}
			independentGoodsCollectVo = mIndependentGoodsCollectList.GetItem(independentGoodsBaseVo.goodsID);
			if (independentGoodsCollectVo == null)
			{
				continue;
			}
			if (independentGoodsCollectVo.itemType == 1)
			{
				if (dictionary.ContainsKey(independentGoodsCollectVo.itemId))
				{
					dictionary[independentGoodsCollectVo.itemId] += independentGoodsCollectVo.amount * mIndependentStageMergeVo.IndependentTemporaryInfo[k].count;
				}
				else
				{
					dictionary.Add(independentGoodsCollectVo.itemId, independentGoodsCollectVo.amount * mIndependentStageMergeVo.IndependentTemporaryInfo[k].count);
				}
			}
			else if (independentGoodsCollectVo.itemType == 2)
			{
				for (int l = 0; l < independentGoodsCollectVo.amount * mIndependentStageMergeVo.IndependentTemporaryInfo[k].count; l++)
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
				bool isCCActive2 = SupportCardReward();
				List<BaseData3VO> baseData3VOListConvert2 = BaseData3VO.GetBaseData3VOListConvert(independentGoodsCollectVo.GetBaseData3String(), isCCActive2);
				for (int m = 0; m < baseData3VOListConvert2.Count; m++)
				{
					if (baseData3VOListConvert2[m] == null)
					{
						continue;
					}
					if (baseData3VOListConvert2[m].type == 1)
					{
						if (dictionary.ContainsKey(baseData3VOListConvert2[m].id))
						{
							dictionary[baseData3VOListConvert2[m].id] += baseData3VOListConvert2[m].num;
						}
						else
						{
							dictionary.Add(baseData3VOListConvert2[m].id, baseData3VOListConvert2[m].num);
						}
					}
					else
					{
						mSettleRewardList.Add(baseData3VOListConvert2[m]);
					}
				}
			}
		}
		foreach (KeyValuePair<int, int> item2 in dictionary)
		{
			mSettleRewardList.Add(new BaseData3VO
			{
				type = 1,
				id = item2.Key,
				num = item2.Value
			});
		}
		for (int n = 0; n < list.Count; n++)
		{
			mSettleRewardList.Add(new BaseData3VO
			{
				type = 2,
				id = list[n],
				num = 1
			});
		}
		_ = GameConst.GAME_MODE;
		ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(mSettleRewardList, notice: true, 136);
	}

	public bool HasActivityRes(int themeID)
	{
		return MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.independentStageMerge);
	}

	public bool HasActivityBaseResByThemeID()
	{
		return HasActivityRes(mIndependentStageMergeVo.ThemeID);
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
		if (mIndependentStageMergeVo == null)
		{
			return false;
		}
		return mIndependentStageMergeVo.supportCardReward;
	}

	public bool IsInActivity()
	{
		if (mIndependentStageMergeVo == null || !mIndependentStageMergeVo.OpenState)
		{
			return false;
		}
		return true;
	}

	public void JudgeHardCloseActivity()
	{
		if (IsInActivity() && !IsOpenHardSwitch && mIndependentStageMergeVo != null)
		{
			try
			{
				mIndependentStageMergeVo.CloseTime = mIndependentStageMergeVo.OpenTime - ServerTimeManager.TimeDiff - 10;
				mIndependentStageMergeVo.endDayID = TimeManager.GetDateIDByTime(mIndependentStageMergeVo.CloseTime);
				SaveIndependentMergeData();
			}
			catch (Exception)
			{
			}
		}
	}

	public int GetActivityTimedown()
	{
		if (!mIndependentStageMergeVo.OpenState)
		{
			return 0;
		}
		long num = ServerTimeManager.CurrentServerTime3();
		int num2 = (int)(mIndependentStageMergeVo.CloseTime - num);
		if (num2 < 0)
		{
			num2 = 0;
		}
		return num2;
	}

	public IIndependentStageMergeTheme GetIndependentMergeTheme()
	{
		return StaticDataBase<StaticDataManager>.GetInstance().StageIndependentMergeThemes.GetItem(ThemeID);
	}

	public IIndependentStageStageConfigVO GetStageConfig(int stageID = -1)
	{
		if (stageID <= 0)
		{
			stageID = mIndependentStageMergeVo.stage;
		}
		return mIndependentStageConfigMap.GetItem(stageID);
	}

	public int GetCurrentTargetID()
	{
		return mIndependentStageConfigMap.GetItem(mIndependentStageMergeVo.stage)?.targetGoodsID ?? 0;
	}

	public int GetCurrentTargetLevel()
	{
		if (IsMaxStage())
		{
			return GetTargetMaxLevel();
		}
		IIndependentStageStageConfigVO item = mIndependentStageConfigMap.GetItem(mIndependentStageMergeVo.stage);
		if (item != null)
		{
			IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(item.targetGoodsID);
			if (goodsConfigById != null)
			{
				return goodsConfigById.level;
			}
		}
		return 0;
	}

	public bool IsShowKeyBubble(int goodsID)
	{
		if (IsMaxStage())
		{
			return false;
		}
		if (goodsID != GetCurrentTargetID())
		{
			return false;
		}
		if (!GetUnlockStateByGoodsID(goodsID))
		{
			return true;
		}
		if (!IsPlayKeyAnimtion)
		{
			return true;
		}
		return false;
	}

	public void CheckOpenGift()
	{
		if (!mIndependentStageMergeVo.OpenState || mIndependentStageMergeVo.GiftOpenState || mIndependentStageMergeVo.GiftShopType <= 0 || MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByTypeAndIndex((ShopType)mIndependentStageMergeVo.GiftShopType, mIndependentStageMergeVo.GiftDynamicIndex) == null)
		{
			return;
		}
		int num = -1;
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.StageIndependentMergeGift);
		if (activityConfigConstantData == null)
		{
			return;
		}
		_ = activityConfigConstantData.startDayID;
		_ = activityConfigConstantData.endDayID;
		num = activityConfigConstantData.themeID;
		if (num != ThemeID)
		{
			return;
		}
		try
		{
			if (mIndependentStageMergeVo.GiftCloseTime <= activityConfigConstantData.startTimeStamp)
			{
				ResetShopData(mIndependentStageMergeVo.GiftShopType);
				mIndependentStageMergeVo.GiftOpenState = true;
				mIndependentStageMergeVo.GiftOpenTime = activityConfigConstantData.startTimeStamp;
				mIndependentStageMergeVo.GiftCloseTime = activityConfigConstantData.endTimeStamp;
				mIndependentStageMergeVo.LastPopGiftTime = ServerTimeManager.CurrentServerTime3();
				SaveIndependentMergeData();
				OpenActivityGiftView(0.5f, autoAlert: true);
				EventManager.GetInstance().DispatchEvent(203060);
			}
		}
		catch (Exception)
		{
		}
	}

	public void CheckPopGiftView()
	{
		if (mIndependentStageMergeVo.OpenState && mIndependentStageMergeVo.GiftOpenState)
		{
			IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null && ServerTimeManager.CurrentServerTime3() - mIndependentStageMergeVo.LastPopGiftTime >= independentMergeTheme.giftCd)
			{
				mIndependentStageMergeVo.LastPopGiftTime = ServerTimeManager.CurrentServerTime3();
				SaveIndependentMergeData();
				OpenActivityGiftView(0.5f, autoAlert: true);
			}
		}
	}

	public void CheckCloseGift()
	{
		if (mIndependentStageMergeVo.GiftOpenState && Singleton<ServerManager>.Instance.ServerTime > 0 && ServerTimeManager.CurrentServerTime3() > mIndependentStageMergeVo.GiftCloseTime)
		{
			mIndependentStageMergeVo.GiftOpenState = false;
			mIndependentStageMergeVo.LastPopGiftTime = 0L;
			SaveIndependentMergeData();
			EventManager.GetInstance().DispatchEvent(203060);
		}
	}

	private bool GiftState()
	{
		return mIndependentStageMergeVo.GiftOpenState;
	}

	public int GetGiftTimedown()
	{
		if (!mIndependentStageMergeVo.OpenState)
		{
			return 0;
		}
		if (!mIndependentStageMergeVo.GiftOpenState)
		{
			return 0;
		}
		long num = ServerTimeManager.CurrentServerTime3();
		int num2 = (int)(mIndependentStageMergeVo.GiftCloseTime - num);
		if (num2 < 0)
		{
			num2 = 0;
		}
		return num2;
	}

	public void VerifyOrderCallback(ShopVO shopVO)
	{
		if (shopVO != null && mIndependentStageMergeVo != null && mIndependentStageMergeVo.GiftShopType > 0 && shopVO.type == mIndependentStageMergeVo.GiftShopType && MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByCanBuy((ShopType)mIndependentStageMergeVo.GiftShopType, mIndependentStageMergeVo.GiftDynamicIndex) == null)
		{
			mIndependentStageMergeVo.GiftOpenState = false;
			mIndependentStageMergeVo.LastPopGiftTime = 0L;
			SaveIndependentMergeData();
			EventManager.GetInstance().DispatchEvent(203060);
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
		return mIndependentStageMergeVo.IndependentMap;
	}

	public void ChangeIndependentMap(int gridId, IndependentGameGoodsVo goodsVo)
	{
		if (mIndependentStageMergeVo == null)
		{
			mIndependentStageMergeVo = new IndependentStageMergeModelVo();
		}
		if (mIndependentStageMergeVo.IndependentMap == null)
		{
			mIndependentStageMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		}
		mIndependentStageMergeVo.IndependentMap[gridId] = goodsVo;
		ChangeIndependentSaveData();
	}

	public void UnlockNewGoods(int goodsID)
	{
		if (mIndependentStageMergeVo.UnlockGoodsList == null)
		{
			mIndependentStageMergeVo.UnlockGoodsList = new List<int>();
		}
		if (!mIndependentStageMergeVo.UnlockGoodsList.Contains(goodsID))
		{
			mIndependentStageMergeVo.UnlockGoodsList.Add(goodsID);
			IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsID);
			IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (goodsConfigById != null && independentMergeTheme != null)
			{
				List<IIndependentGoodsBaseVo> goodsListBySeriesID = GetGoodsListBySeriesID(goodsConfigById.series);
				if (goodsListBySeriesID != null && goodsListBySeriesID.Count > 0)
				{
					for (int i = 0; i < goodsListBySeriesID.Count; i++)
					{
						if (goodsListBySeriesID[i].level < goodsConfigById.level && !mIndependentStageMergeVo.UnlockGoodsList.Contains(goodsListBySeriesID[i].goodsID))
						{
							mIndependentStageMergeVo.UnlockGoodsList.Add(goodsListBySeriesID[i].goodsID);
						}
					}
				}
				if (goodsConfigById.series == independentMergeTheme.themeSeriesID && goodsConfigById.level > mIndependentStageMergeVo.UnlockMaxLevel)
				{
					mIndependentStageMergeVo.UnlockMaxLevel = goodsConfigById.level;
					EventManager.GetInstance().DispatchEvent(202016, goodsConfigById.goodsID);
					MergeAnalytic(mIndependentStageMergeVo.UnlockMaxLevel, mIndependentStageMergeVo.UnlockBranchMaxLevel);
					ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.MergeStageIndieLevel, goodsConfigById.level);
				}
				if (goodsConfigById.series == independentMergeTheme.branchSeriesID && goodsConfigById.level > mIndependentStageMergeVo.UnlockBranchMaxLevel)
				{
					mIndependentStageMergeVo.UnlockBranchMaxLevel = goodsConfigById.level;
					EventManager.GetInstance().DispatchEvent(202016, goodsConfigById.goodsID);
					MergeAnalytic(mIndependentStageMergeVo.UnlockMaxLevel, mIndependentStageMergeVo.UnlockBranchMaxLevel);
				}
				if (mIndependentStageMergeVo.BranchMaxLevel == null)
				{
					mIndependentStageMergeVo.BranchMaxLevel = new Dictionary<int, int>();
				}
				if (goodsConfigById.series > 0)
				{
					if (mIndependentStageMergeVo.BranchMaxLevel.ContainsKey(goodsConfigById.series))
					{
						if (mIndependentStageMergeVo.BranchMaxLevel[goodsConfigById.series] < goodsConfigById.level)
						{
							mIndependentStageMergeVo.BranchMaxLevel[goodsConfigById.series] = goodsConfigById.level;
						}
					}
					else
					{
						mIndependentStageMergeVo.BranchMaxLevel[goodsConfigById.series] = goodsConfigById.level;
					}
					if (mIndependentStageMergeVo.IllustratedUnlockState.ContainsKey(goodsConfigById.series))
					{
						mIndependentStageMergeVo.IllustratedUnlockState[goodsConfigById.series][goodsConfigById.goodsID] = 1;
						EventManager.GetInstance().DispatchEvent(203059);
					}
				}
			}
		}
		else
		{
			IIndependentGoodsBaseVo goodsConfigById2 = GetGoodsConfigById(goodsID);
			if (mIndependentStageMergeVo.IllustratedUnlockState.ContainsKey(goodsConfigById2.series) && mIndependentStageMergeVo.IllustratedUnlockState[goodsConfigById2.series][goodsConfigById2.goodsID] == 0)
			{
				mIndependentStageMergeVo.IllustratedUnlockState[goodsConfigById2.series][goodsConfigById2.goodsID] = 1;
				EventManager.GetInstance().DispatchEvent(203059);
			}
		}
		ChangeIndependentSaveData();
	}

	public int GetUnlockMaxLevel()
	{
		return mIndependentStageMergeVo.UnlockMaxLevel;
	}

	public int GetTargetMaxLevel()
	{
		return mTargetMaxLevel;
	}

	public bool GetUnlockStateByGoodsID(int goodsID)
	{
		if (mIndependentStageMergeVo.UnlockGoodsList == null)
		{
			return false;
		}
		if (mIndependentStageMergeVo.UnlockGoodsList.Contains(goodsID))
		{
			return true;
		}
		return false;
	}

	public bool IsCompleteCurrentStage()
	{
		IIndependentStageStageConfigVO stageConfig = GetStageConfig();
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		if (stageConfig != null && independentMergeTheme != null)
		{
			if (stageConfig.stage == independentMergeTheme.totalStage)
			{
				return false;
			}
			if (GetUnlockStateByGoodsID(stageConfig.targetGoodsID))
			{
				return true;
			}
		}
		return false;
	}

	public void UseTransferGate()
	{
		if (IsCompleteCurrentStage())
		{
			IndependentAlertData data = new IndependentAlertData
			{
				title = LocalizedLang.GetUIValueByKey("숩끕炾椪䑕?Æ叅숩끝溆未湜3¾厽숋끩徭同敓7\u0082厁初濫\ud9c1ő"),
				content = LocalizedLang.GetUIValueByKey("숩끕炾椪䑕?Æ叅숩끝溆未湜3¾厽숋끩徭䐌敓7\u0082厁볨÷赴"),
				SureBtnStr = LocalizedLang.GetUIValueByKey("숩끕炾椪䑕?Æ叅숩끝溆未湜3¾厽숋끩徭䈌敓7\u0082厁匑橴ā讽豮"),
				SureCallback = EnterNextStage
			};
			ViewManager.GetInstance().ShowView<IndependentAlertViewLogic>(data, ViewManager.ViewLayer.MESSAGE, animate: true);
		}
	}

	private void EnterNextStage()
	{
		IIndependentStageStageConfigVO stageConfig = GetStageConfig();
		IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
		if (stageConfig == null || independentMergeTheme == null || stageConfig.stage == independentMergeTheme.totalStage)
		{
			return;
		}
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		foreach (KeyValuePair<int, IndependentGameGoodsVo> item in mIndependentStageMergeVo.IndependentMap)
		{
			if (item.Value != null)
			{
				independentGoodsBaseVo = GetGoodsConfigById(item.Value.goodsID);
				if (independentGoodsBaseVo != null && independentGoodsBaseVo.type != 10)
				{
					AddIndependentTemprotyGoods(item.Value, 1, isTotalDrop: false);
				}
			}
		}
		mIndependentStageMergeVo.stage++;
		mIndependentStageMergeVo.isPlayKeyAnimtion = false;
		mIndependentStageMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		Dictionary<int, IIndependentStageInitVo> stageInitDicByID = GetStageInitDicByID(mIndependentStageMergeVo.stage);
		if (stageInitDicByID == null)
		{
			return;
		}
		IndependentGameGoodsVo independentGameGoodsVo = null;
		foreach (KeyValuePair<int, IIndependentStageInitVo> item2 in stageInitDicByID)
		{
			independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = item2.Value.goodsID;
			independentGameGoodsVo.GoodsState = GetIndependentGoodsState(item2.Value.status);
			mIndependentStageMergeVo.IndependentMap[item2.Value.gridID] = independentGameGoodsVo;
		}
		SaveIndependentMergeData();
		EventManager.GetInstance().DispatchEvent(203056);
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

	public StageIndependentIllustratedData GetIllustratedData(int goodsID)
	{
		StageIndependentIllustratedData result = null;
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
		if (mIndependentStageMergeVo.IllustratedUnlockState.ContainsKey(seriesID))
		{
			foreach (KeyValuePair<int, int> item in mIndependentStageMergeVo.IllustratedUnlockState[seriesID])
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

	public List<BaseData3VO> GetIllustrateBigRewardList()
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		list.AddRange(mIndependentStageIllustrateRewardMap.list[0].GetFinalReward());
		return list;
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

	public int GetCompleteIllsustratedCount()
	{
		int num = 0;
		InitIllustrateInfo();
		foreach (KeyValuePair<int, Dictionary<int, int>> item in mIndependentStageMergeVo.IllustratedUnlockState)
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

	public int GetUnlockIllsustratedCount()
	{
		int num = 0;
		InitIllustrateInfo();
		foreach (KeyValuePair<int, Dictionary<int, int>> item in mIndependentStageMergeVo.IllustratedUnlockState)
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

	public bool IsIllustratedWaitingReward()
	{
		bool result = false;
		foreach (KeyValuePair<int, Dictionary<int, int>> item in mIndependentStageMergeVo.IllustratedUnlockState)
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

	public void RefreshIllustratedUnlockState(int seriesID, int goodsID, int state)
	{
		if (mIndependentStageMergeVo.IllustratedUnlockState == null)
		{
			mIndependentStageMergeVo.IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();
			InitIllustrateInfo();
		}
		mIndependentStageMergeVo.IllustratedUnlockState[seriesID][goodsID] = state;
		ChangeIndependentSaveData();
	}

	public int GetGoodsUnlockState(IIndependentGoodsBaseVo goodsBaseVo)
	{
		if (mIndependentStageMergeVo.IllustratedUnlockState.ContainsKey(goodsBaseVo.series))
		{
			if (mIndependentStageMergeVo.IllustratedUnlockState[goodsBaseVo.series].ContainsKey(goodsBaseVo.goodsID))
			{
				return mIndependentStageMergeVo.IllustratedUnlockState[goodsBaseVo.series][goodsBaseVo.goodsID];
			}
			return -1;
		}
		return -1;
	}

	public bool GetGoodsIsShowInfoRedPoint(int goodsBaseVo)
	{
		return !mIndependentStageMergeVo.ShowedInfoList.Contains(goodsBaseVo);
	}

	public void ShowGoodsInfo(int goodsID)
	{
		if (!mIndependentStageMergeVo.ShowedInfoList.Contains(goodsID))
		{
			mIndependentStageMergeVo.ShowedInfoList.Add(goodsID);
			SaveIndependentMergeData();
		}
	}

	public bool GetRewardCliamed(int seriesID)
	{
		if (mIndependentStageMergeVo.IllustratedUnlockState == null || mIndependentStageMergeVo.IllustratedUnlockState.Count <= 0)
		{
			return false;
		}
		int num = 0;
		foreach (KeyValuePair<int, int> item in mIndependentStageMergeVo.IllustratedUnlockState[seriesID])
		{
			if (item.Value == 2)
			{
				num++;
			}
		}
		return num == illusratedInfo[seriesID].Count;
	}

	private void InitIllustrateInfo()
	{
		if (mIndependentStageMergeVo.IllustratedUnlockState == null)
		{
			mIndependentStageMergeVo.IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();
		}
		if (mIndependentStageMergeVo.IllustratedUnlockState.Count > 0)
		{
			return;
		}
		foreach (int key in illusratedInfo.Keys)
		{
			if (mIndependentStageMergeVo.IllustratedUnlockState.ContainsKey(key))
			{
				continue;
			}
			mIndependentStageMergeVo.IllustratedUnlockState[key] = new Dictionary<int, int>();
			foreach (int key2 in illusratedInfo[key].Keys)
			{
				mIndependentStageMergeVo.IllustratedUnlockState[key][key2] = 0;
			}
		}
	}

	public void OpenStartView()
	{
		string viewName = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡수끎溸搙區\u0017¾厽刖梟\ud9feŃ" + GetConfigSuffix();
		IndependentStageStartEndViewData data = new IndependentStageStartEndViewData
		{
			OpenType = 0
		};
		ViewManager.GetInstance().ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
	}

	public void OpenEndView()
	{
		if (mSettleRewardList != null && mSettleRewardList.Count > 0)
		{
			ViewManager.GetInstance().ShowView<IndependentStageRewardRessiueViewLogic>(new IndependentStageRewardRessiueViewData
			{
				mRewards = MergeSettleRewardList(mSettleRewardList),
				mChangeToRewardList = null,
				RandomGoodsRewardIndexs = new List<int>(),
				fromType = ((GameManager.GetInstance().StageScene == SceneType.MainView) ? RewardFromType.MainScene : RewardFromType.LevelScene),
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
			string viewName = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡수끎溸搙區\u0017¾厽刖梟\ud9feŃ" + GetConfigSuffix();
			IndependentStageStartEndViewData data = new IndependentStageStartEndViewData
			{
				OpenType = 1
			};
			ViewManager.GetInstance().ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
		}
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
			string viewName = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숍끟榫攎䵑\u0004ª厩뻫" + GetConfigSuffix();
			ViewManager.GetInstance().ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public void ShowUnlockGoodsView(int goodsID, Action callback = null)
	{
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsID);
		if (goodsConfigById != null && goodsConfigById.level >= GetUnlockMaxLevel())
		{
			IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null && goodsConfigById.series == independentMergeTheme.themeSeriesID && goodsConfigById.level >= independentMergeTheme.popLevel)
			{
				string viewName = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숎끕溶氏䝇\a¾厽橯c4끖k쌷䋟" + GetConfigSuffix();
				ViewManager.GetInstance().ShowView(viewName, new IndependentStageGoodsUnlockData
				{
					goodsBaseVo = goodsConfigById,
					ExitAction = callback
				}, ViewManager.ViewLayer.POP, animate: true);
			}
		}
	}

	public void OpenIndependentHelpView()
	{
		string viewName = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숚끟斵眛䡢;\u009a厙" + GetConfigSuffix();
		ViewManager.GetInstance().ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
	}

	public void OpenActivityIllustrationView()
	{
		string viewName = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숟끖憵琠楇 \u008a厉녥剤㩂\0逧\ud979" + GetConfigSuffix();
		ViewManager.GetInstance().ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
	}

	public bool IsPopedBigRewardState()
	{
		if (mIndependentStageMergeVo == null)
		{
			return false;
		}
		if (mIndependentStageMergeVo.IsPopedBigRewardState)
		{
			return true;
		}
		return false;
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
				if (GetCompleteIllsustratedCount() == allIllsustratedCount && !mIndependentStageMergeVo.IsPopedBigRewardState)
				{
					ClaimBigReward(GetIllustrateBigRewardList());
					IllustratedAnalytic(0, -1);
					mIndependentStageMergeVo.IsPopedBigRewardState = true;
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
		if (rewards != null && rewards.Count > 0)
		{
			ViewManager.GetInstance().ShowView<IndependentStageRewardBoxLogic>(new BuySuccessNormalGiftData
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

	public string GetGiftIconName()
	{
		return "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숄끛暰琅䵳;\u009e厝删犷\ud9e1Ś" + GetConfigSuffix();
	}

	public bool CanOpenTreasureCraftingGift()
	{
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
		if (!MonoSingleton<ActivityMutexManager>.Instance.IsLegalActivityMutex(ActivityMutexID.AMID_StageIndependent))
		{
			return false;
		}
		IIndependentStageMergeTheme openTheme = GetOpenTheme();
		if (openTheme == null)
		{
			return false;
		}
		if (!HasActivityRes(openTheme.themeID))
		{
			return false;
		}
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return false;
		}
		if (!mIndependentStageMergeVo.OpenState)
		{
			return false;
		}
		if (mIndependentStageMergeVo.GiftShopType <= 0)
		{
			return false;
		}
		if (MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByTypeAndIndex((ShopType)mIndependentStageMergeVo.GiftShopType, mIndependentStageMergeVo.GiftDynamicIndex) == null)
		{
			return false;
		}
		ActivityOpenDateConfig activityConfigConstantData = GetActivityConfigConstantData(ActivitySwitchConfigID.StageIndependentMergeGift);
		if (activityConfigConstantData == null)
		{
			return false;
		}
		if (activityConfigConstantData.themeID != ThemeID)
		{
			return false;
		}
		if (!mIndependentStageMergeVo.GiftOpenState && mIndependentStageMergeVo.GiftCloseTime <= activityConfigConstantData.startTimeStamp)
		{
			ResetShopData(mIndependentStageMergeVo.GiftShopType);
			mIndependentStageMergeVo.GiftOpenState = true;
			mIndependentStageMergeVo.GiftOpenTime = activityConfigConstantData.startTimeStamp;
			mIndependentStageMergeVo.GiftCloseTime = activityConfigConstantData.endTimeStamp;
			SaveIndependentMergeData();
		}
		if (mIndependentStageMergeVo.GiftOpenState)
		{
			IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme == null)
			{
				return false;
			}
			if (ServerTimeManager.CurrentServerTime3() - mIndependentStageMergeVo.LastPopGiftTime >= independentMergeTheme.giftCd)
			{
				return true;
			}
		}
		return false;
	}

	public bool OpenActivityGiftViewByPop()
	{
		if (!CanOpenTreasureCraftingGift())
		{
			return false;
		}
		mIndependentStageMergeVo.LastPopGiftTime = ServerTimeManager.CurrentServerTime3();
		SaveIndependentMergeData();
		OpenActivityGiftView(-1f, autoAlert: true);
		EventManager.GetInstance().DispatchEvent(203060);
		return true;
	}

	public void OpenActivityGiftView(float delay = 0f, bool autoAlert = false)
	{
		if (!mIndependentStageMergeVo.GiftOpenState || MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		IndependentStageGiftViewData viewData = new IndependentStageGiftViewData
		{
			autoAlert = autoAlert
		};
		mIndependentStageMergeVo.LastPopGiftTime = ServerTimeManager.CurrentServerTime3();
		SaveIndependentMergeData();
		if (delay > 0f)
		{
			TimeManager.Instance.Schedule(this, (float arg0) =>
			{
				ViewManager.GetInstance().ShowView<IndependentStageGiftViewLogic>(viewData, ViewManager.ViewLayer.POP, animate: true);
			}, delay, 1);
		}
		else
		{
			ViewManager.GetInstance().ShowView<IndependentStageGiftViewLogic>(viewData, ViewManager.ViewLayer.POP, animate: true);
		}
	}

	public string GetGameIconName()
	{
		return "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숏끛澴渐䝽1Â叁" + GetConfigSuffix();
	}

	public string GetMainIconName()
	{
		return "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숄끛澰清䵽1Â叁" + GetConfigSuffix();
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
			if (todayDateServerNumberV != mIndependentStageMergeVo.LastResetDayID && mIndependentStageMergeVo.LastResetDayID < todayDateServerNumberV)
			{
				mIndependentStageMergeVo.LastResetDayID = todayDateServerNumberV;
				mIndependentStageMergeVo.TodayDropTotal = 0;
				mIndependentDropConfig = null;
				ChangeIndependentSaveData();
				ResetIndependentDropConfig();
			}
		}
	}

	public List<IndependentGameGoodsVo> GetTemporaryGoods()
	{
		List<IndependentGameGoodsVo> list = new List<IndependentGameGoodsVo>();
		if (mIndependentStageMergeVo.IndependentTopTemporary != null && mIndependentStageMergeVo.IndependentTopTemporary.Count > 0)
		{
			list = list.Concat(mIndependentStageMergeVo.IndependentTopTemporary).ToList();
		}
		if (mIndependentStageMergeVo.IndependentTemporary != null && mIndependentStageMergeVo.IndependentTemporary.Count > 0)
		{
			list = list.Concat(mIndependentStageMergeVo.IndependentTemporary).ToList();
		}
		if (mIndependentStageMergeVo.IndependentTemporaryInfo != null && mIndependentStageMergeVo.IndependentTemporaryInfo.Count > 0)
		{
			List<IndependentGameGoodsVo> list2 = new List<IndependentGameGoodsVo>();
			foreach (IndependentTemporaryInfo item in mIndependentStageMergeVo.IndependentTemporaryInfo)
			{
				for (int i = 0; i < item.count; i++)
				{
					list2.Add(item.GetGameGoodsVo());
				}
			}
			list = list.Concat(list2).ToList();
		}
		return list;
	}

	public IndependentGameGoodsVo GetTemporaryGoodsID()
	{
		if (mIndependentStageMergeVo.IndependentTopTemporary != null && mIndependentStageMergeVo.IndependentTopTemporary.Count > 0)
		{
			return mIndependentStageMergeVo.IndependentTopTemporary[0];
		}
		if (mIndependentStageMergeVo.IndependentTemporary != null && mIndependentStageMergeVo.IndependentTemporary.Count > 0)
		{
			return mIndependentStageMergeVo.IndependentTemporary[mIndependentStageMergeVo.IndependentTemporary.Count - 1];
		}
		if (mIndependentStageMergeVo.IndependentTemporaryInfo != null && mIndependentStageMergeVo.IndependentTemporaryInfo.Count > 0)
		{
			return mIndependentStageMergeVo.IndependentTemporaryInfo.Last().GetGameGoodsVo();
		}
		return null;
	}

	public void RemoveTemporaryItem()
	{
		if (mIndependentStageMergeVo.IndependentTopTemporary != null && mIndependentStageMergeVo.IndependentTopTemporary.Count > 0)
		{
			mIndependentStageMergeVo.IndependentTopTemporary.RemoveAt(0);
			ChangeIndependentSaveData();
			return;
		}
		if (mIndependentStageMergeVo.IndependentTemporary != null && mIndependentStageMergeVo.IndependentTemporary.Count > 0)
		{
			int index = mIndependentStageMergeVo.IndependentTemporary.Count - 1;
			mIndependentStageMergeVo.IndependentTemporary.RemoveAt(index);
			ChangeIndependentSaveData();
		}
		if (mIndependentStageMergeVo.IndependentTemporaryInfo != null && mIndependentStageMergeVo.IndependentTemporaryInfo.Count > 0)
		{
			IndependentTemporaryInfo independentTemporaryInfo = mIndependentStageMergeVo.IndependentTemporaryInfo.Last();
			if (independentTemporaryInfo == null)
			{
				mIndependentStageMergeVo.IndependentTemporaryInfo.RemoveAt(mIndependentStageMergeVo.IndependentTemporaryInfo.Count - 1);
				ChangeIndependentSaveData();
			}
			else if (independentTemporaryInfo.count > 1)
			{
				independentTemporaryInfo.count--;
				ChangeIndependentSaveData();
			}
			else
			{
				int index2 = mIndependentStageMergeVo.IndependentTemporaryInfo.Count - 1;
				mIndependentStageMergeVo.IndependentTemporaryInfo.RemoveAt(index2);
				ChangeIndependentSaveData();
			}
		}
	}

	public void AddIndependentGoods(int goodsID, int num, string getType = "", Transform starTransform = null, bool isTotalDrop = true, bool isTop = false, int eventFrom = -1)
	{
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		if (isTotalDrop)
		{
			mIndependentStageMergeVo.TodayDropTotal += num;
			mIndependentStageMergeVo.TotalDropNum += num;
		}
		if (getType == "숉끏玫攊灜3Ò发" && eventFrom == 8)
		{
			getType = "";
		}
		if (getType == "귙¿赴")
		{
			mIndependentStageMergeVo.GeneratorDropNum += num;
		}
		mIndependentStageMergeVo.TotalDropNum += num;
		mIndependentStageMergeVo.TotalDropLevel1Num += GameLevelDefine.TwoPower(goodsConfigById.level - 1) * num;
		if (mIndependentStageMergeVo.IndependentTemporary == null)
		{
			mIndependentStageMergeVo.IndependentTemporary = new List<IndependentGameGoodsVo>();
		}
		if (mIndependentStageMergeVo.IndependentTopTemporary == null)
		{
			mIndependentStageMergeVo.IndependentTopTemporary = new List<IndependentGameGoodsVo>();
		}
		if (mIndependentStageMergeVo.IndependentTemporaryInfo == null)
		{
			mIndependentStageMergeVo.IndependentTemporaryInfo = new List<IndependentTemporaryInfo>();
		}
		IndependentGameGoodsVo independentGameGoodsVo = new IndependentGameGoodsVo
		{
			goodsID = goodsID
		};
		if (isTop)
		{
			for (int i = 0; i < num; i++)
			{
				mIndependentStageMergeVo.IndependentTopTemporary.Add(independentGameGoodsVo);
			}
		}
		else
		{
			bool flag = false;
			int count = mIndependentStageMergeVo.IndependentTemporaryInfo.Count;
			IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null && count >= independentMergeTheme.temporaryLimit)
			{
				flag = true;
			}
			if (!flag)
			{
				for (int j = 0; j < num; j++)
				{
					if (mIndependentStageMergeVo.IndependentTemporaryInfo.Count > 0 && mIndependentStageMergeVo.IndependentTemporaryInfo.Last().GetGameGoodsVo().Equals(independentGameGoodsVo))
					{
						mIndependentStageMergeVo.IndependentTemporaryInfo.Last().count++;
					}
					else
					{
						mIndependentStageMergeVo.IndependentTemporaryInfo.Add(IndependentTemporaryInfo.GetGoodsInfo(independentGameGoodsVo, 1));
					}
				}
			}
		}
		ChangeIndependentSaveData();
		DropAnalytic(getType, num);
		ResetIndependentDropConfig();
		if ((Object)(object)starTransform != (Object)null)
		{
			PlayDropGoodsAnim(starTransform, goodsConfigById.GetIcon());
		}
	}

	public void AddIndependentTemprotyGoods(IndependentGameGoodsVo goods, int num, bool isTotalDrop = true, bool isTop = false)
	{
		if (goods == null)
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = GetGoodsConfigById(goods.goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		if (isTotalDrop)
		{
			mIndependentStageMergeVo.TodayDropTotal += num;
			mIndependentStageMergeVo.TotalDropNum += num;
		}
		mIndependentStageMergeVo.TotalDropNum += num;
		mIndependentStageMergeVo.TotalDropLevel1Num += GameLevelDefine.TwoPower(goodsConfigById.level - 1) * num;
		if (mIndependentStageMergeVo.IndependentTemporary == null)
		{
			mIndependentStageMergeVo.IndependentTemporary = new List<IndependentGameGoodsVo>();
		}
		if (mIndependentStageMergeVo.IndependentTopTemporary == null)
		{
			mIndependentStageMergeVo.IndependentTopTemporary = new List<IndependentGameGoodsVo>();
		}
		if (mIndependentStageMergeVo.IndependentTemporaryInfo == null)
		{
			mIndependentStageMergeVo.IndependentTemporaryInfo = new List<IndependentTemporaryInfo>();
		}
		IndependentGameGoodsVo independentGameGoodsVo = new IndependentGameGoodsVo
		{
			goodsID = goods.goodsID,
			GoodsState = IndependentGoodsState.Normal,
			MergeDropList = goods.MergeDropList,
			MergeDropItemList = goods.MergeDropItemList,
			ProduceTotal = goods.ProduceTotal,
			ProduceCapacity = goods.ProduceCapacity,
			InitiativeProduceList = goods.InitiativeProduceList,
			MakeMaterials = goods.MakeMaterials
		};
		if (isTop)
		{
			for (int i = 0; i < num; i++)
			{
				mIndependentStageMergeVo.IndependentTopTemporary.Add(independentGameGoodsVo);
			}
		}
		else
		{
			for (int j = 0; j < num; j++)
			{
				if (mIndependentStageMergeVo.IndependentTemporaryInfo.Count > 0 && mIndependentStageMergeVo.IndependentTemporaryInfo.Last().GetGameGoodsVo().Equals(independentGameGoodsVo))
				{
					mIndependentStageMergeVo.IndependentTemporaryInfo.Last().count++;
				}
				else
				{
					mIndependentStageMergeVo.IndependentTemporaryInfo.Add(IndependentTemporaryInfo.GetGoodsInfo(independentGameGoodsVo, 1));
				}
			}
		}
		ChangeIndependentSaveData();
		DropAnalytic("", num);
		ResetIndependentDropConfig();
	}

	public int GetProduceDropGoodsID()
	{
		if (mIndependentStageMergeVo == null)
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
		if (mIndependentStageMergeVo.TodayDropTotal >= mIndependentDropConfig.dropLimit)
		{
			return 0;
		}
		int result = 0;
		if (mIndependentStageMergeVo.IndependentDropList == null || mIndependentStageMergeVo.IndependentDropList.Count == 0)
		{
			int num = new Random().Next(2, mIndependentDropConfig.energyCost);
			mIndependentStageMergeVo.IndependentDropList = new List<int>();
			for (int i = 0; i < mIndependentDropConfig.energyCost; i++)
			{
				if (i == num)
				{
					int randomIndependentGoodsID = GetRandomIndependentGoodsID();
					if (randomIndependentGoodsID > 0)
					{
						mIndependentStageMergeVo.IndependentDropList.Add(randomIndependentGoodsID);
					}
					else
					{
						mIndependentStageMergeVo.IndependentDropList.Add(0);
					}
				}
				else
				{
					mIndependentStageMergeVo.IndependentDropList.Add(0);
				}
			}
			_ = GameConst.GAME_MODE;
		}
		if (mIndependentStageMergeVo.IndependentDropList.Count > 0)
		{
			result = mIndependentStageMergeVo.IndependentDropList[0];
			mIndependentStageMergeVo.IndependentDropList.RemoveAt(0);
			ChangeIndependentSaveData();
		}
		return result;
	}

	private int GetRandomIndependentGoodsID()
	{
		int result = -1;
		if (mIndependentStageMergeVo.IndependentTokenList == null || mIndependentStageMergeVo.IndependentTokenList.Count == 0)
		{
			int newDropIndex = 0;
			mIndependentStageMergeVo.IndependentTokenList = GetIndependentDropList(mIndependentDropConfig, mIndependentStageMergeVo.IndependentDropIndex, out newDropIndex);
			mIndependentStageMergeVo.IndependentDropIndex = newDropIndex;
		}
		if (mIndependentStageMergeVo.IndependentTokenList != null && mIndependentStageMergeVo.IndependentTokenList.Count > 0)
		{
			result = mIndependentStageMergeVo.IndependentTokenList[0];
			mIndependentStageMergeVo.IndependentTokenList.RemoveAt(0);
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
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_006d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0072: Unknown result type (might be due to invalid IL or missing references)
		CollectAnimationData arg = new CollectAnimationData
		{
			num = 1,
			endFlyType = RewardFlyIconType.StageIndependentActivity,
			iconName = iconName,
			iconScale = 0.5f,
			toScale = 0.8f,
			starTransform = starTransform,
			effectBg_Position = new Vector3(6f, 0f, 0f),
			effectBg_Scale = new Vector3(1.5f, 2f, 1f)
		};
		EventManager.GetInstance().DispatchEvent(202101, arg);
	}

	public int GetTokenItemID(int exp)
	{
		List<IStageIndependentOrderDropLevel> list = mIndependentStageDropLevelMap.list.FindAll((IStageIndependentOrderDropLevel item) => item.InIapTag(mIndependentStageMergeVo.OpenIapTag));
		list.Sort((IStageIndependentOrderDropLevel a, IStageIndependentOrderDropLevel b) => a.tokenGoodsID - a.tokenGoodsID);
		foreach (IStageIndependentOrderDropLevel item in list)
		{
			if (item.getExp[0] <= exp && item.getExp[item.getExp.Length - 1] > exp)
			{
				return item.tokenGoodsID;
			}
		}
		return 0;
	}

	public int GetTokenDropType()
	{
		return ABTestSwitchDefine.StageMergeIndependentTokenDropSwitch();
	}

	public EOrderScoreActivityType IGetOrderScoreActivityType()
	{
		return EOrderScoreActivityType.e_stageIndependent;
	}

	public int IScoreItemType()
	{
		return 15;
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
		MonoSingleton<OrderActivityScoreManager>.Instance.OpenActivityAddOrderScore(IGetOrderScoreActivityType());
	}

	public void ICloseActivityRemoveOrderScore()
	{
		MonoSingleton<OrderActivityScoreManager>.Instance.CloseActivityRemoveOrderScore(IGetOrderScoreActivityType());
	}

	private void CheckActivityOrderScore()
	{
		if (IsInActivity() && GetTokenDropType() != 0 && GetActivityTimedown() <= 0 && MonoSingleton<OrderActivityScoreManager>.Instance.IsShowingOrderActivityScore(IGetOrderScoreActivityType()))
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
			Log.E(string.Format("신䘌졬ﭣ嬤拭z㻍郢㮘碌㪊ꀵ幣욙另쉆뀊犤片笔7Î反녯ٲ⢮\0逮\ud933", orderModelType, ex.Message));
		}
	}

	public bool ICanShowMergeViewActivityEntry()
	{
		return IInActivityAndHasRes();
	}

	private void _AddMainLineOrderToken(List<SingleDynamicOrder> showingOrders, EAddOrderScoreFrom orderFrom)
	{
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
		if (!IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || orders == null || orders.Count <= 0)
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
			int num = (int)Math.Round((float)order.score_stageIndependent / tokenValueCoe, MidpointRounding.AwayFromZero);
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
		if (!IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || orders == null || orders.Count <= 0)
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
			int num = (int)Math.Round((float)order.score_stageIndependent / tokenValueCoe, MidpointRounding.AwayFromZero);
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
		List<IStageIndependentOrderDropLevel> list = mIndependentStageDropLevelMap.list.FindAll((IStageIndependentOrderDropLevel item) => item.InIapTag(mIndependentStageMergeVo.OpenIapTag));
		list.Sort((IStageIndependentOrderDropLevel a, IStageIndependentOrderDropLevel b) => a.tokenGoodsID - a.tokenGoodsID);
		float num = list[0].tokenCost;
		return (float)list[level - 1].tokenCost / num;
	}

	public int CalculateOrderToken(int goodsID, int expCount)
	{
		if (mIndependentStageDropLevelMap == null || mIndependentStageDropLevelMap.GetItem(goodsID) == null)
		{
			return 0;
		}
		List<IStageIndependentOrderDropLevel> list = mIndependentStageDropLevelMap.list.FindAll((IStageIndependentOrderDropLevel item) => item.InIapTag(mIndependentStageMergeVo.OpenIapTag));
		list.Sort((IStageIndependentOrderDropLevel a, IStageIndependentOrderDropLevel b) => a.tokenGoodsID - a.tokenGoodsID);
		int num = list.FindIndex((IStageIndependentOrderDropLevel item) => item.tokenGoodsID == goodsID);
		if (num < 0)
		{
			return 0;
		}
		int maxNum = list[num].maxNum;
		return Mathf.Min((int)Math.Round((double)expCount / (double)list[num].tokenCost, MidpointRounding.AwayFromZero), maxNum);
	}

	public void AddMainExtraOrderToken(ref List<SingleDynamicOrder> mShowingOrders2)
	{
		if (!IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || mShowingOrders2 == null || mShowingOrders2.Count <= 0 || mIndependentStageDropLevelMap == null)
		{
			return;
		}
		int num = mIndependentStageMergeVo.MainOrderExp - mIndependentStageMergeVo.MainOrderTotalDrop;
		if (orderDropGoods == null || orderDropGoods.Count <= 0 || orderDropCost == null || orderDropCost.Count <= 0 || mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]) == null)
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

	public void AddLimitExtraOrderToken(ref List<SingleLimitTimeOrder> mShowingOrders2)
	{
		if (!IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || mShowingOrders2 == null || mShowingOrders2.Count <= 0 || mIndependentStageDropLevelMap == null)
		{
			return;
		}
		int num = mIndependentStageMergeVo.LimitTimeOrderExp - mIndependentStageMergeVo.LimitTimeOrderTotalDrop;
		if (mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]) == null)
		{
			return;
		}
		if (num <= -1 * mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]).tokenCost)
		{
			List<SingleLimitTimeOrder> list = (from o in mShowingOrders2.FindAll((SingleLimitTimeOrder o) => o.rewards.FindAll((BaseData3VO r) => orderDropGoods.Contains(r.id)).Count > 0)
				orderby o.rewards.GetNumByTypeAndID(1, 1001)
				select o).ToList();
			for (int num2 = 0; num2 < list.Count; num2++)
			{
				int num3 = list[num2].rewards.FindIndex((BaseData3VO o) => orderDropGoods.Contains(o.id));
				if (num3 <= -1 || list[num2].rewards[num3].num <= 0)
				{
					continue;
				}
				int tokenCost = mIndependentStageDropLevelMap.GetItem(list[num2].rewards[num3].id).tokenCost;
				if (num + tokenCost <= 0)
				{
					list[num2].rewards[num3].num--;
					if (list[num2].rewards[num3].num == 0)
					{
						list[num2].rewards.RemoveAt(num3);
					}
					num += tokenCost;
				}
			}
		}
		else
		{
			if (num < mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]).tokenCost)
			{
				return;
			}
			List<SingleLimitTimeOrder> list2 = mShowingOrders2.OrderByDescending((SingleLimitTimeOrder o) => o.rewards.GetNumByTypeAndID(1, 1001)).ToList();
			for (int num4 = 0; num4 < list2.Count; num4++)
			{
				int num5 = list2[num4].rewards.FindIndex((BaseData3VO o) => orderDropGoods.Contains(o.id));
				if (num5 > -1 && list2[num4].rewards[num5].num > 0)
				{
					int tokenCost2 = mIndependentStageDropLevelMap.GetItem(list2[num4].rewards[num5].id).tokenCost;
					if (num - tokenCost2 >= 0)
					{
						list2[num4].rewards[num5].num++;
						num -= tokenCost2;
					}
					continue;
				}
				int num6 = orderDropGoods[0];
				if (num6 > 0 && num - mIndependentStageDropLevelMap.GetItem(num6).tokenCost >= 0)
				{
					list2[num4].rewards.Add(new BaseData3VO
					{
						type = IScoreItemType(),
						id = num6,
						num = 1
					});
					num -= mIndependentStageDropLevelMap.GetItem(num6).tokenCost;
				}
			}
		}
	}

	public void AddRaceExtraOrderToken(ref List<RaceWinnerSingleOrder> mShowingOrders2)
	{
		if (!IsInActivity() || !HasActivityBaseResByThemeID() || GetActivityTimedown() <= 0 || mShowingOrders2 == null || mShowingOrders2.Count <= 0 || mIndependentStageDropLevelMap == null)
		{
			return;
		}
		int num = mIndependentStageMergeVo.RaceWinnerOrderExp - mIndependentStageMergeVo.RaceWinnerTotalDrop;
		if (mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]) == null)
		{
			return;
		}
		if (num <= -1 * mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]).tokenCost)
		{
			List<RaceWinnerSingleOrder> list = (from o in mShowingOrders2.FindAll((RaceWinnerSingleOrder o) => o.rewards.FindAll((BaseData3VO r) => orderDropGoods.Contains(r.id)).Count > 0)
				orderby o.rewards.GetNumByTypeAndID(1, 1001)
				select o).ToList();
			for (int num2 = 0; num2 < list.Count; num2++)
			{
				int num3 = list[num2].rewards.FindIndex((BaseData3VO o) => orderDropGoods.Contains(o.id));
				if (num3 <= -1 || list[num2].rewards[num3].num <= 0)
				{
					continue;
				}
				int tokenCost = mIndependentStageDropLevelMap.GetItem(list[num2].rewards[num3].id).tokenCost;
				if (num + tokenCost <= 0)
				{
					list[num2].rewards[num3].num--;
					if (list[num2].rewards[num3].num == 0)
					{
						list[num2].rewards.RemoveAt(num3);
					}
					num += tokenCost;
				}
			}
		}
		else
		{
			if (num < mIndependentStageDropLevelMap.GetItem(orderDropGoods[0]).tokenCost)
			{
				return;
			}
			List<RaceWinnerSingleOrder> list2 = mShowingOrders2.OrderByDescending((RaceWinnerSingleOrder o) => o.rewards.GetNumByTypeAndID(1, 1001)).ToList();
			for (int num4 = 0; num4 < list2.Count; num4++)
			{
				int num5 = list2[num4].rewards.FindIndex((BaseData3VO o) => orderDropGoods.Contains(o.id));
				if (num5 > -1 && list2[num4].rewards[num5].num > 0)
				{
					int tokenCost2 = mIndependentStageDropLevelMap.GetItem(list2[num4].rewards[num5].id).tokenCost;
					if (num - tokenCost2 >= 0)
					{
						list2[num4].rewards[num5].num++;
						num -= tokenCost2;
					}
					continue;
				}
				int num6 = orderDropGoods[0];
				if (num6 > 0 && num - mIndependentStageDropLevelMap.GetItem(num6).tokenCost >= 0)
				{
					list2[num4].rewards.Add(new BaseData3VO
					{
						type = IScoreItemType(),
						id = num6,
						num = 1
					});
					num -= mIndependentStageDropLevelMap.GetItem(num6).tokenCost;
				}
			}
		}
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
				mIndependentStageMergeVo.MainOrderTotalDrop += num2 * orderDropCost[baseData3VO.id];
				num += num2;
				flag = true;
			}
			else if (baseData3VO.id == 1001)
			{
				mIndependentStageMergeVo.MainOrderExp += num2;
				flag = true;
			}
		}
		mIndependentStageMergeVo.CompleteAllOrder++;
		if (flag)
		{
			ChangeIndependentSaveData();
		}
		DropAnalytic("匫橲ā讕鱲", num);
	}

	public void CompleteLimitOrder(List<BaseData3VO> rewardlist)
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
				mIndependentStageMergeVo.LimitTimeOrderTotalDrop += num2 * orderDropCost[baseData3VO.id];
				num += num2;
				flag = true;
			}
			else if (baseData3VO.id == 1001)
			{
				mIndependentStageMergeVo.LimitTimeOrderExp += num2;
				flag = true;
			}
		}
		mIndependentStageMergeVo.CompleteAllOrder++;
		if (flag)
		{
			ChangeIndependentSaveData();
		}
		DropAnalytic("匫橲ā讕鱲", num);
	}

	public void CompleteRaceOrder(List<BaseData3VO> rewardlist)
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
				mIndependentStageMergeVo.RaceWinnerTotalDrop += num2 * orderDropCost[baseData3VO.id];
				num += num2;
				flag = true;
			}
			else if (baseData3VO.id == 1001)
			{
				mIndependentStageMergeVo.RaceWinnerOrderExp += num2;
				flag = true;
			}
		}
		mIndependentStageMergeVo.CompleteAllOrder++;
		if (flag)
		{
			ChangeIndependentSaveData();
		}
		DropAnalytic("匫橲ā讕鱲", num);
	}

	public int GuideId_1()
	{
		return 226;
	}

	public int GuideId_2()
	{
		return 228;
	}

	public int GuideId_3()
	{
		return 227;
	}

	public void ActivityAnalytic(string action)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		dictionary.Add("숭끥疫瀮杆=Ú叙", mIndependentStageMergeVo.OpenIapTag);
		dictionary.Add("숋끥榩挌杆&ª厩숞끊榸洟楑\u0006ª厩뻹", mIndependentStageMergeVo.participateTime);
		dictionary.Add("숂끥断弃村?\u009a厙漻䉼", mIndependentStageMergeVo.ThemeID);
		dictionary.Add("숚끥徶琛村<\u0082厁냦\u008f赴", mIndependentStageMergeVo.startDayID);
		if (action == "匧橬ā词靥")
		{
			dictionary.Add("숏끥澾欐杀\u0006Â叁欷㹶", mIndependentStageMergeVo.TotalDropNum);
			dictionary.Add("숏끥撫匐杕1\u0096厕刘檿\ud9dcő", mIndependentStageMergeVo.stage);
			dictionary.Add("숅끥溭䌆束7¾厽划撯\ud9c4ņ", GetTemporaryTokenNum());
			int storageField = ObjectManager.GetInstance().commonFieldStorageModel.GetStorageField(EnergyCountFieldKey, EnergyCountKey, mIndependentStageMergeVo.allEngry);
			dictionary.Add("숅끥䖺渆杇&\u001a匙刘櫳\ud9cdō", storageField);
			int num = mIndependentStageMergeVo.MainOrderExp + mIndependentStageMergeVo.LimitTimeOrderExp + mIndependentStageMergeVo.RaceWinnerOrderExp;
			dictionary.Add("수끥状䔙材7Î反尬厈", num);
			dictionary.Add("수끥状丙材7Î反嬧乵", mIndependentStageMergeVo.CompleteAllOrder);
		}
		AnalyticInit.OnEvent("숅끥憽洆杓\u0011\u008a厉刟熟\ud9d8œ", dictionary);
	}

	public void DropAnalytic(string getType, int num)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숏끥禾瀐杀\u0006ê叩뻹", getType);
		dictionary.Add("숟끥斷爠杙0\u009a厙", num);
		dictionary.Add("执_4끴c쀵㫍", mIndependentStageMergeVo.UnlockMaxLevel);
		AnalyticInit.OnEvent("숅끥憽洆杓\u0011\u008a厉숍끓斷琎火5\u009a厙匰橯ā讕鍮", dictionary);
	}

	public void MergeAnalytic(int mainLevel, int branchLevel)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숏끥斴䴐杆5\u009a厙숩끓玷猪慜7Ò发", mainLevel);
		dictionary.Add("숏끥斴䴐杆5\u009a厙숩끓玷猪慜7Ò发医橣ā词靴", mIndependentStageMergeVo.TotalDropNum);
		dictionary.Add("숏끥斴䈐杆5\u009a厙숉끛梷攊牜\u0011¦厥攡䲋", branchLevel);
		dictionary.Add("숏끥斴䈐杆5\u009a厙숉끛梷攊牜\u0011¦厥灳s4끣q갡䣜", mIndependentStageMergeVo.TotalDropNum);
		AnalyticInit.OnEvent("숅끥憽洆杓\u0011\u008a厉숍끓斷爎火?\u009a厙椵䁽", dictionary);
	}

	public void IllustratedAnalytic(int series, int rewardID)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숅끥沺攆杙\"¶厵匐橥ā讕ꭴ", series);
		dictionary.Add("숅끥斺挆杘>\u009a厙뻨", rewardID);
		AnalyticInit.OnEvent("숅끥憽洆杓\u0011\u008a厉숍끓澷氎火1Â叁橬e4끴k\udc3d䋆", dictionary);
	}

	private List<BranchGoodsAnalyticVo> getBranchGoodsAnalytic()
	{
		List<BranchGoodsAnalyticVo> list = new List<BranchGoodsAnalyticVo>();
		if (mIndependentStageMergeVo.BranchMaxLevel != null && mIndependentStageMergeVo.BranchMaxLevel.Count > 0)
		{
			int num = 0;
			IIndependentStageMergeTheme independentMergeTheme = GetIndependentMergeTheme();
			if (independentMergeTheme != null)
			{
				num = independentMergeTheme.themeSeriesID;
			}
			foreach (KeyValuePair<int, int> item in mIndependentStageMergeVo.BranchMaxLevel)
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

	private int GetTemporaryTokenNum()
	{
		int num = 0;
		List<IIndependentGoodsBaseVo> goodsListBySeriesID = GetGoodsListBySeriesID(GetIndependentMergeTheme().themeSeriesID);
		foreach (IndependentGameGoodsVo value in mIndependentStageMergeVo.IndependentTopTemporary)
		{
			if (goodsListBySeriesID.Exists((IIndependentGoodsBaseVo x) => x.goodsID == value.goodsID))
			{
				num++;
			}
		}
		foreach (IndependentGameGoodsVo value2 in mIndependentStageMergeVo.IndependentTemporary)
		{
			if (goodsListBySeriesID.Exists((IIndependentGoodsBaseVo x) => x.goodsID == value2.goodsID))
			{
				num++;
			}
		}
		foreach (IndependentTemporaryInfo value3 in mIndependentStageMergeVo.IndependentTemporaryInfo)
		{
			if (goodsListBySeriesID.Exists((IIndependentGoodsBaseVo x) => x.goodsID == value3.GetGameGoodsVo().goodsID))
			{
				num += value3.count;
			}
		}
		return num;
	}

	public void AddOrderUseEnergy(int addNum)
	{
		if (IsInActivity() && mIndependentStageMergeVo != null)
		{
			ObjectManager.GetInstance().commonFieldStorageModel.AddStorageField(EnergyCountFieldKey, EnergyCountKey, addNum, mIndependentStageMergeVo.allEngry);
		}
	}

	public string GetMainLineItemIconByLevel(int level, int themeID)
	{
		string result = string.Empty;
		if (!HasActivityRes(themeID))
		{
			return result;
		}
		if (mIndependentStageMergeVo == null)
		{
			return result;
		}
		if (ThemeID != themeID)
		{
			return result;
		}
		IIndependentStageMergeTheme item = StaticDataBase<StaticDataManager>.GetInstance().StageIndependentMergeThemes.GetItem(themeID);
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
		string groupTag = GetGroupTag();
		string oldTestGroup = GetOldTestGroup();
		string openGroupValue = mIndependentStageMergeVo.OpenGroupValue;
		int openIapTag = mIndependentStageMergeVo.OpenIapTag;
		stringBuilder.Append("ష㢟匁\uf513︺").Append(oldTestGroup).Append("뺖");
		stringBuilder.Append("画\u00a8彦Я栉蔮ꦒ").Append(groupTag).Append("뺖");
		stringBuilder.Append("琻\u00a8彦Я刈\ud898궒").Append(openGroupValue).Append("뺖");
		stringBuilder.Append("刯脦ꉂȎ").Append(openIapTag).Append("뺖");
		return stringBuilder.ToString();
	}

	private string GetGroupTag()
	{
		string selfStr = ObjectManager.GetInstance().abTest2Model.GetGroup("숩끕炾椪䑕?Æ叅쉟끝ル㝠渄eÅ叄");
		string selfStr2 = ObjectManager.GetInstance().abTest2Model.GetGroup("숩끕炾椪䑕?Æ叅쉟끝㋫ㅠ渄jÍ双");
		if (!selfStr.IsNotNullAndEmpty())
		{
			if (!selfStr2.IsNotNullAndEmpty())
			{
				return "";
			}
			return "숩끕炾椪䑕?Æ叅쉟끝㋫ㅠ渄jÍ双";
		}
		return "숩끕炾椪䑕?Æ叅쉟끝ル㝠渄eÅ叄";
	}

	public bool TryGetActivityPackID(out EPackActivityID packID)
	{
		int themeID = ThemeID;
		bool result = false;
		packID = (EPackActivityID)0;
		if (themeID == 1)
		{
			packID = EPackActivityID.independentStageMerge;
			result = true;
		}
		return result;
	}

	public void SyncServerDataToLocal()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(mIndependentMergeKey);
		mIndependentStageMergeVo = new IndependentStageMergeModelVo();
		var (text, list) = FixIndependentTemporary(serverItem);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mIndependentStageMergeVo = JsonConvert.DeserializeObject<IndependentStageMergeModelVo>(text);
				if (list != null && list.Count > 0 && (mIndependentStageMergeVo.IndependentTemporaryInfo == null || mIndependentStageMergeVo.IndependentTemporaryInfo.Count == 0))
				{
					mIndependentStageMergeVo.IndependentTemporaryInfo = list;
					SaveIndependentMergeData();
				}
			}
			catch (Exception)
			{
			}
		}
		ReloadConfig();
		CheckActivityRes();
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
		if (mIndependentStageMergeVo != null)
		{
			string value = JsonConvert.SerializeObject((object)mIndependentStageMergeVo);
			SaveItem(mIndependentMergeKey, value);
			Singleton<ServerManager>.Instance.SaveServerItem(mIndependentMergeKey, value);
		}
	}

	public void ResetTodayDropDebug(int count)
	{
		mIndependentStageMergeVo.TodayDropTotal = count;
		mIndependentDropConfig = null;
		ResetIndependentDropConfig();
		ChangeIndependentSaveData();
	}

	public void ResetGeneratorDropDebug(int count)
	{
		mIndependentStageMergeVo.GeneratorDropNum = count;
		ChangeIndependentSaveData();
	}

	public void ResetActivityDebug()
	{
		if (GetTokenDropType() == 1)
		{
			ICloseActivityRemoveOrderScore();
		}
		mIndependentStageMergeVo.OpenState = false;
		mIndependentStageMergeVo.ResetData();
		mIndependentStageMergeVo.startDayID = 0;
		mIndependentStageMergeVo.endDayID = 0;
		mIndependentStageMergeVo.OpenTime = 0L;
		mIndependentStageMergeVo.CloseTime = 0L;
		ChangeIndependentSaveData();
	}

	public void DebugCloseActivity()
	{
		if (IsInActivity() && mIndependentStageMergeVo != null)
		{
			mIndependentStageMergeVo.CloseTime = mIndependentStageMergeVo.OpenTime - ServerTimeManager.TimeDiff - 10;
			mIndependentStageMergeVo.endDayID = TimeManager.GetDateIDByTime(mIndependentStageMergeVo.CloseTime);
			if (GetTokenDropType() == 1)
			{
				ICloseActivityRemoveOrderScore();
			}
			ChangeIndependentSaveData();
		}
	}

	public void DebugClearMap()
	{
		mIndependentStageMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		ChangeIndependentSaveData();
	}

	public void DebugClearTempary()
	{
		mIndependentStageMergeVo.IndependentTemporary = new List<IndependentGameGoodsVo>();
		mIndependentStageMergeVo.IndependentTemporaryInfo = new List<IndependentTemporaryInfo>();
		mIndependentStageMergeVo.IndependentTopTemporary = new List<IndependentGameGoodsVo>();
		ChangeIndependentSaveData();
		EventManager.GetInstance().DispatchEvent(202018);
	}

	public void DebugResetIllustrateStateInSeries(int series)
	{
		if (mIndependentStageMergeVo.IllustratedUnlockState.ContainsKey(series))
		{
			List<int> list = mIndependentStageMergeVo.IllustratedUnlockState[series].Keys.ToList();
			for (int i = 0; i < list.Count; i++)
			{
				mIndependentStageMergeVo.IllustratedUnlockState[series][list[i]] = 0;
			}
			mIndependentStageMergeVo.IsPopedBigRewardState = false;
		}
		ChangeIndependentSaveData();
	}

	public void DebugUnlockCollection()
	{
		if (mIndependentStageMergeVo.IllustratedUnlockState == null)
		{
			return;
		}
		foreach (Dictionary<int, int> value in mIndependentStageMergeVo.IllustratedUnlockState.Values)
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

	public void DebugSettle()
	{
		IndependentSettleup();
		ViewManager.GetInstance().ShowView<IndependentStageRewardRessiueViewLogic>(new IndependentStageRewardRessiueViewData
		{
			mRewards = MergeSettleRewardList(mSettleRewardList),
			mChangeToRewardList = null,
			RandomGoodsRewardIndexs = new List<int>(),
			fromType = ((GameManager.GetInstance().StageScene == SceneType.MainView) ? RewardFromType.MainScene : RewardFromType.LevelScene),
			CloseCall = () =>
			{
				if (mSettleRewardList != null)
				{
					mSettleRewardList.Clear();
				}
			}
		}, ViewManager.ViewLayer.POP, animate: true);
	}

	public IndependentStageMergeModelVo GetIndependentMergeVo()
	{
		return mIndependentStageMergeVo;
	}
}
