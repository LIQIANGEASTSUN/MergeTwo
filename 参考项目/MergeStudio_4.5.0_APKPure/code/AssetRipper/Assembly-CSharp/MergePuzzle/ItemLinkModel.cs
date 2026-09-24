using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[Serializable]
	public class ItemLinkModel
	{
		[SerializeField]
		public int ChainIndex;

		public int LinkIndex;

		public int ArchiveLevel;

		public int UnlockLevel;

		public int SpawnerSetId;

		public bool SpawnerArchiveRemovable;

		public List<int> ItemSetIdList;

		[NonSerialized]
		public ItemLinkID? _cachedLinkID;

		public ItemLinkID LinkID => default(ItemLinkID);

		public int GetChainIndex()
		{
			return 0;
		}

		public void SetChainIndex(int chainIndex)
		{
		}

		public bool ContainsItemSet(int itemSetId)
		{
			return false;
		}

		public bool AddItemSet(int itemSetId)
		{
			return false;
		}

		public bool RemoveItemSet(int itemSetId)
		{
			return false;
		}

		public List<string> Validate()
		{
			return null;
		}

		public string GetFirebaseCodeName()
		{
			return null;
		}
	}
}
