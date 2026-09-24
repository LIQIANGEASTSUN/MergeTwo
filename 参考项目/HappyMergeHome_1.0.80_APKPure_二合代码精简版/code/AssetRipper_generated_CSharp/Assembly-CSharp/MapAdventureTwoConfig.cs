using System;

[Serializable]
public class MapAdventureTwoConfig : TableBase
{
	public int Id { get; set; }

	public int Strength { get; set; }

	public int RedPointNum { get; set; }

	public int CameraScaleMin { get; set; }

	public int CameraScaleMax { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
