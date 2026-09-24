using System;

namespace FAT.Merge
{
	public class MineCartItemSpawnBonusHandler : BaseItemSpawnBonusHandler
	{
		[NonSerialized]
		public MineCartActivity _actInst;

		public MineCartItemSpawnBonusHandler(MineCartActivity act)
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

		public override void OnItemSpawned(int itemId, int finalNum, SpawnBonusContext context)
		{
		}

		public bool _003C_003EiFixBaseProxy_IsValidForContext(SpawnBonusContext P0)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnItemSpawned(int P0, int P1, SpawnBonusContext P2)
		{
		}
	}
}
