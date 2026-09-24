using System;
using TLF;

[Serializable]
public class IIndependentMergeTheme : BaseVO
{
	public int themeID = 1;

	public string skinSuffix = "";

	public string suffix = "";

	public string initialData = "";

	public int themeSeriesID;

	public int branchSeriesID;

	public int row = 5;

	public int column = 5;

	public int shopType;

	public int giftCd;

	public int popLevel;

	public int endShowTime;
}
