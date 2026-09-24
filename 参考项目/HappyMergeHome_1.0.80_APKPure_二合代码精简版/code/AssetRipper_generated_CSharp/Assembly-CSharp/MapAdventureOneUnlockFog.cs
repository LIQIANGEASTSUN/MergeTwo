using System;

[Serializable]
public class MapAdventureOneUnlockFog : TableBase
{
	public int Id { get; set; }

	public int FogId { get; set; }

	public int UnLockItem { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
