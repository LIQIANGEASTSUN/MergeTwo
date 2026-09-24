using System;
using TLF;

[Serializable]
public class IInstrumentMakingVo : BaseVO
{
	public int goodsID;

	public int instrumentType;

	public int[] instrumentLevel;

	public int[] makingTime;
}
