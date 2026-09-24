public class GoodsPassiveConversion : GameGoodsBase
{
	public GoodsPassiveConversion(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.PassiveConversion, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.PassiveConversionAttribute, new PassiveConversionAttribute(this));
		InitializeAttribute();
	}
}
