using System.Collections.Generic;
using TLF;

public abstract class GameGoodsBase
{
	protected GameGoodsType mGoodsType = GameGoodsType.Normal;

	protected GameGoodsVo mGoodsVo;

	protected IGoodsBaseVo mGoodsBaseVo;

	protected GameLevelGrid mGameLevelGrid;

	protected Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase> mAttributesDic;

	public GameGoodsVo GameGoods => mGoodsVo;

	public IGoodsBaseVo GoodsBaseVo => mGoodsBaseVo;

	public GameGoodsType GoodsType => mGoodsType;

	public GameLevelGrid GameGrid => mGameLevelGrid;

	public GameGoodsBase(GameGoodsType goodsType, GameGoodsVo goodsVo, GameLevelGrid grid)
	{
		mGoodsType = goodsType;
		mGoodsVo = goodsVo;
		mGameLevelGrid = grid;
		if (mGoodsVo != null)
		{
			mGoodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mGoodsVo.goodsID);
			if (mGoodsBaseVo != null)
			{
				mGoodsType = (GameGoodsType)mGoodsBaseVo.type;
			}
		}
	}

	public void ChangeGameLevelGrid(GameLevelGrid gameLevelGrid)
	{
		mGameLevelGrid = gameLevelGrid;
	}

	public bool CanInstrumentMergeStatus()
	{
		if (GameGoods == null)
		{
			return true;
		}
		if (IGoodsBaseVo.IsInstrument((int)GoodsType) && (GameGoods.GoodsState == GameGoodsState.Working || GameGoods.GoodsState == GameGoodsState.InitiativeProduce || GameGoods.MakeMaterials.Count > 0))
		{
			return false;
		}
		return true;
	}

	protected virtual void Initialize()
	{
	}

	protected void AddAttribute(GameGoodsAttributeType attributeType, GameGoodsAttributeBase attribute)
	{
		if (mAttributesDic == null)
		{
			mAttributesDic = new Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>();
		}
		if (!mAttributesDic.ContainsKey(attributeType))
		{
			mAttributesDic.Add(attributeType, attribute);
		}
	}

	protected void RemoveAttribute(GameGoodsAttributeType attributeType)
	{
		if (mAttributesDic != null && mAttributesDic.ContainsKey(attributeType))
		{
			mAttributesDic.Remove(attributeType);
		}
	}

	protected GameGoodsAttributeBase GetAttribute(GameGoodsAttributeType attributeType)
	{
		if (mAttributesDic != null && mAttributesDic.ContainsKey(attributeType))
		{
			return mAttributesDic[attributeType];
		}
		return null;
	}

	public void InitializeAttribute()
	{
		if (mAttributesDic != null)
		{
			Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnInitialize();
			}
		}
	}

	public void ExecuteAttribute(bool normal = true)
	{
		if (mAttributesDic != null)
		{
			Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnExecute(normal);
			}
		}
	}

	public void UpdateAttribute()
	{
		if (mAttributesDic != null)
		{
			Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnUpdate();
			}
		}
	}

	public void CDSpeedupAttribute(int time)
	{
		if (mAttributesDic != null)
		{
			Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnCoolDownSpeedup(time);
			}
		}
	}

	public void MakingSpeedupAttribute(int time)
	{
		if (mAttributesDic != null)
		{
			Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnMakingSpeedup(time);
			}
		}
	}

	public void SpecialExecuteAttribute()
	{
		if (mAttributesDic != null)
		{
			Dictionary<GameGoodsAttributeType, GameGoodsAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnSpecialExecute();
			}
		}
	}

	public virtual GameGoodsBase Merge(GameGoodsBase targetGoods, GameLevelGrid targetGrid)
	{
		if (mGoodsVo == null || targetGoods == null || targetGoods.GameGoods == null)
		{
			return null;
		}
		IGoodsBaseVo nextLevelGoods = Singleton<GameLevelManager>.Instance.GetNextLevelGoods(mGoodsVo, targetGoods.GameGoods);
		return Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(nextLevelGoods.goodsID, targetGrid);
	}

	public virtual void Use()
	{
	}

	public virtual void SpecialUse()
	{
	}

	public virtual bool CheckEligible(object args)
	{
		return false;
	}

	public virtual bool MakingRevocation()
	{
		return false;
	}

	public virtual void Dispose()
	{
	}
}
