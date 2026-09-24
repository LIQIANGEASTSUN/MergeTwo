using System;

[Serializable]
public class SummerWatermelonThirteenProductAttenuationConfig : TableBase
{
	public int Id { get; set; }

	public int ProductCount { get; set; }

	public float TotalWeightMulti { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
