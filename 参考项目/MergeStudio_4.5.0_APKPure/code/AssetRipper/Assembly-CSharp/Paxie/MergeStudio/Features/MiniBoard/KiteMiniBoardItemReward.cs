using System;
using MergePuzzle;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class KiteMiniBoardItemReward
	{
		public string SetIDLevel;

		public int Quantity;

		public GameMainReward Reward;

		public float Probability;
	}
}
