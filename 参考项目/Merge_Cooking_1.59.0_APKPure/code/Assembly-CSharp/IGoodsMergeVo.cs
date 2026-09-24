using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IGoodsMergeVo : BaseVO
{
	public int goodsID;

	public string certainDrop = "";

	public int probability;

	public string possibleDrop = "";

	public int bubbleConversionID;

	public string additionalReward = "";

	public int mergeDropBubble;

	private List<BaseData3VO> mAdditionalRewardList;

	private List<BaseData2VO> mCertainDrops;

	public bool IsPossibleDropItem_opt(int dropGoodsId)
	{
		if (ObjectManager.GetInstance().gameLevelModel.LastBubbleBuyGoodsID == dropGoodsId)
		{
			ShopDataVO shopDataVO = ObjectManager.GetInstance().shopDataModel.m_shopDataVO;
			if (shopDataVO != null && shopDataVO.d_RandomGoods.ShopGoodsList.Count > 0)
			{
				for (int i = 0; i < shopDataVO.d_RandomGoods.ShopGoodsList.Count; i++)
				{
					if (shopDataVO.d_RandomGoods.ShopGoodsList[i].id == dropGoodsId)
					{
						return true;
					}
				}
			}
		}
		List<int> targets = new List<int> { 1, 2 };
		List<int> weights = new List<int>
		{
			probability,
			100 - probability
		};
		return GameLevelDefine.GetRandomValue(targets, weights) == 1;
	}

	public bool IsPossibleDropItem()
	{
		List<int> targets = new List<int> { 1, 2 };
		List<int> weights = new List<int>
		{
			probability,
			100 - probability
		};
		return GameLevelDefine.GetRandomValue(targets, weights) == 1;
	}

	public List<BaseData2VO> GetCertainDrops()
	{
		if (mCertainDrops == null)
		{
			mCertainDrops = BaseData2VO.GetBaseData2VOList(certainDrop);
		}
		return mCertainDrops;
	}

	public int GetPossibleDropConfig()
	{
		string[] array = possibleDrop.Split(';');
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
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

	public List<BaseData3VO> AdditionalRewards()
	{
		if (mAdditionalRewardList == null)
		{
			mAdditionalRewardList = BaseData3VO.GetBaseData3VOList(additionalReward);
		}
		return mAdditionalRewardList;
	}
}
