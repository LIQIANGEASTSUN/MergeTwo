using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using TLF;

public class GeneratorRecycleModel : BaseModel
{
	private readonly string GeneratorRecycleKey = "숯끿咗估䝦\u0013V单숯끥䎋䰰剷\v\u0012匑녅慟ቦ\0郱\ud952";

	private GeneratorRecycleVo mGeneratorRecycleVo;

	private int mRecycleEnergyMin = 10;

	private int mRecycleEnergyMax = 100;

	public bool IsOpenSoftSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_GeneratorRecycle);

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		mGeneratorRecycleVo = new GeneratorRecycleVo();
		string item = GetItem(GeneratorRecycleKey);
		if (!string.IsNullOrEmpty(item))
		{
			try
			{
				mGeneratorRecycleVo = JsonConvert.DeserializeObject<GeneratorRecycleVo>(item);
			}
			catch
			{
				Log.E("䯐ឪꯆ灻\ue35c嚌닝㘾㇖⣾吟Ȏ" + item);
			}
		}
		InitConfig();
	}

	private void InitConfig()
	{
		string[] array = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숓끟斺䔔剗>\u009a厙숍끟憫渎湍\0\u008a厉椵䁽", "넱\u0530或\0郠\ud9e5").Split('|');
		if (array.Length == 2)
		{
			mRecycleEnergyMin = array[0].ToInt();
			mRecycleEnergyMax = array[1].ToInt();
		}
	}

	public bool CheckRecycleGenerator()
	{
		if (!ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState)
		{
			return false;
		}
		if (!IsOpenSoftSwitch)
		{
			return false;
		}
		int curRestaurantID = ObjectManager.GetInstance().restaurantLevelModel.CurRestaurantID;
		if (curRestaurantID == -1)
		{
			return false;
		}
		List<int> list = new List<int>();
		List<BagItemShowVo> list2 = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list;
		for (int i = 0; i < list2.Count; i++)
		{
			if (list2[i] != null && curRestaurantID >= list2[i].unlockRestaurant && list2[i].id > 0 && !IsRecycleGenerator(list2[i].id))
			{
				list.Add(list2[i].id);
			}
		}
		if (list.Count == 0)
		{
			return false;
		}
		List<int> ownerRecycleGenerator = getOwnerRecycleGenerator(list);
		List<int> list3 = new List<int>();
		for (int j = 0; j < list.Count; j++)
		{
			if (!IsRecycleGoods(list[j]))
			{
				list3.Add(list[j]);
			}
		}
		Dictionary<int, int> ownerRecycleGoodsDic = getOwnerRecycleGoodsDic(list3);
		if (ownerRecycleGenerator.Count > 0 || ownerRecycleGoodsDic.Count > 0)
		{
			return true;
		}
		if (ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState && !MonoSingleton<GuideManager>.Instance.IsInGuide() && !MonoSingleton<GuideManager>.Instance.IsFinishByID(241))
		{
			EventManager.GetInstance().DispatchEvent(100133, 241, 0f);
			return true;
		}
		return false;
	}

	public bool OpenRecycleGeneratorView()
	{
		int curRestaurantID = ObjectManager.GetInstance().restaurantLevelModel.CurRestaurantID;
		if (curRestaurantID <= 0)
		{
			return false;
		}
		List<int> list = new List<int>();
		List<BagItemShowVo> list2 = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list;
		for (int i = 0; i < list2.Count; i++)
		{
			if (list2[i] != null && curRestaurantID >= list2[i].unlockRestaurant && list2[i].id > 0 && !IsRecycleGenerator(list2[i].id))
			{
				list.Add(list2[i].id);
			}
		}
		if (list.Count == 0)
		{
			return false;
		}
		List<int> ownerRecycleGenerator = getOwnerRecycleGenerator(list);
		List<int> list3 = new List<int>();
		for (int j = 0; j < list.Count; j++)
		{
			if (!IsRecycleGoods(list[j]))
			{
				list3.Add(list[j]);
			}
		}
		Dictionary<int, int> ownerRecycleGoodsDic = getOwnerRecycleGoodsDic(list3, canSaveRecycleGoods: true);
		if (ownerRecycleGenerator.Count > 0 || ownerRecycleGoodsDic.Count > 0)
		{
			mGeneratorRecycleVo.RestaurantID = curRestaurantID;
			mGeneratorRecycleVo.PopupNum++;
			for (int k = 0; k < ownerRecycleGenerator.Count; k++)
			{
				AddGeneratorRecycle(ownerRecycleGenerator[k]);
				AddGoodsRecycle(ownerRecycleGenerator[k]);
			}
			SaveRecycleData();
			GeneratorRecycleViewData data = new GeneratorRecycleViewData
			{
				CanRecycleGenerators = list,
				OwnerGenerators = ownerRecycleGenerator,
				RecycleGoodsDic = ownerRecycleGoodsDic
			};
			ViewManager.GetInstance().ShowView<GeneratorRecycleViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
			return true;
		}
		return false;
	}

	public bool IsRecycleGenerator(int generatorID)
	{
		if (mGeneratorRecycleVo == null)
		{
			return false;
		}
		if (mGeneratorRecycleVo.RecycleGenerators == null)
		{
			return false;
		}
		if (mGeneratorRecycleVo.RecycleGenerators.Contains(generatorID))
		{
			return true;
		}
		return false;
	}

	public bool IsRecycleGoods(int generatorID)
	{
		if (mGeneratorRecycleVo == null)
		{
			return false;
		}
		if (mGeneratorRecycleVo.RecycleGoods == null)
		{
			return false;
		}
		if (mGeneratorRecycleVo.RecycleGoods.Contains(generatorID))
		{
			return true;
		}
		return false;
	}

	public void AddGeneratorRecycle(int generatorID)
	{
		if (mGeneratorRecycleVo == null)
		{
			mGeneratorRecycleVo = new GeneratorRecycleVo();
		}
		if (mGeneratorRecycleVo.RecycleGenerators == null)
		{
			mGeneratorRecycleVo.RecycleGenerators = new List<int>();
		}
		if (!mGeneratorRecycleVo.RecycleGenerators.Contains(generatorID))
		{
			mGeneratorRecycleVo.RecycleGenerators.Add(generatorID);
		}
	}

	public void AddGoodsRecycle(int generatorID)
	{
		if (mGeneratorRecycleVo == null)
		{
			mGeneratorRecycleVo = new GeneratorRecycleVo();
		}
		if (mGeneratorRecycleVo.RecycleGoods == null)
		{
			mGeneratorRecycleVo.RecycleGoods = new List<int>();
		}
		if (!mGeneratorRecycleVo.RecycleGoods.Contains(generatorID))
		{
			mGeneratorRecycleVo.RecycleGoods.Add(generatorID);
		}
	}

	public void RecycleGenerator(GeneratorRecycleViewData recycleData, int recycleEnergy)
	{
		if (recycleEnergy > 0)
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1004, recycleEnergy, needNotice: false, 142);
		}
		List<int> list = new List<int>();
		if (recycleData.RecycleGoodsDic != null)
		{
			foreach (KeyValuePair<int, int> item in recycleData.RecycleGoodsDic)
			{
				if (!list.Contains(item.Key))
				{
					list.Add(item.Key);
				}
			}
		}
		List<RecycleAnimationData> list2 = new List<RecycleAnimationData>();
		if (list.Count > 0)
		{
			list2 = ObjectManager.GetInstance().gameLevelModel.RemoveByRecycleGoods(list);
		}
		List<RecycleAnimationData> list3 = new List<RecycleAnimationData>();
		if (recycleData.CanRecycleGenerators.Count > 0)
		{
			list3 = ObjectManager.GetInstance().gameLevelModel.PutinGeneratorToBag(recycleData.CanRecycleGenerators);
		}
		if (list2.Count > 0 || list3.Count > 0)
		{
			EventManager.GetInstance().DispatchEvent(203081);
			EventManager.GetInstance().DispatchEvent(203082, list3, list2, recycleEnergy);
			EventManager.GetInstance().DispatchEvent(100047);
		}
		else if (recycleEnergy > 0)
		{
			EventManager.GetInstance().DispatchEvent(203082, list3, list2, recycleEnergy);
			EventManager.GetInstance().DispatchEvent(100047);
		}
		RecycleAnalytic("橣o4끦k퐢䋅", recycleData);
	}

	public int GetRecycleEnergyMin()
	{
		return mRecycleEnergyMin;
	}

	public int GetRecycleEnergyMax()
	{
		return mRecycleEnergyMax;
	}

	private List<int> getOwnerRecycleGenerator(List<int> generators)
	{
		List<int> list = new List<int>();
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetLevelMap())
		{
			if (Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) && item.Value != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && generators.Contains(item.Value.goodsID))
			{
				list.Add(item.Value.goodsID);
			}
		}
		return list;
	}

	private Dictionary<int, int> getOwnerRecycleGoodsDic(List<int> generators, bool canSaveRecycleGoods = false)
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int i = 0; i < generators.Count; i++)
		{
			Dictionary<int, int> currentRecycleGoods = getCurrentRecycleGoods(generators[i]);
			if (canSaveRecycleGoods && currentRecycleGoods.Count > 0)
			{
				AddGoodsRecycle(generators[i]);
			}
			foreach (KeyValuePair<int, int> item in currentRecycleGoods)
			{
				if (dictionary.ContainsKey(item.Key))
				{
					dictionary[item.Key] += item.Value;
				}
				else
				{
					dictionary.Add(item.Key, item.Value);
				}
			}
		}
		return dictionary;
	}

	private Dictionary<int, int> getCurrentRecycleGoods(int generatorID)
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		List<int> generatorRecycleGoods = getGeneratorRecycleGoods(generatorID);
		if (generatorRecycleGoods.Count <= 0)
		{
			return dictionary;
		}
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetLevelMap())
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) || item.Value == null || IGoodsBaseVo.IsDisabled(item.Value.GoodsState))
			{
				continue;
			}
			if (generatorRecycleGoods.Contains(item.Value.goodsID))
			{
				ChangeOrAddDicValue(dictionary, item.Value.goodsID, 1);
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
			if (goodsBaseVoById == null || !IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || item.Value.GoodsState == GameGoodsState.Working || item.Value.GoodsState == GameGoodsState.InitiativeProduce || item.Value.MakeMaterials.Count <= 0)
			{
				continue;
			}
			for (int i = 0; i < item.Value.MakeMaterials.Count; i++)
			{
				if (generatorRecycleGoods.Contains(item.Value.MakeMaterials[i].goodsID))
				{
					ChangeOrAddDicValue(dictionary, item.Value.MakeMaterials[i].goodsID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in Singleton<GameLevelManager>.Instance.GetGameBagMap())
		{
			if (item2.Value == null)
			{
				continue;
			}
			if (generatorRecycleGoods.Contains(item2.Value.goodsID))
			{
				ChangeOrAddDicValue(dictionary, item2.Value.goodsID, 1);
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item2.Value.goodsID);
			if (goodsBaseVoById == null || !IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || item2.Value.GoodsState == GameGoodsState.Working || item2.Value.GoodsState == GameGoodsState.InitiativeProduce || item2.Value.MakeMaterials.Count <= 0)
			{
				continue;
			}
			for (int j = 0; j < item2.Value.MakeMaterials.Count; j++)
			{
				if (generatorRecycleGoods.Contains(item2.Value.MakeMaterials[j].goodsID))
				{
					ChangeOrAddDicValue(dictionary, item2.Value.MakeMaterials[j].goodsID, 1);
				}
			}
		}
		Stack<int> temporaryItems = ObjectManager.GetInstance().gameLevelModel.GetTemporaryItems();
		if (temporaryItems != null)
		{
			int[] array = temporaryItems.ToArray();
			for (int k = 0; k < array.Length; k++)
			{
				if (generatorRecycleGoods.Contains(array[k]))
				{
					ChangeOrAddDicValue(dictionary, array[k], 1);
				}
			}
		}
		return dictionary;
	}

	private List<int> getGeneratorRecycleGoods(int generatorID)
	{
		List<int> list = new List<int>();
		BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(generatorID);
		if (item != null && item.recycleRecipes != null)
		{
			for (int i = 0; i < item.recycleRecipes.Length; i++)
			{
				list.Add(item.recycleRecipes[i]);
			}
		}
		return list;
	}

	private void ChangeOrAddDicValue(Dictionary<int, int> dictionary, int goodsID, int num)
	{
		if (dictionary.ContainsKey(goodsID))
		{
			dictionary[goodsID] += num;
		}
		else
		{
			dictionary.Add(goodsID, num);
		}
	}

	public void RecycleAnalytic(string action, GeneratorRecycleViewData data)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("녡屣㨆\0逞\ud97a", action);
		dictionary.Add("숏끥掫氐杗+\u0092厑숅끥掩漆敄\r\u0092厑곕\u0083赴", mGeneratorRecycleVo.PopupNum);
		dictionary.Add("숏끥憫甐杇&\u008a厉恲a4끴a䜻㣌", mGeneratorRecycleVo.RestaurantID);
		if (action == "橣o4끦k퐢䋅" && data != null && data.RecycleGoodsDic != null && data.RecycleGoodsDic.Count > 0)
		{
			List<Dictionary<string, object>> list = new List<Dictionary<string, object>>();
			foreach (KeyValuePair<int, int> item in data.RecycleGoodsDic)
			{
				Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
				dictionary2.Add("숅끥玾弆杛6Ò发漻䉼", item.Key);
				dictionary2.Add("숏끥掾漐杀\r\u0092厑곕\u0083赴", item.Value);
				list.Add(dictionary2);
			}
			dictionary.Add("숅끥玾弆杛6Ò发別瞿\ud9ccŕ", list.ToArray());
		}
		AnalyticInit.OnEvent("숏끥掫氐杗+\u0092厑匡機ā讽衰", dictionary);
	}

	public void SaveRecycleData()
	{
		try
		{
			string value = JsonConvert.SerializeObject((object)mGeneratorRecycleVo);
			SaveItem(GeneratorRecycleKey, value);
			Singleton<ServerManager>.Instance.SaveServerItem(GeneratorRecycleKey, value);
		}
		catch (Exception)
		{
		}
	}

	public void SyncServerDataToLocal()
	{
		mGeneratorRecycleVo = new GeneratorRecycleVo();
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(GeneratorRecycleKey);
		if (!string.IsNullOrEmpty(serverItem))
		{
			try
			{
				mGeneratorRecycleVo = JsonConvert.DeserializeObject<GeneratorRecycleVo>(serverItem);
			}
			catch (Exception)
			{
			}
		}
		SaveRecycleData();
	}

	public void DebugClearData()
	{
		if (GameConst.GAME_MODE == GameConstMode.DEBUG)
		{
			mGeneratorRecycleVo = new GeneratorRecycleVo();
		}
	}
}
