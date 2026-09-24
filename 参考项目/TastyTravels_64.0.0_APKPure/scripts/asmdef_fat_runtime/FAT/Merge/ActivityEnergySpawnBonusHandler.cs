using System;
using System.Collections.Generic;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class ActivityEnergySpawnBonusHandler : ISpawnBonusHandler
	{
		public struct Range
		{
			public int lower;

			public int upper;

			public override string ToString()
			{
				return null;
			}

			public string _003C_003EiFixBaseProxy_ToString()
			{
				return null;
			}
		}

		public class CreateParam
		{
			public string debugKey;

			public int activityId;

			public IList<int> weightBonusId;

			public IList<int> weight;

			public IList<int> outputCount;

			public IList<int> baodiBonus;

			public IList<int> baodiCounts;

			public override string ToString()
			{
				return null;
			}

			public string _003C_003EiFixBaseProxy_ToString()
			{
				return null;
			}
		}

		[Serializable]
		public class ActivityEnergySpawnBonusDebugInfo
		{
			public int totalSpawn;

			public int energySpawn;

			public int nonEnergySpawn;

			public int totalEnergyUse;
		}

		public int priority;

		[NonSerialized]
		public string mDebugKey;

		[NonSerialized]
		public ActivityEnergySpawnBonusDebugInfo mDebugInfo;

		[NonSerialized]
		public Dictionary<int, int> mWeightTable;

		[NonSerialized]
		public Dictionary<int, int> countTable;

		[NonSerialized]
		public Dictionary<int, Range> mBaoDiTable;

		[NonSerialized]
		public Dictionary<int, int> mNonOutputCounter;

		[NonSerialized]
		public int activityId;

		int ISpawnBonusHandler.priority => 0;

		public override string ToString()
		{
			return null;
		}

		public void Serialize(RandomParam param)
		{
		}

		public void Deserialize(RandomParam param)
		{
		}

		public void ClearDebugInfo()
		{
		}

		public void InitConfig(CreateParam param)
		{
		}

		void ISpawnBonusHandler.OnRegister()
		{
		}

		void ISpawnBonusHandler.OnUnRegister()
		{
		}

		public ActivityEnergySpawnBonusDebugInfo LoadAndGetDebugInfo()
		{
			return null;
		}

		public void SaveDebugInfo()
		{
		}

		public int Simulate(SpawnBonusContext context, bool dryrun)
		{
			return 0;
		}

		void ISpawnBonusHandler.Process(SpawnBonusContext context)
		{
		}

		public void _SetActivityEnergy(SpawnBonusContext context, int energy)
		{
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
