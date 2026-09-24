using System;
using TLF;

[Serializable]
public class GoodsBuffVo : BaseVO
{
	public int activityID = -1;

	public long startTimestamp = -1L;

	public int duration = -1;

	public int buffValue = 1;
}
