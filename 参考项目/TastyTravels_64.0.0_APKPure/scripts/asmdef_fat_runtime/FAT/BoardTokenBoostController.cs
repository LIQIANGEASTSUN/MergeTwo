using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public sealed class BoardTokenBoostController
	{
		public const int MAX_ITER = 20;

		[NonSerialized]
		public BoardTokenMulti _cfg;

		[NonSerialized]
		public IBoardBoostHost _host;

		[NonSerialized]
		public int _currentState;

		[NonSerialized]
		public int _maxUnlocked;

		[NonSerialized]
		public int _maxShown;

		public bool IsEnabled => false;

		public int CurrentRate => 0;

		public int CurrentLevelAdd => 0;

		public int CurrentState => 0;

		public int MaxState => 0;

		public int MaxUnlocked => 0;

		public int MaxShown => 0;

		public bool HasUnshownUnlock => false;

		public event Action OnStateChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action OnUnlockChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static bool TryCalculateTokenCost(BoardTokenBoostController tokenBoost, int baseCost, out int tokenCost, out int rate)
		{
			tokenCost = default(int);
			rate = default(int);
			return false;
		}

		public bool TryGetCurrentCostRate(out int rate)
		{
			rate = default(int);
			return false;
		}

		public void MarkAllShown()
		{
		}

		public void Bind(int boostInfoId, IBoardBoostHost host = null)
		{
		}

		public void Clear()
		{
		}

		public void RefreshUnlock(int tokenNum)
		{
		}

		public bool TrySwitchNext()
		{
			return false;
		}

		public bool EnsureRateAffordable(int num, int tokenNum)
		{
			return false;
		}

		public void AutoAdjustOnActivate()
		{
		}

		public void SaveTo(IList<AnyState> any, int idxState, int idxMaxUnlocked, int idxMaxShown)
		{
		}

		public void LoadFrom(IList<AnyState> any, int idxState, int idxMaxUnlocked, int idxMaxShown)
		{
		}

		public void ResolveBoostOutput(int baseItemId, int baseItemCount, out int finalItemId, List<(int itemId, int num)> bonusItems)
		{
			finalItemId = default(int);
		}

		public static void DumpDictLog(string prefix, Dictionary<int, int> dict)
		{
		}

		public static bool HasMergeChain(int itemId)
		{
			return false;
		}

		public bool IsIgnoredItem(int itemId)
		{
			return false;
		}

		public static void RunStep1(Dictionary<int, int> input, Dictionary<int, int> result)
		{
		}

		public static void GroupByChain(Dictionary<int, int> input, Dictionary<int, Dictionary<int, int>> chainBuckets, List<IDisposable> innerRentals)
		{
		}

		public static int GetChainMaxLevel(int chainId)
		{
			return 0;
		}

		public static void MergeInto(Dictionary<int, int> dst, Dictionary<int, int> src)
		{
		}

		public static void TryAddOrAdd(Dictionary<int, int> dict, int key, int val)
		{
		}

		public static bool AreSameDict(Dictionary<int, int> a, Dictionary<int, int> b)
		{
			return false;
		}

		public static int MinKey(Dictionary<int, int> dict)
		{
			return 0;
		}

		public bool IsRequirementMet(int stateIndex, int tokenNum)
		{
			return false;
		}
	}
}
