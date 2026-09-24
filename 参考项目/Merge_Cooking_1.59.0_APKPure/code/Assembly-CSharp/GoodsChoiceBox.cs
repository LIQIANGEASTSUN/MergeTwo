using TLF;

public class GoodsChoiceBox : GameGoodsBase
{
	public GoodsChoiceBox(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.ChoiceItemBox, goodsVo, grid)
	{
		InitializeAttribute();
	}

	protected override void Initialize()
	{
	}

	public override void Use()
	{
		if (mGoodsVo != null)
		{
			if (mGoodsVo.ChoiceRewards.Count == 0)
			{
				mGoodsVo.ChoiceRewards = Singleton<GameLevelManager>.Instance.GetChoiceItemBoxProduce(mGoodsVo.goodsID);
				GameGrid.SaveGridData();
			}
			GameLevelDefine.OpenGoodsChoiceView(mGoodsVo.ChoiceRewards.Count, GameGrid);
		}
	}
}
