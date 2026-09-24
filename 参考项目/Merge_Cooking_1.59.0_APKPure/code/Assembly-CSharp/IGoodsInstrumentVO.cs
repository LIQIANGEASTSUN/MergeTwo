using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IGoodsInstrumentVO : BaseVO
{
	public int goodsID;

	public int instrumentType;

	public string recipes = "";

	public string conversion = "";

	public int cd;

	public int initialNumber;

	public int frequency;

	public int capacity;

	public int accelerate;

	public int adAccelerate;

	public int reduceTime;

	public string cost = "";

	private List<ItemVO> mCosts;

	private List<int> mConversions;

	private int mIsSpecialInstrument = -1;

	private HashSet<int> _mMaterialSet;

	private Dictionary<int, MakeRecipeVO> mMakeRecipes;

	private List<MakeRecipeVO> mMakeRecipesList;

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

	public void ClearCache()
	{
		mMakeRecipes = null;
		mMakeRecipesList = null;
	}

	public MakeRecipeVO GetMakeRecipeVo(int goodsID)
	{
		if (mMakeRecipes == null)
		{
			InitMakeRecipes();
		}
		if (mMakeRecipes.ContainsKey(goodsID))
		{
			return mMakeRecipes[goodsID];
		}
		return null;
	}

	public int GetMakingGoodsByMaterials(List<int> materials)
	{
		if (mMakeRecipes == null)
		{
			InitMakeRecipes();
		}
		Dictionary<int, MakeRecipeVO>.Enumerator enumerator = mMakeRecipes.GetEnumerator();
		while (enumerator.MoveNext())
		{
			MakeRecipeVO value = enumerator.Current.Value;
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(value.goodsID);
			if (goodsCookingVO != null && goodsCookingVO.CheckContainByMaterials(materials))
			{
				return goodsCookingVO.goodsID;
			}
		}
		return -1;
	}

	public List<int> GetMakingIDsByMaterials(List<int> materials)
	{
		List<int> list = new List<int>();
		if (mMakeRecipes == null)
		{
			InitMakeRecipes();
		}
		Dictionary<int, MakeRecipeVO>.Enumerator enumerator = mMakeRecipes.GetEnumerator();
		while (enumerator.MoveNext())
		{
			MakeRecipeVO value = enumerator.Current.Value;
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(value.goodsID);
			if (goodsCookingVO != null && goodsCookingVO.CheckContainByMaterials(materials))
			{
				list.Add(goodsCookingVO.goodsID);
			}
		}
		return list;
	}

	public List<int> GetMakingIDsByMaterials(List<MakingMaterialVo> materials)
	{
		List<int> list = new List<int>(Utils.GetCapacity(materials.Count));
		for (int i = 0; i < materials.Count; i++)
		{
			list.Add(materials[i].goodsID);
		}
		return GetMakingIDsByMaterials(list);
	}

	public int GetMakingGoodsIDByMaterial(int material)
	{
		if (mMakeRecipes == null)
		{
			InitMakeRecipes();
		}
		Dictionary<int, MakeRecipeVO>.Enumerator enumerator = mMakeRecipes.GetEnumerator();
		while (enumerator.MoveNext())
		{
			MakeRecipeVO value = enumerator.Current.Value;
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(value.goodsID);
			if (goodsCookingVO != null && goodsCookingVO.CheckContainByGoodsId(material))
			{
				return goodsCookingVO.goodsID;
			}
		}
		return -1;
	}

	public int CheckMaterialsMakingGoods(List<MakingMaterialVo> materials)
	{
		int result = -1;
		if (materials != null && materials.Count > 0)
		{
			if (mMakeRecipesList == null)
			{
				InitMakeRecipes();
			}
			for (int i = 0; i < mMakeRecipesList.Count; i++)
			{
				MakeRecipeVO makeRecipeVO = mMakeRecipesList[i];
				if (makeRecipeVO == null)
				{
					continue;
				}
				IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(makeRecipeVO.goodsID);
				if (goodsCookingVO == null)
				{
					continue;
				}
				List<BaseData2VO> materials2 = goodsCookingVO.GetMaterials();
				if (CompareMaterial(materials, materials2))
				{
					if (goodsCookingVO.specialType == 1)
					{
						return goodsCookingVO.goodsID;
					}
					result = goodsCookingVO.goodsID;
				}
			}
		}
		return result;
	}

	private bool CompareMaterial(List<MakingMaterialVo> materials, List<BaseData2VO> needMaterials)
	{
		if (materials.Count != needMaterials.Count)
		{
			return false;
		}
		if (_mMaterialSet == null)
		{
			_mMaterialSet = new HashSet<int>();
		}
		else
		{
			_mMaterialSet.Clear();
		}
		for (int i = 0; i < materials.Count; i++)
		{
			_mMaterialSet.Add(materials[i].goodsID);
		}
		for (int j = 0; j < needMaterials.Count; j++)
		{
			if (!_mMaterialSet.Contains(needMaterials[j].id))
			{
				return false;
			}
		}
		return true;
	}

	public Dictionary<int, MakeRecipeVO> GetMakeRecipes()
	{
		if (mMakeRecipes == null)
		{
			InitMakeRecipes();
		}
		return mMakeRecipes;
	}

	public List<MakeRecipeVO> GetMakeRecipesList()
	{
		if (mMakeRecipesList == null)
		{
			InitMakeRecipes();
		}
		return mMakeRecipesList;
	}

	public bool GetInstrumentSpecial()
	{
		if (mIsSpecialInstrument == -1)
		{
			mIsSpecialInstrument = 0;
			if (mMakeRecipesList == null)
			{
				InitMakeRecipes();
			}
			for (int i = 0; i < mMakeRecipesList.Count; i++)
			{
				IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(mMakeRecipesList[i].goodsID);
				if (goodsCookingVO != null && goodsCookingVO.specialType > 0)
				{
					mIsSpecialInstrument = 1;
					break;
				}
			}
		}
		return mIsSpecialInstrument == 1;
	}

	private void InitMakeRecipes()
	{
		mMakeRecipesList = Singleton<GameLevelManager>.Instance.GetMakeRecipesByMachineID(goodsID);
		if (mMakeRecipesList == null)
		{
			return;
		}
		int num = Utils.GetCapacity(mMakeRecipesList.Count);
		mMakeRecipes = new Dictionary<int, MakeRecipeVO>(num);
		for (int i = 0; i < mMakeRecipesList.Count; i++)
		{
			MakeRecipeVO makeRecipeVO = mMakeRecipesList[i];
			if (makeRecipeVO != null && !mMakeRecipes.ContainsKey(makeRecipeVO.goodsID))
			{
				mMakeRecipes.Add(mMakeRecipesList[i].goodsID, mMakeRecipesList[i]);
			}
		}
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
}
