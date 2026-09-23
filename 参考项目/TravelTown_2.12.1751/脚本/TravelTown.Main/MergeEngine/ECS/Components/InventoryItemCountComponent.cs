using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public class InventoryItemCountComponent : ComponentBase
	{
		[NonSerialized]
		public Dictionary<IMergeItem, int> _itemsInInventoryCount;

		public event Action<IMergeItem> ItemChanged
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

		public InventoryItemCountComponent(Entity entity)
			: base(null)
		{
		}

		public void AddItem(IMergeItem mergeItem)
		{
		}

		public void RemoveItem(IMergeItem mergeItem)
		{
		}

		public int GetItemInInventoryCount(IMergeItem mergeItem)
		{
			return 0;
		}

		public void InvokeChanged(IMergeItem mergeItem)
		{
		}
	}
}
