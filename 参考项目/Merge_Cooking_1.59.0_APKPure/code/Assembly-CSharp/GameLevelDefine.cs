using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using Newtonsoft.Json;
using TLF;
using UnityEngine;
using UnityEngine.UI;

public static class GameLevelDefine
{
	public static float DownUp2X = 0.1f;

	public static float DownUp2Y = 0.2f;

	public static float UpDown2X = 0.2f;

	public static float UpDown2Y = 0f;

	public static int DetailHintGoodsID = 0;

	public static int CookingClickType = 1;

	public static bool HasGoodsToTemporary = false;

	public static List<int> MustbeBubbleList = new List<int>();

	private static List<GameGoodsVo> mChessboardMachines;

	private static Dictionary<int, List<int>> mCacheGoodsSplitDic;

	private static Dictionary<int, int> mGoodsAdvancedTypeDic = new Dictionary<int, int>();

	private static Dictionary<int, int> mSeriesProduceMaxDic = new Dictionary<int, int>();

	public static List<GameGoodsVo> PutInGoodsList = new List<GameGoodsVo>();

	private static Dictionary<string, int> mUUIDCacheDic;

	private static int mUUIDincrement = 0;

	private static Dictionary<int, List<IGoodsAutoConversionVO>> mAutoConversionVoDic = null;

	private static Dictionary<int, List<IGoodsAutoConversionVO>> mAutoConversionVoListDic = null;

	private static Dictionary<int, string> actionAnalyticDic = new Dictionary<int, string>
	{
		[1] = "뻕\u00af赴",
		[2] = "곦÷赴",
		[3] = "匩橥ā讝詥",
		[4] = "初澯\ud9dbŘ"
	};

	private static List<Dictionary<string, object>> mChessBoardGoodsEvents = new List<Dictionary<string, object>>();

	private static Dictionary<int, List<int>> mGoodsPreGoodsDic;

	private static GameLevelCurve _gameLevelCurve = null;

	public static AnimationCurve DownUp_xy1 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve DownUp_xy2 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve DownUp_xy3 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve DownUp_xx1 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve DownUp_xx2 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve DownUp_yy1 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve DownUp_yy2 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve UpDown_xy1 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve UpDown_xy2 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve UpDown_xy3 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve MoveLinear = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve Exchange_Curve_1 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve Exchange_Curve_2 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	public static AnimationCurve Order_Fly_Curve_1 = AnimationCurve.Linear(0f, 1f, 1f, 1f);

	private static Dictionary<int, List<int>> mProcessedMaterialDic = new Dictionary<int, List<int>>();

	private static Dictionary<int, List<int>> mSplitCacheDic;

	public static Dictionary<int, List<MakeMatInfo>> OriginalLackCookingMats = new Dictionary<int, List<MakeMatInfo>>();

	public static Dictionary<int, List<MakeMatInfo>> RaceWinnerOriginalMats = new Dictionary<int, List<MakeMatInfo>>();

	public static Dictionary<int, List<MakeMatInfo>> ActivityOriginalMats = new Dictionary<int, List<MakeMatInfo>>();

	public static Dictionary<int, List<MakeMatInfo>> LackCookingMats = new Dictionary<int, List<MakeMatInfo>>();

	public static Dictionary<int, int> OrderUsedCookingDic = new Dictionary<int, int>();

	public static Dictionary<int, int> OrderUsedMatDic = new Dictionary<int, int>();

	private static Dictionary<int, List<int>> _cookingMaterialDic;

	public static bool IsSkipAnalyticForOrderTakeout = false;

	public const int GoodsStackCap = 99;

	public static int CurrentGeneratorID = 0;

	private static List<int> mNeedLowLevelGoods = new List<int>();

	private static List<int> mOrderNeedLowLevelGoods = new List<int>();

	private static List<int> mOrderLowLevelCookGoods = new List<int>();

	private static Dictionary<int, float> mUseCookingGoodsDic = new Dictionary<int, float>();

	private static Dictionary<int, int> mConversionTotalNumDic = new Dictionary<int, int>();

	private static Dictionary<int, List<int>> mConversionProduceNumDic = new Dictionary<int, List<int>>();

	private static Dictionary<int, int> mOrderConversionDic = new Dictionary<int, int>();

	private static Dictionary<int, int> mOrderDerivativeDic = new Dictionary<int, int>();

	private static Dictionary<int, int> mOrderDerivativeMaxLevelDic = new Dictionary<int, int>();

	public static bool IsFromQuickBubble = false;

	public static List<int> NeedLowLevelGoods => mNeedLowLevelGoods;

	public static List<int> OrderNeedLowLevelGoods => mOrderNeedLowLevelGoods;

	public static List<int> OrderLowLevelCookGoods => mOrderLowLevelCookGoods;

