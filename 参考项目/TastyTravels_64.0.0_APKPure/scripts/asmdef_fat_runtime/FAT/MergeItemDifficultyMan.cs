using System;
using System.Collections.Generic;
using FAT.Merge;
using IFix.Core;
using fat.rawdata;

namespace FAT
{
	public class MergeItemDifficultyMan : IGameModule, IUpdate
	{
		[NonSerialized]
		public IDictionary<int, MergeDifficulty> mMergeDifficultyConfigs;

		[NonSerialized]
		public Dictionary<int, (int avg, int real)> mItemDifficultyCache;

		[NonSerialized]
		public bool enableCache;

		[NonSerialized]
		public BoxOutputResolver boxOutputResolver;

		[NonSerialized]
		public HoldDiffChainResolver holdDiffChainResolver;

		[NonSerialized]
		public HoldDiffQuantityCalculator holdDiffQuantityCalculator;

		[NonSerialized]
		public HoldDiffNumCalculator holdDiffNumCalculator;

		public bool IsEnableHoldDiff => false;

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}

		void IUpdate.Update(float dt)
		{
		}

		[IDTag(1)]
		public int CalcSpecialBoxOutput(int minDffy, int maxDffy, List<int> candidates = null)
		{
			return 0;
		}

		[IDTag(1)]
		public (int, bool) CalcSpecialBoxOutputWithFallbackState(int minDffy, int maxDffy, List<int> candidates = null)
		{
			return default((int, bool));
		}

		[IDTag(1)]
		public int CalcComMergeSpecialBoxOutput(int minDffy, int maxDffy)
		{
			return 0;
		}

		[IDTag(0)]
		public int CalcSpecialBoxOutput(MergeWorldTracer tracer, IOrderHelper helper, int minDffy, int maxDffy, List<int> candidates = null)
		{
			return 0;
		}

		[IDTag(0)]
		public (int, bool) CalcSpecialBoxOutputWithFallbackState(MergeWorldTracer tracer, IOrderHelper helper, int minDffy, int maxDffy, List<int> candidates = null)
		{
			return default((int, bool));
		}

		[IDTag(0)]
		public int CalcComMergeSpecialBoxOutput(MergeWorldTracer tracer, IOrderHelper helper, int minDffy, int maxDffy)
		{
			return 0;
		}

		[IDTag(1)]
		public void CalcChoiceBoxOutput(int minDffy, int maxDffy, List<int> container, int choiceCount)
		{
		}

		public bool CalcChoiceBoxOutputByRelateOrders(int minDffy, int maxDffy, IList<int> orderItemPayDiffRange, List<int> container, int choiceCount, List<int> relateCommonOrders, List<int> relateRandomOrders)
		{
			return false;
		}

		public bool CheckChoiceBoxOutputNeedRefresh(int minDffy, int maxDffy, IList<int> orderItemPayDiffRange, IList<int> choices, bool fallback, IList<int> relateCommonOrders, IList<int> relateRandomOrders)
		{
			return false;
		}

		[IDTag(0)]
		public void CalcChoiceBoxOutput(MergeWorldTracer tracer, IOrderHelper helper, int minDffy, int maxDffy, List<int> container, int choiceCount)
		{
		}

		public bool CalcMagicHourOutput(MergeWorldTracer tracer, IOrderHelper helper, int minDffy, int maxDffy, IOrderData magicHourFromOrder, bool useRecycleV2, out IOrderData targetOrder, out int targetId)
		{
			targetOrder = null;
			targetId = default(int);
			return false;
		}

		public bool TryResolveHoldDiffChain(int targetItemId, List<HoldDiffChainResolver.ChainNode> container, out string error)
		{
			error = null;
			return false;
		}

		[IDTag(0)]
		public bool TryCalcHoldDiffLevelOneEquivalent(int level, out long count, out string error)
		{
			count = default(long);
			error = null;
			return false;
		}

		[IDTag(1)]
		public bool TryCalcHoldDiffLevelOneEquivalent(HoldDiffChainResolver.ChainNode node, out long count, out string error)
		{
			count = default(long);
			error = null;
			return false;
		}

		public bool TryCalcHoldDiffOutputExpectation(HoldDiffChainResolver.ChainNode producerNode, HoldDiffChainResolver.ChainNode targetNode, out HoldDiffQuantityCalculator.OutputExpectation result, out string error)
		{
			result = default(HoldDiffQuantityCalculator.OutputExpectation);
			error = null;
			return false;
		}

		[IDTag(0)]
		public bool TryCalcHoldDiffRemainingOutputCount(ItemClickSourceComponent clickSourceComponent, out int count, out string error)
		{
			count = default(int);
			error = null;
			return false;
		}

		[IDTag(1)]
		public bool TryCalcHoldDiffRemainingOutputCount(Item item, out int count, out string error)
		{
			count = default(int);
			error = null;
			return false;
		}

		[IDTag(1)]
		public bool TryCalcHoldDiffNums(int targetItemId, out HoldDiffNumCalculator.NumResult result, out string error)
		{
			result = default(HoldDiffNumCalculator.NumResult);
			error = null;
			return false;
		}

		[IDTag(2)]
		public bool TryCalcHoldDiffNums(int targetItemId, MergeWorld world, MergeWorldTracer tracer, out HoldDiffNumCalculator.NumResult result, out string error)
		{
			result = default(HoldDiffNumCalculator.NumResult);
			error = null;
			return false;
		}

		[IDTag(3)]
		public bool TryCalcHoldDiffNums(int targetItemId, int targetCount, out HoldDiffNumCalculator.NumResult result, out string error)
		{
			result = default(HoldDiffNumCalculator.NumResult);
			error = null;
			return false;
		}

		[IDTag(0)]
		public bool TryCalcHoldDiffNums(int targetItemId, int targetCount, MergeWorld world, MergeWorldTracer tracer, out HoldDiffNumCalculator.NumResult result, out string error)
		{
			result = default(HoldDiffNumCalculator.NumResult);
			error = null;
			return false;
		}

		public MergeDifficulty GetConfigByItemId(int itemId)
		{
			return null;
		}

		public int GetItemAvgDifficulty(int itemId)
		{
			return 0;
		}

		public void ClearCache()
		{
		}

		public bool TryGetItemDifficulty(int itemId, out int avg, out int real)
		{
			avg = default(int);
			real = default(int);
			return false;
		}

		public int GetCategoryMaxUnlockLevelIdx(int cid)
		{
			return 0;
		}
	}
}
