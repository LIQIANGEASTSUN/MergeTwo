using TLF;
using UnityEngine;

public class GoodsNormal : GameGoodsBase
{
	public GoodsNormal(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.Normal, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.NormalAttribute, new NormalAttribute(this));
		AddAttribute(GameGoodsAttributeType.AutoDropAttribute, new AutoDropAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (!((Object)(object)GameGrid == (Object)null) && GameGoods != null && GameGoods.GoodsState == GameGoodsState.SpecialLock)
		{
			EventManager.GetInstance().DispatchEvent(100252, GameGrid);
		}
	}
}
