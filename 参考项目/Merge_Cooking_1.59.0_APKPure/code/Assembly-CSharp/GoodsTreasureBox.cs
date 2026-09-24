using TLF;
using UnityEngine;

public class GoodsTreasureBox : GameGoodsBase
{
	public GoodsTreasureBox(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.TreasureBox, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.InitiativeConversionAttribute, new InitiativeConversionAttribute(this));
		InitializeAttribute();
	}

	protected override void Initialize()
	{
	}

	public override void Use()
	{
		if (mGoodsVo == null)
		{
			return;
		}
		if (mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce || mGoodsVo.GoodsState == GameGoodsState.HideCoolDown)
		{
			ExecuteAttribute();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
		}
		else
		{
			if (mGoodsVo.GoodsState != GameGoodsState.BoxWaitOpen)
			{
				return;
			}
			if (Singleton<GameLevelManager>.Instance.CanOpenBox())
			{
				if (mGoodsVo.GoodsState == GameGoodsState.BoxWaitOpen)
				{
					GameLevelDefine.GameGoodsAnalytic(mGoodsVo, 2, 1);
					Singleton<GameLevelManager>.Instance.SetGameGoodsCDTime(mGoodsVo, ServerTimeManager.CurrentTime());
					if ((Object)(object)mGameLevelGrid != (Object)null)
					{
						mGameLevelGrid.ChangeGameGoodsState(GameGoodsState.CoolDown);
					}
					MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GoodsBox(3);
					Singleton<GameLevelManager>.Instance.CurrentOpenBox = mGoodsVo;
					PushNoticeManager.GetInstance().CheckNoticePermissionByBox();
				}
			}
			else if ((Object)(object)mGameLevelGrid != (Object)null)
			{
				ViewManager.Instance.ShowTip("숚끥徶戛呑<\u0082厁扯x4끦c\udf3b㫄", null, ((Component)mGameLevelGrid).transform);
			}
		}
	}
}
