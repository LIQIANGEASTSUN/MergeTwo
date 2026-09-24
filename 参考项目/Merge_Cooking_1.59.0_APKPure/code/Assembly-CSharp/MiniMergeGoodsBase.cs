using System.Collections.Generic;

public abstract class MiniMergeGoodsBase
{
	protected MiniMergeGoodsType mGoodsType = MiniMergeGoodsType.Normal;

	protected MiniMergeGameGoodsVo mGoodsVo;

	protected IMiniMergeGoodsBaseVo mGoodsBaseVo;

	protected MiniMergeGrid mGameLevelGrid;

	protected Dictionary<MiniMergeGoodsAttributeType, MiniMergeAttributeBase> mAttributesDic;

	public MiniMergeGameGoodsVo GameGoods => mGoodsVo;

	public IMiniMergeGoodsBaseVo GoodsBaseVo => mGoodsBaseVo;

	public MiniMergeGoodsType GoodsType => mGoodsType;

	public MiniMergeGrid GameGrid => mGameLevelGrid;

	public MiniMergeGoodsBase(MiniMergeGoodsType goodsType, MiniMergeGameGoodsVo goodsVo, MiniMergeGrid grid)
	{
		mGoodsType = goodsType;
		mGoodsVo = goodsVo;
		mGameLevelGrid = grid;
		if (mGoodsVo != null)
		{
			mGoodsBaseVo = MiniMergeDefine.GetGoodsConfigById(mGameLevelGrid.GetGridType(), mGoodsVo.goodsID);
		}
	}

	public void ChangeGameLevelGrid(MiniMergeGrid gameLevelGrid)
	{
		mGameLevelGrid = gameLevelGrid;
	}

	protected virtual void Initialize()
	{
	}

	protected void AddAttribute(MiniMergeGoodsAttributeType attributeType, MiniMergeAttributeBase attribute)
	{
		if (mAttributesDic == null)
		{
			mAttributesDic = new Dictionary<MiniMergeGoodsAttributeType, MiniMergeAttributeBase>();
		}
		if (!mAttributesDic.ContainsKey(attributeType))
		{
			mAttributesDic.Add(attributeType, attribute);
		}
	}

	protected void RemoveAttribute(MiniMergeGoodsAttributeType attributeType)
	{
		if (mAttributesDic != null && mAttributesDic.ContainsKey(attributeType))
		{
			mAttributesDic.Remove(attributeType);
		}
	}

	protected MiniMergeAttributeBase GetAttribute(MiniMergeGoodsAttributeType attributeType)
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
			Dictionary<MiniMergeGoodsAttributeType, MiniMergeAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
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
			Dictionary<MiniMergeGoodsAttributeType, MiniMergeAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
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
			Dictionary<MiniMergeGoodsAttributeType, MiniMergeAttributeBase>.Enumerator enumerator = mAttributesDic.GetEnumerator();
			while (enumerator.MoveNext())
			{
				enumerator.Current.Value?.OnUpdate();
			}
		}
	}

	public virtual void Use()
	{
	}

	public virtual bool CheckEligible(object args, bool playAnim = false)
	{
		return false;
	}

	public virtual void Dispose()
	{
	}
}
