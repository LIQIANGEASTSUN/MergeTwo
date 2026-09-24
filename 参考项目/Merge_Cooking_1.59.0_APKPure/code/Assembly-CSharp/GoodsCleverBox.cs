using TLF;

public class GoodsCleverBox : GameGoodsBase
{
	public GoodsCleverBox(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.CleverBox, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.InitiativeConversion2Attribute, new InitiativeConversion2Attribute(this));
		InitializeAttribute();
	}

	protected override void Initialize()
	{
	}

	public override void Use()
	{
		if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce)
		{
			ExecuteAttribute();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
		}
	}
}
