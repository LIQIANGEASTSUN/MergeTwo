using TLF;

public class GoodsCollection : GameGoodsBase
{
	public GoodsCollection(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.Collection, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.CollectAttribute, new CollectAttribute(this));
		AddAttribute(GameGoodsAttributeType.AutoDropAttribute, new AutoDropAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo == null || mGoodsVo.GoodsState != GameGoodsState.CanCollect)
		{
			return;
		}
		if (mGoodsBaseVo != null && mGoodsBaseVo.rareItem > 0 && mGoodsBaseVo.series != 6003)
		{
			Singleton<GameLevelManager>.Instance.ShowConfirmToSell(mGoodsBaseVo.goodsID, "숆끕璵䄇䍑1Ö叕숞끟斫猟汫\u0016\u009a厙匧橲ā讉酥", () =>
			{
				ExecuteAttribute();
				EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			}, null);
		}
		else
		{
			ExecuteAttribute();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
		}
	}
}
