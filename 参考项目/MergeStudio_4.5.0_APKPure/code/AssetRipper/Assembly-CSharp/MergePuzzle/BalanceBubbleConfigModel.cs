using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class BalanceBubbleConfigModel
	{
		[Serializable]
		public class BalanceBubbleGroupModel
		{
			public int GroupID;

			public List<BalanceBubbleItemModel> BubbleItemList;
		}

		[Serializable]
		public class BalanceBubbleItemModel
		{
			public int Level;

			public float BubbleChance;

			public int ReqGemToSkip;

			public bool Rewarded;
		}

		public bool IsDefault;

		public bool ProbabilityLogicActive;

		public bool AllowGemSkipWithRewarded;

		public int BubbleTimeSeconds;

		public int MaxActiveBubbleCount;

		public int BubblePinMinLevel;

		public int SessionBubblePinAdLimit;

		public int MinBubblePinCountForAd;

		public List<BalanceBubbleGroupModel> BubbleGroupList;

		public BalanceBubbleConfigModel GetValue()
		{
			return null;
		}
	}
}
