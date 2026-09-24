using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components.Board
{
	public class BoardItemCountComponent : ComponentBase
	{
		[NonSerialized]
		public Dictionary<string, int> _itemsCount;

		[NonSerialized]
		public Dictionary<string, int> _unlockedItemsCount;

		[NonSerialized]
		public Dictionary<string, int> _unboxedItemsCount;

		[NonSerialized]
		public int _bubbledItemsCount;

		public event Action Changed
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

		public BoardItemCountComponent(Entity entity)
			: base(null)
		{
		}

		public void AddItem(IMergeItem mergeItem, LockedComponent lockedComponent)
		{
		}

		public void RemoveItem(IMergeItem mergeItem, LockedComponent lockedComponent)
		{
		}

		public void UpdateItemToUnboxed(IMergeItem mergeItem, LockedComponent lockedComponent)
		{
		}

		public int GetUnlockedItemsCount(IMergeItem item)
		{
			return 0;
		}

		public int GetUnboxedItemsCount(IMergeItem item)
		{
			return 0;
		}

		public void UpdateItemToLocked(IMergeItem mergeItem)
		{
		}

		public void UpdateItemToUnlocked(IMergeItem mergeItem)
		{
		}

		public void HandleBubbleBurst()
		{
		}

		public int GetBubbledItemsCount()
		{
			return 0;
		}

		public void InvokeChanged(IMergeItem mergeItem)
		{
		}
	}
}
