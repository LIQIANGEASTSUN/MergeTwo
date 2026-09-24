using TLF;

public class GoodsInitiativeConversion : GameGoodsBase
{
	public GoodsInitiativeConversion(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.InitiativeConversion, goodsVo, grid)
	{
		if (ObjectManager.GetInstance().abTestModel.IsMergeInn())
		{
			AddAttribute(GameGoodsAttributeType.InitiativeConversionAttribute, new InitiativeConversionAttributeInn(this));
		}
		else
		{
			AddAttribute(GameGoodsAttributeType.InitiativeConversionAttribute, new InitiativeConversionAttribute(this));
		}
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
