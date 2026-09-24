using System;
using TLF;

[Serializable]
public class MakingMaterialVo : BaseVO
{
	public int goodsID;

	public GameGoodsState GoodsState = GameGoodsState.Normal;

	public int InitaitveSurplusNumber;

	public int InitaitveUseTotal;

	public long InitaitveCDStarTime;

	public int PassiveSurplusNumber;

	public int PassiveUseTotal;

	public long PassiveCDStarTime;
}
