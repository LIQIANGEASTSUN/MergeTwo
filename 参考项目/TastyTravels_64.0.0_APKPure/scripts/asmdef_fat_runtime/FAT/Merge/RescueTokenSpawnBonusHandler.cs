using System;

namespace FAT.Merge
{
	public class RescueTokenSpawnBonusHandler : BaseItemSpawnBonusHandler
	{
		[NonSerialized]
		public readonly RescueBoardActivity _act;

		[NonSerialized]
		public int _fixedId;

		[NonSerialized]
		public int _fixedNum;

		[NonSerialized]
		public (int min, int max) _pityRange;

		public int PityCounter { get; set; }

		public int PityThreshold { get; set; }

		public RescueTokenSpawnBonusHandler(RescueBoardActivity act)
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

		public override bool TryProcessPity(SpawnBonusContext context, ref int itemId, ref int num)
		{
			return false;
		}

		public override void OnItemSpawned(int itemId, int finalNum, SpawnBonusContext context)
		{
		}

		public override void OnAfterSpawn(bool produced, SpawnBonusContext context)
		{
		}

		public static int _RandInRange(int min, int max)
		{
			return 0;
		}

		public bool _003C_003EiFixBaseProxy_IsValidForContext(SpawnBonusContext P0)
		{
			return false;
		}

		public bool _003C_003EiFixBaseProxy_TryProcessPity(SpawnBonusContext P0, ref int P1, ref int P2)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnItemSpawned(int P0, int P1, SpawnBonusContext P2)
		{
		}

		public void _003C_003EiFixBaseProxy_OnAfterSpawn(bool P0, SpawnBonusContext P1)
		{
		}
	}
}
