using TLF;

public class AutoCollectAttribute : GameGoodsAttributeBase
{
	public AutoCollectAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (OnResume() && GameGoods.GoodsState != GameGoodsState.CanCollect)
		{
			GameGoods.GoodsState = GameGoodsState.CanCollect;
		}
	}

	public override void OnExecute(bool normal = true)
	{
		if (mGamegoodsBase != null && GameGoods != null)
		{
			IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(GameGoods.goodsID);
			if (goodsCollectVoById != null && goodsCollectVoById.itemId == 1005)
			{
				GameGrid.GeneratorSuperSpeedup(goodsCollectVoById.amount);
				EventManager.GetInstance().DispatchEvent(203084, GameGrid, 3);
				DefiniteChange();
			}
		}
	}

	private void DefiniteChange()
	{
		GameGrid.EmptyParentSelectGrid();
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
		GameLevelDefine.MapGoodsAnalytics(GameGoods.goodsID, 1, 2);
		GameGrid.ChangeGameGoodsVo(null, "晣o4끬g崱㻜");
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase != null && GameGoods != null)
		{
			IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(GameGoods.goodsID);
			if (goodsCollectVoById != null && goodsCollectVoById.itemId == 1005 && GameGoods.GoodsState == GameGoodsState.CanCollect)
			{
				OnExecute();
			}
		}
	}
}
