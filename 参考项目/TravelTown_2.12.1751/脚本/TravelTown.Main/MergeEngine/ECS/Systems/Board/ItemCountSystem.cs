using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Util;

namespace MergeEngine.ECS.Systems.Board
{
	public class ItemCountSystem : SystemBase
	{
		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[InjectComponent]
		[NonSerialized]
		public InventoryItemCountComponent _inventoryItemCountComponent;

		[NonSerialized]
		public Dictionary<IMergeItem, int> _itemCounts;

		[NonSerialized]
		public Dictionary<IMergeItem, int> _temporaryItemCounts;

		public event Action<IMergeItem, int> ItemCountChanged
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

		public event Action<IMergeItem, int> ItemCountIncreased
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

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void OnItemCountChanged(IMergeItem mergeItem)
		{
		}

		public void TryInvokeItemCountChanged(IMergeItem mergeItem)
		{
		}

		public int GetItemCount(IMergeItem mergeItem)
		{
			return 0;
		}

		public int GetItemCountById(string itemId)
		{
			return 0;
		}
	}
}
