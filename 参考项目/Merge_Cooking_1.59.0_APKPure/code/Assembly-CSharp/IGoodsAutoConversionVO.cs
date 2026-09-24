using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IGoodsAutoConversionVO : BaseVO
{
	public int goodsID;

	public string materials = "";

	public int conversionGoodsID;

	public int themeID;

	private List<BaseData2VO> mMaterials;

	private List<int> mMaterialIDs;

	public bool CheckGoodsIsMaterial(int goodsID)
	{
		return GetMaterialIDs().Contains(goodsID);
	}

	public bool CheckContainByMaterials(List<int> materialIDs)
	{
		bool result = true;
		List<BaseData2VO> list = GetMaterials();
		List<int> list2 = new List<int>();
		for (int i = 0; i < list.Count; i++)
		{
			list2.Add(list[i].id);
		}
		for (int j = 0; j < materialIDs.Count; j++)
		{
			if (list2.Contains(materialIDs[j]))
			{
				list2.Remove(materialIDs[j]);
				continue;
			}
			result = false;
			break;
		}
		return result;
	}

	public List<BaseData2VO> GetMaterials()
	{
		if (mMaterials == null)
		{
			mMaterials = new List<BaseData2VO>();
			List<BaseData2VO> baseData2VOList = BaseData2VO.GetBaseData2VOList(materials);
			for (int i = 0; i < baseData2VOList.Count; i++)
			{
				for (int j = 0; j < baseData2VOList[i].num; j++)
				{
					mMaterials.Add(new BaseData2VO
					{
						id = baseData2VOList[i].id,
						num = 1
					});
				}
			}
		}
		return mMaterials;
	}

	public List<int> GetMaterialIDs()
	{
		if (mMaterialIDs == null)
		{
			mMaterialIDs = new List<int>();
			List<BaseData2VO> baseData2VOList = BaseData2VO.GetBaseData2VOList(materials);
			for (int i = 0; i < baseData2VOList.Count; i++)
			{
				mMaterialIDs.Add(baseData2VOList[i].id);
			}
		}
		return mMaterialIDs;
	}

	public int CheckMaterialsMakingGoods(List<MakingMaterialVo> readyMaterials)
	{
		if (readyMaterials != null && readyMaterials.Count > 0 && CompareMaterial(readyMaterials, GetMaterials()))
		{
			return conversionGoodsID;
		}
		return 0;
	}

	private bool CompareMaterial(List<MakingMaterialVo> materials, List<BaseData2VO> needMaterials)
	{
		if (materials.Count != needMaterials.Count)
		{
			return false;
		}
		bool[] array = new bool[needMaterials.Count];
		for (int i = 0; i < needMaterials.Count; i++)
		{
			for (int j = 0; j < materials.Count; j++)
			{
				if (needMaterials[i].id == materials[j].goodsID)
				{
					array[i] = true;
				}
			}
		}
		for (int k = 0; k < array.Length; k++)
		{
			if (!array[k])
			{
				return false;
			}
		}
		return true;
	}
}
