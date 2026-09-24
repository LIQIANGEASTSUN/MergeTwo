using System;
using TLF;

[Serializable]
public class MiniMergeGameGoodsVo : BaseVO
{
	public int goodsID;

	public MiniMergeGoodsState GoodsState = MiniMergeGoodsState.Normal;
}
