using System;
using System.Collections.Generic;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class BaoDiMergeBonusHandler : IMergeBonusHandler
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

			public IList<int> weightBonusId;

			public IList<int> weight;

			public IList<int> weightAuto;

			public IList<int> baodiBonus;

			public IList<int> baodiCounts;

			public IList<int> nonOutputItems;

			public bool checkAuto;

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
		public class BaoDiMergeBonusDebugInfo
		{
			public int totalMerge;

			public int energyMerge;

			public int nonEnergyMerge;

			public int totalEnergyUse;

			public int lv1PointCount;

			public int[] claimedPointByLevel;
		}

		public int priority;

		[NonSerialized]
		public string mDebugKey;

		[NonSerialized]
		public BaoDiMergeBonusDebugInfo mDebugInfo;

		[NonSerialized]
		public Dictionary<int, int> mWeightTable;

		[NonSerialized]
		public Dictionary<int, int> mWeightTableAuto;

		[NonSerialized]
		public HashSet<int> mNonOutputItem;

		[NonSerialized]
		public Dictionary<int, Range> mBaoDiTable;

		[NonSerialized]
		public Dictionary<int, int> mNonOutputCounter;

		[NonSerialized]
		public HashSet<int> mCategory;

		[NonSerialized]
		public bool checkAuto;

		int IMergeBonusHandler.priority => 0;

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

		void IMergeBonusHandler.OnRegister()
		{
		}

		void IMergeBonusHandler.OnUnRegister()
		{
		}

		public void _OnEnergyChange(int count)
		{
		}

		public void _OnItemEvent(Item item, ItemEventType ev)
		{
		}

		public BaoDiMergeBonusDebugInfo LoadAndGetDebugInfo()
		{
			return null;
		}

		public void SaveDebugInfo()
		{
		}

		public int Simulate(MergeBonusContext context, bool dryrun)
		{
			return 0;
		}

		void IMergeBonusHandler.Process(MergeBonusContext context)
		{
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
