using TLF;
using UnityEngine;

public class GoodsPassiveProduce : GameGoodsBase
{
	public GoodsPassiveProduce(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.PassiveProduce, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.PassiveProduceAttribute, new PassiveProduceAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo != null)
		{
			bool updateUncooledState = mGoodsVo.UpdateUncooledState;
			bool flag = false;
			if (mGoodsVo.GoodsState == GameGoodsState.AutoProduce || mGoodsVo.InitiativeAdditionalNumber > 0 || mGoodsVo.UncooledDuration() > 0)
			{
				flag = true;
				ExecuteAttribute(normal: false);
			}
			else if (updateUncooledState && !mGoodsVo.UpdateUncooledState && (Object)(object)GameGrid != (Object)null)
			{
				GameGrid.UpdateItemUncd();
			}
			if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.CoolDown && mGoodsVo.InitiativeAdditionalNumber <= 0 && !flag)
			{
				EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
			}
		}
	}
}
