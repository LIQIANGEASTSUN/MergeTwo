using System;
using System.Collections.Generic;

namespace FAT.Merge
{
	public class ItemOutputRandomList
	{
		public class OutputConstraitFixCount
		{
			public int id;

			public int totalCount;

			public int targetCount;
		}

		[NonSerialized]
		public string mDebugTag;

		[NonSerialized]
		public List<int> mRandomOutputList;

		[NonSerialized]
		public int mRandomOutputNextIdx;

		[NonSerialized]
		public int mRandomOutputSeed;

		[NonSerialized]
		public List<OutputConstraitFixCount> mRandomOutputCandidates;

		[NonSerialized]
		public Dictionary<int, int> mTempCalculateDict;

		public int randomOutputNextIdx => 0;

		public int randomOutputSeed => 0;

		public int FillPossibleOutput(List<int> container = null)
		{
			return 0;
		}

		public void MergeToWeightDictionary(Dictionary<int, int> originDict)
		{
		}

		public ItemOutputRandomList(string debugTag = "")
		{
		}

		public void AddConstraitFixCount(IEnumerable<OutputConstraitFixCount> constrain)
		{
		}

		public void SetParam(int seed, int outputedCount)
		{
		}

		public int PeekNext()
		{
			return 0;
		}

		public int TakeNext()
		{
			return 0;
		}

		public void TakeNextIdx()
		{
		}

		public void _GenerateRandomOutputList()
		{
		}
	}
}
