using System;
using System.Collections.Generic;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class InventoryBag
	{
		public int priority;

		public BagMan.BagType bagType;

		[NonSerialized]
		public Item[] mContent;

		[NonSerialized]
		public int mId;

		[NonSerialized]
		public IInventoryBagMetaInfo mMetaInfo;

		[NonSerialized]
		public List<int> RedPointItem;

		public int id => 0;

		public int capacity => 0;

		public int MaxShowGirdNum { get; set; }

		public bool MetaInfoValid => false;

		public T GetMetaInfo<T>() where T : class, IInventoryBagMetaInfo
		{
			return null;
		}

		public void SetMetaInfo(IInventoryBagMetaInfo info)
		{
		}

		public InventoryBag(int id)
		{
		}

		public Item[] Clear()
		{
			return null;
		}

		public Item PeekItem(int idx)
		{
			return null;
		}

		public Item RemoveItem(int idx)
		{
			return null;
		}

		public bool DisposeItem(Item i)
		{
			return false;
		}

		public int PutItem(Item item)
		{
			return 0;
		}

		public int PutItemWithIndex(Item item, int putIndex)
		{
			return 0;
		}

		public Item[] SetCapacity(int capacity)
		{
			return null;
		}

		public int GetItemIndexByTid(int tid)
		{
			return 0;
		}

		public void Update(int dt)
		{
		}

		public void Serialize(MergeBag data)
		{
		}

		public void Deserialize(MergeBag data, Dictionary<int, Item> items)
		{
		}

		public void _Shrink()
		{
		}

		public void TryAddRedPointItem(int id)
		{
		}

		public void TryRemoveRedPointItem(int id)
		{
		}

		public void TryClearRedPoint()
		{
		}

		public bool NeedRedPoint()
		{
			return false;
		}
	}
}
