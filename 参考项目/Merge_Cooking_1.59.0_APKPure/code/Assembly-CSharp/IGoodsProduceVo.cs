using System;
using System.Collections.Generic;
using TLF;
using UnityEngine;

[Serializable]
public class IGoodsProduceVo : BaseVO
{
	public int goodsID;

	public int[] fixedProductions;

	public string production = "";

	public string conversion = "";

	public string cd = "";

	public int initialNumber;

	public int frequency;

	public int capacity;

	public string accelerate = "";

	public string adAccelerate = "";

	public int reduceTime;

	public string cost = "";

	public int score;

	public int dynamicType;

	public int doubleConsume;

	private int minTime = -1;

	private int mTotalCdTime;

	private List<int> mCDList;

	private List<List<int>> mAccelerateList;

	private List<int> mAdAccelerateList;

	private List<List<BaseData2VO>> mProduceVos;

	private List<BaseData2VO> mCanProduceGoodsVos;

	private List<int> mCanProduceGoodsIDs;

	private List<int> mWeightList;

	private List<int> mWeightProduceIDList;

	private List<int> mConversions;

	private List<ItemVO> mCosts;

	private List<int> mDirectProductList;

	private Dictionary<int, int> _productCount;

	public void InitProduceList()
	{
		mWeightList = new List<int>();
		mWeightProduceIDList = new List<int>();
		mCanProduceGoodsIDs = new List<int>();
		mProduceVos = new List<List<BaseData2VO>>();
		mCanProduceGoodsVos = new List<BaseData2VO>();
		string[] array = production.Split('_');
		for (int i = 0; i < array.Length; i++)
		{
			string[] array2 = array[i].Split(';');
			List<int> list = new List<int>();
			List<BaseData2VO> list2 = new List<BaseData2VO>();
			foreach (string text in array2)
			{
				if (!text.IsNullOrEmpty())
				{
					string[] array3 = text.Split('|');
					if (array3.Length == 2)
					{
						list.Add(array3[0].ToInt());
						mWeightList.Add(array3[1].ToInt());
						mWeightProduceIDList.Add(array3[0].ToInt());
						list2.Add(new BaseData2VO
						{
							id = array3[0].ToInt(),
							num = array3[1].ToInt()
						});
						mCanProduceGoodsVos.Add(new BaseData2VO
						{
							id = array3[0].ToInt(),
							num = array3[1].ToInt()
						});
						mCanProduceGoodsIDs.Add(array3[0].ToInt());
					}
				}
			}
			mProduceVos.Add(list2);
		}
		mCanProduceGoodsIDs.DeleteRepeat();
	}

	public List<int> GetProduceList()
	{
		if (mCanProduceGoodsIDs == null)
		{
			InitProduceList();
		}
		return mCanProduceGoodsIDs;
	}

	public List<int> GetDirectProduceSeriesList()
	{
		if (mDirectProductList == null)
		{
			mDirectProductList = new List<int>();
			List<int> produceList = GetProduceList();
			for (int i = 0; i < produceList.Count; i++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(produceList[i]);
				if (goodsBaseVoById != null)
				{
					mDirectProductList.Add(goodsBaseVoById.series);
				}
			}
			mDirectProductList.DeleteRepeat();
		}
		return mDirectProductList;
	}

	public List<BaseData2VO> GetProducesBySequenceID(int sequenceID)
	{
		if (mProduceVos == null)
		{
			InitProduceList();
		}
		if (mProduceVos.Count > sequenceID)
		{
			return mProduceVos[sequenceID];
		}
		if (mProduceVos.Count > 0)
		{
			return mProduceVos[0];
		}
		return new List<BaseData2VO>();
	}

	public List<BaseData2VO> GetCanProduceVos()
	{
		if (mCanProduceGoodsVos == null)
		{
			InitProduceList();
		}
		return mCanProduceGoodsVos;
	}

	public List<List<BaseData2VO>> GetProduceSequenceVos()
	{
		if (mProduceVos == null)
		{
			InitProduceList();
		}
		return mProduceVos;
	}

	public int GetProduceGoodsId(int produceTimes)
	{
		if (mWeightProduceIDList == null)
		{
			InitProduceList();
		}
		if (mWeightList.Contains(-1))
		{
			int index = Mathf.Min(produceTimes, mWeightProduceIDList.Count - 1);
			return mWeightProduceIDList[index];
		}
		return GameLevelDefine.GetRandomValue(mWeightProduceIDList, mWeightList);
	}

