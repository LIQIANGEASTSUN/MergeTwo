using System;
using TLF;

[Serializable]
public class IIndependentStageMergeTheme : BaseVO
{
	public int themeID = 1;

	public string suffix = "";

	public string initialData = "";

	public int themeSeriesID;

	public int branchSeriesID;

	public int totalStage;

	public int shopType;

	public int giftCd;

	public int popLevel;

	public int temporaryLimit = 5000;
}
