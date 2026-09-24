using System;

namespace MergePuzzle
{
	[Serializable]
	public class SpawnedItem
	{
		public BoardItemData itemData;

		public float Probability;

		public bool IsLocked;

		public GameMainReward Reward;
	}
}
