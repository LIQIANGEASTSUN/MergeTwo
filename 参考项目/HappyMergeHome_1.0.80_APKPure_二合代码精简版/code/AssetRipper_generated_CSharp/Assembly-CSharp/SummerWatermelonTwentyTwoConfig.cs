using System;
using System.Collections.Generic;

[Serializable]
public class SummerWatermelonTwentyTwoConfig : TableBase
{
	public int Id { get; set; }

	public int LineId { get; set; }

	public List<int> InitItems { get; set; }

	public int LineIdChild { get; set; }

	public List<int> BigBoardUnlockLevel { get; set; }

	public List<int> NoRecycleItems { get; set; }

	public int IsOpenBP { get; set; }

	public int BpShopID { get; set; }

	public int DecorationLevel { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
