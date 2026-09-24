using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IGoodsCookingVO : BaseVO
{
	public int goodsID;

	public int instrumentType;

	public string materials = "";

	public string extraProducts = "";

	public int accelerate;

	public int adAccelerate;

	public int reduceTime;

	public int specialType;

	public int revocationPrice;

	public int completeEffect;

	private List<BaseData2VO> mMaterials;

	private List<BaseData2VO> mMaterialsContainsDisposableInstrument;

	private int mMaterialCount;

	private Dictionary<int, int> mMaterialCountDict;

	private Dictionary<int, int> mReusableTempDict;

	private List<int> mMaterialsIDs;

	public bool CheckContainByGoodsId(int material)
	{
		if (mMaterials == null)
		{
			mMaterials = BaseData2VO.GetBaseData2VOList(materials);
		}
		for (int i = 0; i < mMaterials.Count; i++)
		{
			if (mMaterials[i].id == material)
			{
				return true;
			}
		}
		return false;
	}

	public List<int> GetMaterialGoodsIDs()
	{
		if (mMaterials == null)
		{
			mMaterials = BaseData2VO.GetBaseData2VOList(materials);
		}
		if (mMaterialsIDs == null)
		{
			mMaterialsIDs = new List<int>();
			for (int i = 0; i < mMaterials.Count; i++)
			{
				mMaterialsIDs.Add(mMaterials[i].id);
			}
			mMaterialsIDs.DeleteRepeat();
		}
		return mMaterialsIDs;
	}

	public bool CheckContainByMaterials(List<int> materialIDs)
	{
		if (mMaterialCount > 0 && (materialIDs == null || materialIDs.Count > mMaterialCount))
		{
			return false;
		}
		if (mMaterials == null)
		{
			mMaterials = BaseData2VO.GetBaseData2VOList(materials);
		}
		int capacity = 1;
		if (mMaterialCountDict == null || mReusableTempDict == null)
		{
			mMaterialCount = mMaterials.Count;
			capacity = Utils.GetCapacity(mMaterialCount);
		}
		if (mMaterialCountDict == null)
		{
			mMaterialCountDict = new Dictionary<int, int>(capacity);
			for (int i = 0; i < mMaterials.Count; i++)
			{
				int id = mMaterials[i].id;
				if (mMaterialCountDict.ContainsKey(id))
				{
					mMaterialCountDict[id]++;
				}
				else
				{
					mMaterialCountDict[id] = 1;
				}
			}
		}
		if (mReusableTempDict == null)
		{
			mReusableTempDict = new Dictionary<int, int>(capacity);
		}
		else
		{
			mReusableTempDict.Clear();
		}
		foreach (KeyValuePair<int, int> item in mMaterialCountDict)
		{
			mReusableTempDict.Add(item.Key, item.Value);
		}
		for (int j = 0; j < materialIDs.Count; j++)
		{
			int key = materialIDs[j];
			if (mReusableTempDict.TryGetValue(key, out var value) && value > 0)
			{
				mReusableTempDict[key] = value - 1;
				continue;
			}
			return false;
		}
		return true;
	}

	public bool CheckContainByMaterials(List<MakingMaterialVo> materialIDs)
	{
		bool result = true;
		if (mMaterials == null)
		{
			mMaterials = BaseData2VO.GetBaseData2VOList(materials);
		}
		List<int> list = new List<int>();
		for (int i = 0; i < mMaterials.Count; i++)
		{
			list.Add(mMaterials[i].id);
		}
		for (int j = 0; j < materialIDs.Count; j++)
		{
			if (list.Contains(materialIDs[j].goodsID))
			{
				list.Remove(materialIDs[j].goodsID);
				continue;
			}
			result = false;
			break;
		}
		return result;
	}

	public List<int> GetLackMaterials(List<int> hasMatList)
	{
		List<int> list = new List<int>();
		List<BaseData2VO> list2 = GetMaterials();
		for (int i = 0; i < list2.Count; i++)
		{
			list.Add(list2[i].id);
		}
		int j;
		for (j = 0; j < hasMatList.Count; j++)
		{
			int num = list.FindIndex((int e) => e == hasMatList[j]);
			if (num >= 0)
			{
				list.RemoveAt(num);
			}
		}
		return list;
	}

	public List<BaseData2VO> GetMaterials()
	{
		if (mMaterials == null)
		{
			mMaterials = BaseData2VO.GetBaseData2VOList(materials);
		}
		return mMaterials;
	}

	public List<BaseData2VO> GetMaterialsContainsDisposableInstrument()
	{
		if (mMaterialsContainsDisposableInstrument == null)
		{
			mMaterialsContainsDisposableInstrument = new List<BaseData2VO>(GetMaterials());
			Dictionary<int, IGoodsBaseVo> goodsBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBySeries(instrumentType);
			if (goodsBySeries != null)
			{
				foreach (KeyValuePair<int, IGoodsBaseVo> item in goodsBySeries)
				{
					if (IGoodsBaseVo.IsDisposableMachine(item.Value.type))
					{
						mMaterialsContainsDisposableInstrument.Add(new BaseData2VO
						{
							id = item.Value.goodsID,
							num = 1
						});
						break;
					}
				}
			}
		}
		return mMaterialsContainsDisposableInstrument;
	}
}
