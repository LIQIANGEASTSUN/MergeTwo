using UnityEngine;

public class AutoConversionAttribute : GameGoodsAttributeBase
{
	public AutoConversionAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (OnResume() && mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.Normal)
		{
			mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.Normal;
		}
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase != null && mGamegoodsBase.GameGoods != null && !((Object)(object)mGamegoodsBase.GameGrid == (Object)null) && mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.Bubble)
		{
			OnBubbleUpdate();
		}
	}
}
