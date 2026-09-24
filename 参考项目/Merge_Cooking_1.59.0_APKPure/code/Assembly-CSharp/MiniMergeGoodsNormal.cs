using UnityEngine;

public class MiniMergeGoodsNormal : MiniMergeGoodsBase
{
	public MiniMergeGoodsNormal(MiniMergeGameGoodsVo goodsVo, MiniMergeGrid grid)
		: base(MiniMergeGoodsType.Normal, goodsVo, grid)
	{
		AddAttribute(MiniMergeGoodsAttributeType.NormalAttribute, new MiniMergeNormalAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (!((Object)(object)GameGrid == (Object)null))
		{
			_ = GameGoods;
		}
	}
}
