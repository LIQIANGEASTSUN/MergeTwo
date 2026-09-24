using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class GoodsBuffTypeList : BaseVO
{
	public GoodsBuffType buffType = GoodsBuffType.None;

	public Dictionary<int, GoodsBuffSeriesList> goodsBuffDic = new Dictionary<int, GoodsBuffSeriesList>();

	public Dictionary<int, GoodsBuffSeriesList> GetGoodsBuffDic()
	{
		return goodsBuffDic;
	}

	public void Init(GoodsBuffType _type)
	{
		buffType = _type;
		goodsBuffDic = new Dictionary<int, GoodsBuffSeriesList>();
	}

	public void AddGoodsBuffBySeries(int activityID, int series, long startTime, int duration, int buffValue = 0)
	{
		if (!goodsBuffDic.ContainsKey(series))
		{
			goodsBuffDic[series] = new GoodsBuffSeriesList();
			goodsBuffDic[series].Init(series);
		}
		goodsBuffDic[series].AddGoodsBuffBySeries(activityID, series, startTime, duration, buffValue);
	}

	public void RemoveGoodsBuff(int activityID, int series)
	{
		if (goodsBuffDic.ContainsKey(series))
		{
			goodsBuffDic[series].RemoveGoodsBuff(activityID, series);
			if (goodsBuffDic[series].GetGoodsBuffVos() == null || goodsBuffDic[series].GetGoodsBuffVos().Count <= 0)
			{
				goodsBuffDic.Remove(series);
			}
		}
	}

	public List<int> RemoveAllGoodsBuff(int activityID)
	{
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		foreach (int key in goodsBuffDic.Keys)
		{
			goodsBuffDic[key].RemoveGoodsBuff(activityID, key);
			if (goodsBuffDic[key].GetGoodsBuffVos() == null || goodsBuffDic[key].GetGoodsBuffVos().Count <= 0)
			{
				list2.Add(key);
				list.Add(key);
			}
		}
		foreach (int item in list2)
		{
			goodsBuffDic.Remove(item);
		}
		return list;
	}

	public int GetBuffRemainTime(int series)
	{
		if (goodsBuffDic.ContainsKey(series))
		{
			int buffRemainTime = goodsBuffDic[series].GetBuffRemainTime();
			if (buffRemainTime > 0)
			{
				return buffRemainTime;
			}
			goodsBuffDic[series].ClearBuffVo();
			if (goodsBuffDic[series].GetGoodsBuffVos() == null || goodsBuffDic[series].GetGoodsBuffVos().Count <= 0)
			{
				goodsBuffDic.Remove(series);
			}
		}
		return 0;
	}

	public GoodsBuffVo GetGoodsBuffVo(int series)
	{
		if (goodsBuffDic.ContainsKey(series))
		{
			return goodsBuffDic[series].GetGoodsBuffVo();
		}
		return null;
	}

	public int GetBuffActivityId(int series)
	{
		if (goodsBuffDic.ContainsKey(series))
		{
			int buffActivityId = goodsBuffDic[series].GetBuffActivityId();
			if (buffActivityId > 0)
			{
				return buffActivityId;
			}
		}
		return -1;
	}
}
