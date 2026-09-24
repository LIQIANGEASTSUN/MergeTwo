using System;
using System.Collections.Generic;

[Serializable]
public class NewbieRoomConfig : TableBase
{
	public int Id { get; set; }

	public List<int> NodeChapter { get; set; }

	public int Duration { get; set; }

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
