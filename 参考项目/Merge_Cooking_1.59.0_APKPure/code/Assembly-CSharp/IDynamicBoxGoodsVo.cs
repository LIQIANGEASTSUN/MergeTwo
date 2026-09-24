using System;
using TLF;

[Serializable]
public class IDynamicBoxGoodsVo : BaseVO
{
	public int id;

	public int type = 2;

	public int goodsID;

	public int dropNum = 1;

	public int dropType;

	public int weight;

	public int highWeight;

	public int fixedDropNum;

	public int exception;
}
