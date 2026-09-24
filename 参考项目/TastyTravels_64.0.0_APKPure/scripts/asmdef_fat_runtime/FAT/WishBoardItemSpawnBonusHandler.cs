using System;
using FAT.Merge;

namespace FAT
{
	public class WishBoardItemSpawnBonusHandler : BaseItemSpawnBonusHandler
	{
		[NonSerialized]
		public WishBoardActivity _actInst;

		public WishBoardItemSpawnBonusHandler(WishBoardActivity act)
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
