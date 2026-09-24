using System;
using System.Collections.Generic;
using FAT.Merge;

namespace FAT
{
	public static class BoardQuickMergeTool
	{
		public enum MergeStep
		{
			None = 0,
			CollectItems = 1,
			FindMergePairs = 2,
			ExecuteMerge = 3
		}

		public static List<Item> _cacheItemList;

		public static List<Tuple<Item, Item>> _canMergeItemList;

		public static bool _isInAutoMerge;

		public static int _mergeStepDelayFrame;

		public static int _mergeStepFrameCounter;

		public static MergeStep _currentMergeStep;

		public static bool IsRunning => false;

		public static void QuickMergeOnce()
		{
		}

		public static bool SwitchAutoQuickMerge()
		{
			return false;
		}

		public static void Update()
		{
		}

		public static void Reset(bool isOpen = false)
		{
		}

		public static void _AutoCollectItems()
		{
		}

		public static void _AutoFindMergePairs()
		{
		}

		public static void _AutoExecuteMerge()
		{
		}

		public static bool _CheckIsValid(Item item)
		{
			return false;
		}
	}
}
