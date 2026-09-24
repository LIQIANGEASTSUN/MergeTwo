using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class BalanceProgressiveConfigModel
	{
		public bool IsDefault;

		public string SetIdLevel;

		public int TaskLoopStartIndex;

		public List<BalanceProgressiveItemGoalData> ProgressiveItemGoals;

		public BalanceProgressiveConfigModel GetSewingMachineValue()
		{
			return null;
		}
	}
}
