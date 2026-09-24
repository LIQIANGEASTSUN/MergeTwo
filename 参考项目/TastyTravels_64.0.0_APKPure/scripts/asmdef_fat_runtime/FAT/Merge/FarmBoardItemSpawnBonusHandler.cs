using System;

namespace FAT.Merge
{
	public class FarmBoardItemSpawnBonusHandler : BaseItemSpawnBonusHandler
	{
		[NonSerialized]
		public FarmBoardActivity _actInst;

		public FarmBoardItemSpawnBonusHandler(FarmBoardActivity act)
		{
		}

		public override bool IsValid()
		{
			return false;
		}

		public override bool IsValidForContext(SpawnBonusContext context)
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

		public bool _003C_003EiFixBaseProxy_IsValidForContext(SpawnBonusContext P0)
		{
			return false;
		}
	}
}
