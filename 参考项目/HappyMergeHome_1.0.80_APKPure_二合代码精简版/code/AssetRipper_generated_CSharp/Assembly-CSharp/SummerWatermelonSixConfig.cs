using System;
using System.Collections.Generic;

[Serializable]
public class SummerWatermelonSixConfig : TableBase
{
	public int Id { get; set; }

	public int Hoe { get; set; }

	public List<int> RecycleItems { get; set; }

	public List<int> CollectAllReward { get; set; }

	public List<int> CollectAllRewardCount { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
