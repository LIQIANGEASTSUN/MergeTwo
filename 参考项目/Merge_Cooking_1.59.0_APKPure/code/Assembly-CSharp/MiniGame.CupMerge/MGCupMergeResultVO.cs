using System;

namespace MiniGame.CupMerge;

[Serializable]
public class MGCupMergeResultVO
{
	public bool isWin;

	public int levelId;

	public int scoreNum;

	public int playTime;

	public int totalCupIndex;

	public int orderCount;
}
