using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class Inventory
	{
		public const int kDefaultBag = 0;

		[NonSerialized]
		public Dictionary<int, InventoryBag> mBags;

		[NonSerialized]
		public IMergeWorldPrivate mParent;

		[NonSerialized]
		public List<InventoryBag> mCachedBagList;

		public int capacity => 0;

		public event Action<int, Item[], bool> onCapacityChange
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

		public List<InventoryBag> _GetBagListSorted(bool reversed = false)
		{
			return null;
		}

		public int _SortBag(InventoryBag a, InventoryBag b)
		{
			return 0;
		}

		public int _SortBagReversed(InventoryBag a, InventoryBag b)
		{
			return 0;
		}

		public int GetCapacity(int bagId)
		{
			return 0;
		}

		public int FillAllBagId(List<int> idContainer = null)
		{
			return 0;
		}

		public T GetBagMetaInfo<T>(int bagId) where T : class, IInventoryBagMetaInfo
		{
			return null;
		}

		public void SetBagMetaInfo(int bagId, IInventoryBagMetaInfo info)
		{
		}

		public bool AddBag(int bagId)
		{
			return false;
		}

		public void CalcInventoryMetric(out int itemNum, out int spaceNum)
		{
			itemNum = default(int);
			spaceNum = default(int);
		}

		public void WalkAllItem(Action<Item> func)
		{
		}

		public Item[] DeleteBag(int bagId)
		{
			return null;
		}

		public void SetBagPriority(int bagId, int priority)
		{
		}

		public Inventory(IMergeWorldPrivate p)
		{
		}

		public InventoryBag GetBagById(int bagId)
		{
			return null;
		}

		public InventoryBag GetBagByType(BagMan.BagType type)
		{
			return null;
		}

		public Item PeekItem(int idx, int bagId = 0)
		{
			return null;
		}

		public void Serialize(fat.gamekitdata.Merge data)
		{
		}

		public void Deserialize(fat.gamekitdata.Merge data, Dictionary<int, Item> items)
		{
		}

		public void Update(int dt)
		{
		}

		public Item RemoveItem(int idx, int bagId = 0)
		{
			return null;
		}

		public void DisposeItem(Item i, ItemDeadType type = ItemDeadType.Common)
		{
		}

		public bool GetItemIndexByTid(int tid, out int idx, out int bagId)
		{
			idx = default(int);
			bagId = default(int);
			return false;
		}

		public bool PutItem(Item item, out int idx, out int bagId)
		{
			idx = default(int);
			bagId = default(int);
			return false;
		}

		public Item[] SetCapacity(int capacity, int bagId = 0)
		{
			return null;
		}
	}
}
