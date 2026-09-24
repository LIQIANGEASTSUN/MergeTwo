using TLF;
using UnityEngine;

public class GoodsInitiativeProduce : GameGoodsBase
{
	public GoodsInitiativeProduce(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.InitiativeProduce, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.InitiativeProduceAttribute, new InitiativeProduceAttributeInn(this));
		AddAttribute(GameGoodsAttributeType.AutoDropAttribute, new AutoDropAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo != null)
		{
			bool updateUncooledState = mGoodsVo.UpdateUncooledState;
			bool flag = false;
			if (mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce || mGoodsVo.GoodsState == GameGoodsState.HideCoolDown || mGoodsVo.InitiativeAdditionalNumber > 0 || (!IGoodsBaseVo.IsDisabled(mGoodsVo.GoodsState) && mGoodsVo.UncooledDuration() > 0))
			{
				flag = true;
				ExecuteAttribute();
				EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			}
			else if (updateUncooledState && !mGoodsVo.UpdateUncooledState && (Object)(object)GameGrid != (Object)null)
			{
				GameGrid.UpdateItemUncd();
			}
			if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.CoolDown)
			{
				PushNoticeManager.GetInstance().CheckNoticePermissionByCreator(mGoodsVo);
			}
			if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.CoolDown && mGoodsVo.InitiativeAdditionalNumber <= 0 && !flag)
			{
				EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
			}
		}
	}
}
