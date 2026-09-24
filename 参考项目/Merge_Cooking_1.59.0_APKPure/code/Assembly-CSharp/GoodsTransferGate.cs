using TLF;

public class GoodsTransferGate : GameGoodsBase
{
	public GoodsTransferGate(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.TransferGate, goodsVo, grid)
	{
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo == null)
		{
			return;
		}
		IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(mGoodsVo.goodsID);
		if (goodsCollectVoById != null)
		{
			if (mGoodsBaseVo.type == 19 && goodsCollectVoById.itemId == 0)
			{
				MonoSingleton<GuideManager>.Instance.FinishTransferGateGuide();
			}
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			string analyticFrom = "匩橥ā讝詥";
			CommonLoadingViewLogic.ShowCommonLoading(new CommonLoadingViewData
			{
				mEnterCallback = () =>
				{
					GameLevelViewLogic.EnterEventDelay = 0.9f;
					EventManager.GetInstance().DispatchEvent(100046, arg: false);
					Singleton<GameLevelManager>.Instance.ShowGameLevelView();
					GameLevelDefine.InterfaceSwitchAnalytic("匩橥ā讝詥", analyticFrom, "숚끖澨爛摫\"Â叁귭¿赴");
				}
			});
		}
	}
}
