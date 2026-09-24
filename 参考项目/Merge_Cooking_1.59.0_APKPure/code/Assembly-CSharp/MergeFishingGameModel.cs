using System;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using TLF;
using UnityEngine;

public class MergeFishingGameModel : BaseModel
{
	private readonly string mIndependentMergeKey = "숸끷徜䘹即\u0017\u0082厁숣끩徑䤤䥺\u0015\u0082厁䱎F4끟Mꄗ⓱";

	public MergeFishingGameModelVo mIndependentMergeVo;

	private IIndependentDropConfigVo mIndependentDropConfig;

	public List<BaseData3VO> mSettleRewardList = new List<BaseData3VO>();

	private Dictionary<int, IIndependentGoodsBaseVo> mIndependentGoodsDic = new Dictionary<int, IIndependentGoodsBaseVo>();

	private Dictionary<int, Dictionary<int, IIndependentGoodsBaseVo>> mIndependentGoodsSeriesDic;

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		mIndependentMergeVo = new MergeFishingGameModelVo();
		string item = GetItem(mIndependentMergeKey);
		if (!string.IsNullOrEmpty(item))
		{
			mIndependentMergeVo = JsonConvert.DeserializeObject<MergeFishingGameModelVo>(item);
		}
		RepairTimeAnomaly();
		ReloadConfig();
		TomorrowResetData();
		EventManager.GetInstance().AddEventListener(100003, TomorrowResetData);
		EventManager.GetInstance().AddEventListener(100197, ResetIndependentDropConfig);
		EventManager.GetInstance().AddEventListener(100002, TimeUpdate);
	}

	private void RepairTimeAnomaly()
	{
		if (ObjectManager.GetInstance().mergeFishingModel.IsInActivity())
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
		List<IIndependentGoodsBaseVo> list = MergeFishing.ConfigHelper.fishGoodsList.list;
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
	}

	private void ReloadConfig()
	{
		InitConfig();
		ResetIndependentDropConfig();
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
			IIndependentGoodsMergeVo item = MergeFishing.ConfigHelper.fishGoodsMergeMap.GetItem(independentGameGoodsVo.goodsID);
			if (item != null)
			{
				if (independentGameGoodsVo.MergeDropList == null)
				{
					independentGameGoodsVo.MergeDropList = new List<int>();
				}
				if (independentGameGoodsVo.MergeDropItemList == null)
				{
					independentGameGoodsVo.MergeDropItemList = new List<BaseData2VO>();
				}
				List<BaseData3VO> certainDrops = item.GetCertainDrops();
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

	public void ResetIndependentDropConfig()
	{
		int userIapAbilityTag = ObjectManager.GetInstance().userTagModel.GetUserIapAbilityTag();
		if (mIndependentDropConfig != null && mIndependentDropConfig.InDropSection(mIndependentMergeVo.TodayDropTotal) && mIndependentDropConfig.InIapTag(userIapAbilityTag))
		{
			return;
		}
		mIndependentDropConfig = null;
		List<IIndependentDropConfigVo> list = MergeFishing.ConfigHelper.fishDropList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].InDropSection(mIndependentMergeVo.TodayDropTotal) && list[i].InIapTag(userIapAbilityTag))
			{
				mIndependentDropConfig = list[i];
				break;
			}
		}
	}

	public void OpenMergeFishing()
	{
		int todayDateServerNumberV = ServerTimeManager.TodayDateServerNumberV3;
		mIndependentMergeVo.ResetData();
		mIndependentMergeVo.LastResetDayID = todayDateServerNumberV;
		ReloadConfig();
		InitialIndependentMap();
		SaveIndependentMergeData();
		EventManager.GetInstance().DispatchEvent(202048);
	}

	private void InitialIndependentMap()
	{
		mIndependentMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		if (MergeFishing.ConfigHelper.fishGameInitMap == null)
		{
			return;
		}
		List<IGameInitVo> list = MergeFishing.ConfigHelper.fishGameInitMap.list;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		for (int i = 0; i < list.Count; i++)
		{
			independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = list[i].goodsID;
			independentGameGoodsVo.GoodsState = GetIndependentGoodsState(list[i].status);
			mIndependentMergeVo.IndependentMap[list[i].gridID] = independentGameGoodsVo;
		}
		MergeFishing.IThemeVO currentTheme = ObjectManager.GetInstance().mergeFishingModel.GetCurrentTheme();
		if (currentTheme == null)
		{
			return;
		}
		string[] array = currentTheme.initialData.Split(';');
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
				AddGoodsToTemporary(num2, num3, "숄끌璼愅敀\u0001Ö叕娢䶌", null, isTotalDrop: false, isTop: true);
				break;
			}
		}
	}

	public void CloseMergeFishing()
	{
		IndependentSettleup();
		mIndependentMergeVo.ResetData();
		SaveIndependentMergeData();
		EventManager.GetInstance().DispatchEvent(202048);
	}

	private void IndependentSettleup()
	{
		mSettleRewardList = new List<BaseData3VO>();
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IIndependentGoodsCollectVo independentGoodsCollectVo = null;
		List<int> list = new List<int>();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
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
			independentGoodsCollectVo = MergeFishing.ConfigHelper.fishGoodsCollectMap.GetItem(independentGoodsBaseVo.goodsID);
			if (independentGoodsCollectVo == null)
			{
				continue;
			}
			if (independentGoodsCollectVo.itemType == 1)
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
		for (int j = 0; j < list.Count; j++)
		{
			mSettleRewardList.Add(new BaseData3VO
			{
				type = 2,
				id = list[j],
				num = 1
			});
		}
		_ = GameConst.GAME_MODE;
		ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(mSettleRewardList, notice: true, 103);
		if (mSettleRewardList == null || mSettleRewardList.Count <= 0)
		{
			return;
		}
		ViewManager.GetInstance().ShowView<BuySuccessNormalGiftLogic>(new BuySuccessNormalGiftData
		{
			TitleName = "숝끓撆弞畛 \u0096厕숍끕璷甎捆3Ö叕숃끛玭弄汛<Ò发" + GameConst.GetLanguage(),
			TipsKey = "숍끟榫猎䵑\u0014ª厩쉘끥斯瑙桫!\u009a厙숵끖玼挶瑐7Ò发",
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

	public IIndependentDropConfigVo GetIndependentDropConfig()
	{
		return mIndependentDropConfig;
	}

	public bool IsInActivity()
	{
		if (ObjectManager.GetInstance().mergeFishingModel.IsInActivity())
		{
			return 0 < GetActivityTimedown();
		}
		return false;
	}

	public int GetActivityTimedown()
	{
		return ObjectManager.GetInstance().mergeFishingModel.GetActivityTimedown();
	}

	public Dictionary<int, IndependentGameGoodsVo> GetIndependentMap()
	{
		return mIndependentMergeVo.IndependentMap;
	}

	public void ChangeIndependentMap(int gridId, IndependentGameGoodsVo goodsVo)
	{
		if (mIndependentMergeVo == null)
		{
			mIndependentMergeVo = new MergeFishingGameModelVo();
		}
		if (mIndependentMergeVo.IndependentMap == null)
		{
			mIndependentMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		}
		mIndependentMergeVo.IndependentMap[gridId] = goodsVo;
		SaveIndependentMapData();
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
			SaveIndependentMergeData();
		}
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
		IIndependentProduceVo item = MergeFishing.ConfigHelper.fishGoodsProduceMap.GetItem(goodsId);
		if (item == null)
		{
			return result;
		}
		List<BaseData2VO> produceVos = item.GetProduceVos();
		result = Singleton<GameLevelManager>.Instance.GetDropListByDropWeight(produceVos);
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			GameLevelDefine.OutPutList(goodsId, 1, result);
		}
		return result;
	}

	public bool HasEmptyGrid()
	{
		for (int i = 1; i <= MergeFishingMainViewLogic_def.FishRows; i++)
		{
			for (int j = 1; j <= MergeFishingMainViewLogic_def.FishColumns; j++)
			{
				int key = i * 10 + j;
				if (mIndependentMergeVo.IndependentMap.TryGetValue(key, out var value))
				{
					if (value == null || value.goodsID == 0)
					{
						return true;
					}
					continue;
				}
				return true;
			}
		}
		return false;
	}

	public bool AddGoodsToChessboard(int goodsID, Transform startTransform, bool showEnoughTip = false)
	{
		if (GetGoodsConfigById(goodsID) == null)
		{
			return false;
		}
		if (HasEmptyGrid())
		{
			EventManager.GetInstance().DispatchEvent<int, Transform>(202049, goodsID, startTransform);
			return true;
		}
		if (showEnoughTip)
		{
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍");
		}
		return false;
	}

	public void OpenIndependentMergeView()
	{
	}

	private void TimeUpdate()
	{
		TomorrowResetData();
	}

	private void TomorrowResetData()
	{
		int todayDateServerNumberV = ServerTimeManager.TodayDateServerNumberV3;
		if (todayDateServerNumberV != mIndependentMergeVo.LastResetDayID && mIndependentMergeVo.LastResetDayID < todayDateServerNumberV)
		{
			mIndependentMergeVo.LastResetDayID = todayDateServerNumberV;
			mIndependentMergeVo.TodayDropTotal = 0;
			mIndependentDropConfig = null;
			SaveIndependentMergeData();
			ResetIndependentDropConfig();
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
			SaveIndependentMergeData();
		}
		else if (mIndependentMergeVo.IndependentTemporary != null && mIndependentMergeVo.IndependentTemporary.Count > 0)
		{
			int index = mIndependentMergeVo.IndependentTemporary.Count - 1;
			mIndependentMergeVo.IndependentTemporary.RemoveAt(index);
			SaveIndependentMergeData();
		}
	}

	public void AddGoodsToTemporary(int goodsID, int num, string getType = "", Transform starTransform = null, bool isTotalDrop = true, bool isTop = false)
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
		SaveIndependentMergeData();
		DropAnalytic(goodsConfigById.goodsID, goodsConfigById.level, num, getType);
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
		if (!ObjectManager.GetInstance().mergeFishingModel.HasCurrentThemeRes())
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
			SaveIndependentMergeData();
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
			SaveIndependentMergeData();
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
			endFlyType = RewardFlyIconType.MergeFishingActivity,
			iconName = iconName,
			iconScale = 0.45f,
			toScale = 0.8f,
			starTransform = starTransform,
			effectBg_Position = Vector3.zero,
			effectBg_Scale = Vector3.one * 2f
		};
		EventManager.GetInstance().DispatchEvent(202101, arg);
	}

	public void DropAnalytic(int goodsId, int goodsLv, int num, string getType)
	{
		ObjectManager.GetInstance().mergeFishingModel.OnAddToken(goodsId, goodsLv, num);
		MergeFishing.TA.GetFishToken(goodsId, goodsLv, num, getType);
	}

	public override void ReloadModel()
	{
		InitConfig();
	}

	public void SyncServerDataToLocal()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(mIndependentMergeKey);
		if (serverItem.IsNullOrEmpty())
		{
			mIndependentMergeVo = new MergeFishingGameModelVo();
		}
		else
		{
			try
			{
				MergeFishingGameModelVo mergeFishingGameModelVo = JsonConvert.DeserializeObject<MergeFishingGameModelVo>(serverItem);
				if (mergeFishingGameModelVo != null)
				{
					mIndependentMergeVo = mergeFishingGameModelVo;
				}
			}
			catch (Exception)
			{
			}
		}
		RepairTimeAnomaly();
		ReloadConfig();
		SaveIndependentMergeData();
		TomorrowResetData();
	}

	public override void SaveDataToDB()
	{
		SaveIndependentMergeData();
	}

	private void SaveIndependentMapData()
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
		SaveIndependentMergeData();
	}

	public void ResetActivityDebug()
	{
		mIndependentMergeVo.ResetData();
		SaveIndependentMergeData();
	}

	public MergeFishingGameModelVo GetIndependentMergeVo()
	{
		return mIndependentMergeVo;
	}

	public void DebugClearGrid()
	{
		if (mIndependentMergeVo == null)
		{
			mIndependentMergeVo = new MergeFishingGameModelVo();
		}
		if (mIndependentMergeVo.IndependentMap == null)
		{
			mIndependentMergeVo.IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		}
		else
		{
			mIndependentMergeVo.IndependentMap.Clear();
		}
		SaveIndependentMapData();
		EventManager.GetInstance().DispatchEvent(202050);
	}

	public void DebugRemoveGrid(int gridID)
	{
		if (mIndependentMergeVo != null && mIndependentMergeVo.IndependentMap != null && mIndependentMergeVo.IndependentMap.ContainsKey(gridID))
		{
			mIndependentMergeVo.IndependentMap[gridID] = null;
			SaveIndependentMapData();
			EventManager.GetInstance().DispatchEvent(202050);
		}
	}
}
