using UnityEngine;

public abstract class MiniMergeAttributeBase
{
	protected MiniMergeGoodsBase mGamegoodsBase;

	public MiniMergeGameGoodsVo GameGoods => mGamegoodsBase.GameGoods;

	public IMiniMergeGoodsBaseVo GoodsBaseVo => mGamegoodsBase.GoodsBaseVo;

	public MiniMergeGoodsType GoodsType => mGamegoodsBase.GoodsType;

	public MiniMergeGrid GameGrid => mGamegoodsBase.GameGrid;

	public MiniMergeAttributeBase(MiniMergeGoodsBase gameGoodsBase)
	{
		mGamegoodsBase = gameGoodsBase;
	}

	public virtual void OnInitialize()
	{
	}

	public virtual void OnExecute(bool normal = true)
	{
	}

	public virtual void OnUpdate()
	{
	}

	public bool OnResume()
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return false;
		}
		if (IMiniMergeGoodsBaseVo.CannotDrag(GameGoods.GoodsState))
		{
			return false;
		}
		return true;
	}
}
