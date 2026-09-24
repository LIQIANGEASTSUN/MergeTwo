using System;

namespace FAT.Merge
{
	public class FrozenItemSpawnBonusHandler : ISpawnBonusHandler
	{
		public int priority;

		[NonSerialized]
		public ActivityFrozenItem _actInst;

		int ISpawnBonusHandler.priority => 0;

		public bool _isValid => false;

		public FrozenItemSpawnBonusHandler(ActivityFrozenItem act)
		{
		}

		void ISpawnBonusHandler.Process(SpawnBonusContext context)
		{
		}

		void ISpawnBonusHandler.OnRegister()
		{
		}

		void ISpawnBonusHandler.OnUnRegister()
		{
		}
	}
}
