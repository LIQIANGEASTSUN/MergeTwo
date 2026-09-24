using System;
using System.Collections.Generic;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageDictionary<TKey, TValue> : Dictionary<TKey, TValue>
	{
		public bool SyncForce { get; set; }

		public bool SyncForceRemote { get; set; }

		public new TValue this[TKey key]
		{
			get
			{
				return default(TValue);
			}
			set
			{
			}
		}

		public StorageDictionary(bool syncForce = false, bool syncForceRemote = false)
		{
		}

		public void OnStorageChanged()
		{
		}

		public new void Add(TKey key, TValue value)
		{
		}

		public new void Clear()
		{
		}

		public new bool Remove(TKey key)
		{
			return false;
		}
	}
}
