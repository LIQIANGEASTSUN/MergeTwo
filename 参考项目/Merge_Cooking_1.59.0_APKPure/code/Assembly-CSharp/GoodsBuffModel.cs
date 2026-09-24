using System.Collections.Generic;
using Newtonsoft.Json;
using TLF;

public class GoodsBuffModel : BaseModel
{
	private const string GOODS_BUFF_KEY = "GOODS_BUFF_KEY";

	private Dictionary<GoodsBuffType, GoodsBuffTypeList> mGoodsBuffDic = new Dictionary<GoodsBuffType, GoodsBuffTypeList>();

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		string item = GetItem("숮끵䊖唯䝧\r\u000e匍녆牆ᡐ\0选\ud97b");
		if (!string.IsNullOrEmpty(item))
		{
			try
			{
				mGoodsBuffDic = JsonConvert.DeserializeObject<Dictionary<GoodsBuffType, GoodsBuffTypeList>>(item);
			}
			catch
			{
				Log.E("䮫ឪ\ud8b0暬\ue376'\u009e叱㟢뾃耻ȑ");
				mGoodsBuffDic = new Dictionary<GoodsBuffType, GoodsBuffTypeList>();
			}
		}
	}

	public void AddGoodsBuff(GoodsBuffType _type, int activityID, int series, long startTime, int duration, int buffValue = 0, bool isRefresh = true)
	{
		if (!mGoodsBuffDic.ContainsKey(_type))
		{
			mGoodsBuffDic[_type] = new GoodsBuffTypeList();
			mGoodsBuffDic[_type].Init(_type);
		}
		mGoodsBuffDic[_type].AddGoodsBuffBySeries(activityID, series, startTime, duration, buffValue);
		EventManager.GetInstance().DispatchEvent(202116, _type, series, arg3: true, isRefresh);
		SaveBuffData();
	}

	public void RemoveGoodsBuff(GoodsBuffType _type, int activityID, int series)
	{
		if (mGoodsBuffDic.ContainsKey(_type))
		{
			mGoodsBuffDic[_type].RemoveGoodsBuff(activityID, series);
			if (mGoodsBuffDic[_type].GetGoodsBuffDic() == null || mGoodsBuffDic[_type].GetGoodsBuffDic().Count <= 0)
			{
				mGoodsBuffDic.Remove(_type);
				EventManager.GetInstance().DispatchEvent(202116, _type, series, arg3: false, arg4: true);
			}
			SaveBuffData();
		}
	}

	public void RemoveAllGoodsBuff(GoodsBuffType _type, int activityID)
	{
		if (mGoodsBuffDic.ContainsKey(_type))
		{
			mGoodsBuffDic[_type].RemoveAllGoodsBuff(activityID);
			if (mGoodsBuffDic[_type].GetGoodsBuffDic() == null || mGoodsBuffDic[_type].GetGoodsBuffDic().Count <= 0)
			{
				mGoodsBuffDic.Remove(_type);
			}
			EventManager.GetInstance().DispatchEvent(202117, _type);
			SaveBuffData();
		}
	}

	public int GetBuffRemainTime(GoodsBuffType _type, int series)
	{
		if (mGoodsBuffDic.ContainsKey(_type))
		{
			int buffRemainTime = mGoodsBuffDic[_type].GetBuffRemainTime(series);
			if (buffRemainTime > 0)
			{
				return buffRemainTime;
			}
			if (mGoodsBuffDic[_type].GetGoodsBuffDic() == null || mGoodsBuffDic[_type].GetGoodsBuffDic().Count <= 0)
			{
				mGoodsBuffDic.Remove(_type);
				SaveBuffData();
			}
		}
		return 0;
	}

	public GoodsBuffVo GetBuffVo(GoodsBuffType _type, int series)
	{
		if (mGoodsBuffDic.ContainsKey(_type))
		{
			return mGoodsBuffDic[_type].GetGoodsBuffVo(series);
		}
		return null;
	}

	public void SetBuffVo(GoodsBuffType _type, int series, GoodsBuffVo buffVo)
	{
		if (mGoodsBuffDic.ContainsKey(_type))
		{
			GoodsBuffVo goodsBuffVo = mGoodsBuffDic[_type].GetGoodsBuffVo(series);
			if (goodsBuffVo != null)
			{
				goodsBuffVo.buffValue = buffVo.buffValue;
				SaveBuffData();
			}
		}
	}

	public int GetBuffActivityId(GoodsBuffType _type, int series)
	{
		if (mGoodsBuffDic.ContainsKey(_type))
		{
			return mGoodsBuffDic[_type].GetBuffActivityId(series);
		}
		return -1;
	}

	private void SaveBuffData()
	{
		string value = JsonConvert.SerializeObject((object)mGoodsBuffDic);
		SaveItem("숮끵䊖唯䝧\r\u000e匍녆牆ᡐ\0选\ud97b", value);
		Singleton<ServerManager>.Instance.SaveServerItem("숮끵䊖唯䝧\r\u000e匍녆牆ᡐ\0选\ud97b", value);
	}

	public void SyncServerDataToLocal()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem("숮끵䊖唯䝧\r\u000e匍녆牆ᡐ\0选\ud97b");
		mGoodsBuffDic = new Dictionary<GoodsBuffType, GoodsBuffTypeList>();
		if (!string.IsNullOrEmpty(serverItem))
		{
			try
			{
				mGoodsBuffDic = JsonConvert.DeserializeObject<Dictionary<GoodsBuffType, GoodsBuffTypeList>>(serverItem);
			}
			catch
			{
				Log.E("䮫ឪ\ud8b0暬\ue376'\u009e叱혍趡噦ᕰ捰癣\uee8d");
				mGoodsBuffDic = new Dictionary<GoodsBuffType, GoodsBuffTypeList>();
			}
		}
		SaveBuffData();
	}

	public BuffInfo GetGoodsBuffInfo(int targetActivityId, int series)
	{
		GoodsBuffType[] array = new GoodsBuffType[3]
		{
			GoodsBuffType.Generator_No_CD,
			GoodsBuffType.Instrument_Speed_Up,
			GoodsBuffType.PassiveCD_Speed_Up
		};
		int num = 0;
		int num2 = -1;
		GoodsBuffType[] array2 = array;
		foreach (GoodsBuffType type in array2)
		{
			num = GetBuffRemainTime(type, series);
			if (num > 0)
			{
				break;
			}
		}
		array2 = array;
		foreach (GoodsBuffType type2 in array2)
		{
			num2 = GetBuffActivityId(type2, series);
			if (num2 == targetActivityId)
			{
				break;
			}
		}
		return new BuffInfo(num, num2);
	}
}
