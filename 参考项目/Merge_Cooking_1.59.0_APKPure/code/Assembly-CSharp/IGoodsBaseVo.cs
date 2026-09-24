using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IGoodsBaseVo : BaseVO
{
	public int goodsID;

	public string name = "";

	public string desc = "";

	public string icon = "";

	public int type;

	public int productionType;

	public int series;

	public int level;

	public string source = "";

	public int directSelling;

	public int rareItem;

	public int banSplit;

	public int recipeMatType;

	public int activityType;

	public int canUpgrade;

	public List<int> mSource = new List<int>();

	private List<int> mCreatorSeries;

	private List<int> mInstrumentSeries;

	private List<int> mBaseGoodsSeries;

	public List<int> GetSource
	{
		get
		{
			if (mSource.Count == 0)
			{
				string[] array = source.Split(';');
				for (int i = 0; i < array.Length; i++)
				{
					if (!array[i].IsNullOrEmpty())
					{
						mSource.Add(array[i].ToInt());
					}
				}
			}
			return mSource;
		}
	}

	private bool FromCooking => productionType == 1;

	public bool NeedCookingToRecipe()
	{
		return recipeMatType == 2;
	}

	public IGoodsShapeVo GetShapeData()
	{
		return Singleton<GameLevelManager>.Instance.GetGoodsShapeById(goodsID);
	}

	public string GetIcon()
	{
		return icon;
	}

	public List<int> UsedCreatorSeries()
	{
		if (mCreatorSeries == null)
		{
			mCreatorSeries = _UsedCreatorSeries();
			mCreatorSeries.DeleteRepeat();
		}
		return mCreatorSeries;
	}

	private List<int> _UsedCreatorSeries(int recurseLayers = 10)
	{
		List<int> list = new List<int>();
		if (recurseLayers < 0)
		{
			return list;
		}
		if (FromCooking)
		{
			IGoodsCookingVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsCookingList.GetItem(goodsID);
			if (item != null)
			{
				foreach (BaseData2VO material in item.GetMaterials())
				{
					if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(material.id) != null)
					{
						list.AddRange(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(material.id)._UsedCreatorSeries(--recurseLayers));
					}
				}
			}
		}
		else
		{
			List<int> getSource = GetSource;
			for (int i = 0; i < getSource.Count; i++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(getSource[i]);
				if (goodsBaseVoById != null && goodsBaseVoById.series > 0 && list.IndexOf(goodsBaseVoById.series) < 0)
				{
					list.Add(series);
				}
			}
		}
		return list;
	}

	public List<int> UsedInstrumentSeries()
	{
		if (mInstrumentSeries == null)
		{
			mInstrumentSeries = _UsedInstrumentSeries();
			mInstrumentSeries.DeleteRepeat();
		}
		return mInstrumentSeries;
	}

	private List<int> _UsedInstrumentSeries(int recurseLayers = 10)
	{
		List<int> list = new List<int>();
		if (recurseLayers < 0)
		{
			return list;
		}
		if (FromCooking)
		{
			IGoodsCookingVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsCookingList.GetItem(goodsID);
			if (item != null)
			{
				list.Add(item.instrumentType);
				foreach (BaseData2VO material in item.GetMaterials())
				{
					if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(material.id) != null)
					{
						list.AddRange(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(material.id)._UsedInstrumentSeries(--recurseLayers));
					}
				}
			}
		}
		return list;
	}

	public List<int> UsedBaseGoodsSeries()
	{
		if (mBaseGoodsSeries == null)
		{
			mBaseGoodsSeries = _UsedBaseGoodsSeries();
			mBaseGoodsSeries.DeleteRepeat();
		}
		return mBaseGoodsSeries;
	}

	private List<int> _UsedBaseGoodsSeries(int recurseLayers = 20)
	{
		List<int> list = new List<int>();
		if (recurseLayers < 0)
		{
			return list;
		}
		if (FromCooking)
		{
			IGoodsCookingVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsCookingList.GetItem(goodsID);
			if (item != null)
			{
				foreach (BaseData2VO material in item.GetMaterials())
				{
					if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(material.id) != null)
					{
						list.AddRange(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(material.id)._UsedBaseGoodsSeries(--recurseLayers));
					}
				}
			}
		}
		else
		{
			list.Add(series);
		}
		return list;
	}

	public static bool IsCreator(int GoodsType)
	{
		if (GoodsType != 2 && GoodsType != 4)
		{
			return GoodsType == 5;
		}
		return true;
	}

	public static bool IsInstrument(int GoodsType)
	{
		if (GoodsType != 7 && GoodsType != 8 && GoodsType != 12)
		{
			return GoodsType == 13;
		}
		return true;
	}

	public static bool IsPermanentlyInstrument(int GoodsType)
	{
		if (GoodsType != 7)
		{
			return GoodsType == 8;
		}
		return true;
	}

	public static bool IsConversion(int GoodsType)
	{
		if (GoodsType != 3)
		{
			return GoodsType == 6;
		}
		return true;
	}

	public static bool IsDisposableMachine(int GoodsType)
	{
		if (GoodsType != 12)
		{
			return GoodsType == 13;
		}
		return true;
	}

	public static bool IsAutoConversion(int GoodsType)
	{
		if (GoodsType != 25)
		{
			return GoodsType == 26;
		}
		return true;
	}

	public static bool IsTreasureBox(int GoodsType)
	{
		if (GoodsType != 10 && GoodsType != 11 && GoodsType != 14)
		{
			return GoodsType == 28;
		}
		return true;
	}

	public static bool IsGoodsBox(int GoodsType)
	{
		if (GoodsType != 10 && GoodsType != 11 && GoodsType != 14 && GoodsType != 28 && GoodsType != 17 && GoodsType != 18)
		{
			return GoodsType == 30;
		}
		return true;
	}

	public static bool IsInitiativeConversion(int GoodsType)
	{
		return GoodsType == 3;
	}

	public static bool IsAdditionalCard(int GoodsType)
	{
		return GoodsType == 15;
	}

	public static bool IsSpecialTip(int GoodsType)
	{
		return false;
	}

	public static bool IsAutoColloction(int GoodsType)
	{
		return GoodsType == 29;
	}

	public static bool IsDisabled(GameGoodsState state)
	{
		if (state != GameGoodsState.Lock && state != GameGoodsState.Covered && state != GameGoodsState.FakeCovered && state != GameGoodsState.SpecialCovered && state != GameGoodsState.SpecialLock && state != GameGoodsState.Obstacle && state != GameGoodsState.Bubble)
		{
			return state == GameGoodsState.AwaitRemove;
		}
		return true;
	}

	public static bool IsCoolDown(GameGoodsState state)
	{
		if (state != GameGoodsState.CoolDown)
		{
			return state == GameGoodsState.HideCoolDown;
		}
		return true;
	}

	public static bool IsShowCoolDown(GameGoodsState state)
	{
		return state == GameGoodsState.CoolDown;
	}

	public static bool CannotDrag(GameGoodsState state)
	{
		if (state != GameGoodsState.Lock && state != GameGoodsState.Covered && state != GameGoodsState.FakeCovered && state != GameGoodsState.SpecialCovered && state != GameGoodsState.SpecialLock && state != GameGoodsState.Obstacle)
		{
			return state == GameGoodsState.AwaitRemove;
		}
		return true;
	}

	public static bool CannotMerge(GameGoodsState state)
	{
		if (state != GameGoodsState.Covered && state != GameGoodsState.FakeCovered && state != GameGoodsState.SpecialCovered && state != GameGoodsState.SpecialLock)
		{
			return state == GameGoodsState.Obstacle;
		}
		return true;
	}

	public static bool CanSelect(GameGoodsState state)
	{
		if (state != GameGoodsState.Covered && state != GameGoodsState.FakeCovered && state != GameGoodsState.SpecialCovered)
		{
			return state != GameGoodsState.Obstacle;
		}
		return false;
	}

	public static bool CanAutoUpdate(GameGoodsState state)
	{
		if (state != GameGoodsState.CoolDown && state != GameGoodsState.HideCoolDown && state != GameGoodsState.AutoProduce && state != GameGoodsState.Bubble)
		{
			return state == GameGoodsState.Working;
		}
		return true;
	}

	public static bool IsLimitedGoods(int itemID)
	{
		if (itemID != 1005 && itemID != 1012 && itemID != 1013 && itemID != 1014 && itemID != 1015 && itemID != 1016 && itemID != 1017 && itemID != 1026)
		{
			return itemID == 1027;
		}
		return true;
	}

	public static bool IsInitiativeCreator(int GoodsType)
	{
		return GoodsType == 2;
	}

	public static bool IsPassiveCreator(int GoodsType)
	{
		if (GoodsType != 4)
		{
			return GoodsType == 5;
		}
		return true;
	}
}
