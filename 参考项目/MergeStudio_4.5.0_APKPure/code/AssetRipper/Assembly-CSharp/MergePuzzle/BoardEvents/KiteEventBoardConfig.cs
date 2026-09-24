using System;
using System.Collections.Generic;

namespace MergePuzzle.BoardEvents
{
	[Serializable]
	public class KiteEventBoardConfig
	{
		public List<EventBoardConfigItem> Events;

		public List<BalanceProgressiveConfigModel> GetProgressiveConfigModels()
		{
			return null;
		}

		public List<BalanceSpawnerConfigModel> GetBalanceSpawnerConfigModels()
		{
			return null;
		}
	}
}
