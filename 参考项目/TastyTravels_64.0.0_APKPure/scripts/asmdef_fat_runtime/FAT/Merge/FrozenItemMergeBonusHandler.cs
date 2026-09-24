using System;
using System.Collections.Generic;
using System.Diagnostics;
using Google.Protobuf.Collections;
using fat.rawdata;

namespace FAT.Merge
{
	public class FrozenItemMergeBonusHandler : IMergeBonusHandler
	{
		[NonSerialized]
		public ActivityFrozenItem _actInst;

		int IMergeBonusHandler.priority => 0;

		public bool _isValid => false;

		[Conditional("UNITY_EDITOR")]
		public static void LogEditor(string msg)
		{
		}

		public FrozenItemMergeBonusHandler(ActivityFrozenItem act)
		{
		}

		void IMergeBonusHandler.Process(MergeBonusContext context)
		{
		}

		void IMergeBonusHandler.OnRegister()
		{
		}

		void IMergeBonusHandler.OnUnRegister()
		{
		}

		public Item _TrySpawnFrozenItem(Item srcItem)
		{
			return null;
		}

		public bool TryPickCandidateAndLife(Item srcItem, FrozenItemDetail d, out int targetId, out long lifeMilliseconds, out int payDiff)
		{
			targetId = default(int);
			lifeMilliseconds = default(long);
			payDiff = default(int);
			return false;
		}

		public static bool TryGetRange(RepeatedField<int> range, out int min, out int max)
		{
			min = default(int);
			max = default(int);
			return false;
		}

		public static bool TryBuildTargetMaxLevelMap(int targetMin, int targetMax, Dictionary<int, int> maxLevelByCate, HashSet<int> targetChainSet, HashSet<int> preChainSet)
		{
			return false;
		}

		public static void AppendRecursiveCareGraph(int cid, Dictionary<int, int> maxLevelByCate, HashSet<int> preChainSet)
		{
		}

		public static bool TryGetCategoryMaxLevel(int cid, out int maxLevel)
		{
			maxLevel = default(int);
			return false;
		}

		public static void UpdateMaxLevel(Dictionary<int, int> map, int cid, int level)
		{
		}

		public static long CalcLifeSeconds(FrozenItemDetail d, int pay, int rangeMin, int rangeMax)
		{
			return 0L;
		}

		public static int GetTidAtLevel(MergeItemCategory cate, int level)
		{
			return 0;
		}
	}
}
