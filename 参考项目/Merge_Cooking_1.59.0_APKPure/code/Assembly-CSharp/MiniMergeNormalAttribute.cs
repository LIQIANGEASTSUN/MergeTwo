public class MiniMergeNormalAttribute : MiniMergeAttributeBase
{
	public MiniMergeNormalAttribute(MiniMergeGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (OnResume() && GameGoods.GoodsState != MiniMergeGoodsState.Normal)
		{
			GameGoods.GoodsState = MiniMergeGoodsState.Normal;
		}
	}
}
