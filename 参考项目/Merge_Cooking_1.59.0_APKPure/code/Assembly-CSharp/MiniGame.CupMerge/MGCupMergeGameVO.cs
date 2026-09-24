using System;
using System.Collections.Generic;

namespace MiniGame.CupMerge;

[Serializable]
public class MGCupMergeGameVO
{
	public int maxPlayLevelId;

	public List<MGCupMergeLevelVO> activeLevels = new List<MGCupMergeLevelVO>();
}
