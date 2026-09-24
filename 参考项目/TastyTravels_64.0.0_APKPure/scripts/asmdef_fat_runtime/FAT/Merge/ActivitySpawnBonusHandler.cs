using System;

namespace FAT.Merge
{
	public class ActivitySpawnBonusHandler<T> : ISpawnBonusHandler where T : IScoreActivity
	{
		public int priority;

		[NonSerialized]
		public readonly T activity;

		int ISpawnBonusHandler.priority => 0;

		public ActivitySpawnBonusHandler(T activity)
		{
		}

		void ISpawnBonusHandler.OnRegister()
		{
		}

		void ISpawnBonusHandler.OnUnRegister()
		{
		}

		void ISpawnBonusHandler.Process(SpawnBonusContext context)
		{
		}
	}
}
