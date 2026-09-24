using System;
using System.Collections.Generic;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageList<TValue> : List<TValue>
	{
		public bool SyncForce { get; set; }

		public bool SyncForceRemote { get; set; }

		public new TValue this[int index]
		{
			get
			{
				return default(TValue);
			}
			set
			{
			}
		}

		public StorageList(bool syncForce = false, bool syncForceRemote = false)
		{
		}

		public void OnStorageChanged()
		{
		}

		public new void Add(TValue item)
		{
		}

		public new void AddRange(IEnumerable<TValue> collection)
		{
		}

		public new void Clear()
		{
		}

		public new List<TOutput> ConvertAll<TOutput>(Converter<TValue, TOutput> converter)
		{
			return null;
		}

		public new void Insert(int index, TValue item)
		{
		}

		public new void InsertRange(int index, IEnumerable<TValue> collection)
		{
		}

		public new bool Remove(TValue item)
		{
			return false;
		}

		public new int RemoveAll(Predicate<TValue> match)
		{
			return 0;
		}

		public new void RemoveAt(int index)
		{
		}

		public new void RemoveRange(int index, int count)
		{
		}

		public new void Reverse()
		{
		}

		public new void Sort(Comparison<TValue> comparison)
		{
		}
	}
}
