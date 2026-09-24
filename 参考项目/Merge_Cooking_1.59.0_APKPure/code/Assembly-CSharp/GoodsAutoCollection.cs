public class GoodsAutoCollection : GameGoodsBase
{
	public GoodsAutoCollection(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.AutoCollection, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.AtuoCollectAttribute, new AutoCollectAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.CanCollect)
		{
			ExecuteAttribute();
		}
	}
}
