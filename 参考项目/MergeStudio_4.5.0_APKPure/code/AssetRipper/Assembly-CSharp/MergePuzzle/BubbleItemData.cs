using System;

namespace MergePuzzle
{
	[Serializable]
	public class BubbleItemData
	{
		public float BubbleProbability;

		public int RequiredGemToSkip;

		public int BalanceConfigGemToSkip;

		public bool CanBeSkippedWithRewarded;
	}
}
