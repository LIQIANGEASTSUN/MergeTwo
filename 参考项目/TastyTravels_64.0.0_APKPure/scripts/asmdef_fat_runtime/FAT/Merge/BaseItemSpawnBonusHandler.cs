using System;
using System.Collections.Generic;

namespace FAT.Merge
{
	public abstract class BaseItemSpawnBonusHandler : ISpawnBonusHandler
	{
		public int priority;

		[NonSerialized]
		public bool _isDirty;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _outputsOneInfo;

		int ISpawnBonusHandler.priority => 0;

		public void SetDirty()
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

		public abstract bool IsValid();

		public virtual bool IsValidForContext(SpawnBonusContext context)
		{
			return false;
		}

		public abstract int GetActivityCostId();

		public abstract void EnsureOutputMap();

		public abstract ReasonString GetRewardReason();

		public abstract FlyType GetFlyType();

		public virtual bool TryProcessPity(SpawnBonusContext context, ref int itemId, ref int num)
		{
			return false;
		}

		public virtual void OnItemSpawned(int itemId, int finalNum, SpawnBonusContext context)
		{
		}

		public virtual void OnRegister()
		{
		}

		public virtual void OnUnRegister()
		{
		}

		public void SimulateSpawn(SpawnBonusContext context)
		{
		}

		public void SpawnReward(int itemId, int baseNum, SpawnBonusContext context)
		{
		}

		public virtual void PlayRewardVisual(RewardCommitData reward, Item from)
		{
		}

		public virtual void OnAfterSpawn(bool produced, SpawnBonusContext context)
		{
		}

		public int CalculateSmartEnergyRate(SpawnBonusContext context, ItemClickSourceComponent comp)
		{
			return 0;
		}

		public void InitOutputs(IList<(int, int, int)> container, IList<string> outputs)
		{
		}

		public BaseItemSpawnBonusHandler()
		{
		}
	}
}
