using System;

[Serializable]
public class SummerWatermelonTwentyNineDeleItemConfig : TableBase
{
	public int Id { get; set; }

	public int ItemId { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
