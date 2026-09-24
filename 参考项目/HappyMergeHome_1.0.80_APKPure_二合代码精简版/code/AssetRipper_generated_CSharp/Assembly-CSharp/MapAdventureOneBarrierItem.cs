using System;
using System.Collections.Generic;

[Serializable]
public class MapAdventureOneBarrierItem : TableBase
{
	public int Id { get; set; }

	public int BarrierType { get; set; }

	public int ConsumeNum { get; set; }

	public int ConsumeCount { get; set; }

	public List<int> RewardId { get; set; }

	public List<int> RewardNum { get; set; }

	public List<int> RewardId2 { get; set; }

	public List<int> RewardNum2 { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
