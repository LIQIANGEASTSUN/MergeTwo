using System;
using System.Collections.Generic;

[Serializable]
public class ButterflyWorkShopConfig : TableBase
{
	public int Id { get; set; }

	public int LineId { get; set; }

	public List<int> InitItems { get; set; }

	public List<int> OutPut { get; set; }

	public List<int> Weight { get; set; }

	public int MaxWeight { get; set; }

	public List<int> RewardId { get; set; }

	public List<int> RewardNum { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
