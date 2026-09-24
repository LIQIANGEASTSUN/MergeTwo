using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using TLF;
using UnityEngine;

public class DynamicBoxDropModel : BaseModel
{
	private readonly string mDynamicBoxDropKey = "숋끃掷弌䑙;\u0092厑숵끕澡瀶䉰 Â叁医橄ā译饡";

	private DynamicBoxDropVo mDynamicBoxDropVo;

	private List<int> mGeneratorSeries = new List<int>();

	private List<int> mMachineSeries = new List<int>();

	private Dictionary<int, List<int>> mGeneratorDropGoods = new Dictionary<int, List<int>>();

	private Dictionary<int, List<int>> mMachineDropGoods = new Dictionary<int, List<int>>();

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		mDynamicBoxDropVo = new DynamicBoxDropVo();
		string item = GetItem(mDynamicBoxDropKey);
		if (!string.IsNullOrEmpty(item))
		{
			try
			{
				mDynamicBoxDropVo = JsonConvert.DeserializeObject<DynamicBoxDropVo>(item);
			}
			catch (Exception)
			{
				"遟\u103b쭄滜\ua8bd捯닆\u3040\udbe2뽸育ȑ".LogWarning();
			}
		}
		InitCache();
	}

	private void InitCache()
	{
		mGeneratorSeries = new List<int>();
		mGeneratorDropGoods = new Dictionary<int, List<int>>();
		List<IDynamicBoxGoodsVo> dynamicListByType = Singleton<GameLevelManager>.Instance.GetDynamicListByType(1);
		if (dynamicListByType != null)
		{
			for (int i = 0; i < dynamicListByType.Count; i++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(dynamicListByType[i].goodsID);
				if (goodsBaseVoById != null)
				{
					if (!mGeneratorSeries.Contains(goodsBaseVoById.series))
					{
						mGeneratorSeries.Add(goodsBaseVoById.series);
					}
					if (!mGeneratorDropGoods.ContainsKey(goodsBaseVoById.series))
					{
						mGeneratorDropGoods.Add(goodsBaseVoById.series, new List<int>());
					}
					mGeneratorDropGoods[goodsBaseVoById.series].Add(goodsBaseVoById.goodsID);
				}
			}
		}
		mMachineSeries = new List<int>();
		mMachineDropGoods = new Dictionary<int, List<int>>();
		List<IDynamicBoxGoodsVo> dynamicListByType2 = Singleton<GameLevelManager>.Instance.GetDynamicListByType(2);
		if (dynamicListByType2 == null)
		{
			return;
		}
		for (int j = 0; j < dynamicListByType2.Count; j++)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(dynamicListByType2[j].goodsID);
			if (goodsBaseVoById != null)
			{
				if (!mMachineSeries.Contains(goodsBaseVoById.series))
				{
					mMachineSeries.Add(goodsBaseVoById.series);
				}
				if (!mMachineDropGoods.ContainsKey(goodsBaseVoById.series))
				{
					mMachineDropGoods.Add(goodsBaseVoById.series, new List<int>());
				}
				mMachineDropGoods[goodsBaseVoById.series].Add(goodsBaseVoById.goodsID);
			}
		}
	}

	public int GetDropGoodsID(IDynamicBoxGoodsVo dynamicBoxGoodsVo)
	{
		if (dynamicBoxGoodsVo == null)
		{
			return 0;
		}
		if (dynamicBoxGoodsVo.dropType == 1)
		{
			return getGeneratorDropID();
		}
		if (dynamicBoxGoodsVo.dropType == 2)
		{
			return getMachineDropID();
		}
		return 0;
	}

	private int getGeneratorDropID()
	{
		int num = 0;
		int num2 = 0;
		Dictionary<int, int> ownDicBySeries = getOwnDicBySeries(mGeneratorSeries);
		_ = GameConst.GAME_MODE;
		foreach (KeyValuePair<int, int> item in ownDicBySeries)
		{
			int num3 = item.Value % 4;
			if (num3 > num2)
			{
				num2 = num3;
				num = item.Key;
			}
		}
		if (num == 0)
		{
			foreach (KeyValuePair<int, int> item2 in ownDicBySeries)
			{
				int num4 = item2.Value % 8;
				if (num4 > num2)
				{
					num2 = num4;
					num = item2.Key;
				}
			}
		}
		if (num == 0)
		{
			if (mDynamicBoxDropVo.GeneratorDropList == null || mDynamicBoxDropVo.GeneratorDropList.Count == 0)
			{
				mDynamicBoxDropVo.GeneratorDropList = new List<int>();
				foreach (KeyValuePair<int, int> item3 in ownDicBySeries)
				{
					mDynamicBoxDropVo.GeneratorDropList.Add(item3.Key);
				}
			}
			if (mDynamicBoxDropVo.GeneratorDropList.Count > 0)
			{
				num = mDynamicBoxDropVo.GeneratorDropList[0];
				mDynamicBoxDropVo.GeneratorDropList.RemoveAt(0);
			}
			SaveDynamicDropData();
		}
		if (num > 0 && mGeneratorDropGoods.TryGetValue(num, out var value))
		{
			int index = Random.Range(0, value.Count);
			return value.TryGet(index);
		}
		return 0;
	}

	private int getMachineDropID()
	{
		int num = 0;
		int num2 = 0;
		Dictionary<int, int> ownDicBySeries = getOwnDicBySeries(mMachineSeries);
		_ = GameConst.GAME_MODE;
		foreach (KeyValuePair<int, int> item in ownDicBySeries)
		{
			int num3 = item.Value % 4;
			if (num3 > num2)
			{
				num2 = num3;
				num = item.Key;
			}
		}
		if (num == 0)
		{
			foreach (KeyValuePair<int, int> item2 in ownDicBySeries)
			{
				int num4 = item2.Value % 8;
				if (num4 > num2)
				{
					num2 = num4;
					num = item2.Key;
				}
			}
		}
		if (num == 0)
		{
			if (mDynamicBoxDropVo.MachineDropList == null || mDynamicBoxDropVo.MachineDropList.Count == 0)
			{
				mDynamicBoxDropVo.MachineDropList = new List<int>();
				foreach (KeyValuePair<int, int> item3 in ownDicBySeries)
				{
					mDynamicBoxDropVo.MachineDropList.Add(item3.Key);
				}
			}
			if (mDynamicBoxDropVo.MachineDropList.Count > 0)
			{
				num = mDynamicBoxDropVo.MachineDropList[0];
				mDynamicBoxDropVo.MachineDropList.RemoveAt(0);
			}
			SaveDynamicDropData();
		}
		if (num > 0 && mMachineDropGoods.TryGetValue(num, out var value))
		{
			int index = Random.Range(0, value.Count);
			return value.TryGet(index);
		}
		return 0;
	}

	private Dictionary<int, int> getOwnDicBySeries(List<int> seriesIDList)
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		if (seriesIDList == null || seriesIDList.Count <= 0)
		{
			return dictionary;
		}
		Dictionary<int, int> dictionary2 = new Dictionary<int, int>();
		foreach (KeyValuePair<int, GameGoodsVo> item in Singleton<GameLevelManager>.Instance.GetLevelMap())
		{
			if (Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) && item.Value != null && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState))
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
				if (goodsBaseVoById != null && seriesIDList.Contains(goodsBaseVoById.series))
				{
					int num = GameLevelDefine.TwoPower(goodsBaseVoById.level - 1);
					ChangeOrAddDicValue(dictionary2, goodsBaseVoById.series, num);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in Singleton<GameLevelManager>.Instance.GetGameBagMap())
		{
			if (item2.Value != null)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item2.Value.goodsID);
				if (goodsBaseVoById != null && seriesIDList.Contains(goodsBaseVoById.series))
				{
					int num2 = GameLevelDefine.TwoPower(goodsBaseVoById.level - 1);
					ChangeOrAddDicValue(dictionary2, goodsBaseVoById.series, num2);
				}
			}
		}
		List<int> list = new List<int>();
		foreach (KeyValuePair<int, int> item3 in dictionary2)
		{
			if (item3.Value >= 8)
			{
				list.Add(item3.Key);
				dictionary[item3.Key] = item3.Value;
			}
		}
		Stack<int> temporaryItems = ObjectManager.GetInstance().gameLevelModel.GetTemporaryItems();
		if (temporaryItems != null)
		{
			int[] array = temporaryItems.ToArray();
			for (int i = 0; i < array.Length; i++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(array[i]);
				if (goodsBaseVoById != null && list.Contains(goodsBaseVoById.series))
				{
					int num3 = GameLevelDefine.TwoPower(goodsBaseVoById.level - 1);
					ChangeOrAddDicValue(dictionary, goodsBaseVoById.series, num3);
				}
			}
		}
		List<SingleDynamicOrder> showingOrders = ObjectManager.GetInstance().gameOrdersModel.ShowingOrders;
		if (showingOrders != null && showingOrders.Count > 0)
		{
			for (int j = 0; j < showingOrders.Count; j++)
			{
				if (showingOrders[j] == null)
				{
					continue;
				}
				for (int k = 0; k < showingOrders[j].rewards.Count; k++)
				{
					if (showingOrders[j].rewards[k] != null && showingOrders[j].rewards[k].type == 2)
					{
						IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(showingOrders[j].rewards[k].id);
						if (goodsBaseVoById != null && list.Contains(goodsBaseVoById.series))
						{
							int num4 = GameLevelDefine.TwoPower(goodsBaseVoById.level - 1);
							ChangeOrAddDicValue(dictionary, goodsBaseVoById.series, num4 * showingOrders[j].rewards[k].num);
						}
					}
				}
			}
		}
		SingleWaveRewardData ongoingSingleWave = ObjectManager.GetInstance().orderWaveRewardModel.m_VO.m_ongoingSingleWave;
		if (ongoingSingleWave != null && ongoingSingleWave.rewards != null)
		{
			for (int l = 0; l < ongoingSingleWave.rewards.Count; l++)
			{
				if (ongoingSingleWave.rewards[l] != null && ongoingSingleWave.rewards[l].type == 2)
				{
					IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(ongoingSingleWave.rewards[l].id);
					if (goodsBaseVoById != null && list.Contains(goodsBaseVoById.series))
					{
						int num5 = GameLevelDefine.TwoPower(goodsBaseVoById.level - 1);
						ChangeOrAddDicValue(dictionary, goodsBaseVoById.series, num5 * ongoingSingleWave.rewards[l].num);
					}
				}
			}
		}
		return dictionary;
	}

	private void ChangeOrAddDicValue(Dictionary<int, int> dictionary, int seriesID, int num)
	{
		if (dictionary.ContainsKey(seriesID))
		{
			dictionary[seriesID] += num;
		}
		else
		{
			dictionary.Add(seriesID, num);
		}
	}

	public void SaveDynamicDropData()
	{
		try
		{
			string value = JsonConvert.SerializeObject((object)mDynamicBoxDropVo);
			SaveItem(mDynamicBoxDropKey, value);
			Singleton<ServerManager>.Instance.SaveServerItem(mDynamicBoxDropKey, value);
		}
		catch (Exception)
		{
			"遟\u103b쭄滜\ua8bd捯닆\u3040ഋ㡪哇忄\uee25".LogWarning();
		}
	}

	public void SyncServerDataToLocal()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(mDynamicBoxDropKey);
		if (!string.IsNullOrEmpty(serverItem))
		{
			try
			{
				mDynamicBoxDropVo = JsonConvert.DeserializeObject<DynamicBoxDropVo>(serverItem);
			}
			catch (Exception)
			{
				mDynamicBoxDropVo = new DynamicBoxDropVo();
			}
		}
		else
		{
			mDynamicBoxDropVo = new DynamicBoxDropVo();
		}
		SaveDynamicDropData();
	}
}
