using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class LevelData
	{
		public List<LevelItem> LevelItems;

		public int LoopIndex;

		public LevelItem GetCurrentLevelData(UserEntity user, bool skipRewardOverrides = false)
		{
			return null;
		}

		public LevelItem GetNextLevelData(UserEntity user, bool skipRewardOverrides = false)
		{
			return null;
		}

		public void OverrideLevelItem(int level, LevelItem levelItem, bool skipRewardOverrides = false)
		{
		}

		public void TryOverrideXpFromDynamicConfig(int level, LevelItem levelItem)
		{
		}

		public int GetModuloLevel(int userLevel)
		{
			return 0;
		}

		public int[] GetMinMaxXPOfLevel(int userLevel)
		{
			return null;
		}

		public LevelItem GetCurrentLevelData(EventEntity eventEntity)
		{
			return null;
		}

		public LevelItem GetLastLevelData()
		{
			return null;
		}

		public LevelItem GetPreviousLevelData(EventEntity eventEntity)
		{
			return null;
		}

		public LevelItem GetNextLevelData(EventEntity eventEntity)
		{
			return null;
		}
	}
}
