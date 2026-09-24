using System;
using System.Collections.Generic;

[Serializable]
public class SummerWatermelonThirtyOneProductConfig : TableBase
{
	public int Id { get; set; }

	public int ItemId { get; set; }

	public List<int> OutPut { get; set; }

	public List<int> Weight { get; set; }

	public int MaxWeight { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
