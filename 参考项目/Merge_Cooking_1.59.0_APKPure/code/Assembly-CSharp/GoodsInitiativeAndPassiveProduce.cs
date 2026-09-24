using TLF;
using UnityEngine;

public class GoodsInitiativeAndPassiveProduce : GameGoodsBase
{
	public GoodsInitiativeAndPassiveProduce(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.InitiativeAndPassiveProduce, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.InitiativeProduceAttribute, new InitiativeProduceAttributeInn(this));
		AddAttribute(GameGoodsAttributeType.PassiveProduceAttribute, new PassiveProduceAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo != null)
		{
			bool updateUncooledState = mGoodsVo.UpdateUncooledState;
			if (mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce || mGoodsVo.GoodsState == GameGoodsState.HideCoolDown || mGoodsVo.GoodsState == GameGoodsState.CoolDown || mGoodsVo.GoodsState == GameGoodsState.AutoProduce || mGoodsVo.InitiativeAdditionalNumber > 0 || mGoodsVo.UncooledDuration() > 0)
			{
				ExecuteAttribute();
				EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			}
			else if (updateUncooledState && !mGoodsVo.UpdateUncooledState && (Object)(object)GameGrid != (Object)null)
			{
				GameGrid.UpdateItemUncd();
			}
		}
	}
}
