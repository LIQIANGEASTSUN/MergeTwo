using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class GoodsBuffSeriesList : BaseVO
{
	public int goodsSeriesID = -1;

	public List<GoodsBuffVo> goodsBuffVos = new List<GoodsBuffVo>();

	public List<GoodsBuffVo> GetGoodsBuffVos()
	{
		return goodsBuffVos;
	}

	public void Init(int series)
	{
		goodsSeriesID = series;
		goodsBuffVos = new List<GoodsBuffVo>();
	}

	public void AddGoodsBuffBySeries(int activityID, int series, long startTime, int duration, int buffValue = 0)
	{
		if (series == goodsSeriesID)
		{
			if (goodsBuffVos == null)
			{
				goodsBuffVos = new List<GoodsBuffVo>();
			}
			goodsBuffVos.Add(new GoodsBuffVo
			{
				activityID = activityID,
				startTimestamp = startTime,
				duration = duration,
				buffValue = buffValue
			});
		}
	}

	public void RemoveGoodsBuff(int activityID, int series)
	{
		if (series != goodsSeriesID)
		{
			return;
		}
		for (int num = goodsBuffVos.Count - 1; num >= 0; num--)
		{
			if (goodsBuffVos[num].activityID == activityID)
			{
				goodsBuffVos.RemoveAt(num);
			}
		}
	}

	public int GetBuffRemainTime()
	{
		int num = 0;
		for (int i = 0; i < goodsBuffVos.Count; i++)
		{
			int num2 = goodsBuffVos[i].duration - (int)(ServerTimeManager.CurrentServerTime3() - goodsBuffVos[i].startTimestamp);
			if (num2 > num)
			{
				num = num2;
			}
		}
		return num;
	}

	public GoodsBuffVo GetGoodsBuffVo()
	{
		GoodsBuffVo result = null;
		int num = 0;
		for (int i = 0; i < goodsBuffVos.Count; i++)
		{
			int num2 = goodsBuffVos[i].duration - (int)(ServerTimeManager.CurrentServerTime3() - goodsBuffVos[i].startTimestamp);
			if (num2 > num)
			{
				num = num2;
				result = goodsBuffVos[i];
			}
		}
		return result;
	}

	public int GetBuffActivityId()
	{
		int num = 0;
		int result = -1;
		for (int i = 0; i < goodsBuffVos.Count; i++)
		{
			int num2 = goodsBuffVos[i].duration - (int)(ServerTimeManager.CurrentServerTime3() - goodsBuffVos[i].startTimestamp);
			if (num2 > num)
			{
				num = num2;
				result = goodsBuffVos[i].activityID;
			}
		}
		return result;
	}

	public void ClearBuffVo()
	{
		List<GoodsBuffVo> list = new List<GoodsBuffVo>();
		for (int i = 0; i < goodsBuffVos.Count; i++)
		{
			if (goodsBuffVos[i].duration - (int)(ServerTimeManager.CurrentServerTime3() - goodsBuffVos[i].startTimestamp) > 0)
			{
				list.Add(goodsBuffVos[i]);
			}
		}
		goodsBuffVos = list;
	}
}