	public IDynamicBoxGoodsVo GetDynamicProduceGoodsId(List<int> dropouts, bool excludeSeries = false)
	{
		List<int> list = new List<int>();
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		List<BaseData2VO> canProduceVos = GetCanProduceVos();
		for (int i = 0; i < canProduceVos.Count; i++)
		{
			if (canProduceVos[i].id <= 10000)
			{
				if (dictionary.ContainsKey(canProduceVos[i].id))
				{
					dictionary[canProduceVos[i].id] += canProduceVos[i].num;
				}
				else
				{
					dictionary.Add(canProduceVos[i].id, canProduceVos[i].num);
				}
			}
		}
		for (int j = 0; j < dropouts.Count; j++)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(dropouts[j]);
			if (goodsBaseVoById != null)
			{
				list.Add(goodsBaseVoById.series);
			}
			int dropTypeByGoodsID = Singleton<GameLevelManager>.Instance.GetDropTypeByGoodsID(dropouts[j], dictionary);
			IDynamicBoxGoodsVo dynamicBoxGoodsVo = Singleton<GameLevelManager>.Instance.GetDynamicBoxGoodsVo(dropTypeByGoodsID, dropouts[j]);
			if (dynamicBoxGoodsVo != null && dictionary.ContainsKey(dynamicBoxGoodsVo.dropType))
			{
				dictionary[dynamicBoxGoodsVo.dropType]--;
			}
		}
		IDynamicBoxGoodsVo dynamicBoxGoodsVo2 = null;
		List<IDynamicBoxGoodsVo> list2 = new List<IDynamicBoxGoodsVo>();
		List<IDynamicBoxGoodsVo> list3 = new List<IDynamicBoxGoodsVo>();
		foreach (KeyValuePair<int, int> item in dictionary)
		{
			List<IDynamicBoxGoodsVo> dynamicListByType = Singleton<GameLevelManager>.Instance.GetDynamicListByType(item.Key);
			if (dynamicListByType == null)
			{
				continue;
			}
			List<IDynamicBoxGoodsVo> list4 = new List<IDynamicBoxGoodsVo>();
			for (int k = 0; k < dynamicListByType.Count; k++)
			{
				if (dynamicListByType[k].type == 1 || Singleton<GameLevelManager>.Instance.DynamicBoxCanDrop(dynamicListByType[k].goodsID))
				{
					list2.Add(dynamicListByType[k]);
					if (item.Value > 0)
					{
						if (excludeSeries && dynamicListByType[k].type >= 2)
						{
							IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(dynamicListByType[k].goodsID);
							if (goodsBaseVoById2 != null && !list.Contains(goodsBaseVoById2.series))
							{
								list4.Add(dynamicListByType[k]);
							}
						}
						else
						{
							list4.Add(dynamicListByType[k]);
						}
					}
				}
				if (dynamicListByType[k].exception > 0)
				{
					list3.Add(dynamicListByType[k]);
				}
			}
			dynamicBoxGoodsVo2 = Singleton<GameLevelManager>.Instance.GetDynamicBoxFixedDrop(goodsID, list4);
			if (dynamicBoxGoodsVo2 == null)
			{
				dynamicBoxGoodsVo2 = Singleton<GameLevelManager>.Instance.GetRandomDynamicVo(list4, dynamicType);
			}
			if (dynamicBoxGoodsVo2 != null)
			{
				break;
			}
		}
		if (dynamicBoxGoodsVo2 == null)
		{
			if (list2.Count > 0)
			{
				dynamicBoxGoodsVo2 = Singleton<GameLevelManager>.Instance.GetRandomDynamicVo(list2, dynamicType);
				if (dynamicBoxGoodsVo2 != null)
				{
					return dynamicBoxGoodsVo2;
				}
			}
			else
			{
				dynamicBoxGoodsVo2 = Singleton<GameLevelManager>.Instance.GetRandomDynamicVo(list3, dynamicType);
				if (dynamicBoxGoodsVo2 != null)
				{
					return dynamicBoxGoodsVo2;
				}
			}
			return null;
		}
		return dynamicBoxGoodsVo2;
	}

	public int GenerateRandomGoodsId()
	{
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		string[] array = production.Split(';');
		foreach (string text in array)
		{
			if (!text.IsNullOrEmpty())
			{
				string[] array2 = text.Split('|');
				if (array2.Length == 2)
				{
					list.Add(array2[0].ToInt());
					list2.Add(array2[1].ToInt());
				}
			}
		}
		return GameLevelDefine.GetRandomValue(list, list2);
	}

	public List<ItemVO> GetCostItemList()
	{
		if (mCosts == null)
		{
			mCosts = new List<ItemVO>();
			if (cost.IsNullOrEmpty())
			{
				return mCosts;
			}
			string[] array = cost.Split(';');
			foreach (string text in array)
			{
				if (!text.IsNullOrEmpty())
				{
					string[] array2 = text.Split('|');
					if (array2.Length == 2)
					{
						mCosts.Add(new ItemVO
						{
							id = array2[0].ToInt(),
							num = array2[1].ToInt()
						});
					}
				}
			}
		}
		return mCosts;
	}

	public List<int> GetConversionList()
	{
		if (mConversions == null)
		{
			mConversions = new List<int>();
			if (conversion.IsNullOrEmpty())
			{
				return mConversions;
			}
			string[] array = conversion.Split(';');
			foreach (string text in array)
			{
				if (text.IsNullOrEmpty())
				{
					continue;
				}
				string[] array2 = text.Split('|');
				if (array2.Length == 2)
				{
					for (int j = 0; j < array2[1].ToInt(); j++)
					{
						mConversions.Add(array2[0].ToInt());
					}
				}
			}
		}
		return mConversions;
	}

	public bool IsDropBySeries(int series)
	{
		if (mCanProduceGoodsIDs == null)
		{
			InitProduceList();
		}
		for (int i = 0; i < mCanProduceGoodsIDs.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mCanProduceGoodsIDs[i]);
			if (goodsBaseVoById != null && goodsBaseVoById.series == series)
			{
				return true;
			}
		}
		return false;
	}

	public List<int> GetCDList()
	{
		if (mCDList == null)
		{
			InitCDTime();
		}
		return mCDList;
	}

	public int GetCDTime(int cdIndex)
	{
		if (mCDList == null)
		{
			InitCDTime();
		}
		if (mCDList.Count > cdIndex)
		{
			return mCDList[cdIndex];
		}
		return 0;
	}

	public int GetMinCDTime()
	{
		if (minTime >= 0)
		{
			return minTime;
		}
		if (mCDList == null)
		{
			InitCDTime();
		}
		for (int i = 0; i < mCDList.Count; i++)
		{
			if (minTime == -1)
			{
				minTime = mCDList[i];
			}
			else if (minTime > mCDList[i])
			{
				minTime = mCDList[i];
			}
		}
		return minTime;
	}

	public int GetTotalCDTime()
	{
		if (mCDList == null)
		{
			InitCDTime();
		}
		return mTotalCdTime;
	}

	public int GetAccelerate(int index, int buyCount)
	{
		if (mAccelerateList == null)
		{
			InitAccelerateList();
		}
		if (mAccelerateList.Count > index)
		{
			if (mAccelerateList[index].Count > buyCount)
			{
				return mAccelerateList[index][buyCount];
			}
			return mAccelerateList[index][mAccelerateList[index].Count - 1];
		}
		if (mAccelerateList.Count > 0)
		{
			if (mAccelerateList[mAccelerateList.Count - 1].Count > buyCount)
			{
				return mAccelerateList[mAccelerateList.Count - 1][buyCount];
			}
			return mAccelerateList[mAccelerateList.Count - 1][mAccelerateList[index].Count - 1];
		}
		return 0;
	}

	public int GetAdAccelerate(int index)
	{
		if (mAdAccelerateList == null)
		{
			InitAdAccelerateList();
		}
		if (mAdAccelerateList.Count > index)
		{
			return mAdAccelerateList[index];
		}
		if (mAdAccelerateList.Count > 0)
		{
			return mAdAccelerateList[mAdAccelerateList.Count - 1];
		}
		return 0;
	}

	private void InitCDTime()
	{
		mCDList = new List<int>();
		if (!cd.IsNotNullAndEmpty())
		{
			return;
		}
		mTotalCdTime = 0;
		string[] array = cd.Split(';');
		for (int i = 0; i < array.Length; i++)
		{
			if (!array[i].IsNullOrEmpty())
			{
				mCDList.Add(array[i].ToInt());
				mTotalCdTime += array[i].ToInt();
			}
		}
	}

	private void InitAccelerateList()
	{
		mAccelerateList = new List<List<int>>();
		if (!accelerate.IsNotNullAndEmpty())
		{
			return;
		}
		string[] array = accelerate.Split(';');
		for (int i = 0; i < array.Length; i++)
		{
			if (!array[i].IsNullOrEmpty())
			{
				string[] array2 = array[i].Split('|');
				List<int> list = new List<int>();
				for (int j = 0; j < array2.Length; j++)
				{
					list.Add(array2[j].ToInt());
				}
				mAccelerateList.Add(list);
			}
		}
	}

	private void InitAdAccelerateList()
	{
		mAdAccelerateList = new List<int>();
		if (!adAccelerate.IsNotNullAndEmpty())
		{
			return;
		}
		string[] array = adAccelerate.Split(';');
		for (int i = 0; i < array.Length; i++)
		{
			if (!array[i].IsNullOrEmpty())
			{
				mAdAccelerateList.Add(array[i].ToInt());
			}
		}
	}

	private void InitProductConversionCount()
	{
		if (_productCount != null)
		{
			return;
		}
		_productCount = new Dictionary<int, int>();
		List<int> list = new List<int>(GetConversionList());
		for (int i = 0; i < capacity; i++)
		{
			list.AddRange(GetProduceList());
		}
		foreach (int item in list)
		{
			if (!_productCount.ContainsKey(item))
			{
				_productCount.Add(item, 0);
			}
			_productCount[item]++;
		}
	}

	public Dictionary<int, int> GetSingleRoundCreateConversionTotalCount()
	{
		InitProductConversionCount();
		return _productCount;
	}

	public int GetSingleRoundCreateConversionCountByProductGoodsID(int goodsID)
	{
		InitProductConversionCount();
		_productCount.TryGetValue(goodsID, out var value);
		return value;
	}

	public int Get1SourceCreateConversionTotalCount()
	{
		InitProductConversionCount();
		int num = 0;
		foreach (KeyValuePair<int, int> item in _productCount)
		{
			num += item.Value;
		}
		return num;
	}
}
