using System;
using System.Collections.Generic;
using fat.rawdata;

namespace FAT.Merge
{
	public abstract class ItemSourceComponentBase : ItemComponentBase
	{
		public class OutputDynamicWeight
		{
			public int enhance;

			public int max;

			public int origin;
		}

		public class OutputSafeRareItem
		{
			public int id;

			public int nextOutputIdx;

			public int outputStride;
		}

		public class OutputRandomListItem
		{
			public int id;

			public int totalCount;

			public int targetCount;
		}

		[NonSerialized]
		public Dictionary<int, int> mOutputs;

		[NonSerialized]
		public List<int> mOrderedOutputs;

		[NonSerialized]
		public int mOrderedOutputNextIdx;

		[NonSerialized]
		public MergeFixedItem mFixedItemOutput;

		[NonSerialized]
		public MergeFixedOutput mFixedCategoryOutput;

		[NonSerialized]
		public int mOutputedCount;

		[NonSerialized]
		public List<OutputSafeRareItem> mOutputSafeRareItem;

		[NonSerialized]
		public ItemOutputRandomList mRandomList;

		[NonSerialized]
		public ItemOutputRandomList mRandomListForId;

		[NonSerialized]
		public List<Action> mPendingActions;

		public int randomOutputNextIdx => 0;

		public int randomOutputSeed => 0;

		public int orderedOutputNextIdx => 0;

		public int FillPossibleOutput(List<int> container)
		{
			return 0;
		}

		public void ResetOutputs(IDictionary<int, int> outputs)
		{
		}

		public void ApplyPendingActions()
		{
		}

		public void ExecuteOrDefer(Action action, bool isPreCalculating)
		{
		}

		public void ClearPendingActions()
		{
		}

		public int ConsumeNextOutput(out ItemSourceType sourceType, bool isPreCalculating = false)
		{
			sourceType = default(ItemSourceType);
			return 0;
		}

		public void SetRandomOutputParam(int seed, int outputedCount)
		{
		}

		public void SetOrderedOutputParam(int nextIdx)
		{
		}

		public void _InitOutput()
		{
		}

		public void _RefreshRareItemNextOutputIdx(OutputSafeRareItem targetOutput)
		{
		}

		public abstract void OnInitOutputSet(Dictionary<int, int> container);

		public virtual void OnInitOrderedOutput(List<int> container)
		{
		}

		public virtual void OnInitDynamicWeight(Dictionary<int, OutputDynamicWeight> container)
		{
		}

		public virtual void OnInitSafeRareItem(List<OutputSafeRareItem> container)
		{
		}

		public virtual void OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> container)
		{
		}

		public override void OnPostAttach()
		{
		}

		public ItemSourceComponentBase()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
