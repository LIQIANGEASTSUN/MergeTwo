using System;
using FAT.Merge;

namespace FAT
{
	public class FightBoardItemSpawnBonusHandler : BaseItemSpawnBonusHandler
	{
		[NonSerialized]
		public FightBoardActivity _actInst;

		public FightBoardItemSpawnBonusHandler(FightBoardActivity act)
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

		public override void OnItemSpawned(int itemId, int finalNum, SpawnBonusContext context)
		{
		}

		public void _003C_003EiFixBaseProxy_OnItemSpawned(int P0, int P1, SpawnBonusContext P2)
		{
		}
	}
}
