using System;
using System.Collections.Generic;

namespace FAT.Merge
{
	public class MergeWorldTracer
	{
		[NonSerialized]
		public MergeWorld mWorld;

		[NonSerialized]
		public Action mOnBoardItemDirty;

		[NonSerialized]
		public Dictionary<int, int> mActiveBoardAndInventoryItemCount;

		[NonSerialized]
		public Dictionary<int, int> mActiveBoardItemCount;

		[NonSerialized]
		public bool mActiveBoardItemDirty;

		[NonSerialized]
		public Action mOnItemDirty;

		[NonSerialized]
		public Dictionary<int, int> mActiveItemCount;

		[NonSerialized]
		public bool mActiveItemDirty;

		public MergeWorld world => null;

		public MergeWorldTracer(Action boardItemDirtyCB, Action itemDirtyCB)
		{
		}

		public void Invalidate()
		{
		}

		public IDictionary<int, int> GetCurrentActiveBoardItemCount()
		{
			return null;
		}

		public IDictionary<int, int> GetCurrentActiveBoardAndInventoryItemCount()
		{
			return null;
		}

		public IDictionary<int, int> GetCurrentActiveItemCount()
		{
			return null;
		}

		public void DebugBoardItemCount()
		{
		}

		public void DebugAllItemCount()
		{
		}

		public void DebugInfo(string tag)
		{
		}

		public void _UpdateActiveBoardItemCount()
		{
		}

		public void _UpdateActiveCountFunc_Board(Item item)
		{
		}

		public void _UpdateActiveCountFunc_Inventory(Item item)
		{
		}

		public void _UpdateActiveCountFunc_All(Item item)
		{
		}

		public void _UpdateActiveItemCount()
		{
		}

		public void _SetBoardActiveItemsDirty()
		{
		}

		public void _SetActiveItemsDirty()
		{
		}

		public void Bind(MergeWorld w)
		{
		}

		public void _OnRewardRefresh(bool isAdd)
		{
		}

		public void _OnItemEnter(Item item)
		{
		}

		public void _OnItemLeave(Item item)
		{
		}

		public void _OnItemEvent(Item item, ItemEventType eventType)
		{
		}

		public void _OnItemRefresh(Item item, ItemStateChangeContext context = null)
		{
		}
	}
}