	public static int GetChessboardWorkingGoodsNum(int goodsID)
	{
		int num = 0;
		if (mChessboardMachines == null)
		{
			return num;
		}
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return num;
		}
		for (int i = 0; i < mChessboardMachines.Count; i++)
		{
			if (mChessboardMachines[i] != null)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mChessboardMachines[i].goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == goodsCookingVO.instrumentType && mChessboardMachines[i].MakingGoodsID == goodsID && (mChessboardMachines[i].GoodsState == GameGoodsState.InitiativeProduce || mChessboardMachines[i].GoodsState == GameGoodsState.Working))
				{
					num++;
				}
			}
		}
		return num;
	}

	public static IGoodsBaseVo GetNextGoods(int goodsID, int level)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return null;
		}
		return Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level + level);
	}

	public static List<GameGoodsVo> GetGameGoodsInMap(int goodsId)
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false))
		{
			bool flag = Singleton<GameLevelManager>.Instance.GridUnlock(item.Key);
			GameGoodsVo value = item.Value;
			if (flag && value != null && value.goodsID > 0 && value.goodsID == goodsId && value.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotMerge(value.GoodsState))
			{
				list.Add(value);
			}
		}
		return list;
	}

	public static List<GameGoodsVo> GetGameGoodsInMapBySeries(int series)
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false))
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				continue;
			}
			GameGoodsVo value = item.Value;
			if (value != null)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.series == series && value.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotMerge(value.GoodsState))
				{
					list.Add(value);
				}
			}
		}
		return list;
	}

	public static List<int> GetLinealProduceByGenerator(int goodsID)
	{
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				List<int> produceList = initiativeProduceById.GetProduceList();
				for (int i = 0; i < produceList.Count; i++)
				{
					IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceList[i]);
					if (goodsBaseVoById2 != null && goodsBaseVoById2.series > 0 && !list.Contains(goodsBaseVoById2.series))
					{
						list.Add(goodsBaseVoById2.series);
					}
				}
			}
			initiativeProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(goodsBaseVoById.goodsID);
			if (initiativeProduceById != null)
			{
				List<int> produceList = initiativeProduceById.GetProduceList();
				for (int j = 0; j < produceList.Count; j++)
				{
					IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceList[j]);
					if (goodsBaseVoById2 != null && goodsBaseVoById2.series > 0 && !list.Contains(goodsBaseVoById2.series))
					{
						list.Add(goodsBaseVoById2.series);
					}
				}
			}
		}
		return list;
	}

	public static List<int> GetProudceSeriesByGoodsAndType(IGoodsProduceVo goodsProduceVo, int type)
	{
		List<int> list = new List<int>();
		if (goodsProduceVo == null)
		{
			return list;
		}
		List<int> list2 = ((type != 1) ? goodsProduceVo.GetConversionList() : goodsProduceVo.GetProduceList());
		if (list2 == null || list2.Count == 0)
		{
			return list;
		}
		List<int> list3 = new List<int>();
		for (int i = 0; i < list2.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(list2[i]);
			if (goodsBaseVoById != null && goodsBaseVoById.series > 0 && !list3.Contains(goodsBaseVoById.series))
			{
				list3.Add(goodsBaseVoById.series);
			}
		}
		for (int j = 0; j < list3.Count; j++)
		{
			List<IGoodsBaseVo> goodsBaseVosBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBaseVosBySeries(list3[j]);
			if (goodsBaseVosBySeries == null)
			{
				continue;
			}
			for (int k = 0; k < goodsBaseVosBySeries.Count; k++)
			{
				IGoodsBaseVo goodsBaseVoById = goodsBaseVosBySeries[k];
				if (goodsBaseVoById != null)
				{
					if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsConversion(goodsBaseVoById.type))
					{
						List<int> produceSeriesByGoodsId = Singleton<GameLevelManager>.Instance.GetProduceSeriesByGoodsId(goodsBaseVoById.goodsID);
						list.AddRange(produceSeriesByGoodsId);
					}
					else if (!list.Contains(goodsBaseVoById.series) && goodsBaseVoById.series > 0)
					{
						list.Add(goodsBaseVoById.series);
					}
				}
			}
		}
		return list;
	}

	public static int GetAdvancedTypeByGoodsID(int goodsID)
	{
		if (mGoodsAdvancedTypeDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		value = _GetAdvancedTypeByGoodsID(goodsID);
		mGoodsAdvancedTypeDic.Add(goodsID, value);
		return value;
	}

	private static int _GetAdvancedTypeByGoodsID(int goodsID)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return 0;
		}
		Dictionary<int, IGoodsBaseVo> goodsBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBySeries(goodsBaseVoById.series);
		if (goodsBySeries == null)
		{
			return goodsBaseVoById.type;
		}
		foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
		{
			if (item.Value.type != 1)
			{
				return item.Value.type;
			}
		}
		return goodsBaseVoById.type;
	}

	public static bool CheckActivityResIsReady(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo.activityType == 5)
		{
			return MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.activityGoodsIcon);
		}
		if (goodsBaseVo.activityType == 6)
		{
			return MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.activityGoodsIcon);
		}
		if (goodsBaseVo.activityType == 7)
		{
			return MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.activityGoodsIcon);
		}
		if (goodsBaseVo.activityType == 8)
		{
			return MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.activityGoodsIcon);
		}
		return true;
	}

	public static List<int> InsertToList(List<int> sourceList, BaseData2VO insertInfo)
	{
		if (insertInfo == null)
		{
			return sourceList;
		}
		if (sourceList.Count == 0)
		{
			for (int i = 0; i < insertInfo.num; i++)
			{
				sourceList.Add(insertInfo.id);
			}
		}
		else if (insertInfo.num != 0)
		{
			List<int> list = new List<int>();
			int num = sourceList.Count / insertInfo.num;
			if (num >= 1)
			{
				for (int j = 0; j < insertInfo.num; j++)
				{
					int start = num * j;
					int end = num * (j + 1);
					if (j == insertInfo.num - 1)
					{
						end = sourceList.Count;
					}
					int randomByInitialValue = GetRandomByInitialValue(start, end);
					list.Add(randomByInitialValue);
				}
				for (int num2 = list.Count - 1; num2 >= 0; num2--)
				{
					sourceList.Insert(list[num2], insertInfo.id);
				}
			}
			else
			{
				for (int k = 0; k < insertInfo.num; k++)
				{
					int randomByInitialValue2 = GetRandomByInitialValue(0, sourceList.Count);
					sourceList.Insert(randomByInitialValue2, insertInfo.id);
				}
			}
		}
		return sourceList;
	}

	public static void OutPutList(int goodsId, int type, List<int> sourcelist)
	{
		string text = "";
		for (int i = 0; i < sourcelist.Count; i++)
		{
			text += string.Format("刮胺\ud9d3Ę", sourcelist[i]);
		}
		if (type != 1 && type != 2)
		{
			_ = 3;
		}
	}

	public static int GetRandomByInitialValue(int start, int end)
	{
		return new Random(GetRandomSeed()).Next(start, end);
	}

	public static int GetRandomValue(List<int> targets, List<int> _weights)
	{
		if (targets == null || _weights == null || targets.Count == 0 || _weights.Count == 0)
		{
			return -1;
		}
		Random random = new Random(GetRandomSeed());
		int maxValue = WeightsSum(_weights);
		int num = random.Next(1, maxValue);
		int num2 = 0;
		int result = -1;
		for (int i = 0; i < _weights.Count; i++)
		{
			num2 += _weights[i];
			if (num2 >= num)
			{
				result = targets[i];
				break;
			}
		}
		return result;
	}

	public static int WeightsSum(List<int> weights)
	{
		int num = 0;
		for (int i = 0; i < weights.Count; i++)
		{
			num += weights[i];
		}
		return num;
	}

	public static int GetRandomSeed()
	{
		byte[] array = new byte[4];
		new RNGCryptoServiceProvider().GetBytes(array);
		return BitConverter.ToInt32(array, 0);
	}

	public static void PutinOrTakeoutBagGoods(GameGoodsVo gameGoodsVo, bool takeout)
	{
		if (gameGoodsVo == null)
		{
			return;
		}
		if (takeout)
		{
			Singleton<GameLevelManager>.Instance.ChangeChessboardOwnerGoodsNum(gameGoodsVo.goodsID, 1);
			if (gameGoodsVo.MakeMaterials != null && gameGoodsVo.MakeMaterials.Count > 0)
			{
				for (int i = 0; i < gameGoodsVo.MakeMaterials.Count; i++)
				{
					Singleton<GameLevelManager>.Instance.ChangeChessboardOwnerGoodsNum(gameGoodsVo.MakeMaterials[i].goodsID, 1);
				}
			}
			return;
		}
		Singleton<GameLevelManager>.Instance.ChangeChessboardOwnerGoodsNum(gameGoodsVo.goodsID, -1);
		if (gameGoodsVo.MakeMaterials != null && gameGoodsVo.MakeMaterials.Count > 0)
		{
			for (int j = 0; j < gameGoodsVo.MakeMaterials.Count; j++)
			{
				Singleton<GameLevelManager>.Instance.ChangeChessboardOwnerGoodsNum(gameGoodsVo.MakeMaterials[j].goodsID, -1);
			}
		}
		PutInGoodsList.Add(gameGoodsVo);
	}

	public static void SetItemIconByID(Image icon, int itemID, ResLoader resLoader)
	{
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		if (!((Object)(object)icon == (Object)null))
		{
			IItemVO item = StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(itemID);
			if (item != null)
			{
				icon.sprite = resLoader.LoadSync<Sprite>(string.Format("숵뀊憤氶筇?\u008a厉뻰", item.icon));
				((Component)icon).transform.localScale = Vector3.one;
				((Graphic)icon).SetNativeSize();
			}
		}
	}

	public static void GoodsSellCollectAnim(Transform startTrans, int itemID, int num)
	{
	}

	public static void SetResidualValue(GameGoodsVo gameGoods)
	{
		if (gameGoods == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoods.goodsID);
		if (goodsBaseVoById != null && goodsBaseVoById.type == 28)
		{
			ICleverBoxConfigVo item = StaticDataBase<StaticDataManager>.GetInstance().CleverBoxConfigDic.GetItem(gameGoods.goodsID);
			if (item != null)
			{
				gameGoods.residualValue = item.value;
			}
		}
	}

	public static void ChangeUUIDCache(GameGoodsVo gameGoodsVo, int changeNum)
	{
		if (gameGoodsVo == null || gameGoodsVo.UUID.IsNullOrEmpty())
		{
			return;
		}
		if (changeNum > 0)
		{
			if (mUUIDCacheDic == null)
			{
				mUUIDCacheDic = new Dictionary<string, int>();
			}
			if (!mUUIDCacheDic.ContainsKey(gameGoodsVo.UUID))
			{
				mUUIDCacheDic.Add(gameGoodsVo.UUID, 1);
			}
		}
		else if (mUUIDCacheDic != null && mUUIDCacheDic.Count != 0 && mUUIDCacheDic.ContainsKey(gameGoodsVo.UUID))
		{
			mUUIDCacheDic.Remove(gameGoodsVo.UUID);
		}
	}

	public static string GetGoodsUUID(int goodsID, int hashCode)
	{
		string text = string.Format("类04끟}ﱣ哕", goodsID, hashCode);
		if (mUUIDCacheDic == null)
		{
			mUUIDCacheDic = new Dictionary<string, int>();
		}
		if (mUUIDCacheDic.ContainsKey(text))
		{
			string text2;
			do
			{
				text2 = string.Format("숵뀊綤笶筏cú叹\u1a62අ", goodsID, hashCode, mUUIDincrement);
				mUUIDincrement++;
			}
			while (mUUIDCacheDic.ContainsKey(text2));
			text = text2;
		}
		return text;
	}

	public static void ChangeGeneratorUUIDToDisk(GameGoodsVo gameGoodsVo, int changeNum)
	{
		if (gameGoodsVo == null || gameGoodsVo.UUID.IsNullOrEmpty())
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById != null && goodsBaseVoById.activityType <= 0 && !IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState) && (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type)))
		{
			if (changeNum > 0)
			{
				ObjectManager.GetInstance().gameLevelModel.AddGeneratorUUID(gameGoodsVo.UUID);
			}
			else
			{
				ObjectManager.GetInstance().gameLevelModel.RemoveGeneratorUUID(gameGoodsVo.UUID);
			}
		}
	}

	public static List<int> GetAutoConversionID(int materialID)
	{
		List<int> list = new List<int>();
		List<IGoodsAutoConversionVO> list2 = StaticDataBase<StaticDataManager>.GetInstance().GoodsAutoConversionList.list;
		if (list2 == null || list2.Count == 0)
		{
			return list;
		}
		for (int i = 0; i < list2.Count; i++)
		{
			List<BaseData2VO> materials = list2[i].GetMaterials();
			if (materials == null || materials.Count == 0)
			{
				continue;
			}
			for (int j = 0; j < materials.Count; j++)
			{
				if (materials[j].id == materialID)
				{
					list.Add(list2[i].goodsID);
				}
			}
		}
		return list;
	}

	public static List<IGoodsAutoConversionVO> GetAutoConversionVoByID(int goodsID)
	{
		if (mAutoConversionVoDic == null)
		{
			mAutoConversionVoDic = new Dictionary<int, List<IGoodsAutoConversionVO>>();
			List<IGoodsAutoConversionVO> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsAutoConversionList.list;
			List<int> list2 = null;
			for (int i = 0; i < list.Count; i++)
			{
				if (!mAutoConversionVoDic.ContainsKey(list[i].goodsID))
				{
					mAutoConversionVoDic.Add(list[i].goodsID, new List<IGoodsAutoConversionVO>());
				}
				mAutoConversionVoDic[list[i].goodsID].Add(list[i]);
				list2 = list[i].GetMaterialIDs();
				for (int j = 0; j < list2.Count; j++)
				{
					if (!mAutoConversionVoDic.ContainsKey(list2[j]))
					{
						mAutoConversionVoDic.Add(list2[j], new List<IGoodsAutoConversionVO>());
					}
					mAutoConversionVoDic[list2[j]].Add(list[i]);
				}
			}
		}
		List<IGoodsAutoConversionVO> value = null;
		mAutoConversionVoDic.TryGetValue(goodsID, out value);
		return value;
	}

	public static List<IGoodsAutoConversionVO> GetAutoConversionVos(int goodsID)
	{
		if (mAutoConversionVoListDic == null)
		{
			mAutoConversionVoListDic = new Dictionary<int, List<IGoodsAutoConversionVO>>();
			List<IGoodsAutoConversionVO> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsAutoConversionList.list;
			for (int i = 0; i < list.Count; i++)
			{
				if (!mAutoConversionVoListDic.ContainsKey(list[i].goodsID))
				{
					mAutoConversionVoListDic.Add(list[i].goodsID, new List<IGoodsAutoConversionVO>());
				}
				mAutoConversionVoListDic[list[i].goodsID].Add(list[i]);
			}
		}
		List<IGoodsAutoConversionVO> value = null;
		mAutoConversionVoListDic.TryGetValue(goodsID, out value);
		return value;
	}

	public static void GameGoodsAnalytic(GameGoodsVo gameGoodsVo, int goodsType, int action)
	{
		if (gameGoodsVo != null)
		{
			if (action == 1)
			{
				gameGoodsVo.SpeedupTotalTime = 0;
				gameGoodsVo.AdTotalTimes = 0;
				gameGoodsVo.DiamondTotalNum = 0;
				gameGoodsVo.CardTotalNum = 0;
				gameGoodsVo.DoneType = "刞炟\ud9dcő";
			}
			switch (goodsType)
			{
			case 1:
				InstrumentAnalytics(action, gameGoodsVo);
				break;
			case 30:
				LimitedProduceAnalytics(action, gameGoodsVo);
				break;
			default:
				ProduceAnalytics(action, gameGoodsVo);
				break;
			}
			if (action == 2)
			{
				gameGoodsVo.SpeedupTotalTime = 0;
				gameGoodsVo.AdTotalTimes = 0;
				gameGoodsVo.DiamondTotalNum = 0;
				gameGoodsVo.CardTotalNum = 0;
				gameGoodsVo.DoneType = "刞炟\ud9dcő";
			}
		}
	}

	public static void InstrumentAnalytics(int action, GameGoodsVo goodsVo)
	{
		if (goodsVo == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsVo.goodsID);
		if (goodsBaseVoById != null)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			if (action == 1)
			{
				dictionary.Add("숉끥澸渊杀;Â叁", "北橴ā诉饴");
			}
			else
			{
				dictionary.Add("숉끥澸渊杀;Â叁", "刟熇\ud9ccő");
			}
			dictionary.Add("숄끥犰甅杇&Î反恭e4끴a䜻㣌", goodsVo.goodsID);
			dictionary.Add("숄끥犰甅杇&Î反숞끟禷瀟浫&ê叩뻹", goodsBaseVoById.series);
			dictionary.Add("숏끥炫攐杗;Æ叅刚汇\ud9dbŐ", goodsVo.MakingGoodsID);
			dictionary.Add("숏끥炫攐杗;Æ叅숟끥斷爠獙0\u009a厙", 1);
			int makingTimeByGameGoods = Singleton<GameLevelManager>.Instance.GetMakingTimeByGameGoods(goodsVo);
			dictionary.Add("숏끥炫攐杗;Æ叅녳婟㨆\0逕\ud96f", makingTimeByGameGoods);
			dictionary.Add("숚끥撪甛村7\u0096厕숅끥沭弆灀3¶厵刞炟\ud9dcő", goodsVo.SpeedupTotalTime);
			dictionary.Add("숄끥掬欅杘=\u0092厑숚끎憠搛彑\r\u008a厉녟季☰\0逤\ud97f", goodsVo.AdTotalTimes);
			dictionary.Add("숄끥掬欅杘=\u0092厑숚끎枠攛彑\r¢厡癭_4끯w䌾仜", goodsVo.DiamondTotalNum);
			dictionary.Add("숄끥掬欅杘=\u0092厑숚끎掠愛彑\r\u0092厑숉끞溆琊牛'¾厽", goodsVo.CardTotalNum);
			if (action == 2)
			{
				dictionary.Add("숅끥徽理杚7\u0082厁ꃦû赴", goodsVo.DoneType);
			}
			dictionary.Add("숞끥璪弟杕 Ö叕믫ë赴", goodsVo.CookingType);
			ObjectManager.GetInstance().gameLevelModel.AddMachineMakingEvent(dictionary);
		}
	}

	public static void LimitedProduceAnalytics(int action, GameGoodsVo goodsVo, int speedupTime = 0, int speedupDiamond = 0)
	{
		if (goodsVo == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsVo.goodsID);
		if (goodsBaseVoById != null)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			switch (action)
			{
			case 1:
				dictionary.Add("숉끥澸渊杀;Â叁", "北橴ā诉饴");
				break;
			case 2:
				dictionary.Add("숉끥澸渊杀;Â叁", "刟熇\ud9ccő");
				break;
			default:
				dictionary.Add("숉끥澸渊杀;Â叁", "敳p4끥f혧㷘");
				break;
			}
			dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsBaseVoById.goodsID);
			dictionary.Add("숏끥斪猐杆;\u009a厙蛥\u009f赴", goodsBaseVoById.series);
			dictionary.Add("숅끥玾弆杛6Ò发匨橥ā讕蹬", goodsBaseVoById.level);
			if (speedupTime > 0)
			{
				dictionary.Add("숚끥撪甛村7\u0096厕녰婟㨆\0逕\ud96f", speedupTime);
			}
			if (speedupDiamond > 0)
			{
				dictionary.Add("숚끥撪甛村7\u0096厕숃끥澽渄灕?Â叁뻸", speedupDiamond);
			}
			dictionary.Add("숚끥撪甛村7\u0096厕녰䕟⨆\0逕\ud95a", goodsVo.DoneType);
			ObjectManager.GetInstance().gameLevelModel.AddGeneratorSpeedEvent(dictionary);
		}
	}

	public static void ProduceAnalytics(int action, GameGoodsVo goodsVo, int speedupTime = 0, int speedupDiamond = 0, GameGoodsVo speedupGoods = null)
	{
		if (goodsVo == null && speedupGoods == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVo = null;
		if (goodsVo != null)
		{
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsVo.goodsID);
		}
		IGoodsBaseVo goodsBaseVo2 = null;
		if (speedupGoods != null)
		{
			goodsBaseVo2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(speedupGoods.goodsID);
		}
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		switch (action)
		{
		case 1:
			dictionary.Add("숉끥澸渊杀;Â叁", "北橴ā诉饴");
			break;
		case 2:
			dictionary.Add("숉끥澸渊杀;Â叁", "刟熇\ud9ccő");
			break;
		default:
			dictionary.Add("숉끥澸渊杀;Â叁", "敳p4끥f혧㷘");
			break;
		}
		if (goodsBaseVo2 != null)
		{
			if (goodsBaseVo2.type == 24)
			{
				if (goodsBaseVo != null)
				{
					dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsBaseVo.goodsID);
					dictionary.Add("숏끥斪猐杆;\u009a厙蛥\u009f赴", goodsBaseVo.series);
					dictionary.Add("숅끥玾弆杛6Ò发匨橥ā讕蹬", goodsBaseVo.level);
				}
				if (speedupTime > 0)
				{
					dictionary.Add("숚끥撪甛村7\u0096厕녰婟㨆\0逕\ud96f", speedupTime);
				}
				if (speedupDiamond > 0)
				{
					dictionary.Add("숚끥撪甛村7\u0096厕숃끥澽渄灕?Â叁뻸", speedupDiamond);
				}
				dictionary.Add("숚끥撪甛村7\u0096厕숅끥玾弆灛6Ò发漻䉼", goodsBaseVo2.goodsID);
				dictionary.Add("숚끥撪甛村7\u0096厕녰䕟⨆\0逕\ud95a", "删狳\ud9d8ń");
				ObjectManager.GetInstance().gameLevelModel.AddGeneratorSpeedEvent(dictionary);
				return;
			}
			IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(goodsBaseVo2.goodsID);
			if (goodsCollectVoById != null && goodsCollectVoById.itemId == 1005)
			{
				if (goodsCollectVoById.amount > 0)
				{
					dictionary.Add("숚끥撪甛村7\u0096厕녰婟㨆\0逕\ud96f", goodsCollectVoById.amount);
				}
				if (speedupDiamond > 0)
				{
					dictionary.Add("숚끥撪甛村7\u0096厕숃끥澽渄灕?Â叁뻸", speedupDiamond);
				}
				dictionary.Add("숚끥撪甛村7\u0096厕숅끥玾弆灛6Ò发漻䉼", goodsBaseVo2.goodsID);
				dictionary.Add("숚끥撪甛村7\u0096厕녰䕟⨆\0逕\ud95a", "删狳\ud9d8ń");
				ObjectManager.GetInstance().gameLevelModel.AddGeneratorSpeedEvent(dictionary);
			}
		}
		else if (goodsBaseVo != null && IGoodsBaseVo.IsCreator(goodsBaseVo.type))
		{
			dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsBaseVo.goodsID);
			dictionary.Add("숏끥斪猐杆;\u009a厙蛥\u009f赴", goodsBaseVo.series);
			dictionary.Add("숅끥玾弆杛6Ò发匨橥ā讕蹬", goodsBaseVo.level);
			if (speedupTime > 0)
			{
				dictionary.Add("숚끥撪甛村7\u0096厕녰婟㨆\0逕\ud96f", speedupTime);
			}
			if (speedupDiamond > 0)
			{
				dictionary.Add("숚끥撪甛村7\u0096厕숃끥澽渄灕?Â叁뻸", speedupDiamond);
			}
			dictionary.Add("숚끥撪甛村7\u0096厕녰䕟⨆\0逕\ud95a", goodsVo.DoneType);
			ObjectManager.GetInstance().gameLevelModel.AddGeneratorSpeedEvent(dictionary);
		}
	}

	public static void MapGoodsAnalytics(int goodsID, int num, int action, int fromEvent = 0)
	{
		switch (action)
		{
		case 1:
			OnEventChessBoardGoods("뻕\u00af赴", goodsID, num, fromEvent);
			break;
		case 2:
			OnEventChessBoardGoods("곦÷赴", goodsID, num, 2);
			break;
		case 3:
			OnEventChessBoardGoods("곦÷赴", goodsID, num, 1);
			break;
		}
	}

	public static void GoodsDetailsAnalytic(int goodsID, bool order = false)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return;
		}
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		if (order)
		{
			if (goodsBaseVoById.productionType == 1)
			{
				dictionary.Add("숉끥澸渊杀;Â叁", "숏끈掽漐潆\r\u0092厑匫橫ā讹酧");
			}
			else
			{
				dictionary.Add("숉끥澸渊杀;Â叁", "숏끈枽漐潆\r¢厡뛘«赴");
			}
		}
		else
		{
			switch (goodsBaseVoById.type)
			{
			case 1:
			case 3:
				dictionary.Add("숉끥澸渊杀;Â叁", "숋끟玭弌摝>Ò发匣橯ā讑靳");
				break;
			case 7:
			case 8:
			case 12:
			case 13:
				dictionary.Add("숉끥澸渊杀;Â叁", "숋끟玭弌摝>Ò发숞끔涪攟楆'º厹显䦌");
				break;
			case 2:
			case 4:
			case 5:
			case 6:
			case 11:
			case 30:
				dictionary.Add("숉끥澸渊杀;Â叁", "숋끟徭朌摝>\u0082厁수끔澼爙敕&Â叁");
				break;
			case 9:
			case 10:
			case 14:
			case 15:
			case 16:
			case 17:
			case 23:
			case 24:
				dictionary.Add("숉끥澸渊杀;Â叁", "숋끟徭漌摝>\u0082厁匐橨ā诉鵳");
				break;
			default:
				dictionary.Add("숉끥澸渊杀;Â叁", "숋끟徭漌摝>\u0082厁匐橨ā诉鵳");
				break;
			}
		}
		dictionary.Add("刚汇\ud9cfŐ", goodsID);
		dictionary.Add("湧_4끩o䘷䛛", 1);
		AnalyticInit.OnEvent("숋끥播攌杄\r\u0096厕匐橡ā讱酳", dictionary);
	}

	public static void InterfaceSwitchAnalytic(string action, string from, string method)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		dictionary.Add("녧屟™\0逝\ud979", from);
		dictionary.Add("숝끥措栞杝&\u0092厑楟m4끴j쌽䇌", method);
		AnalyticInit.OnEvent("숄끥犰昅杀7Î反숵끙榼琶慇%ª厩由㱰", dictionary);
	}

	public static void CookingRevocationAnalytic(int goodsID, int cost)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsID);
		dictionary.Add("숅끥徺搆杇&\u0082厁녩孡㰴\0途\ud96f", cost);
		AnalyticInit.OnEvent("숅끥榺渆杛9ª厩숏끥澫爐杇&Â叁뻹", dictionary);
	}

	public static void GoodsRevocationAnalytic(int goodsID, int cost)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsID);
		dictionary.Add("숅끥徺搆杇&\u0082厁녩孡㰴\0途\ud96f", cost);
		AnalyticInit.OnEvent("숅끥玾弆杛6Ò发灲e4끴q夢䣍", dictionary);
	}

	public static void RestrictedGoodsAnalytic(int goodsID, int count, int eventFrom)
	{
		if (goodsID < 600001 || goodsID > 600010)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById != null)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			string value = "匫橴ā讕遲";
			switch (eventFrom)
			{
			case 58:
				value = "숵끥炮愶摙\rÆ叅由㱳";
				break;
			case 62:
			case 63:
				value = "숂끥溺弃摕;¾厽刔暿\ud9d8ş";
				break;
			case 57:
				value = "녤幟⌈\0逞\ud97c";
				break;
			case 64:
				value = "숚끥循猛摝<\u0082厁刖棻\ud9ddņ";
				break;
			case 65:
				value = "숵끛榠渶灇\"ª厩";
				break;
			case 66:
				value = "숵끛榠渶灇\"ª厩녟剳⌄\0逢\ud974";
				break;
			}
			dictionary.Add("숏끥憾挐杀\r\u008a厉删犟\ud9dcŚ", value);
			dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsID);
			dictionary.Add("숅끥玾弆杛6Ò发匧橯ā讹赴", count);
			dictionary.Add("숅끥玾弆杛6Ò发숃끟徫椄獑!\u0082厁뻸", goodsBaseVoById.series);
			AnalyticInit.OnEvent("숅끥玾弆杛6Ò发녳塯℄\0逕\ud96d", dictionary);
		}
	}

	public static void RemoveGeneratorAnalytic(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo != null && (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type)))
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary["숅끥玾弆杛6Ò发漻䉼"] = goodsBaseVo.goodsID;
			AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕憫椶瑗>\u008a厉뻱", dictionary);
		}
	}

	public static void MachinePutinAnalytic(string action)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		AnalyticInit.OnEvent("숅끥璺椆杛9Ö叕搤䮋", dictionary);
	}

	public static void GameLevelSortAnalytic(string action)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add(action, 1);
		AnalyticInit.OnEvent("숉끥澴爊杫!Â叁扴_4끯c툢㫌", dictionary);
	}

	public static void GoodsRecoverHintAnalytic(string action, int goodsID)
	{
		Dictionary<string, object> dataDic = new Dictionary<string, object>
		{
			["숞끃循渟獑?\u0082厁룦\u008f赴"] = "숏끥皽愐杆;Þ叝숏끓溯昐瑷=¾厽냮ó赴",
			["숃끙徭渄慛<\u0082厁룦\u008f赴"] = action,
			["숏끘徳椐潗&\u0082厁뻸"] = goodsID
		};
		AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dataDic);
	}

	public static void CheckGameGoodsLost(bool isEnter = true)
	{
		CheckOrderLostGoodsAnalytic(isEnter);
	}

	private static void CheckOrderLostGoodsAnalytic(bool isEnter)
	{
		List<Dictionary<string, object>> list = new List<Dictionary<string, object>>();
		List<int> mainTemporarySeries = GetMainTemporarySeries(ObjectManager.GetInstance().gameLevelModel.GetTemporaryItems());
		List<SingleDynamicOrder> orders = ObjectManager.GetInstance().gameOrdersModel.GetOrders2(onlyShowingOrder: true);
		for (int i = 0; i < orders.Count; i++)
		{
			if (orders[i] == null || orders[i].mainOrderID > 0)
			{
				continue;
			}
			List<int> lostSerieses = GetLostSerieses(orders[i].MatGoodsIDs());
			lostSerieses = RemoveLostSeries(mainTemporarySeries, lostSerieses);
			if (lostSerieses.Count > 0)
			{
				Dictionary<string, object> dictionary = new Dictionary<string, object>();
				dictionary["숉끥澸渊杀;Â叁"] = "숄끛溰攅浘;¾厽";
				dictionary["숅끥玾弆杛6Ò发漻䉼"] = lostSerieses.ToJson((Formatting)0);
				dictionary["숓끥撽攔杛 \u0096厕숏끥憫甐片&\u008a厉刟熿\ud9daŀ"] = orders[i].restaurantID;
				dictionary["숓끥撽攔杛 \u0096厕癲_4끯w쐾仌"] = orders[i].pLvWave;
				dictionary["숓끥撽攔杛 \u0096厕숟끥斷爠牙0\u009a厙"] = orders[i].inWaveOrderIndex;
				if (isEnter)
				{
					dictionary["숄끥犼弅杀7Î反祯r4끥z\udf3b凜"] = "匡橮ā讕豲";
				}
				else
				{
					dictionary["숄끥犼弅杀7Î反祯r4끥z\udf3b凜"] = "刚泛\ud9cdŀ";
				}
				list.Add(dictionary);
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
			dictionary2.Add("숏끥犾愐杚7Î反숵끕玫琶瑘=Ò发医橤ā译饡", list.ToArray());
			AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕玫琶瑘=Ò发", dictionary2);
		}
	}

	private static List<int> GetLostSerieses(List<int> goodsIDs)
	{
		List<int> list = new List<int>();
		if (goodsIDs == null)
		{
			return list;
		}
		for (int i = 0; i < goodsIDs.Count; i++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsMakingTime(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsIDs[i])) > 0)
			{
				continue;
			}
			List<int> generatorSeriesByGoodsId = Singleton<GameLevelManager>.Instance.GetGeneratorSeriesByGoodsId(goodsIDs[i]);
			for (int j = 0; j < generatorSeriesByGoodsId.Count; j++)
			{
				if (Singleton<GameLevelManager>.Instance.GetMaxLvGoodsBySeries(generatorSeriesByGoodsId[j], 1) == null && !list.Contains(generatorSeriesByGoodsId[j]))
				{
					list.Add(generatorSeriesByGoodsId[j]);
				}
			}
			List<int> instrumentSeriesByGoodsId = Singleton<GameLevelManager>.Instance.GetInstrumentSeriesByGoodsId(goodsIDs[i]);
			for (int k = 0; k < instrumentSeriesByGoodsId.Count; k++)
			{
				if (Singleton<GameLevelManager>.Instance.GetMaxLvGoodsBySeries(instrumentSeriesByGoodsId[k], 2) == null && !list.Contains(instrumentSeriesByGoodsId[k]))
				{
					list.Add(instrumentSeriesByGoodsId[k]);
				}
			}
		}
		list.DeleteRepeat();
		return list;
	}

	public static void GoodsReissueSuccessAnalytic(string action, int goodsID)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsID);
		AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕榫猶瑆7ª厩ꫦï赴", dictionary);
	}

	public static void MainLineLostGoodsAnalytic(List<GoodsLostAnalyticVo> _goods)
	{
		if (_goods != null && _goods.Count > 0)
		{
			List<Dictionary<string, object>> list = new List<Dictionary<string, object>>();
			for (int i = 0; i < _goods.Count; i++)
			{
				Dictionary<string, object> dictionary = new Dictionary<string, object>();
				dictionary["숅끥玾弆杛6Ò发漻䉼"] = _goods[i].id;
				dictionary["녧幟☄\0途\ud972"] = _goods[i].uuid;
				list.Add(dictionary);
			}
			if (list.Count > 0)
			{
				Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
				dictionary2.Add("숅끥玾弆杛6Ò发녩䝤㉐\0逢\ud969", list.ToArray());
				AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕玫琶瑘=Ò发숃끗榸渄彚>ª厩뻹", dictionary2);
			}
		}
	}

	private static List<int> GetMainTemporarySeries(Stack<int> temporaryItems)
	{
		List<int> list = new List<int>();
		foreach (int temporaryItem in temporaryItems)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(temporaryItem);
			if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type))
			{
				list.Add(goodsBaseVoById.series);
			}
		}
		list.DeleteRepeat();
		return list;
	}

	private static List<int> GetTemporarySeries(Stack<GameGoodsVo> temporaryItems)
	{
		List<int> list = new List<int>();
		foreach (GameGoodsVo temporaryItem in temporaryItems)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(temporaryItem.goodsID);
			if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type))
			{
				list.Add(goodsBaseVoById.series);
			}
		}
		list.DeleteRepeat();
		return list;
	}

	private static List<int> RemoveLostSeries(List<int> temporaryseries, List<int> missSeries)
	{
		if (temporaryseries == null || temporaryseries.Count == 0)
		{
			return missSeries;
		}
		if (missSeries.Count == 0)
		{
			return missSeries;
		}
		for (int i = 0; i < temporaryseries.Count; i++)
		{
			if (missSeries.Contains(temporaryseries[i]))
			{
				missSeries.Remove(temporaryseries[i]);
			}
		}
		return missSeries;
	}

	private static Dictionary<string, object> GetActivityLostAnaly(string activityName, int activityID, int startDayID, int orderID, List<int> missSeries, bool isEnter)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary["숉끥澸渊杀;Â叁"] = activityName;
		dictionary["숅끥玾弆杛6Ò发漻䉼"] = missSeries.ToJson((Formatting)0);
		dictionary["숉끥皸椊杀;Þ叝匐橹ā讥Ꝥ"] = activityID;
		dictionary["숚끥徶琛村<\u0082厁냦\u008f赴"] = startDayID;
		dictionary["수끥状弙材7Î反漻䉼"] = orderID;
		if (isEnter)
		{
			dictionary["숄끥犼弅杀7Î反祯r4끥z\udf3b凜"] = "匡橮ā讕豲";
		}
		else
		{
			dictionary["숄끥犼弅杀7Î反祯r4끥z\udf3b凜"] = "刚泛\ud9cdŀ";
		}
		return dictionary;
	}

	public static Dictionary<int, int> GetCurrentGoodsNum(Stack<GameGoodsVo> temporaryItems, Dictionary<int, GameGoodsVo> gameMap, Dictionary<int, GameGoodsVo> bagMap)
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (GameGoodsVo temporaryItem in temporaryItems)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(temporaryItem.goodsID);
			if (goodsBaseVoById != null && (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type)) && Singleton<GameLevelManager>.Instance.IsMaxLevelGoods(goodsBaseVoById.goodsID))
			{
				if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary.Add(goodsBaseVoById.goodsID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item in gameMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				continue;
			}
			GameGoodsVo value = item.Value;
			if (value == null || value.goodsID <= 0 || IGoodsBaseVo.IsDisabled(value.GoodsState))
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById2 != null && (IGoodsBaseVo.IsCreator(goodsBaseVoById2.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById2.type)) && Singleton<GameLevelManager>.Instance.IsMaxLevelGoods(goodsBaseVoById2.goodsID))
			{
				if (dictionary.ContainsKey(goodsBaseVoById2.goodsID))
				{
					dictionary[goodsBaseVoById2.goodsID]++;
				}
				else
				{
					dictionary.Add(goodsBaseVoById2.goodsID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in bagMap)
		{
			GameGoodsVo value = item2.Value;
			if (value == null || value.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById2 != null && (IGoodsBaseVo.IsCreator(goodsBaseVoById2.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById2.type)) && Singleton<GameLevelManager>.Instance.IsMaxLevelGoods(goodsBaseVoById2.goodsID))
			{
				if (dictionary.ContainsKey(goodsBaseVoById2.goodsID))
				{
					dictionary[goodsBaseVoById2.goodsID]++;
				}
				else
				{
					dictionary.Add(goodsBaseVoById2.goodsID, 1);
				}
			}
		}
		return dictionary;
	}

	public static void ActivityMissAnalytic(List<int> missingGoods, string eventName, int activityID, int startDayID, int passLv, Dictionary<int, int> recordedNum, Dictionary<int, int> currentGoodsNum, bool isEnter)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary["숉끥澸渊杀;Â叁"] = eventName;
		dictionary["숉끥皸椊杀;Þ叝匐橹ā讥Ꝥ"] = activityID;
		dictionary["숚끥徶琛村<\u0082厁냦\u008f赴"] = startDayID;
		dictionary["숋끥復氌杇!\u0082厁刖棣\ud9cdŘ"] = passLv;
		if (isEnter)
		{
			dictionary["숄끥犼弅杀7Î反祯r4끥z\udf3b凜"] = "匡橮ā讕豲";
		}
		else
		{
			dictionary["숄끥犼弅杀7Î反祯r4끥z\udf3b凜"] = "刚泛\ud9cdŀ";
		}
		List<Dictionary<string, object>> list = new List<Dictionary<string, object>>();
		for (int i = 0; i < missingGoods.Count; i++)
		{
			int value = 0;
			int value2 = 0;
			recordedNum.TryGetValue(missingGoods[i], out value);
			currentGoodsNum.TryGetValue(missingGoods[i], out value2);
			Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
			dictionary2["숅끥玾弆杛6Ò发漻䉼"] = missingGoods[i];
			dictionary2["숅끥玾弆杛6Ò发숄끕澬爅捀\rÂ叁녩噧㴼\0逜\ud972"] = value;
			dictionary2["숅끥玾弆杛6Ò发숄끕沬漅捀\r¶厵攡䲌"] = value - value2;
			list.Add(dictionary2);
		}
		dictionary["숏끥犾愐杚7Î反숵끕玫琶瑘=Ò发医橤ā译饡"] = list.ToArray();
		AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕玫琶瑘=Ò发刖梃\ud9f7Ń", dictionary);
	}

	public static void GeneratorCountAnalytic()
	{
		var (list, list2) = GetGeneratorInstrumentAnalyticData();
		if (list.Count > 0 || list2.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숏끥犾愐杚7Î反숵끕玫琶瑘;Ò发刖梃\ud9f7Ń", list.ToArray());
			dictionary.Add("숄끥犰甅杇&Î反숞끟榷猟浫>ª厩匐機ā讕陷", list2.ToArray());
			AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕疫渶瑗=Ú叙匐機ā讕陷", dictionary);
		}
	}

	public static (List<GeneratorAnalyticVo>, List<GeneratorAnalyticVo>) GetGeneratorInstrumentAnalyticData()
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		Dictionary<int, int> dictionary2 = new Dictionary<int, int>();
		foreach (int temporaryItem in ObjectManager.GetInstance().gameLevelModel.GetTemporaryItems())
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(temporaryItem);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || Singleton<GameLevelManager>.Instance.IsCreatorMaterial(goodsBaseVoById.goodsID))
			{
				if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary.Add(goodsBaseVoById.goodsID, 1);
				}
			}
			if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type) || Singleton<GameLevelManager>.Instance.IsInstrumentMaterial(goodsBaseVoById.goodsID))
			{
				if (dictionary2.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary2[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary2.Add(goodsBaseVoById.goodsID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item5 in Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false))
		{
			bool flag = Singleton<GameLevelManager>.Instance.GridUnlock(item5.Key);
			GameGoodsVo value = item5.Value;
			if (!flag || value == null || value.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById == null || IGoodsBaseVo.IsDisabled(value.GoodsState))
			{
				continue;
			}
			if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || Singleton<GameLevelManager>.Instance.IsCreatorMaterial(goodsBaseVoById.goodsID))
			{
				if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary.Add(goodsBaseVoById.goodsID, 1);
				}
			}
			if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type) || Singleton<GameLevelManager>.Instance.IsInstrumentMaterial(goodsBaseVoById.goodsID))
			{
				if (dictionary2.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary2[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary2.Add(goodsBaseVoById.goodsID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item6 in Singleton<GameLevelManager>.Instance.GetGameBagMap(copyData: false))
		{
			GameGoodsVo value = item6.Value;
			if (value == null || value.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || Singleton<GameLevelManager>.Instance.IsCreatorMaterial(goodsBaseVoById.goodsID))
			{
				if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary.Add(goodsBaseVoById.goodsID, 1);
				}
			}
			if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type) || Singleton<GameLevelManager>.Instance.IsInstrumentMaterial(goodsBaseVoById.goodsID))
			{
				if (dictionary2.ContainsKey(goodsBaseVoById.goodsID))
				{
					dictionary2[goodsBaseVoById.goodsID]++;
				}
				else
				{
					dictionary2.Add(goodsBaseVoById.goodsID, 1);
				}
			}
		}
		List<GeneratorAnalyticVo> list = new List<GeneratorAnalyticVo>();
		List<GeneratorAnalyticVo> list2 = new List<GeneratorAnalyticVo>();
		Dictionary<int, int> dictionary3 = new Dictionary<int, int>();
		foreach (KeyValuePair<int, int> item7 in dictionary)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item7.Key);
			if (goodsBaseVoById != null)
			{
				int num = TwoPower(goodsBaseVoById.level - 1) * item7.Value;
				if (dictionary3.ContainsKey(goodsBaseVoById.series))
				{
					dictionary3[goodsBaseVoById.series] += num;
				}
				else
				{
					dictionary3.Add(goodsBaseVoById.series, num);
				}
				GeneratorAnalyticVo item = new GeneratorAnalyticVo
				{
					g_series_id = goodsBaseVoById.series,
					g_level = goodsBaseVoById.level,
					g_count = item7.Value
				};
				list.Add(item);
			}
		}
		foreach (KeyValuePair<int, int> item8 in dictionary3)
		{
			GeneratorAnalyticVo item2 = new GeneratorAnalyticVo
			{
				g_series_id = item8.Key,
				g_level = 0,
				g_count = item8.Value
			};
			list.Add(item2);
		}
		dictionary3.Clear();
		foreach (KeyValuePair<int, int> item9 in dictionary2)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item9.Key);
			if (goodsBaseVoById != null)
			{
				int num2 = TwoPower(goodsBaseVoById.level - 1) * item9.Value;
				if (dictionary3.ContainsKey(goodsBaseVoById.series))
				{
					dictionary3[goodsBaseVoById.series] += num2;
				}
				else
				{
					dictionary3.Add(goodsBaseVoById.series, num2);
				}
				GeneratorAnalyticVo item3 = new GeneratorAnalyticVo
				{
					g_series_id = goodsBaseVoById.series,
					g_level = goodsBaseVoById.level,
					g_count = item9.Value
				};
				list2.Add(item3);
			}
		}
		foreach (KeyValuePair<int, int> item10 in dictionary3)
		{
			GeneratorAnalyticVo item4 = new GeneratorAnalyticVo
			{
				g_series_id = item10.Key,
				g_level = 0,
				g_count = item10.Value
			};
			list2.Add(item4);
		}
		return (list, list2);
	}

	public static void OnEventChessBoardGoods(string action, int goodsId, int count, int fromEvent)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById != null && Singleton<GameLevelManager>.Instance.IsAnalyticGoodsBySeries(goodsBaseVoById.goodsID))
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숉끥澸渊杀;Â叁", action);
			if (action == "뻕\u00af赴")
			{
				dictionary.Add("숏끥璾礐杀\rÖ叕搤䭽", ObjectManager.GetInstance().itemDataModel.GetItemGetType(fromEvent));
			}
			else
			{
				dictionary.Add("숙끥璬礚村\rÖ叕搤䭽", GetGoodsUseType(fromEvent));
			}
			dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsBaseVoById.goodsID);
			dictionary.Add("숅끥玾弆杛6Ò发녳剥㨊\0連\ud975", goodsBaseVoById.series);
			dictionary.Add("숏끥掾漐杀\r\u0092厑곕\u0083赴", count);
			if (mChessBoardGoodsEvents == null)
			{
				mChessBoardGoodsEvents = new List<Dictionary<string, object>>();
			}
			mChessBoardGoodsEvents.Add(dictionary);
			if (mChessBoardGoodsEvents.Count > 10)
			{
				SendChessBoardGoodsEvent();
			}
		}
	}

	public static void SendChessBoardGoodsEvent()
	{
		if (mChessBoardGoodsEvents != null && mChessBoardGoodsEvents.Count >= 1)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숅끥玾弆杛6Ò发別瞿\ud9ccŕ", mChessBoardGoodsEvents.ToArray());
			AnalyticInit.OnEvent("숅끥玾弆杛6Ò发룗ó赴", dictionary);
			mChessBoardGoodsEvents.Clear();
		}
	}

	private static string GetGoodsUseType(int fromEvent)
	{
		return fromEvent switch
		{
			1 => "숅끥玾弆捛6Ò发匩橥ā讝詥", 
			2 => "숅끥玾弆捛6Ò发곦÷赴", 
			_ => fromEvent.ToString(), 
		};
	}

	public static void OnEventBubbleGoods(string action, int goodsId, GameGoodsVo gameGoodsVo, int remaining = -1)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsId);
		if (remaining != -1)
		{
			dictionary.Add("숏끥徵挐杒&\u0082厁刟燯\ud9c7ŀ", remaining);
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById != null)
		{
			dictionary.Add("숅끥玾弆杛6Ò发匨橥ā讕蹬", goodsBaseVoById.level);
		}
		IGoodsPriceVo goodsPriceVoById = Singleton<GameLevelManager>.Instance.GetGoodsPriceVoById(goodsId);
		if (goodsPriceVoById != null)
		{
			dictionary.Add("숅끥玾弆杛6Ò发匔橲ā讍酥", goodsPriceVoById.buy);
		}
		if (gameGoodsVo != null)
		{
			dictionary.Add("숃끥澽甄杇1Â叁显䦌", gameGoodsVo.BubbleDiscount);
		}
		AnalyticInit.OnEvent("숟끥治攠杖0¶厵", dictionary);
	}

	public static bool CheckGoodsChangeState(Dictionary<int, GameGoodsVo> goodsDic)
	{
		bool result = false;
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in goodsDic)
		{
			if (item.Value == null || item.Value.goodsID <= 0)
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
			if (goodsBaseVo == null || !IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type) || item.Value.GoodsState != GameGoodsState.CoolDown)
			{
				continue;
			}
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(item.Value.goodsID);
			if (initiativeProduceById == null || item.Value.InitiativeCDStarTime <= 0)
			{
				continue;
			}
			int cDTime = initiativeProduceById.GetCDTime(item.Value.InitiativeCDIndex);
			ServerTimeManager.TimeProgress(item.Value.InitiativeCDStarTime, cDTime);
			if (ServerTimeManager.VerifyTime(item.Value.InitiativeCDStarTime, cDTime))
			{
				item.Value.InitiativeSurplusNumber = initiativeProduceById.capacity;
				item.Value.GoodsState = GameGoodsState.InitiativeProduce;
				item.Value.InitiativeCDIndex++;
				if (item.Value.InitiativeCDIndex >= initiativeProduceById.GetCDList().Count)
				{
					item.Value.InitiativeCDIndex = 0;
				}
				result = true;
			}
			else
			{
				item.Value.DoneType = "刞炟\ud9dcő";
			}
		}
		return result;
	}

	public static void GameLevelGoodsSort()
	{
		ObjectManager.GetInstance().gameLevelModel.GameLevelGoodsSort();
	}

	public static void BagGoodsSort()
	{
		ObjectManager.GetInstance().gameLevelModel.BagGoodsSort();
	}

	public static bool CanMustbeDropBubble(int dropGoodsId)
	{
		if (!MonoSingleton<ConditionManager>.Instance.IsLegal(6))
		{
			return false;
		}
		if (ObjectManager.GetInstance().itemDataModel.GetItemNum(1009) <= 0)
		{
			return false;
		}
		List<int> dropBubblePreGoodsList = Singleton<GameLevelManager>.Instance.GetDropBubblePreGoodsList();
		_ = GameConst.GAME_MODE;
		if (dropBubblePreGoodsList.Contains(dropGoodsId))
		{
			return true;
		}
		return false;
	}

	public static List<int> GetPreGoodsByID(int goodsID)
	{
		List<int> list = new List<int>();
		if (mGoodsPreGoodsDic == null)
		{
			mGoodsPreGoodsDic = new Dictionary<int, List<int>>();
		}
		if (mGoodsPreGoodsDic.ContainsKey(goodsID))
		{
			return mGoodsPreGoodsDic[goodsID];
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			IGoodsBaseVo goodsBaseVo = null;
			int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				if (goodsBaseVoById.level > 2)
				{
					goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level - 1);
					if (goodsBaseVo == null)
					{
						return list;
					}
					list.Add(goodsBaseVo.goodsID);
				}
				else
				{
					IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(derivativeSourceID);
					if (goodsBaseVoById2 == null)
					{
						return list;
					}
					if (goodsBaseVoById2.productionType == 1)
					{
						List<int> preGoodsByID = GetPreGoodsByID(goodsBaseVoById2.goodsID);
						list.AddRange(preGoodsByID);
					}
					else if (goodsBaseVoById.level == 1)
					{
						goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById2.series, goodsBaseVoById2.level - 1);
						if (goodsBaseVo == null)
						{
							return list;
						}
						list.Add(goodsBaseVo.goodsID);
					}
					else if (goodsBaseVoById.level == 2)
					{
						list.Add(goodsBaseVoById2.goodsID);
					}
					else
					{
						goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level - 1);
						if (goodsBaseVo == null)
						{
							return list;
						}
						list.Add(goodsBaseVo.goodsID);
					}
				}
			}
			else
			{
				int num = goodsBaseVoById.level - 1;
				if (num <= 1)
				{
					return list;
				}
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, num);
				if (goodsBaseVo == null)
				{
					return list;
				}
				list.Add(goodsBaseVo.goodsID);
			}
		}
		else
		{
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsBaseVoById.goodsID);
			if (goodsCookingVO == null)
			{
				return list;
			}
			List<int> list2 = new List<int>();
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int i = 0; i < materials.Count; i++)
			{
				List<int> preGoodsByID2 = GetPreGoodsByID(materials[i].id);
				list2.AddRange(preGoodsByID2);
			}
			list.AddRange(list2);
		}
		list.DeleteRepeat();
		if (!mGoodsPreGoodsDic.ContainsKey(goodsID))
		{
			mGoodsPreGoodsDic.Add(goodsID, list);
		}
		return list;
	}

	public static int TwoPower(int num)
	{
		return 1 << num;
	}

	public static int GetPowerOfTwo(int n)
	{
		if (n <= 0 || (n & (n - 1)) != 0)
		{
			return -1;
		}
		int num = 0;
		while (n > 1)
		{
			n >>= 1;
			num++;
		}
		return num;
	}

	public static int Abs(int num)
	{
		if (num <= 0)
		{
			return -num;
		}
		return num;
	}

	public static int GetBubbleDiscountCost(int cost, GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return cost;
		}
		if (gameGoodsVo.goodsID <= 0)
		{
			return cost;
		}
		if (gameGoodsVo.BubbleDiscount >= 100)
		{
			return cost;
		}
		cost = (int)Math.Floor((float)(cost * gameGoodsVo.BubbleDiscount) / 100f);
		if (cost < 1)
		{
			cost = 1;
		}
		return cost;
	}

	public static void DebugAddAllGeneratorAndMachine()
	{
		if (GameConst.GAME_MODE == GameConstMode.RELEASE)
		{
			return;
		}
		List<BaseData3VO> list = new List<BaseData3VO>();
		Dictionary<int, IGoodsBaseVo> maxGoodsConfigDic = Singleton<GameLevelManager>.Instance.MaxGoodsConfigDic;
		if (maxGoodsConfigDic == null)
		{
			return;
		}
		foreach (KeyValuePair<int, IGoodsBaseVo> item in maxGoodsConfigDic)
		{
			if (item.Value != null && item.Value.activityType <= 0 && item.Value.goodsID != 100065 && item.Value.goodsID != 100316 && (IGoodsBaseVo.IsCreator(item.Value.type) || IGoodsBaseVo.IsPermanentlyInstrument(item.Value.type)))
			{
				list.Add(new BaseData3VO
				{
					type = 2,
					id = item.Value.goodsID,
					num = 1
				});
			}
		}
		ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(list, notice: true, 0);
	}

	public static void DebugAddAllGeneratorAndMachineInBag()
	{
		if (GameConst.GAME_MODE == GameConstMode.RELEASE)
		{
			return;
		}
		List<BaseData3VO> list = new List<BaseData3VO>();
		Dictionary<int, IGoodsBaseVo> maxGoodsConfigDic = Singleton<GameLevelManager>.Instance.MaxGoodsConfigDic;
		if (maxGoodsConfigDic == null)
		{
			return;
		}
		foreach (KeyValuePair<int, IGoodsBaseVo> item in maxGoodsConfigDic)
		{
			if (item.Value != null && item.Value.activityType <= 0 && item.Value.goodsID != 100065 && item.Value.goodsID != 100316 && (IGoodsBaseVo.IsCreator(item.Value.type) || IGoodsBaseVo.IsPermanentlyInstrument(item.Value.type)))
			{
				list.Add(new BaseData3VO
				{
					type = 2,
					id = item.Value.goodsID,
					num = 1
				});
			}
		}
		ObjectManager.GetInstance().gameLevelModel.DebugAddAllGeneratorAndMachineInBag(list);
	}

	public static void LoadGameLevelCurve()
	{
		if (!((Object)(object)_gameLevelCurve == (Object)null))
		{
			return;
		}
		GameObject val = new ResLoader().LoadSync<GameObject>("숏끛皴攐䝸7Þ叝녬䍃℄\0逕\ud958");
		if (!((Object)(object)val == (Object)null))
		{
			_gameLevelCurve = val.GetComponent<GameLevelCurve>();
			if ((Object)(object)_gameLevelCurve != (Object)null)
			{
				_gameLevelCurve.Init();
			}
		}
	}

	public static void OpenGoodsChoiceView(int numType, GameLevelGrid goodsGrid)
	{
		if (numType >= 4)
		{
			GoodsChoiceQtrViewData data = new GoodsChoiceQtrViewData
			{
				ShowLevelGrid = goodsGrid
			};
			if (ABTestSwitchDefine.GoodsDetailsSwitch())
			{
				ViewManager.GetInstance().ShowView<GoodsChoiceQtrViewLogic_new>(data, ViewManager.ViewLayer.POP, animate: true);
			}
			else
			{
				ViewManager.GetInstance().ShowView<GoodsChoiceQtrViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
			}
		}
		else
		{
			GoodsChoiceViewData data2 = new GoodsChoiceViewData
			{
				ShowLevelGrid = goodsGrid
			};
			if (ABTestSwitchDefine.GoodsDetailsSwitch())
			{
				ViewManager.GetInstance().ShowView<GoodsChoiceView_newLogic>(data2, ViewManager.ViewLayer.POP, animate: true);
			}
			else
			{
				ViewManager.GetInstance().ShowView<GoodsChoiceViewLogic>(data2, ViewManager.ViewLayer.POP, animate: true);
			}
		}
	}

	public static List<int> GetDynamicDrop(int goodsID)
	{
		List<int> list = new List<int>();
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsID);
		if (initiativeProduceById != null)
		{
			List<int> produceList = initiativeProduceById.GetProduceList();
			List<int> list2 = new List<int>();
			for (int i = 0; i < produceList.Count; i++)
			{
				if (produceList[i] > 10000)
				{
					list.Add(produceList[i]);
					continue;
				}
				List<IDynamicBoxGoodsVo> dynamicListByType = Singleton<GameLevelManager>.Instance.GetDynamicListByType(produceList[i]);
				for (int j = 0; j < dynamicListByType.Count; j++)
				{
					if (Singleton<GameLevelManager>.Instance.DynamicBoxCanDrop(dynamicListByType[j].goodsID))
					{
						list.Add(dynamicListByType[j].goodsID);
					}
					if (dynamicListByType[j].exception > 0)
					{
						list2.Add(dynamicListByType[j].goodsID);
					}
				}
			}
			if (list.Count == 0)
			{
				list = list2;
			}
		}
		list.DeleteRepeat();
		return list;
	}

	public static List<int> GetCookingAllMaterials(int goodsId)
	{
		if (mCacheGoodsSplitDic == null)
		{
			mCacheGoodsSplitDic = new Dictionary<int, List<int>>();
		}
		if (mCacheGoodsSplitDic.TryGetValue(goodsId, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null || goodsBaseVoById.goodsID == 0)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				List<int> derivativeMaterials = GetDerivativeMaterials(goodsBaseVoById, derivativeSourceID);
				list.AddRange(derivativeMaterials);
			}
			else
			{
				List<int> normalMaterials = GetNormalMaterials(goodsBaseVoById);
				list.AddRange(normalMaterials);
			}
		}
		else
		{
			List<int> processedMaterials = GetProcessedMaterials(goodsBaseVoById);
			list.AddRange(processedMaterials);
		}
		list.DeleteRepeat();
		mCacheGoodsSplitDic.TryChangeValue(goodsBaseVoById.goodsID, list);
		return list;
	}

	private static List<int> GetNormalMaterials(IGoodsBaseVo goodsBaseVo)
	{
		if (mCacheGoodsSplitDic == null)
		{
			mCacheGoodsSplitDic = new Dictionary<int, List<int>>();
		}
		if (mCacheGoodsSplitDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return list;
		}
		if (!IsExcludeMaterial(goodsBaseVo))
		{
			list.Add(goodsBaseVo.goodsID);
		}
		list.DeleteRepeat();
		mCacheGoodsSplitDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	private static List<int> GetDerivativeMaterials(IGoodsBaseVo goodsBaseVo, int derivativeID)
	{
		if (mCacheGoodsSplitDic == null)
		{
			mCacheGoodsSplitDic = new Dictionary<int, List<int>>();
		}
		if (mCacheGoodsSplitDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return list;
		}
		if (!IsExcludeMaterial(goodsBaseVo))
		{
			list.Add(goodsBaseVo.goodsID);
		}
		List<int> cookingAllMaterials = GetCookingAllMaterials(derivativeID);
		list.AddRange(cookingAllMaterials);
		list.DeleteRepeat();
		mCacheGoodsSplitDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	private static List<int> GetProcessedMaterials(IGoodsBaseVo goodsBaseVo)
	{
		if (mCacheGoodsSplitDic == null)
		{
			mCacheGoodsSplitDic = new Dictionary<int, List<int>>();
		}
		if (mCacheGoodsSplitDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return list;
		}
		if (!IsExcludeMaterial(goodsBaseVo))
		{
			list.Add(goodsBaseVo.goodsID);
		}
		IGoodsBaseVo goodsBaseVo2 = ((goodsBaseVo.level <= 1) ? goodsBaseVo : Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, 1));
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsBaseVo2.goodsID);
		if (goodsCookingVO == null)
		{
			return list;
		}
		int num = -1;
		Dictionary<int, IGoodsBaseVo> goodsBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBySeries(goodsCookingVO.instrumentType);
		if (goodsBySeries != null && goodsBySeries.Count > 0)
		{
			foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
			{
				if (IGoodsBaseVo.IsDisposableMachine(item.Value.type))
				{
					num = item.Value.goodsID;
					break;
				}
			}
			if (num > 0)
			{
				List<int> cookingAllMaterials = GetCookingAllMaterials(num);
				list.AddRange(cookingAllMaterials);
			}
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		for (int i = 0; i < materials.Count; i++)
		{
			List<int> cookingAllMaterials2 = GetCookingAllMaterials(materials[i].id);
			list.AddRange(cookingAllMaterials2);
			list.Add(materials[i].id);
		}
		list.DeleteRepeat();
		mCacheGoodsSplitDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	private static bool IsExcludeMaterial(IGoodsBaseVo goodsBaseVo)
	{
		if (!IGoodsBaseVo.IsConversion(goodsBaseVo.type))
		{
			return IGoodsBaseVo.IsDisposableMachine(goodsBaseVo.type);
		}
		return true;
	}

	public static List<int> GetMaterialsIsProcessedList(int goodsId)
	{
		if (mProcessedMaterialDic == null)
		{
			mProcessedMaterialDic = new Dictionary<int, List<int>>();
		}
		if (mProcessedMaterialDic.TryGetValue(goodsId, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null || goodsBaseVoById.goodsID == 0)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(derivativeSourceID);
				if (goodsBaseVoById2 != null && goodsBaseVoById2.productionType == 1)
				{
					list.Add(derivativeSourceID);
				}
			}
		}
		else
		{
			List<int> collection = SplitCookingProcessedMaterials(goodsBaseVoById);
			list.AddRange(collection);
		}
		list.DeleteRepeat();
		mProcessedMaterialDic.TryChangeValue(goodsBaseVoById.goodsID, list);
		return list;
	}

	private static List<int> SplitCookingProcessedMaterials(IGoodsBaseVo goodsBaseVo)
	{
		if (mProcessedMaterialDic == null)
		{
			mProcessedMaterialDic = new Dictionary<int, List<int>>();
		}
		if (mProcessedMaterialDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return list;
		}
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsBaseVo.goodsID);
		if (goodsCookingVO == null)
		{
			return list;
		}
		list.Add(goodsBaseVo.goodsID);
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		for (int i = 0; i < materials.Count; i++)
		{
			List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(materials[i].id);
			list.AddRange(materialsIsProcessedList);
		}
		list.DeleteRepeat();
		mProcessedMaterialDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	public static GameGoodsAnalyticVo GetGameGoodsAnalyticVo(int gridID, GameGoodsVo goodsVo)
	{
		GameGoodsAnalyticVo result = null;
		if (goodsVo == null || goodsVo.goodsID <= 0)
		{
			return result;
		}
		result = new GameGoodsAnalyticVo();
		result.g_gridID = gridID;
		result.g_goodsID = goodsVo.goodsID;
		result.g_materials = new List<int>();
		if (goodsVo.MakeMaterials.Count > 0)
		{
			for (int i = 0; i < goodsVo.MakeMaterials.Count; i++)
			{
				result.g_materials.Add(goodsVo.MakeMaterials[i].goodsID);
			}
		}
		return result;
	}

	public static List<GameGoodsErrorAnalyticVo> SplitStringByLength(string splitStr, int length)
	{
		List<GameGoodsErrorAnalyticVo> list = new List<GameGoodsErrorAnalyticVo>();
		if (splitStr.IsNullOrEmpty())
		{
			return list;
		}
		int num = 0;
		for (int i = 0; i < splitStr.Length; i += length)
		{
			if (i + length <= splitStr.Length)
			{
				list.Add(new GameGoodsErrorAnalyticVo
				{
					id = num,
					v = splitStr.Substring(i, length)
				});
			}
			else
			{
				list.Add(new GameGoodsErrorAnalyticVo
				{
					id = num,
					v = splitStr.Substring(i)
				});
			}
			num++;
		}
		return list;
	}

	public static IMultiDropProduceVo GetMultiDropProduce(int goodsID, int sequenceID)
	{
		if (!ObjectManager.GetInstance().doubleConsumptionModel.IsOpenManytimesDrop())
		{
			return null;
		}
		ConsumptionRate currentDropRate = ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate();
		List<IMultiDropProduceVo> list = StaticDataBase<StaticDataManager>.GetInstance().MultiDropInitiativeProduceList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].goodsID == goodsID && list[i].IsInRate((int)currentDropRate))
			{
				return list[i];
			}
		}
		return null;
	}

	public static float GetMakingProgress(GameGoodsVo gameGoodsVo, int makingTime)
	{
		float num = 0f;
		if (gameGoodsVo == null)
		{
			return 0f;
		}
		if (gameGoodsVo.BuffValue <= 0 || gameGoodsVo.BuffStarTime <= 0)
		{
			num = (float)(ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime + gameGoodsVo.BuffTotalTime) / (float)makingTime;
		}
		else
		{
			num = ((gameGoodsVo.BuffEndTime <= 0) ? ((float)((int)(ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime + (ServerTimeManager.CurrentTime() - gameGoodsVo.BuffStarTime) * (gameGoodsVo.BuffValue - 1)) + gameGoodsVo.BuffTotalTime) / (float)makingTime) : ((float)(int)(ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime + gameGoodsVo.BuffTotalTime) / (float)makingTime));
		}
		if (num < 0f)
		{
			num = 0f;
		}
		if (num > 1f)
		{
			num = 1f;
		}
		return num;
	}

	public static int GetMakingRemainingTime(GameGoodsVo gameGoodsVo, int makingTime)
	{
		if (gameGoodsVo == null)
		{
			return 0;
		}
		int num = 0;
		if (gameGoodsVo.BuffValue > 0 && gameGoodsVo.BuffStarTime > 0)
		{
			if (gameGoodsVo.BuffEndTime > 0)
			{
				num = makingTime - (int)(ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime) - gameGoodsVo.BuffTotalTime;
			}
			else
			{
				int num2 = (int)(ServerTimeManager.CurrentTime() - gameGoodsVo.BuffStarTime) * (gameGoodsVo.BuffValue - 1) + gameGoodsVo.BuffTotalTime;
				num = makingTime - (int)(ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime) - num2;
			}
		}
		else
		{
			num = (int)(makingTime - (ServerTimeManager.CurrentTime() - gameGoodsVo.MakingStarTime) - gameGoodsVo.BuffTotalTime);
		}
		return Mathf.Clamp(num, 0, makingTime);
	}

	public static float GetPassiveCDProgress(GameGoodsVo gameGoodsVo, IGoodsProduceVo produceVo)
	{
		float num = 0f;
		if (gameGoodsVo == null || produceVo == null)
		{
			return 0f;
		}
		long num2 = ServerTimeManager.CurrentTime();
		long num3 = Math.Min(gameGoodsVo.BuffStarTime, num2);
		int num4 = Math.Max(0, gameGoodsVo.BuffTotalTime);
		int cDTime = produceVo.GetCDTime(gameGoodsVo.PassiveCDIndex);
		if (cDTime <= 0)
		{
			return 1f;
		}
		if (gameGoodsVo.BuffValue <= 0 || gameGoodsVo.BuffStarTime <= 0)
		{
			num = (float)(num2 - gameGoodsVo.PassiveCDStarTime + num4) / (float)cDTime;
		}
		else
		{
			num = ((gameGoodsVo.BuffEndTime <= 0) ? ((float)((int)(num2 - gameGoodsVo.PassiveCDStarTime + (num2 - num3) * (gameGoodsVo.BuffValue - 1)) + num4) / (float)cDTime) : ((float)(int)(num2 - gameGoodsVo.PassiveCDStarTime + num4) / (float)cDTime));
		}
		if (num < 0f)
		{
			num = 0f;
		}
		if (num > 1f)
		{
			num = 1f;
		}
		return num;
	}

	public static int GetPassiveCDInterval(GameGoodsVo gameGoodsVo, IGoodsProduceVo produceVo)
	{
		int num = 0;
		if (gameGoodsVo == null || produceVo == null)
		{
			return 0;
		}
		long num2 = ServerTimeManager.CurrentTime();
		long num3 = Math.Min(gameGoodsVo.BuffStarTime, num2);
		int num4 = Math.Max(0, gameGoodsVo.BuffTotalTime);
		if (gameGoodsVo.BuffValue > 0 && gameGoodsVo.BuffStarTime > 0)
		{
			if (gameGoodsVo.BuffEndTime > 0)
			{
				return (int)(num2 - gameGoodsVo.PassiveCDStarTime + num4);
			}
			return (int)(num2 - gameGoodsVo.PassiveCDStarTime + (num2 - num3) * (gameGoodsVo.BuffValue - 1)) + num4;
		}
		return (int)(num2 - gameGoodsVo.PassiveCDStarTime + num4);
	}

	public static void ShowMakingTip(int showType, int machineType, int goodsID, Transform nodeTrans, Action exitCall = null)
	{
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
			if (goodsBaseVoById != null)
			{
				MakeHintBubbleViewData data = new MakeHintBubbleViewData
				{
					showType = showType,
					machineType = machineType,
					iconName = goodsBaseVoById.icon,
					NodeTransform = nodeTrans,
					ExitCallback = exitCall,
					closeDelay = 3f
				};
				ViewManager.GetInstance().ShowView<MakeHintBubbleViewLogic>(data, ViewManager.ViewLayer.NORMAL, animate: true);
			}
		}
	}

	public static List<int> GetSplitGoodsByID(int goodsId)
	{
		if (mSplitCacheDic == null)
		{
			mSplitCacheDic = new Dictionary<int, List<int>>();
		}
		if (mSplitCacheDic.TryGetValue(goodsId, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (goodsBaseVoById.productionType == 0)
		{
			int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				List<int> derivativeGoodsSplits = GetDerivativeGoodsSplits(goodsBaseVoById, derivativeSourceID);
				list.AddRange(derivativeGoodsSplits);
			}
			else
			{
				List<int> normalGoodsSplits = GetNormalGoodsSplits(goodsBaseVoById);
				list.AddRange(normalGoodsSplits);
			}
		}
		else
		{
			List<int> processedGoodsSplits = GetProcessedGoodsSplits(goodsBaseVoById);
			list.AddRange(processedGoodsSplits);
		}
		mSplitCacheDic.TryChangeValue(goodsId, list);
		return list;
	}

	private static List<int> GetNormalGoodsSplits(IGoodsBaseVo goodsBaseVo)
	{
		if (mSplitCacheDic == null)
		{
			mSplitCacheDic = new Dictionary<int, List<int>>();
		}
		if (mSplitCacheDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null)
		{
			return list;
		}
		List<IGoodsBaseVo> goodsBaseVosBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBaseVosBySeries(goodsBaseVo.series);
		if (goodsBaseVosBySeries != null)
		{
			for (int i = 0; i < goodsBaseVosBySeries.Count; i++)
			{
				if (goodsBaseVosBySeries[i].level <= goodsBaseVo.level)
				{
					list.Add(goodsBaseVosBySeries[i].goodsID);
				}
			}
		}
		mSplitCacheDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	private static List<int> GetDerivativeGoodsSplits(IGoodsBaseVo goodsBaseVo, int derivativeID)
	{
		if (mSplitCacheDic == null)
		{
			mSplitCacheDic = new Dictionary<int, List<int>>();
		}
		if (mSplitCacheDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null)
		{
			return list;
		}
		List<IGoodsBaseVo> goodsBaseVosBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBaseVosBySeries(goodsBaseVo.series);
		if (goodsBaseVosBySeries != null && goodsBaseVosBySeries.Count > 0)
		{
			for (int i = 0; i < goodsBaseVosBySeries.Count; i++)
			{
				if (goodsBaseVosBySeries[i].level <= goodsBaseVo.level)
				{
					list.Add(goodsBaseVosBySeries[i].goodsID);
				}
			}
		}
		else
		{
			list.Add(goodsBaseVo.goodsID);
		}
		List<int> splitGoodsByID = GetSplitGoodsByID(derivativeID);
		list.AddRange(splitGoodsByID);
		mSplitCacheDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	private static List<int> GetProcessedGoodsSplits(IGoodsBaseVo goodsBaseVo)
	{
		if (mSplitCacheDic == null)
		{
			mSplitCacheDic = new Dictionary<int, List<int>>();
		}
		if (mSplitCacheDic.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return value;
		}
		List<int> list = new List<int>();
		if (goodsBaseVo == null)
		{
			return list;
		}
		List<IGoodsBaseVo> goodsBaseVosBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBaseVosBySeries(goodsBaseVo.series);
		if (goodsBaseVosBySeries != null && goodsBaseVosBySeries.Count > 0)
		{
			for (int i = 0; i < goodsBaseVosBySeries.Count; i++)
			{
				if (goodsBaseVosBySeries[i].level <= goodsBaseVo.level)
				{
					list.Add(goodsBaseVosBySeries[i].goodsID);
				}
			}
		}
		else
		{
			list.Add(goodsBaseVo.goodsID);
		}
		IGoodsBaseVo goodsBaseVo2 = ((goodsBaseVo.level <= 1) ? goodsBaseVo : Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, 1));
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsBaseVo2.goodsID);
		if (goodsCookingVO == null)
		{
			return list;
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		for (int j = 0; j < materials.Count; j++)
		{
			List<int> splitGoodsByID = GetSplitGoodsByID(materials[j].id);
			list.AddRange(splitGoodsByID);
		}
		mSplitCacheDic.TryChangeValue(goodsBaseVo.goodsID, list);
		return list;
	}

	public static void CheckUpdateOrderMatState(int goodsID)
	{
		if (OriginalLackCookingMats.ContainsKey(goodsID) || RaceWinnerOriginalMats.ContainsKey(goodsID) || ActivityOriginalMats.ContainsKey(goodsID))
		{
			UpdateOrderMatState();
			EventManager.GetInstance().DispatchEvent(202096);
		}
	}

	public static bool IsOrderLackMaterial(int goodsID)
	{
		if (OriginalLackCookingMats.ContainsKey(goodsID) || RaceWinnerOriginalMats.ContainsKey(goodsID) || ActivityOriginalMats.ContainsKey(goodsID))
		{
			return true;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		IGoodsBaseVo derivativeBaseVo = Singleton<GameLevelManager>.Instance.GetDerivativeBaseVo(goodsBaseVoById);
		if (derivativeBaseVo == null)
		{
			return false;
		}
		if (OriginalLackCookingMats.ContainsKey(derivativeBaseVo.goodsID) || RaceWinnerOriginalMats.ContainsKey(derivativeBaseVo.goodsID) || ActivityOriginalMats.ContainsKey(derivativeBaseVo.goodsID))
		{
			return true;
		}
		return false;
	}

	public static void CheckUpdateOrderView(int goodsID)
	{
		if (OriginalLackCookingMats.ContainsKey(goodsID) || RaceWinnerOriginalMats.ContainsKey(goodsID) || ActivityOriginalMats.ContainsKey(goodsID))
		{
			EventManager.GetInstance().DispatchEvent(100048, goodsID);
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById != null && IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
		{
			UpdateOrderMatState();
			EventManager.GetInstance().DispatchEvent(202096);
		}
		else if (IsOrderLackMaterial(goodsID))
		{
			UpdateOrderMatState();
			EventManager.GetInstance().DispatchEvent(202096);
		}
	}

	public static void CheckUpdateOrderMatByGoods(List<int> matGoods)
	{
		if (matGoods == null || matGoods.Count == 0)
		{
			return;
		}
		bool flag = false;
		for (int i = 0; i < matGoods.Count; i++)
		{
			if (IsOrderLackMaterial(matGoods[i]))
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			UpdateOrderMatState();
			EventManager.GetInstance().DispatchEvent(202096);
		}
	}

	public static bool IsShowShortcutTip(int goodsID)
	{
		if (ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings != null && ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings.Contains(goodsID))
		{
			return true;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings != null && ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings.Contains(goodsID))
		{
			return true;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_UnfinishedCookings(goodsID))
		{
			return true;
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> originalLackCookingMat in OriginalLackCookingMats)
		{
			if (originalLackCookingMat.Value == null || originalLackCookingMat.Value.Count == 0)
			{
				continue;
			}
			for (int i = 0; i < originalLackCookingMat.Value.Count; i++)
			{
				if (originalLackCookingMat.Value[i].makeGoodsID == goodsID)
				{
					return true;
				}
			}
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> raceWinnerOriginalMat in RaceWinnerOriginalMats)
		{
			if (raceWinnerOriginalMat.Value == null || raceWinnerOriginalMat.Value.Count == 0)
			{
				continue;
			}
			for (int j = 0; j < raceWinnerOriginalMat.Value.Count; j++)
			{
				if (raceWinnerOriginalMat.Value[j].makeGoodsID == goodsID)
				{
					return true;
				}
			}
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> activityOriginalMat in ActivityOriginalMats)
		{
			if (activityOriginalMat.Value == null || activityOriginalMat.Value.Count == 0)
			{
				continue;
			}
			for (int k = 0; k < activityOriginalMat.Value.Count; k++)
			{
				if (activityOriginalMat.Value[k].makeGoodsID == goodsID)
				{
					return true;
				}
			}
		}
		return false;
	}

	public static void UpdateOrderMatState()
	{
		LackCookingMats = new Dictionary<int, List<MakeMatInfo>>();
		foreach (KeyValuePair<int, List<MakeMatInfo>> originalLackCookingMat in OriginalLackCookingMats)
		{
			List<MakeMatInfo> list = DeepCopyOriginal(originalLackCookingMat.Value);
			if (LackCookingMats.ContainsKey(originalLackCookingMat.Key))
			{
				LackCookingMats[originalLackCookingMat.Key].AddRange(list);
			}
			else
			{
				LackCookingMats[originalLackCookingMat.Key] = list;
			}
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> raceWinnerOriginalMat in RaceWinnerOriginalMats)
		{
			List<MakeMatInfo> list2 = DeepCopyOriginal(raceWinnerOriginalMat.Value);
			if (LackCookingMats.ContainsKey(raceWinnerOriginalMat.Key))
			{
				LackCookingMats[raceWinnerOriginalMat.Key].AddRange(list2);
			}
			else
			{
				LackCookingMats[raceWinnerOriginalMat.Key] = list2;
			}
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> activityOriginalMat in ActivityOriginalMats)
		{
			List<MakeMatInfo> list3 = DeepCopyOriginal(activityOriginalMat.Value);
			if (LackCookingMats.ContainsKey(activityOriginalMat.Key))
			{
				LackCookingMats[activityOriginalMat.Key].AddRange(list3);
			}
			else
			{
				LackCookingMats[activityOriginalMat.Key] = list3;
			}
		}
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap();
		List<GameGoodsVo> list4 = new List<GameGoodsVo>();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			GameGoodsVo value = item.Value;
			if (value == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById == null || IGoodsBaseVo.IsDisabled(value.GoodsState))
			{
				continue;
			}
			if (IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
			{
				if (value.GoodsState != GameGoodsState.CanWork || value.MakeMaterials.Count == 0)
				{
					continue;
				}
				list4.Add(value);
				for (int i = 0; i < value.MakeMaterials.Count; i++)
				{
					IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.MakeMaterials[i].goodsID);
					if (goodsBaseVoById2 != null)
					{
						IGoodsBaseVo derivativeBaseVo = Singleton<GameLevelManager>.Instance.GetDerivativeBaseVo(goodsBaseVoById2);
						if (derivativeBaseVo != null && derivativeBaseVo.productionType == 1)
						{
							TryChangeDicValue(dictionary, goodsBaseVoById2.goodsID, 1);
						}
					}
				}
			}
			else
			{
				CheckDerivativeInfo(dictionary, value, goodsBaseVoById);
			}
		}
		_ = GameConst.GAME_MODE;
		FiltrateAlreadyGoods(dictionary);
		for (int num = list4.Count - 1; num >= 0; num--)
		{
			bool flag = false;
			GameGoodsVo value = list4[num];
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(value.goodsID);
			if (goodsInstrumentVO != null)
			{
				int num2 = goodsInstrumentVO.CheckMaterialsMakingGoods(value.MakeMaterials);
				if (num2 > 0)
				{
					foreach (KeyValuePair<int, List<MakeMatInfo>> lackCookingMat in LackCookingMats)
					{
						for (int num3 = lackCookingMat.Value.Count - 1; num3 >= 0; num3--)
						{
							if (num2 == lackCookingMat.Value[num3].makeGoodsID)
							{
								lackCookingMat.Value[num3].num--;
								if (lackCookingMat.Value[num3].num <= 0)
								{
									lackCookingMat.Value.RemoveAt(num3);
								}
								flag = true;
								break;
							}
						}
					}
					if (flag)
					{
						list4.RemoveAt(num);
					}
				}
			}
		}
		LackCookingMats = ClearCookingMats(LackCookingMats);
		for (int j = 0; j < list4.Count; j++)
		{
			GameGoodsVo value = list4[j];
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(value.goodsID);
			if (goodsInstrumentVO == null)
			{
				continue;
			}
			List<int> list5 = new List<int>();
			for (int k = 0; k < value.MakeMaterials.Count; k++)
			{
				list5.Add(value.MakeMaterials[k].goodsID);
			}
			List<int> makingIDsByMaterials = goodsInstrumentVO.GetMakingIDsByMaterials(list5);
			bool flag2 = false;
			for (int l = 0; l < value.MakeMaterials.Count; l++)
			{
				if (!LackCookingMats.TryGetValue(value.MakeMaterials[l].goodsID, out var value2))
				{
					continue;
				}
				for (int num4 = value2.Count - 1; num4 >= 0; num4--)
				{
					if (makingIDsByMaterials.Contains(value2[num4].makeGoodsID))
					{
						value2[num4].num--;
						flag2 = true;
					}
					if (value2[num4].num <= 0)
					{
						value2.RemoveAt(num4);
					}
					if (flag2)
					{
						break;
					}
				}
				if (value2.Count == 0)
				{
					LackCookingMats.Remove(value.MakeMaterials[l].goodsID);
				}
			}
		}
		LackCookingMats = ClearCookingMats(LackCookingMats);
		_ = GameConst.GAME_MODE;
	}

	private static void FiltrateAlreadyGoods(Dictionary<int, int> derivativeGoodsDic)
	{
		Dictionary<int, List<MakeMatInfo>> cookDerivative = GetCookDerivative();
		if (cookDerivative.Count <= 0)
		{
			return;
		}
		foreach (KeyValuePair<int, int> item in GetRealityLackDerivative(derivativeGoodsDic, cookDerivative))
		{
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(item.Key);
			if (goodsCookingVO == null)
			{
				continue;
			}
			if (LackCookingMats.TryGetValue(item.Key, out var value))
			{
				for (int i = 0; i < value.Count; i++)
				{
					value[i].num = item.Value;
				}
			}
			List<int> materialGoodsIDs = goodsCookingVO.GetMaterialGoodsIDs();
			for (int j = 0; j < materialGoodsIDs.Count; j++)
			{
				if (!LackCookingMats.TryGetValue(materialGoodsIDs[j], out var value2))
				{
					continue;
				}
				List<MakeMatInfo> list = new List<MakeMatInfo>();
				MakeMatInfo makeMatInfo = null;
				for (int k = 0; k < value2.Count; k++)
				{
					if (value2[k].makeGoodsID == item.Key)
					{
						value2[k].num = item.Value;
						makeMatInfo = value2[k];
					}
					else
					{
						list.Add(value2[k]);
					}
				}
				if (makeMatInfo != null)
				{
					list.Add(makeMatInfo);
				}
				LackCookingMats[materialGoodsIDs[j]] = list;
			}
		}
		LackCookingMats = ClearCookingMats(LackCookingMats);
	}

	private static Dictionary<int, int> GetRealityLackDerivative(Dictionary<int, int> derivativeGoodsDic, Dictionary<int, List<MakeMatInfo>> cookDerivativeDic)
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (KeyValuePair<int, int> item in OrderUsedCookingDic)
		{
			if (derivativeGoodsDic.ContainsKey(item.Key))
			{
				derivativeGoodsDic[item.Key] -= item.Value;
				if (derivativeGoodsDic[item.Key] <= 0)
				{
					derivativeGoodsDic.Remove(item.Key);
				}
			}
		}
		foreach (KeyValuePair<int, int> item2 in OrderUsedMatDic)
		{
			if (derivativeGoodsDic.ContainsKey(item2.Key))
			{
				derivativeGoodsDic[item2.Key] -= item2.Value;
				if (derivativeGoodsDic[item2.Key] <= 0)
				{
					derivativeGoodsDic.Remove(item2.Key);
				}
			}
		}
		Dictionary<int, Dictionary<int, int>> dictionary2 = new Dictionary<int, Dictionary<int, int>>();
		foreach (KeyValuePair<int, int> item3 in derivativeGoodsDic)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item3.Key);
			if (goodsBaseVoById != null && goodsBaseVoById.series > 0)
			{
				if (!dictionary2.ContainsKey(goodsBaseVoById.series))
				{
					dictionary2.Add(goodsBaseVoById.series, new Dictionary<int, int>());
				}
				if (dictionary2[goodsBaseVoById.series].ContainsKey(goodsBaseVoById.level))
				{
					dictionary2[goodsBaseVoById.series][goodsBaseVoById.level] += TwoPower(goodsBaseVoById.level - 1) * item3.Value;
				}
				else
				{
					dictionary2[goodsBaseVoById.series].Add(goodsBaseVoById.level, TwoPower(goodsBaseVoById.level - 1) * item3.Value);
				}
			}
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> item4 in cookDerivativeDic)
		{
			int num = 0;
			for (int i = 0; i < item4.Value.Count; i++)
			{
				MakeMatInfo makeMatInfo = item4.Value[i];
				if (makeMatInfo == null)
				{
					continue;
				}
				IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(makeMatInfo.makeGoodsID);
				if (goodsBaseVoById2 != null)
				{
					int num2 = RemoveSeriesLevelGoods(dictionary2, goodsBaseVoById2.series, goodsBaseVoById2.level, makeMatInfo.num);
					makeMatInfo.num -= num2;
					if (makeMatInfo.num > 0)
					{
						num += makeMatInfo.num;
					}
				}
			}
			dictionary[item4.Key] = GetDerivativeNum(item4.Key, num);
		}
		return dictionary;
	}

	private static Dictionary<int, List<MakeMatInfo>> GetCookDerivative()
	{
		Dictionary<int, List<MakeMatInfo>> dictionary = new Dictionary<int, List<MakeMatInfo>>();
		foreach (KeyValuePair<int, List<MakeMatInfo>> lackCookingMat in LackCookingMats)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(lackCookingMat.Key);
			if (goodsBaseVoById == null || goodsBaseVoById.type != 3 || goodsBaseVoById.productionType != 1)
			{
				continue;
			}
			for (int i = 0; i < lackCookingMat.Value.Count; i++)
			{
				if (!dictionary.ContainsKey(lackCookingMat.Key))
				{
					dictionary.Add(lackCookingMat.Key, new List<MakeMatInfo>());
				}
				dictionary[lackCookingMat.Key].Add(lackCookingMat.Value[i]);
			}
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> item in dictionary)
		{
			item.Value.Sort((MakeMatInfo info1, MakeMatInfo info2) =>
			{
				IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(info1.makeGoodsID);
				IGoodsBaseVo goodsBaseVoById3 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(info2.makeGoodsID);
				return (goodsBaseVoById2 != null && goodsBaseVoById3 != null) ? goodsBaseVoById2.level.CompareTo(goodsBaseVoById3.level) : 0;
			});
		}
		return dictionary;
	}

	private static void CheckDerivativeInfo(Dictionary<int, int> derivativeGoodsDic, GameGoodsVo tempGoodsVo, IGoodsBaseVo tempGoodsBaseVo)
	{
		if (tempGoodsVo == null || tempGoodsBaseVo == null)
		{
			return;
		}
		if (tempGoodsBaseVo.type == 3 && tempGoodsBaseVo.productionType == 1)
		{
			IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(tempGoodsBaseVo.goodsID);
			if (produceById == null)
			{
				return;
			}
			int pValue = produceById.capacity - tempGoodsVo.InitiativeUseTotal;
			List<int> produceList = produceById.GetProduceList();
			List<int> conversionList = produceById.GetConversionList();
			if (produceList != null && produceList.Count > 0)
			{
				for (int i = 0; i < produceList.Count; i++)
				{
					IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceList[i]);
					if (goodsBaseVoById != null)
					{
						TryChangeDicValue(derivativeGoodsDic, goodsBaseVoById.goodsID, pValue);
					}
				}
			}
			else
			{
				if (conversionList == null || conversionList.Count <= 0)
				{
					return;
				}
				for (int j = 0; j < conversionList.Count; j++)
				{
					IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(conversionList[j]);
					if (goodsBaseVoById != null)
					{
						TryChangeDicValue(derivativeGoodsDic, goodsBaseVoById.goodsID, pValue);
					}
				}
			}
		}
		else
		{
			IGoodsBaseVo derivativeBaseVo = Singleton<GameLevelManager>.Instance.GetDerivativeBaseVo(tempGoodsBaseVo);
			if (derivativeBaseVo != null && derivativeBaseVo.productionType == 1)
			{
				TryChangeDicValue(derivativeGoodsDic, tempGoodsBaseVo.goodsID, 1);
			}
		}
	}

	private static Dictionary<int, List<MakeMatInfo>> ClearCookingMats(Dictionary<int, List<MakeMatInfo>> lackCookingMats)
	{
		Dictionary<int, List<MakeMatInfo>> dictionary = new Dictionary<int, List<MakeMatInfo>>();
		foreach (KeyValuePair<int, List<MakeMatInfo>> lackCookingMat in lackCookingMats)
		{
			for (int i = 0; i < lackCookingMat.Value.Count; i++)
			{
				if (lackCookingMat.Value[i].num > 0)
				{
					if (!dictionary.ContainsKey(lackCookingMat.Key))
					{
						dictionary.Add(lackCookingMat.Key, new List<MakeMatInfo>());
					}
					dictionary[lackCookingMat.Key].Add(lackCookingMat.Value[i]);
				}
			}
		}
		return dictionary;
	}

	public static Dictionary<int, List<MakeMatInfo>> GetCookingMatInfoDic(int id, int num, int makeID, Dictionary<int, int> usedCookingDic, Dictionary<int, int> usedMatDic, bool isShow = true)
	{
		Dictionary<int, List<MakeMatInfo>> dictionary = new Dictionary<int, List<MakeMatInfo>>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
		if (goodsBaseVoById == null || goodsBaseVoById.goodsID == 0)
		{
			return dictionary;
		}
		if (goodsBaseVoById.productionType == 1)
		{
			Dictionary<int, List<MakeMatInfo>> processedMatInfos = GetProcessedMatInfos(goodsBaseVoById, num, makeID, usedCookingDic, usedMatDic, isShow);
			MergeMatDic(dictionary, processedMatInfos);
		}
		else
		{
			int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
			if (derivativeSourceID > 0)
			{
				Dictionary<int, List<MakeMatInfo>> derivativeMatInfos = GetDerivativeMatInfos(goodsBaseVoById, derivativeSourceID, num, makeID, usedCookingDic, usedMatDic);
				MergeMatDic(dictionary, derivativeMatInfos);
			}
			else
			{
				if (!dictionary.ContainsKey(id))
				{
					dictionary.Add(id, new List<MakeMatInfo>());
				}
				dictionary[id].Add(new MakeMatInfo
				{
					goodsID = id,
					num = num,
					makeGoodsID = makeID,
					isShow = isShow
				});
			}
		}
		return dictionary;
	}

	private static Dictionary<int, List<MakeMatInfo>> GetDerivativeMatInfos(IGoodsBaseVo goodsBaseVo, int derivativeID, int num, int makeID, Dictionary<int, int> usedCookingDic, Dictionary<int, int> usedMatDic)
	{
		Dictionary<int, List<MakeMatInfo>> dictionary = new Dictionary<int, List<MakeMatInfo>>();
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return dictionary;
		}
		if (!dictionary.ContainsKey(goodsBaseVo.goodsID))
		{
			dictionary.Add(goodsBaseVo.goodsID, new List<MakeMatInfo>());
		}
		dictionary[goodsBaseVo.goodsID].Add(new MakeMatInfo
		{
			goodsID = goodsBaseVo.goodsID,
			num = num,
			makeGoodsID = makeID
		});
		int num2 = Singleton<GameLevelManager>.Instance.GetGoodsNumById(goodsBaseVo.goodsID) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goodsBaseVo.goodsID);
		int num3 = Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsBaseVo.goodsID) + Singleton<GameLevelManager>.Instance.GetChessboardWorkingGoodsNum(goodsBaseVo.goodsID);
		int num4 = num2 - num3;
		int value = 0;
		usedCookingDic.TryGetValue(goodsBaseVo.goodsID, out value);
		int value2 = 0;
		usedMatDic.TryGetValue(goodsBaseVo.goodsID, out value2);
		int num5 = 0;
		if (num4 >= value)
		{
			num5 = num + value2 - num3;
			if (num5 > 0)
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num3 - value2);
			}
			else
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num);
			}
		}
		else
		{
			num5 = num + value + value2 - num4 - num3;
			if (num5 > 0)
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num3 + num4 - value - value2);
			}
			else
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num);
			}
		}
		if (num5 <= 0)
		{
			return dictionary;
		}
		int num6 = num5;
		IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(derivativeID);
		if (produceById != null)
		{
			int num7 = TwoPower(goodsBaseVo.level - 1) * num5;
			List<int> produceList = produceById.GetProduceList();
			List<int> conversionList = produceById.GetConversionList();
			if (produceList != null && produceList.Count > 0)
			{
				num6 = num7;
			}
			else if (conversionList != null && conversionList.Count > 0)
			{
				num6 = num7;
			}
		}
		Dictionary<int, List<MakeMatInfo>> cookingMatInfoDic = GetCookingMatInfoDic(derivativeID, num6, goodsBaseVo.goodsID, usedCookingDic, usedMatDic, isShow: false);
		MergeMatDic(dictionary, cookingMatInfoDic);
		return dictionary;
	}

	private static Dictionary<int, List<MakeMatInfo>> GetProcessedMatInfos(IGoodsBaseVo goodsBaseVo, int num, int makeID, Dictionary<int, int> usedCookingDic, Dictionary<int, int> usedMatDic, bool isShow = true)
	{
		Dictionary<int, List<MakeMatInfo>> dictionary = new Dictionary<int, List<MakeMatInfo>>();
		if (goodsBaseVo == null || goodsBaseVo.goodsID == 0)
		{
			return dictionary;
		}
		if (!dictionary.ContainsKey(goodsBaseVo.goodsID))
		{
			dictionary.Add(goodsBaseVo.goodsID, new List<MakeMatInfo>());
		}
		dictionary[goodsBaseVo.goodsID].Add(new MakeMatInfo
		{
			goodsID = goodsBaseVo.goodsID,
			num = num,
			makeGoodsID = makeID,
			isShow = isShow
		});
		int num2 = Singleton<GameLevelManager>.Instance.GetGoodsNumById(goodsBaseVo.goodsID) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goodsBaseVo.goodsID);
		int num3 = Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsBaseVo.goodsID) + Singleton<GameLevelManager>.Instance.GetChessboardWorkingGoodsNum(goodsBaseVo.goodsID);
		int num4 = num2 - num3;
		int value = 0;
		usedCookingDic.TryGetValue(goodsBaseVo.goodsID, out value);
		int value2 = 0;
		usedMatDic.TryGetValue(goodsBaseVo.goodsID, out value2);
		int num5 = 0;
		if (num4 >= value)
		{
			num5 = num + value2 - num3;
			if (num5 > 0)
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num3 - value2);
			}
			else
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num);
			}
		}
		else
		{
			num5 = num + value + value2 - num4 - num3;
			if (num5 > 0)
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num3 + num4 - value - value2);
			}
			else
			{
				TryChangeDicValue(usedMatDic, goodsBaseVo.goodsID, num);
			}
		}
		if (num5 <= 0)
		{
			return dictionary;
		}
		List<int> cookingMaterials = GetCookingMaterials(goodsBaseVo.goodsID);
		if (cookingMaterials != null && cookingMaterials.Count > 0)
		{
			for (int i = 0; i < cookingMaterials.Count; i++)
			{
				Dictionary<int, List<MakeMatInfo>> cookingMatInfoDic = GetCookingMatInfoDic(cookingMaterials[i], num5, goodsBaseVo.goodsID, usedCookingDic, usedMatDic);
				MergeMatDic(dictionary, cookingMatInfoDic);
			}
		}
		return dictionary;
	}

	private static int GetDerivativeNum(int derivativeId, int num)
	{
		IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(derivativeId);
		if (produceById != null)
		{
			List<int> produceList = produceById.GetProduceList();
			List<int> conversionList = produceById.GetConversionList();
			if (produceList != null && produceList.Count > 0)
			{
				return Mathf.CeilToInt((float)num / (float)produceById.capacity);
			}
			if (conversionList != null)
			{
				_ = conversionList.Count;
				_ = 0;
				return num;
			}
		}
		return num;
	}

	private static int RemoveSeriesLevelGoods(Dictionary<int, Dictionary<int, int>> seriesLevelGoods, int series, int targetLevel, int amount)
	{
		if (!seriesLevelGoods.TryGetValue(series, out var value) || amount <= 0)
		{
			return 0;
		}
		int num = 0;
		List<int> list = new List<int>();
		foreach (int key in value.Keys)
		{
			if (key <= targetLevel)
			{
				list.Add(key);
			}
		}
		list.Sort();
		foreach (int item in list)
		{
			if (num >= amount)
			{
				break;
			}
			int num2 = value[item];
			int num3 = Math.Min(amount - num, num2);
			if (num2 > num3)
			{
				value[item] = num2 - num3;
			}
			else
			{
				value.Remove(item);
			}
			num += num3;
		}
		if (value.Count == 0)
		{
			seriesLevelGoods.Remove(series);
		}
		return num;
	}

	private static List<MakeMatInfo> DeepCopyOriginal(List<MakeMatInfo> original)
	{
		List<MakeMatInfo> list = new List<MakeMatInfo>();
		if (original == null || original.Count == 0)
		{
			return list;
		}
		for (int i = 0; i < original.Count; i++)
		{
			list.Add(new MakeMatInfo
			{
				goodsID = original[i].goodsID,
				num = original[i].num,
				makeGoodsID = original[i].makeGoodsID,
				isShow = original[i].isShow
			});
		}
		return list;
	}

	public static void MergeMatDic(Dictionary<int, List<MakeMatInfo>> matInfos, Dictionary<int, List<MakeMatInfo>> secondaryMats)
	{
		if (secondaryMats == null)
		{
			return;
		}
		foreach (KeyValuePair<int, List<MakeMatInfo>> secondaryMat in secondaryMats)
		{
			if (!matInfos.ContainsKey(secondaryMat.Key))
			{
				matInfos.Add(secondaryMat.Key, secondaryMat.Value);
			}
			else
			{
				matInfos[secondaryMat.Key].AddRange(secondaryMat.Value);
			}
		}
	}

	public static List<int> GetCookingMaterials(int goodsId)
	{
		if (_cookingMaterialDic == null)
		{
			_cookingMaterialDic = new Dictionary<int, List<int>>();
		}
		if (_cookingMaterialDic.TryGetValue(goodsId, out var value))
		{
			return value;
		}
		List<int> list = null;
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsId);
		if (goodsCookingVO != null)
		{
			list = goodsCookingVO.GetMaterialGoodsIDs();
		}
		_cookingMaterialDic.TryChangeValue(goodsId, list);
		return list;
	}

	public static void TryChangeDicValue(Dictionary<int, int> pDic, int pKey, int pValue)
	{
		if (pDic == null)
		{
			pDic = new Dictionary<int, int>();
		}
		if (pValue > 0)
		{
			if (pDic.ContainsKey(pKey))
			{
				pDic[pKey] += pValue;
			}
			else
			{
				pDic.Add(pKey, pValue);
			}
		}
	}

	public static void TryChangeMaxLevel(Dictionary<int, int> pDic, int pKey, int pLevel)
	{
		if (pDic == null)
		{
			pDic = new Dictionary<int, int>();
		}
		if (pLevel <= 0)
		{
			return;
		}
		if (pDic.ContainsKey(pKey))
		{
			if (pLevel > pDic[pKey])
			{
				pDic[pKey] = pLevel;
			}
		}
		else
		{
			pDic.Add(pKey, pLevel);
		}
	}

	public static List<int> GetAllCanMakeGoodsIDs(GameGoodsVo machineGoodsVo)
	{
		List<int> result = new List<int>();
		if (IsOrderNeedGoods(machineGoodsVo.MakingGoodsID))
		{
			return result;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(machineGoodsVo.goodsID);
		if (goodsInstrumentVO == null)
		{
			return result;
		}
		List<int> makingIDsByMaterials = goodsInstrumentVO.GetMakingIDsByMaterials(machineGoodsVo.MakeMaterials);
		if (makingIDsByMaterials.Count == 0)
		{
			return result;
		}
		return GetAllMakeGoodsInOrder(makingIDsByMaterials);
	}

	public static int GetCanMakeGoodsID(GameGoodsVo machineGoodsVo)
	{
		if (IsOrderNeedGoods(machineGoodsVo.MakingGoodsID))
		{
			return -1;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(machineGoodsVo.goodsID);
		if (goodsInstrumentVO == null)
		{
			return -1;
		}
		List<int> makingIDsByMaterials = goodsInstrumentVO.GetMakingIDsByMaterials(machineGoodsVo.MakeMaterials);
		if (makingIDsByMaterials.Count == 0)
		{
			return -1;
		}
		return GetMakeGoodsInOrder(makingIDsByMaterials);
	}

	private static bool IsOrderNeedGoods(int makingGoodsID)
	{
		if (makingGoodsID <= 0)
		{
			return false;
		}
		if (ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings.Contains(makingGoodsID))
		{
			return true;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings.Contains(makingGoodsID))
		{
			return true;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_UnfinishedCookings(makingGoodsID))
		{
			return true;
		}
		if (LackCookingMats != null && LackCookingMats.TryGetValue(makingGoodsID, out var value))
		{
			for (int i = 0; i < value.Count; i++)
			{
				if (value[i] != null)
				{
					return true;
				}
			}
		}
		return false;
	}

	public static bool IsOrderLackGoods(int goodsID)
	{
		if (goodsID <= 0)
		{
			return false;
		}
		if (ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings != null && ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings.Contains(goodsID))
		{
			return true;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings != null && ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings.Contains(goodsID))
		{
			return true;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_UnfinishedCookings(goodsID))
		{
			return true;
		}
		return false;
	}

	private static int GetMakeGoodsInOrder(List<int> makeGoods)
	{
		if (makeGoods == null || makeGoods.Count == 0)
		{
			return -1;
		}
		int num = -1;
		num = GetFeverOrderMakeGoodsID(makeGoods);
		if (num == -1)
		{
			num = GetReturnOrderMakeGoodsID(makeGoods);
		}
		if (num == -1)
		{
			num = GetLimitTimeOrderMakeGoodsID(makeGoods);
		}
		if (num == -1)
		{
			num = GetRaceWinnerOrderMakeGoodsID(makeGoods);
		}
		if (num == -1)
		{
			num = GetOrderReturnBackMakeGoodsID(makeGoods);
		}
		if (num == -1)
		{
			num = GetMainOrderMakeGoodsID(makeGoods);
		}
		if (num == -1)
		{
			num = GetLastOrderMakeGoodsID(makeGoods);
		}
		return num;
	}

	private static List<int> GetAllMakeGoodsInOrder(List<int> makeGoods)
	{
		List<int> result = new List<int>();
		if (makeGoods == null || makeGoods.Count == 0)
		{
			return result;
		}
		CollectFeverOrderMakeGoodsIDs(makeGoods, result);
		CollectReturnOrderMakeGoodsIDs(makeGoods, result);
		CollectLimitTimeOrderMakeGoodsIDs(makeGoods, result);
		CollectRaceWinnerOrderMakeGoodsIDs(makeGoods, result);
		CollectMainOrderMakeGoodsIDs(makeGoods, result);
		CollectLastOrderMakeGoodsIDs(makeGoods, result);
		return result;
	}

	private static int GetFeverOrderMakeGoodsID(List<int> makeGoods)
	{
		int feverOrderIndex = -1;
		if (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff())
		{
			feverOrderIndex = ObjectManager.GetInstance().feverRelayV2Model.OrderIndex;
		}
		else if (ObjectManager.GetInstance().feverRelayModel.IsActiveBuff())
		{
			feverOrderIndex = ObjectManager.GetInstance().feverRelayModel.OrderIndex;
		}
		if (feverOrderIndex != -1)
		{
			SingleDynamicOrder singleDynamicOrder = ObjectManager.GetInstance().gameOrdersModel.ShowingOrders.Find((SingleDynamicOrder o) => o.orderIndex == feverOrderIndex);
			if (singleDynamicOrder == null)
			{
				return -1;
			}
			List<BaseData2VO> deliverables_StillNeed = singleDynamicOrder.GetDeliverables_StillNeed();
			if (deliverables_StillNeed == null || deliverables_StillNeed.Count == 0)
			{
				return -1;
			}
			for (int num = 0; num < deliverables_StillNeed.Count; num++)
			{
				if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(deliverables_StillNeed[num].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(deliverables_StillNeed[num].id) >= deliverables_StillNeed[num].num)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(deliverables_StillNeed[num].id);
				for (int num2 = 0; num2 < materialsIsProcessedList.Count; num2++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[num2]) && IsOrderNeedMaterial(materialsIsProcessedList[num2]))
					{
						return materialsIsProcessedList[num2];
					}
				}
			}
		}
		return -1;
	}

	private static int GetReturnOrderMakeGoodsID(List<int> makeGoods)
	{
		if (ObjectManager.GetInstance().returnUserOrderModel.IsInActivity())
		{
			SingleReturnUserOrder showingOrder = ObjectManager.GetInstance().returnUserOrderModel.ShowingOrder;
			if (showingOrder == null)
			{
				return -1;
			}
			List<BaseData2VO> goods = showingOrder.goods;
			if (goods == null || goods.Count == 0)
			{
				return -1;
			}
			for (int i = 0; i < goods.Count; i++)
			{
				if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(goods[i].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goods[i].id) >= goods[i].num)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goods[i].id);
				for (int j = 0; j < materialsIsProcessedList.Count; j++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]))
					{
						return materialsIsProcessedList[j];
					}
				}
			}
		}
		return -1;
	}

	private static int GetLimitTimeOrderMakeGoodsID(List<int> makeGoods)
	{
		if (ObjectManager.GetInstance().limitTimeOrderModel.IsInActivity())
		{
			SingleLimitTimeOrder showingOrder = ObjectManager.GetInstance().limitTimeOrderModel.ShowingOrder;
			if (showingOrder == null)
			{
				return -1;
			}
			List<BaseData2VO> goods = showingOrder.goods;
			if (goods == null || goods.Count == 0)
			{
				return -1;
			}
			for (int i = 0; i < goods.Count; i++)
			{
				if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(goods[i].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goods[i].id) >= goods[i].num)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goods[i].id);
				for (int j = 0; j < materialsIsProcessedList.Count; j++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]))
					{
						return materialsIsProcessedList[j];
					}
				}
			}
		}
		return -1;
	}

	private static int GetRaceWinnerOrderMakeGoodsID(List<int> makeGoods)
	{
		if (ObjectManager.GetInstance().raceWinnerModel.IsInActivity())
		{
			RaceWinnerSingleOrder showingOrder = ObjectManager.GetInstance().raceWinnerOrderModel.ShowingOrder;
			if (showingOrder == null)
			{
				return -1;
			}
			List<int> goodsIDs = showingOrder.goodsIDs;
			if (goodsIDs == null || goodsIDs.Count == 0)
			{
				return -1;
			}
			for (int i = 0; i < goodsIDs.Count; i++)
			{
				if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(goodsIDs[i]) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goodsIDs[i]) >= 1)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goodsIDs[i]);
				for (int j = 0; j < materialsIsProcessedList.Count; j++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]))
					{
						return materialsIsProcessedList[j];
					}
				}
			}
		}
		return -1;
	}

	private static int GetOrderReturnBackMakeGoodsID(List<int> makeGoods)
	{
		if (ObjectManager.GetInstance().orderReturnBackModel.CanShowOrderItem())
		{
			SingleDynamicOrder currentOrder = ObjectManager.GetInstance().orderReturnBackModel.GetCurrentOrder();
			if (currentOrder == null)
			{
				return -1;
			}
			List<BaseData2VO> deliverables_StillNeed = currentOrder.GetDeliverables_StillNeed();
			if (deliverables_StillNeed == null || deliverables_StillNeed.Count == 0)
			{
				return -1;
			}
			for (int i = 0; i < deliverables_StillNeed.Count; i++)
			{
				if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(deliverables_StillNeed[i].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(deliverables_StillNeed[i].id) >= deliverables_StillNeed[i].num)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(deliverables_StillNeed[i].id);
				for (int j = 0; j < materialsIsProcessedList.Count; j++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]))
					{
						return materialsIsProcessedList[j];
					}
				}
			}
		}
		return -1;
	}

	private static int GetMainOrderMakeGoodsID(List<int> makeGoods)
	{
		List<OrderMakeGoodData> list = new List<OrderMakeGoodData>();
		foreach (SingleDynamicOrder showingOrder in ObjectManager.GetInstance().gameOrdersModel.ShowingOrders)
		{
			List<BaseData2VO> deliverables_StillNeed = showingOrder.GetDeliverables_StillNeed();
			list.Add(new OrderMakeGoodData
			{
				Index = showingOrder.orderIndex,
				Progress = showingOrder.OrderProgress(),
				Goods = deliverables_StillNeed
			});
		}
		list.Sort((OrderMakeGoodData od1, OrderMakeGoodData od2) => (!Mathf.Approximately(od1.Progress, od2.Progress)) ? od2.Progress.CompareTo(od1.Progress) : 0);
		for (int num = 0; num < list.Count; num++)
		{
			List<BaseData2VO> goods = list[num].Goods;
			if (goods == null || goods.Count == 0)
			{
				continue;
			}
			for (int num2 = 0; num2 < goods.Count; num2++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goods[num2].id);
				if (goodsBaseVoById == null || goodsBaseVoById.productionType != 1 || Singleton<GameLevelManager>.Instance.GetGoodsNumById(goods[num2].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goods[num2].id) >= goods[num2].num)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goods[num2].id);
				for (int num3 = 0; num3 < materialsIsProcessedList.Count; num3++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[num3]) && IsOrderNeedMaterial(materialsIsProcessedList[num3]))
					{
						return materialsIsProcessedList[num3];
					}
				}
			}
		}
		return -1;
	}

	private static bool IsOrderNeedMaterial(int makeGoodsID)
	{
		if (LackCookingMats == null || LackCookingMats.Count == 0)
		{
			return false;
		}
		List<MakeMatInfo> list = null;
		foreach (KeyValuePair<int, List<MakeMatInfo>> lackCookingMat in LackCookingMats)
		{
			list = lackCookingMat.Value;
			if (list == null || list.Count == 0)
			{
				continue;
			}
			for (int i = 0; i < list.Count; i++)
			{
				MakeMatInfo makeMatInfo = list[i];
				if (makeMatInfo != null && makeGoodsID == makeMatInfo.makeGoodsID && makeMatInfo.isShow)
				{
					return true;
				}
			}
		}
		return false;
	}

	private static int GetLastOrderMakeGoodsID(List<int> makeGoods)
	{
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			GameGoodsVo value = item.Value;
			if (value == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById != null && !IGoodsBaseVo.IsDisabled(value.GoodsState) && IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) && value.GoodsState == GameGoodsState.CanWork && value.MakingGoodsID > 0)
			{
				if (dictionary.ContainsKey(value.MakingGoodsID))
				{
					dictionary[value.MakingGoodsID]++;
				}
				else
				{
					dictionary.Add(value.MakingGoodsID, 1);
				}
			}
		}
		int num = IsOrderLackCanHintGoods(RaceWinnerOriginalMats, makeGoods, dictionary);
		if (num == -1)
		{
			num = IsOrderLackCanHintGoods(ActivityOriginalMats, makeGoods, dictionary);
		}
		if (num == -1)
		{
			num = IsOrderLackCanHintGoods(OriginalLackCookingMats, makeGoods, dictionary);
		}
		return num;
	}

	private static int IsOrderLackCanHintGoods(Dictionary<int, List<MakeMatInfo>> lackMats, List<int> makeGoods, Dictionary<int, int> mapCanMakeGoods)
	{
		if (lackMats == null || lackMats.Count == 0)
		{
			return -1;
		}
		List<MakeMatInfo> list = null;
		foreach (KeyValuePair<int, List<MakeMatInfo>> lackMat in lackMats)
		{
			list = lackMat.Value;
			if (list == null || list.Count == 0)
			{
				continue;
			}
			for (int i = 0; i < list.Count; i++)
			{
				MakeMatInfo makeMatInfo = list[i];
				if (makeMatInfo != null && makeGoods.Contains(makeMatInfo.makeGoodsID) && makeMatInfo.isShow && (!mapCanMakeGoods.TryGetValue(makeMatInfo.makeGoodsID, out var value) || value < makeMatInfo.num))
				{
					return makeMatInfo.makeGoodsID;
				}
			}
		}
		return -1;
	}

	private static void CollectFeverOrderMakeGoodsIDs(List<int> makeGoods, List<int> result)
	{
		int feverOrderIndex = -1;
		if (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff())
		{
			feverOrderIndex = ObjectManager.GetInstance().feverRelayV2Model.OrderIndex;
		}
		else if (ObjectManager.GetInstance().feverRelayModel.IsActiveBuff())
		{
			feverOrderIndex = ObjectManager.GetInstance().feverRelayModel.OrderIndex;
		}
		if (feverOrderIndex == -1)
		{
			return;
		}
		SingleDynamicOrder singleDynamicOrder = ObjectManager.GetInstance().gameOrdersModel.ShowingOrders.Find((SingleDynamicOrder o) => o.orderIndex == feverOrderIndex);
		if (singleDynamicOrder == null)
		{
			return;
		}
		List<BaseData2VO> deliverables = singleDynamicOrder.GetDeliverables();
		if (deliverables == null || deliverables.Count == 0)
		{
			return;
		}
		for (int num = 0; num < deliverables.Count; num++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(deliverables[num].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(deliverables[num].id) >= deliverables[num].num)
			{
				continue;
			}
			List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(deliverables[num].id);
			for (int num2 = 0; num2 < materialsIsProcessedList.Count; num2++)
			{
				if (makeGoods.Contains(materialsIsProcessedList[num2]) && IsOrderNeedMaterial(materialsIsProcessedList[num2]) && !result.Contains(materialsIsProcessedList[num2]))
				{
					result.Add(materialsIsProcessedList[num2]);
				}
			}
		}
	}

	private static void CollectReturnOrderMakeGoodsIDs(List<int> makeGoods, List<int> result)
	{
		if (!ObjectManager.GetInstance().returnUserOrderModel.IsInActivity())
		{
			return;
		}
		SingleReturnUserOrder showingOrder = ObjectManager.GetInstance().returnUserOrderModel.ShowingOrder;
		if (showingOrder == null)
		{
			return;
		}
		List<BaseData2VO> goods = showingOrder.goods;
		if (goods == null || goods.Count == 0)
		{
			return;
		}
		for (int i = 0; i < goods.Count; i++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(goods[i].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goods[i].id) >= goods[i].num)
			{
				continue;
			}
			List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goods[i].id);
			for (int j = 0; j < materialsIsProcessedList.Count; j++)
			{
				if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]) && !result.Contains(materialsIsProcessedList[j]))
				{
					result.Add(materialsIsProcessedList[j]);
				}
			}
		}
	}

	private static void CollectLimitTimeOrderMakeGoodsIDs(List<int> makeGoods, List<int> result)
	{
		if (!ObjectManager.GetInstance().limitTimeOrderModel.IsInActivity())
		{
			return;
		}
		SingleLimitTimeOrder showingOrder = ObjectManager.GetInstance().limitTimeOrderModel.ShowingOrder;
		if (showingOrder == null)
		{
			return;
		}
		List<BaseData2VO> goods = showingOrder.goods;
		if (goods == null || goods.Count == 0)
		{
			return;
		}
		for (int i = 0; i < goods.Count; i++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(goods[i].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goods[i].id) >= goods[i].num)
			{
				continue;
			}
			List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goods[i].id);
			for (int j = 0; j < materialsIsProcessedList.Count; j++)
			{
				if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]) && !result.Contains(materialsIsProcessedList[j]))
				{
					result.Add(materialsIsProcessedList[j]);
				}
			}
		}
	}

	private static void CollectRaceWinnerOrderMakeGoodsIDs(List<int> makeGoods, List<int> result)
	{
		if (!ObjectManager.GetInstance().raceWinnerModel.IsInActivity())
		{
			return;
		}
		RaceWinnerSingleOrder showingOrder = ObjectManager.GetInstance().raceWinnerOrderModel.ShowingOrder;
		if (showingOrder == null)
		{
			return;
		}
		List<int> goodsIDs = showingOrder.goodsIDs;
		if (goodsIDs == null || goodsIDs.Count == 0)
		{
			return;
		}
		for (int i = 0; i < goodsIDs.Count; i++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(goodsIDs[i]) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goodsIDs[i]) >= 1)
			{
				continue;
			}
			List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goodsIDs[i]);
			for (int j = 0; j < materialsIsProcessedList.Count; j++)
			{
				if (makeGoods.Contains(materialsIsProcessedList[j]) && IsOrderNeedMaterial(materialsIsProcessedList[j]) && !result.Contains(materialsIsProcessedList[j]))
				{
					result.Add(materialsIsProcessedList[j]);
				}
			}
		}
	}

	private static void CollectMainOrderMakeGoodsIDs(List<int> makeGoods, List<int> result)
	{
		List<OrderMakeGoodData> list = new List<OrderMakeGoodData>();
		foreach (SingleDynamicOrder showingOrder in ObjectManager.GetInstance().gameOrdersModel.ShowingOrders)
		{
			List<BaseData2VO> deliverables = showingOrder.GetDeliverables();
			list.Add(new OrderMakeGoodData
			{
				Index = showingOrder.orderIndex,
				Progress = showingOrder.OrderProgress(),
				Goods = deliverables
			});
		}
		list.Sort((OrderMakeGoodData od1, OrderMakeGoodData od2) => (!Mathf.Approximately(od1.Progress, od2.Progress)) ? od2.Progress.CompareTo(od1.Progress) : 0);
		for (int num = 0; num < list.Count; num++)
		{
			List<BaseData2VO> goods = list[num].Goods;
			if (goods == null || goods.Count == 0)
			{
				continue;
			}
			for (int num2 = 0; num2 < goods.Count; num2++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goods[num2].id);
				if (goodsBaseVoById == null || goodsBaseVoById.productionType != 1 || Singleton<GameLevelManager>.Instance.GetGoodsNumById(goods[num2].id) + Singleton<GameLevelManager>.Instance.GetWorkingGoodsNum(goods[num2].id) >= goods[num2].num)
				{
					continue;
				}
				List<int> materialsIsProcessedList = GetMaterialsIsProcessedList(goods[num2].id);
				for (int num3 = 0; num3 < materialsIsProcessedList.Count; num3++)
				{
					if (makeGoods.Contains(materialsIsProcessedList[num3]) && IsOrderNeedMaterial(materialsIsProcessedList[num3]) && !result.Contains(materialsIsProcessedList[num3]))
					{
						result.Add(materialsIsProcessedList[num3]);
					}
				}
			}
		}
	}

	private static void CollectLastOrderMakeGoodsIDs(List<int> makeGoods, List<int> result)
	{
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			GameGoodsVo value = item.Value;
			if (value == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById != null && !IGoodsBaseVo.IsDisabled(value.GoodsState) && IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) && value.GoodsState == GameGoodsState.CanWork && value.MakingGoodsID > 0)
			{
				if (dictionary.ContainsKey(value.MakingGoodsID))
				{
					dictionary[value.MakingGoodsID]++;
				}
				else
				{
					dictionary.Add(value.MakingGoodsID, 1);
				}
			}
		}
		CollectOrderLackCanHintGoods(RaceWinnerOriginalMats, makeGoods, dictionary, result);
		CollectOrderLackCanHintGoods(ActivityOriginalMats, makeGoods, dictionary, result);
		CollectOrderLackCanHintGoods(OriginalLackCookingMats, makeGoods, dictionary, result);
	}

	private static void CollectOrderLackCanHintGoods(Dictionary<int, List<MakeMatInfo>> lackMats, List<int> makeGoods, Dictionary<int, int> mapCanMakeGoods, List<int> result)
	{
		if (lackMats == null || lackMats.Count == 0)
		{
			return;
		}
		List<MakeMatInfo> list = null;
		foreach (KeyValuePair<int, List<MakeMatInfo>> lackMat in lackMats)
		{
			list = lackMat.Value;
			if (list == null || list.Count == 0)
			{
				continue;
			}
			for (int i = 0; i < list.Count; i++)
			{
				MakeMatInfo makeMatInfo = list[i];
				if (makeMatInfo != null && makeGoods.Contains(makeMatInfo.makeGoodsID) && makeMatInfo.isShow && (!mapCanMakeGoods.TryGetValue(makeMatInfo.makeGoodsID, out var value) || value < makeMatInfo.num) && !result.Contains(makeMatInfo.makeGoodsID))
				{
					result.Add(makeMatInfo.makeGoodsID);
				}
			}
		}
	}

	public static void GetLevelMaterialVo(int goodsId, out MakingMaterialVo materialVo, out GameGoodsVo machineGoodsVo, out int gridID)
	{
		MakingMaterialVo makingMaterialVo = null;
		GameGoodsVo gameGoodsVo = null;
		int num = 0;
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetLevelMap())
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				continue;
			}
			GameGoodsVo value = item.Value;
			if (value == null || IGoodsBaseVo.IsDisabled(value.GoodsState))
			{
				continue;
			}
			if (goodsId == value.goodsID)
			{
				materialVo = Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(value);
				machineGoodsVo = null;
				gridID = item.Key;
				return;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById == null || !IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || value.GoodsState == GameGoodsState.Working || value.GoodsState == GameGoodsState.InitiativeProduce || value.MakeMaterials.Count <= 0)
			{
				continue;
			}
			for (int num2 = value.MakeMaterials.Count - 1; num2 >= 0; num2--)
			{
				if (goodsId == value.MakeMaterials[num2].goodsID && makingMaterialVo == null)
				{
					makingMaterialVo = value.MakeMaterials[num2];
					gameGoodsVo = value;
					num = item.Key;
				}
			}
		}
		if (makingMaterialVo != null)
		{
			materialVo = makingMaterialVo;
			machineGoodsVo = gameGoodsVo;
			gridID = num;
		}
		else
		{
			materialVo = null;
			machineGoodsVo = null;
			gridID = 0;
		}
	}

	public static void GetBagMaterialVo(int goodsId, out MakingMaterialVo materialVo, out GameGoodsVo machineGoodsVo)
	{
		MakingMaterialVo makingMaterialVo = null;
		GameGoodsVo gameGoodsVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetGameBagMap())
		{
			GameGoodsVo value = item.Value;
			if (value == null)
			{
				continue;
			}
			if (goodsId == value.goodsID)
			{
				materialVo = Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(value);
				machineGoodsVo = null;
				return;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
			if (goodsBaseVoById == null || !IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || value.GoodsState == GameGoodsState.Working || value.GoodsState == GameGoodsState.InitiativeProduce || value.MakeMaterials.Count <= 0)
			{
				continue;
			}
			for (int num = value.MakeMaterials.Count - 1; num >= 0; num--)
			{
				if (goodsId == value.MakeMaterials[num].goodsID && makingMaterialVo == null)
				{
					makingMaterialVo = value.MakeMaterials[num];
					gameGoodsVo = value;
				}
			}
		}
		if (makingMaterialVo != null)
		{
			materialVo = makingMaterialVo;
			machineGoodsVo = gameGoodsVo;
		}
		else
		{
			materialVo = null;
			machineGoodsVo = null;
		}
	}

	public static bool IsGoodsForCurrentOrder(int goodsId)
	{
		if (goodsId <= 0)
		{
			return false;
		}
		if (Singleton<GameLevelManager>.Instance == null)
		{
			return false;
		}
		if (ObjectManager.GetInstance() == null || ObjectManager.GetInstance().gameOrdersModel == null)
		{
			return false;
		}
		List<SingleDynamicOrder> showingOrders = ObjectManager.GetInstance().gameOrdersModel.ShowingOrders;
		if (showingOrders == null || showingOrders.Count <= 0)
		{
			return false;
		}
		for (int i = 0; i < showingOrders.Count; i++)
		{
			SingleDynamicOrder singleDynamicOrder = showingOrders[i];
			if (singleDynamicOrder == null)
			{
				continue;
			}
			List<BaseData2VO> deliverables = singleDynamicOrder.GetDeliverables();
			if (deliverables == null)
			{
				continue;
			}
			for (int j = 0; j < deliverables.Count; j++)
			{
				BaseData2VO baseData2VO = deliverables[j];
				if (baseData2VO == null)
				{
					continue;
				}
				if (baseData2VO.id == goodsId)
				{
					return true;
				}
				IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(baseData2VO.id);
				if (goodsCookingVO == null)
				{
					continue;
				}
				List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
				if (materials == null)
				{
					continue;
				}
				for (int k = 0; k < materials.Count; k++)
				{
					if (materials[k].id == goodsId)
					{
						return true;
					}
				}
			}
		}
		return false;
	}

	public static void GoodsDetailQuickOutAnalytic(string action, int finish, int success)
	{
		Dictionary<string, object> dataDic = new Dictionary<string, object>
		{
			["숞끃循渟獑?\u0082厁룦\u008f赴"] = "숅끥榺渆杛9ª厩숏끥榽氐杀3ª厩",
			["숃끙徭渄慛<\u0082厁룦\u008f赴"] = action,
			["숃끙徭瀄慛<\u0082厁숇끈溸甈愅\r¾厽뻱"] = finish,
			["숃끙徭瀄慛<\u0082厁숇끈溸甈愆\r¾厽뻱"] = success
		};
		AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dataDic);
	}

	public static GameObject CreateGameObjectSync(string resName, Transform parent)
	{
		GameObject objectSync = ObjectPoolManager.Instance.GetObjectSync(resName, parent);
		if ((Object)(object)objectSync != (Object)null)
		{
			((Object)objectSync).name = resName;
		}
		return objectSync;
	}

	public static GameObject CreateGameObjectAsync(string resName, Transform parent)
	{
		GameObject objectSync = ObjectPoolManager.Instance.GetObjectSync(resName, parent);
		if ((Object)(object)objectSync != (Object)null)
		{
			((Object)objectSync).name = resName;
		}
		return objectSync;
	}

	public static void RecycleGameObject(GameObject obj)
	{
		if ((Object)(object)obj != (Object)null)
		{
			ObjectPoolManager.Instance.RecycleObject(((Object)obj).name, obj);
		}
	}

	public static void RecycleGameObject(string resName)
	{
		ObjectPoolManager.Instance.RecycleObject(resName);
	}

	public static bool IsShowDerivativeHint(int derivativeID)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(derivativeID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (goodsBaseVoById.productionType == 1)
		{
			return false;
		}
		int num = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숃끟璫椄䑂3Ö叕숃끟䲑攄癚&6匵꿭\u00af赴").ToInt();
		if (goodsBaseVoById.level < num)
		{
			return false;
		}
		IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(derivativeID);
		if (produceById == null)
		{
			return false;
		}
		List<int> list = produceById.GetSingleRoundCreateConversionTotalCount()?.Keys?.ToList();
		if (list == null || list.Count == 0)
		{
			return false;
		}
		if (!GetGameLevelNeedGoodsNum.HasOrderRealNeedGoodsID_allLayer(list))
		{
			return true;
		}
		return false;
	}

	public static string GetCookingCompleteName(int completeType)
	{
		return completeType switch
		{
			1 => "숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹初澇\ud9cbŐ", 
			2 => "숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹뇕\u0087赴", 
			_ => null, 
		};
	}

	public static bool IsGoodsStackable(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
		{
			return false;
		}
		if (IGoodsBaseVo.IsCreator(goodsBaseVo.type))
		{
			return false;
		}
		if (IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type))
		{
			return false;
		}
		if (IGoodsBaseVo.IsConversion(goodsBaseVo.type))
		{
			return false;
		}
		if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, goodsBaseVo.level + 1) != null)
		{
			return false;
		}
		if (StaticDataBase<StaticDataManager>.GetInstance().LevelGoodsStackDic.GetItem(goodsBaseVo.goodsID) == null)
		{
			return false;
		}
		return true;
	}

	public static bool IsShowGoodsStackable(IGoodsBaseVo goodsBaseVo, GameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (!IsGoodsStackable(goodsBaseVo))
		{
			return gameGoodsVo.GoodsUses > 1;
		}
		return true;
	}

	public static void ShowGrayHintAnalytic(GameGoodsVo machine, int materialID)
	{
		if (!ABTestSwitchDefine.GetCookMarkSwitch() || machine == null || machine.MakeMaterials == null || machine.MakeMaterials.Count <= 0)
		{
			return;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(machine.goodsID);
		if (goodsInstrumentVO == null || !IsGrayHintByMaterials(goodsInstrumentVO, machine.MakeMaterials))
		{
			return;
		}
		if (machine.MakeMaterials.Count > 1)
		{
			List<MakingMaterialVo> list = new List<MakingMaterialVo>();
			bool flag = false;
			for (int i = 0; i < machine.MakeMaterials.Count; i++)
			{
				if (machine.MakeMaterials[i] != null)
				{
					if (!flag && machine.MakeMaterials[i].goodsID == materialID)
					{
						flag = true;
					}
					else
					{
						list.Add(machine.MakeMaterials[i]);
					}
				}
			}
			if (IsGrayHintByMaterials(goodsInstrumentVO, list))
			{
				return;
			}
		}
		Dictionary<string, object> dataDic = new Dictionary<string, object> { ["숞끃循渟獑?\u0082厁룦\u008f赴"] = "숁끕状欂䍹3Î反" };
		AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dataDic);
	}

	private static bool IsGrayHintByMaterials(IGoodsInstrumentVO instrumentVo, List<MakingMaterialVo> materials)
	{
		if (instrumentVo == null)
		{
			return false;
		}
		if (materials == null || materials.Count <= 0)
		{
			return false;
		}
		List<int> makingIDsByMaterials = instrumentVo.GetMakingIDsByMaterials(materials);
		if (makingIDsByMaterials == null || makingIDsByMaterials.Count <= 0)
		{
			return true;
		}
		for (int i = 0; i < makingIDsByMaterials.Count; i++)
		{
			if (IsOrderLackGoods(makingIDsByMaterials[i]) || IsOrderLackMaterial(makingIDsByMaterials[i]))
			{
				return false;
			}
		}
		return true;
	}

	public static void ClearOrderNeedLowLevelGoods()
	{
		mNeedLowLevelGoods.Clear();
		mOrderNeedLowLevelGoods.Clear();
		mOrderLowLevelCookGoods.Clear();
		mUseCookingGoodsDic.Clear();
		mConversionTotalNumDic.Clear();
		mConversionProduceNumDic.Clear();
		mOrderConversionDic.Clear();
		mOrderDerivativeDic.Clear();
		mOrderDerivativeMaxLevelDic.Clear();
		CurrentGeneratorID = 0;
	}

	private static int GetMaxDropGoodsLv(IGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return 0;
		}
		int value = 3;
		if (!mSeriesProduceMaxDic.TryGetValue(goodsBaseVo.series, out value))
		{
			int generatorProduceMaxLv = GetGeneratorProduceMaxLv(goodsBaseVo);
			mSeriesProduceMaxDic[goodsBaseVo.series] = generatorProduceMaxLv;
			value = generatorProduceMaxLv;
		}
		return ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() switch
		{
			ConsumptionRate.Double => 1 + value, 
			ConsumptionRate.Fourtimes => 2 + value, 
			ConsumptionRate.Eighttimes => 3 + value, 
			_ => 0, 
		};
	}

	private static int GetGeneratorProduceMaxLv(IGoodsBaseVo goodsBaseVo)
	{
		int result = 3;
		IGoodsBaseVo minGenerator = Singleton<GameLevelManager>.Instance.GetMinGenerator(goodsBaseVo);
		if (minGenerator == null)
		{
			return result;
		}
		minGenerator = Singleton<GameLevelManager>.Instance.GetMaxGoodsConfigBySeries(minGenerator.series);
		if (minGenerator == null)
		{
			return result;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(minGenerator.goodsID);
		if (initiativeProduceById == null)
		{
			return result;
		}
		result = 0;
		List<int> produceList = initiativeProduceById.GetProduceList();
		IGoodsBaseVo goodsBaseVo2 = null;
		for (int i = 0; i < produceList.Count; i++)
		{
			goodsBaseVo2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceList[i]);
			if (goodsBaseVo2 != null && goodsBaseVo2.series == goodsBaseVo.series && goodsBaseVo2.level > result)
			{
				result = goodsBaseVo2.level;
			}
		}
		return result;
	}

	public static void SetOrderNeedLowLevelGoods(int generatorID)
	{
		ClearOrderNeedLowLevelGoods();
		mChessboardMachines = new List<GameGoodsVo>();
		if (!ObjectManager.GetInstance().doubleConsumptionModel.IsOpenManytimesDrop())
		{
			return;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(generatorID);
		if (initiativeProduceById == null)
		{
			return;
		}
		CurrentGeneratorID = generatorID;
		IGoodsBaseVo goodsBaseVo = null;
		List<int> produceLowGoods = GetProduceLowGoods(initiativeProduceById);
		_ = GameConst.GAME_MODE;
		mChessboardMachines = GetChessboardMachines();
		Dictionary<int, float> lowLevelGoodsByOrder = GetLowLevelGoodsByOrder();
		_ = GameConst.GAME_MODE;
		CheckDerivativeInChessboard();
		_ = GameConst.GAME_MODE;
		Dictionary<int, float> lowConversionGoodsByOrder = GetLowConversionGoodsByOrder();
		_ = GameConst.GAME_MODE;
		foreach (KeyValuePair<int, float> item in lowConversionGoodsByOrder)
		{
			if (lowLevelGoodsByOrder.ContainsKey(item.Key))
			{
				lowLevelGoodsByOrder[item.Key] += item.Value;
			}
			else
			{
				lowLevelGoodsByOrder.Add(item.Key, item.Value);
			}
		}
		_ = GameConst.GAME_MODE;
		FilterLowLevelGoods(produceLowGoods, lowLevelGoodsByOrder);
		if (ABTestSwitchDefine.DynamicDropSwitch())
		{
			List<int> list = new List<int>();
			if (lowLevelGoodsByOrder != null && lowLevelGoodsByOrder.Count > 0)
			{
				foreach (KeyValuePair<int, float> item2 in lowLevelGoodsByOrder)
				{
					goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item2.Key);
					if (goodsBaseVo != null && goodsBaseVo.series > 0)
					{
						list.Add(goodsBaseVo.series);
					}
				}
			}
			List<int> list2 = new List<int>();
			List<int> list3 = new List<int>();
			for (int i = 0; i < produceLowGoods.Count; i++)
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceLowGoods[i]);
				if (goodsBaseVo != null && !list.Contains(goodsBaseVo.series))
				{
					list2.Add(goodsBaseVo.goodsID);
					list3.Add(goodsBaseVo.series);
				}
			}
			if (list2.Count > 0)
			{
				FilterLowLevelGoods_Chessboard(list2, list3);
			}
		}
		_ = GameConst.GAME_MODE;
	}

	private static List<int> GetProduceLowGoods(IGoodsProduceVo produceVo)
	{
		List<int> list = new List<int>();
		if (produceVo == null)
		{
			return list;
		}
		List<int> produceList = produceVo.GetProduceList();
		IGoodsBaseVo goodsBaseVo = null;
		for (int i = 0; i < produceList.Count; i++)
		{
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceList[i]);
			if (goodsBaseVo != null)
			{
				list.Add(goodsBaseVo.goodsID);
			}
		}
		return list;
	}

	private static void FilterLowLevelGoods(List<int> produceLowLevelGoods, Dictionary<int, float> orderLowLevelGoods)
	{
		mNeedLowLevelGoods = orderLowLevelGoods.Keys.ToList();
		if (!ABTestSwitchDefine.DynamicDropSwitch())
		{
			AddChessboardLowLevelGoods(orderLowLevelGoods);
		}
		_ = GameConst.GAME_MODE;
		for (int i = 0; i < produceLowLevelGoods.Count; i++)
		{
			if (orderLowLevelGoods.ContainsKey(produceLowLevelGoods[i]) && (float)Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(produceLowLevelGoods[i]) < orderLowLevelGoods[produceLowLevelGoods[i]])
			{
				mOrderNeedLowLevelGoods.Add(produceLowLevelGoods[i]);
			}
		}
		IGoodsBaseVo goodsBaseVo = null;
		IGoodsBaseVo goodsBaseVo2 = null;
		for (int j = 0; j < produceLowLevelGoods.Count; j++)
		{
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceLowLevelGoods[j]);
			if (goodsBaseVo == null)
			{
				continue;
			}
			foreach (KeyValuePair<int, float> orderLowLevelGood in orderLowLevelGoods)
			{
				goodsBaseVo2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(orderLowLevelGood.Key);
				if (goodsBaseVo2 != null && goodsBaseVo2.series == goodsBaseVo.series && (float)Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsBaseVo2.goodsID) < orderLowLevelGood.Value && !mOrderNeedLowLevelGoods.Contains(goodsBaseVo2.goodsID))
				{
					mOrderNeedLowLevelGoods.Add(goodsBaseVo2.goodsID);
				}
			}
		}
	}

	private static void AddChessboardLowLevelGoods(Dictionary<int, float> orderLowLevelGoodsDic)
	{
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false);
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) || item.Value == null || item.Value.GoodsState != GameGoodsState.Lock)
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
			if (goodsBaseVo != null && goodsBaseVo.productionType == 0 && goodsBaseVo.level < GetMaxDropGoodsLv(goodsBaseVo))
			{
				if (orderLowLevelGoodsDic.ContainsKey(item.Value.goodsID))
				{
					orderLowLevelGoodsDic[item.Value.goodsID]++;
				}
				else
				{
					orderLowLevelGoodsDic.Add(item.Value.goodsID, 1f);
				}
			}
		}
	}

	private static Dictionary<int, float> GetLowLevelGoodsByOrder()
	{
		List<BaseData2VO> showingOrderGodosNumIncludeActivityOrder_StillNeed = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderGodosNumIncludeActivityOrder_StillNeed();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		foreach (BaseData2VO item in showingOrderGodosNumIncludeActivityOrder_StillNeed)
		{
			if (item != null)
			{
				if (!dictionary.ContainsKey(item.id))
				{
					dictionary.Add(item.id, item.num);
				}
				else
				{
					dictionary[item.id] += item.num;
				}
			}
		}
		return GetNeedLowLevelGoodsByMaterial(dictionary);
	}

	private static Dictionary<int, float> GetNeedLowLevelGoodsByMaterial(Dictionary<int, int> materialDic)
	{
		IGoodsBaseVo goodsBaseVo = null;
		mUseCookingGoodsDic = new Dictionary<int, float>();
		Dictionary<int, float> dictionary = new Dictionary<int, float>();
		Dictionary<int, float> dictionary2 = new Dictionary<int, float>();
		Dictionary<int, float> dictionary3 = new Dictionary<int, float>();
		foreach (KeyValuePair<int, int> item in materialDic)
		{
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Key);
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (goodsBaseVo.productionType == 1)
			{
				mOrderLowLevelCookGoods.Add(goodsBaseVo.goodsID);
				float useCookingGoodsNum = GetUseCookingGoodsNum(goodsBaseVo.goodsID);
				if (IGoodsBaseVo.IsConversion(goodsBaseVo.type))
				{
					TryChangeDicValue(mOrderConversionDic, goodsBaseVo.goodsID, item.Value);
					continue;
				}
				float num = (float)(Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsBaseVo.goodsID) + GetChessboardWorkingGoodsNum(goodsBaseVo.goodsID)) - useCookingGoodsNum;
				if (num >= (float)item.Value)
				{
					AddToUseCookingGoods(goodsBaseVo.goodsID, item.Value);
					continue;
				}
				if (num > 0f)
				{
					AddToUseCookingGoods(goodsBaseVo.goodsID, num);
				}
				dictionary2 = GetCookingLowLevelGoods(goodsBaseVo.goodsID, (float)item.Value - num);
				if (dictionary2 == null)
				{
					continue;
				}
				foreach (KeyValuePair<int, float> item2 in dictionary2)
				{
					if (dictionary.ContainsKey(item2.Key))
					{
						dictionary[item2.Key] += item2.Value;
					}
					else
					{
						dictionary.Add(item2.Key, item2.Value);
					}
				}
				continue;
			}
			dictionary3 = GetNormalGoodsLowLevelGoods(goodsBaseVo.goodsID, item.Value);
			if (dictionary3 == null)
			{
				continue;
			}
			foreach (KeyValuePair<int, float> item3 in dictionary3)
			{
				if (dictionary.ContainsKey(item3.Key))
				{
					dictionary[item3.Key] += item3.Value;
				}
				else
				{
					dictionary.Add(item3.Key, item3.Value);
				}
			}
		}
		return dictionary;
	}

	private static Dictionary<int, float> GetNormalGoodsLowLevelGoods(int goodsID, float needNum)
	{
		Dictionary<int, float> dictionary = new Dictionary<int, float>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return dictionary;
		}
		int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
		if (derivativeSourceID > 0)
		{
			mOrderLowLevelCookGoods.Add(goodsBaseVoById.goodsID);
			IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(derivativeSourceID);
			if (goodsBaseVoById2 == null)
			{
				return dictionary;
			}
			if (goodsBaseVoById2.productionType == 1)
			{
				int pValue = TwoPower(goodsBaseVoById.level - 1);
				mOrderLowLevelCookGoods.Add(goodsBaseVoById2.goodsID);
				TryChangeDicValue(mOrderDerivativeDic, goodsBaseVoById2.goodsID, pValue);
				TryChangeMaxLevel(mOrderDerivativeMaxLevelDic, goodsBaseVoById2.goodsID, goodsBaseVoById.level);
			}
			else
			{
				float useCookingGoodsNum = GetUseCookingGoodsNum(goodsID);
				float num = (float)Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsID) - useCookingGoodsNum;
				if (num >= needNum)
				{
					AddToUseCookingGoods(goodsID, needNum);
					return dictionary;
				}
				if (num > 0f)
				{
					AddToUseCookingGoods(goodsID, num);
				}
				IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(derivativeSourceID);
				if (produceById == null)
				{
					return dictionary;
				}
				int num2 = TwoPower(goodsBaseVoById.level - 1);
				needNum = needNum * (float)num2 * 1f / (float)produceById.capacity;
				dictionary = GetNormalGoodsLowLevelGoods(derivativeSourceID, needNum);
				if (goodsBaseVoById.level == 1)
				{
					if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
					{
						dictionary[goodsBaseVoById.goodsID] += needNum;
					}
					else
					{
						dictionary.Add(goodsBaseVoById.goodsID, needNum);
					}
				}
			}
		}
		else if (goodsBaseVoById.level < GetMaxDropGoodsLv(goodsBaseVoById))
		{
			if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
			{
				dictionary[goodsBaseVoById.goodsID] += needNum;
			}
			else
			{
				dictionary.Add(goodsBaseVoById.goodsID, needNum);
			}
		}
		return dictionary;
	}

	private static Dictionary<int, float> GetCookingLowLevelGoods(int goodsID, float needNum)
	{
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return null;
		}
		Dictionary<int, float> dictionary = new Dictionary<int, float>();
		int num = -1;
		Dictionary<int, IGoodsBaseVo> goodsBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBySeries(goodsCookingVO.instrumentType);
		if (goodsBySeries != null && goodsBySeries.Count > 0)
		{
			foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
			{
				if (item.Value.type == 12 || item.Value.type == 13)
				{
					num = item.Value.goodsID;
					break;
				}
			}
			if (num > 0)
			{
				Dictionary<int, float> normalGoodsLowLevelGoods = GetNormalGoodsLowLevelGoods(num, Mathf.Ceil(needNum));
				if (normalGoodsLowLevelGoods != null)
				{
					foreach (KeyValuePair<int, float> item2 in normalGoodsLowLevelGoods)
					{
						if (dictionary.ContainsKey(item2.Key))
						{
							dictionary[item2.Key] += item2.Value;
						}
						else
						{
							dictionary.Add(item2.Key, item2.Value);
						}
					}
				}
			}
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		IGoodsBaseVo goodsBaseVo = null;
		for (int i = 0; i < materials.Count; i++)
		{
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(materials[i].id);
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (goodsBaseVo.productionType == 1)
			{
				mOrderLowLevelCookGoods.Add(goodsBaseVo.goodsID);
				if (IGoodsBaseVo.IsConversion(goodsBaseVo.type))
				{
					TryChangeDicValue(mOrderConversionDic, goodsBaseVo.goodsID, Mathf.CeilToInt((float)materials[i].num * needNum));
					continue;
				}
				float useCookingGoodsNum = GetUseCookingGoodsNum(goodsBaseVo.goodsID);
				float num2 = (float)(Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsBaseVo.goodsID) + GetChessboardWorkingGoodsNum(goodsBaseVo.goodsID)) - useCookingGoodsNum;
				if (num2 >= (float)materials[i].num * needNum)
				{
					AddToUseCookingGoods(goodsBaseVo.goodsID, (float)materials[i].num * needNum);
					continue;
				}
				if (num2 > 0f)
				{
					AddToUseCookingGoods(goodsBaseVo.goodsID, num2);
				}
				Dictionary<int, float> cookingLowLevelGoods = GetCookingLowLevelGoods(goodsBaseVo.goodsID, (float)materials[i].num * needNum - num2);
				if (cookingLowLevelGoods == null)
				{
					continue;
				}
				foreach (KeyValuePair<int, float> item3 in cookingLowLevelGoods)
				{
					if (dictionary.ContainsKey(item3.Key))
					{
						dictionary[item3.Key] += item3.Value * (float)materials[i].num;
					}
					else
					{
						dictionary.Add(item3.Key, item3.Value * (float)materials[i].num);
					}
				}
				continue;
			}
			Dictionary<int, float> normalGoodsLowLevelGoods2 = GetNormalGoodsLowLevelGoods(goodsBaseVo.goodsID, (float)materials[i].num * needNum);
			if (normalGoodsLowLevelGoods2 == null)
			{
				continue;
			}
			foreach (KeyValuePair<int, float> item4 in normalGoodsLowLevelGoods2)
			{
				if (dictionary.ContainsKey(item4.Key))
				{
					dictionary[item4.Key] += item4.Value * (float)materials[i].num;
				}
				else
				{
					dictionary.Add(item4.Key, item4.Value * (float)materials[i].num);
				}
			}
		}
		return dictionary;
	}

	private static Dictionary<int, float> GetLowConversionGoodsByOrder()
	{
		Dictionary<int, float> dictionary = new Dictionary<int, float>();
		Dictionary<int, int> dictionary2 = new Dictionary<int, int>();
		foreach (KeyValuePair<int, int> item in mOrderConversionDic)
		{
			int key = item.Key;
			int value = item.Value;
			if (mConversionProduceNumDic.TryGetValue(key, out var value2))
			{
				value2.Sort();
				if (value >= value2.Count)
				{
					if (value > value2.Count)
					{
						TryChangeDicValue(dictionary2, key, value - value2.Count);
					}
					for (int i = 0; i < value2.Count; i++)
					{
						if (mConversionTotalNumDic.ContainsKey(key))
						{
							mConversionTotalNumDic[key] -= value2[i];
						}
					}
					mConversionProduceNumDic.Remove(key);
					continue;
				}
				for (int j = 0; j < value; j++)
				{
					if (mConversionTotalNumDic.ContainsKey(key))
					{
						mConversionTotalNumDic[key] -= value2[0];
					}
					value2.RemoveAt(0);
				}
			}
			else
			{
				TryChangeDicValue(dictionary2, key, value);
			}
		}
		_ = GameConst.GAME_MODE;
		Dictionary<int, int> dictionary3 = new Dictionary<int, int>();
		foreach (KeyValuePair<int, int> item2 in mOrderDerivativeDic)
		{
			int key2 = item2.Key;
			int value3 = item2.Value;
			if (mConversionTotalNumDic.TryGetValue(key2, out var value4))
			{
				if (value3 >= value4)
				{
					if (value3 > value4)
					{
						TryChangeDicValue(dictionary3, key2, value3 - value4);
					}
					mConversionTotalNumDic.Remove(key2);
				}
				else
				{
					mConversionTotalNumDic[key2] -= value3;
				}
			}
			else
			{
				TryChangeDicValue(dictionary3, key2, value3);
			}
		}
		_ = GameConst.GAME_MODE;
		Dictionary<int, float> dictionary4 = new Dictionary<int, float>();
		foreach (KeyValuePair<int, int> item3 in dictionary2)
		{
			if (dictionary4.ContainsKey(item3.Key))
			{
				dictionary4[item3.Key] += item3.Value;
			}
			else
			{
				dictionary4.Add(item3.Key, item3.Value);
			}
		}
		IGoodsProduceVo goodsProduceVo = null;
		foreach (KeyValuePair<int, int> item4 in dictionary3)
		{
			goodsProduceVo = Singleton<GameLevelManager>.Instance.GetProduceById(item4.Key);
			if (goodsProduceVo != null)
			{
				if (dictionary4.ContainsKey(item4.Key))
				{
					dictionary4[item4.Key] += (float)item4.Value / (float)goodsProduceVo.capacity;
				}
				else
				{
					dictionary4.Add(item4.Key, (float)item4.Value / (float)goodsProduceVo.capacity);
				}
			}
		}
		IGoodsCookingVO goodsCookingVO = null;
		IGoodsBaseVo goodsBaseVo = null;
		Dictionary<int, float> dictionary5 = new Dictionary<int, float>();
		foreach (KeyValuePair<int, float> item5 in dictionary4)
		{
			goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(item5.Key);
			if (goodsCookingVO == null)
			{
				continue;
			}
			List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
			for (int k = 0; k < materials.Count; k++)
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(materials[k].id);
				if (goodsBaseVo == null)
				{
					continue;
				}
				dictionary5 = ((goodsBaseVo.productionType != 1) ? GetNormalConversionLowGoods(goodsBaseVo.goodsID, item5.Value * (float)materials[k].num) : GetCookingConversionLowGoods(goodsBaseVo.goodsID, item5.Value * (float)materials[k].num));
				if (dictionary5 == null)
				{
					continue;
				}
				foreach (KeyValuePair<int, float> item6 in dictionary5)
				{
					if (dictionary.ContainsKey(item6.Key))
					{
						dictionary[item6.Key] += item6.Value;
					}
					else
					{
						dictionary.Add(item6.Key, item6.Value);
					}
				}
			}
		}
		return dictionary;
	}

	private static Dictionary<int, float> GetNormalConversionLowGoods(int goodsID, float needNum)
	{
		Dictionary<int, float> dictionary = new Dictionary<int, float>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return dictionary;
		}
		int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
		if (derivativeSourceID > 0)
		{
			IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(derivativeSourceID);
			if (goodsBaseVoById2 == null)
			{
				return dictionary;
			}
			if (goodsBaseVoById2.productionType == 1)
			{
				dictionary = GetCookingConversionLowGoods(derivativeSourceID, needNum);
			}
			else
			{
				if (Singleton<GameLevelManager>.Instance.GetProduceById(derivativeSourceID) == null)
				{
					return dictionary;
				}
				dictionary = GetNormalConversionLowGoods(derivativeSourceID, needNum);
				if (goodsBaseVoById.level == 1)
				{
					if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
					{
						dictionary[goodsBaseVoById.goodsID] += needNum;
					}
					else
					{
						dictionary.Add(goodsBaseVoById.goodsID, needNum);
					}
				}
			}
		}
		else if (goodsBaseVoById.level < GetMaxDropGoodsLv(goodsBaseVoById))
		{
			if (dictionary.ContainsKey(goodsBaseVoById.goodsID))
			{
				dictionary[goodsBaseVoById.goodsID] += needNum;
			}
			else
			{
				dictionary.Add(goodsBaseVoById.goodsID, needNum);
			}
		}
		return dictionary;
	}

	private static Dictionary<int, float> GetCookingConversionLowGoods(int goodsID, float needNum)
	{
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsID);
		if (goodsCookingVO == null)
		{
			return null;
		}
		Dictionary<int, float> dictionary = new Dictionary<int, float>();
		int num = -1;
		Dictionary<int, IGoodsBaseVo> goodsBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBySeries(goodsCookingVO.instrumentType);
		if (goodsBySeries != null && goodsBySeries.Count > 0)
		{
			foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
			{
				if (IGoodsBaseVo.IsDisposableMachine(item.Value.type))
				{
					num = item.Value.goodsID;
					break;
				}
			}
			if (num > 0)
			{
				Dictionary<int, float> normalConversionLowGoods = GetNormalConversionLowGoods(num, Mathf.Ceil(needNum));
				if (normalConversionLowGoods != null)
				{
					foreach (KeyValuePair<int, float> item2 in normalConversionLowGoods)
					{
						if (dictionary.ContainsKey(item2.Key))
						{
							dictionary[item2.Key] += item2.Value;
						}
						else
						{
							dictionary.Add(item2.Key, item2.Value);
						}
					}
				}
			}
		}
		List<BaseData2VO> materials = goodsCookingVO.GetMaterials();
		IGoodsBaseVo goodsBaseVo = null;
		for (int i = 0; i < materials.Count; i++)
		{
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(materials[i].id);
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (goodsBaseVo.productionType == 1)
			{
				Dictionary<int, float> cookingConversionLowGoods = GetCookingConversionLowGoods(goodsBaseVo.goodsID, (float)materials[i].num * needNum);
				if (cookingConversionLowGoods == null)
				{
					continue;
				}
				foreach (KeyValuePair<int, float> item3 in cookingConversionLowGoods)
				{
					if (dictionary.ContainsKey(item3.Key))
					{
						dictionary[item3.Key] += item3.Value * (float)materials[i].num;
					}
					else
					{
						dictionary.Add(item3.Key, item3.Value * (float)materials[i].num);
					}
				}
				continue;
			}
			Dictionary<int, float> normalConversionLowGoods2 = GetNormalConversionLowGoods(goodsBaseVo.goodsID, (float)materials[i].num * needNum);
			if (normalConversionLowGoods2 == null)
			{
				continue;
			}
			foreach (KeyValuePair<int, float> item4 in normalConversionLowGoods2)
			{
				if (dictionary.ContainsKey(item4.Key))
				{
					dictionary[item4.Key] += item4.Value * (float)materials[i].num;
				}
				else
				{
					dictionary.Add(item4.Key, item4.Value * (float)materials[i].num);
				}
			}
		}
		return dictionary;
	}

	private static void FilterLowLevelGoods_Chessboard(List<int> produceLowLevelGoods, List<int> produceSeries)
	{
		Dictionary<int, Dictionary<int, int>> chessboardLowGoods = getChessboardLowGoods(produceSeries);
		if (chessboardLowGoods.Count <= 0)
		{
			return;
		}
		int checkLvByRate = GetCheckLvByRate();
		int num = TwoPower(checkLvByRate - 1);
		foreach (KeyValuePair<int, Dictionary<int, int>> item in chessboardLowGoods)
		{
			int num2 = 0;
			foreach (KeyValuePair<int, int> item2 in item.Value)
			{
				num2 += (int)(Singleton<GameLevelManager>.Instance.GetGoodsMergeConsume(item2.Key) * (float)item2.Value);
			}
			Dictionary<int, int> dictionary = new Dictionary<int, int>();
			int num3 = num2 % num;
			for (int i = 1; i < checkLvByRate; i++)
			{
				int num4 = TwoPower(i - 1);
				int num5 = TwoPower(i);
				int num6 = num3 % num5 % num5;
				num3 += num6;
				dictionary[i] = num6 / num4;
			}
			_ = GameConst.GAME_MODE;
			if (dictionary.Count <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVo = null;
			foreach (KeyValuePair<int, int> item3 in dictionary)
			{
				if (item3.Value > 0)
				{
					goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(item.Key, item3.Key);
					if (goodsBaseVo != null)
					{
						mOrderNeedLowLevelGoods.Add(goodsBaseVo.goodsID);
					}
				}
			}
		}
		mNeedLowLevelGoods = produceLowLevelGoods;
	}

	private static int GetCheckLvByRate()
	{
		return ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() switch
		{
			ConsumptionRate.Double => 2, 
			ConsumptionRate.Fourtimes => 3, 
			ConsumptionRate.Eighttimes => 4, 
			_ => 0, 
		};
	}

	private static Dictionary<int, Dictionary<int, int>> getChessboardLowGoods(List<int> produceSeries)
	{
		Dictionary<int, Dictionary<int, int>> dictionary = new Dictionary<int, Dictionary<int, int>>();
		if (produceSeries == null || produceSeries.Count <= 0)
		{
			return dictionary;
		}
		List<int> list = new List<int>();
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false);
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) || item.Value == null || IGoodsBaseVo.CannotMerge(item.Value.GoodsState))
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
			if (goodsBaseVo == null || goodsBaseVo.productionType != 0 || !produceSeries.Contains(goodsBaseVo.series) || goodsBaseVo.level >= GetMaxDropGoodsLv(goodsBaseVo))
			{
				continue;
			}
			if (!dictionary.ContainsKey(goodsBaseVo.series))
			{
				dictionary.Add(goodsBaseVo.series, new Dictionary<int, int>());
			}
			if (item.Value.GoodsState == GameGoodsState.Lock)
			{
				if (!list.Contains(goodsBaseVo.goodsID))
				{
					list.Add(goodsBaseVo.goodsID);
					if (dictionary[goodsBaseVo.series].ContainsKey(goodsBaseVo.goodsID))
					{
						dictionary[goodsBaseVo.series][goodsBaseVo.goodsID]++;
					}
					else
					{
						dictionary[goodsBaseVo.series].Add(goodsBaseVo.goodsID, 1);
					}
				}
			}
			else if (dictionary[goodsBaseVo.series].ContainsKey(goodsBaseVo.goodsID))
			{
				dictionary[goodsBaseVo.series][goodsBaseVo.goodsID]++;
			}
			else
			{
				dictionary[goodsBaseVo.series].Add(goodsBaseVo.goodsID, 1);
			}
		}
		return dictionary;
	}

	private static float GetUseCookingGoodsNum(int goodsID)
	{
		if (mUseCookingGoodsDic.TryGetValue(goodsID, out var value))
		{
			return value;
		}
		return 0f;
	}

	private static void AddToUseCookingGoods(int goodsID, float num)
	{
		if (!(num <= 0f))
		{
			if (mUseCookingGoodsDic == null)
			{
				mUseCookingGoodsDic = new Dictionary<int, float>();
			}
			if (mUseCookingGoodsDic.ContainsKey(goodsID))
			{
				mUseCookingGoodsDic[goodsID] += num;
			}
			else
			{
				mUseCookingGoodsDic.Add(goodsID, num);
			}
		}
	}

	public static void DebugGM(int goodsID)
	{
		GetNeedLowLevelGoodsByMaterial(new Dictionary<int, int> { { goodsID, 1 } });
		_ = GameConst.GAME_MODE;
	}

	private static List<GameGoodsVo> GetChessboardMachines()
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false);
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			if (Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) && item.Value != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState))
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
				if (goodsBaseVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
				{
					list.Add(item.Value);
				}
			}
		}
		return list;
	}

	private static void CheckDerivativeInChessboard()
	{
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false);
		IGoodsBaseVo goodsBaseVo = null;
		IGoodsBaseVo goodsBaseVo2 = null;
		IGoodsProduceVo goodsProduceVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in levelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) || item.Value == null || IGoodsBaseVo.IsDisabled(item.Value.GoodsState))
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				if (item.Value.MakingGoodsID > 0 && (item.Value.GoodsState == GameGoodsState.InitiativeProduce || item.Value.GoodsState == GameGoodsState.Working))
				{
					goodsBaseVo2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.MakingGoodsID);
					if (goodsBaseVo2 != null && IGoodsBaseVo.IsConversion(goodsBaseVo2.type))
					{
						goodsProduceVo = Singleton<GameLevelManager>.Instance.GetProduceById(goodsBaseVo2.goodsID);
						if (goodsProduceVo != null)
						{
							SetConversionProduceNumDic(goodsBaseVo2.goodsID, goodsProduceVo.capacity);
						}
					}
					continue;
				}
				for (int i = 0; i < item.Value.MakeMaterials.Count; i++)
				{
					goodsBaseVo2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.MakeMaterials[i].goodsID);
					if (goodsBaseVo2 == null)
					{
						continue;
					}
					if (IGoodsBaseVo.IsConversion(goodsBaseVo2.type))
					{
						goodsProduceVo = Singleton<GameLevelManager>.Instance.GetProduceById(goodsBaseVo2.goodsID);
						if (goodsProduceVo != null)
						{
							SetConversionProduceNumDic(goodsBaseVo2.goodsID, goodsProduceVo.capacity - item.Value.MakeMaterials[i].InitaitveUseTotal);
						}
						continue;
					}
					int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVo2);
					if (derivativeSourceID > 0 && (!mOrderDerivativeMaxLevelDic.TryGetValue(derivativeSourceID, out var value) || goodsBaseVo2.level <= value))
					{
						int produceNum = TwoPower(goodsBaseVo2.level - 1);
						SetmConversionTotalNum(derivativeSourceID, produceNum);
					}
				}
			}
			else if (IGoodsBaseVo.IsConversion(goodsBaseVo.type))
			{
				goodsProduceVo = Singleton<GameLevelManager>.Instance.GetProduceById(goodsBaseVo.goodsID);
				if (goodsProduceVo != null)
				{
					SetConversionProduceNumDic(goodsBaseVo.goodsID, goodsProduceVo.capacity - item.Value.InitiativeUseTotal);
				}
			}
			else
			{
				int derivativeSourceID2 = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVo);
				if (derivativeSourceID2 > 0 && (!mOrderDerivativeMaxLevelDic.TryGetValue(derivativeSourceID2, out var value2) || goodsBaseVo.level <= value2))
				{
					int produceNum2 = TwoPower(goodsBaseVo.level - 1);
					SetmConversionTotalNum(derivativeSourceID2, produceNum2);
				}
			}
		}
	}

	private static void SetConversionProduceNumDic(int goodsID, int produceNum)
	{
		SetmConversionTotalNum(goodsID, produceNum);
		if (mConversionProduceNumDic == null)
		{
			mConversionProduceNumDic = new Dictionary<int, List<int>>();
		}
		if (!mConversionProduceNumDic.ContainsKey(goodsID))
		{
			mConversionProduceNumDic.Add(goodsID, new List<int>());
		}
		mConversionProduceNumDic[goodsID].Add(produceNum);
	}

	private static void SetmConversionTotalNum(int goodsID, int produceNum)
	{
		if (mConversionTotalNumDic == null)
		{
			mConversionTotalNumDic = new Dictionary<int, int>();
		}
		if (mConversionTotalNumDic.ContainsKey(goodsID))
		{
			mConversionTotalNumDic[goodsID] += produceNum;
		}
		else
		{
			mConversionTotalNumDic.Add(goodsID, produceNum);
		}
	}

	public static int CalcGeneratorSpeedCost(GameGoodsVo goodsVo, IGoodsBaseVo goodsBaseVo)
	{
		if (goodsVo == null || goodsBaseVo == null)
		{
			return 0;
		}
		if (goodsVo.GoodsState != GameGoodsState.CoolDown)
		{
			return 0;
		}
		if (goodsBaseVo.type == 4)
		{
			if (goodsVo.InitiativeSurplusNumber <= 0)
			{
				IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsVo.goodsID);
				if (initiativeProduceById == null)
				{
					return 0;
				}
				int cDTime = initiativeProduceById.GetCDTime(goodsVo.InitiativeCDIndex);
				int num = Mathf.CeilToInt((1f - ServerTimeManager.TimeProgress(goodsVo.InitiativeCDStarTime, cDTime)) * (float)initiativeProduceById.GetAccelerate(goodsVo.InitiativeCDIndex, goodsVo.BuyCdTotal));
				if (num >= 0)
				{
					return num;
				}
				return 0;
			}
			IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(goodsVo.goodsID);
			if (passiveProduceById == null)
			{
				return 0;
			}
			return CalcPassiveClearCDCost(goodsVo, passiveProduceById);
		}
		if (goodsBaseVo.type == 5 || goodsBaseVo.type == 6)
		{
			IGoodsProduceVo passiveProduceById2 = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(goodsVo.goodsID);
			if (passiveProduceById2 == null)
			{
				return 0;
			}
			return CalcPassiveClearCDCost(goodsVo, passiveProduceById2);
		}
		IGoodsProduceVo initiativeProduceById2 = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsVo.goodsID);
		if (initiativeProduceById2 == null)
		{
			return 0;
		}
		int cDTime2 = initiativeProduceById2.GetCDTime(goodsVo.InitiativeCDIndex);
		int num2 = Mathf.CeilToInt((1f - ServerTimeManager.TimeProgress(goodsVo.InitiativeCDStarTime, cDTime2)) * (float)initiativeProduceById2.GetAccelerate(goodsVo.InitiativeCDIndex, goodsVo.BuyCdTotal));
		if (num2 >= 0)
		{
			return num2;
		}
		return 0;
	}

	private static int CalcPassiveClearCDCost(GameGoodsVo gameGoods, IGoodsProduceVo produceVo)
	{
		if (gameGoods == null || produceVo == null)
		{
			return 1;
		}
		int cDTime = produceVo.GetCDTime(gameGoods.PassiveCDIndex);
		int accelerate = produceVo.GetAccelerate(gameGoods.PassiveCDIndex, gameGoods.BuyCdTotal);
		int num = Mathf.CeilToInt((1f - (float)GetPassiveCDInterval(gameGoods, produceVo) / (float)cDTime) * (float)accelerate);
		if (num < 1)
		{
			num = 1;
		}
		return num;
	}

	public static (bool useCard, int amount, int itemID) CalcInstrumentSpeedInfo(GameGoodsVo goodsVo)
	{
		if (goodsVo == null || goodsVo.GoodsState != GameGoodsState.Working)
		{
			return (useCard: false, amount: 0, itemID: 0);
		}
		IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsVo.MakingGoodsID);
		if (goodsCookingVO == null)
		{
			return (useCard: false, amount: 0, itemID: 0);
		}
		int makingTimeByGameGoods = Singleton<GameLevelManager>.Instance.GetMakingTimeByGameGoods(goodsVo);
		long itemNum = ObjectManager.GetInstance().itemDataModel.GetItemNum(1007);
		if (itemNum > 0)
		{
			IItemVO item = StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(1007);
			if (item == null)
			{
				return (useCard: false, amount: 0, itemID: 0);
			}
			int num = Mathf.CeilToInt((float)GetMakingRemainingTime(goodsVo, makingTimeByGameGoods) / (float)item.additional);
			int item2 = (int)((num > itemNum) ? itemNum : num);
			return (useCard: true, amount: item2, itemID: 1007);
		}
		int num2 = Mathf.CeilToInt((float)GetMakingRemainingTime(goodsVo, makingTimeByGameGoods) / (float)makingTimeByGameGoods * (float)goodsCookingVO.accelerate);
		if (num2 < 0)
		{
			num2 = 0;
		}
		return (useCard: false, amount: num2, itemID: 1003);
	}

	public static int CalcBubbleGoodsCost(GameGoodsVo goodsVo)
	{
		if (goodsVo == null || goodsVo.GoodsState != GameGoodsState.Bubble)
		{
			return 0;
		}
		IGoodsPriceVo goodsPriceVoById = Singleton<GameLevelManager>.Instance.GetGoodsPriceVoById(goodsVo.goodsID);
		if (goodsPriceVoById == null)
		{
			return 0;
		}
		return GetBubbleDiscountCost(goodsPriceVoById.buy, goodsVo);
	}

	public static void QuickConsumptionAnalytic(string action, string from, string consumptionType, int consumptionNum)
	{
		Dictionary<string, object> dataDic = new Dictionary<string, object>
		{
			{ "숞끃循渟獑?\u0082厁룦\u008f赴", "숃끥澽渄杕?Â叁수끙疸猙摐\rÚ叙뻹" },
			{ "숃끙徭渄慛<\u0082厁룦\u008f赴", action },
			{ "숃끙徭瀄慛<\u0082厁숇끈玸琈愅\rÒ发뻮", from },
			{ "숃끙徭瀄慛<\u0082厁숇끈玸琈愆\rÒ发뻮", consumptionType },
			{ "숃끙徭瀄慛<\u0082厁숇끈溸甈愅\r¾厽뻱", consumptionNum }
		};
		AnalyticInit.OnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dataDic);
		IsFromQuickBubble = false;
	}

	public static bool IsBlockingClick(GameGoodsVo goodsVo)
	{
		if (goodsVo == null)
		{
			return false;
		}
		if (!ABTestSwitchDefine.QuickConsumptionSwitch())
		{
			return false;
		}
		if (goodsVo.GoodsState == GameGoodsState.Bubble)
		{
			return true;
		}
		return false;
	}
}
