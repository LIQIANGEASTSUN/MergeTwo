using System;
using TLF;

[Serializable]
public class ILevelItemEffectVo : BaseVO
{
	public int goodsID;

	public string copyItemLevel = "";

	public string rocketItemLevel = "뺬";

	public int rocketSeriesWeight;

	public int rocketLevelWeight;

	public int fireworksSeriesWeight;

	public int fireworksLevelWeight;

	private int copyItemMinLevel = -1;

	private int copyItemMaxLevel = -1;

	private int rocketItemMinLevel = -1;

	private int rocketItemMaxLevel = -1;

	public int CopyItemMinLevel
	{
		get
		{
			if (copyItemMinLevel == -1)
			{
				if (copyItemLevel.IsNullOrEmpty())
				{
					copyItemMinLevel = 0;
					copyItemMaxLevel = 0;
				}
				else
				{
					string[] array = copyItemLevel.Split('|');
					if (array.Length != 0)
					{
						copyItemMinLevel = array[0].ToInt();
					}
					copyItemMaxLevel = ((array.Length > 1) ? array[1].ToInt() : copyItemMinLevel);
				}
			}
			return copyItemMinLevel;
		}
	}

	public int CopyItemMaxLevel
	{
		get
		{
			if (copyItemMaxLevel == -1)
			{
				if (copyItemLevel.IsNullOrEmpty())
				{
					copyItemMinLevel = 0;
					copyItemMaxLevel = 0;
				}
				else
				{
					string[] array = copyItemLevel.Split('|');
					if (array.Length != 0)
					{
						copyItemMinLevel = array[0].ToInt();
					}
					copyItemMaxLevel = ((array.Length > 1) ? array[1].ToInt() : copyItemMinLevel);
				}
			}
			return copyItemMaxLevel;
		}
	}

	public int RocketItemMinLevel
	{
		get
		{
			if (rocketItemMinLevel == -1)
			{
				if (rocketItemLevel.IsNullOrEmpty())
				{
					rocketItemMinLevel = 0;
					rocketItemMaxLevel = 0;
				}
				else
				{
					string[] array = rocketItemLevel.Split('|');
					if (array.Length != 0)
					{
						rocketItemMinLevel = array[0].ToInt();
					}
					rocketItemMaxLevel = ((array.Length > 1) ? array[1].ToInt() : rocketItemMinLevel);
				}
			}
			return rocketItemMinLevel;
		}
	}

	public int RocketItemMaxLevel
	{
		get
		{
			if (rocketItemMaxLevel == -1)
			{
				if (rocketItemLevel.IsNullOrEmpty())
				{
					rocketItemMinLevel = 0;
					rocketItemMaxLevel = 0;
				}
				else
				{
					string[] array = rocketItemLevel.Split('|');
					if (array.Length != 0)
					{
						rocketItemMinLevel = array[0].ToInt();
					}
					rocketItemMaxLevel = ((array.Length > 1) ? array[1].ToInt() : rocketItemMinLevel);
				}
			}
			return rocketItemMaxLevel;
		}
	}
}
