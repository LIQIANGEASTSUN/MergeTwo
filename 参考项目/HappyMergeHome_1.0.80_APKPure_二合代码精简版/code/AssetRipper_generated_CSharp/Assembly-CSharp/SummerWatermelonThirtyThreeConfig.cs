using System;
using System.Collections.Generic;

[Serializable]
public class SummerWatermelonThirtyThreeConfig : TableBase
{
	public int Id { get; set; }

	public int LineId { get; set; }

	public List<int> InitItems { get; set; }

	public int LineIdChild { get; set; }

	public int BigBoardUnlockLevel { get; set; }

	public List<int> NoRecycleItems { get; set; }

	public int IsOpenBP { get; set; }

	public int BpShopID { get; set; }

	public List<int> UnlockItemIds { get; set; }

	public int UnlockStep { get; set; }

	public List<int> MoveCheckNum { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
