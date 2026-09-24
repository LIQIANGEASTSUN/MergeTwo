using System;
using TLF;

[Serializable]
public class ItemVO : BaseVO
{
	public int id;

	public long num;

	public long mCdStartTime;

	public long GetCDStartTime()
	{
		return mCdStartTime;
	}

	public void SetCDStartTime(long value)
	{
		if (id == 1004)
		{
			TimeManager.GetInstance().GetDateTimeByTimeSpan(value);
		}
		mCdStartTime = value;
	}
}
