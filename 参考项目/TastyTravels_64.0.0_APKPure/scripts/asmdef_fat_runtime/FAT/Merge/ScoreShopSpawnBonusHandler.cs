using System;

namespace FAT.Merge
{
	public class ScoreShopSpawnBonusHandler : BaseItemSpawnBonusHandler
	{
		[NonSerialized]
		public readonly ActivityScoreShop _activity;

		public ScoreShopSpawnBonusHandler(ActivityScoreShop activity)
		{
		}

		public override bool IsValid()
		{
			return false;
		}

		public override int GetActivityCostId()
		{
			return 0;
		}

		public override void EnsureOutputMap()
		{
		}

		public override ReasonString GetRewardReason()
		{
			return null;
		}

		public override FlyType GetFlyType()
		{
			return default(FlyType);
		}
	}
}
