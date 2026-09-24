using System;
using MergePuzzle;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board.Items
{
	[Serializable]
	public class SpawnerSpawnedItem
	{
		public string SetIDLevel;

		public float Probability;

		public bool IsLocked;

		public GameMainReward Reward;
	}
}
