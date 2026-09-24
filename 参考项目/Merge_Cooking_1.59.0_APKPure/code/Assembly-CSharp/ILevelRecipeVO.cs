using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class ILevelRecipeVO : BaseVO
{
	public enum EMaterialType
	{
		E_BaseLayer,
		E_AllLayer,
		E_Direct,
		E_Direct_noDeleteRepeat
	}

	public int id;

	public string name = "";

	public string name2 = "";

	public string icon = "";

	public string deliverables = "";

	public int type = 1;

	public int unlockRestaurantID;

	public int unlockRestaurantLevel;

	public string reward = "";

	public int playerLv;

	public int recipePoolID;

	public int cuisineID;

	private List<int> cookingMats;

	private List<int> cookingMats_repeat;

	private List<int> cookingMats_directMat;

	private List<int> cookingMats_directMat_repeat;

	private List<int> mCookingMaterials_base;

	private List<int> mCookingMaterials_all;

	private List<int> mCookingMaterials_direct;

	private List<int> mCookingMaterials_direct_noDeleteRepeat;

	private List<BaseData2VO> m_deliverables;

	private List<BaseData3VO> m_rewardList;

	private List<int> baseGoodsSeries;

	private List<int> baseGoodsSeries_repeat;

	private List<int> creatorSeries;

	private List<int> creatorSeries_repeat;

	private List<int> creatorSeries_passive;

	private List<int> instrumentSeries;

	private List<int> instrumentSeries_repeat;

	private List<int> instrumentSeriesIncludeSource;

	public List<BaseData2VO> Deliverables
	{
		get
		{
			if (m_deliverables == null)
			{
				m_deliverables = BaseData2VO.GetBaseData2VOList(deliverables);
			}
			return m_deliverables;
		}
	}

	public List<BaseData3VO> RewardList
	{
		get
		{
			if (m_rewardList == null)
			{
				m_rewardList = BaseData3VO.GetBaseData3VOList(reward);
			}
			return m_rewardList;
		}
	}

	public List<int> BaseGodosSeries
	{
		get
		{
			if (baseGoodsSeries == null)
			{
				baseGoodsSeries = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					baseGoodsSeries.AddRange(Singleton<GameLevelManager>.Instance.GetMaterialSeriesByGoodsId(Deliverables[i].id));
				}
				baseGoodsSeries.DeleteRepeat();
			}
			return baseGoodsSeries;
		}
	}

	public List<int> BaseGodosSeries_Repeat
	{
		get
		{
			if (baseGoodsSeries_repeat == null)
			{
				baseGoodsSeries_repeat = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					baseGoodsSeries_repeat.AddRange(Singleton<GameLevelManager>.Instance.GetMaterialSeriesByGoodsId(Deliverables[i].id, canRepeat: true));
				}
			}
			return baseGoodsSeries_repeat;
		}
	}

	public List<int> BaseCreatorSeries
	{
		get
		{
			if (creatorSeries == null)
			{
				creatorSeries = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					creatorSeries.AddRange(Singleton<GameLevelManager>.Instance.GetGeneratorSeriesByGoodsId(Deliverables[i].id));
				}
				creatorSeries.DeleteRepeat();
			}
			return creatorSeries;
		}
	}

	public List<int> BaseCreatorSeries_Repeat
	{
		get
		{
			if (creatorSeries_repeat == null)
			{
				creatorSeries_repeat = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					creatorSeries_repeat.AddRange(Singleton<GameLevelManager>.Instance.GetGeneratorSeriesByGoodsId(Deliverables[i].id, canRepeat: true));
				}
			}
			return creatorSeries_repeat;
		}
	}

	public List<int> BaseCreatorSeries_Passive
	{
		get
		{
			if (creatorSeries_passive == null)
			{
				creatorSeries_passive = new List<int>();
				foreach (int item in BaseCreatorSeries)
				{
					if (Singleton<GameLevelManager>.Instance.IsGeneratorSeries_Passive(item))
					{
						creatorSeries_passive.Add(item);
					}
				}
			}
			return creatorSeries_passive;
		}
	}

	public List<int> BaseInstrumentSeries
	{
		get
		{
			if (instrumentSeries == null)
			{
				instrumentSeries = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					instrumentSeries.AddRange(Singleton<GameLevelManager>.Instance.GetInstrumentSeriesByGoodsId(Deliverables[i].id));
				}
				instrumentSeries.DeleteRepeat();
			}
			return instrumentSeries;
		}
	}

	public List<int> BaseInstrumentSeries_Repeat
	{
		get
		{
			if (instrumentSeries_repeat == null)
			{
				instrumentSeries_repeat = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					instrumentSeries_repeat.AddRange(Singleton<GameLevelManager>.Instance.GetInstrumentSeriesByGoodsId(Deliverables[i].id));
				}
			}
			return instrumentSeries_repeat;
		}
	}

	public List<int> BaseInstrumentSeriesIncludeSource
	{
		get
		{
			if (instrumentSeriesIncludeSource == null)
			{
				instrumentSeriesIncludeSource = new List<int>();
				for (int i = 0; i < Deliverables.Count; i++)
				{
					instrumentSeriesIncludeSource.AddRange(Singleton<GameLevelManager>.Instance.GetInstrumentSeriesByGoodsIdIncludeSource(Deliverables[i].id));
				}
				instrumentSeriesIncludeSource.DeleteRepeat();
			}
			return instrumentSeriesIncludeSource;
		}
	}

	public List<int> CookingMats(bool canRepeat = false, bool directMat = false, bool baseMat = false)
	{
		if (cookingMats == null)
		{
			cookingMats = new List<int>();
			cookingMats_directMat = new List<int>();
			for (int i = 0; i < Deliverables.Count; i++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(Deliverables[i].id);
				if (goodsBaseVoById == null)
				{
					continue;
				}
				if (goodsBaseVoById.productionType == 0)
				{
					int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
					if (derivativeSourceID == 0)
					{
						cookingMats.Add(goodsBaseVoById.goodsID);
					}
					else
					{
						cookingMats.Add(derivativeSourceID);
					}
					cookingMats_directMat.Add(goodsBaseVoById.goodsID);
				}
				else
				{
					if (goodsBaseVoById.productionType != 1)
					{
						continue;
					}
					IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(Deliverables[i].id);
					if (goodsCookingVO == null)
					{
						continue;
					}
					foreach (BaseData2VO material in goodsCookingVO.GetMaterials())
					{
						cookingMats.Add(material.id);
						cookingMats_directMat.Add(material.id);
					}
				}
			}
		}
		if (cookingMats_repeat == null)
		{
			cookingMats_repeat = new List<int>(cookingMats);
			cookingMats_repeat.DeleteRepeat();
		}
		if (cookingMats_directMat_repeat == null)
		{
			cookingMats_directMat_repeat = new List<int>(cookingMats_directMat);
			cookingMats_directMat_repeat.DeleteRepeat();
		}
		if (directMat)
		{
			if (!canRepeat)
			{
				return cookingMats_directMat;
			}
			return cookingMats_directMat_repeat;
		}
		if (!canRepeat)
		{
			return cookingMats;
		}
		return cookingMats_repeat;
	}

	public List<int> CookingMaterials(EMaterialType materialType)
	{
		if (mCookingMaterials_all == null || mCookingMaterials_base == null || mCookingMaterials_direct == null)
		{
			mCookingMaterials_all = new List<int>();
			mCookingMaterials_base = new List<int>();
			mCookingMaterials_direct = new List<int>();
			mCookingMaterials_direct_noDeleteRepeat = new List<int>();
			for (int i = 0; i < Deliverables.Count; i++)
			{
				mCookingMaterials_base.AddRange(MatsByGoodsID(Deliverables[i].id, directMat: false, allLayer: false));
				mCookingMaterials_all.AddRange(MatsByGoodsID(Deliverables[i].id, directMat: false, allLayer: true));
				mCookingMaterials_direct.AddRange(MatsByGoodsID(Deliverables[i].id, directMat: true, allLayer: false));
				mCookingMaterials_direct_noDeleteRepeat.AddRange(MatsByGoodsID(Deliverables[i].id, directMat: true, allLayer: false));
			}
			mCookingMaterials_base.DeleteRepeat();
			mCookingMaterials_all.DeleteRepeat();
			mCookingMaterials_direct.DeleteRepeat();
		}
		return materialType switch
		{
			EMaterialType.E_BaseLayer => mCookingMaterials_base, 
			EMaterialType.E_AllLayer => mCookingMaterials_all, 
			EMaterialType.E_Direct => mCookingMaterials_direct, 
			EMaterialType.E_Direct_noDeleteRepeat => mCookingMaterials_direct_noDeleteRepeat, 
			_ => mCookingMaterials_base, 
		};
	}

	public static List<int> ConvertGoodsDownLv(Dictionary<int, int> temp_userGoodsNumDic, int _goodsID)
	{
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(_goodsID);
		if (goodsBaseVoById == null)
		{
			return list;
		}
		if (temp_userGoodsNumDic.ContainsKey(goodsBaseVoById.goodsID) && temp_userGoodsNumDic[goodsBaseVoById.goodsID] > 0)
		{
			temp_userGoodsNumDic[goodsBaseVoById.goodsID]--;
		}
		else if (goodsBaseVoById.level == 1)
		{
			list.Add(goodsBaseVoById.goodsID);
		}
		else if (goodsBaseVoById.level > 1)
		{
			IGoodsBaseVo goodsBaseVoBySeriesAndLevel = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level - 1);
			if (goodsBaseVoBySeriesAndLevel != null)
			{
				list.AddRange(ConvertGoodsDownLv(temp_userGoodsNumDic, goodsBaseVoBySeriesAndLevel.goodsID));
				list.AddRange(ConvertGoodsDownLv(temp_userGoodsNumDic, goodsBaseVoBySeriesAndLevel.goodsID));
			}
		}
		return list;
	}

	public static List<int> MatsByGoodsID(int goodsID, bool directMat, bool allLayer)
	{
		List<int> list = new List<int>();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById != null)
		{
			if (goodsBaseVoById.productionType == 0)
			{
				if (directMat)
				{
					list.Add(goodsBaseVoById.goodsID);
				}
				else
				{
					int derivativeSourceID = Singleton<GameLevelManager>.Instance.GetDerivativeSourceID(goodsBaseVoById);
					if (derivativeSourceID == 0)
					{
						list.Add(goodsBaseVoById.goodsID);
					}
					else
					{
						list.AddRange(MatsByGoodsID(derivativeSourceID, directMat, allLayer));
						if (allLayer)
						{
							list.Add(goodsBaseVoById.goodsID);
						}
					}
				}
			}
			else if (goodsBaseVoById.productionType == 1)
			{
				IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(goodsID);
				if (goodsCookingVO != null)
				{
					foreach (BaseData2VO material in goodsCookingVO.GetMaterials())
					{
						list.AddRange(MatsByGoodsID(material.id, directMat, allLayer));
						if (allLayer)
						{
							list.Add(material.id);
						}
					}
				}
			}
		}
		return list;
	}

	public bool CanRecipe(int canRecipeCount = 1)
	{
		if (Deliverables.Count == 0)
		{
			return false;
		}
		for (int i = 0; i < Deliverables.Count; i++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(Deliverables[i].id) < Deliverables[i].num * canRecipeCount)
			{
				return false;
			}
		}
		return true;
	}

	public bool CanCooking(int canCookingCount = 1)
	{
		List<int> list = CookingMaterials(EMaterialType.E_Direct);
		if (list.Count == 0)
		{
			return false;
		}
		for (int i = 0; i < list.Count; i++)
		{
			if (Singleton<GameLevelManager>.Instance.GetGoodsNumById(list[i]) < canCookingCount)
			{
				return false;
			}
		}
		return true;
	}

	public bool IsUnlock()
	{
		return ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel() >= playerLv;
	}

	public bool checkRange()
	{
		bool result = true;
		bool ignoreMin = BaseGodosSeries.Count > 1;
		List<int> list = CookingMaterials(EMaterialType.E_BaseLayer);
		for (int i = 0; i < list.Count; i++)
		{
			if (!Singleton<GameLevelManager>.Instance.CheckGoodsDynamicOrderRangeById(list[i], ignoreMin))
			{
				result = false;
				break;
			}
		}
		return result;
	}

	public int CompleteDynamicTime()
	{
		int num = 0;
		foreach (BaseData2VO deliverable in Deliverables)
		{
			int goodsMakingTime = Singleton<GameLevelManager>.Instance.GetGoodsMakingTime(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(deliverable.id));
			if (goodsMakingTime > 0)
			{
				num += goodsMakingTime;
				continue;
			}
			return 0;
		}
		return num;
	}

	public int CompleteClickTimes()
	{
		int num = 0;
		foreach (BaseData2VO deliverable in Deliverables)
		{
			int goodsMakingClicks = Singleton<GameLevelManager>.Instance.GetGoodsMakingClicks(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(deliverable.id));
			if (goodsMakingClicks > 0)
			{
				num += goodsMakingClicks;
			}
		}
		return num;
	}

	public int GetInitRewardExp()
	{
		int num = 0;
		for (int i = 0; i < Deliverables.Count; i++)
		{
			num += Singleton<GameLevelManager>.Instance.GetGoodsMakingPower(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(Deliverables[i].id)) * Deliverables[i].num;
		}
		return num;
	}

	public int GetInitMakingPower()
	{
		int num = 0;
		for (int i = 0; i < Deliverables.Count; i++)
		{
			num += Singleton<GameLevelManager>.Instance.GetGoodsMakingPower(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(Deliverables[i].id)) * Deliverables[i].num;
		}
		return num;
	}

	public int GetFirstGoodsID()
	{
		if (Deliverables != null && Deliverables.Count > 0)
		{
			return Deliverables[0].id;
		}
		return -1;
	}

	public string GetIcon()
	{
		return icon;
	}
}
