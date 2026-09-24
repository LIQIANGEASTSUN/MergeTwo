using TLF;

public class GoodsLimitedProducer : GameGoodsBase
{
	public GoodsLimitedProducer(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.LimitedProducer, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.InitiativeProduceAttribute, new LimitedProduceAttribute(this));
		AddAttribute(GameGoodsAttributeType.AutoDropAttribute, new AutoDropAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo != null && (mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce || mGoodsVo.GoodsState == GameGoodsState.HideCoolDown || mGoodsVo.InitiativeAdditionalNumber > 0))
		{
			if (GameLevelDefine.IsShowDerivativeHint(mGoodsVo.goodsID))
			{
				ViewManager.Instance.ShowView<GoodsRecoverHintViewLogic>(new GoodsRecoverHintViewData
				{
					GoodsId = mGoodsVo.goodsID,
					OnSureAction = _ExecuteAttribute,
					OnCancelAction = null
				}, ViewManager.ViewLayer.POP, animate: true);
			}
			else
			{
				_ExecuteAttribute();
			}
		}
	}

	private void _ExecuteAttribute()
	{
		ExecuteAttribute();
		EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
	}
}
